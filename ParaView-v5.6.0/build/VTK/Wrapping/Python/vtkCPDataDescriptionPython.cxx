// python wrapper for vtkCPDataDescription
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
#include "vtkCPDataDescription.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCPDataDescription(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCPDataDescription_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkCPDataDescription_Doc =
  "vtkCPDataDescription - @ingroup CoProcessing\n\n"
  "Superclass: vtkObject\n\n"
  "This class provides the description of the data for the coprocessor\n"
  "pipelines.\n\n";


static PyObject *
PyvtkCPDataDescription_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCPDataDescription::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPDataDescription_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPDataDescription *op = static_cast<vtkCPDataDescription *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCPDataDescription::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPDataDescription_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCPDataDescription *tempr = vtkCPDataDescription::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPDataDescription_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPDataDescription *op = static_cast<vtkCPDataDescription *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCPDataDescription *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCPDataDescription::NewInstance());

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
PyvtkCPDataDescription_SetTimeData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPDataDescription *op = static_cast<vtkCPDataDescription *>(vp);

  double temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetTimeData(temp0, temp1);
    }
    else
    {
      op->vtkCPDataDescription::SetTimeData(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCPDataDescription_GetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPDataDescription *op = static_cast<vtkCPDataDescription *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetTimeStep() :
      op->vtkCPDataDescription::GetTimeStep());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPDataDescription_GetTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPDataDescription *op = static_cast<vtkCPDataDescription *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTime() :
      op->vtkCPDataDescription::GetTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPDataDescription_SetForceOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPDataDescription *op = static_cast<vtkCPDataDescription *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetForceOutput(temp0);
    }
    else
    {
      op->vtkCPDataDescription::SetForceOutput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCPDataDescription_ForceOutputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceOutputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPDataDescription *op = static_cast<vtkCPDataDescription *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceOutputOn();
    }
    else
    {
      op->vtkCPDataDescription::ForceOutputOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCPDataDescription_ForceOutputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceOutputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPDataDescription *op = static_cast<vtkCPDataDescription *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceOutputOff();
    }
    else
    {
      op->vtkCPDataDescription::ForceOutputOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCPDataDescription_GetForceOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPDataDescription *op = static_cast<vtkCPDataDescription *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetForceOutput() :
      op->vtkCPDataDescription::GetForceOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPDataDescription_AddInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPDataDescription *op = static_cast<vtkCPDataDescription *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddInput(temp0);
    }
    else
    {
      op->vtkCPDataDescription::AddInput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCPDataDescription_GetNumberOfInputDescriptions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfInputDescriptions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPDataDescription *op = static_cast<vtkCPDataDescription *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfInputDescriptions() :
      op->vtkCPDataDescription::GetNumberOfInputDescriptions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPDataDescription_ResetInputDescriptions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetInputDescriptions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPDataDescription *op = static_cast<vtkCPDataDescription *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetInputDescriptions();
    }
    else
    {
      op->vtkCPDataDescription::ResetInputDescriptions();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCPDataDescription_ResetAll(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetAll");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPDataDescription *op = static_cast<vtkCPDataDescription *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetAll();
    }
    else
    {
      op->vtkCPDataDescription::ResetAll();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCPDataDescription_GetInputDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPDataDescription *op = static_cast<vtkCPDataDescription *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCPInputDataDescription *tempr = (ap.IsBound() ?
      op->GetInputDescription(temp0) :
      op->vtkCPDataDescription::GetInputDescription(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPDataDescription_GetInputDescriptionName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputDescriptionName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPDataDescription *op = static_cast<vtkCPDataDescription *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetInputDescriptionName(temp0) :
      op->vtkCPDataDescription::GetInputDescriptionName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPDataDescription_GetInputDescriptionByName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputDescriptionByName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPDataDescription *op = static_cast<vtkCPDataDescription *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCPInputDataDescription *tempr = (ap.IsBound() ?
      op->GetInputDescriptionByName(temp0) :
      op->vtkCPDataDescription::GetInputDescriptionByName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPDataDescription_GetIfGridIsNecessary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIfGridIsNecessary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPDataDescription *op = static_cast<vtkCPDataDescription *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIfGridIsNecessary(temp0) :
      op->vtkCPDataDescription::GetIfGridIsNecessary(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPDataDescription_GetIfAnyGridNecessary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIfAnyGridNecessary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPDataDescription *op = static_cast<vtkCPDataDescription *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIfAnyGridNecessary() :
      op->vtkCPDataDescription::GetIfAnyGridNecessary());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPDataDescription_SetUserData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPDataDescription *op = static_cast<vtkCPDataDescription *>(vp);

  vtkFieldData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFieldData"))
  {
    if (ap.IsBound())
    {
      op->SetUserData(temp0);
    }
    else
    {
      op->vtkCPDataDescription::SetUserData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCPDataDescription_GetUserData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPDataDescription *op = static_cast<vtkCPDataDescription *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFieldData *tempr = (ap.IsBound() ?
      op->GetUserData() :
      op->vtkCPDataDescription::GetUserData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPDataDescription_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPDataDescription *op = static_cast<vtkCPDataDescription *>(vp);

  vtkCPDataDescription *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCPDataDescription"))
  {
    if (ap.IsBound())
    {
      op->Copy(temp0);
    }
    else
    {
      op->vtkCPDataDescription::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCPDataDescription_Methods[] = {
  {"IsTypeOf", PyvtkCPDataDescription_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCPDataDescription_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCPDataDescription_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCPDataDescription\nC++: static vtkCPDataDescription *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCPDataDescription_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCPDataDescription\nC++: vtkCPDataDescription *NewInstance()\n\n"},
  {"SetTimeData", PyvtkCPDataDescription_SetTimeData, METH_VARARGS,
   "V.SetTimeData(float, int)\nC++: void SetTimeData(double time, vtkIdType timeStep)\n\nSet the time step and current simulation time.\n"},
  {"GetTimeStep", PyvtkCPDataDescription_GetTimeStep, METH_VARARGS,
   "V.GetTimeStep() -> int\nC++: virtual vtkIdType GetTimeStep()\n\nGet the current time step that should be set in the adaptor.\n"},
  {"GetTime", PyvtkCPDataDescription_GetTime, METH_VARARGS,
   "V.GetTime() -> float\nC++: virtual double GetTime()\n\nGet the current time that should be set in the adaptor.\n"},
  {"SetForceOutput", PyvtkCPDataDescription_SetForceOutput, METH_VARARGS,
   "V.SetForceOutput(bool)\nC++: virtual void SetForceOutput(bool _arg)\n\nSpecify whether or not to force output of all coprocessing\npipelines. This is meant to be set in the adaptor and used in the\ncoprocessing pipeline.  Default is false.  If this is true then\nGetIsGridNecessary() and GetIfAnyGridIsNecessary() will return\ntrue.\n"},
  {"ForceOutputOn", PyvtkCPDataDescription_ForceOutputOn, METH_VARARGS,
   "V.ForceOutputOn()\nC++: virtual void ForceOutputOn()\n\nSpecify whether or not to force output of all coprocessing\npipelines. This is meant to be set in the adaptor and used in the\ncoprocessing pipeline.  Default is false.  If this is true then\nGetIsGridNecessary() and GetIfAnyGridIsNecessary() will return\ntrue.\n"},
  {"ForceOutputOff", PyvtkCPDataDescription_ForceOutputOff, METH_VARARGS,
   "V.ForceOutputOff()\nC++: virtual void ForceOutputOff()\n\n"},
  {"GetForceOutput", PyvtkCPDataDescription_GetForceOutput, METH_VARARGS,
   "V.GetForceOutput() -> bool\nC++: virtual bool GetForceOutput()\n\nReturn whether or not output is forced for all coprocessing\npipelines.\n"},
  {"AddInput", PyvtkCPDataDescription_AddInput, METH_VARARGS,
   "V.AddInput(string)\nC++: void AddInput(const char *gridName)\n\nAdd names for grids produced by the simulation. This allocates a\nnew vtkCPInputDataDescription for that grid, if a grid by that\nname does not already exist.\n"},
  {"GetNumberOfInputDescriptions", PyvtkCPDataDescription_GetNumberOfInputDescriptions, METH_VARARGS,
   "V.GetNumberOfInputDescriptions() -> int\nC++: unsigned int GetNumberOfInputDescriptions()\n\nReturns the number of input descriptions.\n"},
  {"ResetInputDescriptions", PyvtkCPDataDescription_ResetInputDescriptions, METH_VARARGS,
   "V.ResetInputDescriptions()\nC++: void ResetInputDescriptions()\n\nReset the names of the fields that are needed, the required\nmeshes, etc. that are stored in the vtkCPInputDescriptions.\n"},
  {"ResetAll", PyvtkCPDataDescription_ResetAll, METH_VARARGS,
   "V.ResetAll()\nC++: void ResetAll()\n\nReset the names of the fields that are needed, the required\nmeshes, etc. that are stored in the vtkCPInputDescriptions as\nwell as the time information and output forcing.  Automatically\ncalled after vtkCPProcessor::CoProcess() is called.\n"},
  {"GetInputDescription", PyvtkCPDataDescription_GetInputDescription, METH_VARARGS,
   "V.GetInputDescription(int) -> vtkCPInputDataDescription\nC++: vtkCPInputDataDescription *GetInputDescription(unsigned int)\n\nProvides access to a grid description using the index.\n"},
  {"GetInputDescriptionName", PyvtkCPDataDescription_GetInputDescriptionName, METH_VARARGS,
   "V.GetInputDescriptionName(int) -> string\nC++: const char *GetInputDescriptionName(unsigned int)\n\nProvides the name for the input description at the given index.\n"},
  {"GetInputDescriptionByName", PyvtkCPDataDescription_GetInputDescriptionByName, METH_VARARGS,
   "V.GetInputDescriptionByName(string) -> vtkCPInputDataDescription\nC++: vtkCPInputDataDescription *GetInputDescriptionByName(\n    const char *)\n\nProvides access to a grid description using the grid name.\n"},
  {"GetIfGridIsNecessary", PyvtkCPDataDescription_GetIfGridIsNecessary, METH_VARARGS,
   "V.GetIfGridIsNecessary(string) -> bool\nC++: bool GetIfGridIsNecessary(const char *)\n\nReturns true if the grid is necessary, given the grid's name.\n"},
  {"GetIfAnyGridNecessary", PyvtkCPDataDescription_GetIfAnyGridNecessary, METH_VARARGS,
   "V.GetIfAnyGridNecessary() -> bool\nC++: bool GetIfAnyGridNecessary()\n\nReturns true if any of the grids is necessary.\n"},
  {"SetUserData", PyvtkCPDataDescription_SetUserData, METH_VARARGS,
   "V.SetUserData(vtkFieldData)\nC++: void SetUserData(vtkFieldData *UserData)\n\nSet user defined information that can be passed from the adaptor\nto the coprocessing pipelines.\n"},
  {"GetUserData", PyvtkCPDataDescription_GetUserData, METH_VARARGS,
   "V.GetUserData() -> vtkFieldData\nC++: virtual vtkFieldData *GetUserData()\n\nSet user defined information that can be passed from the adaptor\nto the coprocessing pipelines.\n"},
  {"Copy", PyvtkCPDataDescription_Copy, METH_VARARGS,
   "V.Copy(vtkCPDataDescription)\nC++: void Copy(vtkCPDataDescription *)\n\nCopy of dataDescription. Does a deep copy of the data members but\na shallow copy of the vtkDataObjects.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCPDataDescription_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVCatalystPython.vtkCPDataDescription", // tp_name
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
  PyvtkCPDataDescription_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCPDataDescription_StaticNew()
{
  return vtkCPDataDescription::New();
}

PyObject *PyvtkCPDataDescription_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCPDataDescription_Type, PyvtkCPDataDescription_Methods,
    "vtkCPDataDescription",
 &PyvtkCPDataDescription_StaticNew);

  PyTypeObject *pytype = &PyvtkCPDataDescription_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCPDataDescription(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCPDataDescription_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCPDataDescription", o) != 0)
  {
    Py_DECREF(o);
  }

}

