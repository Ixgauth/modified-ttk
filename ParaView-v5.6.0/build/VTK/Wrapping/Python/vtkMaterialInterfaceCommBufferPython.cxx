// python wrapper for vtkMaterialInterfaceCommBuffer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkMaterialInterfaceCommBuffer.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMaterialInterfaceCommBuffer(PyObject *); }

static const char *PyvtkMaterialInterfaceCommBuffer_Doc =
  "vtkMaterialInterfaceCommBuffer - FIFO buffer.\n\n"
  "Can be used to send all attributes and ids in a single send. UnPack\n"
  "in the same order that you packed.\n\n"
  "vtkMaterialInterfaceCommBuffer()\n"
  "vtkMaterialInterfaceCommBuffer(const &vtkMaterialInterfaceCommBuffer)\n";


static PyObject *
PyvtkMaterialInterfaceCommBuffer_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfaceCommBuffer *op = static_cast<vtkMaterialInterfaceCommBuffer *>(vp);

  int temp0;
  int temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    op->Initialize(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceCommBuffer_SizeHeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SizeHeader");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfaceCommBuffer *op = static_cast<vtkMaterialInterfaceCommBuffer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SizeHeader(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceCommBuffer_SizeBuffer_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SizeBuffer");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfaceCommBuffer *op = static_cast<vtkMaterialInterfaceCommBuffer *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SizeBuffer(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMaterialInterfaceCommBuffer_SizeBuffer_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SizeBuffer");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfaceCommBuffer *op = static_cast<vtkMaterialInterfaceCommBuffer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->SizeBuffer();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMaterialInterfaceCommBuffer_SizeBuffer(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkMaterialInterfaceCommBuffer_SizeBuffer_s1(self, args);
    case 0:
      return PyvtkMaterialInterfaceCommBuffer_SizeBuffer_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SizeBuffer");
  return nullptr;
}



