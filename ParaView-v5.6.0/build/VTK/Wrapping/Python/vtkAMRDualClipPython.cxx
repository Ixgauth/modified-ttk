// python wrapper for vtkAMRDualClip
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
#include "vtkAMRDualClip.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAMRDualClip(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAMRDualClip_ClassNew(); }

#ifndef DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkMultiBlockDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkAMRDualClip_Doc =
  "vtkAMRDualClip - Clip (with scalars) an AMR volume to unstructured\ngrid.\n\n"
  "Superclass: vtkMultiBlockDataSetAlgorithm\n\n"
  "This filter clips an AMR volume but does not copy attributes yet.\n"
  "This filter has two important features.  First is that the level\n"
  "transitions are handled correctly, and second is that internal cells\n"
  "are decimated.  I use a variation of degenerate points/cells used for\n"
  "level transitions.\n\n";


static PyObject *
PyvtkAMRDualClip_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAMRDualClip::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualClip_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualClip *op = static_cast<vtkAMRDualClip *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAMRDualClip::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualClip_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAMRDualClip *tempr = vtkAMRDualClip::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualClip_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualClip *op = static_cast<vtkAMRDualClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAMRDualClip *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAMRDualClip::NewInstance());

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
PyvtkAMRDualClip_SetIsoValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIsoValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualClip *op = static_cast<vtkAMRDualClip *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIsoValue(temp0);
    }
    else
    {
      op->vtkAMRDualClip::SetIsoValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualClip_GetIsoValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsoValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualClip *op = static_cast<vtkAMRDualClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetIsoValue() :
      op->vtkAMRDualClip::GetIsoValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualClip_SetEnableInternalDecimation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableInternalDecimation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualClip *op = static_cast<vtkAMRDualClip *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnableInternalDecimation(temp0);
    }
    else
    {
      op->vtkAMRDualClip::SetEnableInternalDecimation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualClip_GetEnableInternalDecimation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableInternalDecimation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualClip *op = static_cast<vtkAMRDualClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnableInternalDecimation() :
      op->vtkAMRDualClip::GetEnableInternalDecimation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualClip_SetEnableDegenerateCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableDegenerateCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualClip *op = static_cast<vtkAMRDualClip *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnableDegenerateCells(temp0);
    }
    else
    {
      op->vtkAMRDualClip::SetEnableDegenerateCells(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualClip_GetEnableDegenerateCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableDegenerateCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualClip *op = static_cast<vtkAMRDualClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnableDegenerateCells() :
      op->vtkAMRDualClip::GetEnableDegenerateCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualClip_EnableDegenerateCellsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableDegenerateCellsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualClip *op = static_cast<vtkAMRDualClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableDegenerateCellsOn();
    }
    else
    {
      op->vtkAMRDualClip::EnableDegenerateCellsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualClip_EnableDegenerateCellsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableDegenerateCellsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualClip *op = static_cast<vtkAMRDualClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableDegenerateCellsOff();
    }
    else
    {
      op->vtkAMRDualClip::EnableDegenerateCellsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualClip_SetEnableMultiProcessCommunication(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableMultiProcessCommunication");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualClip *op = static_cast<vtkAMRDualClip *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnableMultiProcessCommunication(temp0);
    }
    else
    {
      op->vtkAMRDualClip::SetEnableMultiProcessCommunication(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualClip_GetEnableMultiProcessCommunication(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableMultiProcessCommunication");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualClip *op = static_cast<vtkAMRDualClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnableMultiProcessCommunication() :
      op->vtkAMRDualClip::GetEnableMultiProcessCommunication());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualClip_EnableMultiProcessCommunicationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableMultiProcessCommunicationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualClip *op = static_cast<vtkAMRDualClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableMultiProcessCommunicationOn();
    }
    else
    {
      op->vtkAMRDualClip::EnableMultiProcessCommunicationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualClip_EnableMultiProcessCommunicationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableMultiProcessCommunicationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualClip *op = static_cast<vtkAMRDualClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableMultiProcessCommunicationOff();
    }
    else
    {
      op->vtkAMRDualClip::EnableMultiProcessCommunicationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualClip_SetEnableMergePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableMergePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualClip *op = static_cast<vtkAMRDualClip *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnableMergePoints(temp0);
    }
    else
    {
      op->vtkAMRDualClip::SetEnableMergePoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualClip_GetEnableMergePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableMergePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualClip *op = static_cast<vtkAMRDualClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnableMergePoints() :
      op->vtkAMRDualClip::GetEnableMergePoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualClip_EnableMergePointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableMergePointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualClip *op = static_cast<vtkAMRDualClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableMergePointsOn();
    }
    else
    {
      op->vtkAMRDualClip::EnableMergePointsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualClip_EnableMergePointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableMergePointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualClip *op = static_cast<vtkAMRDualClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableMergePointsOff();
    }
    else
    {
      op->vtkAMRDualClip::EnableMergePointsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualClip_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualClip *op = static_cast<vtkAMRDualClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkAMRDualClip::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualClip_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualClip *op = static_cast<vtkAMRDualClip *>(vp);

  vtkMultiProcessController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
  {
    if (ap.IsBound())
    {
      op->SetController(temp0);
    }
    else
    {
      op->vtkAMRDualClip::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAMRDualClip_Methods[] = {
  {"IsTypeOf", PyvtkAMRDualClip_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAMRDualClip_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAMRDualClip_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAMRDualClip\nC++: static vtkAMRDualClip *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAMRDualClip_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAMRDualClip\nC++: vtkAMRDualClip *NewInstance()\n\n"},
  {"SetIsoValue", PyvtkAMRDualClip_SetIsoValue, METH_VARARGS,
   "V.SetIsoValue(float)\nC++: virtual void SetIsoValue(double _arg)\n\n"},
  {"GetIsoValue", PyvtkAMRDualClip_GetIsoValue, METH_VARARGS,
   "V.GetIsoValue() -> float\nC++: virtual double GetIsoValue()\n\n"},
  {"SetEnableInternalDecimation", PyvtkAMRDualClip_SetEnableInternalDecimation, METH_VARARGS,
   "V.SetEnableInternalDecimation(int)\nC++: virtual void SetEnableInternalDecimation(int _arg)\n\nThese are to evaluate performances. You can turn off degenerate\ncells and multiprocess communication to see how they affect speed\nof execution. Degenerate cells is the meshing between levels in\nthe grid.\n"},
  {"GetEnableInternalDecimation", PyvtkAMRDualClip_GetEnableInternalDecimation, METH_VARARGS,
   "V.GetEnableInternalDecimation() -> int\nC++: virtual int GetEnableInternalDecimation()\n\nThese are to evaluate performances. You can turn off degenerate\ncells and multiprocess communication to see how they affect speed\nof execution. Degenerate cells is the meshing between levels in\nthe grid.\n"},
  {"SetEnableDegenerateCells", PyvtkAMRDualClip_SetEnableDegenerateCells, METH_VARARGS,
   "V.SetEnableDegenerateCells(int)\nC++: virtual void SetEnableDegenerateCells(int _arg)\n\nThese are to evaluate performances. You can turn off degenerate\ncells and multiprocess communication to see how they affect speed\nof execution. Degenerate cells is the meshing between levels in\nthe grid.\n"},
  {"GetEnableDegenerateCells", PyvtkAMRDualClip_GetEnableDegenerateCells, METH_VARARGS,
   "V.GetEnableDegenerateCells() -> int\nC++: virtual int GetEnableDegenerateCells()\n\nThese are to evaluate performances. You can turn off degenerate\ncells and multiprocess communication to see how they affect speed\nof execution. Degenerate cells is the meshing between levels in\nthe grid.\n"},
  {"EnableDegenerateCellsOn", PyvtkAMRDualClip_EnableDegenerateCellsOn, METH_VARARGS,
   "V.EnableDegenerateCellsOn()\nC++: virtual void EnableDegenerateCellsOn()\n\nThese are to evaluate performances. You can turn off degenerate\ncells and multiprocess communication to see how they affect speed\nof execution. Degenerate cells is the meshing between levels in\nthe grid.\n"},
  {"EnableDegenerateCellsOff", PyvtkAMRDualClip_EnableDegenerateCellsOff, METH_VARARGS,
   "V.EnableDegenerateCellsOff()\nC++: virtual void EnableDegenerateCellsOff()\n\nThese are to evaluate performances. You can turn off degenerate\ncells and multiprocess communication to see how they affect speed\nof execution. Degenerate cells is the meshing between levels in\nthe grid.\n"},
  {"SetEnableMultiProcessCommunication", PyvtkAMRDualClip_SetEnableMultiProcessCommunication, METH_VARARGS,
   "V.SetEnableMultiProcessCommunication(int)\nC++: virtual void SetEnableMultiProcessCommunication(int _arg)\n\nThese are to evaluate performances. You can turn off degenerate\ncells and multiprocess communication to see how they affect speed\nof execution. Degenerate cells is the meshing between levels in\nthe grid.\n"},
  {"GetEnableMultiProcessCommunication", PyvtkAMRDualClip_GetEnableMultiProcessCommunication, METH_VARARGS,
   "V.GetEnableMultiProcessCommunication() -> int\nC++: virtual int GetEnableMultiProcessCommunication()\n\nThese are to evaluate performances. You can turn off degenerate\ncells and multiprocess communication to see how they affect speed\nof execution. Degenerate cells is the meshing between levels in\nthe grid.\n"},
  {"EnableMultiProcessCommunicationOn", PyvtkAMRDualClip_EnableMultiProcessCommunicationOn, METH_VARARGS,
   "V.EnableMultiProcessCommunicationOn()\nC++: virtual void EnableMultiProcessCommunicationOn()\n\nThese are to evaluate performances. You can turn off degenerate\ncells and multiprocess communication to see how they affect speed\nof execution. Degenerate cells is the meshing between levels in\nthe grid.\n"},
  {"EnableMultiProcessCommunicationOff", PyvtkAMRDualClip_EnableMultiProcessCommunicationOff, METH_VARARGS,
   "V.EnableMultiProcessCommunicationOff()\nC++: virtual void EnableMultiProcessCommunicationOff()\n\nThese are to evaluate performances. You can turn off degenerate\ncells and multiprocess communication to see how they affect speed\nof execution. Degenerate cells is the meshing between levels in\nthe grid.\n"},
  {"SetEnableMergePoints", PyvtkAMRDualClip_SetEnableMergePoints, METH_VARARGS,
   "V.SetEnableMergePoints(int)\nC++: virtual void SetEnableMergePoints(int _arg)\n\nThis flag causes blocks to share locators so there are no\nboundary edges between blocks. It does not eliminate boundary\nedges between processes.\n"},
  {"GetEnableMergePoints", PyvtkAMRDualClip_GetEnableMergePoints, METH_VARARGS,
   "V.GetEnableMergePoints() -> int\nC++: virtual int GetEnableMergePoints()\n\nThis flag causes blocks to share locators so there are no\nboundary edges between blocks. It does not eliminate boundary\nedges between processes.\n"},
  {"EnableMergePointsOn", PyvtkAMRDualClip_EnableMergePointsOn, METH_VARARGS,
   "V.EnableMergePointsOn()\nC++: virtual void EnableMergePointsOn()\n\nThis flag causes blocks to share locators so there are no\nboundary edges between blocks. It does not eliminate boundary\nedges between processes.\n"},
  {"EnableMergePointsOff", PyvtkAMRDualClip_EnableMergePointsOff, METH_VARARGS,
   "V.EnableMergePointsOff()\nC++: virtual void EnableMergePointsOff()\n\nThis flag causes blocks to share locators so there are no\nboundary edges between blocks. It does not eliminate boundary\nedges between processes.\n"},
  {"GetController", PyvtkAMRDualClip_GetController, METH_VARARGS,
   "V.GetController() -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\n"},
  {"SetController", PyvtkAMRDualClip_SetController, METH_VARARGS,
   "V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAMRDualClip_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkAMRDualClip", // tp_name
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
  PyvtkAMRDualClip_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAMRDualClip_StaticNew()
{
  return vtkAMRDualClip::New();
}

PyObject *PyvtkAMRDualClip_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAMRDualClip_Type, PyvtkAMRDualClip_Methods,
    "vtkAMRDualClip",
 &PyvtkAMRDualClip_StaticNew);

  PyTypeObject *pytype = &PyvtkAMRDualClip_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkMultiBlockDataSetAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAMRDualClip(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAMRDualClip_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAMRDualClip", o) != 0)
  {
    Py_DECREF(o);
  }

}

