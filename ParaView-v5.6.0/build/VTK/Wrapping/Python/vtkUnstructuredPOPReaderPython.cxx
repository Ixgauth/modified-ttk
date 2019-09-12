// python wrapper for vtkUnstructuredPOPReader
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
#include "vtkUnstructuredPOPReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkUnstructuredPOPReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkUnstructuredPOPReader_ClassNew(); }

#ifndef DECLARED_PyvtkUnstructuredGridAlgorithm_ClassNew
extern "C" { PyObject *PyvtkUnstructuredGridAlgorithm_ClassNew(); }
#define DECLARED_PyvtkUnstructuredGridAlgorithm_ClassNew
#endif

static const char *PyvtkUnstructuredPOPReader_Doc =
  "vtkUnstructuredPOPReader - read NetCDF files\n\n"
  "Superclass: vtkUnstructuredGridAlgorithm\n\n"
  "vtkUnstructuredPOPReader reads NetCDF POP files into a spherical\n"
  "shaped grid. The input file has topologically structured data. The\n"
  "striding and VOI are done with respect to the topologically\n"
  "structured ordering.  Additionally, the z coordinates of the output\n"
  "grid are negated so that the first slice/plane has the highest\n"
  "z-value and the last slice/plane has the lowest z-value.  Note that\n"
  "depth_t is used for the z location of the points.  For VOI and\n"
  "striding, striding is done first and then the VOI is done.  For\n"
  "example, if stride was [1, 2, 3] for a [3600, 2400, 42] grid then the\n"
  "wholeExtent would be [0, 3600, 0, 1200, 0, 14] and then a VOI of [10,\n"
  "300, 0, 1400, 2 8] would result in a whole extent of [10, 300, 0,\n"
  "1200, 2, 8] with the first point being [10, 0, 6] in the [3600, 2400,\n"
  "42] original grid.  The reader also requires a GRID.nc file in the\n"
  "same directory as the main file.  This is used to map from tripolar\n"
  "logical coordinates to lat-lon coordinates.\n\n";


