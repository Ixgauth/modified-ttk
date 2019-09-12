// python wrapper for vtkFileSeriesWriter
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
#include "vtkInformationVector.h"
#include "vtkFileSeriesWriter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkFileSeriesWriter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkFileSeriesWriter_ClassNew(); }

#ifndef DECLARED_PyvtkDataObjectAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataObjectAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataObjectAlgorithm_ClassNew
#endif

static const char *PyvtkFileSeriesWriter_Doc =
  "vtkFileSeriesWriter - meta-writer for writing a file series using\nwriters that are not time-aware.\n\n"
  "Superclass: vtkDataObjectAlgorithm\n\n"
  "vtkFileSeriesWriter is a meta-writer that enables writing a file\n"
  "series using writers that are not time-aware.\n\n";


static PyObject *
PyvtkFileSeriesWriter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkFileSeriesWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFileSeriesWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesWriter *op = static_cast<vtkFileSeriesWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFileSeriesWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFileSeriesWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkFileSeriesWriter *tempr = vtkFileSeriesWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFileSeriesWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesWriter *op = static_cast<vtkFileSeriesWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFileSeriesWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFileSeriesWriter::NewInstance());

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
PyvtkFileSeriesWriter_SetWriter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesWriter *op = static_cast<vtkFileSeriesWriter *>(vp);

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
      op->vtkFileSeriesWriter::SetWriter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFileSeriesWriter_GetWriter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesWriter *op = static_cast<vtkFileSeriesWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithm *tempr = (ap.IsBound() ?
      op->GetWriter() :
      op->vtkFileSeriesWriter::GetWriter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFileSeriesWriter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesWriter *op = static_cast<vtkFileSeriesWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkFileSeriesWriter::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFileSeriesWriter_SetFileNameMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileNameMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesWriter *op = static_cast<vtkFileSeriesWriter *>(vp);

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
      op->vtkFileSeriesWriter::SetFileNameMethod(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFileSeriesWriter_GetFileNameMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileNameMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesWriter *op = static_cast<vtkFileSeriesWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileNameMethod() :
      op->vtkFileSeriesWriter::GetFileNameMethod());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFileSeriesWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesWriter *op = static_cast<vtkFileSeriesWriter *>(vp);

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
      op->vtkFileSeriesWriter::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFileSeriesWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesWriter *op = static_cast<vtkFileSeriesWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkFileSeriesWriter::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFileSeriesWriter_Write(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesWriter *op = static_cast<vtkFileSeriesWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->Write() :
      op->vtkFileSeriesWriter::Write());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFileSeriesWriter_GetWriteAllTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteAllTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesWriter *op = static_cast<vtkFileSeriesWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWriteAllTimeSteps() :
      op->vtkFileSeriesWriter::GetWriteAllTimeSteps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFileSeriesWriter_SetWriteAllTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteAllTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesWriter *op = static_cast<vtkFileSeriesWriter *>(vp);

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
      op->vtkFileSeriesWriter::SetWriteAllTimeSteps(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFileSeriesWriter_WriteAllTimeStepsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteAllTimeStepsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesWriter *op = static_cast<vtkFileSeriesWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteAllTimeStepsOn();
    }
    else
    {
      op->vtkFileSeriesWriter::WriteAllTimeStepsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFileSeriesWriter_WriteAllTimeStepsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteAllTimeStepsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesWriter *op = static_cast<vtkFileSeriesWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteAllTimeStepsOff();
    }
    else
    {
      op->vtkFileSeriesWriter::WriteAllTimeStepsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFileSeriesWriter_GetFileNameSuffix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileNameSuffix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesWriter *op = static_cast<vtkFileSeriesWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileNameSuffix() :
      op->vtkFileSeriesWriter::GetFileNameSuffix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFileSeriesWriter_SetFileNameSuffix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileNameSuffix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesWriter *op = static_cast<vtkFileSeriesWriter *>(vp);

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
      op->vtkFileSeriesWriter::SetFileNameSuffix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFileSeriesWriter_GetMinTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesWriter *op = static_cast<vtkFileSeriesWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMinTimeStep() :
      op->vtkFileSeriesWriter::GetMinTimeStep());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFileSeriesWriter_SetMinTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesWriter *op = static_cast<vtkFileSeriesWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinTimeStep(temp0);
    }
    else
    {
      op->vtkFileSeriesWriter::SetMinTimeStep(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFileSeriesWriter_GetMinTimeStepMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinTimeStepMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesWriter *op = static_cast<vtkFileSeriesWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMinTimeStepMinValue() :
      op->vtkFileSeriesWriter::GetMinTimeStepMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFileSeriesWriter_GetMinTimeStepMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinTimeStepMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesWriter *op = static_cast<vtkFileSeriesWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMinTimeStepMaxValue() :
      op->vtkFileSeriesWriter::GetMinTimeStepMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFileSeriesWriter_GetMaxTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesWriter *op = static_cast<vtkFileSeriesWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxTimeStep() :
      op->vtkFileSeriesWriter::GetMaxTimeStep());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFileSeriesWriter_SetMaxTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesWriter *op = static_cast<vtkFileSeriesWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxTimeStep(temp0);
    }
    else
    {
      op->vtkFileSeriesWriter::SetMaxTimeStep(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFileSeriesWriter_GetTimeStepStride(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStepStride");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesWriter *op = static_cast<vtkFileSeriesWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimeStepStride() :
      op->vtkFileSeriesWriter::GetTimeStepStride());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFileSeriesWriter_SetTimeStepStride(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStepStride");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesWriter *op = static_cast<vtkFileSeriesWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTimeStepStride(temp0);
    }
    else
    {
      op->vtkFileSeriesWriter::SetTimeStepStride(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFileSeriesWriter_GetTimeStepStrideMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStepStrideMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesWriter *op = static_cast<vtkFileSeriesWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimeStepStrideMinValue() :
      op->vtkFileSeriesWriter::GetTimeStepStrideMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFileSeriesWriter_GetTimeStepStrideMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStepStrideMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesWriter *op = static_cast<vtkFileSeriesWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimeStepStrideMaxValue() :
      op->vtkFileSeriesWriter::GetTimeStepStrideMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFileSeriesWriter_SetInterpreter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpreter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSeriesWriter *op = static_cast<vtkFileSeriesWriter *>(vp);

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
      op->vtkFileSeriesWriter::SetInterpreter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFileSeriesWriter_SuffixValidation(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SuffixValidation");

  size_t size0 = ap.GetStringSize(0);
  vtkPythonArgs::Array<char> store0(2*size0 + 1);
  char *temp0 = store0.Data();
  char *save0 = temp0 + size0 + 1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    bool tempr = vtkFileSeriesWriter::SuffixValidation(temp0);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkFileSeriesWriter_Methods[] = {
  {"IsTypeOf", PyvtkFileSeriesWriter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkFileSeriesWriter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkFileSeriesWriter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkFileSeriesWriter\nC++: static vtkFileSeriesWriter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkFileSeriesWriter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkFileSeriesWriter\nC++: vtkFileSeriesWriter *NewInstance()\n\n"},
  {"SetWriter", PyvtkFileSeriesWriter_SetWriter, METH_VARARGS,
   "V.SetWriter(vtkAlgorithm)\nC++: virtual void SetWriter(vtkAlgorithm *)\n\nSet/get the internal writer.\n"},
  {"GetWriter", PyvtkFileSeriesWriter_GetWriter, METH_VARARGS,
   "V.GetWriter() -> vtkAlgorithm\nC++: virtual vtkAlgorithm *GetWriter()\n\nSet/get the internal writer.\n"},
  {"GetMTime", PyvtkFileSeriesWriter_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn the MTime also considering the internal writer.\n"},
  {"SetFileNameMethod", PyvtkFileSeriesWriter_SetFileNameMethod, METH_VARARGS,
   "V.SetFileNameMethod(string)\nC++: virtual void SetFileNameMethod(const char *_arg)\n\nName of the method used to set the file name of the internal\nwriter. By default, this is SetFileName.\n"},
  {"GetFileNameMethod", PyvtkFileSeriesWriter_GetFileNameMethod, METH_VARARGS,
   "V.GetFileNameMethod() -> string\nC++: virtual char *GetFileNameMethod()\n\nName of the method used to set the file name of the internal\nwriter. By default, this is SetFileName.\n"},
  {"SetFileName", PyvtkFileSeriesWriter_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *_arg)\n\nGet/Set the name of the output file.\n"},
  {"GetFileName", PyvtkFileSeriesWriter_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nGet/Set the name of the output file.\n"},
  {"Write", PyvtkFileSeriesWriter_Write, METH_VARARGS,
   "V.Write() -> int\nC++: int Write()\n\nInvoke the writer.  Returns 1 for success, 0 for failure.\n"},
  {"GetWriteAllTimeSteps", PyvtkFileSeriesWriter_GetWriteAllTimeSteps, METH_VARARGS,
   "V.GetWriteAllTimeSteps() -> int\nC++: virtual int GetWriteAllTimeSteps()\n\nIf Off, which is the default, only the current timestep is\nwritten. If true the writer will write every timestep, or at\nleast those within the range of min to max.\n"},
  {"SetWriteAllTimeSteps", PyvtkFileSeriesWriter_SetWriteAllTimeSteps, METH_VARARGS,
   "V.SetWriteAllTimeSteps(int)\nC++: virtual void SetWriteAllTimeSteps(int _arg)\n\nIf Off, which is the default, only the current timestep is\nwritten. If true the writer will write every timestep, or at\nleast those within the range of min to max.\n"},
  {"WriteAllTimeStepsOn", PyvtkFileSeriesWriter_WriteAllTimeStepsOn, METH_VARARGS,
   "V.WriteAllTimeStepsOn()\nC++: virtual void WriteAllTimeStepsOn()\n\nIf Off, which is the default, only the current timestep is\nwritten. If true the writer will write every timestep, or at\nleast those within the range of min to max.\n"},
  {"WriteAllTimeStepsOff", PyvtkFileSeriesWriter_WriteAllTimeStepsOff, METH_VARARGS,
   "V.WriteAllTimeStepsOff()\nC++: virtual void WriteAllTimeStepsOff()\n\nIf Off, which is the default, only the current timestep is\nwritten. If true the writer will write every timestep, or at\nleast those within the range of min to max.\n"},
  {"GetFileNameSuffix", PyvtkFileSeriesWriter_GetFileNameSuffix, METH_VARARGS,
   "V.GetFileNameSuffix() -> string\nC++: virtual char *GetFileNameSuffix()\n\nProvides an option to pad the time step when writing out time\nseries data. Only allow this format: ABC%.Xd where ABC is an\narbitrary string which may or may not exist and d must exist and\nd must be the last character '.' and X may or may not exist, X\nmust be an integer if it exists. Default is nullptr.\n"},
  {"SetFileNameSuffix", PyvtkFileSeriesWriter_SetFileNameSuffix, METH_VARARGS,
   "V.SetFileNameSuffix(string)\nC++: virtual void SetFileNameSuffix(const char *_arg)\n\nProvides an option to pad the time step when writing out time\nseries data. Only allow this format: ABC%.Xd where ABC is an\narbitrary string which may or may not exist and d must exist and\nd must be the last character '.' and X may or may not exist, X\nmust be an integer if it exists. Default is nullptr.\n"},
  {"GetMinTimeStep", PyvtkFileSeriesWriter_GetMinTimeStep, METH_VARARGS,
   "V.GetMinTimeStep() -> int\nC++: virtual int GetMinTimeStep()\n\nSets a minimum timestep constraint on WriteAllTimeSteps.\n"},
  {"SetMinTimeStep", PyvtkFileSeriesWriter_SetMinTimeStep, METH_VARARGS,
   "V.SetMinTimeStep(int)\nC++: virtual void SetMinTimeStep(int _arg)\n\nSets a minimum timestep constraint on WriteAllTimeSteps.\n"},
  {"GetMinTimeStepMinValue", PyvtkFileSeriesWriter_GetMinTimeStepMinValue, METH_VARARGS,
   "V.GetMinTimeStepMinValue() -> int\nC++: virtual int GetMinTimeStepMinValue()\n\nSets a minimum timestep constraint on WriteAllTimeSteps.\n"},
  {"GetMinTimeStepMaxValue", PyvtkFileSeriesWriter_GetMinTimeStepMaxValue, METH_VARARGS,
   "V.GetMinTimeStepMaxValue() -> int\nC++: virtual int GetMinTimeStepMaxValue()\n\nSets a minimum timestep constraint on WriteAllTimeSteps.\n"},
  {"GetMaxTimeStep", PyvtkFileSeriesWriter_GetMaxTimeStep, METH_VARARGS,
   "V.GetMaxTimeStep() -> int\nC++: virtual int GetMaxTimeStep()\n\nSets a maximum timestep constraint on WriteAllTimeSteps. If less\nthan MinTimeStep, then the MaxTimeStep constraint is ignored\n(i.e. all time steps from MinTimeStep to the actual last time\nstep are written out).\n"},
  {"SetMaxTimeStep", PyvtkFileSeriesWriter_SetMaxTimeStep, METH_VARARGS,
   "V.SetMaxTimeStep(int)\nC++: virtual void SetMaxTimeStep(int _arg)\n\nSets a maximum timestep constraint on WriteAllTimeSteps. If less\nthan MinTimeStep, then the MaxTimeStep constraint is ignored\n(i.e. all time steps from MinTimeStep to the actual last time\nstep are written out).\n"},
  {"GetTimeStepStride", PyvtkFileSeriesWriter_GetTimeStepStride, METH_VARARGS,
   "V.GetTimeStepStride() -> int\nC++: virtual int GetTimeStepStride()\n\nSets a stride to write out time series.\n"},
  {"SetTimeStepStride", PyvtkFileSeriesWriter_SetTimeStepStride, METH_VARARGS,
   "V.SetTimeStepStride(int)\nC++: virtual void SetTimeStepStride(int _arg)\n\nSets a stride to write out time series.\n"},
  {"GetTimeStepStrideMinValue", PyvtkFileSeriesWriter_GetTimeStepStrideMinValue, METH_VARARGS,
   "V.GetTimeStepStrideMinValue() -> int\nC++: virtual int GetTimeStepStrideMinValue()\n\nSets a stride to write out time series.\n"},
  {"GetTimeStepStrideMaxValue", PyvtkFileSeriesWriter_GetTimeStepStrideMaxValue, METH_VARARGS,
   "V.GetTimeStepStrideMaxValue() -> int\nC++: virtual int GetTimeStepStrideMaxValue()\n\nSets a stride to write out time series.\n"},
  {"SetInterpreter", PyvtkFileSeriesWriter_SetInterpreter, METH_VARARGS,
   "V.SetInterpreter(vtkClientServerInterpreter)\nC++: void SetInterpreter(vtkClientServerInterpreter *interp)\n\nGet/Set the interpreter to use to call methods on the writer.\n"},
  {"SuffixValidation", PyvtkFileSeriesWriter_SuffixValidation, METH_VARARGS,
   "V.SuffixValidation(string) -> bool\nC++: static bool SuffixValidation(char *fileNameSuffix)\n\nUtility function for validating the file name suffix.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkFileSeriesWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsCorePython.vtkFileSeriesWriter", // tp_name
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
  PyvtkFileSeriesWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkFileSeriesWriter_StaticNew()
{
  return vtkFileSeriesWriter::New();
}

PyObject *PyvtkFileSeriesWriter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkFileSeriesWriter_Type, PyvtkFileSeriesWriter_Methods,
    "vtkFileSeriesWriter",
 &PyvtkFileSeriesWriter_StaticNew);

  PyTypeObject *pytype = &PyvtkFileSeriesWriter_Type;

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

void PyVTKAddFile_vtkFileSeriesWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFileSeriesWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkFileSeriesWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

