// python wrapper for vtkPExodusIIReader
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
#include "vtkPExodusIIReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPExodusIIReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPExodusIIReader_ClassNew(); }

#ifndef DECLARED_PyvtkExodusIIReader_ClassNew
extern "C" { PyObject *PyvtkExodusIIReader_ClassNew(); }
#define DECLARED_PyvtkExodusIIReader_ClassNew
#endif

static const char *PyvtkPExodusIIReader_Doc =
  "vtkPExodusIIReader - Read Exodus II files (.exii)\n\n"
  "Superclass: vtkExodusIIReader\n\n"
  "vtkPExodusIIReader is a unstructured grid source object that reads\n"
  "ExodusII files. Most of the meta data associated with the file is\n"
  "loaded when UpdateInformation is called. This includes information\n"
  "like Title, number of blocks, number and names of arrays. This data\n"
  "can be retrieved from methods in this reader. Separate arrays that\n"
  "are meant to be a single vector, are combined internally for\n"
  "convenience. To be combined, the array names have to be identical\n"
  "except for a trailing X,Y and Z (or x,y,z). By default all cell and\n"
  "point arrays are loaded. However, the user can flag arrays not to\n"
  "load with the methods \"SetPointDataArrayLoadFlag\" and\n"
  "\"SetCellDataArrayLoadFlag\". The reader responds to piece requests by\n"
  "loading only a range of the possible blocks. Unused points are\n"
  "filtered out internally.\n\n";


