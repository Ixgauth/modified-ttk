// python wrapper for vtkXdmfReader
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
#include "vtkXdmfReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkXdmfReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkXdmfReader_ClassNew(); }

#ifndef DECLARED_PyvtkDataReader_ClassNew
extern "C" { PyObject *PyvtkDataReader_ClassNew(); }
#define DECLARED_PyvtkDataReader_ClassNew
#endif

static const char *PyvtkXdmfReader_Doc =
  "vtkXdmfReader - Reads eXtensible Data Model and Formatfiles\n\n"
  "Superclass: vtkDataReader\n\n"
  "vtkXdmfReader reads XDMF data files so that they can be visualized\n"
  "using VTK. The output data produced by this reader depends on the\n"
  "number of grids in the data file. If the data file has a single\n"
  "domain with a single grid, then the output type is a vtkDataSet\n"
  "subclass of the appropriate type, otherwise it's a\n"
  "vtkMultiBlockDataSet.\n\n"
  "Refer to vtkDataReader which provides many methods for controlling\n"
  "the reading of the data file.\n"
  "@warning\n"
  "Uses the XDMF API (http://www.xdmf.org)\n"
  "@sa\n"
  "vtkDataReader\n\n";


static PyObject *
PyvtkXdmfReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkXdmfReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXdmfReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkXdmfReader *tempr = vtkXdmfReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXdmfReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXdmfReader::NewInstance());

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
PyvtkXdmfReader_SetDomainName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDomainName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDomainName(temp0);
    }
    else
    {
      op->vtkXdmfReader::SetDomainName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfReader_GetDomainName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDomainName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetDomainName() :
      op->vtkXdmfReader::GetDomainName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfReader_GetNumberOfPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointArrays() :
      op->vtkXdmfReader::GetNumberOfPointArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfReader_GetPointArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPointArrayName(temp0) :
      op->vtkXdmfReader::GetPointArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfReader_GetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointArrayStatus(temp0) :
      op->vtkXdmfReader::GetPointArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfReader_SetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPointArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkXdmfReader::SetPointArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfReader_GetNumberOfCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCellArrays() :
      op->vtkXdmfReader::GetNumberOfCellArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfReader_GetCellArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetCellArrayName(temp0) :
      op->vtkXdmfReader::GetCellArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfReader_SetCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetCellArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkXdmfReader::SetCellArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfReader_GetCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellArrayStatus(temp0) :
      op->vtkXdmfReader::GetCellArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfReader_GetNumberOfGrids(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGrids");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfGrids() :
      op->vtkXdmfReader::GetNumberOfGrids());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfReader_GetGridName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetGridName(temp0) :
      op->vtkXdmfReader::GetGridName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfReader_SetGridStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetGridStatus(temp0, temp1);
    }
    else
    {
      op->vtkXdmfReader::SetGridStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfReader_GetGridStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGridStatus(temp0) :
      op->vtkXdmfReader::GetGridStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfReader_GetNumberOfSets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSets() :
      op->vtkXdmfReader::GetNumberOfSets());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfReader_GetSetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetSetName(temp0) :
      op->vtkXdmfReader::GetSetName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfReader_SetSetStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSetStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSetStatus(temp0, temp1);
    }
    else
    {
      op->vtkXdmfReader::SetSetStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfReader_GetSetStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSetStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSetStatus(temp0) :
      op->vtkXdmfReader::GetSetStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfReader_GetNumberOfSetArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSetArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSetArrays() :
      op->vtkXdmfReader::GetNumberOfSetArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfReader_GetSetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetSetArrayName(temp0) :
      op->vtkXdmfReader::GetSetArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfReader_GetSetArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSetArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSetArrayStatus(temp0) :
      op->vtkXdmfReader::GetSetArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfReader_SetStride_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStride");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetStride(temp0, temp1, temp2);
    }
    else
    {
      op->vtkXdmfReader::SetStride(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkXdmfReader_SetStride_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStride");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetStride(temp0);
    }
    else
    {
      op->vtkXdmfReader::SetStride(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkXdmfReader_SetStride(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkXdmfReader_SetStride_s1(self, args);
    case 1:
      return PyvtkXdmfReader_SetStride_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetStride");
  return nullptr;
}



static PyObject *
PyvtkXdmfReader_GetStride(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStride");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetStride() :
      op->vtkXdmfReader::GetStride());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->CanReadFile(temp0) :
      op->vtkXdmfReader::CanReadFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfReader_GetSILUpdateStamp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSILUpdateStamp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSILUpdateStamp() :
      op->vtkXdmfReader::GetSILUpdateStamp());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfReader_GetSIL(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSIL");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfReader *op = static_cast<vtkXdmfReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGraph *tempr = (ap.IsBound() ?
      op->GetSIL() :
      op->vtkXdmfReader::GetSIL());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkXdmfReader_Methods[] = {
  {"IsTypeOf", PyvtkXdmfReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkXdmfReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkXdmfReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkXdmfReader\nC++: static vtkXdmfReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkXdmfReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkXdmfReader\nC++: vtkXdmfReader *NewInstance()\n\n"},
  {"SetDomainName", PyvtkXdmfReader_SetDomainName, METH_VARARGS,
   "V.SetDomainName(string)\nC++: virtual void SetDomainName(const char *_arg)\n\nSet the active domain. Only one domain can be selected at a time.\nBy default the first domain in the datafile is chosen. Setting\nthis to null results in the domain being automatically chosen.\nNote that if the domain name is changed, you should explicitly\ncall UpdateInformation() before accessing information about\ngrids, data arrays etc.\n"},
  {"GetDomainName", PyvtkXdmfReader_GetDomainName, METH_VARARGS,
   "V.GetDomainName() -> string\nC++: virtual char *GetDomainName()\n\nSet the active domain. Only one domain can be selected at a time.\nBy default the first domain in the datafile is chosen. Setting\nthis to null results in the domain being automatically chosen.\nNote that if the domain name is changed, you should explicitly\ncall UpdateInformation() before accessing information about\ngrids, data arrays etc.\n"},
  {"GetNumberOfPointArrays", PyvtkXdmfReader_GetNumberOfPointArrays, METH_VARARGS,
   "V.GetNumberOfPointArrays() -> int\nC++: int GetNumberOfPointArrays()\n\nDescription: Returns the name for the active domain. Note that\nthis may be different from what GetDomainName() returns if\nDomainName is nullptr or invalid.\n\nGet information about point-based arrays. As is typical with\nreaders this in only valid after the filename is set and\nUpdateInformation() has been called.\n"},
  {"GetPointArrayName", PyvtkXdmfReader_GetPointArrayName, METH_VARARGS,
   "V.GetPointArrayName(int) -> string\nC++: const char *GetPointArrayName(int index)\n\nReturns the name of point array at the give index. Returns\nnullptr if index is invalid.\n"},
  {"GetPointArrayStatus", PyvtkXdmfReader_GetPointArrayStatus, METH_VARARGS,
   "V.GetPointArrayStatus(string) -> int\nC++: int GetPointArrayStatus(const char *name)\n\nGet/Set the point array status.\n"},
  {"SetPointArrayStatus", PyvtkXdmfReader_SetPointArrayStatus, METH_VARARGS,
   "V.SetPointArrayStatus(string, int)\nC++: void SetPointArrayStatus(const char *name, int status)\n\nGet/Set the point array status.\n"},
  {"GetNumberOfCellArrays", PyvtkXdmfReader_GetNumberOfCellArrays, METH_VARARGS,
   "V.GetNumberOfCellArrays() -> int\nC++: int GetNumberOfCellArrays()\n\nGet information about cell-based arrays.  As is typical with\nreaders this in only valid after the filename is set and\nUpdateInformation() has been called.\n"},
  {"GetCellArrayName", PyvtkXdmfReader_GetCellArrayName, METH_VARARGS,
   "V.GetCellArrayName(int) -> string\nC++: const char *GetCellArrayName(int index)\n\nGet information about cell-based arrays.  As is typical with\nreaders this in only valid after the filename is set and\nUpdateInformation() has been called.\n"},
  {"SetCellArrayStatus", PyvtkXdmfReader_SetCellArrayStatus, METH_VARARGS,
   "V.SetCellArrayStatus(string, int)\nC++: void SetCellArrayStatus(const char *name, int status)\n\nGet information about cell-based arrays.  As is typical with\nreaders this in only valid after the filename is set and\nUpdateInformation() has been called.\n"},
  {"GetCellArrayStatus", PyvtkXdmfReader_GetCellArrayStatus, METH_VARARGS,
   "V.GetCellArrayStatus(string) -> int\nC++: int GetCellArrayStatus(const char *name)\n\nGet information about cell-based arrays.  As is typical with\nreaders this in only valid after the filename is set and\nUpdateInformation() has been called.\n"},
  {"GetNumberOfGrids", PyvtkXdmfReader_GetNumberOfGrids, METH_VARARGS,
   "V.GetNumberOfGrids() -> int\nC++: int GetNumberOfGrids()\n\nGet/Set information about grids. As is typical with readers this\nis valid only after the filename as been set and\nUpdateInformation() has been called.\n"},
  {"GetGridName", PyvtkXdmfReader_GetGridName, METH_VARARGS,
   "V.GetGridName(int) -> string\nC++: const char *GetGridName(int index)\n\nGet/Set information about grids. As is typical with readers this\nis valid only after the filename as been set and\nUpdateInformation() has been called.\n"},
  {"SetGridStatus", PyvtkXdmfReader_SetGridStatus, METH_VARARGS,
   "V.SetGridStatus(string, int)\nC++: void SetGridStatus(const char *gridname, int status)\n\nGet/Set information about grids. As is typical with readers this\nis valid only after the filename as been set and\nUpdateInformation() has been called.\n"},
  {"GetGridStatus", PyvtkXdmfReader_GetGridStatus, METH_VARARGS,
   "V.GetGridStatus(string) -> int\nC++: int GetGridStatus(const char *gridname)\n\nGet/Set information about grids. As is typical with readers this\nis valid only after the filename as been set and\nUpdateInformation() has been called.\n"},
  {"GetNumberOfSets", PyvtkXdmfReader_GetNumberOfSets, METH_VARARGS,
   "V.GetNumberOfSets() -> int\nC++: int GetNumberOfSets()\n\nGet/Set information about sets. As is typical with readers this\nis valid only after the filename as been set and\nUpdateInformation() has been called. Note that sets with non-zero\nGhost value are not treated as sets that the user can select\nusing this API.\n"},
  {"GetSetName", PyvtkXdmfReader_GetSetName, METH_VARARGS,
   "V.GetSetName(int) -> string\nC++: const char *GetSetName(int index)\n\nGet/Set information about sets. As is typical with readers this\nis valid only after the filename as been set and\nUpdateInformation() has been called. Note that sets with non-zero\nGhost value are not treated as sets that the user can select\nusing this API.\n"},
  {"SetSetStatus", PyvtkXdmfReader_SetSetStatus, METH_VARARGS,
   "V.SetSetStatus(string, int)\nC++: void SetSetStatus(const char *gridname, int status)\n\nGet/Set information about sets. As is typical with readers this\nis valid only after the filename as been set and\nUpdateInformation() has been called. Note that sets with non-zero\nGhost value are not treated as sets that the user can select\nusing this API.\n"},
  {"GetSetStatus", PyvtkXdmfReader_GetSetStatus, METH_VARARGS,
   "V.GetSetStatus(string) -> int\nC++: int GetSetStatus(const char *gridname)\n\nGet/Set information about sets. As is typical with readers this\nis valid only after the filename as been set and\nUpdateInformation() has been called. Note that sets with non-zero\nGhost value are not treated as sets that the user can select\nusing this API.\n"},
  {"GetNumberOfSetArrays", PyvtkXdmfReader_GetNumberOfSetArrays, METH_VARARGS,
   "V.GetNumberOfSetArrays() -> int\nC++: int GetNumberOfSetArrays()\n\nThese methods are provided to make it easier to use the Sets in\nParaView.\n"},
  {"GetSetArrayName", PyvtkXdmfReader_GetSetArrayName, METH_VARARGS,
   "V.GetSetArrayName(int) -> string\nC++: const char *GetSetArrayName(int index)\n\n"},
  {"GetSetArrayStatus", PyvtkXdmfReader_GetSetArrayStatus, METH_VARARGS,
   "V.GetSetArrayStatus(string) -> int\nC++: int GetSetArrayStatus(const char *name)\n\n"},
  {"SetStride", PyvtkXdmfReader_SetStride, METH_VARARGS,
   "V.SetStride(int, int, int)\nC++: void SetStride(int, int, int)\nV.SetStride((int, int, int))\nC++: void SetStride(int a[3])\n\n"},
  {"GetStride", PyvtkXdmfReader_GetStride, METH_VARARGS,
   "V.GetStride() -> (int, int, int)\nC++: int *GetStride()\n\n"},
  {"CanReadFile", PyvtkXdmfReader_CanReadFile, METH_VARARGS,
   "V.CanReadFile(string) -> int\nC++: virtual int CanReadFile(const char *filename)\n\nDetermine if the file can be read with this reader.\n"},
  {"GetSILUpdateStamp", PyvtkXdmfReader_GetSILUpdateStamp, METH_VARARGS,
   "V.GetSILUpdateStamp() -> int\nC++: virtual int GetSILUpdateStamp()\n\nEvery time the SIL is updated a this will return a different\nvalue.\n"},
  {"GetSIL", PyvtkXdmfReader_GetSIL, METH_VARARGS,
   "V.GetSIL() -> vtkGraph\nC++: virtual vtkGraph *GetSIL()\n\nSIL describes organization of/relationships between\nclassifications eg. blocks/materials/hierarchies.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkXdmfReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOXdmf2Python.vtkXdmfReader", // tp_name
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
  PyvtkXdmfReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkXdmfReader_StaticNew()
{
  return vtkXdmfReader::New();
}

PyObject *PyvtkXdmfReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkXdmfReader_Type, PyvtkXdmfReader_Methods,
    "vtkXdmfReader",
 &PyvtkXdmfReader_StaticNew);

  PyTypeObject *pytype = &PyvtkXdmfReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataReader_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkXdmfReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkXdmfReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkXdmfReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

