// python wrapper for vtkRandomPool
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
#include "vtkRandomPool.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRandomPool(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkRandomPool_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkRandomPool_Doc =
  "vtkRandomPool - convenience class to quickly generate a pool of\nrandom numbers\n\n"
  "Superclass: vtkObject\n\n"
  "vtkRandomPool generates random numbers, and can do so using\n"
  "multithreading.  It supports parallel applications where generating\n"
  "random numbers on the fly is difficult (i.e., non-deterministic).\n"
  "Also, it can be used to populate vtkDataArrays in an efficient\n"
  "manner. By default it uses an instance of vtkMersenneTwister to\n"
  "generate random sequences, but any subclass of vtkRandomSequence may\n"
  "be used. It also supports simple methods to generate, access, and\n"
  "pass random memory pools between objects.\n\n"
  "In threaded applications, these class may be conveniently used to\n"
  "pre-generate a sequence of random numbers, followed by the use of\n"
  "deterministic accessor methods to produce random sequences without\n"
  "problems etc. due to unpredictable work load and order of thread\n"
  "execution.\n\n"
  "@warning\n"
  "The class uses vtkMultiThreader if the size of the pool is larger\n"
  "than the specified chunk size. Also, vtkSMPTools may be used to scale\n"
  "the components in the method PopulateDataArray().\n\n";


