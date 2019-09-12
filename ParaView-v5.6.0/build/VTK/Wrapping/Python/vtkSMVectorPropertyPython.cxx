// python wrapper for vtkSMVectorProperty
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
#include "vtkSMVectorProperty.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMVectorProperty(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMVectorProperty_ClassNew(); }

#ifndef DECLARED_PyvtkSMProperty_ClassNew
extern "C" { PyObject *PyvtkSMProperty_ClassNew(); }
#define DECLARED_PyvtkSMProperty_ClassNew
#endif

static const char *PyvtkSMVectorProperty_Doc =
  "vtkSMVectorProperty - abstract superclass for all vector properties\n\n"
  "Superclass: vtkSMProperty\n\n"
  "vtkSMVectorProperty defines an interface common to all vector\n"
  "properties as well as some common settings. A vector property\n"
  "contains a list of values passed to one or more invocations of a\n"
  "command. How the values are distributed to the different invocations\n"
  "is controlled by several parameters.\n\n";


static PyObject *
PyvtkSMVectorProperty_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMVectorProperty::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMVectorProperty_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMVectorProperty *op = static_cast<vtkSMVectorProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMVectorProperty::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMVectorProperty_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMVectorProperty *tempr = vtkSMVectorProperty::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMVectorProperty_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMVectorProperty *op = static_cast<vtkSMVectorProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMVectorProperty *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMVectorProperty::NewInstance());

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
PyvtkSMVectorProperty_GetNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMVectorProperty *op = static_cast<vtkSMVectorProperty *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    unsigned int tempr = op->GetNumberOfElements();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMVectorProperty_SetNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMVectorProperty *op = static_cast<vtkSMVectorProperty *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetNumberOfElements(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMVectorProperty_GetNumberOfUncheckedElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfUncheckedElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMVectorProperty *op = static_cast<vtkSMVectorProperty *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    unsigned int tempr = op->GetNumberOfUncheckedElements();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMVectorProperty_SetNumberOfUncheckedElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfUncheckedElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMVectorProperty *op = static_cast<vtkSMVectorProperty *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetNumberOfUncheckedElements(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMVectorProperty_ClearUncheckedElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearUncheckedElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMVectorProperty *op = static_cast<vtkSMVectorProperty *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->ClearUncheckedElements();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMVectorProperty_GetRepeatCommand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepeatCommand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMVectorProperty *op = static_cast<vtkSMVectorProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRepeatCommand() :
      op->vtkSMVectorProperty::GetRepeatCommand());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMVectorProperty_SetRepeatCommand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepeatCommand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMVectorProperty *op = static_cast<vtkSMVectorProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRepeatCommand(temp0);
    }
    else
    {
      op->vtkSMVectorProperty::SetRepeatCommand(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMVectorProperty_RepeatCommandOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RepeatCommandOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMVectorProperty *op = static_cast<vtkSMVectorProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RepeatCommandOn();
    }
    else
    {
      op->vtkSMVectorProperty::RepeatCommandOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMVectorProperty_RepeatCommandOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RepeatCommandOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMVectorProperty *op = static_cast<vtkSMVectorProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RepeatCommandOff();
    }
    else
    {
      op->vtkSMVectorProperty::RepeatCommandOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMVectorProperty_GetNumberOfElementsPerCommand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElementsPerCommand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMVectorProperty *op = static_cast<vtkSMVectorProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfElementsPerCommand() :
      op->vtkSMVectorProperty::GetNumberOfElementsPerCommand());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMVectorProperty_SetNumberOfElementsPerCommand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfElementsPerCommand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMVectorProperty *op = static_cast<vtkSMVectorProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfElementsPerCommand(temp0);
    }
    else
    {
      op->vtkSMVectorProperty::SetNumberOfElementsPerCommand(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMVectorProperty_GetUseIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMVectorProperty *op = static_cast<vtkSMVectorProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseIndex() :
      op->vtkSMVectorProperty::GetUseIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMVectorProperty_SetUseIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMVectorProperty *op = static_cast<vtkSMVectorProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseIndex(temp0);
    }
    else
    {
      op->vtkSMVectorProperty::SetUseIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMVectorProperty_UseIndexOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseIndexOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMVectorProperty *op = static_cast<vtkSMVectorProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseIndexOn();
    }
    else
    {
      op->vtkSMVectorProperty::UseIndexOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMVectorProperty_UseIndexOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseIndexOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMVectorProperty *op = static_cast<vtkSMVectorProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseIndexOff();
    }
    else
    {
      op->vtkSMVectorProperty::UseIndexOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMVectorProperty_SetCleanCommand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCleanCommand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMVectorProperty *op = static_cast<vtkSMVectorProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCleanCommand(temp0);
    }
    else
    {
      op->vtkSMVectorProperty::SetCleanCommand(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMVectorProperty_GetCleanCommand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCleanCommand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMVectorProperty *op = static_cast<vtkSMVectorProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetCleanCommand() :
      op->vtkSMVectorProperty::GetCleanCommand());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMVectorProperty_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMVectorProperty *op = static_cast<vtkSMVectorProperty *>(vp);

  vtkSMProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProperty"))
  {
    if (ap.IsBound())
    {
      op->Copy(temp0);
    }
    else
    {
      op->vtkSMVectorProperty::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMVectorProperty_SetSetNumberCommand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSetNumberCommand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMVectorProperty *op = static_cast<vtkSMVectorProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSetNumberCommand(temp0);
    }
    else
    {
      op->vtkSMVectorProperty::SetSetNumberCommand(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMVectorProperty_GetSetNumberCommand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSetNumberCommand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMVectorProperty *op = static_cast<vtkSMVectorProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetSetNumberCommand() :
      op->vtkSMVectorProperty::GetSetNumberCommand());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMVectorProperty_SetInitialString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInitialString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMVectorProperty *op = static_cast<vtkSMVectorProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInitialString(temp0);
    }
    else
    {
      op->vtkSMVectorProperty::SetInitialString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMVectorProperty_GetInitialString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInitialString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMVectorProperty *op = static_cast<vtkSMVectorProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetInitialString() :
      op->vtkSMVectorProperty::GetInitialString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMVectorProperty_ResetToDomainDefaults(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetToDomainDefaults");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMVectorProperty *op = static_cast<vtkSMVectorProperty *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    bool tempr = (ap.IsBound() ?
      op->ResetToDomainDefaults(temp0) :
      op->vtkSMVectorProperty::ResetToDomainDefaults(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMVectorProperty_Methods[] = {
  {"IsTypeOf", PyvtkSMVectorProperty_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMVectorProperty_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMVectorProperty_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMVectorProperty\nC++: static vtkSMVectorProperty *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMVectorProperty_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMVectorProperty\nC++: vtkSMVectorProperty *NewInstance()\n\n"},
  {"GetNumberOfElements", PyvtkSMVectorProperty_GetNumberOfElements, METH_VARARGS,
   "V.GetNumberOfElements() -> int\nC++: virtual unsigned int GetNumberOfElements()\n\nReturns the size of the vector.\n"},
  {"SetNumberOfElements", PyvtkSMVectorProperty_SetNumberOfElements, METH_VARARGS,
   "V.SetNumberOfElements(int)\nC++: virtual void SetNumberOfElements(unsigned int num)\n\nSets the size of the vector.\n"},
  {"GetNumberOfUncheckedElements", PyvtkSMVectorProperty_GetNumberOfUncheckedElements, METH_VARARGS,
   "V.GetNumberOfUncheckedElements() -> int\nC++: virtual unsigned int GetNumberOfUncheckedElements()\n\nAPI for setting unchecked element values.\n"},
  {"SetNumberOfUncheckedElements", PyvtkSMVectorProperty_SetNumberOfUncheckedElements, METH_VARARGS,
   "V.SetNumberOfUncheckedElements(int)\nC++: virtual void SetNumberOfUncheckedElements(unsigned int num)\n\nAPI for setting unchecked element values.\n"},
  {"ClearUncheckedElements", PyvtkSMVectorProperty_ClearUncheckedElements, METH_VARARGS,
   "V.ClearUncheckedElements()\nC++: void ClearUncheckedElements() override = 0;\n\nAPI for setting unchecked element values.\n"},
  {"GetRepeatCommand", PyvtkSMVectorProperty_GetRepeatCommand, METH_VARARGS,
   "V.GetRepeatCommand() -> int\nC++: virtual int GetRepeatCommand()\n\nIf RepeatCommand is true, the command is invoked multiple times,\neach time with NumberOfElementsPerCommand values. For example, if\nRepeatCommand is true, NumberOfElementsPerCommand is 2, the\ncommand is SetFoo and the values are 1 2 3 4 5 6, the resulting\nstream will have:\n * Invoke obj SetFoo 1 2\n * Invoke obj SetFoo 3 4\n * Invoke obj SetFoo 5 6\n \n"},
  {"SetRepeatCommand", PyvtkSMVectorProperty_SetRepeatCommand, METH_VARARGS,
   "V.SetRepeatCommand(int)\nC++: virtual void SetRepeatCommand(int _arg)\n\nIf RepeatCommand is true, the command is invoked multiple times,\neach time with NumberOfElementsPerCommand values. For example, if\nRepeatCommand is true, NumberOfElementsPerCommand is 2, the\ncommand is SetFoo and the values are 1 2 3 4 5 6, the resulting\nstream will have:\n * Invoke obj SetFoo 1 2\n * Invoke obj SetFoo 3 4\n * Invoke obj SetFoo 5 6\n \n"},
  {"RepeatCommandOn", PyvtkSMVectorProperty_RepeatCommandOn, METH_VARARGS,
   "V.RepeatCommandOn()\nC++: virtual void RepeatCommandOn()\n\nIf RepeatCommand is true, the command is invoked multiple times,\neach time with NumberOfElementsPerCommand values. For example, if\nRepeatCommand is true, NumberOfElementsPerCommand is 2, the\ncommand is SetFoo and the values are 1 2 3 4 5 6, the resulting\nstream will have:\n * Invoke obj SetFoo 1 2\n * Invoke obj SetFoo 3 4\n * Invoke obj SetFoo 5 6\n \n"},
  {"RepeatCommandOff", PyvtkSMVectorProperty_RepeatCommandOff, METH_VARARGS,
   "V.RepeatCommandOff()\nC++: virtual void RepeatCommandOff()\n\nIf RepeatCommand is true, the command is invoked multiple times,\neach time with NumberOfElementsPerCommand values. For example, if\nRepeatCommand is true, NumberOfElementsPerCommand is 2, the\ncommand is SetFoo and the values are 1 2 3 4 5 6, the resulting\nstream will have:\n * Invoke obj SetFoo 1 2\n * Invoke obj SetFoo 3 4\n * Invoke obj SetFoo 5 6\n \n"},
  {"GetNumberOfElementsPerCommand", PyvtkSMVectorProperty_GetNumberOfElementsPerCommand, METH_VARARGS,
   "V.GetNumberOfElementsPerCommand() -> int\nC++: virtual int GetNumberOfElementsPerCommand()\n\nIf RepeatCommand is true, the command is invoked multiple times,\neach time with NumberOfElementsPerCommand values. For example, if\nRepeatCommand is true, NumberOfElementsPerCommand is 2, the\ncommand is SetFoo and the values are 1 2 3 4 5 6, the resulting\nstream will have:\n * Invoke obj SetFoo 1 2\n * Invoke obj SetFoo 3 4\n * Invoke obj SetFoo 5 6\n \n"},
  {"SetNumberOfElementsPerCommand", PyvtkSMVectorProperty_SetNumberOfElementsPerCommand, METH_VARARGS,
   "V.SetNumberOfElementsPerCommand(int)\nC++: virtual void SetNumberOfElementsPerCommand(int _arg)\n\nIf RepeatCommand is true, the command is invoked multiple times,\neach time with NumberOfElementsPerCommand values. For example, if\nRepeatCommand is true, NumberOfElementsPerCommand is 2, the\ncommand is SetFoo and the values are 1 2 3 4 5 6, the resulting\nstream will have:\n * Invoke obj SetFoo 1 2\n * Invoke obj SetFoo 3 4\n * Invoke obj SetFoo 5 6\n \n"},
  {"GetUseIndex", PyvtkSMVectorProperty_GetUseIndex, METH_VARARGS,
   "V.GetUseIndex() -> int\nC++: virtual int GetUseIndex()\n\nIf UseIndex and RepeatCommand are true, the property will add an\nindex integer before each command. For example, if UseIndex and\nRepeatCommand are true, NumberOfElementsPerCommand is 2, the\ncommand is SetFoo and the values are 5 6 7 8 9 10, the resulting\nstream will have:\n * Invoke obj SetFoo 0 5 6\n * Invoke obj SetFoo 1 7 8\n * Invoke obj SetFoo 2 9 10\n \n"},
  {"SetUseIndex", PyvtkSMVectorProperty_SetUseIndex, METH_VARARGS,
   "V.SetUseIndex(int)\nC++: virtual void SetUseIndex(int _arg)\n\nIf UseIndex and RepeatCommand are true, the property will add an\nindex integer before each command. For example, if UseIndex and\nRepeatCommand are true, NumberOfElementsPerCommand is 2, the\ncommand is SetFoo and the values are 5 6 7 8 9 10, the resulting\nstream will have:\n * Invoke obj SetFoo 0 5 6\n * Invoke obj SetFoo 1 7 8\n * Invoke obj SetFoo 2 9 10\n \n"},
  {"UseIndexOn", PyvtkSMVectorProperty_UseIndexOn, METH_VARARGS,
   "V.UseIndexOn()\nC++: virtual void UseIndexOn()\n\nIf UseIndex and RepeatCommand are true, the property will add an\nindex integer before each command. For example, if UseIndex and\nRepeatCommand are true, NumberOfElementsPerCommand is 2, the\ncommand is SetFoo and the values are 5 6 7 8 9 10, the resulting\nstream will have:\n * Invoke obj SetFoo 0 5 6\n * Invoke obj SetFoo 1 7 8\n * Invoke obj SetFoo 2 9 10\n \n"},
  {"UseIndexOff", PyvtkSMVectorProperty_UseIndexOff, METH_VARARGS,
   "V.UseIndexOff()\nC++: virtual void UseIndexOff()\n\nIf UseIndex and RepeatCommand are true, the property will add an\nindex integer before each command. For example, if UseIndex and\nRepeatCommand are true, NumberOfElementsPerCommand is 2, the\ncommand is SetFoo and the values are 5 6 7 8 9 10, the resulting\nstream will have:\n * Invoke obj SetFoo 0 5 6\n * Invoke obj SetFoo 1 7 8\n * Invoke obj SetFoo 2 9 10\n \n"},
  {"SetCleanCommand", PyvtkSMVectorProperty_SetCleanCommand, METH_VARARGS,
   "V.SetCleanCommand(string)\nC++: virtual void SetCleanCommand(const char *_arg)\n\nCommand that can be used to remove all values. Typically used\nwhen RepeatCommand = 1. If set, the clean command is called\nbefore the main Command.\n"},
  {"GetCleanCommand", PyvtkSMVectorProperty_GetCleanCommand, METH_VARARGS,
   "V.GetCleanCommand() -> string\nC++: virtual char *GetCleanCommand()\n\nCommand that can be used to remove all values. Typically used\nwhen RepeatCommand = 1. If set, the clean command is called\nbefore the main Command.\n"},
  {"Copy", PyvtkSMVectorProperty_Copy, METH_VARARGS,
   "V.Copy(vtkSMProperty)\nC++: void Copy(vtkSMProperty *src) override;\n\nCopy all property values.\n"},
  {"SetSetNumberCommand", PyvtkSMVectorProperty_SetSetNumberCommand, METH_VARARGS,
   "V.SetSetNumberCommand(string)\nC++: virtual void SetSetNumberCommand(const char *_arg)\n\nIf SetNumberCommand is set, it is called before Command with the\nnumber of arguments as the parameter.\n"},
  {"GetSetNumberCommand", PyvtkSMVectorProperty_GetSetNumberCommand, METH_VARARGS,
   "V.GetSetNumberCommand() -> string\nC++: virtual char *GetSetNumberCommand()\n\nIf SetNumberCommand is set, it is called before Command with the\nnumber of arguments as the parameter.\n"},
  {"SetInitialString", PyvtkSMVectorProperty_SetInitialString, METH_VARARGS,
   "V.SetInitialString(string)\nC++: virtual void SetInitialString(const char *_arg)\n\n"},
  {"GetInitialString", PyvtkSMVectorProperty_GetInitialString, METH_VARARGS,
   "V.GetInitialString() -> string\nC++: virtual char *GetInitialString()\n\n"},
  {"ResetToDomainDefaults", PyvtkSMVectorProperty_ResetToDomainDefaults, METH_VARARGS,
   "V.ResetToDomainDefaults(bool) -> bool\nC++: bool ResetToDomainDefaults(bool use_unchecked_values=false)\n    override;\n\nOverridden to add support to load defaults from\nthis->GetInformationProperty(), if one exists. If the superclass\n(which checks for defaults from all domains) doesn't end up\npicking a default, as a last resort, we check if the property has\na non-empty information_property. If so, we copy its values to\nthis property as the default.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMVectorProperty_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMVectorProperty", // tp_name
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
  PyvtkSMVectorProperty_Doc, // tp_doc
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

PyObject *PyvtkSMVectorProperty_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMVectorProperty_Type, PyvtkSMVectorProperty_Methods,
    "vtkSMVectorProperty",
 nullptr);

  PyTypeObject *pytype = &PyvtkSMVectorProperty_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMProperty_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMVectorProperty(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMVectorProperty_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMVectorProperty", o) != 0)
  {
    Py_DECREF(o);
  }

}

