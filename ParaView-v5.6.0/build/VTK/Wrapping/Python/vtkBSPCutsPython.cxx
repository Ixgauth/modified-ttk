// python wrapper for vtkBSPCuts
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
#include "vtkBSPCuts.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBSPCuts(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkBSPCuts_ClassNew(); }

#ifndef DECLARED_PyvtkDataObject_ClassNew
extern "C" { PyObject *PyvtkDataObject_ClassNew(); }
#define DECLARED_PyvtkDataObject_ClassNew
#endif

static const char *PyvtkBSPCuts_Doc =
  "vtkBSPCuts - This class represents an axis-aligned Binary Spatial\n   Partitioning of a 3D space.\n\n"
  "Superclass: vtkDataObject\n\n"
  "This class converts between the vtkKdTree\n"
  "   representation of a tree of vtkKdNodes (used by\n"
  "vtkDistributedDataFilter)\n"
  "   and a compact array representation that might be provided by a\n"
  "   graph partitioning library like Zoltan.  Such a representation\n"
  "   could be used in message passing.\n\n"
  "@sa\n"
  "     vtkKdTree vtkKdNode vtkDistributedDataFilter\n\n";


static PyObject *
PyvtkBSPCuts_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBSPCuts::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBSPCuts_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPCuts *op = static_cast<vtkBSPCuts *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBSPCuts::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBSPCuts_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBSPCuts *tempr = vtkBSPCuts::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBSPCuts_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPCuts *op = static_cast<vtkBSPCuts *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBSPCuts *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBSPCuts::NewInstance());

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
PyvtkBSPCuts_CreateCuts_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateCuts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPCuts *op = static_cast<vtkBSPCuts *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(2*size2);
  int *temp2 = store2.Data();
  int *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<int> store4(2*size4);
  int *temp4 = store4.Data();
  int *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  size_t size5 = ap.GetArgSize(5);
  vtkPythonArgs::Array<int> store5(2*size5);
  int *temp5 = store5.Data();
  int *save5 = (size5 == 0 ? nullptr : temp5 + size5);
  size_t size6 = ap.GetArgSize(6);
  vtkPythonArgs::Array<double> store6(2*size6);
  double *temp6 = store6.Data();
  double *save6 = (size6 == 0 ? nullptr : temp6 + size6);
  size_t size7 = ap.GetArgSize(7);
  vtkPythonArgs::Array<double> store7(2*size7);
  double *temp7 = store7.Data();
  double *save7 = (size7 == 0 ? nullptr : temp7 + size7);
  size_t size8 = ap.GetArgSize(8);
  vtkPythonArgs::Array<int> store8(2*size8);
  int *temp8 = store8.Data();
  int *save8 = (size8 == 0 ? nullptr : temp8 + size8);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(9) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetArray(temp6, size6) &&
      ap.GetArray(temp7, size7) &&
      ap.GetArray(temp8, size8))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp2, save2, size2);
    ap.Save(temp3, save3, size3);
    ap.Save(temp4, save4, size4);
    ap.Save(temp5, save5, size5);
    ap.Save(temp6, save6, size6);
    ap.Save(temp7, save7, size7);
    ap.Save(temp8, save8, size8);

    if (ap.IsBound())
    {
      op->CreateCuts(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
    }
    else
    {
      op->vtkBSPCuts::CreateCuts(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
    }

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

    if (ap.HasChanged(temp8, save8, size8) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(8, temp8, size8);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBSPCuts_CreateCuts_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateCuts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPCuts *op = static_cast<vtkBSPCuts *>(vp);

  vtkKdNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkKdNode"))
  {
    if (ap.IsBound())
    {
      op->CreateCuts(temp0);
    }
    else
    {
      op->vtkBSPCuts::CreateCuts(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBSPCuts_CreateCuts(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 9:
      return PyvtkBSPCuts_CreateCuts_s1(self, args);
    case 1:
      return PyvtkBSPCuts_CreateCuts_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "CreateCuts");
  return nullptr;
}



static PyObject *
PyvtkBSPCuts_GetKdNodeTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKdNodeTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPCuts *op = static_cast<vtkBSPCuts *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkKdNode *tempr = (ap.IsBound() ?
      op->GetKdNodeTree() :
      op->vtkBSPCuts::GetKdNodeTree());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBSPCuts_GetNumberOfCuts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCuts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPCuts *op = static_cast<vtkBSPCuts *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCuts() :
      op->vtkBSPCuts::GetNumberOfCuts());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBSPCuts_GetArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPCuts *op = static_cast<vtkBSPCuts *>(vp);

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<int> store3(2*size3);
  int *temp3 = store3.Data();
  int *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<int> store4(2*size4);
  int *temp4 = store4.Data();
  int *save4 = (size4 == 0 ? nullptr : temp4 + size4);
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

  if (op && ap.CheckArgCount(8) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetArray(temp6, size6) &&
      ap.GetArray(temp7, size7))
  {
    ap.Save(temp1, save1, size1);
    ap.Save(temp2, save2, size2);
    ap.Save(temp3, save3, size3);
    ap.Save(temp4, save4, size4);
    ap.Save(temp5, save5, size5);
    ap.Save(temp6, save6, size6);
    ap.Save(temp7, save7, size7);

    int tempr = (ap.IsBound() ?
      op->GetArrays(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7) :
      op->vtkBSPCuts::GetArrays(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7));

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
PyvtkBSPCuts_Equals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Equals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPCuts *op = static_cast<vtkBSPCuts *>(vp);

  vtkBSPCuts *temp0 = nullptr;
  double temp1 = 0.0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkBSPCuts") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    int tempr = (ap.IsBound() ?
      op->Equals(temp0, temp1) :
      op->vtkBSPCuts::Equals(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBSPCuts_PrintTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrintTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPCuts *op = static_cast<vtkBSPCuts *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PrintTree();
    }
    else
    {
      op->vtkBSPCuts::PrintTree();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBSPCuts_PrintArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrintArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPCuts *op = static_cast<vtkBSPCuts *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PrintArrays();
    }
    else
    {
      op->vtkBSPCuts::PrintArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBSPCuts_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    vtkBSPCuts *tempr = vtkBSPCuts::GetData(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkBSPCuts_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkBSPCuts *tempr = vtkBSPCuts::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkBSPCuts_GetData_Methods[] = {
  {nullptr, PyvtkBSPCuts_GetData_s1, METH_VARARGS | METH_STATIC,
   "V *vtkInformation"},
  {nullptr, PyvtkBSPCuts_GetData_s2, METH_VARARGS | METH_STATIC,
   "V|i *vtkInformationVector"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkBSPCuts_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkBSPCuts_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkBSPCuts_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return nullptr;
}



static PyObject *
PyvtkBSPCuts_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPCuts *op = static_cast<vtkBSPCuts *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkBSPCuts::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBSPCuts_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPCuts *op = static_cast<vtkBSPCuts *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkBSPCuts::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBSPCuts_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPCuts *op = static_cast<vtkBSPCuts *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkBSPCuts::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkBSPCuts_Methods[] = {
  {"IsTypeOf", PyvtkBSPCuts_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkBSPCuts_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkBSPCuts_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkBSPCuts\nC++: static vtkBSPCuts *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkBSPCuts_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkBSPCuts\nC++: vtkBSPCuts *NewInstance()\n\n"},
  {"CreateCuts", PyvtkBSPCuts_CreateCuts, METH_VARARGS,
   "V.CreateCuts([float, ...], int, [int, ...], [float, ...], [int,\n    ...], [int, ...], [float, ...], [float, ...], [int, ...])\nC++: void CreateCuts(double *bounds, int ncuts, int *dim,\n    double *coord, int *lower, int *upper, double *lowerDataCoord,\n     double *upperDataCoord, int *npoints)\nV.CreateCuts(vtkKdNode)\nC++: void CreateCuts(vtkKdNode *kd)\n\nInitialize the cuts with arrays of information.  This type of\ninformation would be obtained from a graph partitioning software\npackage like Zoltan.\n\n* bounds - the bounds (xmin, xmax, ymin, ymax, zmin, zmax) of the\n* space being partitioned\n* ncuts - the number cuts, also the size of the following arrays\n* dim   - the dimension along which the cut is made (x/y/z -\n  0/1/2)\n* coord - the location of the cut along the axis\n* lower - array index for the lower region bounded by the cut\n* upper - array index for the upper region bounded by the cut\n* lowerDataCoord - optional upper bound of the data in the lower\n  region\n* upperDataCoord - optional lower bound of the data in the upper\n  region\n* npoints - optional number of points in the spatial region\n"},
  {"GetKdNodeTree", PyvtkBSPCuts_GetKdNodeTree, METH_VARARGS,
   "V.GetKdNodeTree() -> vtkKdNode\nC++: vtkKdNode *GetKdNodeTree()\n\nReturn a tree of vtkKdNode's representing the cuts specified in\nthis object.  This is our copy, don't delete it.\n"},
  {"GetNumberOfCuts", PyvtkBSPCuts_GetNumberOfCuts, METH_VARARGS,
   "V.GetNumberOfCuts() -> int\nC++: virtual int GetNumberOfCuts()\n\nGet the number of cuts in the partitioning, which also the size\nof the arrays in the array representation of the partitioning.\n"},
  {"GetArrays", PyvtkBSPCuts_GetArrays, METH_VARARGS,
   "V.GetArrays(int, [int, ...], [float, ...], [int, ...], [int, ...],\n     [float, ...], [float, ...], [int, ...]) -> int\nC++: int GetArrays(int len, int *dim, double *coord, int *lower,\n    int *upper, double *lowerDataCoord, double *upperDataCoord,\n    int *npoints)\n\nGet the arrays representing the cuts in the partitioning.\n"},
  {"Equals", PyvtkBSPCuts_Equals, METH_VARARGS,
   "V.Equals(vtkBSPCuts, float) -> int\nC++: int Equals(vtkBSPCuts *other, double tolerance=0.0)\n\nCompare these cuts with those of the other tree.  Returns true if\nthe two trees are the same.\n"},
  {"PrintTree", PyvtkBSPCuts_PrintTree, METH_VARARGS,
   "V.PrintTree()\nC++: void PrintTree()\n\n"},
  {"PrintArrays", PyvtkBSPCuts_PrintArrays, METH_VARARGS,
   "V.PrintArrays()\nC++: void PrintArrays()\n\n"},
  {"GetData", PyvtkBSPCuts_GetData, METH_VARARGS,
   "V.GetData(vtkInformation) -> vtkBSPCuts\nC++: static vtkBSPCuts *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkBSPCuts\nC++: static vtkBSPCuts *GetData(vtkInformationVector *v, int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {"Initialize", PyvtkBSPCuts_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: void Initialize() override;\n\nRestore data object to initial state,\n"},
  {"ShallowCopy", PyvtkBSPCuts_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkDataObject)\nC++: void ShallowCopy(vtkDataObject *src) override;\n\nShallow copy.  These copy the data, but not any of the pipeline\nconnections.\n"},
  {"DeepCopy", PyvtkBSPCuts_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkDataObject)\nC++: void DeepCopy(vtkDataObject *src) override;\n\nShallow copy.  These copy the data, but not any of the pipeline\nconnections.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkBSPCuts_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkBSPCuts", // tp_name
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
  PyvtkBSPCuts_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBSPCuts_StaticNew()
{
  return vtkBSPCuts::New();
}

PyObject *PyvtkBSPCuts_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkBSPCuts_Type, PyvtkBSPCuts_Methods,
    "vtkBSPCuts",
 &PyvtkBSPCuts_StaticNew);

  PyTypeObject *pytype = &PyvtkBSPCuts_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkBSPCuts(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBSPCuts_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBSPCuts", o) != 0)
  {
    Py_DECREF(o);
  }

}

