// python wrapper for vtkVPICReader
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
#include "vtkVPICReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkVPICReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkVPICReader_ClassNew(); }

#ifndef DECLARED_PyvtkImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkImageAlgorithm_ClassNew
#endif

static const char *PyvtkVPICReader_Doc =
  "vtkVPICReader - class for reading VPIC data files\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "vtkDataReader is a helper superclass that reads the vtk data file\n"
  "header, dataset type, and attribute data (point and cell attributes\n"
  "such as scalars, vectors, normals, etc.) from a vtk data file.  See\n"
  "text for the format of the various vtk file types.\n\n"
  "@sa\n"
  "vtkPolyDataReader vtkStructuredPointsReader vtkStructuredGridReader\n"
  "vtkUnstructuredGridReader vtkRectilinearGridReader\n\n";


static PyObject *
PyvtkVPICReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkVPICReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVPICReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVPICReader *op = static_cast<vtkVPICReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVPICReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVPICReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkVPICReader *tempr = vtkVPICReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVPICReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVPICReader *op = static_cast<vtkVPICReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVPICReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVPICReader::NewInstance());

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
PyvtkVPICReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVPICReader *op = static_cast<vtkVPICReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileName(temp0);
    }
    else
    {
      op->vtkVPICReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVPICReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVPICReader *op = static_cast<vtkVPICReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkVPICReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVPICReader_SetStride_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStride");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVPICReader *op = static_cast<vtkVPICReader *>(vp);

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
      op->vtkVPICReader::SetStride(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVPICReader_SetStride_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStride");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVPICReader *op = static_cast<vtkVPICReader *>(vp);

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
      op->vtkVPICReader::SetStride(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVPICReader_SetStride(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkVPICReader_SetStride_s1(self, args);
    case 1:
      return PyvtkVPICReader_SetStride_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetStride");
  return nullptr;
}



static PyObject *
PyvtkVPICReader_GetStride(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStride");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVPICReader *op = static_cast<vtkVPICReader *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetStride() :
      op->vtkVPICReader::GetStride());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkVPICReader_SetXExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVPICReader *op = static_cast<vtkVPICReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetXExtent(temp0, temp1);
    }
    else
    {
      op->vtkVPICReader::SetXExtent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVPICReader_SetXExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVPICReader *op = static_cast<vtkVPICReader *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetXExtent(temp0);
    }
    else
    {
      op->vtkVPICReader::SetXExtent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVPICReader_SetXExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkVPICReader_SetXExtent_s1(self, args);
    case 1:
      return PyvtkVPICReader_SetXExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetXExtent");
  return nullptr;
}



static PyObject *
PyvtkVPICReader_SetYExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVPICReader *op = static_cast<vtkVPICReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetYExtent(temp0, temp1);
    }
    else
    {
      op->vtkVPICReader::SetYExtent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVPICReader_SetYExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVPICReader *op = static_cast<vtkVPICReader *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetYExtent(temp0);
    }
    else
    {
      op->vtkVPICReader::SetYExtent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVPICReader_SetYExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkVPICReader_SetYExtent_s1(self, args);
    case 1:
      return PyvtkVPICReader_SetYExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetYExtent");
  return nullptr;
}



static PyObject *
PyvtkVPICReader_SetZExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVPICReader *op = static_cast<vtkVPICReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetZExtent(temp0, temp1);
    }
    else
    {
      op->vtkVPICReader::SetZExtent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVPICReader_SetZExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVPICReader *op = static_cast<vtkVPICReader *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetZExtent(temp0);
    }
    else
    {
      op->vtkVPICReader::SetZExtent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVPICReader_SetZExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkVPICReader_SetZExtent_s1(self, args);
    case 1:
      return PyvtkVPICReader_SetZExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetZExtent");
  return nullptr;
}



static PyObject *
PyvtkVPICReader_GetXLayout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXLayout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVPICReader *op = static_cast<vtkVPICReader *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetXLayout() :
      op->vtkVPICReader::GetXLayout());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkVPICReader_GetYLayout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYLayout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVPICReader *op = static_cast<vtkVPICReader *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetYLayout() :
      op->vtkVPICReader::GetYLayout());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkVPICReader_GetZLayout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZLayout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVPICReader *op = static_cast<vtkVPICReader *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetZLayout() :
      op->vtkVPICReader::GetZLayout());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkVPICReader_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVPICReader *op = static_cast<vtkVPICReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkVPICReader::GetOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVPICReader_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVPICReader *op = static_cast<vtkVPICReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetOutput(temp0) :
      op->vtkVPICReader::GetOutput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVPICReader_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkVPICReader_GetOutput_s1(self, args);
    case 1:
      return PyvtkVPICReader_GetOutput_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return nullptr;
}



