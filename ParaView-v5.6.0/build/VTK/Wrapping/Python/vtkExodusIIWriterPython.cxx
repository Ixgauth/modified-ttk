// python wrapper for vtkExodusIIWriter
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
#include "vtkExodusIIWriter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExodusIIWriter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkExodusIIWriter_ClassNew(); }

#ifndef DECLARED_PyvtkWriter_ClassNew
extern "C" { PyObject *PyvtkWriter_ClassNew(); }
#define DECLARED_PyvtkWriter_ClassNew
#endif

static const char *PyvtkExodusIIWriter_Doc =
  "vtkExodusIIWriter - Write Exodus II files\n\n"
  "Superclass: vtkWriter\n\n"
  "This is a vtkWriter that writes it's vtkUnstructuredGrid\n"
  "    input out to an Exodus II file.  Go to\n"
  "http://endo.sandia.gov/SEACAS/\n"
  "    for more information about the Exodus II format.\n\n\n"
  "    Exodus files contain much information that is not captured\n"
  "    in a vtkUnstructuredGrid, such as time steps, information\n"
  "    lines, node sets, and side sets.  This information can be\n"
  "    stored in a vtkModelMetadata object.\n\n\n"
  "    The vtkExodusReader and vtkPExodusReader can create\n"
  "    a vtkModelMetadata object and embed it in a vtkUnstructuredGrid\n"
  "    in a series of field arrays.  This writer searches for these\n"
  "    field arrays and will use the metadata contained in them\n"
  "    when creating the new Exodus II file.\n\n\n"
  "    You can also explicitly give the vtkExodusIIWriter a\n"
  "    vtkModelMetadata object to use when writing the file.\n\n\n"
  "    In the absence of the information provided by vtkModelMetadata,\n"
  "    if this writer is not part of a parallel application, we will use\n"
  "    reasonable defaults for all the values in the output Exodus file.\n"
  "    If you don't provide a block ID element array, we'll create a\n"
  "    block for each cell type that appears in the unstructured grid.\n\n\n"
  "    However if this writer is part of a parallel application (hence\n"
  "    writing out a distributed Exodus file), then we need at the very\n"
  "    least a list of all the block IDs that appear in the file.  And\n"
  "    we need the element array of block IDs for the input unstructured\n"
  "grid.\n\n\n"
  "    In the absence of a vtkModelMetadata object, you can also provide\n"
  "    time step information which we will include in the output Exodus\n"
  "    file.\n\n"
  "@warning\n"
  "    If the input floating point field arrays and point locations are\n"
  "all\n"
  "    floats or all doubles, this class will operate more efficiently.\n"
  "    Mixing floats and doubles will slow you down, because Exodus II\n"
  "    requires that we write only floats or only doubles.\n\n"
  "@warning\n"
  "    We use the terms \"point\" and \"node\" interchangeably.\n"
  "    Also, we use the terms \"element\" and \"cell\" interchangeably.\n\n";


