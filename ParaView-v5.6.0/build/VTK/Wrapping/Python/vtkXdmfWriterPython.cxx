// python wrapper for vtkXdmfWriter
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
#include "vtkXdmfWriter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkXdmfWriter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkXdmfWriter_ClassNew(); }

#ifndef DECLARED_PyvtkDataObjectAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataObjectAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataObjectAlgorithm_ClassNew
#endif

static const char *PyvtkXdmfWriter_Doc =
  "vtkXdmfWriter - write eXtensible Data Model and Format files\n\n"
  "Superclass: vtkDataObjectAlgorithm\n\n"
  "vtkXdmfWriter converts vtkDataObjects to XDMF format. This is\n"
  "intended to replace vtkXdmfWriter, which is not up to date with the\n"
  "capabilities of the newer XDMF2 library. This writer understands\n"
  "VTK's composite data types and produces full trees in the output XDMF\n"
  "files.\n\n";


static PyObject *
PyvtkXdmfWriter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkXdmfWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfWriter *op = static_cast<vtkXdmfWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXdmfWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkXdmfWriter *tempr = vtkXdmfWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfWriter *op = static_cast<vtkXdmfWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXdmfWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXdmfWriter::NewInstance());

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
PyvtkXdmfWriter_SetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfWriter *op = static_cast<vtkXdmfWriter *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0);
    }
    else
    {
      op->vtkXdmfWriter::SetInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfWriter *op = static_cast<vtkXdmfWriter *>(vp);

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
      op->vtkXdmfWriter::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfWriter *op = static_cast<vtkXdmfWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkXdmfWriter::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfWriter_SetHeavyDataFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeavyDataFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfWriter *op = static_cast<vtkXdmfWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHeavyDataFileName(temp0);
    }
    else
    {
      op->vtkXdmfWriter::SetHeavyDataFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfWriter_GetHeavyDataFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeavyDataFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfWriter *op = static_cast<vtkXdmfWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetHeavyDataFileName() :
      op->vtkXdmfWriter::GetHeavyDataFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfWriter_SetHeavyDataGroupName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeavyDataGroupName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfWriter *op = static_cast<vtkXdmfWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHeavyDataGroupName(temp0);
    }
    else
    {
      op->vtkXdmfWriter::SetHeavyDataGroupName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfWriter_GetHeavyDataGroupName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeavyDataGroupName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfWriter *op = static_cast<vtkXdmfWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetHeavyDataGroupName() :
      op->vtkXdmfWriter::GetHeavyDataGroupName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfWriter_Write(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfWriter *op = static_cast<vtkXdmfWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->Write() :
      op->vtkXdmfWriter::Write());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfWriter_SetLightDataLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLightDataLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfWriter *op = static_cast<vtkXdmfWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLightDataLimit(temp0);
    }
    else
    {
      op->vtkXdmfWriter::SetLightDataLimit(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfWriter_GetLightDataLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLightDataLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfWriter *op = static_cast<vtkXdmfWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLightDataLimit() :
      op->vtkXdmfWriter::GetLightDataLimit());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfWriter_SetWriteAllTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteAllTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfWriter *op = static_cast<vtkXdmfWriter *>(vp);

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
      op->vtkXdmfWriter::SetWriteAllTimeSteps(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfWriter_GetWriteAllTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteAllTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfWriter *op = static_cast<vtkXdmfWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWriteAllTimeSteps() :
      op->vtkXdmfWriter::GetWriteAllTimeSteps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfWriter_WriteAllTimeStepsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteAllTimeStepsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfWriter *op = static_cast<vtkXdmfWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteAllTimeStepsOn();
    }
    else
    {
      op->vtkXdmfWriter::WriteAllTimeStepsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfWriter_WriteAllTimeStepsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteAllTimeStepsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfWriter *op = static_cast<vtkXdmfWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteAllTimeStepsOff();
    }
    else
    {
      op->vtkXdmfWriter::WriteAllTimeStepsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfWriter_SetMeshStaticOverTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMeshStaticOverTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfWriter *op = static_cast<vtkXdmfWriter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMeshStaticOverTime(temp0);
    }
    else
    {
      op->vtkXdmfWriter::SetMeshStaticOverTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfWriter_GetMeshStaticOverTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMeshStaticOverTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfWriter *op = static_cast<vtkXdmfWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetMeshStaticOverTime() :
      op->vtkXdmfWriter::GetMeshStaticOverTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfWriter_MeshStaticOverTimeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MeshStaticOverTimeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfWriter *op = static_cast<vtkXdmfWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MeshStaticOverTimeOn();
    }
    else
    {
      op->vtkXdmfWriter::MeshStaticOverTimeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfWriter_MeshStaticOverTimeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MeshStaticOverTimeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfWriter *op = static_cast<vtkXdmfWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MeshStaticOverTimeOff();
    }
    else
    {
      op->vtkXdmfWriter::MeshStaticOverTimeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfWriter_SetPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfWriter *op = static_cast<vtkXdmfWriter *>(vp);

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
      op->vtkXdmfWriter::SetPiece(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfWriter_SetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfWriter *op = static_cast<vtkXdmfWriter *>(vp);

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
      op->vtkXdmfWriter::SetNumberOfPieces(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkXdmfWriter_Methods[] = {
  {"IsTypeOf", PyvtkXdmfWriter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkXdmfWriter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkXdmfWriter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkXdmfWriter\nC++: static vtkXdmfWriter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkXdmfWriter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkXdmfWriter\nC++: vtkXdmfWriter *NewInstance()\n\n"},
  {"SetInputData", PyvtkXdmfWriter_SetInputData, METH_VARARGS,
   "V.SetInputData(vtkDataObject)\nC++: virtual void SetInputData(vtkDataObject *dobj)\n\nSet the input data set.\n"},
  {"SetFileName", PyvtkXdmfWriter_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *_arg)\n\nSet or get the file name of the xdmf file.\n"},
  {"GetFileName", PyvtkXdmfWriter_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nSet or get the file name of the xdmf file.\n"},
  {"SetHeavyDataFileName", PyvtkXdmfWriter_SetHeavyDataFileName, METH_VARARGS,
   "V.SetHeavyDataFileName(string)\nC++: virtual void SetHeavyDataFileName(const char *_arg)\n\nSet or get the file name of the hdf5 file. Note that if the File\nname is not specified, then the group name is ignore\n"},
  {"GetHeavyDataFileName", PyvtkXdmfWriter_GetHeavyDataFileName, METH_VARARGS,
   "V.GetHeavyDataFileName() -> string\nC++: virtual char *GetHeavyDataFileName()\n\nSet or get the file name of the hdf5 file. Note that if the File\nname is not specified, then the group name is ignore\n"},
  {"SetHeavyDataGroupName", PyvtkXdmfWriter_SetHeavyDataGroupName, METH_VARARGS,
   "V.SetHeavyDataGroupName(string)\nC++: virtual void SetHeavyDataGroupName(const char *_arg)\n\nSet or get the group name into which data will be written it may\ncontain nested groups as in \"/Proc0/Block0\"\n"},
  {"GetHeavyDataGroupName", PyvtkXdmfWriter_GetHeavyDataGroupName, METH_VARARGS,
   "V.GetHeavyDataGroupName() -> string\nC++: virtual char *GetHeavyDataGroupName()\n\nSet or get the group name into which data will be written it may\ncontain nested groups as in \"/Proc0/Block0\"\n"},
  {"Write", PyvtkXdmfWriter_Write, METH_VARARGS,
   "V.Write() -> int\nC++: virtual int Write()\n\nWrite data to output. Method executes subclasses WriteData()\nmethod, as well as StartMethod() and EndMethod() methods. Returns\n1 on success and 0 on failure.\n"},
  {"SetLightDataLimit", PyvtkXdmfWriter_SetLightDataLimit, METH_VARARGS,
   "V.SetLightDataLimit(int)\nC++: virtual void SetLightDataLimit(int _arg)\n\nTopology Geometry and Attribute arrays smaller than this are\nwritten in line into the XML. Default is 100. Node:\nLightDataLimit is forced to 1 when MeshStaticOverTime is TRUE.\n"},
  {"GetLightDataLimit", PyvtkXdmfWriter_GetLightDataLimit, METH_VARARGS,
   "V.GetLightDataLimit() -> int\nC++: virtual int GetLightDataLimit()\n\nTopology Geometry and Attribute arrays smaller than this are\nwritten in line into the XML. Default is 100. Node:\nLightDataLimit is forced to 1 when MeshStaticOverTime is TRUE.\n"},
  {"SetWriteAllTimeSteps", PyvtkXdmfWriter_SetWriteAllTimeSteps, METH_VARARGS,
   "V.SetWriteAllTimeSteps(int)\nC++: virtual void SetWriteAllTimeSteps(int _arg)\n\nControls whether writer automatically writes all input time\nsteps, or just the timestep that is currently on the input.\nDefault is OFF.\n"},
  {"GetWriteAllTimeSteps", PyvtkXdmfWriter_GetWriteAllTimeSteps, METH_VARARGS,
   "V.GetWriteAllTimeSteps() -> int\nC++: virtual int GetWriteAllTimeSteps()\n\nControls whether writer automatically writes all input time\nsteps, or just the timestep that is currently on the input.\nDefault is OFF.\n"},
  {"WriteAllTimeStepsOn", PyvtkXdmfWriter_WriteAllTimeStepsOn, METH_VARARGS,
   "V.WriteAllTimeStepsOn()\nC++: virtual void WriteAllTimeStepsOn()\n\nControls whether writer automatically writes all input time\nsteps, or just the timestep that is currently on the input.\nDefault is OFF.\n"},
  {"WriteAllTimeStepsOff", PyvtkXdmfWriter_WriteAllTimeStepsOff, METH_VARARGS,
   "V.WriteAllTimeStepsOff()\nC++: virtual void WriteAllTimeStepsOff()\n\nControls whether writer automatically writes all input time\nsteps, or just the timestep that is currently on the input.\nDefault is OFF.\n"},
  {"SetMeshStaticOverTime", PyvtkXdmfWriter_SetMeshStaticOverTime, METH_VARARGS,
   "V.SetMeshStaticOverTime(bool)\nC++: virtual void SetMeshStaticOverTime(bool _arg)\n\nSet of get the flag that specify if input mesh is static over\ntime. If so, the mesh topology and geometry heavy data will be\nwritten only once. Default if FALSE. Note: this mode requires\nthat all data is dumped in the heavy data file.\n"},
  {"GetMeshStaticOverTime", PyvtkXdmfWriter_GetMeshStaticOverTime, METH_VARARGS,
   "V.GetMeshStaticOverTime() -> bool\nC++: virtual bool GetMeshStaticOverTime()\n\nSet of get the flag that specify if input mesh is static over\ntime. If so, the mesh topology and geometry heavy data will be\nwritten only once. Default if FALSE. Note: this mode requires\nthat all data is dumped in the heavy data file.\n"},
  {"MeshStaticOverTimeOn", PyvtkXdmfWriter_MeshStaticOverTimeOn, METH_VARARGS,
   "V.MeshStaticOverTimeOn()\nC++: virtual void MeshStaticOverTimeOn()\n\nSet of get the flag that specify if input mesh is static over\ntime. If so, the mesh topology and geometry heavy data will be\nwritten only once. Default if FALSE. Note: this mode requires\nthat all data is dumped in the heavy data file.\n"},
  {"MeshStaticOverTimeOff", PyvtkXdmfWriter_MeshStaticOverTimeOff, METH_VARARGS,
   "V.MeshStaticOverTimeOff()\nC++: virtual void MeshStaticOverTimeOff()\n\nSet of get the flag that specify if input mesh is static over\ntime. If so, the mesh topology and geometry heavy data will be\nwritten only once. Default if FALSE. Note: this mode requires\nthat all data is dumped in the heavy data file.\n"},
  {"SetPiece", PyvtkXdmfWriter_SetPiece, METH_VARARGS,
   "V.SetPiece(int)\nC++: virtual void SetPiece(int _arg)\n\nCalled in parallel runs to identify the portion this process is\nresponsible for TODO: respect this\n"},
  {"SetNumberOfPieces", PyvtkXdmfWriter_SetNumberOfPieces, METH_VARARGS,
   "V.SetNumberOfPieces(int)\nC++: virtual void SetNumberOfPieces(int _arg)\n\nCalled in parallel runs to identify the portion this process is\nresponsible for TODO: respect this\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkXdmfWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOXdmf2Python.vtkXdmfWriter", // tp_name
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
  PyvtkXdmfWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkXdmfWriter_StaticNew()
{
  return vtkXdmfWriter::New();
}

PyObject *PyvtkXdmfWriter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkXdmfWriter_Type, PyvtkXdmfWriter_Methods,
    "vtkXdmfWriter",
 &PyvtkXdmfWriter_StaticNew);

  PyTypeObject *pytype = &PyvtkXdmfWriter_Type;

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

void PyVTKAddFile_vtkXdmfWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkXdmfWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkXdmfWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

