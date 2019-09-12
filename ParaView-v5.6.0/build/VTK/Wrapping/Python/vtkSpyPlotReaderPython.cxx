// python wrapper for vtkSpyPlotReader
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
#include "vtkSpyPlotReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSpyPlotReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSpyPlotReader_ClassNew(); }

#ifndef DECLARED_PyvtkCompositeDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkCompositeDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkCompositeDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkSpyPlotReader_Doc =
  "vtkSpyPlotReader - Read SPCTH Spy Plot file format\n\n"
  "Superclass: vtkCompositeDataSetAlgorithm\n\n"
  "vtkSpyPlotReader is a reader that reads SPCTH Spy Plot file format\n"
  "through an ascii meta file called the \"case\" file (extension .spcth).\n"
  "This case file lists all the actual binary files that describe a\n"
  "dataset. Each binary file describes a part of the dataset. However,\n"
  "if only a single binary file describes the whole dataset, it is\n"
  "possible to load it directly without using a case file.\n\n"
  "The reader supports both Spy dataset types: flat mesh and AMR\n"
  "(Adaptive Mesh Refinement).\n\n"
  "It has parallel capabilities. Each processor is supposed to have\n"
  "access to the case file and to all the binary files. All the binary\n"
  "files have to be coherent: they describe the same fields of data.\n"
  "Each binary file may content multiple time stamp. The time stamp to\n"
  "read is specified with SetTimestamp().\n\n"
  "In parallel mode, there are two ways to distribute data over\n"
  "processors (controlled by SetDistributeFiles() ):\n"
  "- either by distributing blocks: all processors read all the files,\n"
  "  but only some number of blocks per files. Hence, load balancing is\n"
  "  good even if there is only one file.\n"
  "- or by distributing files: a file is read entirely by one processor.\n"
  "If there is only one file, all the other processors are not used at\n"
  "  all.\n\n"
  "@par Implementation Details:\n"
  "- All processors read the first binary file listed in the case file\n"
  "  to get information about the fields.\n"
  "- Each block of data is already surrounded by ghost cells in the\n"
  "  file, even on part of the block that don't have actual neighbor\n"
  "  cells. The reader removes those wrong ghost cells.\n"
  "- Each time step contains all the cell array name variables\n\n";