static PyObject *
PyvtkUnstructuredPOPReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkUnstructuredPOPReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredPOPReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredPOPReader *op = static_cast<vtkUnstructuredPOPReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkUnstructuredPOPReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredPOPReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkUnstructuredPOPReader *tempr = vtkUnstructuredPOPReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredPOPReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredPOPReader *op = static_cast<vtkUnstructuredPOPReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnstructuredPOPReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkUnstructuredPOPReader::NewInstance());

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
PyvtkUnstructuredPOPReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredPOPReader *op = static_cast<vtkUnstructuredPOPReader *>(vp);

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
      op->vtkUnstructuredPOPReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredPOPReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredPOPReader *op = static_cast<vtkUnstructuredPOPReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkUnstructuredPOPReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredPOPReader_SetStride_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStride");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredPOPReader *op = static_cast<vtkUnstructuredPOPReader *>(vp);

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
      op->vtkUnstructuredPOPReader::SetStride(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUnstructuredPOPReader_SetStride_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStride");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredPOPReader *op = static_cast<vtkUnstructuredPOPReader *>(vp);

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
      op->vtkUnstructuredPOPReader::SetStride(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUnstructuredPOPReader_SetStride(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkUnstructuredPOPReader_SetStride_s1(self, args);
    case 1:
      return PyvtkUnstructuredPOPReader_SetStride_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetStride");
  return nullptr;
}



static PyObject *
PyvtkUnstructuredPOPReader_GetStride(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStride");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredPOPReader *op = static_cast<vtkUnstructuredPOPReader *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetStride() :
      op->vtkUnstructuredPOPReader::GetStride());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredPOPReader_SetVOI_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVOI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredPOPReader *op = static_cast<vtkUnstructuredPOPReader *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
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
      op->SetVOI(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkUnstructuredPOPReader::SetVOI(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUnstructuredPOPReader_SetVOI_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVOI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredPOPReader *op = static_cast<vtkUnstructuredPOPReader *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetVOI(temp0);
    }
    else
    {
      op->vtkUnstructuredPOPReader::SetVOI(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUnstructuredPOPReader_SetVOI(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkUnstructuredPOPReader_SetVOI_s1(self, args);
    case 1:
      return PyvtkUnstructuredPOPReader_SetVOI_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetVOI");
  return nullptr;
}



static PyObject *
PyvtkUnstructuredPOPReader_GetVOI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVOI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredPOPReader *op = static_cast<vtkUnstructuredPOPReader *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetVOI() :
      op->vtkUnstructuredPOPReader::GetVOI());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredPOPReader_GetNumberOfVariableArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVariableArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredPOPReader *op = static_cast<vtkUnstructuredPOPReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfVariableArrays() :
      op->vtkUnstructuredPOPReader::GetNumberOfVariableArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredPOPReader_GetVariableArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariableArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredPOPReader *op = static_cast<vtkUnstructuredPOPReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetVariableArrayName(temp0) :
      op->vtkUnstructuredPOPReader::GetVariableArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredPOPReader_GetVariableArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariableArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredPOPReader *op = static_cast<vtkUnstructuredPOPReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVariableArrayStatus(temp0) :
      op->vtkUnstructuredPOPReader::GetVariableArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredPOPReader_SetVariableArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariableArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredPOPReader *op = static_cast<vtkUnstructuredPOPReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetVariableArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkUnstructuredPOPReader::SetVariableArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredPOPReader_SetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredPOPReader *op = static_cast<vtkUnstructuredPOPReader *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRadius(temp0);
    }
    else
    {
      op->vtkUnstructuredPOPReader::SetRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredPOPReader_GetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredPOPReader *op = static_cast<vtkUnstructuredPOPReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadius() :
      op->vtkUnstructuredPOPReader::GetRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredPOPReader_GetVectorGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredPOPReader *op = static_cast<vtkUnstructuredPOPReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVectorGrid() :
      op->vtkUnstructuredPOPReader::GetVectorGrid());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredPOPReader_SetVerticalVelocity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVerticalVelocity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredPOPReader *op = static_cast<vtkUnstructuredPOPReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVerticalVelocity(temp0);
    }
    else
    {
      op->vtkUnstructuredPOPReader::SetVerticalVelocity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredPOPReader_GetVerticalVelocity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVerticalVelocity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredPOPReader *op = static_cast<vtkUnstructuredPOPReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetVerticalVelocity() :
      op->vtkUnstructuredPOPReader::GetVerticalVelocity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkUnstructuredPOPReader_Methods[] = {
  {"IsTypeOf", PyvtkUnstructuredPOPReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkUnstructuredPOPReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkUnstructuredPOPReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkUnstructuredPOPReader\nC++: static vtkUnstructuredPOPReader *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkUnstructuredPOPReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkUnstructuredPOPReader\nC++: vtkUnstructuredPOPReader *NewInstance()\n\n"},
  {"SetFileName", PyvtkUnstructuredPOPReader_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *_arg)\n\nThe NetCDF file to open.\n"},
  {"GetFileName", PyvtkUnstructuredPOPReader_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nThe NetCDF file to open.\n"},
  {"SetStride", PyvtkUnstructuredPOPReader_SetStride, METH_VARARGS,
   "V.SetStride(int, int, int)\nC++: void SetStride(int, int, int)\nV.SetStride((int, int, int))\nC++: void SetStride(int a[3])\n\n"},
  {"GetStride", PyvtkUnstructuredPOPReader_GetStride, METH_VARARGS,
   "V.GetStride() -> (int, int, int)\nC++: int *GetStride()\n\n"},
  {"SetVOI", PyvtkUnstructuredPOPReader_SetVOI, METH_VARARGS,
   "V.SetVOI(int, int, int, int, int, int)\nC++: void SetVOI(int, int, int, int, int, int)\nV.SetVOI((int, int, int, int, int, int))\nC++: void SetVOI(int a[6])\n\n"},
  {"GetVOI", PyvtkUnstructuredPOPReader_GetVOI, METH_VARARGS,
   "V.GetVOI() -> (int, int, int, int, int, int)\nC++: int *GetVOI()\n\n"},
  {"GetNumberOfVariableArrays", PyvtkUnstructuredPOPReader_GetNumberOfVariableArrays, METH_VARARGS,
   "V.GetNumberOfVariableArrays() -> int\nC++: virtual int GetNumberOfVariableArrays()\n\nVariable array selection.\n"},
  {"GetVariableArrayName", PyvtkUnstructuredPOPReader_GetVariableArrayName, METH_VARARGS,
   "V.GetVariableArrayName(int) -> string\nC++: virtual const char *GetVariableArrayName(int idx)\n\nVariable array selection.\n"},
  {"GetVariableArrayStatus", PyvtkUnstructuredPOPReader_GetVariableArrayStatus, METH_VARARGS,
   "V.GetVariableArrayStatus(string) -> int\nC++: virtual int GetVariableArrayStatus(const char *name)\n\nVariable array selection.\n"},
  {"SetVariableArrayStatus", PyvtkUnstructuredPOPReader_SetVariableArrayStatus, METH_VARARGS,
   "V.SetVariableArrayStatus(string, int)\nC++: virtual void SetVariableArrayStatus(const char *name,\n    int status)\n\nVariable array selection.\n"},
  {"SetRadius", PyvtkUnstructuredPOPReader_SetRadius, METH_VARARGS,
   "V.SetRadius(float)\nC++: virtual void SetRadius(double _arg)\n\nSet the outer radius of the Earth. By default it is 6371000 which\nassumes the length is in meters.\n"},
  {"GetRadius", PyvtkUnstructuredPOPReader_GetRadius, METH_VARARGS,
   "V.GetRadius() -> float\nC++: virtual double GetRadius()\n\nSet the outer radius of the Earth. By default it is 6371000 which\nassumes the length is in meters.\n"},
  {"GetVectorGrid", PyvtkUnstructuredPOPReader_GetVectorGrid, METH_VARARGS,
   "V.GetVectorGrid() -> int\nC++: virtual int GetVectorGrid()\n\nDetermine whether or not the input data is being interpolated at\nthe U/vector points or T/scalar points. 0 means unset, 2 means\nvector field, and 1 means scalar field.\n"},
  {"SetVerticalVelocity", PyvtkUnstructuredPOPReader_SetVerticalVelocity, METH_VARARGS,
   "V.SetVerticalVelocity(bool)\nC++: virtual void SetVerticalVelocity(bool _arg)\n\nSpecify whether or not to compute the vertical velocity component\nfrom the horizontal velocity components.  Default is false which\nsignifies do not compute.\n"},
  {"GetVerticalVelocity", PyvtkUnstructuredPOPReader_GetVerticalVelocity, METH_VARARGS,
   "V.GetVerticalVelocity() -> bool\nC++: virtual bool GetVerticalVelocity()\n\nSpecify whether or not to compute the vertical velocity component\nfrom the horizontal velocity components.  Default is false which\nsignifies do not compute.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkUnstructuredPOPReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkUnstructuredPOPReader", // tp_name
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
  PyvtkUnstructuredPOPReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkUnstructuredPOPReader_StaticNew()
{
  return vtkUnstructuredPOPReader::New();
}

PyObject *PyvtkUnstructuredPOPReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkUnstructuredPOPReader_Type, PyvtkUnstructuredPOPReader_Methods,
    "vtkUnstructuredPOPReader",
 &PyvtkUnstructuredPOPReader_StaticNew);

  PyTypeObject *pytype = &PyvtkUnstructuredPOPReader_Type;

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

void PyVTKAddFile_vtkUnstructuredPOPReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkUnstructuredPOPReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkUnstructuredPOPReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

