// python wrapper for vtkPVPythonInformation
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
#include "vtkStdString.h"
#include "vtkPVPythonInformation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVPythonInformation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVPythonInformation_ClassNew(); }

#ifndef DECLARED_PyvtkPVInformation_ClassNew
extern "C" { PyObject *PyvtkPVInformation_ClassNew(); }
#define DECLARED_PyvtkPVInformation_ClassNew
#endif

static const char *PyvtkPVPythonInformation_Doc =
  "vtkPVPythonInformation - Gets python features.\n\n"
  "Superclass: vtkPVInformation\n\n"
  "Get details of python availability on the root server.\n\n";


static PyObject *
PyvtkPVPythonInformation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVPythonInformation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVPythonInformation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVPythonInformation *tempr = vtkPVPythonInformation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVPythonInformation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVPythonInformation::NewInstance());

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
PyvtkPVPythonInformation_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

  vtkPVPythonInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVPythonInformation"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkPVPythonInformation::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_CopyFromObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

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
      op->vtkPVPythonInformation::CopyFromObject(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_AddInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

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
      op->vtkPVPythonInformation::AddInformation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_SetPythonSupport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPythonSupport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPythonSupport(temp0);
    }
    else
    {
      op->vtkPVPythonInformation::SetPythonSupport(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_GetPythonSupport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPythonSupport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPythonSupport() :
      op->vtkPVPythonInformation::GetPythonSupport());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_PythonSupportOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PythonSupportOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PythonSupportOn();
    }
    else
    {
      op->vtkPVPythonInformation::PythonSupportOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_PythonSupportOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PythonSupportOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PythonSupportOff();
    }
    else
    {
      op->vtkPVPythonInformation::PythonSupportOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_SetPythonVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPythonVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPythonVersion(temp0);
    }
    else
    {
      op->vtkPVPythonInformation::SetPythonVersion(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_GetPythonVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPythonVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const std::string *tempr = (ap.IsBound() ?
      &op->GetPythonVersion() :
      &op->vtkPVPythonInformation::GetPythonVersion());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_SetPythonPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPythonPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

  std::string temp0;
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
      op->vtkPVPythonInformation::SetPythonPath(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_GetPythonPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPythonPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const std::string *tempr = (ap.IsBound() ?
      &op->GetPythonPath() :
      &op->vtkPVPythonInformation::GetPythonPath());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_SetNumpySupport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumpySupport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumpySupport(temp0);
    }
    else
    {
      op->vtkPVPythonInformation::SetNumpySupport(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_GetNumpySupport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumpySupport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetNumpySupport() :
      op->vtkPVPythonInformation::GetNumpySupport());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_NumpySupportOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NumpySupportOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NumpySupportOn();
    }
    else
    {
      op->vtkPVPythonInformation::NumpySupportOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_NumpySupportOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NumpySupportOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NumpySupportOff();
    }
    else
    {
      op->vtkPVPythonInformation::NumpySupportOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_SetNumpyVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumpyVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumpyVersion(temp0);
    }
    else
    {
      op->vtkPVPythonInformation::SetNumpyVersion(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_GetNumpyVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumpyVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const std::string *tempr = (ap.IsBound() ?
      &op->GetNumpyVersion() :
      &op->vtkPVPythonInformation::GetNumpyVersion());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_SetNumpyPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumpyPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumpyPath(temp0);
    }
    else
    {
      op->vtkPVPythonInformation::SetNumpyPath(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_GetNumpyPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumpyPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const std::string *tempr = (ap.IsBound() ?
      &op->GetNumpyPath() :
      &op->vtkPVPythonInformation::GetNumpyPath());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_SetMatplotlibSupport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMatplotlibSupport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMatplotlibSupport(temp0);
    }
    else
    {
      op->vtkPVPythonInformation::SetMatplotlibSupport(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_GetMatplotlibSupport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMatplotlibSupport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetMatplotlibSupport() :
      op->vtkPVPythonInformation::GetMatplotlibSupport());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_MatplotlibSupportOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MatplotlibSupportOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MatplotlibSupportOn();
    }
    else
    {
      op->vtkPVPythonInformation::MatplotlibSupportOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_MatplotlibSupportOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MatplotlibSupportOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MatplotlibSupportOff();
    }
    else
    {
      op->vtkPVPythonInformation::MatplotlibSupportOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_SetMatplotlibVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMatplotlibVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMatplotlibVersion(temp0);
    }
    else
    {
      op->vtkPVPythonInformation::SetMatplotlibVersion(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_GetMatplotlibVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMatplotlibVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const std::string *tempr = (ap.IsBound() ?
      &op->GetMatplotlibVersion() :
      &op->vtkPVPythonInformation::GetMatplotlibVersion());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_SetMatplotlibPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMatplotlibPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMatplotlibPath(temp0);
    }
    else
    {
      op->vtkPVPythonInformation::SetMatplotlibPath(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPythonInformation_GetMatplotlibPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMatplotlibPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonInformation *op = static_cast<vtkPVPythonInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const std::string *tempr = (ap.IsBound() ?
      &op->GetMatplotlibPath() :
      &op->vtkPVPythonInformation::GetMatplotlibPath());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVPythonInformation_Methods[] = {
  {"IsTypeOf", PyvtkPVPythonInformation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVPythonInformation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVPythonInformation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVPythonInformation\nC++: static vtkPVPythonInformation *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVPythonInformation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVPythonInformation\nC++: vtkPVPythonInformation *NewInstance()\n\n"},
  {"DeepCopy", PyvtkPVPythonInformation_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkPVPythonInformation)\nC++: void DeepCopy(vtkPVPythonInformation *info)\n\n"},
  {"CopyFromObject", PyvtkPVPythonInformation_CopyFromObject, METH_VARARGS,
   "V.CopyFromObject(vtkObject)\nC++: void CopyFromObject(vtkObject *) override;\n\nTransfer information about a single object into this object.\n"},
  {"AddInformation", PyvtkPVPythonInformation_AddInformation, METH_VARARGS,
   "V.AddInformation(vtkPVInformation)\nC++: void AddInformation(vtkPVInformation *) override;\n\nSame as DeepCopy for this object.\n"},
  {"SetPythonSupport", PyvtkPVPythonInformation_SetPythonSupport, METH_VARARGS,
   "V.SetPythonSupport(bool)\nC++: virtual void SetPythonSupport(bool _arg)\n\nWhether the server was compiled with python support.\n"},
  {"GetPythonSupport", PyvtkPVPythonInformation_GetPythonSupport, METH_VARARGS,
   "V.GetPythonSupport() -> bool\nC++: virtual bool GetPythonSupport()\n\nWhether the server was compiled with python support.\n"},
  {"PythonSupportOn", PyvtkPVPythonInformation_PythonSupportOn, METH_VARARGS,
   "V.PythonSupportOn()\nC++: virtual void PythonSupportOn()\n\nWhether the server was compiled with python support.\n"},
  {"PythonSupportOff", PyvtkPVPythonInformation_PythonSupportOff, METH_VARARGS,
   "V.PythonSupportOff()\nC++: virtual void PythonSupportOff()\n\nWhether the server was compiled with python support.\n"},
  {"SetPythonVersion", PyvtkPVPythonInformation_SetPythonVersion, METH_VARARGS,
   "V.SetPythonVersion(string)\nC++: void SetPythonVersion(const std::string &arg)\n\nIf GetPythonSupport() is true, returns the version of python\ndetected on the server.\n"},
  {"GetPythonVersion", PyvtkPVPythonInformation_GetPythonVersion, METH_VARARGS,
   "V.GetPythonVersion() -> string\nC++: const std::string &GetPythonVersion()\n\nIf GetPythonSupport() is true, returns the version of python\ndetected on the server.\n"},
  {"SetPythonPath", PyvtkPVPythonInformation_SetPythonPath, METH_VARARGS,
   "V.SetPythonPath(string)\nC++: void SetPythonPath(const std::string &arg)\n\nIf GetPythonSupport() is true, returns the path to the python\nlibraries detected on the server.\n"},
  {"GetPythonPath", PyvtkPVPythonInformation_GetPythonPath, METH_VARARGS,
   "V.GetPythonPath() -> string\nC++: const std::string &GetPythonPath()\n\nIf GetPythonSupport() is true, returns the path to the python\nlibraries detected on the server.\n"},
  {"SetNumpySupport", PyvtkPVPythonInformation_SetNumpySupport, METH_VARARGS,
   "V.SetNumpySupport(bool)\nC++: virtual void SetNumpySupport(bool _arg)\n\nWhether the numpy module is available on the server.\n"},
  {"GetNumpySupport", PyvtkPVPythonInformation_GetNumpySupport, METH_VARARGS,
   "V.GetNumpySupport() -> bool\nC++: virtual bool GetNumpySupport()\n\nWhether the numpy module is available on the server.\n"},
  {"NumpySupportOn", PyvtkPVPythonInformation_NumpySupportOn, METH_VARARGS,
   "V.NumpySupportOn()\nC++: virtual void NumpySupportOn()\n\nWhether the numpy module is available on the server.\n"},
  {"NumpySupportOff", PyvtkPVPythonInformation_NumpySupportOff, METH_VARARGS,
   "V.NumpySupportOff()\nC++: virtual void NumpySupportOff()\n\nWhether the numpy module is available on the server.\n"},
  {"SetNumpyVersion", PyvtkPVPythonInformation_SetNumpyVersion, METH_VARARGS,
   "V.SetNumpyVersion(string)\nC++: void SetNumpyVersion(const std::string &arg)\n\nIf GetNumpySupport() is true, returns the version of numpy\ndetected on the server.\n"},
  {"GetNumpyVersion", PyvtkPVPythonInformation_GetNumpyVersion, METH_VARARGS,
   "V.GetNumpyVersion() -> string\nC++: const std::string &GetNumpyVersion()\n\nIf GetNumpySupport() is true, returns the version of numpy\ndetected on the server.\n"},
  {"SetNumpyPath", PyvtkPVPythonInformation_SetNumpyPath, METH_VARARGS,
   "V.SetNumpyPath(string)\nC++: void SetNumpyPath(const std::string &arg)\n\nIf GetNumpySupport() is true, returns the path to numpy detected\non the server.\n"},
  {"GetNumpyPath", PyvtkPVPythonInformation_GetNumpyPath, METH_VARARGS,
   "V.GetNumpyPath() -> string\nC++: const std::string &GetNumpyPath()\n\nIf GetNumpySupport() is true, returns the path to numpy detected\non the server.\n"},
  {"SetMatplotlibSupport", PyvtkPVPythonInformation_SetMatplotlibSupport, METH_VARARGS,
   "V.SetMatplotlibSupport(bool)\nC++: virtual void SetMatplotlibSupport(bool _arg)\n\nWhether the matplotlib module is available on the server.\n"},
  {"GetMatplotlibSupport", PyvtkPVPythonInformation_GetMatplotlibSupport, METH_VARARGS,
   "V.GetMatplotlibSupport() -> bool\nC++: virtual bool GetMatplotlibSupport()\n\nWhether the matplotlib module is available on the server.\n"},
  {"MatplotlibSupportOn", PyvtkPVPythonInformation_MatplotlibSupportOn, METH_VARARGS,
   "V.MatplotlibSupportOn()\nC++: virtual void MatplotlibSupportOn()\n\nWhether the matplotlib module is available on the server.\n"},
  {"MatplotlibSupportOff", PyvtkPVPythonInformation_MatplotlibSupportOff, METH_VARARGS,
   "V.MatplotlibSupportOff()\nC++: virtual void MatplotlibSupportOff()\n\nWhether the matplotlib module is available on the server.\n"},
  {"SetMatplotlibVersion", PyvtkPVPythonInformation_SetMatplotlibVersion, METH_VARARGS,
   "V.SetMatplotlibVersion(string)\nC++: void SetMatplotlibVersion(const std::string &arg)\n\nIf GetMatplotlibSupport() is true, returns the version of\nmatplotlib detected on the server.\n"},
  {"GetMatplotlibVersion", PyvtkPVPythonInformation_GetMatplotlibVersion, METH_VARARGS,
   "V.GetMatplotlibVersion() -> string\nC++: const std::string &GetMatplotlibVersion()\n\nIf GetMatplotlibSupport() is true, returns the version of\nmatplotlib detected on the server.\n"},
  {"SetMatplotlibPath", PyvtkPVPythonInformation_SetMatplotlibPath, METH_VARARGS,
   "V.SetMatplotlibPath(string)\nC++: void SetMatplotlibPath(const std::string &arg)\n\nIf GetMatplotlibSupport() is true, returns the path to matplotlib\ndetected on the server.\n"},
  {"GetMatplotlibPath", PyvtkPVPythonInformation_GetMatplotlibPath, METH_VARARGS,
   "V.GetMatplotlibPath() -> string\nC++: const std::string &GetMatplotlibPath()\n\nIf GetMatplotlibSupport() is true, returns the path to matplotlib\ndetected on the server.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVPythonInformation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreCorePython.vtkPVPythonInformation", // tp_name
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
  PyvtkPVPythonInformation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVPythonInformation_StaticNew()
{
  return vtkPVPythonInformation::New();
}

PyObject *PyvtkPVPythonInformation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVPythonInformation_Type, PyvtkPVPythonInformation_Methods,
    "vtkPVPythonInformation",
 &PyvtkPVPythonInformation_StaticNew);

  PyTypeObject *pytype = &PyvtkPVPythonInformation_Type;

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

void PyVTKAddFile_vtkPVPythonInformation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVPythonInformation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVPythonInformation", o) != 0)
  {
    Py_DECREF(o);
  }

}