static PyObject *
PyvtkSpyPlotReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSpyPlotReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSpyPlotReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSpyPlotReader *tempr = vtkSpyPlotReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSpyPlotReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSpyPlotReader::NewInstance());

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
PyvtkSpyPlotReader_PrintBlockList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrintBlockList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  vtkNonOverlappingAMR *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkNonOverlappingAMR") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->PrintBlockList(temp0, temp1);
    }
    else
    {
      op->vtkSpyPlotReader::PrintBlockList(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

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
      op->vtkSpyPlotReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkSpyPlotReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_SetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTimeStep(temp0);
    }
    else
    {
      op->vtkSpyPlotReader::SetTimeStep(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_GetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimeStep() :
      op->vtkSpyPlotReader::GetTimeStep());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_SetDistributeFiles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistributeFiles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDistributeFiles(temp0);
    }
    else
    {
      op->vtkSpyPlotReader::SetDistributeFiles(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_GetDistributeFiles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistributeFiles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDistributeFiles() :
      op->vtkSpyPlotReader::GetDistributeFiles());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_DistributeFilesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DistributeFilesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DistributeFilesOn();
    }
    else
    {
      op->vtkSpyPlotReader::DistributeFilesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_DistributeFilesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DistributeFilesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DistributeFilesOff();
    }
    else
    {
      op->vtkSpyPlotReader::DistributeFilesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_SetGenerateLevelArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateLevelArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateLevelArray(temp0);
    }
    else
    {
      op->vtkSpyPlotReader::SetGenerateLevelArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_GetGenerateLevelArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateLevelArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateLevelArray() :
      op->vtkSpyPlotReader::GetGenerateLevelArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_GenerateLevelArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateLevelArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateLevelArrayOn();
    }
    else
    {
      op->vtkSpyPlotReader::GenerateLevelArrayOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_GenerateLevelArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateLevelArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateLevelArrayOff();
    }
    else
    {
      op->vtkSpyPlotReader::GenerateLevelArrayOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_SetGenerateBlockIdArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateBlockIdArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateBlockIdArray(temp0);
    }
    else
    {
      op->vtkSpyPlotReader::SetGenerateBlockIdArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_GetGenerateBlockIdArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateBlockIdArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateBlockIdArray() :
      op->vtkSpyPlotReader::GetGenerateBlockIdArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_GenerateBlockIdArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateBlockIdArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateBlockIdArrayOn();
    }
    else
    {
      op->vtkSpyPlotReader::GenerateBlockIdArrayOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_GenerateBlockIdArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateBlockIdArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateBlockIdArrayOff();
    }
    else
    {
      op->vtkSpyPlotReader::GenerateBlockIdArrayOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_SetGenerateActiveBlockArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateActiveBlockArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateActiveBlockArray(temp0);
    }
    else
    {
      op->vtkSpyPlotReader::SetGenerateActiveBlockArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_GetGenerateActiveBlockArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateActiveBlockArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateActiveBlockArray() :
      op->vtkSpyPlotReader::GetGenerateActiveBlockArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_GenerateActiveBlockArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateActiveBlockArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateActiveBlockArrayOn();
    }
    else
    {
      op->vtkSpyPlotReader::GenerateActiveBlockArrayOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_GenerateActiveBlockArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateActiveBlockArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateActiveBlockArrayOff();
    }
    else
    {
      op->vtkSpyPlotReader::GenerateActiveBlockArrayOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_SetGenerateTracerArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTracerArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateTracerArray(temp0);
    }
    else
    {
      op->vtkSpyPlotReader::SetGenerateTracerArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_GetGenerateTracerArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTracerArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateTracerArray() :
      op->vtkSpyPlotReader::GetGenerateTracerArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_GenerateTracerArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateTracerArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateTracerArrayOn();
    }
    else
    {
      op->vtkSpyPlotReader::GenerateTracerArrayOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_GenerateTracerArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateTracerArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateTracerArrayOff();
    }
    else
    {
      op->vtkSpyPlotReader::GenerateTracerArrayOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_SetGenerateMarkers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateMarkers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateMarkers(temp0);
    }
    else
    {
      op->vtkSpyPlotReader::SetGenerateMarkers(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_GetGenerateMarkers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateMarkers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateMarkers() :
      op->vtkSpyPlotReader::GetGenerateMarkers());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_GenerateMarkersOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateMarkersOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateMarkersOn();
    }
    else
    {
      op->vtkSpyPlotReader::GenerateMarkersOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_GenerateMarkersOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateMarkersOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateMarkersOff();
    }
    else
    {
      op->vtkSpyPlotReader::GenerateMarkersOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_SetDownConvertVolumeFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDownConvertVolumeFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDownConvertVolumeFraction(temp0);
    }
    else
    {
      op->vtkSpyPlotReader::SetDownConvertVolumeFraction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_GetDownConvertVolumeFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDownConvertVolumeFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDownConvertVolumeFraction() :
      op->vtkSpyPlotReader::GetDownConvertVolumeFraction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_DownConvertVolumeFractionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DownConvertVolumeFractionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DownConvertVolumeFractionOn();
    }
    else
    {
      op->vtkSpyPlotReader::DownConvertVolumeFractionOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_DownConvertVolumeFractionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DownConvertVolumeFractionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DownConvertVolumeFractionOff();
    }
    else
    {
      op->vtkSpyPlotReader::DownConvertVolumeFractionOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_SetComputeDerivedVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeDerivedVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeDerivedVariables(temp0);
    }
    else
    {
      op->vtkSpyPlotReader::SetComputeDerivedVariables(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_GetComputeDerivedVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeDerivedVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComputeDerivedVariables() :
      op->vtkSpyPlotReader::GetComputeDerivedVariables());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_ComputeDerivedVariablesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeDerivedVariablesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeDerivedVariablesOn();
    }
    else
    {
      op->vtkSpyPlotReader::ComputeDerivedVariablesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_ComputeDerivedVariablesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeDerivedVariablesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeDerivedVariablesOff();
    }
    else
    {
      op->vtkSpyPlotReader::ComputeDerivedVariablesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_SetMergeXYZComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMergeXYZComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMergeXYZComponents(temp0);
    }
    else
    {
      op->vtkSpyPlotReader::SetMergeXYZComponents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_GetMergeXYZComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergeXYZComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMergeXYZComponents() :
      op->vtkSpyPlotReader::GetMergeXYZComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_MergeXYZComponentsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergeXYZComponentsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MergeXYZComponentsOn();
    }
    else
    {
      op->vtkSpyPlotReader::MergeXYZComponentsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_MergeXYZComponentsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergeXYZComponentsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MergeXYZComponentsOff();
    }
    else
    {
      op->vtkSpyPlotReader::MergeXYZComponentsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_GetTimeStepRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStepRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetTimeStepRange() :
      op->vtkSpyPlotReader::GetTimeStepRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_GetNumberOfCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCellArrays() :
      op->vtkSpyPlotReader::GetNumberOfCellArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_GetCellArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetCellArrayName(temp0) :
      op->vtkSpyPlotReader::GetCellArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_GetCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellArrayStatus(temp0) :
      op->vtkSpyPlotReader::GetCellArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_SetCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

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
      op->vtkSpyPlotReader::SetCellArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_SetGlobalController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlobalController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  vtkMultiProcessController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
  {
    if (ap.IsBound())
    {
      op->SetGlobalController(temp0);
    }
    else
    {
      op->vtkSpyPlotReader::SetGlobalController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotReader *op = static_cast<vtkSpyPlotReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->CanReadFile(temp0) :
      op->vtkSpyPlotReader::CanReadFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSpyPlotReader_Methods[] = {
  {"IsTypeOf", PyvtkSpyPlotReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSpyPlotReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSpyPlotReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSpyPlotReader\nC++: static vtkSpyPlotReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSpyPlotReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSpyPlotReader\nC++: vtkSpyPlotReader *NewInstance()\n\n"},
  {"PrintBlockList", PyvtkSpyPlotReader_PrintBlockList, METH_VARARGS,
   "V.PrintBlockList(vtkNonOverlappingAMR, int)\nC++: void PrintBlockList(vtkNonOverlappingAMR *hbds, int myProcId)\n\n"},
  {"SetFileName", PyvtkSpyPlotReader_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *filename)\n\nGet and set the file name. It is either the name of the case file\nor the name of the single binary file.\n"},
  {"GetFileName", PyvtkSpyPlotReader_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nGet and set the file name. It is either the name of the case file\nor the name of the single binary file.\n"},
  {"SetTimeStep", PyvtkSpyPlotReader_SetTimeStep, METH_VARARGS,
   "V.SetTimeStep(int)\nC++: virtual void SetTimeStep(int _arg)\n\nSet and get the time step. The time step is an index, NOT a time\ngiven in seconds.\n"},
  {"GetTimeStep", PyvtkSpyPlotReader_GetTimeStep, METH_VARARGS,
   "V.GetTimeStep() -> int\nC++: virtual int GetTimeStep()\n\nSet and get the time step. The time step is an index, NOT a time\ngiven in seconds.\n"},
  {"SetDistributeFiles", PyvtkSpyPlotReader_SetDistributeFiles, METH_VARARGS,
   "V.SetDistributeFiles(int)\nC++: virtual void SetDistributeFiles(int _arg)\n\nIf true, the reader distributes files over processors. If false,\nthe reader distributes blocks over processors. Default is false.\nDistributing blocks should provide a better load balancing: if\nthere is only one file and several processors, only the first\nprocessor is used in the case of the file-distributed method.\n"},
  {"GetDistributeFiles", PyvtkSpyPlotReader_GetDistributeFiles, METH_VARARGS,
   "V.GetDistributeFiles() -> int\nC++: virtual int GetDistributeFiles()\n\nIf true, the reader distributes files over processors. If false,\nthe reader distributes blocks over processors. Default is false.\nDistributing blocks should provide a better load balancing: if\nthere is only one file and several processors, only the first\nprocessor is used in the case of the file-distributed method.\n"},
  {"DistributeFilesOn", PyvtkSpyPlotReader_DistributeFilesOn, METH_VARARGS,
   "V.DistributeFilesOn()\nC++: virtual void DistributeFilesOn()\n\nIf true, the reader distributes files over processors. If false,\nthe reader distributes blocks over processors. Default is false.\nDistributing blocks should provide a better load balancing: if\nthere is only one file and several processors, only the first\nprocessor is used in the case of the file-distributed method.\n"},
  {"DistributeFilesOff", PyvtkSpyPlotReader_DistributeFilesOff, METH_VARARGS,
   "V.DistributeFilesOff()\nC++: virtual void DistributeFilesOff()\n\nIf true, the reader distributes files over processors. If false,\nthe reader distributes blocks over processors. Default is false.\nDistributing blocks should provide a better load balancing: if\nthere is only one file and several processors, only the first\nprocessor is used in the case of the file-distributed method.\n"},
  {"SetGenerateLevelArray", PyvtkSpyPlotReader_SetGenerateLevelArray, METH_VARARGS,
   "V.SetGenerateLevelArray(int)\nC++: virtual void SetGenerateLevelArray(int _arg)\n\nIf true, the reader generate a cell array in each block that\nstores the level in the hierarchy, starting from 0. False by\ndefault.\n"},
  {"GetGenerateLevelArray", PyvtkSpyPlotReader_GetGenerateLevelArray, METH_VARARGS,
   "V.GetGenerateLevelArray() -> int\nC++: virtual int GetGenerateLevelArray()\n\nIf true, the reader generate a cell array in each block that\nstores the level in the hierarchy, starting from 0. False by\ndefault.\n"},
  {"GenerateLevelArrayOn", PyvtkSpyPlotReader_GenerateLevelArrayOn, METH_VARARGS,
   "V.GenerateLevelArrayOn()\nC++: virtual void GenerateLevelArrayOn()\n\nIf true, the reader generate a cell array in each block that\nstores the level in the hierarchy, starting from 0. False by\ndefault.\n"},
  {"GenerateLevelArrayOff", PyvtkSpyPlotReader_GenerateLevelArrayOff, METH_VARARGS,
   "V.GenerateLevelArrayOff()\nC++: virtual void GenerateLevelArrayOff()\n\nIf true, the reader generate a cell array in each block that\nstores the level in the hierarchy, starting from 0. False by\ndefault.\n"},
  {"SetGenerateBlockIdArray", PyvtkSpyPlotReader_SetGenerateBlockIdArray, METH_VARARGS,
   "V.SetGenerateBlockIdArray(int)\nC++: virtual void SetGenerateBlockIdArray(int _arg)\n\nIf true, the reader generate a cell array in each block that\nstores a unique but not necessarily contiguous id. False by\ndefault.\n"},
  {"GetGenerateBlockIdArray", PyvtkSpyPlotReader_GetGenerateBlockIdArray, METH_VARARGS,
   "V.GetGenerateBlockIdArray() -> int\nC++: virtual int GetGenerateBlockIdArray()\n\nIf true, the reader generate a cell array in each block that\nstores a unique but not necessarily contiguous id. False by\ndefault.\n"},
  {"GenerateBlockIdArrayOn", PyvtkSpyPlotReader_GenerateBlockIdArrayOn, METH_VARARGS,
   "V.GenerateBlockIdArrayOn()\nC++: virtual void GenerateBlockIdArrayOn()\n\nIf true, the reader generate a cell array in each block that\nstores a unique but not necessarily contiguous id. False by\ndefault.\n"},
  {"GenerateBlockIdArrayOff", PyvtkSpyPlotReader_GenerateBlockIdArrayOff, METH_VARARGS,
   "V.GenerateBlockIdArrayOff()\nC++: virtual void GenerateBlockIdArrayOff()\n\nIf true, the reader generate a cell array in each block that\nstores a unique but not necessarily contiguous id. False by\ndefault.\n"},
  {"SetGenerateActiveBlockArray", PyvtkSpyPlotReader_SetGenerateActiveBlockArray, METH_VARARGS,
   "V.SetGenerateActiveBlockArray(int)\nC++: virtual void SetGenerateActiveBlockArray(int _arg)\n\nIf true, the reader generate a cell array in each block that\ncorresponds to the Active field in the file. False by default.\n"},
  {"GetGenerateActiveBlockArray", PyvtkSpyPlotReader_GetGenerateActiveBlockArray, METH_VARARGS,
   "V.GetGenerateActiveBlockArray() -> int\nC++: virtual int GetGenerateActiveBlockArray()\n\nIf true, the reader generate a cell array in each block that\ncorresponds to the Active field in the file. False by default.\n"},
  {"GenerateActiveBlockArrayOn", PyvtkSpyPlotReader_GenerateActiveBlockArrayOn, METH_VARARGS,
   "V.GenerateActiveBlockArrayOn()\nC++: virtual void GenerateActiveBlockArrayOn()\n\nIf true, the reader generate a cell array in each block that\ncorresponds to the Active field in the file. False by default.\n"},
  {"GenerateActiveBlockArrayOff", PyvtkSpyPlotReader_GenerateActiveBlockArrayOff, METH_VARARGS,
   "V.GenerateActiveBlockArrayOff()\nC++: virtual void GenerateActiveBlockArrayOff()\n\nIf true, the reader generate a cell array in each block that\ncorresponds to the Active field in the file. False by default.\n"},
  {"SetGenerateTracerArray", PyvtkSpyPlotReader_SetGenerateTracerArray, METH_VARARGS,
   "V.SetGenerateTracerArray(int)\nC++: virtual void SetGenerateTracerArray(int _arg)\n\nIf true, the reader will extract tracer data at each time step\nand include a field data array for the tracers at that time.\n"},
  {"GetGenerateTracerArray", PyvtkSpyPlotReader_GetGenerateTracerArray, METH_VARARGS,
   "V.GetGenerateTracerArray() -> int\nC++: virtual int GetGenerateTracerArray()\n\nIf true, the reader will extract tracer data at each time step\nand include a field data array for the tracers at that time.\n"},
  {"GenerateTracerArrayOn", PyvtkSpyPlotReader_GenerateTracerArrayOn, METH_VARARGS,
   "V.GenerateTracerArrayOn()\nC++: virtual void GenerateTracerArrayOn()\n\nIf true, the reader will extract tracer data at each time step\nand include a field data array for the tracers at that time.\n"},
  {"GenerateTracerArrayOff", PyvtkSpyPlotReader_GenerateTracerArrayOff, METH_VARARGS,
   "V.GenerateTracerArrayOff()\nC++: virtual void GenerateTracerArrayOff()\n\nIf true, the reader will extract tracer data at each time step\nand include a field data array for the tracers at that time.\n"},
  {"SetGenerateMarkers", PyvtkSpyPlotReader_SetGenerateMarkers, METH_VARARGS,
   "V.SetGenerateMarkers(int)\nC++: void SetGenerateMarkers(int gm)\n\nif true, the reader will extract the marker data at each time\nstep and create a set of vtkPoints in the second output port.\n"},
  {"GetGenerateMarkers", PyvtkSpyPlotReader_GetGenerateMarkers, METH_VARARGS,
   "V.GetGenerateMarkers() -> int\nC++: virtual int GetGenerateMarkers()\n\nif true, the reader will extract the marker data at each time\nstep and create a set of vtkPoints in the second output port.\n"},
  {"GenerateMarkersOn", PyvtkSpyPlotReader_GenerateMarkersOn, METH_VARARGS,
   "V.GenerateMarkersOn()\nC++: virtual void GenerateMarkersOn()\n\nif true, the reader will extract the marker data at each time\nstep and create a set of vtkPoints in the second output port.\n"},
  {"GenerateMarkersOff", PyvtkSpyPlotReader_GenerateMarkersOff, METH_VARARGS,
   "V.GenerateMarkersOff()\nC++: virtual void GenerateMarkersOff()\n\nif true, the reader will extract the marker data at each time\nstep and create a set of vtkPoints in the second output port.\n"},
  {"SetDownConvertVolumeFraction", PyvtkSpyPlotReader_SetDownConvertVolumeFraction, METH_VARARGS,
   "V.SetDownConvertVolumeFraction(int)\nC++: void SetDownConvertVolumeFraction(int vf)\n\nIf true, the reader will convert volume fraction arrays to\nunsigned char. True by default.\n"},
  {"GetDownConvertVolumeFraction", PyvtkSpyPlotReader_GetDownConvertVolumeFraction, METH_VARARGS,
   "V.GetDownConvertVolumeFraction() -> int\nC++: virtual int GetDownConvertVolumeFraction()\n\nIf true, the reader will convert volume fraction arrays to\nunsigned char. True by default.\n"},
  {"DownConvertVolumeFractionOn", PyvtkSpyPlotReader_DownConvertVolumeFractionOn, METH_VARARGS,
   "V.DownConvertVolumeFractionOn()\nC++: virtual void DownConvertVolumeFractionOn()\n\nIf true, the reader will convert volume fraction arrays to\nunsigned char. True by default.\n"},
  {"DownConvertVolumeFractionOff", PyvtkSpyPlotReader_DownConvertVolumeFractionOff, METH_VARARGS,
   "V.DownConvertVolumeFractionOff()\nC++: virtual void DownConvertVolumeFractionOff()\n\nIf true, the reader will convert volume fraction arrays to\nunsigned char. True by default.\n"},
  {"SetComputeDerivedVariables", PyvtkSpyPlotReader_SetComputeDerivedVariables, METH_VARARGS,
   "V.SetComputeDerivedVariables(int)\nC++: virtual void SetComputeDerivedVariables(int _arg)\n\nIf true, the reader will calculate all derived variables it can\ngiven which properties the user has selected True by default.\n"},
  {"GetComputeDerivedVariables", PyvtkSpyPlotReader_GetComputeDerivedVariables, METH_VARARGS,
   "V.GetComputeDerivedVariables() -> int\nC++: virtual int GetComputeDerivedVariables()\n\nIf true, the reader will calculate all derived variables it can\ngiven which properties the user has selected True by default.\n"},
  {"ComputeDerivedVariablesOn", PyvtkSpyPlotReader_ComputeDerivedVariablesOn, METH_VARARGS,
   "V.ComputeDerivedVariablesOn()\nC++: virtual void ComputeDerivedVariablesOn()\n\nIf true, the reader will calculate all derived variables it can\ngiven which properties the user has selected True by default.\n"},
  {"ComputeDerivedVariablesOff", PyvtkSpyPlotReader_ComputeDerivedVariablesOff, METH_VARARGS,
   "V.ComputeDerivedVariablesOff()\nC++: virtual void ComputeDerivedVariablesOff()\n\nIf true, the reader will calculate all derived variables it can\ngiven which properties the user has selected True by default.\n"},
  {"SetMergeXYZComponents", PyvtkSpyPlotReader_SetMergeXYZComponents, METH_VARARGS,
   "V.SetMergeXYZComponents(int)\nC++: void SetMergeXYZComponents(int merge)\n\nIf true, the reader will merge scalar arrays named, for example, \"X\nvelocity\" \"Y velocity\" and \"Z velocity\" into a vector array named\n\"velocity\" with scalar components X, Y and Z. It will also merge\nX and Y scalar arrays (with no Z component) into a vector with\nscalar components X, Y and 0. True by default.\n"},
  {"GetMergeXYZComponents", PyvtkSpyPlotReader_GetMergeXYZComponents, METH_VARARGS,
   "V.GetMergeXYZComponents() -> int\nC++: virtual int GetMergeXYZComponents()\n\nIf true, the reader will merge scalar arrays named, for example, \"X\nvelocity\" \"Y velocity\" and \"Z velocity\" into a vector array named\n\"velocity\" with scalar components X, Y and Z. It will also merge\nX and Y scalar arrays (with no Z component) into a vector with\nscalar components X, Y and 0. True by default.\n"},
  {"MergeXYZComponentsOn", PyvtkSpyPlotReader_MergeXYZComponentsOn, METH_VARARGS,
   "V.MergeXYZComponentsOn()\nC++: virtual void MergeXYZComponentsOn()\n\nIf true, the reader will merge scalar arrays named, for example, \"X\nvelocity\" \"Y velocity\" and \"Z velocity\" into a vector array named\n\"velocity\" with scalar components X, Y and Z. It will also merge\nX and Y scalar arrays (with no Z component) into a vector with\nscalar components X, Y and 0. True by default.\n"},
  {"MergeXYZComponentsOff", PyvtkSpyPlotReader_MergeXYZComponentsOff, METH_VARARGS,
   "V.MergeXYZComponentsOff()\nC++: virtual void MergeXYZComponentsOff()\n\nIf true, the reader will merge scalar arrays named, for example, \"X\nvelocity\" \"Y velocity\" and \"Z velocity\" into a vector array named\n\"velocity\" with scalar components X, Y and Z. It will also merge\nX and Y scalar arrays (with no Z component) into a vector with\nscalar components X, Y and 0. True by default.\n"},
  {"GetTimeStepRange", PyvtkSpyPlotReader_GetTimeStepRange, METH_VARARGS,
   "V.GetTimeStepRange() -> (int, int)\nC++: int *GetTimeStepRange()\n\n"},
  {"GetNumberOfCellArrays", PyvtkSpyPlotReader_GetNumberOfCellArrays, METH_VARARGS,
   "V.GetNumberOfCellArrays() -> int\nC++: int GetNumberOfCellArrays()\n\nCell array selection\n"},
  {"GetCellArrayName", PyvtkSpyPlotReader_GetCellArrayName, METH_VARARGS,
   "V.GetCellArrayName(int) -> string\nC++: const char *GetCellArrayName(int idx)\n\nCell array selection\n"},
  {"GetCellArrayStatus", PyvtkSpyPlotReader_GetCellArrayStatus, METH_VARARGS,
   "V.GetCellArrayStatus(string) -> int\nC++: int GetCellArrayStatus(const char *name)\n\nCell array selection\n"},
  {"SetCellArrayStatus", PyvtkSpyPlotReader_SetCellArrayStatus, METH_VARARGS,
   "V.SetCellArrayStatus(string, int)\nC++: void SetCellArrayStatus(const char *name, int status)\n\nCell array selection\n"},
  {"SetGlobalController", PyvtkSpyPlotReader_SetGlobalController, METH_VARARGS,
   "V.SetGlobalController(vtkMultiProcessController)\nC++: void SetGlobalController(\n    vtkMultiProcessController *controller)\n\nSet the controller used to coordinate parallel reading. The \"global\ncontroller\" has all processes while the \"controller\" has only\nthose who have blocks.\n"},
  {"CanReadFile", PyvtkSpyPlotReader_CanReadFile, METH_VARARGS,
   "V.CanReadFile(string) -> int\nC++: virtual int CanReadFile(const char *fname)\n\nDetermine if the file can be read with this reader.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSpyPlotReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkSpyPlotReader", // tp_name
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
  PyvtkSpyPlotReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSpyPlotReader_StaticNew()
{
  return vtkSpyPlotReader::New();
}

PyObject *PyvtkSpyPlotReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSpyPlotReader_Type, PyvtkSpyPlotReader_Methods,
    "vtkSpyPlotReader",
 &PyvtkSpyPlotReader_StaticNew);

  PyTypeObject *pytype = &PyvtkSpyPlotReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkCompositeDataSetAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSpyPlotReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSpyPlotReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSpyPlotReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