static PyObject *
PyvtkPExodusIIReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPExodusIIReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPExodusIIReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIReader *op = static_cast<vtkPExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPExodusIIReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPExodusIIReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPExodusIIReader *tempr = vtkPExodusIIReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPExodusIIReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIReader *op = static_cast<vtkPExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPExodusIIReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPExodusIIReader::NewInstance());

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
PyvtkPExodusIIReader_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIReader *op = static_cast<vtkPExodusIIReader *>(vp);

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
      op->vtkPExodusIIReader::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPExodusIIReader_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIReader *op = static_cast<vtkPExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkPExodusIIReader::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPExodusIIReader_SetFilePattern(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFilePattern");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIReader *op = static_cast<vtkPExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFilePattern(temp0);
    }
    else
    {
      op->vtkPExodusIIReader::SetFilePattern(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPExodusIIReader_GetFilePattern(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilePattern");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIReader *op = static_cast<vtkPExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFilePattern() :
      op->vtkPExodusIIReader::GetFilePattern());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPExodusIIReader_SetFilePrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFilePrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIReader *op = static_cast<vtkPExodusIIReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFilePrefix(temp0);
    }
    else
    {
      op->vtkPExodusIIReader::SetFilePrefix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPExodusIIReader_GetFilePrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilePrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIReader *op = static_cast<vtkPExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFilePrefix() :
      op->vtkPExodusIIReader::GetFilePrefix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPExodusIIReader_SetFileRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIReader *op = static_cast<vtkPExodusIIReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetFileRange(temp0, temp1);
    }
    else
    {
      op->vtkPExodusIIReader::SetFileRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPExodusIIReader_SetFileRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIReader *op = static_cast<vtkPExodusIIReader *>(vp);

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
      op->SetFileRange(temp0);
    }
    else
    {
      op->vtkPExodusIIReader::SetFileRange(temp0);
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
PyvtkPExodusIIReader_SetFileRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkPExodusIIReader_SetFileRange_s1(self, args);
    case 1:
      return PyvtkPExodusIIReader_SetFileRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetFileRange");
  return nullptr;
}



static PyObject *
PyvtkPExodusIIReader_GetFileRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIReader *op = static_cast<vtkPExodusIIReader *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetFileRange() :
      op->vtkPExodusIIReader::GetFileRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPExodusIIReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIReader *op = static_cast<vtkPExodusIIReader *>(vp);

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
      op->vtkPExodusIIReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPExodusIIReader_GetNumberOfFileNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFileNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIReader *op = static_cast<vtkPExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFileNames() :
      op->vtkPExodusIIReader::GetNumberOfFileNames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPExodusIIReader_GetNumberOfFiles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFiles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIReader *op = static_cast<vtkPExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFiles() :
      op->vtkPExodusIIReader::GetNumberOfFiles());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPExodusIIReader_GetTotalNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIReader *op = static_cast<vtkPExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetTotalNumberOfElements() :
      op->vtkPExodusIIReader::GetTotalNumberOfElements());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPExodusIIReader_GetTotalNumberOfNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalNumberOfNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIReader *op = static_cast<vtkPExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetTotalNumberOfNodes() :
      op->vtkPExodusIIReader::GetTotalNumberOfNodes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPExodusIIReader_Broadcast(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIReader *op = static_cast<vtkPExodusIIReader *>(vp);

  vtkMultiProcessController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
  {
    if (ap.IsBound())
    {
      op->Broadcast(temp0);
    }
    else
    {
      op->vtkPExodusIIReader::Broadcast(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPExodusIIReader_GetVariableCacheSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariableCacheSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIReader *op = static_cast<vtkPExodusIIReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetVariableCacheSize() :
      op->vtkPExodusIIReader::GetVariableCacheSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPExodusIIReader_SetVariableCacheSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariableCacheSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIReader *op = static_cast<vtkPExodusIIReader *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVariableCacheSize(temp0);
    }
    else
    {
      op->vtkPExodusIIReader::SetVariableCacheSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPExodusIIReader_Methods[] = {
  {"IsTypeOf", PyvtkPExodusIIReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPExodusIIReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPExodusIIReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPExodusIIReader\nC++: static vtkPExodusIIReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPExodusIIReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPExodusIIReader\nC++: vtkPExodusIIReader *NewInstance()\n\n"},
  {"SetController", PyvtkPExodusIIReader_SetController, METH_VARARGS,
   "V.SetController(vtkMultiProcessController)\nC++: void SetController(vtkMultiProcessController *c)\n\nSet/get the communication object used to relay a list of files\nfrom the rank 0 process to all others. This is the only\ninterprocess communication required by vtkPExodusIIReader.\n"},
  {"GetController", PyvtkPExodusIIReader_GetController, METH_VARARGS,
   "V.GetController() -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\nSet/get the communication object used to relay a list of files\nfrom the rank 0 process to all others. This is the only\ninterprocess communication required by vtkPExodusIIReader.\n"},
  {"SetFilePattern", PyvtkPExodusIIReader_SetFilePattern, METH_VARARGS,
   "V.SetFilePattern(string)\nC++: virtual void SetFilePattern(const char *_arg)\n\nThese methods tell the reader that the data is distributed across\nmultiple files. This is for distributed execution. It this case,\npieces are mapped to files. The pattern should have one %d to\nformat the file number. FileNumberRange is used to generate file\nnumbers. I was thinking of having an arbitrary list of file\nnumbers. This may happen in the future. (That is why there is no\nGetFileNumberRange method.\n"},
  {"GetFilePattern", PyvtkPExodusIIReader_GetFilePattern, METH_VARARGS,
   "V.GetFilePattern() -> string\nC++: virtual char *GetFilePattern()\n\nThese methods tell the reader that the data is distributed across\nmultiple files. This is for distributed execution. It this case,\npieces are mapped to files. The pattern should have one %d to\nformat the file number. FileNumberRange is used to generate file\nnumbers. I was thinking of having an arbitrary list of file\nnumbers. This may happen in the future. (That is why there is no\nGetFileNumberRange method.\n"},
  {"SetFilePrefix", PyvtkPExodusIIReader_SetFilePrefix, METH_VARARGS,
   "V.SetFilePrefix(string)\nC++: virtual void SetFilePrefix(const char *_arg)\n\nThese methods tell the reader that the data is distributed across\nmultiple files. This is for distributed execution. It this case,\npieces are mapped to files. The pattern should have one %d to\nformat the file number. FileNumberRange is used to generate file\nnumbers. I was thinking of having an arbitrary list of file\nnumbers. This may happen in the future. (That is why there is no\nGetFileNumberRange method.\n"},
  {"GetFilePrefix", PyvtkPExodusIIReader_GetFilePrefix, METH_VARARGS,
   "V.GetFilePrefix() -> string\nC++: virtual char *GetFilePrefix()\n\nThese methods tell the reader that the data is distributed across\nmultiple files. This is for distributed execution. It this case,\npieces are mapped to files. The pattern should have one %d to\nformat the file number. FileNumberRange is used to generate file\nnumbers. I was thinking of having an arbitrary list of file\nnumbers. This may happen in the future. (That is why there is no\nGetFileNumberRange method.\n"},
  {"SetFileRange", PyvtkPExodusIIReader_SetFileRange, METH_VARARGS,
   "V.SetFileRange(int, int)\nC++: void SetFileRange(int, int)\nV.SetFileRange([int, ...])\nC++: void SetFileRange(int *r)\n\nSet the range of files that are being loaded. The range for\nsingle file should add to 0.\n"},
  {"GetFileRange", PyvtkPExodusIIReader_GetFileRange, METH_VARARGS,
   "V.GetFileRange() -> (int, int)\nC++: int *GetFileRange()\n\n"},
  {"SetFileName", PyvtkPExodusIIReader_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: void SetFileName(const char *name) override;\n\nSpecify file name of the Exodus file.\n"},
  {"GetNumberOfFileNames", PyvtkPExodusIIReader_GetNumberOfFileNames, METH_VARARGS,
   "V.GetNumberOfFileNames() -> int\nC++: int GetNumberOfFileNames()\n\nReturn number of file names set in SetFileNames\n"},
  {"GetNumberOfFiles", PyvtkPExodusIIReader_GetNumberOfFiles, METH_VARARGS,
   "V.GetNumberOfFiles() -> int\nC++: virtual int GetNumberOfFiles()\n\nReturn the number of files to be read.\n"},
  {"GetTotalNumberOfElements", PyvtkPExodusIIReader_GetTotalNumberOfElements, METH_VARARGS,
   "V.GetTotalNumberOfElements() -> int\nC++: vtkIdType GetTotalNumberOfElements() override;\n\n"},
  {"GetTotalNumberOfNodes", PyvtkPExodusIIReader_GetTotalNumberOfNodes, METH_VARARGS,
   "V.GetTotalNumberOfNodes() -> int\nC++: vtkIdType GetTotalNumberOfNodes() override;\n\n"},
  {"Broadcast", PyvtkPExodusIIReader_Broadcast, METH_VARARGS,
   "V.Broadcast(vtkMultiProcessController)\nC++: virtual void Broadcast(vtkMultiProcessController *ctrl)\n\nSends metadata (that read from the input file, not settings\nmodified through this API) from the rank 0 node to all other\nprocesses in a job.\n"},
  {"GetVariableCacheSize", PyvtkPExodusIIReader_GetVariableCacheSize, METH_VARARGS,
   "V.GetVariableCacheSize() -> float\nC++: virtual double GetVariableCacheSize()\n\nThe size of the variable cache in MegaByes. This represents the\nmaximum size of cache that a single partition reader can have\nwhile reading. When a reader is finished its cache size will be\nset to a fraction of this based on the number of partitions. The\nDefault for this is 100MiB. Note that because each reader still\nholds a fraction of the cache size after reading the total amount\nof data cached can be at most twice this size.\n"},
  {"SetVariableCacheSize", PyvtkPExodusIIReader_SetVariableCacheSize, METH_VARARGS,
   "V.SetVariableCacheSize(float)\nC++: virtual void SetVariableCacheSize(double _arg)\n\nThe size of the variable cache in MegaByes. This represents the\nmaximum size of cache that a single partition reader can have\nwhile reading. When a reader is finished its cache size will be\nset to a fraction of this based on the number of partitions. The\nDefault for this is 100MiB. Note that because each reader still\nholds a fraction of the cache size after reading the total amount\nof data cached can be at most twice this size.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPExodusIIReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOParallelExodusPython.vtkPExodusIIReader", // tp_name
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
  PyvtkPExodusIIReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPExodusIIReader_StaticNew()
{
  return vtkPExodusIIReader::New();
}

PyObject *PyvtkPExodusIIReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPExodusIIReader_Type, PyvtkPExodusIIReader_Methods,
    "vtkPExodusIIReader",
 &PyvtkPExodusIIReader_StaticNew);

  PyTypeObject *pytype = &PyvtkPExodusIIReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkExodusIIReader_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPExodusIIReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPExodusIIReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPExodusIIReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