static PyObject *
PyvtkExodusIIWriter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExodusIIWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExodusIIWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExodusIIWriter *tempr = vtkExodusIIWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExodusIIWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExodusIIWriter::NewInstance());

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
PyvtkExodusIIWriter_SetModelMetadata(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelMetadata");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

  vtkModelMetadata *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkModelMetadata"))
  {
    if (ap.IsBound())
    {
      op->SetModelMetadata(temp0);
    }
    else
    {
      op->vtkExodusIIWriter::SetModelMetadata(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_GetModelMetadata(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModelMetadata");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkModelMetadata *tempr = (ap.IsBound() ?
      op->GetModelMetadata() :
      op->vtkExodusIIWriter::GetModelMetadata());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

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
      op->vtkExodusIIWriter::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkExodusIIWriter::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_SetStoreDoubles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStoreDoubles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStoreDoubles(temp0);
    }
    else
    {
      op->vtkExodusIIWriter::SetStoreDoubles(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_GetStoreDoubles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStoreDoubles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStoreDoubles() :
      op->vtkExodusIIWriter::GetStoreDoubles());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_SetGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGhostLevel(temp0);
    }
    else
    {
      op->vtkExodusIIWriter::SetGhostLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_GetGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGhostLevel() :
      op->vtkExodusIIWriter::GetGhostLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_SetWriteOutBlockIdArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteOutBlockIdArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWriteOutBlockIdArray(temp0);
    }
    else
    {
      op->vtkExodusIIWriter::SetWriteOutBlockIdArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_GetWriteOutBlockIdArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteOutBlockIdArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWriteOutBlockIdArray() :
      op->vtkExodusIIWriter::GetWriteOutBlockIdArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_WriteOutBlockIdArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteOutBlockIdArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteOutBlockIdArrayOn();
    }
    else
    {
      op->vtkExodusIIWriter::WriteOutBlockIdArrayOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_WriteOutBlockIdArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteOutBlockIdArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteOutBlockIdArrayOff();
    }
    else
    {
      op->vtkExodusIIWriter::WriteOutBlockIdArrayOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_SetWriteOutGlobalNodeIdArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteOutGlobalNodeIdArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWriteOutGlobalNodeIdArray(temp0);
    }
    else
    {
      op->vtkExodusIIWriter::SetWriteOutGlobalNodeIdArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_GetWriteOutGlobalNodeIdArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteOutGlobalNodeIdArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWriteOutGlobalNodeIdArray() :
      op->vtkExodusIIWriter::GetWriteOutGlobalNodeIdArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_WriteOutGlobalNodeIdArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteOutGlobalNodeIdArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteOutGlobalNodeIdArrayOn();
    }
    else
    {
      op->vtkExodusIIWriter::WriteOutGlobalNodeIdArrayOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_WriteOutGlobalNodeIdArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteOutGlobalNodeIdArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteOutGlobalNodeIdArrayOff();
    }
    else
    {
      op->vtkExodusIIWriter::WriteOutGlobalNodeIdArrayOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_SetWriteOutGlobalElementIdArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteOutGlobalElementIdArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWriteOutGlobalElementIdArray(temp0);
    }
    else
    {
      op->vtkExodusIIWriter::SetWriteOutGlobalElementIdArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_GetWriteOutGlobalElementIdArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteOutGlobalElementIdArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWriteOutGlobalElementIdArray() :
      op->vtkExodusIIWriter::GetWriteOutGlobalElementIdArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_WriteOutGlobalElementIdArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteOutGlobalElementIdArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteOutGlobalElementIdArrayOn();
    }
    else
    {
      op->vtkExodusIIWriter::WriteOutGlobalElementIdArrayOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_WriteOutGlobalElementIdArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteOutGlobalElementIdArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteOutGlobalElementIdArrayOff();
    }
    else
    {
      op->vtkExodusIIWriter::WriteOutGlobalElementIdArrayOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_SetWriteAllTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteAllTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWriteAllTimeSteps(temp0);
    }
    else
    {
      op->vtkExodusIIWriter::SetWriteAllTimeSteps(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_GetWriteAllTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteAllTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWriteAllTimeSteps() :
      op->vtkExodusIIWriter::GetWriteAllTimeSteps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_WriteAllTimeStepsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteAllTimeStepsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteAllTimeStepsOn();
    }
    else
    {
      op->vtkExodusIIWriter::WriteAllTimeStepsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_WriteAllTimeStepsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteAllTimeStepsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteAllTimeStepsOff();
    }
    else
    {
      op->vtkExodusIIWriter::WriteAllTimeStepsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_SetBlockIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBlockIdArrayName(temp0);
    }
    else
    {
      op->vtkExodusIIWriter::SetBlockIdArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_GetBlockIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetBlockIdArrayName() :
      op->vtkExodusIIWriter::GetBlockIdArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_SetIgnoreMetaDataWarning(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIgnoreMetaDataWarning");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIgnoreMetaDataWarning(temp0);
    }
    else
    {
      op->vtkExodusIIWriter::SetIgnoreMetaDataWarning(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_GetIgnoreMetaDataWarning(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIgnoreMetaDataWarning");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIgnoreMetaDataWarning() :
      op->vtkExodusIIWriter::GetIgnoreMetaDataWarning());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_IgnoreMetaDataWarningOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IgnoreMetaDataWarningOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IgnoreMetaDataWarningOn();
    }
    else
    {
      op->vtkExodusIIWriter::IgnoreMetaDataWarningOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExodusIIWriter_IgnoreMetaDataWarningOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IgnoreMetaDataWarningOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIWriter *op = static_cast<vtkExodusIIWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IgnoreMetaDataWarningOff();
    }
    else
    {
      op->vtkExodusIIWriter::IgnoreMetaDataWarningOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkExodusIIWriter_Methods[] = {
  {"IsTypeOf", PyvtkExodusIIWriter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExodusIIWriter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExodusIIWriter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkExodusIIWriter\nC++: static vtkExodusIIWriter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExodusIIWriter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkExodusIIWriter\nC++: vtkExodusIIWriter *NewInstance()\n\n"},
  {"SetModelMetadata", PyvtkExodusIIWriter_SetModelMetadata, METH_VARARGS,
   "V.SetModelMetadata(vtkModelMetadata)\nC++: void SetModelMetadata(vtkModelMetadata *)\n\nSpecify the vtkModelMetadata object which contains the Exodus\nfile model information (metadata) absent in the\nvtkUnstructuredGrid.  If you have this object, you don't need to\nset any other values before writing. (Just the FileName and the\nInput.) Note that the vtkExodusReader can create and attach a\nvtkModelMetadata object to it's output.  If this has happened,\nthe ExodusIIWriter will find it and use it.\n"},
  {"GetModelMetadata", PyvtkExodusIIWriter_GetModelMetadata, METH_VARARGS,
   "V.GetModelMetadata() -> vtkModelMetadata\nC++: virtual vtkModelMetadata *GetModelMetadata()\n\n"},
  {"SetFileName", PyvtkExodusIIWriter_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *_arg)\n\nName for the output file.  If writing in parallel, the number of\nprocesses and the process rank will be appended to the name, so\neach process is writing out a separate file. If not set, this\nclass will make up a file name.\n"},
  {"GetFileName", PyvtkExodusIIWriter_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\n"},
  {"SetStoreDoubles", PyvtkExodusIIWriter_SetStoreDoubles, METH_VARARGS,
   "V.SetStoreDoubles(int)\nC++: virtual void SetStoreDoubles(int _arg)\n\nIf StoreDoubles is ON, the floating point fields in the Exodus\nfile will be double precision fields.  The default is determined\nby the max precision of the input.  If the field data appears to\nbe doubles, then StoreDoubles will be ON, otherwise StoreDoubles\nwill be OFF.\n"},
  {"GetStoreDoubles", PyvtkExodusIIWriter_GetStoreDoubles, METH_VARARGS,
   "V.GetStoreDoubles() -> int\nC++: virtual int GetStoreDoubles()\n\n"},
  {"SetGhostLevel", PyvtkExodusIIWriter_SetGhostLevel, METH_VARARGS,
   "V.SetGhostLevel(int)\nC++: virtual void SetGhostLevel(int _arg)\n\nWe never write out ghost cells.  This variable is here to satisfy\nthe behavior of ParaView on invoking a parallel writer.\n"},
  {"GetGhostLevel", PyvtkExodusIIWriter_GetGhostLevel, METH_VARARGS,
   "V.GetGhostLevel() -> int\nC++: virtual int GetGhostLevel()\n\n"},
  {"SetWriteOutBlockIdArray", PyvtkExodusIIWriter_SetWriteOutBlockIdArray, METH_VARARGS,
   "V.SetWriteOutBlockIdArray(int)\nC++: virtual void SetWriteOutBlockIdArray(vtkTypeBool _arg)\n\nBy default, the integer array containing the global Block Ids of\nthe cells is not included when the new Exodus II file is written\nout.  If you do want to include this array, set\nWriteOutBlockIdArray to ON.\n"},
  {"GetWriteOutBlockIdArray", PyvtkExodusIIWriter_GetWriteOutBlockIdArray, METH_VARARGS,
   "V.GetWriteOutBlockIdArray() -> int\nC++: virtual vtkTypeBool GetWriteOutBlockIdArray()\n\n"},
  {"WriteOutBlockIdArrayOn", PyvtkExodusIIWriter_WriteOutBlockIdArrayOn, METH_VARARGS,
   "V.WriteOutBlockIdArrayOn()\nC++: virtual void WriteOutBlockIdArrayOn()\n\n"},
  {"WriteOutBlockIdArrayOff", PyvtkExodusIIWriter_WriteOutBlockIdArrayOff, METH_VARARGS,
   "V.WriteOutBlockIdArrayOff()\nC++: virtual void WriteOutBlockIdArrayOff()\n\n"},
  {"SetWriteOutGlobalNodeIdArray", PyvtkExodusIIWriter_SetWriteOutGlobalNodeIdArray, METH_VARARGS,
   "V.SetWriteOutGlobalNodeIdArray(int)\nC++: virtual void SetWriteOutGlobalNodeIdArray(vtkTypeBool _arg)\n\nBy default, the integer array containing the global Node Ids is\nnot included when the new Exodus II file is written out.  If you\ndo want to include this array, set WriteOutGlobalNodeIdArray to\nON.\n"},
  {"GetWriteOutGlobalNodeIdArray", PyvtkExodusIIWriter_GetWriteOutGlobalNodeIdArray, METH_VARARGS,
   "V.GetWriteOutGlobalNodeIdArray() -> int\nC++: virtual vtkTypeBool GetWriteOutGlobalNodeIdArray()\n\n"},
  {"WriteOutGlobalNodeIdArrayOn", PyvtkExodusIIWriter_WriteOutGlobalNodeIdArrayOn, METH_VARARGS,
   "V.WriteOutGlobalNodeIdArrayOn()\nC++: virtual void WriteOutGlobalNodeIdArrayOn()\n\n"},
  {"WriteOutGlobalNodeIdArrayOff", PyvtkExodusIIWriter_WriteOutGlobalNodeIdArrayOff, METH_VARARGS,
   "V.WriteOutGlobalNodeIdArrayOff()\nC++: virtual void WriteOutGlobalNodeIdArrayOff()\n\n"},
  {"SetWriteOutGlobalElementIdArray", PyvtkExodusIIWriter_SetWriteOutGlobalElementIdArray, METH_VARARGS,
   "V.SetWriteOutGlobalElementIdArray(int)\nC++: virtual void SetWriteOutGlobalElementIdArray(\n    vtkTypeBool _arg)\n\nBy default, the integer array containing the global Element Ids\nis not included when the new Exodus II file is written out.  If\nyou do want to include this array, set\nWriteOutGlobalElementIdArray to ON.\n"},
  {"GetWriteOutGlobalElementIdArray", PyvtkExodusIIWriter_GetWriteOutGlobalElementIdArray, METH_VARARGS,
   "V.GetWriteOutGlobalElementIdArray() -> int\nC++: virtual vtkTypeBool GetWriteOutGlobalElementIdArray()\n\n"},
  {"WriteOutGlobalElementIdArrayOn", PyvtkExodusIIWriter_WriteOutGlobalElementIdArrayOn, METH_VARARGS,
   "V.WriteOutGlobalElementIdArrayOn()\nC++: virtual void WriteOutGlobalElementIdArrayOn()\n\n"},
  {"WriteOutGlobalElementIdArrayOff", PyvtkExodusIIWriter_WriteOutGlobalElementIdArrayOff, METH_VARARGS,
   "V.WriteOutGlobalElementIdArrayOff()\nC++: virtual void WriteOutGlobalElementIdArrayOff()\n\n"},
  {"SetWriteAllTimeSteps", PyvtkExodusIIWriter_SetWriteAllTimeSteps, METH_VARARGS,
   "V.SetWriteAllTimeSteps(int)\nC++: virtual void SetWriteAllTimeSteps(vtkTypeBool _arg)\n\nWhen WriteAllTimeSteps is turned ON, the writer is executed once\nfor each timestep available from the reader.\n"},
  {"GetWriteAllTimeSteps", PyvtkExodusIIWriter_GetWriteAllTimeSteps, METH_VARARGS,
   "V.GetWriteAllTimeSteps() -> int\nC++: virtual vtkTypeBool GetWriteAllTimeSteps()\n\n"},
  {"WriteAllTimeStepsOn", PyvtkExodusIIWriter_WriteAllTimeStepsOn, METH_VARARGS,
   "V.WriteAllTimeStepsOn()\nC++: virtual void WriteAllTimeStepsOn()\n\n"},
  {"WriteAllTimeStepsOff", PyvtkExodusIIWriter_WriteAllTimeStepsOff, METH_VARARGS,
   "V.WriteAllTimeStepsOff()\nC++: virtual void WriteAllTimeStepsOff()\n\n"},
  {"SetBlockIdArrayName", PyvtkExodusIIWriter_SetBlockIdArrayName, METH_VARARGS,
   "V.SetBlockIdArrayName(string)\nC++: virtual void SetBlockIdArrayName(const char *_arg)\n\n"},
  {"GetBlockIdArrayName", PyvtkExodusIIWriter_GetBlockIdArrayName, METH_VARARGS,
   "V.GetBlockIdArrayName() -> string\nC++: virtual char *GetBlockIdArrayName()\n\n"},
  {"SetIgnoreMetaDataWarning", PyvtkExodusIIWriter_SetIgnoreMetaDataWarning, METH_VARARGS,
   "V.SetIgnoreMetaDataWarning(bool)\nC++: virtual void SetIgnoreMetaDataWarning(bool _arg)\n\nIn certain cases we know that metadata doesn't exist and we want\nto ignore that warning.\n"},
  {"GetIgnoreMetaDataWarning", PyvtkExodusIIWriter_GetIgnoreMetaDataWarning, METH_VARARGS,
   "V.GetIgnoreMetaDataWarning() -> bool\nC++: virtual bool GetIgnoreMetaDataWarning()\n\n"},
  {"IgnoreMetaDataWarningOn", PyvtkExodusIIWriter_IgnoreMetaDataWarningOn, METH_VARARGS,
   "V.IgnoreMetaDataWarningOn()\nC++: virtual void IgnoreMetaDataWarningOn()\n\n"},
  {"IgnoreMetaDataWarningOff", PyvtkExodusIIWriter_IgnoreMetaDataWarningOff, METH_VARARGS,
   "V.IgnoreMetaDataWarningOff()\nC++: virtual void IgnoreMetaDataWarningOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkExodusIIWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOExodusPython.vtkExodusIIWriter", // tp_name
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
  PyvtkExodusIIWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExodusIIWriter_StaticNew()
{
  return vtkExodusIIWriter::New();
}

PyObject *PyvtkExodusIIWriter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkExodusIIWriter_Type, PyvtkExodusIIWriter_Methods,
    "vtkExodusIIWriter",
 &PyvtkExodusIIWriter_StaticNew);

  PyTypeObject *pytype = &PyvtkExodusIIWriter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkWriter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExodusIIWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExodusIIWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExodusIIWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

