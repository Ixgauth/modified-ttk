// python wrapper for vtkPythonProgrammableFilter
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
#include "vtkPythonProgrammableFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPythonProgrammableFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPythonProgrammableFilter_ClassNew(); }

#ifndef DECLARED_PyvtkProgrammableFilter_ClassNew
extern "C" { PyObject *PyvtkProgrammableFilter_ClassNew(); }
#define DECLARED_PyvtkProgrammableFilter_ClassNew
#endif

static const char *PyvtkPythonProgrammableFilter_Doc =
  "vtkPythonProgrammableFilter - Executes a user supplied python script\non its input dataset to produce an output dataset.\n\n"
  "Superclass: vtkProgrammableFilter\n\n"
  "This filter will execute a python script to produce an output\n"
  "dataset. An new interpretor is created at the beginning of\n"
  "RequestInformation(). The state of the python interpretor is\n"
  "preserved until the next execution of RequestInformation(). After the\n"
  "interpretor is creates the vtk module is imported with \"from paraview import\n"
  "vtk\".\n\n"
  "Then the interpretor runs the InformationScript during\n"
  "RequestInformation(). This script is run in a python function called\n"
  "RequestInformation(). An argument named self that refers to the\n"
  "programmable filter is passed to the function. The interpretor also\n"
  "runs the Script during RequestData(). This script is run in a python\n"
  "function called RequestData(). An argument named self that refers to\n"
  "the programmable filter is passed to the function. Furthermore, a set\n"
  "of parameters passed with the SetParameter() call are defined as\n"
  "Python variables inside both scripts. This allows the developer to\n"
  "keep the scripts the same but change their behaviour using\n"
  "parameters.\n\n";


