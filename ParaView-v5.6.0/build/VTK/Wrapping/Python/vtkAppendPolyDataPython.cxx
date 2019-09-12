// python wrapper for vtkAppendPolyData
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
#include "vtkPolyData.h"
#include "vtkAppendPolyData.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAppendPolyData(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAppendPolyData_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkAppendPolyData_Doc =
  "vtkAppendPolyData - appends one or more polygonal datasets together\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkAppendPolyData is a filter that appends one of more polygonal\n"
  "datasets into a single polygonal dataset. All geometry is extracted\n"
  "and appended, but point and cell attributes (i.e., scalars, vectors,\n"
  "normals) are extracted and appended only if all datasets have the\n"
  "point and/or cell attributes available.  (For example, if one dataset\n"
  "has point scalars but another does not, point scalars will not be\n"
  "appended.)\n\n"
  "@sa\n"
  "vtkAppendFilter\n\n";


static PyObject *
PyvtkAppendPolyData_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAppendPolyData::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendPolyData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPolyData *op = static_cast<vtkAppendPolyData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAppendPolyData::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendPolyData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAppendPolyData *tempr = vtkAppendPolyData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendPolyData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPolyData *op = static_cast<vtkAppendPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAppendPolyData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAppendPolyData::NewInstance());

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
PyvtkAppendPolyData_SetUserManagedInputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserManagedInputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPolyData *op = static_cast<vtkAppendPolyData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUserManagedInputs(temp0);
    }
    else
    {
      op->vtkAppendPolyData::SetUserManagedInputs(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendPolyData_GetUserManagedInputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserManagedInputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPolyData *op = static_cast<vtkAppendPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUserManagedInputs() :
      op->vtkAppendPolyData::GetUserManagedInputs());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendPolyData_UserManagedInputsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UserManagedInputsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPolyData *op = static_cast<vtkAppendPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UserManagedInputsOn();
    }
    else
    {
      op->vtkAppendPolyData::UserManagedInputsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendPolyData_UserManagedInputsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UserManagedInputsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPolyData *op = static_cast<vtkAppendPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UserManagedInputsOff();
    }
    else
    {
      op->vtkAppendPolyData::UserManagedInputsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendPolyData_AddInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPolyData *op = static_cast<vtkAppendPolyData *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->AddInputData(temp0);
    }
    else
    {
      op->vtkAppendPolyData::AddInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendPolyData_RemoveInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPolyData *op = static_cast<vtkAppendPolyData *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->RemoveInputData(temp0);
    }
    else
    {
      op->vtkAppendPolyData::RemoveInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendPolyData_GetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPolyData *op = static_cast<vtkAppendPolyData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetInput(temp0) :
      op->vtkAppendPolyData::GetInput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAppendPolyData_GetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPolyData *op = static_cast<vtkAppendPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkAppendPolyData::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAppendPolyData_GetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkAppendPolyData_GetInput_s1(self, args);
    case 0:
      return PyvtkAppendPolyData_GetInput_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetInput");
  return nullptr;
}



