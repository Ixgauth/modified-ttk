// python wrapper for vtkParallelSerialWriter
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
#include "vtkParallelSerialWriter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkParallelSerialWriter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkParallelSerialWriter_ClassNew(); }

#ifndef DECLARED_PyvtkDataObjectAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataObjectAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataObjectAlgorithm_ClassNew
#endif

static const char *PyvtkParallelSerialWriter_Doc =
  "vtkParallelSerialWriter - parallel meta-writer for serial formats\n\n"
  "Superclass: vtkDataObjectAlgorithm\n\n"
  "vtkParallelSerialWriter is a meta-writer that enables serial writers\n"
  "to work in parallel. It gathers data to the 1st node and invokes the\n"
  "internal writer. The reduction is controlled defined by the\n"
  "PreGatherHelper and PostGatherHelper. This also makes it possible to\n"
  "write time-series for temporal datasets using simple non-time-aware\n"
  "writers.\n\n";


static PyObject *
PyvtkParallelSerialWriter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkParallelSerialWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelSerialWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelSerialWriter *op = static_cast<vtkParallelSerialWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkParallelSerialWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelSerialWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkParallelSerialWriter *tempr = vtkParallelSerialWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelSerialWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelSerialWriter *op = static_cast<vtkParallelSerialWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkParallelSerialWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkParallelSerialWriter::NewInstance());

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
PyvtkParallelSerialWriter_SetWriter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelSerialWriter *op = static_cast<vtkParallelSerialWriter *>(vp);

  vtkAlgorithm *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithm"))
  {
    if (ap.IsBound())
    {
      op->SetWriter(temp0);
    }
    else
    {
      op->vtkParallelSerialWriter::SetWriter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelSerialWriter_GetWriter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelSerialWriter *op = static_cast<vtkParallelSerialWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithm *tempr = (ap.IsBound() ?
      op->GetWriter() :
      op->vtkParallelSerialWriter::GetWriter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelSerialWriter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelSerialWriter *op = static_cast<vtkParallelSerialWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkParallelSerialWriter::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelSerialWriter_SetFileNameMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileNameMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelSerialWriter *op = static_cast<vtkParallelSerialWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileNameMethod(temp0);
    }
    else
    {
      op->vtkParallelSerialWriter::SetFileNameMethod(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelSerialWriter_GetFileNameMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileNameMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelSerialWriter *op = static_cast<vtkParallelSerialWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileNameMethod() :
      op->vtkParallelSerialWriter::GetFileNameMethod());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelSerialWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelSerialWriter *op = static_cast<vtkParallelSerialWriter *>(vp);

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
      op->vtkParallelSerialWriter::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelSerialWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelSerialWriter *op = static_cast<vtkParallelSerialWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkParallelSerialWriter::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelSerialWriter_Write(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelSerialWriter *op = static_cast<vtkParallelSerialWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->Write() :
      op->vtkParallelSerialWriter::Write());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelSerialWriter_GetPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelSerialWriter *op = static_cast<vtkParallelSerialWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPiece() :
      op->vtkParallelSerialWriter::GetPiece());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelSerialWriter_SetPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelSerialWriter *op = static_cast<vtkParallelSerialWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPiece(temp0);
    }
    else
    {
      op->vtkParallelSerialWriter::SetPiece(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelSerialWriter_GetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelSerialWriter *op = static_cast<vtkParallelSerialWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPieces() :
      op->vtkParallelSerialWriter::GetNumberOfPieces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelSerialWriter_SetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelSerialWriter *op = static_cast<vtkParallelSerialWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfPieces(temp0);
    }
    else
    {
      op->vtkParallelSerialWriter::SetNumberOfPieces(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelSerialWriter_GetGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelSerialWriter *op = static_cast<vtkParallelSerialWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGhostLevel() :
      op->vtkParallelSerialWriter::GetGhostLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelSerialWriter_SetGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelSerialWriter *op = static_cast<vtkParallelSerialWriter *>(vp);

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
      op->vtkParallelSerialWriter::SetGhostLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelSerialWriter_SetPreGatherHelper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPreGatherHelper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelSerialWriter *op = static_cast<vtkParallelSerialWriter *>(vp);

  vtkAlgorithm *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithm"))
  {
    if (ap.IsBound())
    {
      op->SetPreGatherHelper(temp0);
    }
    else
    {
      op->vtkParallelSerialWriter::SetPreGatherHelper(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelSerialWriter_GetPreGatherHelper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreGatherHelper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelSerialWriter *op = static_cast<vtkParallelSerialWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithm *tempr = (ap.IsBound() ?
      op->GetPreGatherHelper() :
      op->vtkParallelSerialWriter::GetPreGatherHelper());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelSerialWriter_SetPostGatherHelper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPostGatherHelper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelSerialWriter *op = static_cast<vtkParallelSerialWriter *>(vp);

  vtkAlgorithm *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithm"))
  {
    if (ap.IsBound())
    {
      op->SetPostGatherHelper(temp0);
    }
    else
    {
      op->vtkParallelSerialWriter::SetPostGatherHelper(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelSerialWriter_GetPostGatherHelper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPostGatherHelper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelSerialWriter *op = static_cast<vtkParallelSerialWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithm *tempr = (ap.IsBound() ?
      op->GetPostGatherHelper() :
      op->vtkParallelSerialWriter::GetPostGatherHelper());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelSerialWriter_GetWriteAllTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteAllTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelSerialWriter *op = static_cast<vtkParallelSerialWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWriteAllTimeSteps() :
      op->vtkParallelSerialWriter::GetWriteAllTimeSteps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelSerialWriter_SetWriteAllTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteAllTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelSerialWriter *op = static_cast<vtkParallelSerialWriter *>(vp);

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
      op->vtkParallelSerialWriter::SetWriteAllTimeSteps(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelSerialWriter_WriteAllTimeStepsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteAllTimeStepsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelSerialWriter *op = static_cast<vtkParallelSerialWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteAllTimeStepsOn();
    }
    else
    {
      op->vtkParallelSerialWriter::WriteAllTimeStepsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelSerialWriter_WriteAllTimeStepsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteAllTimeStepsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelSerialWriter *op = static_cast<vtkParallelSerialWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteAllTimeStepsOff();
    }
    else
    {
      op->vtkParallelSerialWriter::WriteAllTimeStepsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelSerialWriter_SetInterpreter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpreter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelSerialWriter *op = static_cast<vtkParallelSerialWriter *>(vp);

  vtkClientServerInterpreter *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkClientServerInterpreter"))
  {
    if (ap.IsBound())
    {
      op->SetInterpreter(temp0);
    }
    else
    {
      op->vtkParallelSerialWriter::SetInterpreter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelSerialWriter_GetFileNameSuffix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileNameSuffix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelSerialWriter *op = static_cast<vtkParallelSerialWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileNameSuffix() :
      op->vtkParallelSerialWriter::GetFileNameSuffix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelSerialWriter_SetFileNameSuffix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileNameSuffix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelSerialWriter *op = static_cast<vtkParallelSerialWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileNameSuffix(temp0);
    }
    else
    {
      op->vtkParallelSerialWriter::SetFileNameSuffix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkParallelSerialWriter_Methods[] = {
  {"IsTypeOf", PyvtkParallelSerialWriter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkParallelSerialWriter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkParallelSerialWriter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkParallelSerialWriter\nC++: static vtkParallelSerialWriter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkParallelSerialWriter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkParallelSerialWriter\nC++: vtkParallelSerialWriter *NewInstance()\n\n"},
  {"SetWriter", PyvtkParallelSerialWriter_SetWriter, METH_VARARGS,
   "V.SetWriter(vtkAlgorithm)\nC++: void SetWriter(vtkAlgorithm *)\n\nSet/get the internal writer.\n"},
  {"GetWriter", PyvtkParallelSerialWriter_GetWriter, METH_VARARGS,
   "V.GetWriter() -> vtkAlgorithm\nC++: virtual vtkAlgorithm *GetWriter()\n\nSet/get the internal writer.\n"},
  {"GetMTime", PyvtkParallelSerialWriter_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn the MTime also considering the internal writer.\n"},
  {"SetFileNameMethod", PyvtkParallelSerialWriter_SetFileNameMethod, METH_VARARGS,
   "V.SetFileNameMethod(string)\nC++: virtual void SetFileNameMethod(const char *_arg)\n\nName of the method used to set the file name of the internal\nwriter. By default, this is SetFileName.\n"},
  {"GetFileNameMethod", PyvtkParallelSerialWriter_GetFileNameMethod, METH_VARARGS,
   "V.GetFileNameMethod() -> string\nC++: virtual char *GetFileNameMethod()\n\nName of the method used to set the file name of the internal\nwriter. By default, this is SetFileName.\n"},
  {"SetFileName", PyvtkParallelSerialWriter_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *_arg)\n\nGet/Set the name of the output file.\n"},
  {"GetFileName", PyvtkParallelSerialWriter_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nGet/Set the name of the output file.\n"},
  {"Write", PyvtkParallelSerialWriter_Write, METH_VARARGS,
   "V.Write() -> int\nC++: int Write()\n\nInvoke the writer.  Returns 1 for success, 0 for failure.\n"},
  {"GetPiece", PyvtkParallelSerialWriter_GetPiece, METH_VARARGS,
   "V.GetPiece() -> int\nC++: virtual int GetPiece()\n\nGet/Set the piece number to write.  The same piece number is used\nfor all inputs.\n"},
  {"SetPiece", PyvtkParallelSerialWriter_SetPiece, METH_VARARGS,
   "V.SetPiece(int)\nC++: virtual void SetPiece(int _arg)\n\nGet/Set the piece number to write.  The same piece number is used\nfor all inputs.\n"},
  {"GetNumberOfPieces", PyvtkParallelSerialWriter_GetNumberOfPieces, METH_VARARGS,
   "V.GetNumberOfPieces() -> int\nC++: virtual int GetNumberOfPieces()\n\nGet/Set the number of pieces into which the inputs are split.\n"},
  {"SetNumberOfPieces", PyvtkParallelSerialWriter_SetNumberOfPieces, METH_VARARGS,
   "V.SetNumberOfPieces(int)\nC++: virtual void SetNumberOfPieces(int _arg)\n\nGet/Set the number of pieces into which the inputs are split.\n"},
  {"GetGhostLevel", PyvtkParallelSerialWriter_GetGhostLevel, METH_VARARGS,
   "V.GetGhostLevel() -> int\nC++: virtual int GetGhostLevel()\n\nGet/Set the number of ghost levels to be written.\n"},
  {"SetGhostLevel", PyvtkParallelSerialWriter_SetGhostLevel, METH_VARARGS,
   "V.SetGhostLevel(int)\nC++: virtual void SetGhostLevel(int _arg)\n\nGet/Set the number of ghost levels to be written.\n"},
  {"SetPreGatherHelper", PyvtkParallelSerialWriter_SetPreGatherHelper, METH_VARARGS,
   "V.SetPreGatherHelper(vtkAlgorithm)\nC++: void SetPreGatherHelper(vtkAlgorithm *)\n\nGet/Set the pre-reduction helper. Pre-Reduction helper is an\nalgorithm that runs on each node's data before it is sent to the\nroot.\n"},
  {"GetPreGatherHelper", PyvtkParallelSerialWriter_GetPreGatherHelper, METH_VARARGS,
   "V.GetPreGatherHelper() -> vtkAlgorithm\nC++: virtual vtkAlgorithm *GetPreGatherHelper()\n\nGet/Set the pre-reduction helper. Pre-Reduction helper is an\nalgorithm that runs on each node's data before it is sent to the\nroot.\n"},
  {"SetPostGatherHelper", PyvtkParallelSerialWriter_SetPostGatherHelper, METH_VARARGS,
   "V.SetPostGatherHelper(vtkAlgorithm)\nC++: void SetPostGatherHelper(vtkAlgorithm *)\n\nGet/Set the reduction helper. Reduction helper is an algorithm\nwith multiple input connections, that produces a single output as\nthe reduced output. This is run on the root node to produce a\nresult from the gathered results of each node.\n"},
  {"GetPostGatherHelper", PyvtkParallelSerialWriter_GetPostGatherHelper, METH_VARARGS,
   "V.GetPostGatherHelper() -> vtkAlgorithm\nC++: virtual vtkAlgorithm *GetPostGatherHelper()\n\nGet/Set the reduction helper. Reduction helper is an algorithm\nwith multiple input connections, that produces a single output as\nthe reduced output. This is run on the root node to produce a\nresult from the gathered results of each node.\n"},
  {"GetWriteAllTimeSteps", PyvtkParallelSerialWriter_GetWriteAllTimeSteps, METH_VARARGS,
   "V.GetWriteAllTimeSteps() -> int\nC++: virtual int GetWriteAllTimeSteps()\n\nMust be set to true to write all timesteps, otherwise only the\ncurrent timestep will be written out. Off by default.\n"},
  {"SetWriteAllTimeSteps", PyvtkParallelSerialWriter_SetWriteAllTimeSteps, METH_VARARGS,
   "V.SetWriteAllTimeSteps(int)\nC++: virtual void SetWriteAllTimeSteps(int _arg)\n\nMust be set to true to write all timesteps, otherwise only the\ncurrent timestep will be written out. Off by default.\n"},
  {"WriteAllTimeStepsOn", PyvtkParallelSerialWriter_WriteAllTimeStepsOn, METH_VARARGS,
   "V.WriteAllTimeStepsOn()\nC++: virtual void WriteAllTimeStepsOn()\n\nMust be set to true to write all timesteps, otherwise only the\ncurrent timestep will be written out. Off by default.\n"},
  {"WriteAllTimeStepsOff", PyvtkParallelSerialWriter_WriteAllTimeStepsOff, METH_VARARGS,
   "V.WriteAllTimeStepsOff()\nC++: virtual void WriteAllTimeStepsOff()\n\nMust be set to true to write all timesteps, otherwise only the\ncurrent timestep will be written out. Off by default.\n"},
  {"SetInterpreter", PyvtkParallelSerialWriter_SetInterpreter, METH_VARARGS,
   "V.SetInterpreter(vtkClientServerInterpreter)\nC++: void SetInterpreter(vtkClientServerInterpreter *interp)\n\nGet/Set the interpreter to use to call methods on the writer.\n"},
  {"GetFileNameSuffix", PyvtkParallelSerialWriter_GetFileNameSuffix, METH_VARARGS,
   "V.GetFileNameSuffix() -> string\nC++: virtual char *GetFileNameSuffix()\n\nProvides an option to pad the time step when writing out time\nseries data. Only allow this format: ABC%.Xd where ABC is an\narbitrary string which may or may not exist and d must exist and\nd must be the last character '.' and X may or may not exist, X\nmust be an integer if it exists. Default is nullptr.\n"},
  {"SetFileNameSuffix", PyvtkParallelSerialWriter_SetFileNameSuffix, METH_VARARGS,
   "V.SetFileNameSuffix(string)\nC++: virtual void SetFileNameSuffix(const char *_arg)\n\nProvides an option to pad the time step when writing out time\nseries data. Only allow this format: ABC%.Xd where ABC is an\narbitrary string which may or may not exist and d must exist and\nd must be the last character '.' and X may or may not exist, X\nmust be an integer if it exists. Default is nullptr.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkParallelSerialWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsCorePython.vtkParallelSerialWriter", // tp_name
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
  PyvtkParallelSerialWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkParallelSerialWriter_StaticNew()
{
  return vtkParallelSerialWriter::New();
}

PyObject *PyvtkParallelSerialWriter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkParallelSerialWriter_Type, PyvtkParallelSerialWriter_Methods,
    "vtkParallelSerialWriter",
 &PyvtkParallelSerialWriter_StaticNew);

  PyTypeObject *pytype = &PyvtkParallelSerialWriter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataObjectAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkParallelSerialWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkParallelSerialWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkParallelSerialWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

