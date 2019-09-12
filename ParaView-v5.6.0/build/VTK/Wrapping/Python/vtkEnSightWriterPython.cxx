// python wrapper for vtkEnSightWriter
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
#include "vtkEnSightWriter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkEnSightWriter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkEnSightWriter_ClassNew(); }

#ifndef DECLARED_PyvtkWriter_ClassNew
extern "C" { PyObject *PyvtkWriter_ClassNew(); }
#define DECLARED_PyvtkWriter_ClassNew
#endif

static const char *PyvtkEnSightWriter_Doc =
  "vtkEnSightWriter - write vtk unstructured grid data as an EnSight file\n\n"
  "Superclass: vtkWriter\n\n"
  "vtkEnSightWriter is a source object that writes binary unstructured\n"
  "grid data files in EnSight format. See EnSight Manual for format\n"
  "details\n\n"
  "@warning\n"
  "Binary files written on one system may not be readable on other\n"
  "systems. Be sure to specify the endian-ness of the file when reading\n"
  "it into EnSight\n\n";


static PyObject *
PyvtkEnSightWriter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkEnSightWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkEnSightWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkEnSightWriter *tempr = vtkEnSightWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkEnSightWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkEnSightWriter::NewInstance());

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
PyvtkEnSightWriter_SetProcessNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProcessNumber(temp0);
    }
    else
    {
      op->vtkEnSightWriter::SetProcessNumber(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightWriter_GetProcessNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProcessNumber() :
      op->vtkEnSightWriter::GetProcessNumber());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightWriter_SetPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPath(temp0);
    }
    else
    {
      op->vtkEnSightWriter::SetPath(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightWriter_GetPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetPath() :
      op->vtkEnSightWriter::GetPath());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightWriter_SetBaseName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBaseName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBaseName(temp0);
    }
    else
    {
      op->vtkEnSightWriter::SetBaseName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightWriter_GetBaseName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBaseName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetBaseName() :
      op->vtkEnSightWriter::GetBaseName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

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
      op->vtkEnSightWriter::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkEnSightWriter::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightWriter_SetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

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
      op->vtkEnSightWriter::SetTimeStep(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightWriter_GetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimeStep() :
      op->vtkEnSightWriter::GetTimeStep());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightWriter_SetGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

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
      op->vtkEnSightWriter::SetGhostLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightWriter_GetGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGhostLevel() :
      op->vtkEnSightWriter::GetGhostLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightWriter_SetTransientGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransientGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTransientGeometry(temp0);
    }
    else
    {
      op->vtkEnSightWriter::SetTransientGeometry(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightWriter_GetTransientGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransientGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetTransientGeometry() :
      op->vtkEnSightWriter::GetTransientGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightWriter_SetNumberOfBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfBlocks(temp0);
    }
    else
    {
      op->vtkEnSightWriter::SetNumberOfBlocks(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightWriter_GetNumberOfBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfBlocks() :
      op->vtkEnSightWriter::GetNumberOfBlocks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightWriter_SetBlockIDs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetBlockIDs(temp0);
    }
    else
    {
      op->vtkEnSightWriter::SetBlockIDs(temp0);
    }

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


static PyObject *
PyvtkEnSightWriter_GetBlockIDs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetBlockIDs() :
      op->vtkEnSightWriter::GetBlockIDs());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightWriter_SetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  vtkUnstructuredGrid *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUnstructuredGrid"))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0);
    }
    else
    {
      op->vtkEnSightWriter::SetInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightWriter_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnstructuredGrid *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkEnSightWriter::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightWriter_WriteCaseFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteCaseFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->WriteCaseFile(temp0);
    }
    else
    {
      op->vtkEnSightWriter::WriteCaseFile(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightWriter_WriteSOSCaseFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteSOSCaseFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->WriteSOSCaseFile(temp0);
    }
    else
    {
      op->vtkEnSightWriter::WriteSOSCaseFile(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkEnSightWriter_Methods[] = {
  {"IsTypeOf", PyvtkEnSightWriter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkEnSightWriter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkEnSightWriter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkEnSightWriter\nC++: static vtkEnSightWriter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkEnSightWriter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkEnSightWriter\nC++: vtkEnSightWriter *NewInstance()\n\n"},
  {"SetProcessNumber", PyvtkEnSightWriter_SetProcessNumber, METH_VARARGS,
   "V.SetProcessNumber(int)\nC++: virtual void SetProcessNumber(int _arg)\n\nSpecify which process this writer is\n"},
  {"GetProcessNumber", PyvtkEnSightWriter_GetProcessNumber, METH_VARARGS,
   "V.GetProcessNumber() -> int\nC++: virtual int GetProcessNumber()\n\nSpecify which process this writer is\n"},
  {"SetPath", PyvtkEnSightWriter_SetPath, METH_VARARGS,
   "V.SetPath(string)\nC++: virtual void SetPath(const char *_arg)\n\nSpecify path of EnSight data files to write.\n"},
  {"GetPath", PyvtkEnSightWriter_GetPath, METH_VARARGS,
   "V.GetPath() -> string\nC++: virtual char *GetPath()\n\nSpecify path of EnSight data files to write.\n"},
  {"SetBaseName", PyvtkEnSightWriter_SetBaseName, METH_VARARGS,
   "V.SetBaseName(string)\nC++: virtual void SetBaseName(const char *_arg)\n\nSpecify base name of EnSight data files to write.\n"},
  {"GetBaseName", PyvtkEnSightWriter_GetBaseName, METH_VARARGS,
   "V.GetBaseName() -> string\nC++: virtual char *GetBaseName()\n\nSpecify base name of EnSight data files to write.\n"},
  {"SetFileName", PyvtkEnSightWriter_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *_arg)\n\nSpecify the path and base name of the output files.\n"},
  {"GetFileName", PyvtkEnSightWriter_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nSpecify the path and base name of the output files.\n"},
  {"SetTimeStep", PyvtkEnSightWriter_SetTimeStep, METH_VARARGS,
   "V.SetTimeStep(int)\nC++: virtual void SetTimeStep(int _arg)\n\nSpecify the Timestep that this data is for\n"},
  {"GetTimeStep", PyvtkEnSightWriter_GetTimeStep, METH_VARARGS,
   "V.GetTimeStep() -> int\nC++: virtual int GetTimeStep()\n\nSpecify the Timestep that this data is for\n"},
  {"SetGhostLevel", PyvtkEnSightWriter_SetGhostLevel, METH_VARARGS,
   "V.SetGhostLevel(int)\nC++: virtual void SetGhostLevel(int _arg)\n\nSpecify the number of ghost levels to include in output files\n"},
  {"GetGhostLevel", PyvtkEnSightWriter_GetGhostLevel, METH_VARARGS,
   "V.GetGhostLevel() -> int\nC++: virtual int GetGhostLevel()\n\nSpecify the number of ghost levels to include in output files\n"},
  {"SetTransientGeometry", PyvtkEnSightWriter_SetTransientGeometry, METH_VARARGS,
   "V.SetTransientGeometry(bool)\nC++: virtual void SetTransientGeometry(bool _arg)\n\nSpecify whether the geometry changes each timestep if false,\ngeometry is only written at timestep 0\n"},
  {"GetTransientGeometry", PyvtkEnSightWriter_GetTransientGeometry, METH_VARARGS,
   "V.GetTransientGeometry() -> bool\nC++: virtual bool GetTransientGeometry()\n\nSpecify whether the geometry changes each timestep if false,\ngeometry is only written at timestep 0\n"},
  {"SetNumberOfBlocks", PyvtkEnSightWriter_SetNumberOfBlocks, METH_VARARGS,
   "V.SetNumberOfBlocks(int)\nC++: virtual void SetNumberOfBlocks(int _arg)\n\nset the number of block ID's\n"},
  {"GetNumberOfBlocks", PyvtkEnSightWriter_GetNumberOfBlocks, METH_VARARGS,
   "V.GetNumberOfBlocks() -> int\nC++: virtual int GetNumberOfBlocks()\n\nset the number of block ID's\n"},
  {"SetBlockIDs", PyvtkEnSightWriter_SetBlockIDs, METH_VARARGS,
   "V.SetBlockIDs([int, ...])\nC++: virtual void SetBlockIDs(int *val)\n\nset the array of Block ID's this class keeps a reference to the\narray and will not delete it\n"},
  {"GetBlockIDs", PyvtkEnSightWriter_GetBlockIDs, METH_VARARGS,
   "V.GetBlockIDs() -> (int, ...)\nC++: virtual int *GetBlockIDs()\n\nset the array of Block ID's this class keeps a reference to the\narray and will not delete it\n"},
  {"SetInputData", PyvtkEnSightWriter_SetInputData, METH_VARARGS,
   "V.SetInputData(vtkUnstructuredGrid)\nC++: virtual void SetInputData(vtkUnstructuredGrid *input)\n\nSpecify the input data or filter.\n"},
  {"GetInput", PyvtkEnSightWriter_GetInput, METH_VARARGS,
   "V.GetInput() -> vtkUnstructuredGrid\nC++: virtual vtkUnstructuredGrid *GetInput()\n\nSpecify the input data or filter.\n"},
  {"WriteCaseFile", PyvtkEnSightWriter_WriteCaseFile, METH_VARARGS,
   "V.WriteCaseFile(int)\nC++: virtual void WriteCaseFile(int TotalTimeSteps)\n\nWrites the case file that EnSight is capable of reading The other\ndata files must be written before the case file and the input\nmust be one of the time steps variables must be the same for all\ntime steps or the case file will be missing variables\n"},
  {"WriteSOSCaseFile", PyvtkEnSightWriter_WriteSOSCaseFile, METH_VARARGS,
   "V.WriteSOSCaseFile(int)\nC++: virtual void WriteSOSCaseFile(int NumProcs)\n\nWrites the case file that EnSight is capable of reading The other\ndata files must be written before the case file and the input\nmust be one of the time steps variables must be the same for all\ntime steps or the case file will be missing variables\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkEnSightWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOParallelPython.vtkEnSightWriter", // tp_name
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
  PyvtkEnSightWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkEnSightWriter_StaticNew()
{
  return vtkEnSightWriter::New();
}

PyObject *PyvtkEnSightWriter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkEnSightWriter_Type, PyvtkEnSightWriter_Methods,
    "vtkEnSightWriter",
 &PyvtkEnSightWriter_StaticNew);

  PyTypeObject *pytype = &PyvtkEnSightWriter_Type;

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

void PyVTKAddFile_vtkEnSightWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkEnSightWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkEnSightWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