static PyObject *
PyvtkVPICReader_GetNumberOfPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVPICReader *op = static_cast<vtkVPICReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointArrays() :
      op->vtkVPICReader::GetNumberOfPointArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVPICReader_GetPointArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVPICReader *op = static_cast<vtkVPICReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPointArrayName(temp0) :
      op->vtkVPICReader::GetPointArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVPICReader_GetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVPICReader *op = static_cast<vtkVPICReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointArrayStatus(temp0) :
      op->vtkVPICReader::GetPointArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVPICReader_SetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVPICReader *op = static_cast<vtkVPICReader *>(vp);

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
      op->vtkVPICReader::SetPointArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVPICReader_DisableAllPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAllPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVPICReader *op = static_cast<vtkVPICReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisableAllPointArrays();
    }
    else
    {
      op->vtkVPICReader::DisableAllPointArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVPICReader_EnableAllPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAllPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVPICReader *op = static_cast<vtkVPICReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableAllPointArrays();
    }
    else
    {
      op->vtkVPICReader::EnableAllPointArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkVPICReader_Methods[] = {
  {"IsTypeOf", PyvtkVPICReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkVPICReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkVPICReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkVPICReader\nC++: static vtkVPICReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkVPICReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkVPICReader\nC++: vtkVPICReader *NewInstance()\n\n"},
  {"SetFileName", PyvtkVPICReader_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *_arg)\n\nSpecify file name of VPIC data file to read.\n"},
  {"GetFileName", PyvtkVPICReader_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nSpecify file name of VPIC data file to read.\n"},
  {"SetStride", PyvtkVPICReader_SetStride, METH_VARARGS,
   "V.SetStride(int, int, int)\nC++: void SetStride(int, int, int)\nV.SetStride((int, int, int))\nC++: void SetStride(int a[3])\n\n"},
  {"GetStride", PyvtkVPICReader_GetStride, METH_VARARGS,
   "V.GetStride() -> (int, int, int)\nC++: int *GetStride()\n\n"},
  {"SetXExtent", PyvtkVPICReader_SetXExtent, METH_VARARGS,
   "V.SetXExtent(int, int)\nC++: void SetXExtent(int, int)\nV.SetXExtent((int, int))\nC++: void SetXExtent(int a[2])\n\n"},
  {"SetYExtent", PyvtkVPICReader_SetYExtent, METH_VARARGS,
   "V.SetYExtent(int, int)\nC++: void SetYExtent(int, int)\nV.SetYExtent((int, int))\nC++: void SetYExtent(int a[2])\n\n"},
  {"SetZExtent", PyvtkVPICReader_SetZExtent, METH_VARARGS,
   "V.SetZExtent(int, int)\nC++: void SetZExtent(int, int)\nV.SetZExtent((int, int))\nC++: void SetZExtent(int a[2])\n\n"},
  {"GetXLayout", PyvtkVPICReader_GetXLayout, METH_VARARGS,
   "V.GetXLayout() -> (int, int)\nC++: int *GetXLayout()\n\n"},
  {"GetYLayout", PyvtkVPICReader_GetYLayout, METH_VARARGS,
   "V.GetYLayout() -> (int, int)\nC++: int *GetYLayout()\n\n"},
  {"GetZLayout", PyvtkVPICReader_GetZLayout, METH_VARARGS,
   "V.GetZLayout() -> (int, int)\nC++: int *GetZLayout()\n\n"},
  {"GetOutput", PyvtkVPICReader_GetOutput, METH_VARARGS,
   "V.GetOutput() -> vtkImageData\nC++: vtkImageData *GetOutput()\nV.GetOutput(int) -> vtkImageData\nC++: vtkImageData *GetOutput(int index)\n\nGet the reader's output\n"},
  {"GetNumberOfPointArrays", PyvtkVPICReader_GetNumberOfPointArrays, METH_VARARGS,
   "V.GetNumberOfPointArrays() -> int\nC++: int GetNumberOfPointArrays()\n\nThe following methods allow selective reading of solutions\nfields. By default, ALL data fields on the nodes are read, but\nthis can be modified.\n"},
  {"GetPointArrayName", PyvtkVPICReader_GetPointArrayName, METH_VARARGS,
   "V.GetPointArrayName(int) -> string\nC++: const char *GetPointArrayName(int index)\n\nThe following methods allow selective reading of solutions\nfields. By default, ALL data fields on the nodes are read, but\nthis can be modified.\n"},
  {"GetPointArrayStatus", PyvtkVPICReader_GetPointArrayStatus, METH_VARARGS,
   "V.GetPointArrayStatus(string) -> int\nC++: int GetPointArrayStatus(const char *name)\n\nThe following methods allow selective reading of solutions\nfields. By default, ALL data fields on the nodes are read, but\nthis can be modified.\n"},
  {"SetPointArrayStatus", PyvtkVPICReader_SetPointArrayStatus, METH_VARARGS,
   "V.SetPointArrayStatus(string, int)\nC++: void SetPointArrayStatus(const char *name, int status)\n\nThe following methods allow selective reading of solutions\nfields. By default, ALL data fields on the nodes are read, but\nthis can be modified.\n"},
  {"DisableAllPointArrays", PyvtkVPICReader_DisableAllPointArrays, METH_VARARGS,
   "V.DisableAllPointArrays()\nC++: void DisableAllPointArrays()\n\nThe following methods allow selective reading of solutions\nfields. By default, ALL data fields on the nodes are read, but\nthis can be modified.\n"},
  {"EnableAllPointArrays", PyvtkVPICReader_EnableAllPointArrays, METH_VARARGS,
   "V.EnableAllPointArrays()\nC++: void EnableAllPointArrays()\n\nThe following methods allow selective reading of solutions\nfields. By default, ALL data fields on the nodes are read, but\nthis can be modified.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkVPICReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOVPICPython.vtkVPICReader", // tp_name
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
  PyvtkVPICReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkVPICReader_StaticNew()
{
  return vtkVPICReader::New();
}

PyObject *PyvtkVPICReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkVPICReader_Type, PyvtkVPICReader_Methods,
    "vtkVPICReader",
 &PyvtkVPICReader_StaticNew);

  PyTypeObject *pytype = &PyvtkVPICReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImageAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkVPICReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkVPICReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkVPICReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