static PyObject *
PyvtkPythonProgrammableFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPythonProgrammableFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonProgrammableFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonProgrammableFilter *op = static_cast<vtkPythonProgrammableFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPythonProgrammableFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonProgrammableFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPythonProgrammableFilter *tempr = vtkPythonProgrammableFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonProgrammableFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonProgrammableFilter *op = static_cast<vtkPythonProgrammableFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPythonProgrammableFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPythonProgrammableFilter::NewInstance());

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
PyvtkPythonProgrammableFilter_SetScript(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScript");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonProgrammableFilter *op = static_cast<vtkPythonProgrammableFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScript(temp0);
    }
    else
    {
      op->vtkPythonProgrammableFilter::SetScript(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPythonProgrammableFilter_GetScript(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScript");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonProgrammableFilter *op = static_cast<vtkPythonProgrammableFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetScript() :
      op->vtkPythonProgrammableFilter::GetScript());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonProgrammableFilter_SetInformationScript(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInformationScript");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonProgrammableFilter *op = static_cast<vtkPythonProgrammableFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInformationScript(temp0);
    }
    else
    {
      op->vtkPythonProgrammableFilter::SetInformationScript(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPythonProgrammableFilter_GetInformationScript(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInformationScript");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonProgrammableFilter *op = static_cast<vtkPythonProgrammableFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetInformationScript() :
      op->vtkPythonProgrammableFilter::GetInformationScript());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonProgrammableFilter_SetUpdateExtentScript(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpdateExtentScript");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonProgrammableFilter *op = static_cast<vtkPythonProgrammableFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUpdateExtentScript(temp0);
    }
    else
    {
      op->vtkPythonProgrammableFilter::SetUpdateExtentScript(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPythonProgrammableFilter_GetUpdateExtentScript(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpdateExtentScript");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonProgrammableFilter *op = static_cast<vtkPythonProgrammableFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetUpdateExtentScript() :
      op->vtkPythonProgrammableFilter::GetUpdateExtentScript());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonProgrammableFilter_SetCheckNeedsUpdateScript(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCheckNeedsUpdateScript");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonProgrammableFilter *op = static_cast<vtkPythonProgrammableFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCheckNeedsUpdateScript(temp0);
    }
    else
    {
      op->vtkPythonProgrammableFilter::SetCheckNeedsUpdateScript(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPythonProgrammableFilter_GetCheckNeedsUpdateScript(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCheckNeedsUpdateScript");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonProgrammableFilter *op = static_cast<vtkPythonProgrammableFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetCheckNeedsUpdateScript() :
      op->vtkPythonProgrammableFilter::GetCheckNeedsUpdateScript());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonProgrammableFilter_SetParameterInternal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParameterInternal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonProgrammableFilter *op = static_cast<vtkPythonProgrammableFilter *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetParameterInternal(temp0, temp1);
    }
    else
    {
      op->vtkPythonProgrammableFilter::SetParameterInternal(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPythonProgrammableFilter_SetParameter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonProgrammableFilter *op = static_cast<vtkPythonProgrammableFilter *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetParameter(temp0, temp1);
    }
    else
    {
      op->vtkPythonProgrammableFilter::SetParameter(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPythonProgrammableFilter_SetParameter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonProgrammableFilter *op = static_cast<vtkPythonProgrammableFilter *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetParameter(temp0, temp1);
    }
    else
    {
      op->vtkPythonProgrammableFilter::SetParameter(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPythonProgrammableFilter_SetParameter_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonProgrammableFilter *op = static_cast<vtkPythonProgrammableFilter *>(vp);

  const char *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetParameter(temp0, temp1);
    }
    else
    {
      op->vtkPythonProgrammableFilter::SetParameter(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPythonProgrammableFilter_SetParameter_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonProgrammableFilter *op = static_cast<vtkPythonProgrammableFilter *>(vp);

  const char *temp0 = nullptr;
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
      op->SetParameter(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPythonProgrammableFilter::SetParameter(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPythonProgrammableFilter_SetParameter_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonProgrammableFilter *op = static_cast<vtkPythonProgrammableFilter *>(vp);

  const char *temp0 = nullptr;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetParameter(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPythonProgrammableFilter::SetParameter(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPythonProgrammableFilter_SetParameter_Methods[] = {
  {nullptr, PyvtkPythonProgrammableFilter_SetParameter_s1, METH_VARARGS,
   "@zz"},
  {nullptr, PyvtkPythonProgrammableFilter_SetParameter_s2, METH_VARARGS,
   "@zi"},
  {nullptr, PyvtkPythonProgrammableFilter_SetParameter_s3, METH_VARARGS,
   "@zd"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPythonProgrammableFilter_SetParameter(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPythonProgrammableFilter_SetParameter_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPythonProgrammableFilter_SetParameter_s4(self, args);
    case 4:
      return PyvtkPythonProgrammableFilter_SetParameter_s5(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetParameter");
  return nullptr;
}



static PyObject *
PyvtkPythonProgrammableFilter_AddParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonProgrammableFilter *op = static_cast<vtkPythonProgrammableFilter *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddParameter(temp0, temp1);
    }
    else
    {
      op->vtkPythonProgrammableFilter::AddParameter(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPythonProgrammableFilter_ClearParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonProgrammableFilter *op = static_cast<vtkPythonProgrammableFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ClearParameter(temp0);
    }
    else
    {
      op->vtkPythonProgrammableFilter::ClearParameter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPythonProgrammableFilter_ClearParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonProgrammableFilter *op = static_cast<vtkPythonProgrammableFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearParameters();
    }
    else
    {
      op->vtkPythonProgrammableFilter::ClearParameters();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPythonProgrammableFilter_ExecuteScript(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ExecuteScript");

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    vtkPythonProgrammableFilter::ExecuteScript(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf0.obj != 0)
  {
    PyBuffer_Release(&pbuf0);
  }
#endif
  return result;
}


static PyObject *
PyvtkPythonProgrammableFilter_SetOutputDataSetType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputDataSetType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonProgrammableFilter *op = static_cast<vtkPythonProgrammableFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputDataSetType(temp0);
    }
    else
    {
      op->vtkPythonProgrammableFilter::SetOutputDataSetType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPythonProgrammableFilter_GetOutputDataSetType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputDataSetType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonProgrammableFilter *op = static_cast<vtkPythonProgrammableFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputDataSetType() :
      op->vtkPythonProgrammableFilter::GetOutputDataSetType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonProgrammableFilter_SetPythonPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPythonPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonProgrammableFilter *op = static_cast<vtkPythonProgrammableFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPythonPath(temp0);
    }
    else
    {
      op->vtkPythonProgrammableFilter::SetPythonPath(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPythonProgrammableFilter_GetPythonPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPythonPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonProgrammableFilter *op = static_cast<vtkPythonProgrammableFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetPythonPath() :
      op->vtkPythonProgrammableFilter::GetPythonPath());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonProgrammableFilter_SetNumberOfInputPorts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfInputPorts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonProgrammableFilter *op = static_cast<vtkPythonProgrammableFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfInputPorts(temp0);
    }
    else
    {
      op->vtkPythonProgrammableFilter::SetNumberOfInputPorts(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPythonProgrammableFilter_GetNeedsUpdate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNeedsUpdate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonProgrammableFilter *op = static_cast<vtkPythonProgrammableFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetNeedsUpdate() :
      op->vtkPythonProgrammableFilter::GetNeedsUpdate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonProgrammableFilter_SetNeedsUpdate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNeedsUpdate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonProgrammableFilter *op = static_cast<vtkPythonProgrammableFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNeedsUpdate(temp0);
    }
    else
    {
      op->vtkPythonProgrammableFilter::SetNeedsUpdate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPythonProgrammableFilter_Methods[] = {
  {"IsTypeOf", PyvtkPythonProgrammableFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPythonProgrammableFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPythonProgrammableFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPythonProgrammableFilter\nC++: static vtkPythonProgrammableFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPythonProgrammableFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPythonProgrammableFilter\nC++: vtkPythonProgrammableFilter *NewInstance()\n\n"},
  {"SetScript", PyvtkPythonProgrammableFilter_SetScript, METH_VARARGS,
   "V.SetScript(string)\nC++: virtual void SetScript(const char *_arg)\n\nSet the text of the python script to execute.\n"},
  {"GetScript", PyvtkPythonProgrammableFilter_GetScript, METH_VARARGS,
   "V.GetScript() -> string\nC++: virtual char *GetScript()\n\nSet the text of the python script to execute.\n"},
  {"SetInformationScript", PyvtkPythonProgrammableFilter_SetInformationScript, METH_VARARGS,
   "V.SetInformationScript(string)\nC++: virtual void SetInformationScript(const char *_arg)\n\nSet the text of the python script to execute in\nRequestInformation().\n"},
  {"GetInformationScript", PyvtkPythonProgrammableFilter_GetInformationScript, METH_VARARGS,
   "V.GetInformationScript() -> string\nC++: virtual char *GetInformationScript()\n\nSet the text of the python script to execute in\nRequestInformation().\n"},
  {"SetUpdateExtentScript", PyvtkPythonProgrammableFilter_SetUpdateExtentScript, METH_VARARGS,
   "V.SetUpdateExtentScript(string)\nC++: virtual void SetUpdateExtentScript(const char *_arg)\n\nSet the text of the python script to execute in\nRequestUpdateExtent().\n"},
  {"GetUpdateExtentScript", PyvtkPythonProgrammableFilter_GetUpdateExtentScript, METH_VARARGS,
   "V.GetUpdateExtentScript() -> string\nC++: virtual char *GetUpdateExtentScript()\n\nSet the text of the python script to execute in\nRequestUpdateExtent().\n"},
  {"SetCheckNeedsUpdateScript", PyvtkPythonProgrammableFilter_SetCheckNeedsUpdateScript, METH_VARARGS,
   "V.SetCheckNeedsUpdateScript(string)\nC++: virtual void SetCheckNeedsUpdateScript(const char *_arg)\n\nFor \"live\" sources, this script, if provided, if used to\ndetermine if the source needs an update.\n"},
  {"GetCheckNeedsUpdateScript", PyvtkPythonProgrammableFilter_GetCheckNeedsUpdateScript, METH_VARARGS,
   "V.GetCheckNeedsUpdateScript() -> string\nC++: virtual char *GetCheckNeedsUpdateScript()\n\nFor \"live\" sources, this script, if provided, if used to\ndetermine if the source needs an update.\n"},
  {"SetParameterInternal", PyvtkPythonProgrammableFilter_SetParameterInternal, METH_VARARGS,
   "V.SetParameterInternal(string, string)\nC++: void SetParameterInternal(const char *name,\n    const char *value)\n\nSet a name-value parameter that will be available to the script\nwhen it is run\n"},
  {"SetParameter", PyvtkPythonProgrammableFilter_SetParameter, METH_VARARGS,
   "V.SetParameter(string, string)\nC++: void SetParameter(const char *name, const char *value)\nV.SetParameter(string, int)\nC++: void SetParameter(const char *name, int value)\nV.SetParameter(string, float)\nC++: void SetParameter(const char *name, double value)\nV.SetParameter(string, float, float)\nC++: void SetParameter(const char *name, double value1,\n    double value2)\nV.SetParameter(string, float, float, float)\nC++: void SetParameter(const char *name, double value1,\n    double value2, double value3)\n\nSet a name-value parameter that will be available to the script\nwhen it is run\n"},
  {"AddParameter", PyvtkPythonProgrammableFilter_AddParameter, METH_VARARGS,
   "V.AddParameter(string, string)\nC++: void AddParameter(const char *name, const char *value)\n\nTo support repeatable-parameters.\n"},
  {"ClearParameter", PyvtkPythonProgrammableFilter_ClearParameter, METH_VARARGS,
   "V.ClearParameter(string)\nC++: void ClearParameter(const char *name)\n\nTo support repeatable-parameters.\n"},
  {"ClearParameters", PyvtkPythonProgrammableFilter_ClearParameters, METH_VARARGS,
   "V.ClearParameters()\nC++: void ClearParameters()\n\nClear all name-value parameters\n"},
  {"ExecuteScript", PyvtkPythonProgrammableFilter_ExecuteScript, METH_VARARGS,
   "V.ExecuteScript(void)\nC++: static void ExecuteScript(void *)\n\nFor internal use only.\n"},
  {"SetOutputDataSetType", PyvtkPythonProgrammableFilter_SetOutputDataSetType, METH_VARARGS,
   "V.SetOutputDataSetType(int)\nC++: virtual void SetOutputDataSetType(int _arg)\n\nChanges the output data set type. Allowable values are defined in\nvtkType.h\n"},
  {"GetOutputDataSetType", PyvtkPythonProgrammableFilter_GetOutputDataSetType, METH_VARARGS,
   "V.GetOutputDataSetType() -> int\nC++: virtual int GetOutputDataSetType()\n\nChanges the output data set type. Allowable values are defined in\nvtkType.h\n"},
  {"SetPythonPath", PyvtkPythonProgrammableFilter_SetPythonPath, METH_VARARGS,
   "V.SetPythonPath(string)\nC++: virtual void SetPythonPath(const char *_arg)\n\nA semi-colon (;) separated list of directories to add to the\npython library search path.\n"},
  {"GetPythonPath", PyvtkPythonProgrammableFilter_GetPythonPath, METH_VARARGS,
   "V.GetPythonPath() -> string\nC++: virtual char *GetPythonPath()\n\nA semi-colon (;) separated list of directories to add to the\npython library search path.\n"},
  {"SetNumberOfInputPorts", PyvtkPythonProgrammableFilter_SetNumberOfInputPorts, METH_VARARGS,
   "V.SetNumberOfInputPorts(int)\nC++: void SetNumberOfInputPorts(int numberOfInputPorts) override;\n\nSet the number of input ports This function is explicitly exposed\nto enable a vtkClientServerInterpreter to call it\n"},
  {"GetNeedsUpdate", PyvtkPythonProgrammableFilter_GetNeedsUpdate, METH_VARARGS,
   "V.GetNeedsUpdate() -> bool\nC++: bool GetNeedsUpdate()\n\nApplication code can call `GetNeedsUpdate` to check if the\nalgorithm can use an update to show updated information.\n"},
  {"SetNeedsUpdate", PyvtkPythonProgrammableFilter_SetNeedsUpdate, METH_VARARGS,
   "V.SetNeedsUpdate(bool)\nC++: virtual void SetNeedsUpdate(bool _arg)\n\nCheckNeedsUpdateScript should call `SetNeedsUpdate(true)` to\nindicate that the algorithm has new data and hence may be\nupdated.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPythonProgrammableFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreCorePython.vtkPythonProgrammableFilter", // tp_name
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
  PyvtkPythonProgrammableFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPythonProgrammableFilter_StaticNew()
{
  return vtkPythonProgrammableFilter::New();
}

PyObject *PyvtkPythonProgrammableFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPythonProgrammableFilter_Type, PyvtkPythonProgrammableFilter_Methods,
    "vtkPythonProgrammableFilter",
 &PyvtkPythonProgrammableFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkPythonProgrammableFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkProgrammableFilter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPythonProgrammableFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPythonProgrammableFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPythonProgrammableFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

