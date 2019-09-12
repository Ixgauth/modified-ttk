// python wrapper for vtkPVDataDeliveryManager
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
#include "vtkPVDataDeliveryManager.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVDataDeliveryManager(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVDataDeliveryManager_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkPVDataDeliveryManager_Doc =
  "vtkPVDataDeliveryManager - manager for data-delivery.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkPVDataDeliveryManager manages geometry delivering for rendering.\n"
  "It is used by vtkPVRenderView to manage the delivery of geometry to\n"
  "the nodes where rendering is happening. This class helps us\n"
  "consolidate all the code for delivering different types of geometries\n"
  "to all the nodes involved as well we a managing idiosyncrasies like\n"
  "requiring delivering to all nodes, redistributing for ordered\n"
  "compositing, etc.\n\n";


static PyObject *
PyvtkPVDataDeliveryManager_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVDataDeliveryManager::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataDeliveryManager_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataDeliveryManager *op = static_cast<vtkPVDataDeliveryManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVDataDeliveryManager::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataDeliveryManager_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVDataDeliveryManager *tempr = vtkPVDataDeliveryManager::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataDeliveryManager_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataDeliveryManager *op = static_cast<vtkPVDataDeliveryManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVDataDeliveryManager *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVDataDeliveryManager::NewInstance());

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
PyvtkPVDataDeliveryManager_GetSynchronizationMagicNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSynchronizationMagicNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataDeliveryManager *op = static_cast<vtkPVDataDeliveryManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSynchronizationMagicNumber() :
      op->vtkPVDataDeliveryManager::GetSynchronizationMagicNumber());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataDeliveryManager_RegisterRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataDeliveryManager *op = static_cast<vtkPVDataDeliveryManager *>(vp);

  vtkPVDataRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVDataRepresentation"))
  {
    if (ap.IsBound())
    {
      op->RegisterRepresentation(temp0);
    }
    else
    {
      op->vtkPVDataDeliveryManager::RegisterRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataDeliveryManager_UnRegisterRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataDeliveryManager *op = static_cast<vtkPVDataDeliveryManager *>(vp);

  vtkPVDataRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVDataRepresentation"))
  {
    if (ap.IsBound())
    {
      op->UnRegisterRepresentation(temp0);
    }
    else
    {
      op->vtkPVDataDeliveryManager::UnRegisterRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataDeliveryManager_GetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataDeliveryManager *op = static_cast<vtkPVDataDeliveryManager *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPVDataRepresentation *tempr = (ap.IsBound() ?
      op->GetRepresentation(temp0) :
      op->vtkPVDataDeliveryManager::GetRepresentation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataDeliveryManager_SetPiece_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataDeliveryManager *op = static_cast<vtkPVDataDeliveryManager *>(vp);

  vtkPVDataRepresentation *temp0 = nullptr;
  vtkDataObject *temp1 = nullptr;
  bool temp2 = false;
  unsigned long temp3 = 0;
  int temp4 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 5) &&
      ap.GetVTKObject(temp0, "vtkPVDataRepresentation") &&
      ap.GetVTKObject(temp1, "vtkDataObject") &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    if (ap.IsBound())
    {
      op->SetPiece(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkPVDataDeliveryManager::SetPiece(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVDataDeliveryManager_SetPiece_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataDeliveryManager *op = static_cast<vtkPVDataDeliveryManager *>(vp);

  unsigned int temp0;
  vtkDataObject *temp1 = nullptr;
  bool temp2 = false;
  int temp3 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject") &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    if (ap.IsBound())
    {
      op->SetPiece(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPVDataDeliveryManager::SetPiece(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVDataDeliveryManager_SetPiece_Methods[] = {
  {nullptr, PyvtkPVDataDeliveryManager_SetPiece_s1, METH_VARARGS,
   "@VVq|Li *vtkPVDataRepresentation *vtkDataObject"},
  {nullptr, PyvtkPVDataDeliveryManager_SetPiece_s2, METH_VARARGS,
   "@IVq|i *vtkDataObject"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPVDataDeliveryManager_SetPiece(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPVDataDeliveryManager_SetPiece_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 5:
      return PyvtkPVDataDeliveryManager_SetPiece_s1(self, args);
    case 3:
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPiece");
  return nullptr;
}



static PyObject *
PyvtkPVDataDeliveryManager_GetProducer_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProducer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataDeliveryManager *op = static_cast<vtkPVDataDeliveryManager *>(vp);

  vtkPVDataRepresentation *temp0 = nullptr;
  bool temp1 = false;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkPVDataRepresentation") &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetProducer(temp0, temp1, temp2) :
      op->vtkPVDataDeliveryManager::GetProducer(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPVDataDeliveryManager_GetProducer_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProducer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataDeliveryManager *op = static_cast<vtkPVDataDeliveryManager *>(vp);

  unsigned int temp0;
  bool temp1 = false;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetProducer(temp0, temp1, temp2) :
      op->vtkPVDataDeliveryManager::GetProducer(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVDataDeliveryManager_GetProducer_Methods[] = {
  {nullptr, PyvtkPVDataDeliveryManager_GetProducer_s1, METH_VARARGS,
   "@Vq|i *vtkPVDataRepresentation"},
  {nullptr, PyvtkPVDataDeliveryManager_GetProducer_s2, METH_VARARGS,
   "@Iq|i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPVDataDeliveryManager_GetProducer(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPVDataDeliveryManager_GetProducer_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetProducer");
  return nullptr;
}



static PyObject *
PyvtkPVDataDeliveryManager_SetDeliverToAllProcesses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDeliverToAllProcesses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataDeliveryManager *op = static_cast<vtkPVDataDeliveryManager *>(vp);

  vtkPVDataRepresentation *temp0 = nullptr;
  bool temp1 = false;
  bool temp2 = false;
  int temp3 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetVTKObject(temp0, "vtkPVDataRepresentation") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    if (ap.IsBound())
    {
      op->SetDeliverToAllProcesses(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPVDataDeliveryManager::SetDeliverToAllProcesses(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataDeliveryManager_SetDeliverToClientAndRenderingProcesses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDeliverToClientAndRenderingProcesses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataDeliveryManager *op = static_cast<vtkPVDataDeliveryManager *>(vp);

  vtkPVDataRepresentation *temp0 = nullptr;
  bool temp1 = false;
  bool temp2 = false;
  bool temp3 = false;
  int temp4 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4, 5) &&
      ap.GetVTKObject(temp0, "vtkPVDataRepresentation") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    if (ap.IsBound())
    {
      op->SetDeliverToClientAndRenderingProcesses(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkPVDataDeliveryManager::SetDeliverToClientAndRenderingProcesses(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataDeliveryManager_MarkAsRedistributable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkAsRedistributable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataDeliveryManager *op = static_cast<vtkPVDataDeliveryManager *>(vp);

  vtkPVDataRepresentation *temp0 = nullptr;
  bool temp1 = true;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetVTKObject(temp0, "vtkPVDataRepresentation") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->MarkAsRedistributable(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVDataDeliveryManager::MarkAsRedistributable(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataDeliveryManager_SetRedistributionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRedistributionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataDeliveryManager *op = static_cast<vtkPVDataDeliveryManager *>(vp);

  vtkPVDataRepresentation *temp0 = nullptr;
  int temp1;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkPVDataRepresentation") &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->SetRedistributionMode(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVDataDeliveryManager::SetRedistributionMode(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataDeliveryManager_SetRedistributionModeToSplitBoundaryCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRedistributionModeToSplitBoundaryCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataDeliveryManager *op = static_cast<vtkPVDataDeliveryManager *>(vp);

  vtkPVDataRepresentation *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkPVDataRepresentation") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->SetRedistributionModeToSplitBoundaryCells(temp0, temp1);
    }
    else
    {
      op->vtkPVDataDeliveryManager::SetRedistributionModeToSplitBoundaryCells(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataDeliveryManager_SetRedistributionModeToDuplicateBoundaryCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRedistributionModeToDuplicateBoundaryCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataDeliveryManager *op = static_cast<vtkPVDataDeliveryManager *>(vp);

  vtkPVDataRepresentation *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkPVDataRepresentation") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->SetRedistributionModeToDuplicateBoundaryCells(temp0, temp1);
    }
    else
    {
      op->vtkPVDataDeliveryManager::SetRedistributionModeToDuplicateBoundaryCells(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataDeliveryManager_GetVisibleDataSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisibleDataSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataDeliveryManager *op = static_cast<vtkPVDataDeliveryManager *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetVisibleDataSize(temp0) :
      op->vtkPVDataDeliveryManager::GetVisibleDataSize(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataDeliveryManager_GetKdTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKdTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataDeliveryManager *op = static_cast<vtkPVDataDeliveryManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPKdTree *tempr = (ap.IsBound() ?
      op->GetKdTree() :
      op->vtkPVDataDeliveryManager::GetKdTree());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataDeliveryManager_SetRenderView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataDeliveryManager *op = static_cast<vtkPVDataDeliveryManager *>(vp);

  vtkPVRenderView *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVRenderView"))
  {
    if (ap.IsBound())
    {
      op->SetRenderView(temp0);
    }
    else
    {
      op->vtkPVDataDeliveryManager::SetRenderView(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataDeliveryManager_GetRenderView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataDeliveryManager *op = static_cast<vtkPVDataDeliveryManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVRenderView *tempr = (ap.IsBound() ?
      op->GetRenderView() :
      op->vtkPVDataDeliveryManager::GetRenderView());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataDeliveryManager_RedistributeDataForOrderedCompositing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RedistributeDataForOrderedCompositing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataDeliveryManager *op = static_cast<vtkPVDataDeliveryManager *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RedistributeDataForOrderedCompositing(temp0);
    }
    else
    {
      op->vtkPVDataDeliveryManager::RedistributeDataForOrderedCompositing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataDeliveryManager_ClearRedistributedData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearRedistributedData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataDeliveryManager *op = static_cast<vtkPVDataDeliveryManager *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ClearRedistributedData(temp0);
    }
    else
    {
      op->vtkPVDataDeliveryManager::ClearRedistributedData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataDeliveryManager_SetOrderedCompositingInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrderedCompositingInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataDeliveryManager *op = static_cast<vtkPVDataDeliveryManager *>(vp);

  vtkPVDataRepresentation *temp0 = nullptr;
  vtkExtentTranslator *temp1 = nullptr;
  const size_t size2 = 6;
  int temp2[6];
  const size_t size3 = 3;
  double temp3[3];
  const size_t size4 = 3;
  double temp4[3];
  int temp5 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5, 6) &&
      ap.GetVTKObject(temp0, "vtkPVDataRepresentation") &&
      ap.GetVTKObject(temp1, "vtkExtentTranslator") &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)))
  {
    if (ap.IsBound())
    {
      op->SetOrderedCompositingInformation(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkPVDataDeliveryManager::SetOrderedCompositingInformation(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataDeliveryManager_Deliver(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Deliver");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataDeliveryManager *op = static_cast<vtkPVDataDeliveryManager *>(vp);

  int temp0;
  unsigned int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<unsigned int> store2(2*size2);
  unsigned int *temp2 = store2.Data();
  unsigned int *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->Deliver(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVDataDeliveryManager::Deliver(temp0, temp1, temp2);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataDeliveryManager_SetStreamable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStreamable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataDeliveryManager *op = static_cast<vtkPVDataDeliveryManager *>(vp);

  vtkPVDataRepresentation *temp0 = nullptr;
  bool temp1 = false;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkPVDataRepresentation") &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->SetStreamable(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVDataDeliveryManager::SetStreamable(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataDeliveryManager_SetNextStreamedPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNextStreamedPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataDeliveryManager *op = static_cast<vtkPVDataDeliveryManager *>(vp);

  vtkPVDataRepresentation *temp0 = nullptr;
  vtkDataObject *temp1 = nullptr;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkPVDataRepresentation") &&
      ap.GetVTKObject(temp1, "vtkDataObject") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->SetNextStreamedPiece(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVDataDeliveryManager::SetNextStreamedPiece(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataDeliveryManager_GetCurrentStreamedPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentStreamedPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataDeliveryManager *op = static_cast<vtkPVDataDeliveryManager *>(vp);

  vtkPVDataRepresentation *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkPVDataRepresentation") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetCurrentStreamedPiece(temp0, temp1) :
      op->vtkPVDataDeliveryManager::GetCurrentStreamedPiece(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataDeliveryManager_ClearStreamedPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearStreamedPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataDeliveryManager *op = static_cast<vtkPVDataDeliveryManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearStreamedPieces();
    }
    else
    {
      op->vtkPVDataDeliveryManager::ClearStreamedPieces();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataDeliveryManager_DeliverStreamedPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeliverStreamedPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataDeliveryManager *op = static_cast<vtkPVDataDeliveryManager *>(vp);

  unsigned int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<unsigned int> store1(2*size1);
  unsigned int *temp1 = store1.Data();
  unsigned int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->DeliverStreamedPieces(temp0, temp1);
    }
    else
    {
      op->vtkPVDataDeliveryManager::DeliverStreamedPieces(temp0, temp1);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVDataDeliveryManager_Methods[] = {
  {"IsTypeOf", PyvtkPVDataDeliveryManager_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVDataDeliveryManager_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVDataDeliveryManager_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVDataDeliveryManager\nC++: static vtkPVDataDeliveryManager *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVDataDeliveryManager_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVDataDeliveryManager\nC++: vtkPVDataDeliveryManager *NewInstance()\n\n"},
  {"GetSynchronizationMagicNumber", PyvtkPVDataDeliveryManager_GetSynchronizationMagicNumber, METH_VARARGS,
   "V.GetSynchronizationMagicNumber() -> int\nC++: int GetSynchronizationMagicNumber()\n\nReturned a hash number that can be used to verify that both\nclient and server side are in synch representation wise for\ndelivery.\n"},
  {"RegisterRepresentation", PyvtkPVDataDeliveryManager_RegisterRepresentation, METH_VARARGS,
   "V.RegisterRepresentation(vtkPVDataRepresentation)\nC++: void RegisterRepresentation(vtkPVDataRepresentation *repr)\n\nView uses these methods to register a representation with the\nstorage. This makes it possible for representations to\ncommunicate with the storage directly using a self pointer, while\nenables views on different processes to communicate information\nabout representations using their unique ids.\n"},
  {"UnRegisterRepresentation", PyvtkPVDataDeliveryManager_UnRegisterRepresentation, METH_VARARGS,
   "V.UnRegisterRepresentation(vtkPVDataRepresentation)\nC++: void UnRegisterRepresentation(vtkPVDataRepresentation *)\n\nView uses these methods to register a representation with the\nstorage. This makes it possible for representations to\ncommunicate with the storage directly using a self pointer, while\nenables views on different processes to communicate information\nabout representations using their unique ids.\n"},
  {"GetRepresentation", PyvtkPVDataDeliveryManager_GetRepresentation, METH_VARARGS,
   "V.GetRepresentation(int) -> vtkPVDataRepresentation\nC++: vtkPVDataRepresentation *GetRepresentation(unsigned int)\n\nView uses these methods to register a representation with the\nstorage. This makes it possible for representations to\ncommunicate with the storage directly using a self pointer, while\nenables views on different processes to communicate information\nabout representations using their unique ids.\n"},
  {"SetPiece", PyvtkPVDataDeliveryManager_SetPiece, METH_VARARGS,
   "V.SetPiece(vtkPVDataRepresentation, vtkDataObject, bool, int, int)\nC++: void SetPiece(vtkPVDataRepresentation *repr,\n    vtkDataObject *data, bool low_res, unsigned long trueSize=0,\n    int port=0)\nV.SetPiece(int, vtkDataObject, bool, int)\nC++: void SetPiece(unsigned int repr_id, vtkDataObject *data,\n    bool low_res, int port=0)\n\nRepresentations (indirectly via vtkPVRenderView::SetPiece()) call\nthis method to register the geometry type they are rendering.\nEvery representation that requires delivering of any geometry\nmust register with the vtkPVDataDeliveryManager and never manage\nthe delivery on its own.\n"},
  {"GetProducer", PyvtkPVDataDeliveryManager_GetProducer, METH_VARARGS,
   "V.GetProducer(vtkPVDataRepresentation, bool, int)\n    -> vtkAlgorithmOutput\nC++: vtkAlgorithmOutput *GetProducer(vtkPVDataRepresentation *,\n    bool low_res, int port=0)\nV.GetProducer(int, bool, int) -> vtkAlgorithmOutput\nC++: vtkAlgorithmOutput *GetProducer(unsigned int, bool low_res,\n    int port=0)\n\nProvides access to the producer port for the geometry of a\nregistered representation. Representations use these methods\n(indirectly via vtkPVRenderView::GetPieceProducer() and\nGetPieceProducerLOD()) to obtain the geometry producer for the\ngeometry to be rendered.\n"},
  {"SetDeliverToAllProcesses", PyvtkPVDataDeliveryManager_SetDeliverToAllProcesses, METH_VARARGS,
   "V.SetDeliverToAllProcesses(vtkPVDataRepresentation, bool, bool,\n    int)\nC++: void SetDeliverToAllProcesses(vtkPVDataRepresentation *,\n    bool flag, bool low_res, int port=0)\n\nBy default, this class only delivers geometries to nodes that are\ndoing the rendering at a given stage. However, certain\nrepresentations, such as data-label representation, or cube-axes\nrepresentation, need to the geometry to be delivered to all nodes\nalways. That can be done by using this method (via\nvtkPVRenderView::SetDeliverToAllProcesses()).\n"},
  {"SetDeliverToClientAndRenderingProcesses", PyvtkPVDataDeliveryManager_SetDeliverToClientAndRenderingProcesses, METH_VARARGS,
   "V.SetDeliverToClientAndRenderingProcesses(vtkPVDataRepresentation,\n     bool, bool, bool, int)\nC++: void SetDeliverToClientAndRenderingProcesses(\n    vtkPVDataRepresentation *, bool deliver_to_client,\n    bool gather_before_delivery, bool low_res, int port=0)\n\nBy default, this class only delivers geometries to nodes that are\ndoing the rendering at a given stage. However, certain\nrepresentations, such as text-source representation, need to the\ngeometry to be delivered to  the client as well.  That can be\ndone by using this method (via\nvtkPVRenderView::SetDeliverToAllProcesses()). The different\nbetween SetDeliverToAllProcesses() and this is that the former\ngather-and-scatters the data on the server nodes, while the\nlatter will optionally gather the data to deliver to the client\nand never scatter.\n"},
  {"MarkAsRedistributable", PyvtkPVDataDeliveryManager_MarkAsRedistributable, METH_VARARGS,
   "V.MarkAsRedistributable(vtkPVDataRepresentation, bool, int)\nC++: void MarkAsRedistributable(vtkPVDataRepresentation *,\n    bool value=true, int port=0)\n\nUnder certain cases, e.g. when remote rendering in parallel with\ntranslucent geometry, the geometry may need to be redistributed\nto ensure ordered compositing can be employed correctly. Marking\ngeometry provided by a representation as redistributable makes it\npossible for this class to redistribute the geometry as needed.\nOnly vtkPolyData, vtkUnstructuredGrid or a multi-block comprising\nof vtkPolyData is currently supported.\n"},
  {"SetRedistributionMode", PyvtkPVDataDeliveryManager_SetRedistributionMode, METH_VARARGS,
   "V.SetRedistributionMode(vtkPVDataRepresentation, int, int)\nC++: void SetRedistributionMode(vtkPVDataRepresentation *,\n    int mode, int port=0)\n\nFor representations that have indicated that the data is\nredistributable (using MarkAsRedistributable), this control the\nmode for redistribution. Specifically, it indicates how to handle\ncells that are on the boundary of the redistribution KdTree.\nDefault is to split the cells, one can change it to duplicate\ncells instead by using mode as\n`vtkDistributedDataFilter::ASSIGN_TO_ALL_INTERSECTING_REGIONS`.\n"},
  {"SetRedistributionModeToSplitBoundaryCells", PyvtkPVDataDeliveryManager_SetRedistributionModeToSplitBoundaryCells, METH_VARARGS,
   "V.SetRedistributionModeToSplitBoundaryCells(\n    vtkPVDataRepresentation, int)\nC++: void SetRedistributionModeToSplitBoundaryCells(\n    vtkPVDataRepresentation *repr, int port=0)\n\nFor representations that have indicated that the data is\nredistributable (using MarkAsRedistributable), this control the\nmode for redistribution. Specifically, it indicates how to handle\ncells that are on the boundary of the redistribution KdTree.\nDefault is to split the cells, one can change it to duplicate\ncells instead by using mode as\n`vtkDistributedDataFilter::ASSIGN_TO_ALL_INTERSECTING_REGIONS`.\n"},
  {"SetRedistributionModeToDuplicateBoundaryCells", PyvtkPVDataDeliveryManager_SetRedistributionModeToDuplicateBoundaryCells, METH_VARARGS,
   "V.SetRedistributionModeToDuplicateBoundaryCells(\n    vtkPVDataRepresentation, int)\nC++: void SetRedistributionModeToDuplicateBoundaryCells(\n    vtkPVDataRepresentation *repr, int port=0)\n\nFor representations that have indicated that the data is\nredistributable (using MarkAsRedistributable), this control the\nmode for redistribution. Specifically, it indicates how to handle\ncells that are on the boundary of the redistribution KdTree.\nDefault is to split the cells, one can change it to duplicate\ncells instead by using mode as\n`vtkDistributedDataFilter::ASSIGN_TO_ALL_INTERSECTING_REGIONS`.\n"},
  {"GetVisibleDataSize", PyvtkPVDataDeliveryManager_GetVisibleDataSize, METH_VARARGS,
   "V.GetVisibleDataSize(bool) -> int\nC++: unsigned long GetVisibleDataSize(bool low_res)\n\nReturns the size for all visible geometry. If low_res is true,\nand low-res data is not available for a particular\nrepresentation, then it's high-res data size will be used\nassuming that the representation is going to render the high-res\ngeometry for low-res rendering as well.\n"},
  {"GetKdTree", PyvtkPVDataDeliveryManager_GetKdTree, METH_VARARGS,
   "V.GetKdTree() -> vtkPKdTree\nC++: vtkPKdTree *GetKdTree()\n\nProvides access to the partitioning kd-tree that was generated\nusing the data provided by the representations. The view uses\nthis kd-tree to decide on the compositing order when ordered\ncompositing is being used.\n"},
  {"SetRenderView", PyvtkPVDataDeliveryManager_SetRenderView, METH_VARARGS,
   "V.SetRenderView(vtkPVRenderView)\nC++: void SetRenderView(vtkPVRenderView *)\n\nGet/Set the render-view. The view is not reference counted.\n"},
  {"GetRenderView", PyvtkPVDataDeliveryManager_GetRenderView, METH_VARARGS,
   "V.GetRenderView() -> vtkPVRenderView\nC++: vtkPVRenderView *GetRenderView()\n\nGet/Set the render-view. The view is not reference counted.\n"},
  {"RedistributeDataForOrderedCompositing", PyvtkPVDataDeliveryManager_RedistributeDataForOrderedCompositing, METH_VARARGS,
   "V.RedistributeDataForOrderedCompositing(bool)\nC++: void RedistributeDataForOrderedCompositing(bool use_lod)\n\nCalled by the view on every render when ordered compositing is to\nbe used to ensure that the geometries are redistributed, as\nneeded.\n"},
  {"ClearRedistributedData", PyvtkPVDataDeliveryManager_ClearRedistributedData, METH_VARARGS,
   "V.ClearRedistributedData(bool)\nC++: void ClearRedistributedData(bool use_load)\n\nRemoves all redistributed data that may have been redistributed\nfor ordered compositing earlier when using KdTree based\nredistribution.\n"},
  {"SetOrderedCompositingInformation", PyvtkPVDataDeliveryManager_SetOrderedCompositingInformation, METH_VARARGS,
   "V.SetOrderedCompositingInformation(vtkPVDataRepresentation,\n    vtkExtentTranslator, (int, int, int, int, int, int), (float,\n    float, float), (float, float, float), int)\nC++: void SetOrderedCompositingInformation(\n    vtkPVDataRepresentation *repr,\n    vtkExtentTranslator *translator, const int whole_extents[6],\n    const double origin[3], const double spacing[3], int port=0)\n\nPass the structured-meta-data for determining rendering order for\nordered compositing.\n"},
  {"Deliver", PyvtkPVDataDeliveryManager_Deliver, METH_VARARGS,
   "V.Deliver(int, int, [int, ...])\nC++: void Deliver(int use_low_res, unsigned int size,\n    unsigned int *keys)\n\nTriggers delivery for the geometries of indicated\nrepresentations.\n"},
  {"SetStreamable", PyvtkPVDataDeliveryManager_SetStreamable, METH_VARARGS,
   "V.SetStreamable(vtkPVDataRepresentation, bool, int)\nC++: void SetStreamable(vtkPVDataRepresentation *, bool,\n    int port=0)\n\nMark a representation as streamable. Any representation can\nindicate that it is streamable i.e. the view can call streaming\npassses on it and it will deliver data incrementally.\n"},
  {"SetNextStreamedPiece", PyvtkPVDataDeliveryManager_SetNextStreamedPiece, METH_VARARGS,
   "V.SetNextStreamedPiece(vtkPVDataRepresentation, vtkDataObject,\n    int)\nC++: void SetNextStreamedPiece(vtkPVDataRepresentation *repr,\n    vtkDataObject *piece, int port=0)\n\nPasses the current streamed piece. This is the piece that will be\ndelivered to the rendering node.\n"},
  {"GetCurrentStreamedPiece", PyvtkPVDataDeliveryManager_GetCurrentStreamedPiece, METH_VARARGS,
   "V.GetCurrentStreamedPiece(vtkPVDataRepresentation, int)\n    -> vtkDataObject\nC++: vtkDataObject *GetCurrentStreamedPiece(\n    vtkPVDataRepresentation *repr, int port=0)\n\nPasses the current streamed piece. This is the piece that will be\ndelivered to the rendering node.\n"},
  {"ClearStreamedPieces", PyvtkPVDataDeliveryManager_ClearStreamedPieces, METH_VARARGS,
   "V.ClearStreamedPieces()\nC++: void ClearStreamedPieces()\n\nPasses the current streamed piece. This is the piece that will be\ndelivered to the rendering node.\n"},
  {"DeliverStreamedPieces", PyvtkPVDataDeliveryManager_DeliverStreamedPieces, METH_VARARGS,
   "V.DeliverStreamedPieces(int, [int, ...])\nC++: void DeliverStreamedPieces(unsigned int size,\n    unsigned int *keys)\n\nDeliver streamed pieces. Unlike regular data, streamed pieces are\ndelivered and released. Representations are expected to manage\nthe pieces once they are delivered to them.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVDataDeliveryManager_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkPVDataDeliveryManager", // tp_name
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
  PyvtkPVDataDeliveryManager_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVDataDeliveryManager_StaticNew()
{
  return vtkPVDataDeliveryManager::New();
}

PyObject *PyvtkPVDataDeliveryManager_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVDataDeliveryManager_Type, PyvtkPVDataDeliveryManager_Methods,
    "vtkPVDataDeliveryManager",
 &PyvtkPVDataDeliveryManager_StaticNew);

  PyTypeObject *pytype = &PyvtkPVDataDeliveryManager_Type;

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

void PyVTKAddFile_vtkPVDataDeliveryManager(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVDataDeliveryManager_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVDataDeliveryManager", o) != 0)
  {
    Py_DECREF(o);
  }

}