static PyObject *
PyvtkRandomPool_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRandomPool::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomPool_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomPool *op = static_cast<vtkRandomPool *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRandomPool::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomPool_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRandomPool *tempr = vtkRandomPool::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomPool_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomPool *op = static_cast<vtkRandomPool *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRandomPool *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRandomPool::NewInstance());

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
PyvtkRandomPool_SetSequence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSequence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomPool *op = static_cast<vtkRandomPool *>(vp);

  vtkRandomSequence *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRandomSequence"))
  {
    if (ap.IsBound())
    {
      op->SetSequence(temp0);
    }
    else
    {
      op->vtkRandomPool::SetSequence(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomPool_GetSequence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSequence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomPool *op = static_cast<vtkRandomPool *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRandomSequence *tempr = (ap.IsBound() ?
      op->GetSequence() :
      op->vtkRandomPool::GetSequence());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomPool_SetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomPool *op = static_cast<vtkRandomPool *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSize(temp0);
    }
    else
    {
      op->vtkRandomPool::SetSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomPool_GetSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomPool *op = static_cast<vtkRandomPool *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetSizeMinValue() :
      op->vtkRandomPool::GetSizeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomPool_GetSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomPool *op = static_cast<vtkRandomPool *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetSizeMaxValue() :
      op->vtkRandomPool::GetSizeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomPool_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomPool *op = static_cast<vtkRandomPool *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetSize() :
      op->vtkRandomPool::GetSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomPool_SetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomPool *op = static_cast<vtkRandomPool *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfComponents(temp0);
    }
    else
    {
      op->vtkRandomPool::SetNumberOfComponents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomPool_GetNumberOfComponentsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponentsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomPool *op = static_cast<vtkRandomPool *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfComponentsMinValue() :
      op->vtkRandomPool::GetNumberOfComponentsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomPool_GetNumberOfComponentsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponentsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomPool *op = static_cast<vtkRandomPool *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfComponentsMaxValue() :
      op->vtkRandomPool::GetNumberOfComponentsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomPool_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomPool *op = static_cast<vtkRandomPool *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfComponents() :
      op->vtkRandomPool::GetNumberOfComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomPool_GetTotalSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomPool *op = static_cast<vtkRandomPool *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetTotalSize() :
      op->vtkRandomPool::GetTotalSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomPool_GeneratePool(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePool");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomPool *op = static_cast<vtkRandomPool *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const double *tempr = (ap.IsBound() ?
      op->GeneratePool() :
      op->vtkRandomPool::GeneratePool());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomPool_GetPool(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPool");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomPool *op = static_cast<vtkRandomPool *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const double *tempr = (ap.IsBound() ?
      op->GetPool() :
      op->vtkRandomPool::GetPool());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomPool_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomPool *op = static_cast<vtkRandomPool *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetValue(temp0) :
      op->vtkRandomPool::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRandomPool_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomPool *op = static_cast<vtkRandomPool *>(vp);

  vtkIdType temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    double tempr = (ap.IsBound() ?
      op->GetValue(temp0, temp1) :
      op->vtkRandomPool::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRandomPool_GetValue(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkRandomPool_GetValue_s1(self, args);
    case 2:
      return PyvtkRandomPool_GetValue_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return nullptr;
}



static PyObject *
PyvtkRandomPool_PopulateDataArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PopulateDataArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomPool *op = static_cast<vtkRandomPool *>(vp);

  vtkDataArray *temp0 = nullptr;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->PopulateDataArray(temp0, temp1, temp2);
    }
    else
    {
      op->vtkRandomPool::PopulateDataArray(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRandomPool_PopulateDataArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PopulateDataArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomPool *op = static_cast<vtkRandomPool *>(vp);

  vtkDataArray *temp0 = nullptr;
  int temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->PopulateDataArray(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkRandomPool::PopulateDataArray(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRandomPool_PopulateDataArray(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkRandomPool_PopulateDataArray_s1(self, args);
    case 4:
      return PyvtkRandomPool_PopulateDataArray_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "PopulateDataArray");
  return nullptr;
}



static PyObject *
PyvtkRandomPool_SetChunkSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChunkSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomPool *op = static_cast<vtkRandomPool *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetChunkSize(temp0);
    }
    else
    {
      op->vtkRandomPool::SetChunkSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomPool_GetChunkSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChunkSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomPool *op = static_cast<vtkRandomPool *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetChunkSizeMinValue() :
      op->vtkRandomPool::GetChunkSizeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomPool_GetChunkSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChunkSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomPool *op = static_cast<vtkRandomPool *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetChunkSizeMaxValue() :
      op->vtkRandomPool::GetChunkSizeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomPool_GetChunkSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChunkSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomPool *op = static_cast<vtkRandomPool *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetChunkSize() :
      op->vtkRandomPool::GetChunkSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkRandomPool_Methods[] = {
  {"IsTypeOf", PyvtkRandomPool_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instantiation, type information, and\nprinting.\n"},
  {"IsA", PyvtkRandomPool_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instantiation, type information, and\nprinting.\n"},
  {"SafeDownCast", PyvtkRandomPool_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkRandomPool\nC++: static vtkRandomPool *SafeDownCast(vtkObjectBase *o)\n\nStandard methods for instantiation, type information, and\nprinting.\n"},
  {"NewInstance", PyvtkRandomPool_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkRandomPool\nC++: vtkRandomPool *NewInstance()\n\nStandard methods for instantiation, type information, and\nprinting.\n"},
  {"SetSequence", PyvtkRandomPool_SetSequence, METH_VARARGS,
   "V.SetSequence(vtkRandomSequence)\nC++: virtual void SetSequence(vtkRandomSequence *seq)\n\nSpecify the random sequence generator used to produce the random\npool. By default vtkMersenneTwister is used.\n"},
  {"GetSequence", PyvtkRandomPool_GetSequence, METH_VARARGS,
   "V.GetSequence() -> vtkRandomSequence\nC++: virtual vtkRandomSequence *GetSequence()\n\nSpecify the random sequence generator used to produce the random\npool. By default vtkMersenneTwister is used.\n"},
  {"SetSize", PyvtkRandomPool_SetSize, METH_VARARGS,
   "V.SetSize(int)\nC++: virtual void SetSize(vtkIdType _arg)\n\nMethods to set and get the size of the pool. The size must be\nspecified before invoking GeneratePool(). Note the number of\ncomponents will affect the total size (allocated memory is\nSize*NumberOfComponents).\n"},
  {"GetSizeMinValue", PyvtkRandomPool_GetSizeMinValue, METH_VARARGS,
   "V.GetSizeMinValue() -> int\nC++: virtual vtkIdType GetSizeMinValue()\n\nMethods to set and get the size of the pool. The size must be\nspecified before invoking GeneratePool(). Note the number of\ncomponents will affect the total size (allocated memory is\nSize*NumberOfComponents).\n"},
  {"GetSizeMaxValue", PyvtkRandomPool_GetSizeMaxValue, METH_VARARGS,
   "V.GetSizeMaxValue() -> int\nC++: virtual vtkIdType GetSizeMaxValue()\n\nMethods to set and get the size of the pool. The size must be\nspecified before invoking GeneratePool(). Note the number of\ncomponents will affect the total size (allocated memory is\nSize*NumberOfComponents).\n"},
  {"GetSize", PyvtkRandomPool_GetSize, METH_VARARGS,
   "V.GetSize() -> int\nC++: virtual vtkIdType GetSize()\n\nMethods to set and get the size of the pool. The size must be\nspecified before invoking GeneratePool(). Note the number of\ncomponents will affect the total size (allocated memory is\nSize*NumberOfComponents).\n"},
  {"SetNumberOfComponents", PyvtkRandomPool_SetNumberOfComponents, METH_VARARGS,
   "V.SetNumberOfComponents(int)\nC++: virtual void SetNumberOfComponents(vtkIdType _arg)\n\nMethods to set and get the number of components in the pool. This\nis a convenience capability and can be used to interface with\nvtkDataArrays. By default the number of components is =1.\n"},
  {"GetNumberOfComponentsMinValue", PyvtkRandomPool_GetNumberOfComponentsMinValue, METH_VARARGS,
   "V.GetNumberOfComponentsMinValue() -> int\nC++: virtual vtkIdType GetNumberOfComponentsMinValue()\n\nMethods to set and get the number of components in the pool. This\nis a convenience capability and can be used to interface with\nvtkDataArrays. By default the number of components is =1.\n"},
  {"GetNumberOfComponentsMaxValue", PyvtkRandomPool_GetNumberOfComponentsMaxValue, METH_VARARGS,
   "V.GetNumberOfComponentsMaxValue() -> int\nC++: virtual vtkIdType GetNumberOfComponentsMaxValue()\n\nMethods to set and get the number of components in the pool. This\nis a convenience capability and can be used to interface with\nvtkDataArrays. By default the number of components is =1.\n"},
  {"GetNumberOfComponents", PyvtkRandomPool_GetNumberOfComponents, METH_VARARGS,
   "V.GetNumberOfComponents() -> int\nC++: virtual vtkIdType GetNumberOfComponents()\n\nMethods to set and get the number of components in the pool. This\nis a convenience capability and can be used to interface with\nvtkDataArrays. By default the number of components is =1.\n"},
  {"GetTotalSize", PyvtkRandomPool_GetTotalSize, METH_VARARGS,
   "V.GetTotalSize() -> int\nC++: vtkIdType GetTotalSize()\n\nThis convenience method returns the total size of the memory\npool, i.e., Size*NumberOfComponents.\n"},
  {"GeneratePool", PyvtkRandomPool_GeneratePool, METH_VARARGS,
   "V.GeneratePool() -> (float, ...)\nC++: const double *GeneratePool()\n\nThese methods provide access to the raw random pool as a double\narray. The size of the array is Size*NumberOfComponents. Each x\nvalue ranges between (0<=x<=1). The class will generate the pool\nas necessary (a modified time for generation is maintained). Also\na method is available for getting the value at the ith pool\nposition and compNum component. Finally, note that the GetValue()\nmethod uses modulo reduction to ensure that the request remains\ninside of the pool. Two forms are provided, the first assumes\nNumberOfComponents=1; the second allows access to a particular\ncomponent. The GetPool() and GetValue() methods should only be\ncalled after GeneratePool() has been invoked;\n"},
  {"GetPool", PyvtkRandomPool_GetPool, METH_VARARGS,
   "V.GetPool() -> (float, ...)\nC++: const double *GetPool()\n\nThese methods provide access to the raw random pool as a double\narray. The size of the array is Size*NumberOfComponents. Each x\nvalue ranges between (0<=x<=1). The class will generate the pool\nas necessary (a modified time for generation is maintained). Also\na method is available for getting the value at the ith pool\nposition and compNum component. Finally, note that the GetValue()\nmethod uses modulo reduction to ensure that the request remains\ninside of the pool. Two forms are provided, the first assumes\nNumberOfComponents=1; the second allows access to a particular\ncomponent. The GetPool() and GetValue() methods should only be\ncalled after GeneratePool() has been invoked;\n"},
  {"GetValue", PyvtkRandomPool_GetValue, METH_VARARGS,
   "V.GetValue(int) -> float\nC++: double GetValue(vtkIdType i)\nV.GetValue(int, int) -> float\nC++: double GetValue(vtkIdType i, int compNum)\n\nThese methods provide access to the raw random pool as a double\narray. The size of the array is Size*NumberOfComponents. Each x\nvalue ranges between (0<=x<=1). The class will generate the pool\nas necessary (a modified time for generation is maintained). Also\na method is available for getting the value at the ith pool\nposition and compNum component. Finally, note that the GetValue()\nmethod uses modulo reduction to ensure that the request remains\ninside of the pool. Two forms are provided, the first assumes\nNumberOfComponents=1; the second allows access to a particular\ncomponent. The GetPool() and GetValue() methods should only be\ncalled after GeneratePool() has been invoked;\n"},
  {"PopulateDataArray", PyvtkRandomPool_PopulateDataArray, METH_VARARGS,
   "V.PopulateDataArray(vtkDataArray, float, float)\nC++: void PopulateDataArray(vtkDataArray *da, double minRange,\n    double maxRange)\nV.PopulateDataArray(vtkDataArray, int, float, float)\nC++: void PopulateDataArray(vtkDataArray *da, int compNumber,\n    double minRange, double maxRange)\n\nMethods to populate data arrays of various types with values\nwithin a specified (min,max) range. Note that compNumber is used\nto specify the range for a particular component; otherwise all\ngenerated components are within the (min,max) range specified.\n(Thus it is possible to make multiple calls to generate random\nnumbers for each component with different ranges.) Internally the\ntype of the data array passed in is used to cast to the\nappropriate type. Also the size and number of components of the\nvtkDataArray controls the total number of random numbers\ngenerated; so the input data array should be pre-allocated with\n(SetNumberOfComponents, SetNumberOfTuples).\n"},
  {"SetChunkSize", PyvtkRandomPool_SetChunkSize, METH_VARARGS,
   "V.SetChunkSize(int)\nC++: virtual void SetChunkSize(vtkIdType _arg)\n\nSpecify the work chunk size at which point multithreading kicks\nin. For small memory pools < ChunkSize, no threading is used.\nLarger pools are computed using vtkMultiThreader.\n"},
  {"GetChunkSizeMinValue", PyvtkRandomPool_GetChunkSizeMinValue, METH_VARARGS,
   "V.GetChunkSizeMinValue() -> int\nC++: virtual vtkIdType GetChunkSizeMinValue()\n\nSpecify the work chunk size at which point multithreading kicks\nin. For small memory pools < ChunkSize, no threading is used.\nLarger pools are computed using vtkMultiThreader.\n"},
  {"GetChunkSizeMaxValue", PyvtkRandomPool_GetChunkSizeMaxValue, METH_VARARGS,
   "V.GetChunkSizeMaxValue() -> int\nC++: virtual vtkIdType GetChunkSizeMaxValue()\n\nSpecify the work chunk size at which point multithreading kicks\nin. For small memory pools < ChunkSize, no threading is used.\nLarger pools are computed using vtkMultiThreader.\n"},
  {"GetChunkSize", PyvtkRandomPool_GetChunkSize, METH_VARARGS,
   "V.GetChunkSize() -> int\nC++: virtual vtkIdType GetChunkSize()\n\nSpecify the work chunk size at which point multithreading kicks\nin. For small memory pools < ChunkSize, no threading is used.\nLarger pools are computed using vtkMultiThreader.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkRandomPool_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkRandomPool", // tp_name
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
  PyvtkRandomPool_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRandomPool_StaticNew()
{
  return vtkRandomPool::New();
}

PyObject *PyvtkRandomPool_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkRandomPool_Type, PyvtkRandomPool_Methods,
    "vtkRandomPool",
 &PyvtkRandomPool_StaticNew);

  PyTypeObject *pytype = &PyvtkRandomPool_Type;

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

void PyVTKAddFile_vtkRandomPool(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRandomPool_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRandomPool", o) != 0)
  {
    Py_DECREF(o);
  }

}

