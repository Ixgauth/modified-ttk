// python wrapper for vtkAVSucdReader
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
#include "vtkAVSucdReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAVSucdReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAVSucdReader_ClassNew(); }

#ifndef DECLARED_PyvtkUnstructuredGridAlgorithm_ClassNew
extern "C" { PyObject *PyvtkUnstructuredGridAlgorithm_ClassNew(); }
#define DECLARED_PyvtkUnstructuredGridAlgorithm_ClassNew
#endif

static const char *PyvtkAVSucdReader_Doc =
  "vtkAVSucdReader - reads a dataset in AVS \"UCD\" format\n\n"
  "Superclass: vtkUnstructuredGridAlgorithm\n\n"
  "vtkAVSucdReader creates an unstructured grid dataset. It reads binary\n"
  "or ASCII files stored in UCD format, with optional data stored at the\n"
  "nodes or at the cells of the model. A cell-based fielddata stores the\n"
  "material id. The class can automatically detect the endian-ness of\n"
  "the binary files.\n\n"
  "@par Thanks: Thanks to Guenole Harel and Emmanuel Colin (Supelec\n"
  "engineering school, France) and Jean M. Favre (CSCS, Switzerland) who\n"
  "co-developed this class. Thanks to Isabelle Surin (isabelle.surin at\n"
  "cea.fr, CEA-DAM, France) who supervised the internship of the first\n"
  "two authors. Thanks to Daniel Aguilera (daniel.aguilera at cea.fr,\n"
  "CEA-DAM, France) who contributed code and advice. Please address all\n"
  "comments to Jean Favre (jfavre at cscs.ch)\n\n"
  "@sa\n"
  "vtkGAMBITReader\n\n";


