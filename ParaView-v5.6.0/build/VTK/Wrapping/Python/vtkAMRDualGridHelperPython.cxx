// python wrapper for vtkAMRDualGridHelper
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
#include "vtkAMRDualGridHelper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAMRDualGridHelper(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAMRDualGridHelper_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkAMRDualGridHelper_Doc =
  "vtkAMRDualGridHelper - Tools for processing AMR as a dual grid.\n\n"
  "Superclass: vtkObject\n\n"
  "This helper object was developed to help the AMR dual grid\n"
  "connectivity and integration filter but I also want a dual grid iso\n"
  "surface filter so I mad it a separate class.  The API needs to be\n"
  "improved to make it more generally useful. This class will take\n"
  "advantage of some meta information, if available from a coprocessing\n"
  "adaptor.  If not available, it will compute the information.\n\n";


static PyObject *
PyvtkAMRDualGridHelper_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAMRDualGridHelper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualGridHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualGridHelper *op = static_cast<vtkAMRDualGridHelper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAMRDualGridHelper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualGridHelper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAMRDualGridHelper *tempr = vtkAMRDualGridHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualGridHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualGridHelper *op = static_cast<vtkAMRDualGridHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAMRDualGridHelper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAMRDualGridHelper::NewInstance());

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
PyvtkAMRDualGridHelper_GetSkipGhostCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSkipGhostCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualGridHelper *op = static_cast<vtkAMRDualGridHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSkipGhostCopy() :
      op->vtkAMRDualGridHelper::GetSkipGhostCopy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualGridHelper_SetSkipGhostCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSkipGhostCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualGridHelper *op = static_cast<vtkAMRDualGridHelper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSkipGhostCopy(temp0);
    }
    else
    {
      op->vtkAMRDualGridHelper::SetSkipGhostCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualGridHelper_SkipGhostCopyOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SkipGhostCopyOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualGridHelper *op = static_cast<vtkAMRDualGridHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SkipGhostCopyOn();
    }
    else
    {
      op->vtkAMRDualGridHelper::SkipGhostCopyOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualGridHelper_SkipGhostCopyOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SkipGhostCopyOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualGridHelper *op = static_cast<vtkAMRDualGridHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SkipGhostCopyOff();
    }
    else
    {
      op->vtkAMRDualGridHelper::SkipGhostCopyOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualGridHelper_GetEnableDegenerateCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableDegenerateCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualGridHelper *op = static_cast<vtkAMRDualGridHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnableDegenerateCells() :
      op->vtkAMRDualGridHelper::GetEnableDegenerateCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualGridHelper_SetEnableDegenerateCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableDegenerateCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualGridHelper *op = static_cast<vtkAMRDualGridHelper *>(vp);

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
      op->vtkAMRDualGridHelper::SetEnableDegenerateCells(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualGridHelper_EnableDegenerateCellsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableDegenerateCellsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualGridHelper *op = static_cast<vtkAMRDualGridHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableDegenerateCellsOn();
    }
    else
    {
      op->vtkAMRDualGridHelper::EnableDegenerateCellsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualGridHelper_EnableDegenerateCellsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableDegenerateCellsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualGridHelper *op = static_cast<vtkAMRDualGridHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableDegenerateCellsOff();
    }
    else
    {
      op->vtkAMRDualGridHelper::EnableDegenerateCellsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualGridHelper_GetEnableAsynchronousCommunication(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableAsynchronousCommunication");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualGridHelper *op = static_cast<vtkAMRDualGridHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnableAsynchronousCommunication() :
      op->vtkAMRDualGridHelper::GetEnableAsynchronousCommunication());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualGridHelper_SetEnableAsynchronousCommunication(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableAsynchronousCommunication");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualGridHelper *op = static_cast<vtkAMRDualGridHelper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnableAsynchronousCommunication(temp0);
    }
    else
    {
      op->vtkAMRDualGridHelper::SetEnableAsynchronousCommunication(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualGridHelper_EnableAsynchronousCommunicationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAsynchronousCommunicationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualGridHelper *op = static_cast<vtkAMRDualGridHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableAsynchronousCommunicationOn();
    }
    else
    {
      op->vtkAMRDualGridHelper::EnableAsynchronousCommunicationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualGridHelper_EnableAsynchronousCommunicationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAsynchronousCommunicationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualGridHelper *op = static_cast<vtkAMRDualGridHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableAsynchronousCommunicationOff();
    }
    else
    {
      op->vtkAMRDualGridHelper::EnableAsynchronousCommunicationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualGridHelper_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualGridHelper *op = static_cast<vtkAMRDualGridHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkAMRDualGridHelper::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualGridHelper_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualGridHelper *op = static_cast<vtkAMRDualGridHelper *>(vp);

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
      op->vtkAMRDualGridHelper::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualGridHelper_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualGridHelper *op = static_cast<vtkAMRDualGridHelper *>(vp);

  vtkNonOverlappingAMR *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkNonOverlappingAMR"))
  {
    int tempr = (ap.IsBound() ?
      op->Initialize(temp0) :
      op->vtkAMRDualGridHelper::Initialize(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualGridHelper_SetupData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetupData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualGridHelper *op = static_cast<vtkAMRDualGridHelper *>(vp);

  vtkNonOverlappingAMR *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkNonOverlappingAMR") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->SetupData(temp0, temp1) :
      op->vtkAMRDualGridHelper::SetupData(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualGridHelper_GetGlobalOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualGridHelper *op = static_cast<vtkAMRDualGridHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const double *tempr = (ap.IsBound() ?
      op->GetGlobalOrigin() :
      op->vtkAMRDualGridHelper::GetGlobalOrigin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualGridHelper_GetRootSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRootSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualGridHelper *op = static_cast<vtkAMRDualGridHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const double *tempr = (ap.IsBound() ?
      op->GetRootSpacing() :
      op->vtkAMRDualGridHelper::GetRootSpacing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualGridHelper_GetNumberOfBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualGridHelper *op = static_cast<vtkAMRDualGridHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfBlocks() :
      op->vtkAMRDualGridHelper::GetNumberOfBlocks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualGridHelper_GetNumberOfLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualGridHelper *op = static_cast<vtkAMRDualGridHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLevels() :
      op->vtkAMRDualGridHelper::GetNumberOfLevels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualGridHelper_GetNumberOfBlocksInLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBlocksInLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualGridHelper *op = static_cast<vtkAMRDualGridHelper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfBlocksInLevel(temp0) :
      op->vtkAMRDualGridHelper::GetNumberOfBlocksInLevel(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualGridHelper_ProcessRegionRemoteCopyQueue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessRegionRemoteCopyQueue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualGridHelper *op = static_cast<vtkAMRDualGridHelper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ProcessRegionRemoteCopyQueue(temp0);
    }
    else
    {
      op->vtkAMRDualGridHelper::ProcessRegionRemoteCopyQueue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualGridHelper_ClearRegionRemoteCopyQueue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearRegionRemoteCopyQueue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualGridHelper *op = static_cast<vtkAMRDualGridHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearRegionRemoteCopyQueue();
    }
    else
    {
      op->vtkAMRDualGridHelper::ClearRegionRemoteCopyQueue();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualGridHelper_GetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualGridHelper *op = static_cast<vtkAMRDualGridHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetArrayName() :
      op->vtkAMRDualGridHelper::GetArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAMRDualGridHelper_Methods[] = {
  {"IsTypeOf", PyvtkAMRDualGridHelper_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAMRDualGridHelper_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAMRDualGridHelper_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAMRDualGridHelper\nC++: static vtkAMRDualGridHelper *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAMRDualGridHelper_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAMRDualGridHelper\nC++: vtkAMRDualGridHelper *NewInstance()\n\n"},
  {"GetSkipGhostCopy", PyvtkAMRDualGridHelper_GetSkipGhostCopy, METH_VARARGS,
   "V.GetSkipGhostCopy() -> int\nC++: virtual int GetSkipGhostCopy()\n\nAn option to turn off copying ghost values across process\nboundaries. If the ghost values are already correct, then the\nextra communication is not necessary.  If this assumption is\nwrong, this option will produce cracks / seams.  This is off by\ndefault.\n"},
  {"SetSkipGhostCopy", PyvtkAMRDualGridHelper_SetSkipGhostCopy, METH_VARARGS,
   "V.SetSkipGhostCopy(int)\nC++: virtual void SetSkipGhostCopy(int _arg)\n\nAn option to turn off copying ghost values across process\nboundaries. If the ghost values are already correct, then the\nextra communication is not necessary.  If this assumption is\nwrong, this option will produce cracks / seams.  This is off by\ndefault.\n"},
  {"SkipGhostCopyOn", PyvtkAMRDualGridHelper_SkipGhostCopyOn, METH_VARARGS,
   "V.SkipGhostCopyOn()\nC++: virtual void SkipGhostCopyOn()\n\nAn option to turn off copying ghost values across process\nboundaries. If the ghost values are already correct, then the\nextra communication is not necessary.  If this assumption is\nwrong, this option will produce cracks / seams.  This is off by\ndefault.\n"},
  {"SkipGhostCopyOff", PyvtkAMRDualGridHelper_SkipGhostCopyOff, METH_VARARGS,
   "V.SkipGhostCopyOff()\nC++: virtual void SkipGhostCopyOff()\n\nAn option to turn off copying ghost values across process\nboundaries. If the ghost values are already correct, then the\nextra communication is not necessary.  If this assumption is\nwrong, this option will produce cracks / seams.  This is off by\ndefault.\n"},
  {"GetEnableDegenerateCells", PyvtkAMRDualGridHelper_GetEnableDegenerateCells, METH_VARARGS,
   "V.GetEnableDegenerateCells() -> int\nC++: virtual int GetEnableDegenerateCells()\n\nTurn on/off the ability to create meshing between levels in the\ngrid.  This is on by default.  Set this before you call\ninitialize.\n"},
  {"SetEnableDegenerateCells", PyvtkAMRDualGridHelper_SetEnableDegenerateCells, METH_VARARGS,
   "V.SetEnableDegenerateCells(int)\nC++: virtual void SetEnableDegenerateCells(int _arg)\n\nTurn on/off the ability to create meshing between levels in the\ngrid.  This is on by default.  Set this before you call\ninitialize.\n"},
  {"EnableDegenerateCellsOn", PyvtkAMRDualGridHelper_EnableDegenerateCellsOn, METH_VARARGS,
   "V.EnableDegenerateCellsOn()\nC++: virtual void EnableDegenerateCellsOn()\n\nTurn on/off the ability to create meshing between levels in the\ngrid.  This is on by default.  Set this before you call\ninitialize.\n"},
  {"EnableDegenerateCellsOff", PyvtkAMRDualGridHelper_EnableDegenerateCellsOff, METH_VARARGS,
   "V.EnableDegenerateCellsOff()\nC++: virtual void EnableDegenerateCellsOff()\n\nTurn on/off the ability to create meshing between levels in the\ngrid.  This is on by default.  Set this before you call\ninitialize.\n"},
  {"GetEnableAsynchronousCommunication", PyvtkAMRDualGridHelper_GetEnableAsynchronousCommunication, METH_VARARGS,
   "V.GetEnableAsynchronousCommunication() -> int\nC++: virtual int GetEnableAsynchronousCommunication()\n\nWhen this option is on (the default) and a controller that\nsupports asynchronous communication (like MPI) is detected, use\nasynchronous communication where appropriate.  This can prevent\nprocesses from blocking while waiting for communication in other\nprocesses to finish.\n"},
  {"SetEnableAsynchronousCommunication", PyvtkAMRDualGridHelper_SetEnableAsynchronousCommunication, METH_VARARGS,
   "V.SetEnableAsynchronousCommunication(int)\nC++: virtual void SetEnableAsynchronousCommunication(int _arg)\n\nWhen this option is on (the default) and a controller that\nsupports asynchronous communication (like MPI) is detected, use\nasynchronous communication where appropriate.  This can prevent\nprocesses from blocking while waiting for communication in other\nprocesses to finish.\n"},
  {"EnableAsynchronousCommunicationOn", PyvtkAMRDualGridHelper_EnableAsynchronousCommunicationOn, METH_VARARGS,
   "V.EnableAsynchronousCommunicationOn()\nC++: virtual void EnableAsynchronousCommunicationOn()\n\nWhen this option is on (the default) and a controller that\nsupports asynchronous communication (like MPI) is detected, use\nasynchronous communication where appropriate.  This can prevent\nprocesses from blocking while waiting for communication in other\nprocesses to finish.\n"},
  {"EnableAsynchronousCommunicationOff", PyvtkAMRDualGridHelper_EnableAsynchronousCommunicationOff, METH_VARARGS,
   "V.EnableAsynchronousCommunicationOff()\nC++: virtual void EnableAsynchronousCommunicationOff()\n\nWhen this option is on (the default) and a controller that\nsupports asynchronous communication (like MPI) is detected, use\nasynchronous communication where appropriate.  This can prevent\nprocesses from blocking while waiting for communication in other\nprocesses to finish.\n"},
  {"GetController", PyvtkAMRDualGridHelper_GetController, METH_VARARGS,
   "V.GetController() -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\nThe controller to use for communication.\n"},
  {"SetController", PyvtkAMRDualGridHelper_SetController, METH_VARARGS,
   "V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nThe controller to use for communication.\n"},
  {"Initialize", PyvtkAMRDualGridHelper_Initialize, METH_VARARGS,
   "V.Initialize(vtkNonOverlappingAMR) -> int\nC++: int Initialize(vtkNonOverlappingAMR *input)\n\n"},
  {"SetupData", PyvtkAMRDualGridHelper_SetupData, METH_VARARGS,
   "V.SetupData(vtkNonOverlappingAMR, string) -> int\nC++: int SetupData(vtkNonOverlappingAMR *input,\n    const char *arrayName)\n\n"},
  {"GetGlobalOrigin", PyvtkAMRDualGridHelper_GetGlobalOrigin, METH_VARARGS,
   "V.GetGlobalOrigin() -> (float, ...)\nC++: const double *GetGlobalOrigin()\n\n"},
  {"GetRootSpacing", PyvtkAMRDualGridHelper_GetRootSpacing, METH_VARARGS,
   "V.GetRootSpacing() -> (float, ...)\nC++: const double *GetRootSpacing()\n\n"},
  {"GetNumberOfBlocks", PyvtkAMRDualGridHelper_GetNumberOfBlocks, METH_VARARGS,
   "V.GetNumberOfBlocks() -> int\nC++: int GetNumberOfBlocks()\n\n"},
  {"GetNumberOfLevels", PyvtkAMRDualGridHelper_GetNumberOfLevels, METH_VARARGS,
   "V.GetNumberOfLevels() -> int\nC++: int GetNumberOfLevels()\n\n"},
  {"GetNumberOfBlocksInLevel", PyvtkAMRDualGridHelper_GetNumberOfBlocksInLevel, METH_VARARGS,
   "V.GetNumberOfBlocksInLevel(int) -> int\nC++: int GetNumberOfBlocksInLevel(int level)\n\n"},
  {"ProcessRegionRemoteCopyQueue", PyvtkAMRDualGridHelper_ProcessRegionRemoteCopyQueue, METH_VARARGS,
   "V.ProcessRegionRemoteCopyQueue(bool)\nC++: void ProcessRegionRemoteCopyQueue(bool hackLevelFlag)\n\nThis should be called on every process.  It processes the queue\nof region copies. It sends and copies the regions into blocks.\n"},
  {"ClearRegionRemoteCopyQueue", PyvtkAMRDualGridHelper_ClearRegionRemoteCopyQueue, METH_VARARGS,
   "V.ClearRegionRemoteCopyQueue()\nC++: void ClearRegionRemoteCopyQueue()\n\nCall this before adding regions to the queue.  It clears the\nqueue.\n"},
  {"GetArrayName", PyvtkAMRDualGridHelper_GetArrayName, METH_VARARGS,
   "V.GetArrayName() -> string\nC++: virtual char *GetArrayName()\n\nIt is convenient to get this here.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAMRDualGridHelper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkAMRDualGridHelper", // tp_name
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
  PyvtkAMRDualGridHelper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAMRDualGridHelper_StaticNew()
{
  return vtkAMRDualGridHelper::New();
}

PyObject *PyvtkAMRDualGridHelper_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAMRDualGridHelper_Type, PyvtkAMRDualGridHelper_Methods,
    "vtkAMRDualGridHelper",
 &PyvtkAMRDualGridHelper_StaticNew);

  PyTypeObject *pytype = &PyvtkAMRDualGridHelper_Type;

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


static const char *PyvtkAMRDualGridHelperBlock_Doc =
  "vtkAMRDualGridHelperBlock - no description provided.\n\n"

  "vtkAMRDualGridHelperBlock()\n"
  "vtkAMRDualGridHelperBlock(const &vtkAMRDualGridHelperBlock)\n";


static PyObject *
PyvtkAMRDualGridHelperBlock_ResetRegionBits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetRegionBits");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkAMRDualGridHelperBlock *op = static_cast<vtkAMRDualGridHelperBlock *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->ResetRegionBits();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualGridHelperBlock_AddBackGhostLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddBackGhostLevels");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkAMRDualGridHelperBlock *op = static_cast<vtkAMRDualGridHelperBlock *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  int save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    op->AddBackGhostLevels(temp0);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAMRDualGridHelperBlock_Methods[] = {
  {"ResetRegionBits", PyvtkAMRDualGridHelperBlock_ResetRegionBits, METH_VARARGS,
   "V.ResetRegionBits()\nC++: void ResetRegionBits()\n\n"},
  {"AddBackGhostLevels", PyvtkAMRDualGridHelperBlock_AddBackGhostLevels, METH_VARARGS,
   "V.AddBackGhostLevels([int, int, int])\nC++: void AddBackGhostLevels(int standardBlockDimensions[3])\n\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkAMRDualGridHelperBlock_vtkAMRDualGridHelperBlock_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkAMRDualGridHelperBlock");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkAMRDualGridHelperBlock *op = new vtkAMRDualGridHelperBlock();

    result = PyVTKSpecialObject_New("vtkAMRDualGridHelperBlock", op);
  }

  return result;
}

static PyObject *
PyvtkAMRDualGridHelperBlock_vtkAMRDualGridHelperBlock_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkAMRDualGridHelperBlock");

  vtkAMRDualGridHelperBlock *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkAMRDualGridHelperBlock"))
  {
    vtkAMRDualGridHelperBlock *op = new vtkAMRDualGridHelperBlock(*temp0);

    result = PyVTKSpecialObject_New("vtkAMRDualGridHelperBlock", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkAMRDualGridHelperBlock_vtkAMRDualGridHelperBlock_Methods[] = {
  {nullptr, PyvtkAMRDualGridHelperBlock_vtkAMRDualGridHelperBlock_s2, METH_VARARGS,
   "@W vtkAMRDualGridHelperBlock"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkAMRDualGridHelperBlock_vtkAMRDualGridHelperBlock(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkAMRDualGridHelperBlock_vtkAMRDualGridHelperBlock_s1(self, args);
    case 1:
      return PyvtkAMRDualGridHelperBlock_vtkAMRDualGridHelperBlock_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkAMRDualGridHelperBlock");
  return nullptr;
}


static PyObject *
PyvtkAMRDualGridHelperBlock_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkAMRDualGridHelperBlock_vtkAMRDualGridHelperBlock(nullptr, args);
}

static void PyvtkAMRDualGridHelperBlock_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkAMRDualGridHelperBlock *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkAMRDualGridHelperBlock_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", Py_TYPE(self)->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

static PyTypeObject PyvtkAMRDualGridHelperBlock_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkAMRDualGridHelperBlock", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkAMRDualGridHelperBlock_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkAMRDualGridHelperBlock_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkAMRDualGridHelperBlock_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkAMRDualGridHelperBlock_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkAMRDualGridHelperBlock_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkAMRDualGridHelperBlock(*static_cast<const vtkAMRDualGridHelperBlock*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAMRDualGridHelperBlock_TypeNew(); }

PyObject *PyvtkAMRDualGridHelperBlock_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkAMRDualGridHelperBlock_Type,
    PyvtkAMRDualGridHelperBlock_Methods,
    PyvtkAMRDualGridHelperBlock_vtkAMRDualGridHelperBlock_Methods,
    &PyvtkAMRDualGridHelperBlock_CCopy);

  PyTypeObject *pytype = &PyvtkAMRDualGridHelperBlock_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static const char *PyvtkAMRDualGridHelperSeed_Doc =
  "vtkAMRDualGridHelperSeed - no description provided.\n\n"

  "vtkAMRDualGridHelperSeed()\n"
  "vtkAMRDualGridHelperSeed(const &vtkAMRDualGridHelperSeed)\n";

static PyMethodDef PyvtkAMRDualGridHelperSeed_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkAMRDualGridHelperSeed_vtkAMRDualGridHelperSeed_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkAMRDualGridHelperSeed");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkAMRDualGridHelperSeed *op = new vtkAMRDualGridHelperSeed();

    result = PyVTKSpecialObject_New("vtkAMRDualGridHelperSeed", op);
  }

  return result;
}

static PyObject *
PyvtkAMRDualGridHelperSeed_vtkAMRDualGridHelperSeed_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkAMRDualGridHelperSeed");

  vtkAMRDualGridHelperSeed *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkAMRDualGridHelperSeed"))
  {
    vtkAMRDualGridHelperSeed *op = new vtkAMRDualGridHelperSeed(*temp0);

    result = PyVTKSpecialObject_New("vtkAMRDualGridHelperSeed", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkAMRDualGridHelperSeed_vtkAMRDualGridHelperSeed_Methods[] = {
  {nullptr, PyvtkAMRDualGridHelperSeed_vtkAMRDualGridHelperSeed_s2, METH_VARARGS,
   "@W vtkAMRDualGridHelperSeed"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkAMRDualGridHelperSeed_vtkAMRDualGridHelperSeed(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkAMRDualGridHelperSeed_vtkAMRDualGridHelperSeed_s1(self, args);
    case 1:
      return PyvtkAMRDualGridHelperSeed_vtkAMRDualGridHelperSeed_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkAMRDualGridHelperSeed");
  return nullptr;
}


static PyObject *
PyvtkAMRDualGridHelperSeed_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkAMRDualGridHelperSeed_vtkAMRDualGridHelperSeed(nullptr, args);
}

static void PyvtkAMRDualGridHelperSeed_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkAMRDualGridHelperSeed *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkAMRDualGridHelperSeed_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", Py_TYPE(self)->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

static PyTypeObject PyvtkAMRDualGridHelperSeed_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkAMRDualGridHelperSeed", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkAMRDualGridHelperSeed_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkAMRDualGridHelperSeed_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkAMRDualGridHelperSeed_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkAMRDualGridHelperSeed_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkAMRDualGridHelperSeed_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkAMRDualGridHelperSeed(*static_cast<const vtkAMRDualGridHelperSeed*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAMRDualGridHelperSeed_TypeNew(); }

PyObject *PyvtkAMRDualGridHelperSeed_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkAMRDualGridHelperSeed_Type,
    PyvtkAMRDualGridHelperSeed_Methods,
    PyvtkAMRDualGridHelperSeed_vtkAMRDualGridHelperSeed_Methods,
    &PyvtkAMRDualGridHelperSeed_CCopy);

  PyTypeObject *pytype = &PyvtkAMRDualGridHelperSeed_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static const char *PyvtkAMRDualGridHelperFace_Doc =
  "vtkAMRDualGridHelperFace - no description provided.\n\n"

  "vtkAMRDualGridHelperFace()\n"
  "vtkAMRDualGridHelperFace(const &vtkAMRDualGridHelperFace)\n";


static PyObject *
PyvtkAMRDualGridHelperFace_AddFragmentSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFragmentSeed");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkAMRDualGridHelperFace *op = static_cast<vtkAMRDualGridHelperFace *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    op->AddFragmentSeed(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualGridHelperFace_Unregister(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Unregister");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkAMRDualGridHelperFace *op = static_cast<vtkAMRDualGridHelperFace *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->Unregister();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAMRDualGridHelperFace_Methods[] = {
  {"AddFragmentSeed", PyvtkAMRDualGridHelperFace_AddFragmentSeed, METH_VARARGS,
   "V.AddFragmentSeed(int, int, int, int, int)\nC++: void AddFragmentSeed(int level, int x, int y, int z,\n    int fragmentId)\n\n"},
  {"Unregister", PyvtkAMRDualGridHelperFace_Unregister, METH_VARARGS,
   "V.Unregister()\nC++: void Unregister()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkAMRDualGridHelperFace_vtkAMRDualGridHelperFace_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkAMRDualGridHelperFace");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkAMRDualGridHelperFace *op = new vtkAMRDualGridHelperFace();

    result = PyVTKSpecialObject_New("vtkAMRDualGridHelperFace", op);
  }

  return result;
}

static PyObject *
PyvtkAMRDualGridHelperFace_vtkAMRDualGridHelperFace_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkAMRDualGridHelperFace");

  vtkAMRDualGridHelperFace *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkAMRDualGridHelperFace"))
  {
    vtkAMRDualGridHelperFace *op = new vtkAMRDualGridHelperFace(*temp0);

    result = PyVTKSpecialObject_New("vtkAMRDualGridHelperFace", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkAMRDualGridHelperFace_vtkAMRDualGridHelperFace_Methods[] = {
  {nullptr, PyvtkAMRDualGridHelperFace_vtkAMRDualGridHelperFace_s2, METH_VARARGS,
   "@W vtkAMRDualGridHelperFace"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkAMRDualGridHelperFace_vtkAMRDualGridHelperFace(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkAMRDualGridHelperFace_vtkAMRDualGridHelperFace_s1(self, args);
    case 1:
      return PyvtkAMRDualGridHelperFace_vtkAMRDualGridHelperFace_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkAMRDualGridHelperFace");
  return nullptr;
}


static PyObject *
PyvtkAMRDualGridHelperFace_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkAMRDualGridHelperFace_vtkAMRDualGridHelperFace(nullptr, args);
}

static void PyvtkAMRDualGridHelperFace_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkAMRDualGridHelperFace *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkAMRDualGridHelperFace_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", Py_TYPE(self)->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

static PyTypeObject PyvtkAMRDualGridHelperFace_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkAMRDualGridHelperFace", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkAMRDualGridHelperFace_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkAMRDualGridHelperFace_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkAMRDualGridHelperFace_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkAMRDualGridHelperFace_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkAMRDualGridHelperFace_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkAMRDualGridHelperFace(*static_cast<const vtkAMRDualGridHelperFace*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAMRDualGridHelperFace_TypeNew(); }

PyObject *PyvtkAMRDualGridHelperFace_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkAMRDualGridHelperFace_Type,
    PyvtkAMRDualGridHelperFace_Methods,
    PyvtkAMRDualGridHelperFace_vtkAMRDualGridHelperFace_Methods,
    &PyvtkAMRDualGridHelperFace_CCopy);

  PyTypeObject *pytype = &PyvtkAMRDualGridHelperFace_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAMRDualGridHelper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAMRDualGridHelper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAMRDualGridHelper", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkAMRDualGridHelperBlock_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkAMRDualGridHelperBlock", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkAMRDualGridHelperSeed_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkAMRDualGridHelperSeed", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkAMRDualGridHelperFace_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkAMRDualGridHelperFace", o) != 0)
  {
    Py_DECREF(o);
  }

}