static PyObject *
PyvtkAppendPolyData_SetNumberOfInputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfInputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPolyData *op = static_cast<vtkAppendPolyData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfInputs(temp0);
    }
    else
    {
      op->vtkAppendPolyData::SetNumberOfInputs(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendPolyData_SetInputConnectionByNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnectionByNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPolyData *op = static_cast<vtkAppendPolyData *>(vp);

  int temp0;
  vtkAlgorithmOutput *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetInputConnectionByNumber(temp0, temp1);
    }
    else
    {
      op->vtkAppendPolyData::SetInputConnectionByNumber(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendPolyData_SetInputDataByNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputDataByNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPolyData *op = static_cast<vtkAppendPolyData *>(vp);

  int temp0;
  vtkPolyData *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->SetInputDataByNumber(temp0, temp1);
    }
    else
    {
      op->vtkAppendPolyData::SetInputDataByNumber(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendPolyData_SetParallelStreaming(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParallelStreaming");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPolyData *op = static_cast<vtkAppendPolyData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetParallelStreaming(temp0);
    }
    else
    {
      op->vtkAppendPolyData::SetParallelStreaming(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendPolyData_GetParallelStreaming(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParallelStreaming");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPolyData *op = static_cast<vtkAppendPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetParallelStreaming() :
      op->vtkAppendPolyData::GetParallelStreaming());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendPolyData_ParallelStreamingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ParallelStreamingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPolyData *op = static_cast<vtkAppendPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ParallelStreamingOn();
    }
    else
    {
      op->vtkAppendPolyData::ParallelStreamingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendPolyData_ParallelStreamingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ParallelStreamingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPolyData *op = static_cast<vtkAppendPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ParallelStreamingOff();
    }
    else
    {
      op->vtkAppendPolyData::ParallelStreamingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendPolyData_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPolyData *op = static_cast<vtkAppendPolyData *>(vp);

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
      op->vtkAppendPolyData::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendPolyData_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPolyData *op = static_cast<vtkAppendPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkAppendPolyData::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAppendPolyData_Methods[] = {
  {"IsTypeOf", PyvtkAppendPolyData_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAppendPolyData_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAppendPolyData_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAppendPolyData\nC++: static vtkAppendPolyData *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAppendPolyData_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAppendPolyData\nC++: vtkAppendPolyData *NewInstance()\n\n"},
  {"SetUserManagedInputs", PyvtkAppendPolyData_SetUserManagedInputs, METH_VARARGS,
   "V.SetUserManagedInputs(int)\nC++: virtual void SetUserManagedInputs(vtkTypeBool _arg)\n\nUserManagedInputs allows the user to set inputs by number instead\nof using the AddInput/RemoveInput functions. Calls to\nSetNumberOfInputs/SetInputConnectionByNumber should not be mixed\nwith calls to AddInput/RemoveInput. By default, UserManagedInputs\nis false.\n"},
  {"GetUserManagedInputs", PyvtkAppendPolyData_GetUserManagedInputs, METH_VARARGS,
   "V.GetUserManagedInputs() -> int\nC++: virtual vtkTypeBool GetUserManagedInputs()\n\nUserManagedInputs allows the user to set inputs by number instead\nof using the AddInput/RemoveInput functions. Calls to\nSetNumberOfInputs/SetInputConnectionByNumber should not be mixed\nwith calls to AddInput/RemoveInput. By default, UserManagedInputs\nis false.\n"},
  {"UserManagedInputsOn", PyvtkAppendPolyData_UserManagedInputsOn, METH_VARARGS,
   "V.UserManagedInputsOn()\nC++: virtual void UserManagedInputsOn()\n\nUserManagedInputs allows the user to set inputs by number instead\nof using the AddInput/RemoveInput functions. Calls to\nSetNumberOfInputs/SetInputConnectionByNumber should not be mixed\nwith calls to AddInput/RemoveInput. By default, UserManagedInputs\nis false.\n"},
  {"UserManagedInputsOff", PyvtkAppendPolyData_UserManagedInputsOff, METH_VARARGS,
   "V.UserManagedInputsOff()\nC++: virtual void UserManagedInputsOff()\n\nUserManagedInputs allows the user to set inputs by number instead\nof using the AddInput/RemoveInput functions. Calls to\nSetNumberOfInputs/SetInputConnectionByNumber should not be mixed\nwith calls to AddInput/RemoveInput. By default, UserManagedInputs\nis false.\n"},
  {"AddInputData", PyvtkAppendPolyData_AddInputData, METH_VARARGS,
   "V.AddInputData(vtkPolyData)\nC++: void AddInputData(vtkPolyData *)\n\nAdd a dataset to the list of data to append. Should not be used\nwhen UserManagedInputs is true, use SetInputByNumber instead.\n"},
  {"RemoveInputData", PyvtkAppendPolyData_RemoveInputData, METH_VARARGS,
   "V.RemoveInputData(vtkPolyData)\nC++: void RemoveInputData(vtkPolyData *)\n\nRemove a dataset from the list of data to append. Should not be\nused when UserManagedInputs is true, use SetInputByNumber\n(nullptr) instead.\n"},
  {"GetInput", PyvtkAppendPolyData_GetInput, METH_VARARGS,
   "V.GetInput(int) -> vtkPolyData\nC++: vtkPolyData *GetInput(int idx)\nV.GetInput() -> vtkPolyData\nC++: vtkPolyData *GetInput()\n\nGet any input of this filter.\n"},
  {"SetNumberOfInputs", PyvtkAppendPolyData_SetNumberOfInputs, METH_VARARGS,
   "V.SetNumberOfInputs(int)\nC++: void SetNumberOfInputs(int num)\n\nDirectly set(allocate) number of inputs, should only be used when\nUserManagedInputs is true.\n"},
  {"SetInputConnectionByNumber", PyvtkAppendPolyData_SetInputConnectionByNumber, METH_VARARGS,
   "V.SetInputConnectionByNumber(int, vtkAlgorithmOutput)\nC++: void SetInputConnectionByNumber(int num,\n    vtkAlgorithmOutput *input)\n\n"},
  {"SetInputDataByNumber", PyvtkAppendPolyData_SetInputDataByNumber, METH_VARARGS,
   "V.SetInputDataByNumber(int, vtkPolyData)\nC++: void SetInputDataByNumber(int num, vtkPolyData *ds)\n\n"},
  {"SetParallelStreaming", PyvtkAppendPolyData_SetParallelStreaming, METH_VARARGS,
   "V.SetParallelStreaming(int)\nC++: virtual void SetParallelStreaming(vtkTypeBool _arg)\n\nParallelStreaming is for a particular application. It causes this\nfilter to ask for a different piece from each of its inputs.  If\nall the inputs are the same, then the output of this append\nfilter is the whole dataset pieced back together.  Duplicate\npoints are create along the seams.  The purpose of this feature\nis to get data parallelism at a course scale.  Each of the inputs\ncan be generated in a different process at the same time.\n"},
  {"GetParallelStreaming", PyvtkAppendPolyData_GetParallelStreaming, METH_VARARGS,
   "V.GetParallelStreaming() -> int\nC++: virtual vtkTypeBool GetParallelStreaming()\n\nParallelStreaming is for a particular application. It causes this\nfilter to ask for a different piece from each of its inputs.  If\nall the inputs are the same, then the output of this append\nfilter is the whole dataset pieced back together.  Duplicate\npoints are create along the seams.  The purpose of this feature\nis to get data parallelism at a course scale.  Each of the inputs\ncan be generated in a different process at the same time.\n"},
  {"ParallelStreamingOn", PyvtkAppendPolyData_ParallelStreamingOn, METH_VARARGS,
   "V.ParallelStreamingOn()\nC++: virtual void ParallelStreamingOn()\n\nParallelStreaming is for a particular application. It causes this\nfilter to ask for a different piece from each of its inputs.  If\nall the inputs are the same, then the output of this append\nfilter is the whole dataset pieced back together.  Duplicate\npoints are create along the seams.  The purpose of this feature\nis to get data parallelism at a course scale.  Each of the inputs\ncan be generated in a different process at the same time.\n"},
  {"ParallelStreamingOff", PyvtkAppendPolyData_ParallelStreamingOff, METH_VARARGS,
   "V.ParallelStreamingOff()\nC++: virtual void ParallelStreamingOff()\n\nParallelStreaming is for a particular application. It causes this\nfilter to ask for a different piece from each of its inputs.  If\nall the inputs are the same, then the output of this append\nfilter is the whole dataset pieced back together.  Duplicate\npoints are create along the seams.  The purpose of this feature\nis to get data parallelism at a course scale.  Each of the inputs\ncan be generated in a different process at the same time.\n"},
  {"SetOutputPointsPrecision", PyvtkAppendPolyData_SetOutputPointsPrecision, METH_VARARGS,
   "V.SetOutputPointsPrecision(int)\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {"GetOutputPointsPrecision", PyvtkAppendPolyData_GetOutputPointsPrecision, METH_VARARGS,
   "V.GetOutputPointsPrecision() -> int\nC++: virtual int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAppendPolyData_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkAppendPolyData", // tp_name
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
  PyvtkAppendPolyData_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAppendPolyData_StaticNew()
{
  return vtkAppendPolyData::New();
}

PyObject *PyvtkAppendPolyData_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAppendPolyData_Type, PyvtkAppendPolyData_Methods,
    "vtkAppendPolyData",
 &PyvtkAppendPolyData_StaticNew);

  PyTypeObject *pytype = &PyvtkAppendPolyData_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPolyDataAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAppendPolyData(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAppendPolyData_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAppendPolyData", o) != 0)
  {
    Py_DECREF(o);
  }

}