static PyObject *
PyvtkAVSucdReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAVSucdReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAVSucdReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAVSucdReader *tempr = vtkAVSucdReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAVSucdReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAVSucdReader::NewInstance());

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
PyvtkAVSucdReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

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
      op->vtkAVSucdReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkAVSucdReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_SetBinaryFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBinaryFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBinaryFile(temp0);
    }
    else
    {
      op->vtkAVSucdReader::SetBinaryFile(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetBinaryFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinaryFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBinaryFile() :
      op->vtkAVSucdReader::GetBinaryFile());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_BinaryFileOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BinaryFileOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BinaryFileOn();
    }
    else
    {
      op->vtkAVSucdReader::BinaryFileOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_BinaryFileOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BinaryFileOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BinaryFileOff();
    }
    else
    {
      op->vtkAVSucdReader::BinaryFileOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCells() :
      op->vtkAVSucdReader::GetNumberOfCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetNumberOfNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfNodes() :
      op->vtkAVSucdReader::GetNumberOfNodes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetNumberOfNodeFields(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodeFields");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfNodeFields() :
      op->vtkAVSucdReader::GetNumberOfNodeFields());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetNumberOfCellFields(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellFields");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCellFields() :
      op->vtkAVSucdReader::GetNumberOfCellFields());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetNumberOfFields(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFields");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFields() :
      op->vtkAVSucdReader::GetNumberOfFields());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetNumberOfNodeComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodeComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfNodeComponents() :
      op->vtkAVSucdReader::GetNumberOfNodeComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetNumberOfCellComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCellComponents() :
      op->vtkAVSucdReader::GetNumberOfCellComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_SetByteOrderToBigEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetByteOrderToBigEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetByteOrderToBigEndian();
    }
    else
    {
      op->vtkAVSucdReader::SetByteOrderToBigEndian();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_SetByteOrderToLittleEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetByteOrderToLittleEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetByteOrderToLittleEndian();
    }
    else
    {
      op->vtkAVSucdReader::SetByteOrderToLittleEndian();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetByteOrderAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetByteOrderAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetByteOrderAsString() :
      op->vtkAVSucdReader::GetByteOrderAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_SetByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetByteOrder(temp0);
    }
    else
    {
      op->vtkAVSucdReader::SetByteOrder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetByteOrder() :
      op->vtkAVSucdReader::GetByteOrder());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetNumberOfPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointArrays() :
      op->vtkAVSucdReader::GetNumberOfPointArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetNumberOfCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCellArrays() :
      op->vtkAVSucdReader::GetNumberOfCellArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetPointArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPointArrayName(temp0) :
      op->vtkAVSucdReader::GetPointArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetCellArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetCellArrayName(temp0) :
      op->vtkAVSucdReader::GetCellArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointArrayStatus(temp0) :
      op->vtkAVSucdReader::GetPointArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellArrayStatus(temp0) :
      op->vtkAVSucdReader::GetCellArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_SetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPointArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkAVSucdReader::SetPointArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_SetCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetCellArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkAVSucdReader::SetCellArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_DisableAllCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAllCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisableAllCellArrays();
    }
    else
    {
      op->vtkAVSucdReader::DisableAllCellArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_EnableAllCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAllCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableAllCellArrays();
    }
    else
    {
      op->vtkAVSucdReader::EnableAllCellArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_DisableAllPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAllPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisableAllPointArrays();
    }
    else
    {
      op->vtkAVSucdReader::DisableAllPointArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_EnableAllPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAllPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableAllPointArrays();
    }
    else
    {
      op->vtkAVSucdReader::EnableAllPointArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetCellDataRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellDataRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  int temp0;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<float> store2(2*size2);
  float *temp2 = store2.Data();
  float *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<float> store3(2*size3);
  float *temp3 = store3.Data();
  float *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
  {
    ap.Save(temp2, save2, size2);
    ap.Save(temp3, save3, size3);

    if (ap.IsBound())
    {
      op->GetCellDataRange(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkAVSucdReader::GetCellDataRange(temp0, temp1, temp2, temp3);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetNodeDataRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeDataRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  int temp0;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<float> store2(2*size2);
  float *temp2 = store2.Data();
  float *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<float> store3(2*size3);
  float *temp3 = store3.Data();
  float *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
  {
    ap.Save(temp2, save2, size2);
    ap.Save(temp3, save3, size3);

    if (ap.IsBound())
    {
      op->GetNodeDataRange(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkAVSucdReader::GetNodeDataRange(temp0, temp1, temp2, temp3);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAVSucdReader_Methods[] = {
  {"IsTypeOf", PyvtkAVSucdReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAVSucdReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAVSucdReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAVSucdReader\nC++: static vtkAVSucdReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAVSucdReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAVSucdReader\nC++: vtkAVSucdReader *NewInstance()\n\n"},
  {"SetFileName", PyvtkAVSucdReader_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *_arg)\n\nSpecify file name of AVS UCD datafile to read\n"},
  {"GetFileName", PyvtkAVSucdReader_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nSpecify file name of AVS UCD datafile to read\n"},
  {"SetBinaryFile", PyvtkAVSucdReader_SetBinaryFile, METH_VARARGS,
   "V.SetBinaryFile(int)\nC++: virtual void SetBinaryFile(vtkTypeBool _arg)\n\nIs the file to be read written in binary format (as opposed to\nascii).\n"},
  {"GetBinaryFile", PyvtkAVSucdReader_GetBinaryFile, METH_VARARGS,
   "V.GetBinaryFile() -> int\nC++: virtual vtkTypeBool GetBinaryFile()\n\nIs the file to be read written in binary format (as opposed to\nascii).\n"},
  {"BinaryFileOn", PyvtkAVSucdReader_BinaryFileOn, METH_VARARGS,
   "V.BinaryFileOn()\nC++: virtual void BinaryFileOn()\n\nIs the file to be read written in binary format (as opposed to\nascii).\n"},
  {"BinaryFileOff", PyvtkAVSucdReader_BinaryFileOff, METH_VARARGS,
   "V.BinaryFileOff()\nC++: virtual void BinaryFileOff()\n\nIs the file to be read written in binary format (as opposed to\nascii).\n"},
  {"GetNumberOfCells", PyvtkAVSucdReader_GetNumberOfCells, METH_VARARGS,
   "V.GetNumberOfCells() -> int\nC++: virtual int GetNumberOfCells()\n\nGet the total number of cells.\n"},
  {"GetNumberOfNodes", PyvtkAVSucdReader_GetNumberOfNodes, METH_VARARGS,
   "V.GetNumberOfNodes() -> int\nC++: virtual int GetNumberOfNodes()\n\nGet the total number of nodes.\n"},
  {"GetNumberOfNodeFields", PyvtkAVSucdReader_GetNumberOfNodeFields, METH_VARARGS,
   "V.GetNumberOfNodeFields() -> int\nC++: virtual int GetNumberOfNodeFields()\n\nGet the number of data fields at the nodes.\n"},
  {"GetNumberOfCellFields", PyvtkAVSucdReader_GetNumberOfCellFields, METH_VARARGS,
   "V.GetNumberOfCellFields() -> int\nC++: virtual int GetNumberOfCellFields()\n\nGet the number of data fields at the cell centers.\n"},
  {"GetNumberOfFields", PyvtkAVSucdReader_GetNumberOfFields, METH_VARARGS,
   "V.GetNumberOfFields() -> int\nC++: virtual int GetNumberOfFields()\n\nGet the number of data fields for the model. Unused because VTK\nhas no methods for it.\n"},
  {"GetNumberOfNodeComponents", PyvtkAVSucdReader_GetNumberOfNodeComponents, METH_VARARGS,
   "V.GetNumberOfNodeComponents() -> int\nC++: virtual int GetNumberOfNodeComponents()\n\nGet the number of data components at the nodes and cells.\n"},
  {"GetNumberOfCellComponents", PyvtkAVSucdReader_GetNumberOfCellComponents, METH_VARARGS,
   "V.GetNumberOfCellComponents() -> int\nC++: virtual int GetNumberOfCellComponents()\n\nGet the number of data components at the nodes and cells.\n"},
  {"SetByteOrderToBigEndian", PyvtkAVSucdReader_SetByteOrderToBigEndian, METH_VARARGS,
   "V.SetByteOrderToBigEndian()\nC++: void SetByteOrderToBigEndian()\n\nSet/Get the endian-ness of the binary file.\n"},
  {"SetByteOrderToLittleEndian", PyvtkAVSucdReader_SetByteOrderToLittleEndian, METH_VARARGS,
   "V.SetByteOrderToLittleEndian()\nC++: void SetByteOrderToLittleEndian()\n\nSet/Get the endian-ness of the binary file.\n"},
  {"GetByteOrderAsString", PyvtkAVSucdReader_GetByteOrderAsString, METH_VARARGS,
   "V.GetByteOrderAsString() -> string\nC++: const char *GetByteOrderAsString()\n\nSet/Get the endian-ness of the binary file.\n"},
  {"SetByteOrder", PyvtkAVSucdReader_SetByteOrder, METH_VARARGS,
   "V.SetByteOrder(int)\nC++: virtual void SetByteOrder(int _arg)\n\n"},
  {"GetByteOrder", PyvtkAVSucdReader_GetByteOrder, METH_VARARGS,
   "V.GetByteOrder() -> int\nC++: virtual int GetByteOrder()\n\n"},
  {"GetNumberOfPointArrays", PyvtkAVSucdReader_GetNumberOfPointArrays, METH_VARARGS,
   "V.GetNumberOfPointArrays() -> int\nC++: int GetNumberOfPointArrays()\n\nThe following methods allow selective reading of solutions\nfields.  by default, ALL data fields are the nodes and cells are\nread, but this can be modified.\n"},
  {"GetNumberOfCellArrays", PyvtkAVSucdReader_GetNumberOfCellArrays, METH_VARARGS,
   "V.GetNumberOfCellArrays() -> int\nC++: int GetNumberOfCellArrays()\n\nThe following methods allow selective reading of solutions\nfields.  by default, ALL data fields are the nodes and cells are\nread, but this can be modified.\n"},
  {"GetPointArrayName", PyvtkAVSucdReader_GetPointArrayName, METH_VARARGS,
   "V.GetPointArrayName(int) -> string\nC++: const char *GetPointArrayName(int index)\n\nThe following methods allow selective reading of solutions\nfields.  by default, ALL data fields are the nodes and cells are\nread, but this can be modified.\n"},
  {"GetCellArrayName", PyvtkAVSucdReader_GetCellArrayName, METH_VARARGS,
   "V.GetCellArrayName(int) -> string\nC++: const char *GetCellArrayName(int index)\n\nThe following methods allow selective reading of solutions\nfields.  by default, ALL data fields are the nodes and cells are\nread, but this can be modified.\n"},
  {"GetPointArrayStatus", PyvtkAVSucdReader_GetPointArrayStatus, METH_VARARGS,
   "V.GetPointArrayStatus(string) -> int\nC++: int GetPointArrayStatus(const char *name)\n\nThe following methods allow selective reading of solutions\nfields.  by default, ALL data fields are the nodes and cells are\nread, but this can be modified.\n"},
  {"GetCellArrayStatus", PyvtkAVSucdReader_GetCellArrayStatus, METH_VARARGS,
   "V.GetCellArrayStatus(string) -> int\nC++: int GetCellArrayStatus(const char *name)\n\nThe following methods allow selective reading of solutions\nfields.  by default, ALL data fields are the nodes and cells are\nread, but this can be modified.\n"},
  {"SetPointArrayStatus", PyvtkAVSucdReader_SetPointArrayStatus, METH_VARARGS,
   "V.SetPointArrayStatus(string, int)\nC++: void SetPointArrayStatus(const char *name, int status)\n\nThe following methods allow selective reading of solutions\nfields.  by default, ALL data fields are the nodes and cells are\nread, but this can be modified.\n"},
  {"SetCellArrayStatus", PyvtkAVSucdReader_SetCellArrayStatus, METH_VARARGS,
   "V.SetCellArrayStatus(string, int)\nC++: void SetCellArrayStatus(const char *name, int status)\n\nThe following methods allow selective reading of solutions\nfields.  by default, ALL data fields are the nodes and cells are\nread, but this can be modified.\n"},
  {"DisableAllCellArrays", PyvtkAVSucdReader_DisableAllCellArrays, METH_VARARGS,
   "V.DisableAllCellArrays()\nC++: void DisableAllCellArrays()\n\n"},
  {"EnableAllCellArrays", PyvtkAVSucdReader_EnableAllCellArrays, METH_VARARGS,
   "V.EnableAllCellArrays()\nC++: void EnableAllCellArrays()\n\n"},
  {"DisableAllPointArrays", PyvtkAVSucdReader_DisableAllPointArrays, METH_VARARGS,
   "V.DisableAllPointArrays()\nC++: void DisableAllPointArrays()\n\n"},
  {"EnableAllPointArrays", PyvtkAVSucdReader_EnableAllPointArrays, METH_VARARGS,
   "V.EnableAllPointArrays()\nC++: void EnableAllPointArrays()\n\n"},
  {"GetCellDataRange", PyvtkAVSucdReader_GetCellDataRange, METH_VARARGS,
   "V.GetCellDataRange(int, int, [float, ...], [float, ...])\nC++: void GetCellDataRange(int cellComp, int index, float *min,\n    float *max)\n\n"},
  {"GetNodeDataRange", PyvtkAVSucdReader_GetNodeDataRange, METH_VARARGS,
   "V.GetNodeDataRange(int, int, [float, ...], [float, ...])\nC++: void GetNodeDataRange(int nodeComp, int index, float *min,\n    float *max)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAVSucdReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOGeometryPython.vtkAVSucdReader", // tp_name
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
  PyvtkAVSucdReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAVSucdReader_StaticNew()
{
  return vtkAVSucdReader::New();
}

PyObject *PyvtkAVSucdReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAVSucdReader_Type, PyvtkAVSucdReader_Methods,
    "vtkAVSucdReader",
 &PyvtkAVSucdReader_StaticNew);

  PyTypeObject *pytype = &PyvtkAVSucdReader_Type;

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

void PyVTKAddFile_vtkAVSucdReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAVSucdReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAVSucdReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