static PyObject *
PyvtkMaterialInterfaceCommBuffer_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfaceCommBuffer *op = static_cast<vtkMaterialInterfaceCommBuffer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->Clear();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceCommBuffer_GetBufferSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBufferSize");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfaceCommBuffer *op = static_cast<vtkMaterialInterfaceCommBuffer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = op->GetBufferSize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceCommBuffer_GetBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBuffer");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfaceCommBuffer *op = static_cast<vtkMaterialInterfaceCommBuffer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = op->GetBuffer();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceCommBuffer_GetEOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEOD");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfaceCommBuffer *op = static_cast<vtkMaterialInterfaceCommBuffer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = op->GetEOD();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceCommBuffer_GetHeaderSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeaderSize");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfaceCommBuffer *op = static_cast<vtkMaterialInterfaceCommBuffer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->GetHeaderSize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceCommBuffer_GetHeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeader");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfaceCommBuffer *op = static_cast<vtkMaterialInterfaceCommBuffer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType *tempr = op->GetHeader();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceCommBuffer_Capacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Capacity");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfaceCommBuffer *op = static_cast<vtkMaterialInterfaceCommBuffer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = op->Capacity();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceCommBuffer_SetNumberOfTuples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfTuples");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfaceCommBuffer *op = static_cast<vtkMaterialInterfaceCommBuffer *>(vp);

  int temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->SetNumberOfTuples(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceCommBuffer_GetNumberOfTuples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTuples");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfaceCommBuffer *op = static_cast<vtkMaterialInterfaceCommBuffer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType tempr = op->GetNumberOfTuples(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceCommBuffer_Pack_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pack");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfaceCommBuffer *op = static_cast<vtkMaterialInterfaceCommBuffer *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  int temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkIdType tempr = op->Pack(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMaterialInterfaceCommBuffer_Pack_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pack");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfaceCommBuffer *op = static_cast<vtkMaterialInterfaceCommBuffer *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(size0);
  int *temp0 = store0.Data();
  int temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkIdType tempr = op->Pack(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMaterialInterfaceCommBuffer_Pack_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pack");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfaceCommBuffer *op = static_cast<vtkMaterialInterfaceCommBuffer *>(vp);

  vtkDoubleArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDoubleArray"))
  {
    vtkIdType tempr = op->Pack(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMaterialInterfaceCommBuffer_Pack_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pack");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfaceCommBuffer *op = static_cast<vtkMaterialInterfaceCommBuffer *>(vp);

  vtkFloatArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFloatArray"))
  {
    vtkIdType tempr = op->Pack(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMaterialInterfaceCommBuffer_Pack_Methods[] = {
  {nullptr, PyvtkMaterialInterfaceCommBuffer_Pack_s1, METH_VARARGS,
   "@Pik *d"},
  {nullptr, PyvtkMaterialInterfaceCommBuffer_Pack_s2, METH_VARARGS,
   "@Pik *i"},
  {nullptr, PyvtkMaterialInterfaceCommBuffer_Pack_s3, METH_VARARGS,
   "@V *vtkDoubleArray"},
  {nullptr, PyvtkMaterialInterfaceCommBuffer_Pack_s4, METH_VARARGS,
   "@V *vtkFloatArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMaterialInterfaceCommBuffer_Pack(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMaterialInterfaceCommBuffer_Pack_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Pack");
  return nullptr;
}



static PyObject *
PyvtkMaterialInterfaceCommBuffer_InitUnpack(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitUnpack");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfaceCommBuffer *op = static_cast<vtkMaterialInterfaceCommBuffer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->InitUnpack();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaterialInterfaceCommBuffer_UnPack_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnPack");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfaceCommBuffer *op = static_cast<vtkMaterialInterfaceCommBuffer *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  int temp1;
  vtkIdType temp2;
  bool temp3 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = op->UnPack(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0, size0);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMaterialInterfaceCommBuffer_UnPack_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnPack");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfaceCommBuffer *op = static_cast<vtkMaterialInterfaceCommBuffer *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int temp1;
  vtkIdType temp2;
  bool temp3 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = op->UnPack(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0, size0);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMaterialInterfaceCommBuffer_UnPack_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnPack");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfaceCommBuffer *op = static_cast<vtkMaterialInterfaceCommBuffer *>(vp);

  vtkDoubleArray *temp0 = nullptr;
  int temp1;
  vtkIdType temp2;
  bool temp3 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkDoubleArray") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = op->UnPack(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMaterialInterfaceCommBuffer_UnPack_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnPack");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkMaterialInterfaceCommBuffer *op = static_cast<vtkMaterialInterfaceCommBuffer *>(vp);

  vtkFloatArray *temp0 = nullptr;
  int temp1;
  vtkIdType temp2;
  bool temp3 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkFloatArray") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = op->UnPack(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMaterialInterfaceCommBuffer_UnPack_Methods[] = {
  {nullptr, PyvtkMaterialInterfaceCommBuffer_UnPack_s1, METH_VARARGS,
   "@Pikq *d"},
  {nullptr, PyvtkMaterialInterfaceCommBuffer_UnPack_s2, METH_VARARGS,
   "@Pikq *i"},
  {nullptr, PyvtkMaterialInterfaceCommBuffer_UnPack_s3, METH_VARARGS,
   "@Vikq *vtkDoubleArray"},
  {nullptr, PyvtkMaterialInterfaceCommBuffer_UnPack_s4, METH_VARARGS,
   "@Vikq *vtkFloatArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMaterialInterfaceCommBuffer_UnPack(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMaterialInterfaceCommBuffer_UnPack_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "UnPack");
  return nullptr;
}


static PyMethodDef PyvtkMaterialInterfaceCommBuffer_Methods[] = {
  {"Initialize", PyvtkMaterialInterfaceCommBuffer_Initialize, METH_VARARGS,
   "V.Initialize(int, int, int)\nC++: void Initialize(int procId, int nBlocks, vtkIdType nBytes)\n\nInitialize for outgoing comm.\n"},
  {"SizeHeader", PyvtkMaterialInterfaceCommBuffer_SizeHeader, METH_VARARGS,
   "V.SizeHeader(int)\nC++: void SizeHeader(int nBlocks)\n\nSet up for an incoming header.\n"},
  {"SizeBuffer", PyvtkMaterialInterfaceCommBuffer_SizeBuffer, METH_VARARGS,
   "V.SizeBuffer(int)\nC++: void SizeBuffer(vtkIdType nBytes)\nV.SizeBuffer()\nC++: void SizeBuffer()\n\nInitialize the buffer.\n"},
  {"Clear", PyvtkMaterialInterfaceCommBuffer_Clear, METH_VARARGS,
   "V.Clear()\nC++: void Clear()\n\nFree resources set to invalid state.\n"},
  {"GetBufferSize", PyvtkMaterialInterfaceCommBuffer_GetBufferSize, METH_VARARGS,
   "V.GetBufferSize() -> int\nC++: vtkIdType GetBufferSize()\n\nGet size in bytes of the buffer.\n"},
  {"GetBuffer", PyvtkMaterialInterfaceCommBuffer_GetBuffer, METH_VARARGS,
   "V.GetBuffer() -> string\nC++: char *GetBuffer()\n\nGet a pointer to the buffer\n"},
  {"GetEOD", PyvtkMaterialInterfaceCommBuffer_GetEOD, METH_VARARGS,
   "V.GetEOD() -> int\nC++: vtkIdType GetEOD()\n\nGet the byte that the next rerad or write will occur at\n"},
  {"GetHeaderSize", PyvtkMaterialInterfaceCommBuffer_GetHeaderSize, METH_VARARGS,
   "V.GetHeaderSize() -> int\nC++: int GetHeaderSize()\n\nGet size in bytes of the header.\n"},
  {"GetHeader", PyvtkMaterialInterfaceCommBuffer_GetHeader, METH_VARARGS,
   "V.GetHeader() -> (int, ...)\nC++: vtkIdType *GetHeader()\n\nGet a pointer to the header.\n"},
  {"Capacity", PyvtkMaterialInterfaceCommBuffer_Capacity, METH_VARARGS,
   "V.Capacity() -> int\nC++: vtkIdType Capacity()\n\nGet the total memory used.\n"},
  {"SetNumberOfTuples", PyvtkMaterialInterfaceCommBuffer_SetNumberOfTuples, METH_VARARGS,
   "V.SetNumberOfTuples(int, int)\nC++: void SetNumberOfTuples(int blockId, vtkIdType nFragments)\n\nSet the number of tuples for a given block.\n"},
  {"GetNumberOfTuples", PyvtkMaterialInterfaceCommBuffer_GetNumberOfTuples, METH_VARARGS,
   "V.GetNumberOfTuples(int) -> int\nC++: vtkIdType GetNumberOfTuples(int blockId)\n\nGet the number of tuples for a given block\n"},
  {"Pack", PyvtkMaterialInterfaceCommBuffer_Pack, METH_VARARGS,
   "V.Pack((float, ...), int, int) -> int\nC++: vtkIdType Pack(const double *pData, const int nComps,\n    const vtkIdType nTups)\nV.Pack((int, ...), int, int) -> int\nC++: vtkIdType Pack(const int *pData, const int nComps,\n    const vtkIdType nTups)\nV.Pack(vtkDoubleArray) -> int\nC++: vtkIdType Pack(vtkDoubleArray *da)\nV.Pack(vtkFloatArray) -> int\nC++: vtkIdType Pack(vtkFloatArray *da)\n\nAppend the data to the buffer. Return the index where the data\nwas written.\n"},
  {"InitUnpack", PyvtkMaterialInterfaceCommBuffer_InitUnpack, METH_VARARGS,
   "V.InitUnpack()\nC++: void InitUnpack()\n\nPrepare to un pack the buffer.\n"},
  {"UnPack", PyvtkMaterialInterfaceCommBuffer_UnPack, METH_VARARGS,
   "V.UnPack([float, ...], int, int, bool) -> int\nC++: int UnPack(double *&rData, const int nComps,\n    const vtkIdType nTups, const bool copyFlag)\nV.UnPack([int, ...], int, int, bool) -> int\nC++: int UnPack(int *&rData, const int nComps,\n    const vtkIdType nTups, const bool copyFlag)\nV.UnPack(vtkDoubleArray, int, int, bool) -> int\nC++: int UnPack(vtkDoubleArray *da, const int nComps,\n    const vtkIdType nTups, const bool copyFlag)\nV.UnPack(vtkFloatArray, int, int, bool) -> int\nC++: int UnPack(vtkFloatArray *da, const int nComps,\n    const vtkIdType nTups, const bool copyFlag)\n\nExtract the next array from the buffer\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkMaterialInterfaceCommBuffer_vtkMaterialInterfaceCommBuffer_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkMaterialInterfaceCommBuffer");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkMaterialInterfaceCommBuffer *op = new vtkMaterialInterfaceCommBuffer();

    result = PyVTKSpecialObject_New("vtkMaterialInterfaceCommBuffer", op);
  }

  return result;
}

static PyObject *
PyvtkMaterialInterfaceCommBuffer_vtkMaterialInterfaceCommBuffer_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkMaterialInterfaceCommBuffer");

  vtkMaterialInterfaceCommBuffer *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkMaterialInterfaceCommBuffer"))
  {
    vtkMaterialInterfaceCommBuffer *op = new vtkMaterialInterfaceCommBuffer(*temp0);

    result = PyVTKSpecialObject_New("vtkMaterialInterfaceCommBuffer", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkMaterialInterfaceCommBuffer_vtkMaterialInterfaceCommBuffer_Methods[] = {
  {nullptr, PyvtkMaterialInterfaceCommBuffer_vtkMaterialInterfaceCommBuffer_s2, METH_VARARGS,
   "@W vtkMaterialInterfaceCommBuffer"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMaterialInterfaceCommBuffer_vtkMaterialInterfaceCommBuffer(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkMaterialInterfaceCommBuffer_vtkMaterialInterfaceCommBuffer_s1(self, args);
    case 1:
      return PyvtkMaterialInterfaceCommBuffer_vtkMaterialInterfaceCommBuffer_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkMaterialInterfaceCommBuffer");
  return nullptr;
}


static PyObject *
PyvtkMaterialInterfaceCommBuffer_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkMaterialInterfaceCommBuffer_vtkMaterialInterfaceCommBuffer(nullptr, args);
}

static void PyvtkMaterialInterfaceCommBuffer_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkMaterialInterfaceCommBuffer *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkMaterialInterfaceCommBuffer_Hash(PyObject *self)
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

static PyTypeObject PyvtkMaterialInterfaceCommBuffer_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkMaterialInterfaceCommBuffer", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkMaterialInterfaceCommBuffer_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkMaterialInterfaceCommBuffer_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkMaterialInterfaceCommBuffer_Doc, // tp_doc
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
  PyvtkMaterialInterfaceCommBuffer_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkMaterialInterfaceCommBuffer_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkMaterialInterfaceCommBuffer(*static_cast<const vtkMaterialInterfaceCommBuffer*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMaterialInterfaceCommBuffer_TypeNew(); }

PyObject *PyvtkMaterialInterfaceCommBuffer_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkMaterialInterfaceCommBuffer_Type,
    PyvtkMaterialInterfaceCommBuffer_Methods,
    PyvtkMaterialInterfaceCommBuffer_vtkMaterialInterfaceCommBuffer_Methods,
    &PyvtkMaterialInterfaceCommBuffer_CCopy);

  PyTypeObject *pytype = &PyvtkMaterialInterfaceCommBuffer_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "PROC_ID", vtkMaterialInterfaceCommBuffer::PROC_ID },
        { "BUFFER_SIZE", vtkMaterialInterfaceCommBuffer::BUFFER_SIZE },
        { "DESCR_BASE", vtkMaterialInterfaceCommBuffer::DESCR_BASE },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMaterialInterfaceCommBuffer(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMaterialInterfaceCommBuffer_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkMaterialInterfaceCommBuffer", o) != 0)
  {
    Py_DECREF(o);
  }

}

