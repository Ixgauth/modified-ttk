// python wrapper for vtkSparseArray
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
#include "vtkArrayExtents.h"
#include "vtkArrayCoordinates.h"
#include "vtkArraySort.h"
#include "vtkSparseArray.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSparseArray(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSparseArray_IcE_ClassNew(); }

#ifndef DECLARED_PyvtkTypedArray_IcE_ClassNew
extern "C" { PyObject *PyvtkTypedArray_IcE_ClassNew(); }
#define DECLARED_PyvtkTypedArray_IcE_ClassNew
#endif

static const char *PyvtkSparseArray_IcE_Doc =
  "vtkSparseArray- Sparse, independent coordinate storage for N-way\narrays.\n\n"
  "Superclass: vtkTypedArray[char]\n\n"
  "vtkSparseArray is a concrete vtkArray implementation that stores\n"
  "values using sparse independent coordinate storage.  This means that\n"
  "the array stores the complete set of coordinates and the value for\n"
  "each non-null value in the array. While this approach requires\n"
  "slightly more storage than other sparse storage schemes (such as\n"
  "Compressed-Row or Compressed-Column), it is easier and more efficient\n"
  "to work with when implementing algorithms, and it generalizes well\n"
  "for arbitrary numbers of dimensions.\n\n"
  "In addition to the value retrieval and update methods provided by\n"
  "vtkTypedArray, vtkSparseArray provides methods to:\n\n"
  "Get and set a special 'null' value that will be returned when\n"
  "retrieving values for undefined coordinates.\n\n"
  "Clear the contents of the array so that every set of coordinates is\n"
  "undefined.\n\n"
  "Sort the array contents so that value coordinates can be visited in a\n"
  "specific order.\n\n"
  "Retrieve pointers to the value- and coordinate-storage memory blocks.\n\n"
  "Reserve storage for a specific number of non-null values, for\n"
  "efficiency when the number of non-null values is known in advance.\n\n"
  "Recompute the array extents so that they bound the largest set of\n"
  "non-nullptr values along each dimension.\n\n"
  "Specify arbitrary array extents.\n\n"
  "Add values to the array in amortized-constant time.\n\n"
  "Validate that the array does not contain duplicate coordinates.\n\n"
  "@sa\n"
  "vtkArray, vtkTypedArray, vtkDenseArray\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";


static PyObject *
PyvtkSparseArray_IcE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSparseArray<char>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IcE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSparseArray<char>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IcE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSparseArray<char> *tempr = vtkSparseArray<char>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IcE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSparseArray<char> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSparseArray<char>::NewInstance());

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
PyvtkSparseArray_IcE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkSparseArray<char>::IsDense());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IcE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkSparseArray<char>::GetExtents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IcE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkSparseArray<char>::GetNonNullSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IcE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

  unsigned long long temp0;
  vtkArrayCoordinates *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, "vtkArrayCoordinates"))
  {
    if (ap.IsBound())
    {
      op->GetCoordinatesN(temp0, *temp1);
    }
    else
    {
      op->vtkSparseArray<char>::GetCoordinatesN(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IcE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkSparseArray<char>::DeepCopy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IcE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkSparseArray<char>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IcE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const char *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkSparseArray<char>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IcE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    const char *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1, temp2) :
      &op->vtkSparseArray<char>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IcE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    const char *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkSparseArray<char>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IcE_GetValue_Methods[] = {
  {nullptr, PyvtkSparseArray_IcE_GetValue_s1, METH_VARARGS,
   "@k"},
  {nullptr, PyvtkSparseArray_IcE_GetValue_s4, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSparseArray_IcE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IcE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSparseArray_IcE_GetValue_s2(self, args);
    case 3:
      return PyvtkSparseArray_IcE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return nullptr;
}



static PyObject *
PyvtkSparseArray_IcE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkSparseArray<char>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IcE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

  vtkIdType temp0;
  char temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<char>::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IcE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  char temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSparseArray<char>::SetValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IcE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  char temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkSparseArray<char>::SetValue(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IcE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  char temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(*temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<char>::SetValue(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IcE_SetValue_Methods[] = {
  {nullptr, PyvtkSparseArray_IcE_SetValue_s1, METH_VARARGS,
   "@kc"},
  {nullptr, PyvtkSparseArray_IcE_SetValue_s4, METH_VARARGS,
   "@Wc vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSparseArray_IcE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IcE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSparseArray_IcE_SetValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_IcE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return nullptr;
}



static PyObject *
PyvtkSparseArray_IcE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

  unsigned long long temp0;
  char temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValueN(temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<char>::SetValueN(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IcE_SetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

  char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNullValue(temp0);
    }
    else
    {
      op->vtkSparseArray<char>::SetNullValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IcE_GetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      &op->GetNullValue() :
      &op->vtkSparseArray<char>::GetNullValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IcE_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Clear();
    }
    else
    {
      op->vtkSparseArray<char>::Clear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IcE_Sort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Sort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

  vtkArraySort *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArraySort"))
  {
    if (ap.IsBound())
    {
      op->Sort(*temp0);
    }
    else
    {
      op->vtkSparseArray<char>::Sort(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_IcE_GetCoordinateStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType *tempr = (ap.IsBound() ?
      op->GetCoordinateStorage(temp0) :
      op->vtkSparseArray<char>::GetCoordinateStorage(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IcE_GetValueStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetValueStorage() :
      op->vtkSparseArray<char>::GetValueStorage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IcE_ReserveStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReserveStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ReserveStorage(temp0);
    }
    else
    {
      op->vtkSparseArray<char>::ReserveStorage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IcE_SetExtentsFromContents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtentsFromContents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtentsFromContents();
    }
    else
    {
      op->vtkSparseArray<char>::SetExtentsFromContents();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IcE_SetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

  vtkArrayExtents *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayExtents"))
  {
    if (ap.IsBound())
    {
      op->SetExtents(*temp0);
    }
    else
    {
      op->vtkSparseArray<char>::SetExtents(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_IcE_AddValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

  vtkIdType temp0;
  char temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddValue(temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<char>::AddValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IcE_AddValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  char temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->AddValue(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSparseArray<char>::AddValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IcE_AddValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  char temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->AddValue(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkSparseArray<char>::AddValue(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IcE_AddValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  char temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddValue(*temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<char>::AddValue(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IcE_AddValue_Methods[] = {
  {nullptr, PyvtkSparseArray_IcE_AddValue_s1, METH_VARARGS,
   "@kc"},
  {nullptr, PyvtkSparseArray_IcE_AddValue_s4, METH_VARARGS,
   "@Wc vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSparseArray_IcE_AddValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IcE_AddValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSparseArray_IcE_AddValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_IcE_AddValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddValue");
  return nullptr;
}



static PyObject *
PyvtkSparseArray_IcE_Validate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Validate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<char> *op = static_cast<vtkSparseArray<char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->Validate() :
      op->vtkSparseArray<char>::Validate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSparseArray_IcE_Methods[] = {
  {"IsTypeOf", PyvtkSparseArray_IcE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSparseArray_IcE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSparseArray_IcE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSparseArray_IcE\nC++: static vtkSparseArray<char> *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSparseArray_IcE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSparseArray_IcE\nC++: vtkSparseArray<char> *NewInstance()\n\n"},
  {"IsDense", PyvtkSparseArray_IcE_IsDense, METH_VARARGS,
   "V.IsDense() -> bool\nC++: bool IsDense() override;\n\nReturns true iff the underlying array storage is \"dense\", i.e.\nthat GetSize() and GetNonNullSize() will always return the same\nvalue. If not, the array is \"sparse\".\n"},
  {"GetExtents", PyvtkSparseArray_IcE_GetExtents, METH_VARARGS,
   "V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents() override;\n\nReturns the extents (the number of dimensions and size along each\ndimension) of the array.\n"},
  {"GetNonNullSize", PyvtkSparseArray_IcE_GetNonNullSize, METH_VARARGS,
   "V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize() override;\n\nReturns the number of non-null values stored in the array.  Note\nthat this value will equal GetSize() for dense arrays, and will\nbe less-than-or-equal to GetSize() for sparse arrays.\n"},
  {"GetCoordinatesN", PyvtkSparseArray_IcE_GetCoordinatesN, METH_VARARGS,
   "V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates) override;\n\nReturns the coordinates of the n-th value in the array, where n\nis in the range [0, GetNonNullSize()).  Note that the order in\nwhich coordinates are visited is undefined, but is guaranteed to\nmatch the order in which values are visited using\nvtkTypedArray::GetValueN() and vtkTypedArray::SetValueN().\n"},
  {"DeepCopy", PyvtkSparseArray_IcE_DeepCopy, METH_VARARGS,
   "V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy() override;\n\nReturns a new array that is a deep copy of this array.\n"},
  {"GetValue", PyvtkSparseArray_IcE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> char\nC++: const char &GetValue(CoordinateT i) override;\nV.GetValue(int, int) -> char\nC++: const char &GetValue(CoordinateT i, CoordinateT j) override;\nV.GetValue(int, int, int) -> char\nC++: const char &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k) override;\nV.GetValue(vtkArrayCoordinates) -> char\nC++: const char &GetValue(const vtkArrayCoordinates &coordinates)\n    override;\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetValueN", PyvtkSparseArray_IcE_GetValueN, METH_VARARGS,
   "V.GetValueN(int) -> char\nC++: const char &GetValueN(const SizeT n) override;\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetValue", PyvtkSparseArray_IcE_SetValue, METH_VARARGS,
   "V.SetValue(int, char)\nC++: void SetValue(CoordinateT i, const char &value) override;\nV.SetValue(int, int, char)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const char &value) override;\nV.SetValue(int, int, int, char)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const char &value) override;\nV.SetValue(vtkArrayCoordinates, char)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const char &value) override;\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetValueN", PyvtkSparseArray_IcE_SetValueN, METH_VARARGS,
   "V.SetValueN(int, char)\nC++: void SetValueN(const SizeT n, const char &value) override;\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetNullValue", PyvtkSparseArray_IcE_SetNullValue, METH_VARARGS,
   "V.SetNullValue(char)\nC++: void SetNullValue(const char &value)\n\nSet the value that will be returned by GetValue() for nullptr\nareas of the array.\n"},
  {"GetNullValue", PyvtkSparseArray_IcE_GetNullValue, METH_VARARGS,
   "V.GetNullValue() -> char\nC++: const char &GetNullValue()\n\nReturns the value that will be returned by GetValue() for nullptr\nareas of the array.\n"},
  {"Clear", PyvtkSparseArray_IcE_Clear, METH_VARARGS,
   "V.Clear()\nC++: void Clear()\n\nRemove all non-null elements from the array, leaving the number\nof dimensions, the extent of each dimension, and the label for\neach dimension unchanged.\n"},
  {"Sort", PyvtkSparseArray_IcE_Sort, METH_VARARGS,
   "V.Sort(vtkArraySort)\nC++: void Sort(const vtkArraySort &sort)\n\nSorts array values so that their coordinates appear in some\nwell-defined order. The supplied vtkArraySort object controls\nwhich dimensions are sorted, and in what order, and should\ncontain one-or-more sort dimensions, up to the number of\ndimensions stored in the array.\n"},
  {"GetCoordinateStorage", PyvtkSparseArray_IcE_GetCoordinateStorage, METH_VARARGS,
   "V.GetCoordinateStorage(int) -> (int, ...)\nC++: CoordinateT *GetCoordinateStorage(DimensionT dimension)\n\nReturn a mutable reference to the underlying coordinate storage. \nCoordinates for each dimension are stored contiguously as a\none-dimensional array.  The ordering of coordinates within the\narray depends on the order in which values were added to the\narray, and any subsequent sorting.  Use at your own risk!\n"},
  {"GetValueStorage", PyvtkSparseArray_IcE_GetValueStorage, METH_VARARGS,
   "V.GetValueStorage() -> string\nC++: char *GetValueStorage()\n\nReturn a mutable reference to the underlying value storage. \nValues are stored contiguously, but in arbitrary order.  Use\nGetCoordinateStorage() if you need to get the corresponding\ncoordinates for a value.  Use at your own risk!\n"},
  {"ReserveStorage", PyvtkSparseArray_IcE_ReserveStorage, METH_VARARGS,
   "V.ReserveStorage(int)\nC++: void ReserveStorage(const SizeT value_count)\n\nReserve storage for a specific number of values.  This is useful\nfor reading external data using GetCoordinateStorage() and\nGetValueStorage(), when the total number of non-nullptr values in\nthe array can be determined in advance.  Note that after calling\nReserveStorage(), all coordinates and values will be undefined,\nso you must ensure that every set of coordinates and values is\noverwritten.  It is the caller's responsibility to ensure that\nduplicate coordinates are not inserted into the array.\n"},
  {"SetExtentsFromContents", PyvtkSparseArray_IcE_SetExtentsFromContents, METH_VARARGS,
   "V.SetExtentsFromContents()\nC++: void SetExtentsFromContents()\n\nUpdate the array extents to match its contents, so that the\nextent along each dimension matches the maximum index value along\nthat dimension.\n"},
  {"SetExtents", PyvtkSparseArray_IcE_SetExtents, METH_VARARGS,
   "V.SetExtents(vtkArrayExtents)\nC++: void SetExtents(const vtkArrayExtents &extents)\n\nSpecify arbitrary array extents, without altering the contents of\nthe array.  Note that the extents must be as-large-or-larger-than\nthe extents of the actual values stored in the array.  The number\nof dimensions in the supplied extents must match the number of\ndimensions currently stored in the array.\n"},
  {"AddValue", PyvtkSparseArray_IcE_AddValue, METH_VARARGS,
   "V.AddValue(int, char)\nC++: void AddValue(CoordinateT i, const char &value)\nV.AddValue(int, int, char)\nC++: void AddValue(CoordinateT i, CoordinateT j,\n    const char &value)\nV.AddValue(int, int, int, char)\nC++: void AddValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const char &value)\nV.AddValue(vtkArrayCoordinates, char)\nC++: void AddValue(const vtkArrayCoordinates &coordinates,\n    const char &value)\n\nAdds a new non-null element to the array.  Does not test to see\nif an element with matching coordinates already exists.  Useful\nfor providing fast initialization of the array as long as the\ncaller is prepared to guarantee that no duplicate coordinates are\never used.\n"},
  {"Validate", PyvtkSparseArray_IcE_Validate, METH_VARARGS,
   "V.Validate() -> bool\nC++: bool Validate()\n\nValidate the contents of the array, returning false if there are\nany problems. Potential problems include duplicate coordinates,\nwhich can be introduced into the array either through AddValue()\nor direct access to coordinates storage; and coordinates\nout-of-bounds given the current array extents.\n\n* Note that Validate() is a heavyweight O(N log N) operation that\nis intended for\n* temporary use during debugging.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSparseArray_IcE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkSparseArray_IcE", // tp_name
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
  PyvtkSparseArray_IcE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSparseArray_IcE_StaticNew()
{
  return vtkSparseArray<char>::New();
}

PyObject *PyvtkSparseArray_IcE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSparseArray_IcE_Type, PyvtkSparseArray_IcE_Methods,
    typeid(vtkSparseArray<char>).name(),
 &PyvtkSparseArray_IcE_StaticNew);

  PyTypeObject *pytype = &PyvtkSparseArray_IcE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkTypedArray_IcE_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSparseArray_IaE_ClassNew(); }

#ifndef DECLARED_PyvtkTypedArray_IaE_ClassNew
extern "C" { PyObject *PyvtkTypedArray_IaE_ClassNew(); }
#define DECLARED_PyvtkTypedArray_IaE_ClassNew
#endif

static const char *PyvtkSparseArray_IaE_Doc =
  "vtkSparseArray<signed char> - Sparse, independent coordinate storage\nfor N-way arrays.\n\n"
  "Superclass: vtkTypedArray[int8]\n\n"
  "vtkSparseArray is a concrete vtkArray implementation that stores\n"
  "values using sparse independent coordinate storage.  This means that\n"
  "the array stores the complete set of coordinates and the value for\n"
  "each non-null value in the array. While this approach requires\n"
  "slightly more storage than other sparse storage schemes (such as\n"
  "Compressed-Row or Compressed-Column), it is easier and more efficient\n"
  "to work with when implementing algorithms, and it generalizes well\n"
  "for arbitrary numbers of dimensions.\n\n"
  "In addition to the value retrieval and update methods provided by\n"
  "vtkTypedArray, vtkSparseArray provides methods to:\n\n"
  "Get and set a special 'null' value that will be returned when\n"
  "retrieving values for undefined coordinates.\n\n"
  "Clear the contents of the array so that every set of coordinates is\n"
  "undefined.\n\n"
  "Sort the array contents so that value coordinates can be visited in a\n"
  "specific order.\n\n"
  "Retrieve pointers to the value- and coordinate-storage memory blocks.\n\n"
  "Reserve storage for a specific number of non-null values, for\n"
  "efficiency when the number of non-null values is known in advance.\n\n"
  "Recompute the array extents so that they bound the largest set of\n"
  "non-nullptr values along each dimension.\n\n"
  "Specify arbitrary array extents.\n\n"
  "Add values to the array in amortized-constant time.\n\n"
  "Validate that the array does not contain duplicate coordinates.\n\n"
  "@sa\n"
  "vtkArray, vtkTypedArray, vtkDenseArray\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";


static PyObject *
PyvtkSparseArray_IaE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSparseArray<signed char>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IaE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSparseArray<signed char>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IaE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSparseArray<signed char> *tempr = vtkSparseArray<signed char>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IaE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSparseArray<signed char> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSparseArray<signed char>::NewInstance());

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
PyvtkSparseArray_IaE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkSparseArray<signed char>::IsDense());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IaE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkSparseArray<signed char>::GetExtents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IaE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkSparseArray<signed char>::GetNonNullSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IaE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

  unsigned long long temp0;
  vtkArrayCoordinates *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, "vtkArrayCoordinates"))
  {
    if (ap.IsBound())
    {
      op->GetCoordinatesN(temp0, *temp1);
    }
    else
    {
      op->vtkSparseArray<signed char>::GetCoordinatesN(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IaE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkSparseArray<signed char>::DeepCopy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IaE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const signed char *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkSparseArray<signed char>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IaE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const signed char *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkSparseArray<signed char>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IaE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    const signed char *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1, temp2) :
      &op->vtkSparseArray<signed char>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IaE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    const signed char *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkSparseArray<signed char>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IaE_GetValue_Methods[] = {
  {nullptr, PyvtkSparseArray_IaE_GetValue_s1, METH_VARARGS,
   "@k"},
  {nullptr, PyvtkSparseArray_IaE_GetValue_s4, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSparseArray_IaE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IaE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSparseArray_IaE_GetValue_s2(self, args);
    case 3:
      return PyvtkSparseArray_IaE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return nullptr;
}



static PyObject *
PyvtkSparseArray_IaE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const signed char *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkSparseArray<signed char>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IaE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

  vtkIdType temp0;
  signed char temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<signed char>::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IaE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  signed char temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSparseArray<signed char>::SetValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IaE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  signed char temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkSparseArray<signed char>::SetValue(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IaE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  signed char temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(*temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<signed char>::SetValue(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IaE_SetValue_Methods[] = {
  {nullptr, PyvtkSparseArray_IaE_SetValue_s1, METH_VARARGS,
   "@kb"},
  {nullptr, PyvtkSparseArray_IaE_SetValue_s4, METH_VARARGS,
   "@Wb vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSparseArray_IaE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IaE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSparseArray_IaE_SetValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_IaE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return nullptr;
}



static PyObject *
PyvtkSparseArray_IaE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

  unsigned long long temp0;
  signed char temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValueN(temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<signed char>::SetValueN(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IaE_SetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

  signed char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNullValue(temp0);
    }
    else
    {
      op->vtkSparseArray<signed char>::SetNullValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IaE_GetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const signed char *tempr = (ap.IsBound() ?
      &op->GetNullValue() :
      &op->vtkSparseArray<signed char>::GetNullValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IaE_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Clear();
    }
    else
    {
      op->vtkSparseArray<signed char>::Clear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IaE_Sort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Sort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

  vtkArraySort *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArraySort"))
  {
    if (ap.IsBound())
    {
      op->Sort(*temp0);
    }
    else
    {
      op->vtkSparseArray<signed char>::Sort(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_IaE_GetCoordinateStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType *tempr = (ap.IsBound() ?
      op->GetCoordinateStorage(temp0) :
      op->vtkSparseArray<signed char>::GetCoordinateStorage(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IaE_GetValueStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    signed char *tempr = (ap.IsBound() ?
      op->GetValueStorage() :
      op->vtkSparseArray<signed char>::GetValueStorage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IaE_ReserveStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReserveStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ReserveStorage(temp0);
    }
    else
    {
      op->vtkSparseArray<signed char>::ReserveStorage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IaE_SetExtentsFromContents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtentsFromContents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtentsFromContents();
    }
    else
    {
      op->vtkSparseArray<signed char>::SetExtentsFromContents();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IaE_SetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

  vtkArrayExtents *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayExtents"))
  {
    if (ap.IsBound())
    {
      op->SetExtents(*temp0);
    }
    else
    {
      op->vtkSparseArray<signed char>::SetExtents(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_IaE_AddValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

  vtkIdType temp0;
  signed char temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddValue(temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<signed char>::AddValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IaE_AddValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  signed char temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->AddValue(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSparseArray<signed char>::AddValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IaE_AddValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  signed char temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->AddValue(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkSparseArray<signed char>::AddValue(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IaE_AddValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  signed char temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddValue(*temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<signed char>::AddValue(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IaE_AddValue_Methods[] = {
  {nullptr, PyvtkSparseArray_IaE_AddValue_s1, METH_VARARGS,
   "@kb"},
  {nullptr, PyvtkSparseArray_IaE_AddValue_s4, METH_VARARGS,
   "@Wb vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSparseArray_IaE_AddValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IaE_AddValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSparseArray_IaE_AddValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_IaE_AddValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddValue");
  return nullptr;
}



static PyObject *
PyvtkSparseArray_IaE_Validate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Validate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<signed char> *op = static_cast<vtkSparseArray<signed char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->Validate() :
      op->vtkSparseArray<signed char>::Validate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSparseArray_IaE_Methods[] = {
  {"IsTypeOf", PyvtkSparseArray_IaE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSparseArray_IaE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSparseArray_IaE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSparseArray_IaE\nC++: static vtkSparseArray<signed char> *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSparseArray_IaE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSparseArray_IaE\nC++: vtkSparseArray<signed char> *NewInstance()\n\n"},
  {"IsDense", PyvtkSparseArray_IaE_IsDense, METH_VARARGS,
   "V.IsDense() -> bool\nC++: bool IsDense() override;\n\nReturns true iff the underlying array storage is \"dense\", i.e.\nthat GetSize() and GetNonNullSize() will always return the same\nvalue. If not, the array is \"sparse\".\n"},
  {"GetExtents", PyvtkSparseArray_IaE_GetExtents, METH_VARARGS,
   "V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents() override;\n\nReturns the extents (the number of dimensions and size along each\ndimension) of the array.\n"},
  {"GetNonNullSize", PyvtkSparseArray_IaE_GetNonNullSize, METH_VARARGS,
   "V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize() override;\n\nReturns the number of non-null values stored in the array.  Note\nthat this value will equal GetSize() for dense arrays, and will\nbe less-than-or-equal to GetSize() for sparse arrays.\n"},
  {"GetCoordinatesN", PyvtkSparseArray_IaE_GetCoordinatesN, METH_VARARGS,
   "V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates) override;\n\nReturns the coordinates of the n-th value in the array, where n\nis in the range [0, GetNonNullSize()).  Note that the order in\nwhich coordinates are visited is undefined, but is guaranteed to\nmatch the order in which values are visited using\nvtkTypedArray::GetValueN() and vtkTypedArray::SetValueN().\n"},
  {"DeepCopy", PyvtkSparseArray_IaE_DeepCopy, METH_VARARGS,
   "V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy() override;\n\nReturns a new array that is a deep copy of this array.\n"},
  {"GetValue", PyvtkSparseArray_IaE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> int\nC++: const signed char &GetValue(CoordinateT i) override;\nV.GetValue(int, int) -> int\nC++: const signed char &GetValue(CoordinateT i, CoordinateT j)\n    override;\nV.GetValue(int, int, int) -> int\nC++: const signed char &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k) override;\nV.GetValue(vtkArrayCoordinates) -> int\nC++: const signed char &GetValue(\n    const vtkArrayCoordinates &coordinates) override;\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetValueN", PyvtkSparseArray_IaE_GetValueN, METH_VARARGS,
   "V.GetValueN(int) -> int\nC++: const signed char &GetValueN(const SizeT n) override;\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetValue", PyvtkSparseArray_IaE_SetValue, METH_VARARGS,
   "V.SetValue(int, int)\nC++: void SetValue(CoordinateT i, const signed char &value)\n    override;\nV.SetValue(int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const signed char &value) override;\nV.SetValue(int, int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const signed char &value) override;\nV.SetValue(vtkArrayCoordinates, int)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const signed char &value) override;\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetValueN", PyvtkSparseArray_IaE_SetValueN, METH_VARARGS,
   "V.SetValueN(int, int)\nC++: void SetValueN(const SizeT n, const signed char &value)\n    override;\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetNullValue", PyvtkSparseArray_IaE_SetNullValue, METH_VARARGS,
   "V.SetNullValue(int)\nC++: void SetNullValue(const signed char &value)\n\nSet the value that will be returned by GetValue() for nullptr\nareas of the array.\n"},
  {"GetNullValue", PyvtkSparseArray_IaE_GetNullValue, METH_VARARGS,
   "V.GetNullValue() -> int\nC++: const signed char &GetNullValue()\n\nReturns the value that will be returned by GetValue() for nullptr\nareas of the array.\n"},
  {"Clear", PyvtkSparseArray_IaE_Clear, METH_VARARGS,
   "V.Clear()\nC++: void Clear()\n\nRemove all non-null elements from the array, leaving the number\nof dimensions, the extent of each dimension, and the label for\neach dimension unchanged.\n"},
  {"Sort", PyvtkSparseArray_IaE_Sort, METH_VARARGS,
   "V.Sort(vtkArraySort)\nC++: void Sort(const vtkArraySort &sort)\n\nSorts array values so that their coordinates appear in some\nwell-defined order. The supplied vtkArraySort object controls\nwhich dimensions are sorted, and in what order, and should\ncontain one-or-more sort dimensions, up to the number of\ndimensions stored in the array.\n"},
  {"GetCoordinateStorage", PyvtkSparseArray_IaE_GetCoordinateStorage, METH_VARARGS,
   "V.GetCoordinateStorage(int) -> (int, ...)\nC++: CoordinateT *GetCoordinateStorage(DimensionT dimension)\n\nReturn a mutable reference to the underlying coordinate storage. \nCoordinates for each dimension are stored contiguously as a\none-dimensional array.  The ordering of coordinates within the\narray depends on the order in which values were added to the\narray, and any subsequent sorting.  Use at your own risk!\n"},
  {"GetValueStorage", PyvtkSparseArray_IaE_GetValueStorage, METH_VARARGS,
   "V.GetValueStorage() -> (int, ...)\nC++: signed char *GetValueStorage()\n\nReturn a mutable reference to the underlying value storage. \nValues are stored contiguously, but in arbitrary order.  Use\nGetCoordinateStorage() if you need to get the corresponding\ncoordinates for a value.  Use at your own risk!\n"},
  {"ReserveStorage", PyvtkSparseArray_IaE_ReserveStorage, METH_VARARGS,
   "V.ReserveStorage(int)\nC++: void ReserveStorage(const SizeT value_count)\n\nReserve storage for a specific number of values.  This is useful\nfor reading external data using GetCoordinateStorage() and\nGetValueStorage(), when the total number of non-nullptr values in\nthe array can be determined in advance.  Note that after calling\nReserveStorage(), all coordinates and values will be undefined,\nso you must ensure that every set of coordinates and values is\noverwritten.  It is the caller's responsibility to ensure that\nduplicate coordinates are not inserted into the array.\n"},
  {"SetExtentsFromContents", PyvtkSparseArray_IaE_SetExtentsFromContents, METH_VARARGS,
   "V.SetExtentsFromContents()\nC++: void SetExtentsFromContents()\n\nUpdate the array extents to match its contents, so that the\nextent along each dimension matches the maximum index value along\nthat dimension.\n"},
  {"SetExtents", PyvtkSparseArray_IaE_SetExtents, METH_VARARGS,
   "V.SetExtents(vtkArrayExtents)\nC++: void SetExtents(const vtkArrayExtents &extents)\n\nSpecify arbitrary array extents, without altering the contents of\nthe array.  Note that the extents must be as-large-or-larger-than\nthe extents of the actual values stored in the array.  The number\nof dimensions in the supplied extents must match the number of\ndimensions currently stored in the array.\n"},
  {"AddValue", PyvtkSparseArray_IaE_AddValue, METH_VARARGS,
   "V.AddValue(int, int)\nC++: void AddValue(CoordinateT i, const signed char &value)\nV.AddValue(int, int, int)\nC++: void AddValue(CoordinateT i, CoordinateT j,\n    const signed char &value)\nV.AddValue(int, int, int, int)\nC++: void AddValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const signed char &value)\nV.AddValue(vtkArrayCoordinates, int)\nC++: void AddValue(const vtkArrayCoordinates &coordinates,\n    const signed char &value)\n\nAdds a new non-null element to the array.  Does not test to see\nif an element with matching coordinates already exists.  Useful\nfor providing fast initialization of the array as long as the\ncaller is prepared to guarantee that no duplicate coordinates are\never used.\n"},
  {"Validate", PyvtkSparseArray_IaE_Validate, METH_VARARGS,
   "V.Validate() -> bool\nC++: bool Validate()\n\nValidate the contents of the array, returning false if there are\nany problems. Potential problems include duplicate coordinates,\nwhich can be introduced into the array either through AddValue()\nor direct access to coordinates storage; and coordinates\nout-of-bounds given the current array extents.\n\n* Note that Validate() is a heavyweight O(N log N) operation that\nis intended for\n* temporary use during debugging.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSparseArray_IaE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkSparseArray_IaE", // tp_name
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
  PyvtkSparseArray_IaE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSparseArray_IaE_StaticNew()
{
  return vtkSparseArray<signed char>::New();
}

PyObject *PyvtkSparseArray_IaE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSparseArray_IaE_Type, PyvtkSparseArray_IaE_Methods,
    typeid(vtkSparseArray<signed char>).name(),
 &PyvtkSparseArray_IaE_StaticNew);

  PyTypeObject *pytype = &PyvtkSparseArray_IaE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkTypedArray_IaE_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSparseArray_IhE_ClassNew(); }

#ifndef DECLARED_PyvtkTypedArray_IhE_ClassNew
extern "C" { PyObject *PyvtkTypedArray_IhE_ClassNew(); }
#define DECLARED_PyvtkTypedArray_IhE_ClassNew
#endif

static const char *PyvtkSparseArray_IhE_Doc =
  "vtkSparseArray<unsigned char> - Sparse, independent coordinate\nstorage for N-way arrays.\n\n"
  "Superclass: vtkTypedArray[uint8]\n\n"
  "vtkSparseArray is a concrete vtkArray implementation that stores\n"
  "values using sparse independent coordinate storage.  This means that\n"
  "the array stores the complete set of coordinates and the value for\n"
  "each non-null value in the array. While this approach requires\n"
  "slightly more storage than other sparse storage schemes (such as\n"
  "Compressed-Row or Compressed-Column), it is easier and more efficient\n"
  "to work with when implementing algorithms, and it generalizes well\n"
  "for arbitrary numbers of dimensions.\n\n"
  "In addition to the value retrieval and update methods provided by\n"
  "vtkTypedArray, vtkSparseArray provides methods to:\n\n"
  "Get and set a special 'null' value that will be returned when\n"
  "retrieving values for undefined coordinates.\n\n"
  "Clear the contents of the array so that every set of coordinates is\n"
  "undefined.\n\n"
  "Sort the array contents so that value coordinates can be visited in a\n"
  "specific order.\n\n"
  "Retrieve pointers to the value- and coordinate-storage memory blocks.\n\n"
  "Reserve storage for a specific number of non-null values, for\n"
  "efficiency when the number of non-null values is known in advance.\n\n"
  "Recompute the array extents so that they bound the largest set of\n"
  "non-nullptr values along each dimension.\n\n"
  "Specify arbitrary array extents.\n\n"
  "Add values to the array in amortized-constant time.\n\n"
  "Validate that the array does not contain duplicate coordinates.\n\n"
  "@sa\n"
  "vtkArray, vtkTypedArray, vtkDenseArray\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";


static PyObject *
PyvtkSparseArray_IhE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSparseArray<unsigned char>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IhE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSparseArray<unsigned char>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IhE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSparseArray<unsigned char> *tempr = vtkSparseArray<unsigned char>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IhE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSparseArray<unsigned char> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSparseArray<unsigned char>::NewInstance());

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
PyvtkSparseArray_IhE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkSparseArray<unsigned char>::IsDense());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IhE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkSparseArray<unsigned char>::GetExtents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IhE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkSparseArray<unsigned char>::GetNonNullSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IhE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

  unsigned long long temp0;
  vtkArrayCoordinates *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, "vtkArrayCoordinates"))
  {
    if (ap.IsBound())
    {
      op->GetCoordinatesN(temp0, *temp1);
    }
    else
    {
      op->vtkSparseArray<unsigned char>::GetCoordinatesN(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IhE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkSparseArray<unsigned char>::DeepCopy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IhE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const unsigned char *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkSparseArray<unsigned char>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IhE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const unsigned char *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkSparseArray<unsigned char>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IhE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    const unsigned char *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1, temp2) :
      &op->vtkSparseArray<unsigned char>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IhE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    const unsigned char *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkSparseArray<unsigned char>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IhE_GetValue_Methods[] = {
  {nullptr, PyvtkSparseArray_IhE_GetValue_s1, METH_VARARGS,
   "@k"},
  {nullptr, PyvtkSparseArray_IhE_GetValue_s4, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSparseArray_IhE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IhE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSparseArray_IhE_GetValue_s2(self, args);
    case 3:
      return PyvtkSparseArray_IhE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return nullptr;
}



static PyObject *
PyvtkSparseArray_IhE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const unsigned char *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkSparseArray<unsigned char>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IhE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

  vtkIdType temp0;
  unsigned char temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<unsigned char>::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IhE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  unsigned char temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSparseArray<unsigned char>::SetValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IhE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  unsigned char temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkSparseArray<unsigned char>::SetValue(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IhE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  unsigned char temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(*temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<unsigned char>::SetValue(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IhE_SetValue_Methods[] = {
  {nullptr, PyvtkSparseArray_IhE_SetValue_s1, METH_VARARGS,
   "@kB"},
  {nullptr, PyvtkSparseArray_IhE_SetValue_s4, METH_VARARGS,
   "@WB vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSparseArray_IhE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IhE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSparseArray_IhE_SetValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_IhE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return nullptr;
}



static PyObject *
PyvtkSparseArray_IhE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

  unsigned long long temp0;
  unsigned char temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValueN(temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<unsigned char>::SetValueN(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IhE_SetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

  unsigned char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNullValue(temp0);
    }
    else
    {
      op->vtkSparseArray<unsigned char>::SetNullValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IhE_GetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const unsigned char *tempr = (ap.IsBound() ?
      &op->GetNullValue() :
      &op->vtkSparseArray<unsigned char>::GetNullValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IhE_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Clear();
    }
    else
    {
      op->vtkSparseArray<unsigned char>::Clear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IhE_Sort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Sort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

  vtkArraySort *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArraySort"))
  {
    if (ap.IsBound())
    {
      op->Sort(*temp0);
    }
    else
    {
      op->vtkSparseArray<unsigned char>::Sort(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_IhE_GetCoordinateStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType *tempr = (ap.IsBound() ?
      op->GetCoordinateStorage(temp0) :
      op->vtkSparseArray<unsigned char>::GetCoordinateStorage(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IhE_GetValueStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetValueStorage() :
      op->vtkSparseArray<unsigned char>::GetValueStorage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IhE_ReserveStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReserveStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ReserveStorage(temp0);
    }
    else
    {
      op->vtkSparseArray<unsigned char>::ReserveStorage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IhE_SetExtentsFromContents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtentsFromContents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtentsFromContents();
    }
    else
    {
      op->vtkSparseArray<unsigned char>::SetExtentsFromContents();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IhE_SetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

  vtkArrayExtents *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayExtents"))
  {
    if (ap.IsBound())
    {
      op->SetExtents(*temp0);
    }
    else
    {
      op->vtkSparseArray<unsigned char>::SetExtents(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_IhE_AddValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

  vtkIdType temp0;
  unsigned char temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddValue(temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<unsigned char>::AddValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IhE_AddValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  unsigned char temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->AddValue(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSparseArray<unsigned char>::AddValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IhE_AddValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  unsigned char temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->AddValue(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkSparseArray<unsigned char>::AddValue(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IhE_AddValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  unsigned char temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddValue(*temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<unsigned char>::AddValue(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IhE_AddValue_Methods[] = {
  {nullptr, PyvtkSparseArray_IhE_AddValue_s1, METH_VARARGS,
   "@kB"},
  {nullptr, PyvtkSparseArray_IhE_AddValue_s4, METH_VARARGS,
   "@WB vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSparseArray_IhE_AddValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IhE_AddValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSparseArray_IhE_AddValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_IhE_AddValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddValue");
  return nullptr;
}



static PyObject *
PyvtkSparseArray_IhE_Validate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Validate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned char> *op = static_cast<vtkSparseArray<unsigned char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->Validate() :
      op->vtkSparseArray<unsigned char>::Validate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSparseArray_IhE_Methods[] = {
  {"IsTypeOf", PyvtkSparseArray_IhE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSparseArray_IhE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSparseArray_IhE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSparseArray_IhE\nC++: static vtkSparseArray<unsigned char> *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSparseArray_IhE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSparseArray_IhE\nC++: vtkSparseArray<unsigned char> *NewInstance()\n\n"},
  {"IsDense", PyvtkSparseArray_IhE_IsDense, METH_VARARGS,
   "V.IsDense() -> bool\nC++: bool IsDense() override;\n\nReturns true iff the underlying array storage is \"dense\", i.e.\nthat GetSize() and GetNonNullSize() will always return the same\nvalue. If not, the array is \"sparse\".\n"},
  {"GetExtents", PyvtkSparseArray_IhE_GetExtents, METH_VARARGS,
   "V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents() override;\n\nReturns the extents (the number of dimensions and size along each\ndimension) of the array.\n"},
  {"GetNonNullSize", PyvtkSparseArray_IhE_GetNonNullSize, METH_VARARGS,
   "V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize() override;\n\nReturns the number of non-null values stored in the array.  Note\nthat this value will equal GetSize() for dense arrays, and will\nbe less-than-or-equal to GetSize() for sparse arrays.\n"},
  {"GetCoordinatesN", PyvtkSparseArray_IhE_GetCoordinatesN, METH_VARARGS,
   "V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates) override;\n\nReturns the coordinates of the n-th value in the array, where n\nis in the range [0, GetNonNullSize()).  Note that the order in\nwhich coordinates are visited is undefined, but is guaranteed to\nmatch the order in which values are visited using\nvtkTypedArray::GetValueN() and vtkTypedArray::SetValueN().\n"},
  {"DeepCopy", PyvtkSparseArray_IhE_DeepCopy, METH_VARARGS,
   "V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy() override;\n\nReturns a new array that is a deep copy of this array.\n"},
  {"GetValue", PyvtkSparseArray_IhE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> int\nC++: const unsigned char &GetValue(CoordinateT i) override;\nV.GetValue(int, int) -> int\nC++: const unsigned char &GetValue(CoordinateT i, CoordinateT j)\n    override;\nV.GetValue(int, int, int) -> int\nC++: const unsigned char &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k) override;\nV.GetValue(vtkArrayCoordinates) -> int\nC++: const unsigned char &GetValue(\n    const vtkArrayCoordinates &coordinates) override;\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetValueN", PyvtkSparseArray_IhE_GetValueN, METH_VARARGS,
   "V.GetValueN(int) -> int\nC++: const unsigned char &GetValueN(const SizeT n) override;\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetValue", PyvtkSparseArray_IhE_SetValue, METH_VARARGS,
   "V.SetValue(int, int)\nC++: void SetValue(CoordinateT i, const unsigned char &value)\n    override;\nV.SetValue(int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const unsigned char &value) override;\nV.SetValue(int, int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const unsigned char &value) override;\nV.SetValue(vtkArrayCoordinates, int)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const unsigned char &value) override;\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetValueN", PyvtkSparseArray_IhE_SetValueN, METH_VARARGS,
   "V.SetValueN(int, int)\nC++: void SetValueN(const SizeT n, const unsigned char &value)\n    override;\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetNullValue", PyvtkSparseArray_IhE_SetNullValue, METH_VARARGS,
   "V.SetNullValue(int)\nC++: void SetNullValue(const unsigned char &value)\n\nSet the value that will be returned by GetValue() for nullptr\nareas of the array.\n"},
  {"GetNullValue", PyvtkSparseArray_IhE_GetNullValue, METH_VARARGS,
   "V.GetNullValue() -> int\nC++: const unsigned char &GetNullValue()\n\nReturns the value that will be returned by GetValue() for nullptr\nareas of the array.\n"},
  {"Clear", PyvtkSparseArray_IhE_Clear, METH_VARARGS,
   "V.Clear()\nC++: void Clear()\n\nRemove all non-null elements from the array, leaving the number\nof dimensions, the extent of each dimension, and the label for\neach dimension unchanged.\n"},
  {"Sort", PyvtkSparseArray_IhE_Sort, METH_VARARGS,
   "V.Sort(vtkArraySort)\nC++: void Sort(const vtkArraySort &sort)\n\nSorts array values so that their coordinates appear in some\nwell-defined order. The supplied vtkArraySort object controls\nwhich dimensions are sorted, and in what order, and should\ncontain one-or-more sort dimensions, up to the number of\ndimensions stored in the array.\n"},
  {"GetCoordinateStorage", PyvtkSparseArray_IhE_GetCoordinateStorage, METH_VARARGS,
   "V.GetCoordinateStorage(int) -> (int, ...)\nC++: CoordinateT *GetCoordinateStorage(DimensionT dimension)\n\nReturn a mutable reference to the underlying coordinate storage. \nCoordinates for each dimension are stored contiguously as a\none-dimensional array.  The ordering of coordinates within the\narray depends on the order in which values were added to the\narray, and any subsequent sorting.  Use at your own risk!\n"},
  {"GetValueStorage", PyvtkSparseArray_IhE_GetValueStorage, METH_VARARGS,
   "V.GetValueStorage() -> (int, ...)\nC++: unsigned char *GetValueStorage()\n\nReturn a mutable reference to the underlying value storage. \nValues are stored contiguously, but in arbitrary order.  Use\nGetCoordinateStorage() if you need to get the corresponding\ncoordinates for a value.  Use at your own risk!\n"},
  {"ReserveStorage", PyvtkSparseArray_IhE_ReserveStorage, METH_VARARGS,
   "V.ReserveStorage(int)\nC++: void ReserveStorage(const SizeT value_count)\n\nReserve storage for a specific number of values.  This is useful\nfor reading external data using GetCoordinateStorage() and\nGetValueStorage(), when the total number of non-nullptr values in\nthe array can be determined in advance.  Note that after calling\nReserveStorage(), all coordinates and values will be undefined,\nso you must ensure that every set of coordinates and values is\noverwritten.  It is the caller's responsibility to ensure that\nduplicate coordinates are not inserted into the array.\n"},
  {"SetExtentsFromContents", PyvtkSparseArray_IhE_SetExtentsFromContents, METH_VARARGS,
   "V.SetExtentsFromContents()\nC++: void SetExtentsFromContents()\n\nUpdate the array extents to match its contents, so that the\nextent along each dimension matches the maximum index value along\nthat dimension.\n"},
  {"SetExtents", PyvtkSparseArray_IhE_SetExtents, METH_VARARGS,
   "V.SetExtents(vtkArrayExtents)\nC++: void SetExtents(const vtkArrayExtents &extents)\n\nSpecify arbitrary array extents, without altering the contents of\nthe array.  Note that the extents must be as-large-or-larger-than\nthe extents of the actual values stored in the array.  The number\nof dimensions in the supplied extents must match the number of\ndimensions currently stored in the array.\n"},
  {"AddValue", PyvtkSparseArray_IhE_AddValue, METH_VARARGS,
   "V.AddValue(int, int)\nC++: void AddValue(CoordinateT i, const unsigned char &value)\nV.AddValue(int, int, int)\nC++: void AddValue(CoordinateT i, CoordinateT j,\n    const unsigned char &value)\nV.AddValue(int, int, int, int)\nC++: void AddValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const unsigned char &value)\nV.AddValue(vtkArrayCoordinates, int)\nC++: void AddValue(const vtkArrayCoordinates &coordinates,\n    const unsigned char &value)\n\nAdds a new non-null element to the array.  Does not test to see\nif an element with matching coordinates already exists.  Useful\nfor providing fast initialization of the array as long as the\ncaller is prepared to guarantee that no duplicate coordinates are\never used.\n"},
  {"Validate", PyvtkSparseArray_IhE_Validate, METH_VARARGS,
   "V.Validate() -> bool\nC++: bool Validate()\n\nValidate the contents of the array, returning false if there are\nany problems. Potential problems include duplicate coordinates,\nwhich can be introduced into the array either through AddValue()\nor direct access to coordinates storage; and coordinates\nout-of-bounds given the current array extents.\n\n* Note that Validate() is a heavyweight O(N log N) operation that\nis intended for\n* temporary use during debugging.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSparseArray_IhE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkSparseArray_IhE", // tp_name
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
  PyvtkSparseArray_IhE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSparseArray_IhE_StaticNew()
{
  return vtkSparseArray<unsigned char>::New();
}

PyObject *PyvtkSparseArray_IhE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSparseArray_IhE_Type, PyvtkSparseArray_IhE_Methods,
    typeid(vtkSparseArray<unsigned char>).name(),
 &PyvtkSparseArray_IhE_StaticNew);

  PyTypeObject *pytype = &PyvtkSparseArray_IhE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkTypedArray_IhE_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSparseArray_IsE_ClassNew(); }

#ifndef DECLARED_PyvtkTypedArray_IsE_ClassNew
extern "C" { PyObject *PyvtkTypedArray_IsE_ClassNew(); }
#define DECLARED_PyvtkTypedArray_IsE_ClassNew
#endif

static const char *PyvtkSparseArray_IsE_Doc =
  "vtkSparseArray- Sparse, independent coordinate storage for N-way\narrays.\n\n"
  "Superclass: vtkTypedArray[int16]\n\n"
  "vtkSparseArray is a concrete vtkArray implementation that stores\n"
  "values using sparse independent coordinate storage.  This means that\n"
  "the array stores the complete set of coordinates and the value for\n"
  "each non-null value in the array. While this approach requires\n"
  "slightly more storage than other sparse storage schemes (such as\n"
  "Compressed-Row or Compressed-Column), it is easier and more efficient\n"
  "to work with when implementing algorithms, and it generalizes well\n"
  "for arbitrary numbers of dimensions.\n\n"
  "In addition to the value retrieval and update methods provided by\n"
  "vtkTypedArray, vtkSparseArray provides methods to:\n\n"
  "Get and set a special 'null' value that will be returned when\n"
  "retrieving values for undefined coordinates.\n\n"
  "Clear the contents of the array so that every set of coordinates is\n"
  "undefined.\n\n"
  "Sort the array contents so that value coordinates can be visited in a\n"
  "specific order.\n\n"
  "Retrieve pointers to the value- and coordinate-storage memory blocks.\n\n"
  "Reserve storage for a specific number of non-null values, for\n"
  "efficiency when the number of non-null values is known in advance.\n\n"
  "Recompute the array extents so that they bound the largest set of\n"
  "non-nullptr values along each dimension.\n\n"
  "Specify arbitrary array extents.\n\n"
  "Add values to the array in amortized-constant time.\n\n"
  "Validate that the array does not contain duplicate coordinates.\n\n"
  "@sa\n"
  "vtkArray, vtkTypedArray, vtkDenseArray\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";


static PyObject *
PyvtkSparseArray_IsE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSparseArray<short>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IsE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSparseArray<short>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IsE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSparseArray<short> *tempr = vtkSparseArray<short>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IsE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSparseArray<short> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSparseArray<short>::NewInstance());

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
PyvtkSparseArray_IsE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkSparseArray<short>::IsDense());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IsE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkSparseArray<short>::GetExtents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IsE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkSparseArray<short>::GetNonNullSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IsE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

  unsigned long long temp0;
  vtkArrayCoordinates *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, "vtkArrayCoordinates"))
  {
    if (ap.IsBound())
    {
      op->GetCoordinatesN(temp0, *temp1);
    }
    else
    {
      op->vtkSparseArray<short>::GetCoordinatesN(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IsE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkSparseArray<short>::DeepCopy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IsE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const short *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkSparseArray<short>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IsE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const short *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkSparseArray<short>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IsE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    const short *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1, temp2) :
      &op->vtkSparseArray<short>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IsE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    const short *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkSparseArray<short>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IsE_GetValue_Methods[] = {
  {nullptr, PyvtkSparseArray_IsE_GetValue_s1, METH_VARARGS,
   "@k"},
  {nullptr, PyvtkSparseArray_IsE_GetValue_s4, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSparseArray_IsE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IsE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSparseArray_IsE_GetValue_s2(self, args);
    case 3:
      return PyvtkSparseArray_IsE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return nullptr;
}



static PyObject *
PyvtkSparseArray_IsE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const short *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkSparseArray<short>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IsE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

  vtkIdType temp0;
  short temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<short>::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IsE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  short temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSparseArray<short>::SetValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IsE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  short temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkSparseArray<short>::SetValue(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IsE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  short temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(*temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<short>::SetValue(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IsE_SetValue_Methods[] = {
  {nullptr, PyvtkSparseArray_IsE_SetValue_s1, METH_VARARGS,
   "@kh"},
  {nullptr, PyvtkSparseArray_IsE_SetValue_s4, METH_VARARGS,
   "@Wh vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSparseArray_IsE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IsE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSparseArray_IsE_SetValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_IsE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return nullptr;
}



static PyObject *
PyvtkSparseArray_IsE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

  unsigned long long temp0;
  short temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValueN(temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<short>::SetValueN(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IsE_SetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

  short temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNullValue(temp0);
    }
    else
    {
      op->vtkSparseArray<short>::SetNullValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IsE_GetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const short *tempr = (ap.IsBound() ?
      &op->GetNullValue() :
      &op->vtkSparseArray<short>::GetNullValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IsE_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Clear();
    }
    else
    {
      op->vtkSparseArray<short>::Clear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IsE_Sort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Sort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

  vtkArraySort *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArraySort"))
  {
    if (ap.IsBound())
    {
      op->Sort(*temp0);
    }
    else
    {
      op->vtkSparseArray<short>::Sort(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_IsE_GetCoordinateStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType *tempr = (ap.IsBound() ?
      op->GetCoordinateStorage(temp0) :
      op->vtkSparseArray<short>::GetCoordinateStorage(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IsE_GetValueStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    short *tempr = (ap.IsBound() ?
      op->GetValueStorage() :
      op->vtkSparseArray<short>::GetValueStorage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IsE_ReserveStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReserveStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ReserveStorage(temp0);
    }
    else
    {
      op->vtkSparseArray<short>::ReserveStorage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IsE_SetExtentsFromContents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtentsFromContents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtentsFromContents();
    }
    else
    {
      op->vtkSparseArray<short>::SetExtentsFromContents();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IsE_SetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

  vtkArrayExtents *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayExtents"))
  {
    if (ap.IsBound())
    {
      op->SetExtents(*temp0);
    }
    else
    {
      op->vtkSparseArray<short>::SetExtents(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_IsE_AddValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

  vtkIdType temp0;
  short temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddValue(temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<short>::AddValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IsE_AddValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  short temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->AddValue(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSparseArray<short>::AddValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IsE_AddValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  short temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->AddValue(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkSparseArray<short>::AddValue(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IsE_AddValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  short temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddValue(*temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<short>::AddValue(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IsE_AddValue_Methods[] = {
  {nullptr, PyvtkSparseArray_IsE_AddValue_s1, METH_VARARGS,
   "@kh"},
  {nullptr, PyvtkSparseArray_IsE_AddValue_s4, METH_VARARGS,
   "@Wh vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSparseArray_IsE_AddValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IsE_AddValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSparseArray_IsE_AddValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_IsE_AddValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddValue");
  return nullptr;
}



static PyObject *
PyvtkSparseArray_IsE_Validate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Validate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<short> *op = static_cast<vtkSparseArray<short> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->Validate() :
      op->vtkSparseArray<short>::Validate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSparseArray_IsE_Methods[] = {
  {"IsTypeOf", PyvtkSparseArray_IsE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSparseArray_IsE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSparseArray_IsE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSparseArray_IsE\nC++: static vtkSparseArray<short> *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSparseArray_IsE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSparseArray_IsE\nC++: vtkSparseArray<short> *NewInstance()\n\n"},
  {"IsDense", PyvtkSparseArray_IsE_IsDense, METH_VARARGS,
   "V.IsDense() -> bool\nC++: bool IsDense() override;\n\nReturns true iff the underlying array storage is \"dense\", i.e.\nthat GetSize() and GetNonNullSize() will always return the same\nvalue. If not, the array is \"sparse\".\n"},
  {"GetExtents", PyvtkSparseArray_IsE_GetExtents, METH_VARARGS,
   "V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents() override;\n\nReturns the extents (the number of dimensions and size along each\ndimension) of the array.\n"},
  {"GetNonNullSize", PyvtkSparseArray_IsE_GetNonNullSize, METH_VARARGS,
   "V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize() override;\n\nReturns the number of non-null values stored in the array.  Note\nthat this value will equal GetSize() for dense arrays, and will\nbe less-than-or-equal to GetSize() for sparse arrays.\n"},
  {"GetCoordinatesN", PyvtkSparseArray_IsE_GetCoordinatesN, METH_VARARGS,
   "V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates) override;\n\nReturns the coordinates of the n-th value in the array, where n\nis in the range [0, GetNonNullSize()).  Note that the order in\nwhich coordinates are visited is undefined, but is guaranteed to\nmatch the order in which values are visited using\nvtkTypedArray::GetValueN() and vtkTypedArray::SetValueN().\n"},
  {"DeepCopy", PyvtkSparseArray_IsE_DeepCopy, METH_VARARGS,
   "V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy() override;\n\nReturns a new array that is a deep copy of this array.\n"},
  {"GetValue", PyvtkSparseArray_IsE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> int\nC++: const short &GetValue(CoordinateT i) override;\nV.GetValue(int, int) -> int\nC++: const short &GetValue(CoordinateT i, CoordinateT j) override;\nV.GetValue(int, int, int) -> int\nC++: const short &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k) override;\nV.GetValue(vtkArrayCoordinates) -> int\nC++: const short &GetValue(const vtkArrayCoordinates &coordinates)\n     override;\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetValueN", PyvtkSparseArray_IsE_GetValueN, METH_VARARGS,
   "V.GetValueN(int) -> int\nC++: const short &GetValueN(const SizeT n) override;\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetValue", PyvtkSparseArray_IsE_SetValue, METH_VARARGS,
   "V.SetValue(int, int)\nC++: void SetValue(CoordinateT i, const short &value) override;\nV.SetValue(int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const short &value) override;\nV.SetValue(int, int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const short &value) override;\nV.SetValue(vtkArrayCoordinates, int)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const short &value) override;\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetValueN", PyvtkSparseArray_IsE_SetValueN, METH_VARARGS,
   "V.SetValueN(int, int)\nC++: void SetValueN(const SizeT n, const short &value) override;\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetNullValue", PyvtkSparseArray_IsE_SetNullValue, METH_VARARGS,
   "V.SetNullValue(int)\nC++: void SetNullValue(const short &value)\n\nSet the value that will be returned by GetValue() for nullptr\nareas of the array.\n"},
  {"GetNullValue", PyvtkSparseArray_IsE_GetNullValue, METH_VARARGS,
   "V.GetNullValue() -> int\nC++: const short &GetNullValue()\n\nReturns the value that will be returned by GetValue() for nullptr\nareas of the array.\n"},
  {"Clear", PyvtkSparseArray_IsE_Clear, METH_VARARGS,
   "V.Clear()\nC++: void Clear()\n\nRemove all non-null elements from the array, leaving the number\nof dimensions, the extent of each dimension, and the label for\neach dimension unchanged.\n"},
  {"Sort", PyvtkSparseArray_IsE_Sort, METH_VARARGS,
   "V.Sort(vtkArraySort)\nC++: void Sort(const vtkArraySort &sort)\n\nSorts array values so that their coordinates appear in some\nwell-defined order. The supplied vtkArraySort object controls\nwhich dimensions are sorted, and in what order, and should\ncontain one-or-more sort dimensions, up to the number of\ndimensions stored in the array.\n"},
  {"GetCoordinateStorage", PyvtkSparseArray_IsE_GetCoordinateStorage, METH_VARARGS,
   "V.GetCoordinateStorage(int) -> (int, ...)\nC++: CoordinateT *GetCoordinateStorage(DimensionT dimension)\n\nReturn a mutable reference to the underlying coordinate storage. \nCoordinates for each dimension are stored contiguously as a\none-dimensional array.  The ordering of coordinates within the\narray depends on the order in which values were added to the\narray, and any subsequent sorting.  Use at your own risk!\n"},
  {"GetValueStorage", PyvtkSparseArray_IsE_GetValueStorage, METH_VARARGS,
   "V.GetValueStorage() -> (int, ...)\nC++: short *GetValueStorage()\n\nReturn a mutable reference to the underlying value storage. \nValues are stored contiguously, but in arbitrary order.  Use\nGetCoordinateStorage() if you need to get the corresponding\ncoordinates for a value.  Use at your own risk!\n"},
  {"ReserveStorage", PyvtkSparseArray_IsE_ReserveStorage, METH_VARARGS,
   "V.ReserveStorage(int)\nC++: void ReserveStorage(const SizeT value_count)\n\nReserve storage for a specific number of values.  This is useful\nfor reading external data using GetCoordinateStorage() and\nGetValueStorage(), when the total number of non-nullptr values in\nthe array can be determined in advance.  Note that after calling\nReserveStorage(), all coordinates and values will be undefined,\nso you must ensure that every set of coordinates and values is\noverwritten.  It is the caller's responsibility to ensure that\nduplicate coordinates are not inserted into the array.\n"},
  {"SetExtentsFromContents", PyvtkSparseArray_IsE_SetExtentsFromContents, METH_VARARGS,
   "V.SetExtentsFromContents()\nC++: void SetExtentsFromContents()\n\nUpdate the array extents to match its contents, so that the\nextent along each dimension matches the maximum index value along\nthat dimension.\n"},
  {"SetExtents", PyvtkSparseArray_IsE_SetExtents, METH_VARARGS,
   "V.SetExtents(vtkArrayExtents)\nC++: void SetExtents(const vtkArrayExtents &extents)\n\nSpecify arbitrary array extents, without altering the contents of\nthe array.  Note that the extents must be as-large-or-larger-than\nthe extents of the actual values stored in the array.  The number\nof dimensions in the supplied extents must match the number of\ndimensions currently stored in the array.\n"},
  {"AddValue", PyvtkSparseArray_IsE_AddValue, METH_VARARGS,
   "V.AddValue(int, int)\nC++: void AddValue(CoordinateT i, const short &value)\nV.AddValue(int, int, int)\nC++: void AddValue(CoordinateT i, CoordinateT j,\n    const short &value)\nV.AddValue(int, int, int, int)\nC++: void AddValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const short &value)\nV.AddValue(vtkArrayCoordinates, int)\nC++: void AddValue(const vtkArrayCoordinates &coordinates,\n    const short &value)\n\nAdds a new non-null element to the array.  Does not test to see\nif an element with matching coordinates already exists.  Useful\nfor providing fast initialization of the array as long as the\ncaller is prepared to guarantee that no duplicate coordinates are\never used.\n"},
  {"Validate", PyvtkSparseArray_IsE_Validate, METH_VARARGS,
   "V.Validate() -> bool\nC++: bool Validate()\n\nValidate the contents of the array, returning false if there are\nany problems. Potential problems include duplicate coordinates,\nwhich can be introduced into the array either through AddValue()\nor direct access to coordinates storage; and coordinates\nout-of-bounds given the current array extents.\n\n* Note that Validate() is a heavyweight O(N log N) operation that\nis intended for\n* temporary use during debugging.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSparseArray_IsE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkSparseArray_IsE", // tp_name
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
  PyvtkSparseArray_IsE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSparseArray_IsE_StaticNew()
{
  return vtkSparseArray<short>::New();
}

PyObject *PyvtkSparseArray_IsE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSparseArray_IsE_Type, PyvtkSparseArray_IsE_Methods,
    typeid(vtkSparseArray<short>).name(),
 &PyvtkSparseArray_IsE_StaticNew);

  PyTypeObject *pytype = &PyvtkSparseArray_IsE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkTypedArray_IsE_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSparseArray_ItE_ClassNew(); }

#ifndef DECLARED_PyvtkTypedArray_ItE_ClassNew
extern "C" { PyObject *PyvtkTypedArray_ItE_ClassNew(); }
#define DECLARED_PyvtkTypedArray_ItE_ClassNew
#endif

static const char *PyvtkSparseArray_ItE_Doc =
  "vtkSparseArray<unsigned short> - Sparse, independent coordinate\nstorage for N-way arrays.\n\n"
  "Superclass: vtkTypedArray[uint16]\n\n"
  "vtkSparseArray is a concrete vtkArray implementation that stores\n"
  "values using sparse independent coordinate storage.  This means that\n"
  "the array stores the complete set of coordinates and the value for\n"
  "each non-null value in the array. While this approach requires\n"
  "slightly more storage than other sparse storage schemes (such as\n"
  "Compressed-Row or Compressed-Column), it is easier and more efficient\n"
  "to work with when implementing algorithms, and it generalizes well\n"
  "for arbitrary numbers of dimensions.\n\n"
  "In addition to the value retrieval and update methods provided by\n"
  "vtkTypedArray, vtkSparseArray provides methods to:\n\n"
  "Get and set a special 'null' value that will be returned when\n"
  "retrieving values for undefined coordinates.\n\n"
  "Clear the contents of the array so that every set of coordinates is\n"
  "undefined.\n\n"
  "Sort the array contents so that value coordinates can be visited in a\n"
  "specific order.\n\n"
  "Retrieve pointers to the value- and coordinate-storage memory blocks.\n\n"
  "Reserve storage for a specific number of non-null values, for\n"
  "efficiency when the number of non-null values is known in advance.\n\n"
  "Recompute the array extents so that they bound the largest set of\n"
  "non-nullptr values along each dimension.\n\n"
  "Specify arbitrary array extents.\n\n"
  "Add values to the array in amortized-constant time.\n\n"
  "Validate that the array does not contain duplicate coordinates.\n\n"
  "@sa\n"
  "vtkArray, vtkTypedArray, vtkDenseArray\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";


static PyObject *
PyvtkSparseArray_ItE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSparseArray<unsigned short>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_ItE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSparseArray<unsigned short>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_ItE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSparseArray<unsigned short> *tempr = vtkSparseArray<unsigned short>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_ItE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSparseArray<unsigned short> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSparseArray<unsigned short>::NewInstance());

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
PyvtkSparseArray_ItE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkSparseArray<unsigned short>::IsDense());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_ItE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkSparseArray<unsigned short>::GetExtents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_ItE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkSparseArray<unsigned short>::GetNonNullSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_ItE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

  unsigned long long temp0;
  vtkArrayCoordinates *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, "vtkArrayCoordinates"))
  {
    if (ap.IsBound())
    {
      op->GetCoordinatesN(temp0, *temp1);
    }
    else
    {
      op->vtkSparseArray<unsigned short>::GetCoordinatesN(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_ItE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkSparseArray<unsigned short>::DeepCopy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_ItE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const unsigned short *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkSparseArray<unsigned short>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_ItE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const unsigned short *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkSparseArray<unsigned short>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_ItE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    const unsigned short *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1, temp2) :
      &op->vtkSparseArray<unsigned short>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_ItE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    const unsigned short *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkSparseArray<unsigned short>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_ItE_GetValue_Methods[] = {
  {nullptr, PyvtkSparseArray_ItE_GetValue_s1, METH_VARARGS,
   "@k"},
  {nullptr, PyvtkSparseArray_ItE_GetValue_s4, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSparseArray_ItE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_ItE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSparseArray_ItE_GetValue_s2(self, args);
    case 3:
      return PyvtkSparseArray_ItE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return nullptr;
}



static PyObject *
PyvtkSparseArray_ItE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const unsigned short *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkSparseArray<unsigned short>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_ItE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

  vtkIdType temp0;
  unsigned short temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<unsigned short>::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_ItE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  unsigned short temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSparseArray<unsigned short>::SetValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_ItE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  unsigned short temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkSparseArray<unsigned short>::SetValue(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_ItE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  unsigned short temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(*temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<unsigned short>::SetValue(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_ItE_SetValue_Methods[] = {
  {nullptr, PyvtkSparseArray_ItE_SetValue_s1, METH_VARARGS,
   "@kH"},
  {nullptr, PyvtkSparseArray_ItE_SetValue_s4, METH_VARARGS,
   "@WH vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSparseArray_ItE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_ItE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSparseArray_ItE_SetValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_ItE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return nullptr;
}



static PyObject *
PyvtkSparseArray_ItE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

  unsigned long long temp0;
  unsigned short temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValueN(temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<unsigned short>::SetValueN(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_ItE_SetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

  unsigned short temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNullValue(temp0);
    }
    else
    {
      op->vtkSparseArray<unsigned short>::SetNullValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_ItE_GetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const unsigned short *tempr = (ap.IsBound() ?
      &op->GetNullValue() :
      &op->vtkSparseArray<unsigned short>::GetNullValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_ItE_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Clear();
    }
    else
    {
      op->vtkSparseArray<unsigned short>::Clear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_ItE_Sort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Sort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

  vtkArraySort *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArraySort"))
  {
    if (ap.IsBound())
    {
      op->Sort(*temp0);
    }
    else
    {
      op->vtkSparseArray<unsigned short>::Sort(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_ItE_GetCoordinateStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType *tempr = (ap.IsBound() ?
      op->GetCoordinateStorage(temp0) :
      op->vtkSparseArray<unsigned short>::GetCoordinateStorage(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_ItE_GetValueStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned short *tempr = (ap.IsBound() ?
      op->GetValueStorage() :
      op->vtkSparseArray<unsigned short>::GetValueStorage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_ItE_ReserveStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReserveStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ReserveStorage(temp0);
    }
    else
    {
      op->vtkSparseArray<unsigned short>::ReserveStorage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_ItE_SetExtentsFromContents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtentsFromContents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtentsFromContents();
    }
    else
    {
      op->vtkSparseArray<unsigned short>::SetExtentsFromContents();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_ItE_SetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

  vtkArrayExtents *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayExtents"))
  {
    if (ap.IsBound())
    {
      op->SetExtents(*temp0);
    }
    else
    {
      op->vtkSparseArray<unsigned short>::SetExtents(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_ItE_AddValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

  vtkIdType temp0;
  unsigned short temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddValue(temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<unsigned short>::AddValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_ItE_AddValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  unsigned short temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->AddValue(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSparseArray<unsigned short>::AddValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_ItE_AddValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  unsigned short temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->AddValue(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkSparseArray<unsigned short>::AddValue(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_ItE_AddValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  unsigned short temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddValue(*temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<unsigned short>::AddValue(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_ItE_AddValue_Methods[] = {
  {nullptr, PyvtkSparseArray_ItE_AddValue_s1, METH_VARARGS,
   "@kH"},
  {nullptr, PyvtkSparseArray_ItE_AddValue_s4, METH_VARARGS,
   "@WH vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSparseArray_ItE_AddValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_ItE_AddValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSparseArray_ItE_AddValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_ItE_AddValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddValue");
  return nullptr;
}



static PyObject *
PyvtkSparseArray_ItE_Validate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Validate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned short> *op = static_cast<vtkSparseArray<unsigned short> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->Validate() :
      op->vtkSparseArray<unsigned short>::Validate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSparseArray_ItE_Methods[] = {
  {"IsTypeOf", PyvtkSparseArray_ItE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSparseArray_ItE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSparseArray_ItE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSparseArray_ItE\nC++: static vtkSparseArray<unsigned short> *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSparseArray_ItE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSparseArray_ItE\nC++: vtkSparseArray<unsigned short> *NewInstance()\n\n"},
  {"IsDense", PyvtkSparseArray_ItE_IsDense, METH_VARARGS,
   "V.IsDense() -> bool\nC++: bool IsDense() override;\n\nReturns true iff the underlying array storage is \"dense\", i.e.\nthat GetSize() and GetNonNullSize() will always return the same\nvalue. If not, the array is \"sparse\".\n"},
  {"GetExtents", PyvtkSparseArray_ItE_GetExtents, METH_VARARGS,
   "V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents() override;\n\nReturns the extents (the number of dimensions and size along each\ndimension) of the array.\n"},
  {"GetNonNullSize", PyvtkSparseArray_ItE_GetNonNullSize, METH_VARARGS,
   "V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize() override;\n\nReturns the number of non-null values stored in the array.  Note\nthat this value will equal GetSize() for dense arrays, and will\nbe less-than-or-equal to GetSize() for sparse arrays.\n"},
  {"GetCoordinatesN", PyvtkSparseArray_ItE_GetCoordinatesN, METH_VARARGS,
   "V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates) override;\n\nReturns the coordinates of the n-th value in the array, where n\nis in the range [0, GetNonNullSize()).  Note that the order in\nwhich coordinates are visited is undefined, but is guaranteed to\nmatch the order in which values are visited using\nvtkTypedArray::GetValueN() and vtkTypedArray::SetValueN().\n"},
  {"DeepCopy", PyvtkSparseArray_ItE_DeepCopy, METH_VARARGS,
   "V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy() override;\n\nReturns a new array that is a deep copy of this array.\n"},
  {"GetValue", PyvtkSparseArray_ItE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> int\nC++: const unsigned short &GetValue(CoordinateT i) override;\nV.GetValue(int, int) -> int\nC++: const unsigned short &GetValue(CoordinateT i, CoordinateT j)\n    override;\nV.GetValue(int, int, int) -> int\nC++: const unsigned short &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k) override;\nV.GetValue(vtkArrayCoordinates) -> int\nC++: const unsigned short &GetValue(\n    const vtkArrayCoordinates &coordinates) override;\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetValueN", PyvtkSparseArray_ItE_GetValueN, METH_VARARGS,
   "V.GetValueN(int) -> int\nC++: const unsigned short &GetValueN(const SizeT n) override;\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetValue", PyvtkSparseArray_ItE_SetValue, METH_VARARGS,
   "V.SetValue(int, int)\nC++: void SetValue(CoordinateT i, const unsigned short &value)\n    override;\nV.SetValue(int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const unsigned short &value) override;\nV.SetValue(int, int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const unsigned short &value) override;\nV.SetValue(vtkArrayCoordinates, int)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const unsigned short &value) override;\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetValueN", PyvtkSparseArray_ItE_SetValueN, METH_VARARGS,
   "V.SetValueN(int, int)\nC++: void SetValueN(const SizeT n, const unsigned short &value)\n    override;\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetNullValue", PyvtkSparseArray_ItE_SetNullValue, METH_VARARGS,
   "V.SetNullValue(int)\nC++: void SetNullValue(const unsigned short &value)\n\nSet the value that will be returned by GetValue() for nullptr\nareas of the array.\n"},
  {"GetNullValue", PyvtkSparseArray_ItE_GetNullValue, METH_VARARGS,
   "V.GetNullValue() -> int\nC++: const unsigned short &GetNullValue()\n\nReturns the value that will be returned by GetValue() for nullptr\nareas of the array.\n"},
  {"Clear", PyvtkSparseArray_ItE_Clear, METH_VARARGS,
   "V.Clear()\nC++: void Clear()\n\nRemove all non-null elements from the array, leaving the number\nof dimensions, the extent of each dimension, and the label for\neach dimension unchanged.\n"},
  {"Sort", PyvtkSparseArray_ItE_Sort, METH_VARARGS,
   "V.Sort(vtkArraySort)\nC++: void Sort(const vtkArraySort &sort)\n\nSorts array values so that their coordinates appear in some\nwell-defined order. The supplied vtkArraySort object controls\nwhich dimensions are sorted, and in what order, and should\ncontain one-or-more sort dimensions, up to the number of\ndimensions stored in the array.\n"},
  {"GetCoordinateStorage", PyvtkSparseArray_ItE_GetCoordinateStorage, METH_VARARGS,
   "V.GetCoordinateStorage(int) -> (int, ...)\nC++: CoordinateT *GetCoordinateStorage(DimensionT dimension)\n\nReturn a mutable reference to the underlying coordinate storage. \nCoordinates for each dimension are stored contiguously as a\none-dimensional array.  The ordering of coordinates within the\narray depends on the order in which values were added to the\narray, and any subsequent sorting.  Use at your own risk!\n"},
  {"GetValueStorage", PyvtkSparseArray_ItE_GetValueStorage, METH_VARARGS,
   "V.GetValueStorage() -> (int, ...)\nC++: unsigned short *GetValueStorage()\n\nReturn a mutable reference to the underlying value storage. \nValues are stored contiguously, but in arbitrary order.  Use\nGetCoordinateStorage() if you need to get the corresponding\ncoordinates for a value.  Use at your own risk!\n"},
  {"ReserveStorage", PyvtkSparseArray_ItE_ReserveStorage, METH_VARARGS,
   "V.ReserveStorage(int)\nC++: void ReserveStorage(const SizeT value_count)\n\nReserve storage for a specific number of values.  This is useful\nfor reading external data using GetCoordinateStorage() and\nGetValueStorage(), when the total number of non-nullptr values in\nthe array can be determined in advance.  Note that after calling\nReserveStorage(), all coordinates and values will be undefined,\nso you must ensure that every set of coordinates and values is\noverwritten.  It is the caller's responsibility to ensure that\nduplicate coordinates are not inserted into the array.\n"},
  {"SetExtentsFromContents", PyvtkSparseArray_ItE_SetExtentsFromContents, METH_VARARGS,
   "V.SetExtentsFromContents()\nC++: void SetExtentsFromContents()\n\nUpdate the array extents to match its contents, so that the\nextent along each dimension matches the maximum index value along\nthat dimension.\n"},
  {"SetExtents", PyvtkSparseArray_ItE_SetExtents, METH_VARARGS,
   "V.SetExtents(vtkArrayExtents)\nC++: void SetExtents(const vtkArrayExtents &extents)\n\nSpecify arbitrary array extents, without altering the contents of\nthe array.  Note that the extents must be as-large-or-larger-than\nthe extents of the actual values stored in the array.  The number\nof dimensions in the supplied extents must match the number of\ndimensions currently stored in the array.\n"},
  {"AddValue", PyvtkSparseArray_ItE_AddValue, METH_VARARGS,
   "V.AddValue(int, int)\nC++: void AddValue(CoordinateT i, const unsigned short &value)\nV.AddValue(int, int, int)\nC++: void AddValue(CoordinateT i, CoordinateT j,\n    const unsigned short &value)\nV.AddValue(int, int, int, int)\nC++: void AddValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const unsigned short &value)\nV.AddValue(vtkArrayCoordinates, int)\nC++: void AddValue(const vtkArrayCoordinates &coordinates,\n    const unsigned short &value)\n\nAdds a new non-null element to the array.  Does not test to see\nif an element with matching coordinates already exists.  Useful\nfor providing fast initialization of the array as long as the\ncaller is prepared to guarantee that no duplicate coordinates are\never used.\n"},
  {"Validate", PyvtkSparseArray_ItE_Validate, METH_VARARGS,
   "V.Validate() -> bool\nC++: bool Validate()\n\nValidate the contents of the array, returning false if there are\nany problems. Potential problems include duplicate coordinates,\nwhich can be introduced into the array either through AddValue()\nor direct access to coordinates storage; and coordinates\nout-of-bounds given the current array extents.\n\n* Note that Validate() is a heavyweight O(N log N) operation that\nis intended for\n* temporary use during debugging.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSparseArray_ItE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkSparseArray_ItE", // tp_name
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
  PyvtkSparseArray_ItE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSparseArray_ItE_StaticNew()
{
  return vtkSparseArray<unsigned short>::New();
}

PyObject *PyvtkSparseArray_ItE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSparseArray_ItE_Type, PyvtkSparseArray_ItE_Methods,
    typeid(vtkSparseArray<unsigned short>).name(),
 &PyvtkSparseArray_ItE_StaticNew);

  PyTypeObject *pytype = &PyvtkSparseArray_ItE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkTypedArray_ItE_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSparseArray_IiE_ClassNew(); }

#ifndef DECLARED_PyvtkTypedArray_IiE_ClassNew
extern "C" { PyObject *PyvtkTypedArray_IiE_ClassNew(); }
#define DECLARED_PyvtkTypedArray_IiE_ClassNew
#endif

static const char *PyvtkSparseArray_IiE_Doc =
  "vtkSparseArray- Sparse, independent coordinate storage for N-way\narrays.\n\n"
  "Superclass: vtkTypedArray[int32]\n\n"
  "vtkSparseArray is a concrete vtkArray implementation that stores\n"
  "values using sparse independent coordinate storage.  This means that\n"
  "the array stores the complete set of coordinates and the value for\n"
  "each non-null value in the array. While this approach requires\n"
  "slightly more storage than other sparse storage schemes (such as\n"
  "Compressed-Row or Compressed-Column), it is easier and more efficient\n"
  "to work with when implementing algorithms, and it generalizes well\n"
  "for arbitrary numbers of dimensions.\n\n"
  "In addition to the value retrieval and update methods provided by\n"
  "vtkTypedArray, vtkSparseArray provides methods to:\n\n"
  "Get and set a special 'null' value that will be returned when\n"
  "retrieving values for undefined coordinates.\n\n"
  "Clear the contents of the array so that every set of coordinates is\n"
  "undefined.\n\n"
  "Sort the array contents so that value coordinates can be visited in a\n"
  "specific order.\n\n"
  "Retrieve pointers to the value- and coordinate-storage memory blocks.\n\n"
  "Reserve storage for a specific number of non-null values, for\n"
  "efficiency when the number of non-null values is known in advance.\n\n"
  "Recompute the array extents so that they bound the largest set of\n"
  "non-nullptr values along each dimension.\n\n"
  "Specify arbitrary array extents.\n\n"
  "Add values to the array in amortized-constant time.\n\n"
  "Validate that the array does not contain duplicate coordinates.\n\n"
  "@sa\n"
  "vtkArray, vtkTypedArray, vtkDenseArray\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";


static PyObject *
PyvtkSparseArray_IiE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSparseArray<int>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IiE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSparseArray<int>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IiE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSparseArray<int> *tempr = vtkSparseArray<int>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IiE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSparseArray<int> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSparseArray<int>::NewInstance());

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
PyvtkSparseArray_IiE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkSparseArray<int>::IsDense());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IiE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkSparseArray<int>::GetExtents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IiE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkSparseArray<int>::GetNonNullSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IiE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

  unsigned long long temp0;
  vtkArrayCoordinates *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, "vtkArrayCoordinates"))
  {
    if (ap.IsBound())
    {
      op->GetCoordinatesN(temp0, *temp1);
    }
    else
    {
      op->vtkSparseArray<int>::GetCoordinatesN(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IiE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkSparseArray<int>::DeepCopy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IiE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const int *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkSparseArray<int>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IiE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const int *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkSparseArray<int>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IiE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    const int *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1, temp2) :
      &op->vtkSparseArray<int>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IiE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    const int *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkSparseArray<int>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IiE_GetValue_Methods[] = {
  {nullptr, PyvtkSparseArray_IiE_GetValue_s1, METH_VARARGS,
   "@k"},
  {nullptr, PyvtkSparseArray_IiE_GetValue_s4, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSparseArray_IiE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IiE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSparseArray_IiE_GetValue_s2(self, args);
    case 3:
      return PyvtkSparseArray_IiE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return nullptr;
}



static PyObject *
PyvtkSparseArray_IiE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const int *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkSparseArray<int>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IiE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

  vtkIdType temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<int>::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IiE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSparseArray<int>::SetValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IiE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkSparseArray<int>::SetValue(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IiE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(*temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<int>::SetValue(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IiE_SetValue_Methods[] = {
  {nullptr, PyvtkSparseArray_IiE_SetValue_s1, METH_VARARGS,
   "@ki"},
  {nullptr, PyvtkSparseArray_IiE_SetValue_s4, METH_VARARGS,
   "@Wi vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSparseArray_IiE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IiE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSparseArray_IiE_SetValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_IiE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return nullptr;
}



static PyObject *
PyvtkSparseArray_IiE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

  unsigned long long temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValueN(temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<int>::SetValueN(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IiE_SetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNullValue(temp0);
    }
    else
    {
      op->vtkSparseArray<int>::SetNullValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IiE_GetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const int *tempr = (ap.IsBound() ?
      &op->GetNullValue() :
      &op->vtkSparseArray<int>::GetNullValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IiE_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Clear();
    }
    else
    {
      op->vtkSparseArray<int>::Clear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IiE_Sort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Sort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

  vtkArraySort *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArraySort"))
  {
    if (ap.IsBound())
    {
      op->Sort(*temp0);
    }
    else
    {
      op->vtkSparseArray<int>::Sort(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_IiE_GetCoordinateStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType *tempr = (ap.IsBound() ?
      op->GetCoordinateStorage(temp0) :
      op->vtkSparseArray<int>::GetCoordinateStorage(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IiE_GetValueStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetValueStorage() :
      op->vtkSparseArray<int>::GetValueStorage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IiE_ReserveStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReserveStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ReserveStorage(temp0);
    }
    else
    {
      op->vtkSparseArray<int>::ReserveStorage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IiE_SetExtentsFromContents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtentsFromContents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtentsFromContents();
    }
    else
    {
      op->vtkSparseArray<int>::SetExtentsFromContents();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IiE_SetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

  vtkArrayExtents *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayExtents"))
  {
    if (ap.IsBound())
    {
      op->SetExtents(*temp0);
    }
    else
    {
      op->vtkSparseArray<int>::SetExtents(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_IiE_AddValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

  vtkIdType temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddValue(temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<int>::AddValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IiE_AddValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->AddValue(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSparseArray<int>::AddValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IiE_AddValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->AddValue(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkSparseArray<int>::AddValue(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IiE_AddValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddValue(*temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<int>::AddValue(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IiE_AddValue_Methods[] = {
  {nullptr, PyvtkSparseArray_IiE_AddValue_s1, METH_VARARGS,
   "@ki"},
  {nullptr, PyvtkSparseArray_IiE_AddValue_s4, METH_VARARGS,
   "@Wi vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSparseArray_IiE_AddValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IiE_AddValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSparseArray_IiE_AddValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_IiE_AddValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddValue");
  return nullptr;
}



static PyObject *
PyvtkSparseArray_IiE_Validate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Validate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<int> *op = static_cast<vtkSparseArray<int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->Validate() :
      op->vtkSparseArray<int>::Validate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSparseArray_IiE_Methods[] = {
  {"IsTypeOf", PyvtkSparseArray_IiE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSparseArray_IiE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSparseArray_IiE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSparseArray_IiE\nC++: static vtkSparseArray<int> *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSparseArray_IiE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSparseArray_IiE\nC++: vtkSparseArray<int> *NewInstance()\n\n"},
  {"IsDense", PyvtkSparseArray_IiE_IsDense, METH_VARARGS,
   "V.IsDense() -> bool\nC++: bool IsDense() override;\n\nReturns true iff the underlying array storage is \"dense\", i.e.\nthat GetSize() and GetNonNullSize() will always return the same\nvalue. If not, the array is \"sparse\".\n"},
  {"GetExtents", PyvtkSparseArray_IiE_GetExtents, METH_VARARGS,
   "V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents() override;\n\nReturns the extents (the number of dimensions and size along each\ndimension) of the array.\n"},
  {"GetNonNullSize", PyvtkSparseArray_IiE_GetNonNullSize, METH_VARARGS,
   "V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize() override;\n\nReturns the number of non-null values stored in the array.  Note\nthat this value will equal GetSize() for dense arrays, and will\nbe less-than-or-equal to GetSize() for sparse arrays.\n"},
  {"GetCoordinatesN", PyvtkSparseArray_IiE_GetCoordinatesN, METH_VARARGS,
   "V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates) override;\n\nReturns the coordinates of the n-th value in the array, where n\nis in the range [0, GetNonNullSize()).  Note that the order in\nwhich coordinates are visited is undefined, but is guaranteed to\nmatch the order in which values are visited using\nvtkTypedArray::GetValueN() and vtkTypedArray::SetValueN().\n"},
  {"DeepCopy", PyvtkSparseArray_IiE_DeepCopy, METH_VARARGS,
   "V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy() override;\n\nReturns a new array that is a deep copy of this array.\n"},
  {"GetValue", PyvtkSparseArray_IiE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> int\nC++: const int &GetValue(CoordinateT i) override;\nV.GetValue(int, int) -> int\nC++: const int &GetValue(CoordinateT i, CoordinateT j) override;\nV.GetValue(int, int, int) -> int\nC++: const int &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k) override;\nV.GetValue(vtkArrayCoordinates) -> int\nC++: const int &GetValue(const vtkArrayCoordinates &coordinates)\n    override;\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetValueN", PyvtkSparseArray_IiE_GetValueN, METH_VARARGS,
   "V.GetValueN(int) -> int\nC++: const int &GetValueN(const SizeT n) override;\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetValue", PyvtkSparseArray_IiE_SetValue, METH_VARARGS,
   "V.SetValue(int, int)\nC++: void SetValue(CoordinateT i, const int &value) override;\nV.SetValue(int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j, const int &value)\n     override;\nV.SetValue(int, int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const int &value) override;\nV.SetValue(vtkArrayCoordinates, int)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const int &value) override;\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetValueN", PyvtkSparseArray_IiE_SetValueN, METH_VARARGS,
   "V.SetValueN(int, int)\nC++: void SetValueN(const SizeT n, const int &value) override;\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetNullValue", PyvtkSparseArray_IiE_SetNullValue, METH_VARARGS,
   "V.SetNullValue(int)\nC++: void SetNullValue(const int &value)\n\nSet the value that will be returned by GetValue() for nullptr\nareas of the array.\n"},
  {"GetNullValue", PyvtkSparseArray_IiE_GetNullValue, METH_VARARGS,
   "V.GetNullValue() -> int\nC++: const int &GetNullValue()\n\nReturns the value that will be returned by GetValue() for nullptr\nareas of the array.\n"},
  {"Clear", PyvtkSparseArray_IiE_Clear, METH_VARARGS,
   "V.Clear()\nC++: void Clear()\n\nRemove all non-null elements from the array, leaving the number\nof dimensions, the extent of each dimension, and the label for\neach dimension unchanged.\n"},
  {"Sort", PyvtkSparseArray_IiE_Sort, METH_VARARGS,
   "V.Sort(vtkArraySort)\nC++: void Sort(const vtkArraySort &sort)\n\nSorts array values so that their coordinates appear in some\nwell-defined order. The supplied vtkArraySort object controls\nwhich dimensions are sorted, and in what order, and should\ncontain one-or-more sort dimensions, up to the number of\ndimensions stored in the array.\n"},
  {"GetCoordinateStorage", PyvtkSparseArray_IiE_GetCoordinateStorage, METH_VARARGS,
   "V.GetCoordinateStorage(int) -> (int, ...)\nC++: CoordinateT *GetCoordinateStorage(DimensionT dimension)\n\nReturn a mutable reference to the underlying coordinate storage. \nCoordinates for each dimension are stored contiguously as a\none-dimensional array.  The ordering of coordinates within the\narray depends on the order in which values were added to the\narray, and any subsequent sorting.  Use at your own risk!\n"},
  {"GetValueStorage", PyvtkSparseArray_IiE_GetValueStorage, METH_VARARGS,
   "V.GetValueStorage() -> (int, ...)\nC++: int *GetValueStorage()\n\nReturn a mutable reference to the underlying value storage. \nValues are stored contiguously, but in arbitrary order.  Use\nGetCoordinateStorage() if you need to get the corresponding\ncoordinates for a value.  Use at your own risk!\n"},
  {"ReserveStorage", PyvtkSparseArray_IiE_ReserveStorage, METH_VARARGS,
   "V.ReserveStorage(int)\nC++: void ReserveStorage(const SizeT value_count)\n\nReserve storage for a specific number of values.  This is useful\nfor reading external data using GetCoordinateStorage() and\nGetValueStorage(), when the total number of non-nullptr values in\nthe array can be determined in advance.  Note that after calling\nReserveStorage(), all coordinates and values will be undefined,\nso you must ensure that every set of coordinates and values is\noverwritten.  It is the caller's responsibility to ensure that\nduplicate coordinates are not inserted into the array.\n"},
  {"SetExtentsFromContents", PyvtkSparseArray_IiE_SetExtentsFromContents, METH_VARARGS,
   "V.SetExtentsFromContents()\nC++: void SetExtentsFromContents()\n\nUpdate the array extents to match its contents, so that the\nextent along each dimension matches the maximum index value along\nthat dimension.\n"},
  {"SetExtents", PyvtkSparseArray_IiE_SetExtents, METH_VARARGS,
   "V.SetExtents(vtkArrayExtents)\nC++: void SetExtents(const vtkArrayExtents &extents)\n\nSpecify arbitrary array extents, without altering the contents of\nthe array.  Note that the extents must be as-large-or-larger-than\nthe extents of the actual values stored in the array.  The number\nof dimensions in the supplied extents must match the number of\ndimensions currently stored in the array.\n"},
  {"AddValue", PyvtkSparseArray_IiE_AddValue, METH_VARARGS,
   "V.AddValue(int, int)\nC++: void AddValue(CoordinateT i, const int &value)\nV.AddValue(int, int, int)\nC++: void AddValue(CoordinateT i, CoordinateT j, const int &value)\nV.AddValue(int, int, int, int)\nC++: void AddValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const int &value)\nV.AddValue(vtkArrayCoordinates, int)\nC++: void AddValue(const vtkArrayCoordinates &coordinates,\n    const int &value)\n\nAdds a new non-null element to the array.  Does not test to see\nif an element with matching coordinates already exists.  Useful\nfor providing fast initialization of the array as long as the\ncaller is prepared to guarantee that no duplicate coordinates are\never used.\n"},
  {"Validate", PyvtkSparseArray_IiE_Validate, METH_VARARGS,
   "V.Validate() -> bool\nC++: bool Validate()\n\nValidate the contents of the array, returning false if there are\nany problems. Potential problems include duplicate coordinates,\nwhich can be introduced into the array either through AddValue()\nor direct access to coordinates storage; and coordinates\nout-of-bounds given the current array extents.\n\n* Note that Validate() is a heavyweight O(N log N) operation that\nis intended for\n* temporary use during debugging.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSparseArray_IiE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkSparseArray_IiE", // tp_name
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
  PyvtkSparseArray_IiE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSparseArray_IiE_StaticNew()
{
  return vtkSparseArray<int>::New();
}

PyObject *PyvtkSparseArray_IiE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSparseArray_IiE_Type, PyvtkSparseArray_IiE_Methods,
    typeid(vtkSparseArray<int>).name(),
 &PyvtkSparseArray_IiE_StaticNew);

  PyTypeObject *pytype = &PyvtkSparseArray_IiE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkTypedArray_IiE_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSparseArray_IjE_ClassNew(); }

#ifndef DECLARED_PyvtkTypedArray_IjE_ClassNew
extern "C" { PyObject *PyvtkTypedArray_IjE_ClassNew(); }
#define DECLARED_PyvtkTypedArray_IjE_ClassNew
#endif

static const char *PyvtkSparseArray_IjE_Doc =
  "vtkSparseArray<unsigned int> - Sparse, independent coordinate storage\nfor N-way arrays.\n\n"
  "Superclass: vtkTypedArray[uint32]\n\n"
  "vtkSparseArray is a concrete vtkArray implementation that stores\n"
  "values using sparse independent coordinate storage.  This means that\n"
  "the array stores the complete set of coordinates and the value for\n"
  "each non-null value in the array. While this approach requires\n"
  "slightly more storage than other sparse storage schemes (such as\n"
  "Compressed-Row or Compressed-Column), it is easier and more efficient\n"
  "to work with when implementing algorithms, and it generalizes well\n"
  "for arbitrary numbers of dimensions.\n\n"
  "In addition to the value retrieval and update methods provided by\n"
  "vtkTypedArray, vtkSparseArray provides methods to:\n\n"
  "Get and set a special 'null' value that will be returned when\n"
  "retrieving values for undefined coordinates.\n\n"
  "Clear the contents of the array so that every set of coordinates is\n"
  "undefined.\n\n"
  "Sort the array contents so that value coordinates can be visited in a\n"
  "specific order.\n\n"
  "Retrieve pointers to the value- and coordinate-storage memory blocks.\n\n"
  "Reserve storage for a specific number of non-null values, for\n"
  "efficiency when the number of non-null values is known in advance.\n\n"
  "Recompute the array extents so that they bound the largest set of\n"
  "non-nullptr values along each dimension.\n\n"
  "Specify arbitrary array extents.\n\n"
  "Add values to the array in amortized-constant time.\n\n"
  "Validate that the array does not contain duplicate coordinates.\n\n"
  "@sa\n"
  "vtkArray, vtkTypedArray, vtkDenseArray\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";


static PyObject *
PyvtkSparseArray_IjE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSparseArray<unsigned int>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IjE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSparseArray<unsigned int>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IjE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSparseArray<unsigned int> *tempr = vtkSparseArray<unsigned int>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IjE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSparseArray<unsigned int> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSparseArray<unsigned int>::NewInstance());

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
PyvtkSparseArray_IjE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkSparseArray<unsigned int>::IsDense());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IjE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkSparseArray<unsigned int>::GetExtents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IjE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkSparseArray<unsigned int>::GetNonNullSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IjE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

  unsigned long long temp0;
  vtkArrayCoordinates *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, "vtkArrayCoordinates"))
  {
    if (ap.IsBound())
    {
      op->GetCoordinatesN(temp0, *temp1);
    }
    else
    {
      op->vtkSparseArray<unsigned int>::GetCoordinatesN(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IjE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkSparseArray<unsigned int>::DeepCopy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IjE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const unsigned int *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkSparseArray<unsigned int>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IjE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const unsigned int *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkSparseArray<unsigned int>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IjE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    const unsigned int *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1, temp2) :
      &op->vtkSparseArray<unsigned int>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IjE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    const unsigned int *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkSparseArray<unsigned int>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IjE_GetValue_Methods[] = {
  {nullptr, PyvtkSparseArray_IjE_GetValue_s1, METH_VARARGS,
   "@k"},
  {nullptr, PyvtkSparseArray_IjE_GetValue_s4, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSparseArray_IjE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IjE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSparseArray_IjE_GetValue_s2(self, args);
    case 3:
      return PyvtkSparseArray_IjE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return nullptr;
}



static PyObject *
PyvtkSparseArray_IjE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const unsigned int *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkSparseArray<unsigned int>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IjE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

  vtkIdType temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<unsigned int>::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IjE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  unsigned int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSparseArray<unsigned int>::SetValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IjE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  unsigned int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkSparseArray<unsigned int>::SetValue(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IjE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(*temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<unsigned int>::SetValue(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IjE_SetValue_Methods[] = {
  {nullptr, PyvtkSparseArray_IjE_SetValue_s1, METH_VARARGS,
   "@kI"},
  {nullptr, PyvtkSparseArray_IjE_SetValue_s4, METH_VARARGS,
   "@WI vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSparseArray_IjE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IjE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSparseArray_IjE_SetValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_IjE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return nullptr;
}



static PyObject *
PyvtkSparseArray_IjE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

  unsigned long long temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValueN(temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<unsigned int>::SetValueN(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IjE_SetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNullValue(temp0);
    }
    else
    {
      op->vtkSparseArray<unsigned int>::SetNullValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IjE_GetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const unsigned int *tempr = (ap.IsBound() ?
      &op->GetNullValue() :
      &op->vtkSparseArray<unsigned int>::GetNullValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IjE_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Clear();
    }
    else
    {
      op->vtkSparseArray<unsigned int>::Clear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IjE_Sort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Sort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

  vtkArraySort *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArraySort"))
  {
    if (ap.IsBound())
    {
      op->Sort(*temp0);
    }
    else
    {
      op->vtkSparseArray<unsigned int>::Sort(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_IjE_GetCoordinateStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType *tempr = (ap.IsBound() ?
      op->GetCoordinateStorage(temp0) :
      op->vtkSparseArray<unsigned int>::GetCoordinateStorage(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IjE_GetValueStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int *tempr = (ap.IsBound() ?
      op->GetValueStorage() :
      op->vtkSparseArray<unsigned int>::GetValueStorage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IjE_ReserveStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReserveStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ReserveStorage(temp0);
    }
    else
    {
      op->vtkSparseArray<unsigned int>::ReserveStorage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IjE_SetExtentsFromContents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtentsFromContents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtentsFromContents();
    }
    else
    {
      op->vtkSparseArray<unsigned int>::SetExtentsFromContents();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IjE_SetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

  vtkArrayExtents *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayExtents"))
  {
    if (ap.IsBound())
    {
      op->SetExtents(*temp0);
    }
    else
    {
      op->vtkSparseArray<unsigned int>::SetExtents(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_IjE_AddValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

  vtkIdType temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddValue(temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<unsigned int>::AddValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IjE_AddValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  unsigned int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->AddValue(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSparseArray<unsigned int>::AddValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IjE_AddValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  unsigned int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->AddValue(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkSparseArray<unsigned int>::AddValue(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IjE_AddValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddValue(*temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<unsigned int>::AddValue(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IjE_AddValue_Methods[] = {
  {nullptr, PyvtkSparseArray_IjE_AddValue_s1, METH_VARARGS,
   "@kI"},
  {nullptr, PyvtkSparseArray_IjE_AddValue_s4, METH_VARARGS,
   "@WI vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSparseArray_IjE_AddValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IjE_AddValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSparseArray_IjE_AddValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_IjE_AddValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddValue");
  return nullptr;
}



static PyObject *
PyvtkSparseArray_IjE_Validate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Validate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned int> *op = static_cast<vtkSparseArray<unsigned int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->Validate() :
      op->vtkSparseArray<unsigned int>::Validate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSparseArray_IjE_Methods[] = {
  {"IsTypeOf", PyvtkSparseArray_IjE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSparseArray_IjE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSparseArray_IjE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSparseArray_IjE\nC++: static vtkSparseArray<unsigned int> *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSparseArray_IjE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSparseArray_IjE\nC++: vtkSparseArray<unsigned int> *NewInstance()\n\n"},
  {"IsDense", PyvtkSparseArray_IjE_IsDense, METH_VARARGS,
   "V.IsDense() -> bool\nC++: bool IsDense() override;\n\nReturns true iff the underlying array storage is \"dense\", i.e.\nthat GetSize() and GetNonNullSize() will always return the same\nvalue. If not, the array is \"sparse\".\n"},
  {"GetExtents", PyvtkSparseArray_IjE_GetExtents, METH_VARARGS,
   "V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents() override;\n\nReturns the extents (the number of dimensions and size along each\ndimension) of the array.\n"},
  {"GetNonNullSize", PyvtkSparseArray_IjE_GetNonNullSize, METH_VARARGS,
   "V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize() override;\n\nReturns the number of non-null values stored in the array.  Note\nthat this value will equal GetSize() for dense arrays, and will\nbe less-than-or-equal to GetSize() for sparse arrays.\n"},
  {"GetCoordinatesN", PyvtkSparseArray_IjE_GetCoordinatesN, METH_VARARGS,
   "V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates) override;\n\nReturns the coordinates of the n-th value in the array, where n\nis in the range [0, GetNonNullSize()).  Note that the order in\nwhich coordinates are visited is undefined, but is guaranteed to\nmatch the order in which values are visited using\nvtkTypedArray::GetValueN() and vtkTypedArray::SetValueN().\n"},
  {"DeepCopy", PyvtkSparseArray_IjE_DeepCopy, METH_VARARGS,
   "V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy() override;\n\nReturns a new array that is a deep copy of this array.\n"},
  {"GetValue", PyvtkSparseArray_IjE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> int\nC++: const unsigned int &GetValue(CoordinateT i) override;\nV.GetValue(int, int) -> int\nC++: const unsigned int &GetValue(CoordinateT i, CoordinateT j)\n    override;\nV.GetValue(int, int, int) -> int\nC++: const unsigned int &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k) override;\nV.GetValue(vtkArrayCoordinates) -> int\nC++: const unsigned int &GetValue(\n    const vtkArrayCoordinates &coordinates) override;\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetValueN", PyvtkSparseArray_IjE_GetValueN, METH_VARARGS,
   "V.GetValueN(int) -> int\nC++: const unsigned int &GetValueN(const SizeT n) override;\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetValue", PyvtkSparseArray_IjE_SetValue, METH_VARARGS,
   "V.SetValue(int, int)\nC++: void SetValue(CoordinateT i, const unsigned int &value)\n    override;\nV.SetValue(int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const unsigned int &value) override;\nV.SetValue(int, int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const unsigned int &value) override;\nV.SetValue(vtkArrayCoordinates, int)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const unsigned int &value) override;\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetValueN", PyvtkSparseArray_IjE_SetValueN, METH_VARARGS,
   "V.SetValueN(int, int)\nC++: void SetValueN(const SizeT n, const unsigned int &value)\n    override;\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetNullValue", PyvtkSparseArray_IjE_SetNullValue, METH_VARARGS,
   "V.SetNullValue(int)\nC++: void SetNullValue(const unsigned int &value)\n\nSet the value that will be returned by GetValue() for nullptr\nareas of the array.\n"},
  {"GetNullValue", PyvtkSparseArray_IjE_GetNullValue, METH_VARARGS,
   "V.GetNullValue() -> int\nC++: const unsigned int &GetNullValue()\n\nReturns the value that will be returned by GetValue() for nullptr\nareas of the array.\n"},
  {"Clear", PyvtkSparseArray_IjE_Clear, METH_VARARGS,
   "V.Clear()\nC++: void Clear()\n\nRemove all non-null elements from the array, leaving the number\nof dimensions, the extent of each dimension, and the label for\neach dimension unchanged.\n"},
  {"Sort", PyvtkSparseArray_IjE_Sort, METH_VARARGS,
   "V.Sort(vtkArraySort)\nC++: void Sort(const vtkArraySort &sort)\n\nSorts array values so that their coordinates appear in some\nwell-defined order. The supplied vtkArraySort object controls\nwhich dimensions are sorted, and in what order, and should\ncontain one-or-more sort dimensions, up to the number of\ndimensions stored in the array.\n"},
  {"GetCoordinateStorage", PyvtkSparseArray_IjE_GetCoordinateStorage, METH_VARARGS,
   "V.GetCoordinateStorage(int) -> (int, ...)\nC++: CoordinateT *GetCoordinateStorage(DimensionT dimension)\n\nReturn a mutable reference to the underlying coordinate storage. \nCoordinates for each dimension are stored contiguously as a\none-dimensional array.  The ordering of coordinates within the\narray depends on the order in which values were added to the\narray, and any subsequent sorting.  Use at your own risk!\n"},
  {"GetValueStorage", PyvtkSparseArray_IjE_GetValueStorage, METH_VARARGS,
   "V.GetValueStorage() -> (int, ...)\nC++: unsigned int *GetValueStorage()\n\nReturn a mutable reference to the underlying value storage. \nValues are stored contiguously, but in arbitrary order.  Use\nGetCoordinateStorage() if you need to get the corresponding\ncoordinates for a value.  Use at your own risk!\n"},
  {"ReserveStorage", PyvtkSparseArray_IjE_ReserveStorage, METH_VARARGS,
   "V.ReserveStorage(int)\nC++: void ReserveStorage(const SizeT value_count)\n\nReserve storage for a specific number of values.  This is useful\nfor reading external data using GetCoordinateStorage() and\nGetValueStorage(), when the total number of non-nullptr values in\nthe array can be determined in advance.  Note that after calling\nReserveStorage(), all coordinates and values will be undefined,\nso you must ensure that every set of coordinates and values is\noverwritten.  It is the caller's responsibility to ensure that\nduplicate coordinates are not inserted into the array.\n"},
  {"SetExtentsFromContents", PyvtkSparseArray_IjE_SetExtentsFromContents, METH_VARARGS,
   "V.SetExtentsFromContents()\nC++: void SetExtentsFromContents()\n\nUpdate the array extents to match its contents, so that the\nextent along each dimension matches the maximum index value along\nthat dimension.\n"},
  {"SetExtents", PyvtkSparseArray_IjE_SetExtents, METH_VARARGS,
   "V.SetExtents(vtkArrayExtents)\nC++: void SetExtents(const vtkArrayExtents &extents)\n\nSpecify arbitrary array extents, without altering the contents of\nthe array.  Note that the extents must be as-large-or-larger-than\nthe extents of the actual values stored in the array.  The number\nof dimensions in the supplied extents must match the number of\ndimensions currently stored in the array.\n"},
  {"AddValue", PyvtkSparseArray_IjE_AddValue, METH_VARARGS,
   "V.AddValue(int, int)\nC++: void AddValue(CoordinateT i, const unsigned int &value)\nV.AddValue(int, int, int)\nC++: void AddValue(CoordinateT i, CoordinateT j,\n    const unsigned int &value)\nV.AddValue(int, int, int, int)\nC++: void AddValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const unsigned int &value)\nV.AddValue(vtkArrayCoordinates, int)\nC++: void AddValue(const vtkArrayCoordinates &coordinates,\n    const unsigned int &value)\n\nAdds a new non-null element to the array.  Does not test to see\nif an element with matching coordinates already exists.  Useful\nfor providing fast initialization of the array as long as the\ncaller is prepared to guarantee that no duplicate coordinates are\never used.\n"},
  {"Validate", PyvtkSparseArray_IjE_Validate, METH_VARARGS,
   "V.Validate() -> bool\nC++: bool Validate()\n\nValidate the contents of the array, returning false if there are\nany problems. Potential problems include duplicate coordinates,\nwhich can be introduced into the array either through AddValue()\nor direct access to coordinates storage; and coordinates\nout-of-bounds given the current array extents.\n\n* Note that Validate() is a heavyweight O(N log N) operation that\nis intended for\n* temporary use during debugging.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSparseArray_IjE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkSparseArray_IjE", // tp_name
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
  PyvtkSparseArray_IjE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSparseArray_IjE_StaticNew()
{
  return vtkSparseArray<unsigned int>::New();
}

PyObject *PyvtkSparseArray_IjE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSparseArray_IjE_Type, PyvtkSparseArray_IjE_Methods,
    typeid(vtkSparseArray<unsigned int>).name(),
 &PyvtkSparseArray_IjE_StaticNew);

  PyTypeObject *pytype = &PyvtkSparseArray_IjE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkTypedArray_IjE_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSparseArray_IlE_ClassNew(); }

#ifndef DECLARED_PyvtkTypedArray_IlE_ClassNew
extern "C" { PyObject *PyvtkTypedArray_IlE_ClassNew(); }
#define DECLARED_PyvtkTypedArray_IlE_ClassNew
#endif

static const char *PyvtkSparseArray_IlE_Doc =
  "vtkSparseArray- Sparse, independent coordinate storage for N-way\narrays.\n\n"
  "Superclass: vtkTypedArray[int]\n\n"
  "vtkSparseArray is a concrete vtkArray implementation that stores\n"
  "values using sparse independent coordinate storage.  This means that\n"
  "the array stores the complete set of coordinates and the value for\n"
  "each non-null value in the array. While this approach requires\n"
  "slightly more storage than other sparse storage schemes (such as\n"
  "Compressed-Row or Compressed-Column), it is easier and more efficient\n"
  "to work with when implementing algorithms, and it generalizes well\n"
  "for arbitrary numbers of dimensions.\n\n"
  "In addition to the value retrieval and update methods provided by\n"
  "vtkTypedArray, vtkSparseArray provides methods to:\n\n"
  "Get and set a special 'null' value that will be returned when\n"
  "retrieving values for undefined coordinates.\n\n"
  "Clear the contents of the array so that every set of coordinates is\n"
  "undefined.\n\n"
  "Sort the array contents so that value coordinates can be visited in a\n"
  "specific order.\n\n"
  "Retrieve pointers to the value- and coordinate-storage memory blocks.\n\n"
  "Reserve storage for a specific number of non-null values, for\n"
  "efficiency when the number of non-null values is known in advance.\n\n"
  "Recompute the array extents so that they bound the largest set of\n"
  "non-nullptr values along each dimension.\n\n"
  "Specify arbitrary array extents.\n\n"
  "Add values to the array in amortized-constant time.\n\n"
  "Validate that the array does not contain duplicate coordinates.\n\n"
  "@sa\n"
  "vtkArray, vtkTypedArray, vtkDenseArray\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";


static PyObject *
PyvtkSparseArray_IlE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSparseArray<long>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IlE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSparseArray<long>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IlE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSparseArray<long> *tempr = vtkSparseArray<long>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IlE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSparseArray<long> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSparseArray<long>::NewInstance());

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
PyvtkSparseArray_IlE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkSparseArray<long>::IsDense());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IlE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkSparseArray<long>::GetExtents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IlE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkSparseArray<long>::GetNonNullSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IlE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

  unsigned long long temp0;
  vtkArrayCoordinates *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, "vtkArrayCoordinates"))
  {
    if (ap.IsBound())
    {
      op->GetCoordinatesN(temp0, *temp1);
    }
    else
    {
      op->vtkSparseArray<long>::GetCoordinatesN(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IlE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkSparseArray<long>::DeepCopy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IlE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const long *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkSparseArray<long>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IlE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const long *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkSparseArray<long>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IlE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    const long *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1, temp2) :
      &op->vtkSparseArray<long>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IlE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    const long *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkSparseArray<long>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IlE_GetValue_Methods[] = {
  {nullptr, PyvtkSparseArray_IlE_GetValue_s1, METH_VARARGS,
   "@k"},
  {nullptr, PyvtkSparseArray_IlE_GetValue_s4, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSparseArray_IlE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IlE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSparseArray_IlE_GetValue_s2(self, args);
    case 3:
      return PyvtkSparseArray_IlE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return nullptr;
}



static PyObject *
PyvtkSparseArray_IlE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const long *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkSparseArray<long>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IlE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

  vtkIdType temp0;
  long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<long>::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IlE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSparseArray<long>::SetValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IlE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  long temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkSparseArray<long>::SetValue(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IlE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(*temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<long>::SetValue(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IlE_SetValue_Methods[] = {
  {nullptr, PyvtkSparseArray_IlE_SetValue_s1, METH_VARARGS,
   "@kl"},
  {nullptr, PyvtkSparseArray_IlE_SetValue_s4, METH_VARARGS,
   "@Wl vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSparseArray_IlE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IlE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSparseArray_IlE_SetValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_IlE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return nullptr;
}



static PyObject *
PyvtkSparseArray_IlE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

  unsigned long long temp0;
  long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValueN(temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<long>::SetValueN(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IlE_SetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

  long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNullValue(temp0);
    }
    else
    {
      op->vtkSparseArray<long>::SetNullValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IlE_GetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const long *tempr = (ap.IsBound() ?
      &op->GetNullValue() :
      &op->vtkSparseArray<long>::GetNullValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IlE_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Clear();
    }
    else
    {
      op->vtkSparseArray<long>::Clear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IlE_Sort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Sort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

  vtkArraySort *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArraySort"))
  {
    if (ap.IsBound())
    {
      op->Sort(*temp0);
    }
    else
    {
      op->vtkSparseArray<long>::Sort(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_IlE_GetCoordinateStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType *tempr = (ap.IsBound() ?
      op->GetCoordinateStorage(temp0) :
      op->vtkSparseArray<long>::GetCoordinateStorage(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IlE_GetValueStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long *tempr = (ap.IsBound() ?
      op->GetValueStorage() :
      op->vtkSparseArray<long>::GetValueStorage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IlE_ReserveStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReserveStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ReserveStorage(temp0);
    }
    else
    {
      op->vtkSparseArray<long>::ReserveStorage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IlE_SetExtentsFromContents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtentsFromContents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtentsFromContents();
    }
    else
    {
      op->vtkSparseArray<long>::SetExtentsFromContents();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IlE_SetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

  vtkArrayExtents *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayExtents"))
  {
    if (ap.IsBound())
    {
      op->SetExtents(*temp0);
    }
    else
    {
      op->vtkSparseArray<long>::SetExtents(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_IlE_AddValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

  vtkIdType temp0;
  long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddValue(temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<long>::AddValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IlE_AddValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->AddValue(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSparseArray<long>::AddValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IlE_AddValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  long temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->AddValue(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkSparseArray<long>::AddValue(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IlE_AddValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddValue(*temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<long>::AddValue(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IlE_AddValue_Methods[] = {
  {nullptr, PyvtkSparseArray_IlE_AddValue_s1, METH_VARARGS,
   "@kl"},
  {nullptr, PyvtkSparseArray_IlE_AddValue_s4, METH_VARARGS,
   "@Wl vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSparseArray_IlE_AddValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IlE_AddValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSparseArray_IlE_AddValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_IlE_AddValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddValue");
  return nullptr;
}



static PyObject *
PyvtkSparseArray_IlE_Validate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Validate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long> *op = static_cast<vtkSparseArray<long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->Validate() :
      op->vtkSparseArray<long>::Validate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSparseArray_IlE_Methods[] = {
  {"IsTypeOf", PyvtkSparseArray_IlE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSparseArray_IlE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSparseArray_IlE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSparseArray_IlE\nC++: static vtkSparseArray<long> *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSparseArray_IlE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSparseArray_IlE\nC++: vtkSparseArray<long> *NewInstance()\n\n"},
  {"IsDense", PyvtkSparseArray_IlE_IsDense, METH_VARARGS,
   "V.IsDense() -> bool\nC++: bool IsDense() override;\n\nReturns true iff the underlying array storage is \"dense\", i.e.\nthat GetSize() and GetNonNullSize() will always return the same\nvalue. If not, the array is \"sparse\".\n"},
  {"GetExtents", PyvtkSparseArray_IlE_GetExtents, METH_VARARGS,
   "V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents() override;\n\nReturns the extents (the number of dimensions and size along each\ndimension) of the array.\n"},
  {"GetNonNullSize", PyvtkSparseArray_IlE_GetNonNullSize, METH_VARARGS,
   "V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize() override;\n\nReturns the number of non-null values stored in the array.  Note\nthat this value will equal GetSize() for dense arrays, and will\nbe less-than-or-equal to GetSize() for sparse arrays.\n"},
  {"GetCoordinatesN", PyvtkSparseArray_IlE_GetCoordinatesN, METH_VARARGS,
   "V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates) override;\n\nReturns the coordinates of the n-th value in the array, where n\nis in the range [0, GetNonNullSize()).  Note that the order in\nwhich coordinates are visited is undefined, but is guaranteed to\nmatch the order in which values are visited using\nvtkTypedArray::GetValueN() and vtkTypedArray::SetValueN().\n"},
  {"DeepCopy", PyvtkSparseArray_IlE_DeepCopy, METH_VARARGS,
   "V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy() override;\n\nReturns a new array that is a deep copy of this array.\n"},
  {"GetValue", PyvtkSparseArray_IlE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> int\nC++: const long &GetValue(CoordinateT i) override;\nV.GetValue(int, int) -> int\nC++: const long &GetValue(CoordinateT i, CoordinateT j) override;\nV.GetValue(int, int, int) -> int\nC++: const long &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k) override;\nV.GetValue(vtkArrayCoordinates) -> int\nC++: const long &GetValue(const vtkArrayCoordinates &coordinates)\n    override;\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetValueN", PyvtkSparseArray_IlE_GetValueN, METH_VARARGS,
   "V.GetValueN(int) -> int\nC++: const long &GetValueN(const SizeT n) override;\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetValue", PyvtkSparseArray_IlE_SetValue, METH_VARARGS,
   "V.SetValue(int, int)\nC++: void SetValue(CoordinateT i, const long &value) override;\nV.SetValue(int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const long &value) override;\nV.SetValue(int, int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const long &value) override;\nV.SetValue(vtkArrayCoordinates, int)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const long &value) override;\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetValueN", PyvtkSparseArray_IlE_SetValueN, METH_VARARGS,
   "V.SetValueN(int, int)\nC++: void SetValueN(const SizeT n, const long &value) override;\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetNullValue", PyvtkSparseArray_IlE_SetNullValue, METH_VARARGS,
   "V.SetNullValue(int)\nC++: void SetNullValue(const long &value)\n\nSet the value that will be returned by GetValue() for nullptr\nareas of the array.\n"},
  {"GetNullValue", PyvtkSparseArray_IlE_GetNullValue, METH_VARARGS,
   "V.GetNullValue() -> int\nC++: const long &GetNullValue()\n\nReturns the value that will be returned by GetValue() for nullptr\nareas of the array.\n"},
  {"Clear", PyvtkSparseArray_IlE_Clear, METH_VARARGS,
   "V.Clear()\nC++: void Clear()\n\nRemove all non-null elements from the array, leaving the number\nof dimensions, the extent of each dimension, and the label for\neach dimension unchanged.\n"},
  {"Sort", PyvtkSparseArray_IlE_Sort, METH_VARARGS,
   "V.Sort(vtkArraySort)\nC++: void Sort(const vtkArraySort &sort)\n\nSorts array values so that their coordinates appear in some\nwell-defined order. The supplied vtkArraySort object controls\nwhich dimensions are sorted, and in what order, and should\ncontain one-or-more sort dimensions, up to the number of\ndimensions stored in the array.\n"},
  {"GetCoordinateStorage", PyvtkSparseArray_IlE_GetCoordinateStorage, METH_VARARGS,
   "V.GetCoordinateStorage(int) -> (int, ...)\nC++: CoordinateT *GetCoordinateStorage(DimensionT dimension)\n\nReturn a mutable reference to the underlying coordinate storage. \nCoordinates for each dimension are stored contiguously as a\none-dimensional array.  The ordering of coordinates within the\narray depends on the order in which values were added to the\narray, and any subsequent sorting.  Use at your own risk!\n"},
  {"GetValueStorage", PyvtkSparseArray_IlE_GetValueStorage, METH_VARARGS,
   "V.GetValueStorage() -> (int, ...)\nC++: long *GetValueStorage()\n\nReturn a mutable reference to the underlying value storage. \nValues are stored contiguously, but in arbitrary order.  Use\nGetCoordinateStorage() if you need to get the corresponding\ncoordinates for a value.  Use at your own risk!\n"},
  {"ReserveStorage", PyvtkSparseArray_IlE_ReserveStorage, METH_VARARGS,
   "V.ReserveStorage(int)\nC++: void ReserveStorage(const SizeT value_count)\n\nReserve storage for a specific number of values.  This is useful\nfor reading external data using GetCoordinateStorage() and\nGetValueStorage(), when the total number of non-nullptr values in\nthe array can be determined in advance.  Note that after calling\nReserveStorage(), all coordinates and values will be undefined,\nso you must ensure that every set of coordinates and values is\noverwritten.  It is the caller's responsibility to ensure that\nduplicate coordinates are not inserted into the array.\n"},
  {"SetExtentsFromContents", PyvtkSparseArray_IlE_SetExtentsFromContents, METH_VARARGS,
   "V.SetExtentsFromContents()\nC++: void SetExtentsFromContents()\n\nUpdate the array extents to match its contents, so that the\nextent along each dimension matches the maximum index value along\nthat dimension.\n"},
  {"SetExtents", PyvtkSparseArray_IlE_SetExtents, METH_VARARGS,
   "V.SetExtents(vtkArrayExtents)\nC++: void SetExtents(const vtkArrayExtents &extents)\n\nSpecify arbitrary array extents, without altering the contents of\nthe array.  Note that the extents must be as-large-or-larger-than\nthe extents of the actual values stored in the array.  The number\nof dimensions in the supplied extents must match the number of\ndimensions currently stored in the array.\n"},
  {"AddValue", PyvtkSparseArray_IlE_AddValue, METH_VARARGS,
   "V.AddValue(int, int)\nC++: void AddValue(CoordinateT i, const long &value)\nV.AddValue(int, int, int)\nC++: void AddValue(CoordinateT i, CoordinateT j,\n    const long &value)\nV.AddValue(int, int, int, int)\nC++: void AddValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const long &value)\nV.AddValue(vtkArrayCoordinates, int)\nC++: void AddValue(const vtkArrayCoordinates &coordinates,\n    const long &value)\n\nAdds a new non-null element to the array.  Does not test to see\nif an element with matching coordinates already exists.  Useful\nfor providing fast initialization of the array as long as the\ncaller is prepared to guarantee that no duplicate coordinates are\never used.\n"},
  {"Validate", PyvtkSparseArray_IlE_Validate, METH_VARARGS,
   "V.Validate() -> bool\nC++: bool Validate()\n\nValidate the contents of the array, returning false if there are\nany problems. Potential problems include duplicate coordinates,\nwhich can be introduced into the array either through AddValue()\nor direct access to coordinates storage; and coordinates\nout-of-bounds given the current array extents.\n\n* Note that Validate() is a heavyweight O(N log N) operation that\nis intended for\n* temporary use during debugging.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSparseArray_IlE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkSparseArray_IlE", // tp_name
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
  PyvtkSparseArray_IlE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSparseArray_IlE_StaticNew()
{
  return vtkSparseArray<long>::New();
}

PyObject *PyvtkSparseArray_IlE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSparseArray_IlE_Type, PyvtkSparseArray_IlE_Methods,
    typeid(vtkSparseArray<long>).name(),
 &PyvtkSparseArray_IlE_StaticNew);

  PyTypeObject *pytype = &PyvtkSparseArray_IlE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkTypedArray_IlE_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSparseArray_ImE_ClassNew(); }

#ifndef DECLARED_PyvtkTypedArray_ImE_ClassNew
extern "C" { PyObject *PyvtkTypedArray_ImE_ClassNew(); }
#define DECLARED_PyvtkTypedArray_ImE_ClassNew
#endif

static const char *PyvtkSparseArray_ImE_Doc =
  "vtkSparseArray<unsigned long> - Sparse, independent coordinate\nstorage for N-way arrays.\n\n"
  "Superclass: vtkTypedArray[uint]\n\n"
  "vtkSparseArray is a concrete vtkArray implementation that stores\n"
  "values using sparse independent coordinate storage.  This means that\n"
  "the array stores the complete set of coordinates and the value for\n"
  "each non-null value in the array. While this approach requires\n"
  "slightly more storage than other sparse storage schemes (such as\n"
  "Compressed-Row or Compressed-Column), it is easier and more efficient\n"
  "to work with when implementing algorithms, and it generalizes well\n"
  "for arbitrary numbers of dimensions.\n\n"
  "In addition to the value retrieval and update methods provided by\n"
  "vtkTypedArray, vtkSparseArray provides methods to:\n\n"
  "Get and set a special 'null' value that will be returned when\n"
  "retrieving values for undefined coordinates.\n\n"
  "Clear the contents of the array so that every set of coordinates is\n"
  "undefined.\n\n"
  "Sort the array contents so that value coordinates can be visited in a\n"
  "specific order.\n\n"
  "Retrieve pointers to the value- and coordinate-storage memory blocks.\n\n"
  "Reserve storage for a specific number of non-null values, for\n"
  "efficiency when the number of non-null values is known in advance.\n\n"
  "Recompute the array extents so that they bound the largest set of\n"
  "non-nullptr values along each dimension.\n\n"
  "Specify arbitrary array extents.\n\n"
  "Add values to the array in amortized-constant time.\n\n"
  "Validate that the array does not contain duplicate coordinates.\n\n"
  "@sa\n"
  "vtkArray, vtkTypedArray, vtkDenseArray\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";


static PyObject *
PyvtkSparseArray_ImE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSparseArray<unsigned long>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_ImE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSparseArray<unsigned long>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_ImE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSparseArray<unsigned long> *tempr = vtkSparseArray<unsigned long>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_ImE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSparseArray<unsigned long> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSparseArray<unsigned long>::NewInstance());

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
PyvtkSparseArray_ImE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkSparseArray<unsigned long>::IsDense());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_ImE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkSparseArray<unsigned long>::GetExtents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_ImE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkSparseArray<unsigned long>::GetNonNullSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_ImE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

  unsigned long long temp0;
  vtkArrayCoordinates *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, "vtkArrayCoordinates"))
  {
    if (ap.IsBound())
    {
      op->GetCoordinatesN(temp0, *temp1);
    }
    else
    {
      op->vtkSparseArray<unsigned long>::GetCoordinatesN(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_ImE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkSparseArray<unsigned long>::DeepCopy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_ImE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const unsigned long *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkSparseArray<unsigned long>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_ImE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const unsigned long *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkSparseArray<unsigned long>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_ImE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    const unsigned long *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1, temp2) :
      &op->vtkSparseArray<unsigned long>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_ImE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    const unsigned long *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkSparseArray<unsigned long>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_ImE_GetValue_Methods[] = {
  {nullptr, PyvtkSparseArray_ImE_GetValue_s1, METH_VARARGS,
   "@k"},
  {nullptr, PyvtkSparseArray_ImE_GetValue_s4, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSparseArray_ImE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_ImE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSparseArray_ImE_GetValue_s2(self, args);
    case 3:
      return PyvtkSparseArray_ImE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return nullptr;
}



static PyObject *
PyvtkSparseArray_ImE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const unsigned long *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkSparseArray<unsigned long>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_ImE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

  vtkIdType temp0;
  unsigned long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<unsigned long>::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_ImE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  unsigned long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSparseArray<unsigned long>::SetValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_ImE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  unsigned long temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkSparseArray<unsigned long>::SetValue(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_ImE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  unsigned long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(*temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<unsigned long>::SetValue(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_ImE_SetValue_Methods[] = {
  {nullptr, PyvtkSparseArray_ImE_SetValue_s1, METH_VARARGS,
   "@kL"},
  {nullptr, PyvtkSparseArray_ImE_SetValue_s4, METH_VARARGS,
   "@WL vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSparseArray_ImE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_ImE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSparseArray_ImE_SetValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_ImE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return nullptr;
}



static PyObject *
PyvtkSparseArray_ImE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

  unsigned long long temp0;
  unsigned long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValueN(temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<unsigned long>::SetValueN(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_ImE_SetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

  unsigned long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNullValue(temp0);
    }
    else
    {
      op->vtkSparseArray<unsigned long>::SetNullValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_ImE_GetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const unsigned long *tempr = (ap.IsBound() ?
      &op->GetNullValue() :
      &op->vtkSparseArray<unsigned long>::GetNullValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_ImE_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Clear();
    }
    else
    {
      op->vtkSparseArray<unsigned long>::Clear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_ImE_Sort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Sort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

  vtkArraySort *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArraySort"))
  {
    if (ap.IsBound())
    {
      op->Sort(*temp0);
    }
    else
    {
      op->vtkSparseArray<unsigned long>::Sort(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_ImE_GetCoordinateStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType *tempr = (ap.IsBound() ?
      op->GetCoordinateStorage(temp0) :
      op->vtkSparseArray<unsigned long>::GetCoordinateStorage(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_ImE_GetValueStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long *tempr = (ap.IsBound() ?
      op->GetValueStorage() :
      op->vtkSparseArray<unsigned long>::GetValueStorage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_ImE_ReserveStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReserveStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ReserveStorage(temp0);
    }
    else
    {
      op->vtkSparseArray<unsigned long>::ReserveStorage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_ImE_SetExtentsFromContents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtentsFromContents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtentsFromContents();
    }
    else
    {
      op->vtkSparseArray<unsigned long>::SetExtentsFromContents();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_ImE_SetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

  vtkArrayExtents *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayExtents"))
  {
    if (ap.IsBound())
    {
      op->SetExtents(*temp0);
    }
    else
    {
      op->vtkSparseArray<unsigned long>::SetExtents(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_ImE_AddValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

  vtkIdType temp0;
  unsigned long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddValue(temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<unsigned long>::AddValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_ImE_AddValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  unsigned long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->AddValue(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSparseArray<unsigned long>::AddValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_ImE_AddValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  unsigned long temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->AddValue(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkSparseArray<unsigned long>::AddValue(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_ImE_AddValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  unsigned long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddValue(*temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<unsigned long>::AddValue(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_ImE_AddValue_Methods[] = {
  {nullptr, PyvtkSparseArray_ImE_AddValue_s1, METH_VARARGS,
   "@kL"},
  {nullptr, PyvtkSparseArray_ImE_AddValue_s4, METH_VARARGS,
   "@WL vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSparseArray_ImE_AddValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_ImE_AddValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSparseArray_ImE_AddValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_ImE_AddValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddValue");
  return nullptr;
}



static PyObject *
PyvtkSparseArray_ImE_Validate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Validate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long> *op = static_cast<vtkSparseArray<unsigned long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->Validate() :
      op->vtkSparseArray<unsigned long>::Validate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSparseArray_ImE_Methods[] = {
  {"IsTypeOf", PyvtkSparseArray_ImE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSparseArray_ImE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSparseArray_ImE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSparseArray_ImE\nC++: static vtkSparseArray<unsigned long> *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSparseArray_ImE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSparseArray_ImE\nC++: vtkSparseArray<unsigned long> *NewInstance()\n\n"},
  {"IsDense", PyvtkSparseArray_ImE_IsDense, METH_VARARGS,
   "V.IsDense() -> bool\nC++: bool IsDense() override;\n\nReturns true iff the underlying array storage is \"dense\", i.e.\nthat GetSize() and GetNonNullSize() will always return the same\nvalue. If not, the array is \"sparse\".\n"},
  {"GetExtents", PyvtkSparseArray_ImE_GetExtents, METH_VARARGS,
   "V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents() override;\n\nReturns the extents (the number of dimensions and size along each\ndimension) of the array.\n"},
  {"GetNonNullSize", PyvtkSparseArray_ImE_GetNonNullSize, METH_VARARGS,
   "V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize() override;\n\nReturns the number of non-null values stored in the array.  Note\nthat this value will equal GetSize() for dense arrays, and will\nbe less-than-or-equal to GetSize() for sparse arrays.\n"},
  {"GetCoordinatesN", PyvtkSparseArray_ImE_GetCoordinatesN, METH_VARARGS,
   "V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates) override;\n\nReturns the coordinates of the n-th value in the array, where n\nis in the range [0, GetNonNullSize()).  Note that the order in\nwhich coordinates are visited is undefined, but is guaranteed to\nmatch the order in which values are visited using\nvtkTypedArray::GetValueN() and vtkTypedArray::SetValueN().\n"},
  {"DeepCopy", PyvtkSparseArray_ImE_DeepCopy, METH_VARARGS,
   "V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy() override;\n\nReturns a new array that is a deep copy of this array.\n"},
  {"GetValue", PyvtkSparseArray_ImE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> int\nC++: const unsigned long &GetValue(CoordinateT i) override;\nV.GetValue(int, int) -> int\nC++: const unsigned long &GetValue(CoordinateT i, CoordinateT j)\n    override;\nV.GetValue(int, int, int) -> int\nC++: const unsigned long &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k) override;\nV.GetValue(vtkArrayCoordinates) -> int\nC++: const unsigned long &GetValue(\n    const vtkArrayCoordinates &coordinates) override;\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetValueN", PyvtkSparseArray_ImE_GetValueN, METH_VARARGS,
   "V.GetValueN(int) -> int\nC++: const unsigned long &GetValueN(const SizeT n) override;\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetValue", PyvtkSparseArray_ImE_SetValue, METH_VARARGS,
   "V.SetValue(int, int)\nC++: void SetValue(CoordinateT i, const unsigned long &value)\n    override;\nV.SetValue(int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const unsigned long &value) override;\nV.SetValue(int, int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const unsigned long &value) override;\nV.SetValue(vtkArrayCoordinates, int)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const unsigned long &value) override;\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetValueN", PyvtkSparseArray_ImE_SetValueN, METH_VARARGS,
   "V.SetValueN(int, int)\nC++: void SetValueN(const SizeT n, const unsigned long &value)\n    override;\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetNullValue", PyvtkSparseArray_ImE_SetNullValue, METH_VARARGS,
   "V.SetNullValue(int)\nC++: void SetNullValue(const unsigned long &value)\n\nSet the value that will be returned by GetValue() for nullptr\nareas of the array.\n"},
  {"GetNullValue", PyvtkSparseArray_ImE_GetNullValue, METH_VARARGS,
   "V.GetNullValue() -> int\nC++: const unsigned long &GetNullValue()\n\nReturns the value that will be returned by GetValue() for nullptr\nareas of the array.\n"},
  {"Clear", PyvtkSparseArray_ImE_Clear, METH_VARARGS,
   "V.Clear()\nC++: void Clear()\n\nRemove all non-null elements from the array, leaving the number\nof dimensions, the extent of each dimension, and the label for\neach dimension unchanged.\n"},
  {"Sort", PyvtkSparseArray_ImE_Sort, METH_VARARGS,
   "V.Sort(vtkArraySort)\nC++: void Sort(const vtkArraySort &sort)\n\nSorts array values so that their coordinates appear in some\nwell-defined order. The supplied vtkArraySort object controls\nwhich dimensions are sorted, and in what order, and should\ncontain one-or-more sort dimensions, up to the number of\ndimensions stored in the array.\n"},
  {"GetCoordinateStorage", PyvtkSparseArray_ImE_GetCoordinateStorage, METH_VARARGS,
   "V.GetCoordinateStorage(int) -> (int, ...)\nC++: CoordinateT *GetCoordinateStorage(DimensionT dimension)\n\nReturn a mutable reference to the underlying coordinate storage. \nCoordinates for each dimension are stored contiguously as a\none-dimensional array.  The ordering of coordinates within the\narray depends on the order in which values were added to the\narray, and any subsequent sorting.  Use at your own risk!\n"},
  {"GetValueStorage", PyvtkSparseArray_ImE_GetValueStorage, METH_VARARGS,
   "V.GetValueStorage() -> (int, ...)\nC++: unsigned long *GetValueStorage()\n\nReturn a mutable reference to the underlying value storage. \nValues are stored contiguously, but in arbitrary order.  Use\nGetCoordinateStorage() if you need to get the corresponding\ncoordinates for a value.  Use at your own risk!\n"},
  {"ReserveStorage", PyvtkSparseArray_ImE_ReserveStorage, METH_VARARGS,
   "V.ReserveStorage(int)\nC++: void ReserveStorage(const SizeT value_count)\n\nReserve storage for a specific number of values.  This is useful\nfor reading external data using GetCoordinateStorage() and\nGetValueStorage(), when the total number of non-nullptr values in\nthe array can be determined in advance.  Note that after calling\nReserveStorage(), all coordinates and values will be undefined,\nso you must ensure that every set of coordinates and values is\noverwritten.  It is the caller's responsibility to ensure that\nduplicate coordinates are not inserted into the array.\n"},
  {"SetExtentsFromContents", PyvtkSparseArray_ImE_SetExtentsFromContents, METH_VARARGS,
   "V.SetExtentsFromContents()\nC++: void SetExtentsFromContents()\n\nUpdate the array extents to match its contents, so that the\nextent along each dimension matches the maximum index value along\nthat dimension.\n"},
  {"SetExtents", PyvtkSparseArray_ImE_SetExtents, METH_VARARGS,
   "V.SetExtents(vtkArrayExtents)\nC++: void SetExtents(const vtkArrayExtents &extents)\n\nSpecify arbitrary array extents, without altering the contents of\nthe array.  Note that the extents must be as-large-or-larger-than\nthe extents of the actual values stored in the array.  The number\nof dimensions in the supplied extents must match the number of\ndimensions currently stored in the array.\n"},
  {"AddValue", PyvtkSparseArray_ImE_AddValue, METH_VARARGS,
   "V.AddValue(int, int)\nC++: void AddValue(CoordinateT i, const unsigned long &value)\nV.AddValue(int, int, int)\nC++: void AddValue(CoordinateT i, CoordinateT j,\n    const unsigned long &value)\nV.AddValue(int, int, int, int)\nC++: void AddValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const unsigned long &value)\nV.AddValue(vtkArrayCoordinates, int)\nC++: void AddValue(const vtkArrayCoordinates &coordinates,\n    const unsigned long &value)\n\nAdds a new non-null element to the array.  Does not test to see\nif an element with matching coordinates already exists.  Useful\nfor providing fast initialization of the array as long as the\ncaller is prepared to guarantee that no duplicate coordinates are\never used.\n"},
  {"Validate", PyvtkSparseArray_ImE_Validate, METH_VARARGS,
   "V.Validate() -> bool\nC++: bool Validate()\n\nValidate the contents of the array, returning false if there are\nany problems. Potential problems include duplicate coordinates,\nwhich can be introduced into the array either through AddValue()\nor direct access to coordinates storage; and coordinates\nout-of-bounds given the current array extents.\n\n* Note that Validate() is a heavyweight O(N log N) operation that\nis intended for\n* temporary use during debugging.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSparseArray_ImE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkSparseArray_ImE", // tp_name
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
  PyvtkSparseArray_ImE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSparseArray_ImE_StaticNew()
{
  return vtkSparseArray<unsigned long>::New();
}

PyObject *PyvtkSparseArray_ImE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSparseArray_ImE_Type, PyvtkSparseArray_ImE_Methods,
    typeid(vtkSparseArray<unsigned long>).name(),
 &PyvtkSparseArray_ImE_StaticNew);

  PyTypeObject *pytype = &PyvtkSparseArray_ImE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkTypedArray_ImE_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSparseArray_IxE_ClassNew(); }

#ifndef DECLARED_PyvtkTypedArray_IxE_ClassNew
extern "C" { PyObject *PyvtkTypedArray_IxE_ClassNew(); }
#define DECLARED_PyvtkTypedArray_IxE_ClassNew
#endif

static const char *PyvtkSparseArray_IxE_Doc =
  "vtkSparseArray<long long> - Sparse, independent coordinate storage\nfor N-way arrays.\n\n"
  "Superclass: vtkTypedArray[int64]\n\n"
  "vtkSparseArray is a concrete vtkArray implementation that stores\n"
  "values using sparse independent coordinate storage.  This means that\n"
  "the array stores the complete set of coordinates and the value for\n"
  "each non-null value in the array. While this approach requires\n"
  "slightly more storage than other sparse storage schemes (such as\n"
  "Compressed-Row or Compressed-Column), it is easier and more efficient\n"
  "to work with when implementing algorithms, and it generalizes well\n"
  "for arbitrary numbers of dimensions.\n\n"
  "In addition to the value retrieval and update methods provided by\n"
  "vtkTypedArray, vtkSparseArray provides methods to:\n\n"
  "Get and set a special 'null' value that will be returned when\n"
  "retrieving values for undefined coordinates.\n\n"
  "Clear the contents of the array so that every set of coordinates is\n"
  "undefined.\n\n"
  "Sort the array contents so that value coordinates can be visited in a\n"
  "specific order.\n\n"
  "Retrieve pointers to the value- and coordinate-storage memory blocks.\n\n"
  "Reserve storage for a specific number of non-null values, for\n"
  "efficiency when the number of non-null values is known in advance.\n\n"
  "Recompute the array extents so that they bound the largest set of\n"
  "non-nullptr values along each dimension.\n\n"
  "Specify arbitrary array extents.\n\n"
  "Add values to the array in amortized-constant time.\n\n"
  "Validate that the array does not contain duplicate coordinates.\n\n"
  "@sa\n"
  "vtkArray, vtkTypedArray, vtkDenseArray\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";


static PyObject *
PyvtkSparseArray_IxE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSparseArray<long long>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IxE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSparseArray<long long>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IxE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSparseArray<long long> *tempr = vtkSparseArray<long long>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IxE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSparseArray<long long> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSparseArray<long long>::NewInstance());

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
PyvtkSparseArray_IxE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkSparseArray<long long>::IsDense());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IxE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkSparseArray<long long>::GetExtents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IxE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkSparseArray<long long>::GetNonNullSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IxE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

  unsigned long long temp0;
  vtkArrayCoordinates *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, "vtkArrayCoordinates"))
  {
    if (ap.IsBound())
    {
      op->GetCoordinatesN(temp0, *temp1);
    }
    else
    {
      op->vtkSparseArray<long long>::GetCoordinatesN(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IxE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkSparseArray<long long>::DeepCopy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IxE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const long long *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkSparseArray<long long>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IxE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const long long *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkSparseArray<long long>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IxE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    const long long *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1, temp2) :
      &op->vtkSparseArray<long long>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IxE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    const long long *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkSparseArray<long long>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IxE_GetValue_Methods[] = {
  {nullptr, PyvtkSparseArray_IxE_GetValue_s1, METH_VARARGS,
   "@k"},
  {nullptr, PyvtkSparseArray_IxE_GetValue_s4, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSparseArray_IxE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IxE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSparseArray_IxE_GetValue_s2(self, args);
    case 3:
      return PyvtkSparseArray_IxE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return nullptr;
}



static PyObject *
PyvtkSparseArray_IxE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const long long *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkSparseArray<long long>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IxE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

  vtkIdType temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<long long>::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IxE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  long long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSparseArray<long long>::SetValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IxE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  long long temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkSparseArray<long long>::SetValue(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IxE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(*temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<long long>::SetValue(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IxE_SetValue_Methods[] = {
  {nullptr, PyvtkSparseArray_IxE_SetValue_s1, METH_VARARGS,
   "@kk"},
  {nullptr, PyvtkSparseArray_IxE_SetValue_s4, METH_VARARGS,
   "@Wk vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSparseArray_IxE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IxE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSparseArray_IxE_SetValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_IxE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return nullptr;
}



static PyObject *
PyvtkSparseArray_IxE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

  unsigned long long temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValueN(temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<long long>::SetValueN(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IxE_SetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNullValue(temp0);
    }
    else
    {
      op->vtkSparseArray<long long>::SetNullValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IxE_GetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const long long *tempr = (ap.IsBound() ?
      &op->GetNullValue() :
      &op->vtkSparseArray<long long>::GetNullValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IxE_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Clear();
    }
    else
    {
      op->vtkSparseArray<long long>::Clear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IxE_Sort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Sort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

  vtkArraySort *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArraySort"))
  {
    if (ap.IsBound())
    {
      op->Sort(*temp0);
    }
    else
    {
      op->vtkSparseArray<long long>::Sort(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_IxE_GetCoordinateStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType *tempr = (ap.IsBound() ?
      op->GetCoordinateStorage(temp0) :
      op->vtkSparseArray<long long>::GetCoordinateStorage(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IxE_GetValueStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long *tempr = (ap.IsBound() ?
      op->GetValueStorage() :
      op->vtkSparseArray<long long>::GetValueStorage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IxE_ReserveStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReserveStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ReserveStorage(temp0);
    }
    else
    {
      op->vtkSparseArray<long long>::ReserveStorage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IxE_SetExtentsFromContents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtentsFromContents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtentsFromContents();
    }
    else
    {
      op->vtkSparseArray<long long>::SetExtentsFromContents();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IxE_SetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

  vtkArrayExtents *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayExtents"))
  {
    if (ap.IsBound())
    {
      op->SetExtents(*temp0);
    }
    else
    {
      op->vtkSparseArray<long long>::SetExtents(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_IxE_AddValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

  vtkIdType temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddValue(temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<long long>::AddValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IxE_AddValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  long long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->AddValue(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSparseArray<long long>::AddValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IxE_AddValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  long long temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->AddValue(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkSparseArray<long long>::AddValue(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IxE_AddValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddValue(*temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<long long>::AddValue(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IxE_AddValue_Methods[] = {
  {nullptr, PyvtkSparseArray_IxE_AddValue_s1, METH_VARARGS,
   "@kk"},
  {nullptr, PyvtkSparseArray_IxE_AddValue_s4, METH_VARARGS,
   "@Wk vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSparseArray_IxE_AddValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IxE_AddValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSparseArray_IxE_AddValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_IxE_AddValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddValue");
  return nullptr;
}



static PyObject *
PyvtkSparseArray_IxE_Validate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Validate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<long long> *op = static_cast<vtkSparseArray<long long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->Validate() :
      op->vtkSparseArray<long long>::Validate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSparseArray_IxE_Methods[] = {
  {"IsTypeOf", PyvtkSparseArray_IxE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSparseArray_IxE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSparseArray_IxE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSparseArray_IxE\nC++: static vtkSparseArray<long long> *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSparseArray_IxE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSparseArray_IxE\nC++: vtkSparseArray<long long> *NewInstance()\n\n"},
  {"IsDense", PyvtkSparseArray_IxE_IsDense, METH_VARARGS,
   "V.IsDense() -> bool\nC++: bool IsDense() override;\n\nReturns true iff the underlying array storage is \"dense\", i.e.\nthat GetSize() and GetNonNullSize() will always return the same\nvalue. If not, the array is \"sparse\".\n"},
  {"GetExtents", PyvtkSparseArray_IxE_GetExtents, METH_VARARGS,
   "V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents() override;\n\nReturns the extents (the number of dimensions and size along each\ndimension) of the array.\n"},
  {"GetNonNullSize", PyvtkSparseArray_IxE_GetNonNullSize, METH_VARARGS,
   "V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize() override;\n\nReturns the number of non-null values stored in the array.  Note\nthat this value will equal GetSize() for dense arrays, and will\nbe less-than-or-equal to GetSize() for sparse arrays.\n"},
  {"GetCoordinatesN", PyvtkSparseArray_IxE_GetCoordinatesN, METH_VARARGS,
   "V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates) override;\n\nReturns the coordinates of the n-th value in the array, where n\nis in the range [0, GetNonNullSize()).  Note that the order in\nwhich coordinates are visited is undefined, but is guaranteed to\nmatch the order in which values are visited using\nvtkTypedArray::GetValueN() and vtkTypedArray::SetValueN().\n"},
  {"DeepCopy", PyvtkSparseArray_IxE_DeepCopy, METH_VARARGS,
   "V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy() override;\n\nReturns a new array that is a deep copy of this array.\n"},
  {"GetValue", PyvtkSparseArray_IxE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> int\nC++: const long long &GetValue(CoordinateT i) override;\nV.GetValue(int, int) -> int\nC++: const long long &GetValue(CoordinateT i, CoordinateT j)\n    override;\nV.GetValue(int, int, int) -> int\nC++: const long long &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k) override;\nV.GetValue(vtkArrayCoordinates) -> int\nC++: const long long &GetValue(\n    const vtkArrayCoordinates &coordinates) override;\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetValueN", PyvtkSparseArray_IxE_GetValueN, METH_VARARGS,
   "V.GetValueN(int) -> int\nC++: const long long &GetValueN(const SizeT n) override;\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetValue", PyvtkSparseArray_IxE_SetValue, METH_VARARGS,
   "V.SetValue(int, int)\nC++: void SetValue(CoordinateT i, const long long &value)\n    override;\nV.SetValue(int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const long long &value) override;\nV.SetValue(int, int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const long long &value) override;\nV.SetValue(vtkArrayCoordinates, int)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const long long &value) override;\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetValueN", PyvtkSparseArray_IxE_SetValueN, METH_VARARGS,
   "V.SetValueN(int, int)\nC++: void SetValueN(const SizeT n, const long long &value)\n    override;\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetNullValue", PyvtkSparseArray_IxE_SetNullValue, METH_VARARGS,
   "V.SetNullValue(int)\nC++: void SetNullValue(const long long &value)\n\nSet the value that will be returned by GetValue() for nullptr\nareas of the array.\n"},
  {"GetNullValue", PyvtkSparseArray_IxE_GetNullValue, METH_VARARGS,
   "V.GetNullValue() -> int\nC++: const long long &GetNullValue()\n\nReturns the value that will be returned by GetValue() for nullptr\nareas of the array.\n"},
  {"Clear", PyvtkSparseArray_IxE_Clear, METH_VARARGS,
   "V.Clear()\nC++: void Clear()\n\nRemove all non-null elements from the array, leaving the number\nof dimensions, the extent of each dimension, and the label for\neach dimension unchanged.\n"},
  {"Sort", PyvtkSparseArray_IxE_Sort, METH_VARARGS,
   "V.Sort(vtkArraySort)\nC++: void Sort(const vtkArraySort &sort)\n\nSorts array values so that their coordinates appear in some\nwell-defined order. The supplied vtkArraySort object controls\nwhich dimensions are sorted, and in what order, and should\ncontain one-or-more sort dimensions, up to the number of\ndimensions stored in the array.\n"},
  {"GetCoordinateStorage", PyvtkSparseArray_IxE_GetCoordinateStorage, METH_VARARGS,
   "V.GetCoordinateStorage(int) -> (int, ...)\nC++: CoordinateT *GetCoordinateStorage(DimensionT dimension)\n\nReturn a mutable reference to the underlying coordinate storage. \nCoordinates for each dimension are stored contiguously as a\none-dimensional array.  The ordering of coordinates within the\narray depends on the order in which values were added to the\narray, and any subsequent sorting.  Use at your own risk!\n"},
  {"GetValueStorage", PyvtkSparseArray_IxE_GetValueStorage, METH_VARARGS,
   "V.GetValueStorage() -> (int, ...)\nC++: long long *GetValueStorage()\n\nReturn a mutable reference to the underlying value storage. \nValues are stored contiguously, but in arbitrary order.  Use\nGetCoordinateStorage() if you need to get the corresponding\ncoordinates for a value.  Use at your own risk!\n"},
  {"ReserveStorage", PyvtkSparseArray_IxE_ReserveStorage, METH_VARARGS,
   "V.ReserveStorage(int)\nC++: void ReserveStorage(const SizeT value_count)\n\nReserve storage for a specific number of values.  This is useful\nfor reading external data using GetCoordinateStorage() and\nGetValueStorage(), when the total number of non-nullptr values in\nthe array can be determined in advance.  Note that after calling\nReserveStorage(), all coordinates and values will be undefined,\nso you must ensure that every set of coordinates and values is\noverwritten.  It is the caller's responsibility to ensure that\nduplicate coordinates are not inserted into the array.\n"},
  {"SetExtentsFromContents", PyvtkSparseArray_IxE_SetExtentsFromContents, METH_VARARGS,
   "V.SetExtentsFromContents()\nC++: void SetExtentsFromContents()\n\nUpdate the array extents to match its contents, so that the\nextent along each dimension matches the maximum index value along\nthat dimension.\n"},
  {"SetExtents", PyvtkSparseArray_IxE_SetExtents, METH_VARARGS,
   "V.SetExtents(vtkArrayExtents)\nC++: void SetExtents(const vtkArrayExtents &extents)\n\nSpecify arbitrary array extents, without altering the contents of\nthe array.  Note that the extents must be as-large-or-larger-than\nthe extents of the actual values stored in the array.  The number\nof dimensions in the supplied extents must match the number of\ndimensions currently stored in the array.\n"},
  {"AddValue", PyvtkSparseArray_IxE_AddValue, METH_VARARGS,
   "V.AddValue(int, int)\nC++: void AddValue(CoordinateT i, const long long &value)\nV.AddValue(int, int, int)\nC++: void AddValue(CoordinateT i, CoordinateT j,\n    const long long &value)\nV.AddValue(int, int, int, int)\nC++: void AddValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const long long &value)\nV.AddValue(vtkArrayCoordinates, int)\nC++: void AddValue(const vtkArrayCoordinates &coordinates,\n    const long long &value)\n\nAdds a new non-null element to the array.  Does not test to see\nif an element with matching coordinates already exists.  Useful\nfor providing fast initialization of the array as long as the\ncaller is prepared to guarantee that no duplicate coordinates are\never used.\n"},
  {"Validate", PyvtkSparseArray_IxE_Validate, METH_VARARGS,
   "V.Validate() -> bool\nC++: bool Validate()\n\nValidate the contents of the array, returning false if there are\nany problems. Potential problems include duplicate coordinates,\nwhich can be introduced into the array either through AddValue()\nor direct access to coordinates storage; and coordinates\nout-of-bounds given the current array extents.\n\n* Note that Validate() is a heavyweight O(N log N) operation that\nis intended for\n* temporary use during debugging.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSparseArray_IxE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkSparseArray_IxE", // tp_name
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
  PyvtkSparseArray_IxE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSparseArray_IxE_StaticNew()
{
  return vtkSparseArray<long long>::New();
}

PyObject *PyvtkSparseArray_IxE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSparseArray_IxE_Type, PyvtkSparseArray_IxE_Methods,
    typeid(vtkSparseArray<long long>).name(),
 &PyvtkSparseArray_IxE_StaticNew);

  PyTypeObject *pytype = &PyvtkSparseArray_IxE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkTypedArray_IxE_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSparseArray_IyE_ClassNew(); }

#ifndef DECLARED_PyvtkTypedArray_IyE_ClassNew
extern "C" { PyObject *PyvtkTypedArray_IyE_ClassNew(); }
#define DECLARED_PyvtkTypedArray_IyE_ClassNew
#endif

static const char *PyvtkSparseArray_IyE_Doc =
  "vtkSparseArray<unsigned long long> - Sparse, independent coordinate\nstorage for N-way arrays.\n\n"
  "Superclass: vtkTypedArray[uint64]\n\n"
  "vtkSparseArray is a concrete vtkArray implementation that stores\n"
  "values using sparse independent coordinate storage.  This means that\n"
  "the array stores the complete set of coordinates and the value for\n"
  "each non-null value in the array. While this approach requires\n"
  "slightly more storage than other sparse storage schemes (such as\n"
  "Compressed-Row or Compressed-Column), it is easier and more efficient\n"
  "to work with when implementing algorithms, and it generalizes well\n"
  "for arbitrary numbers of dimensions.\n\n"
  "In addition to the value retrieval and update methods provided by\n"
  "vtkTypedArray, vtkSparseArray provides methods to:\n\n"
  "Get and set a special 'null' value that will be returned when\n"
  "retrieving values for undefined coordinates.\n\n"
  "Clear the contents of the array so that every set of coordinates is\n"
  "undefined.\n\n"
  "Sort the array contents so that value coordinates can be visited in a\n"
  "specific order.\n\n"
  "Retrieve pointers to the value- and coordinate-storage memory blocks.\n\n"
  "Reserve storage for a specific number of non-null values, for\n"
  "efficiency when the number of non-null values is known in advance.\n\n"
  "Recompute the array extents so that they bound the largest set of\n"
  "non-nullptr values along each dimension.\n\n"
  "Specify arbitrary array extents.\n\n"
  "Add values to the array in amortized-constant time.\n\n"
  "Validate that the array does not contain duplicate coordinates.\n\n"
  "@sa\n"
  "vtkArray, vtkTypedArray, vtkDenseArray\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";


static PyObject *
PyvtkSparseArray_IyE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSparseArray<unsigned long long>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IyE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSparseArray<unsigned long long>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IyE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSparseArray<unsigned long long> *tempr = vtkSparseArray<unsigned long long>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IyE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSparseArray<unsigned long long> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSparseArray<unsigned long long>::NewInstance());

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
PyvtkSparseArray_IyE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkSparseArray<unsigned long long>::IsDense());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IyE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkSparseArray<unsigned long long>::GetExtents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IyE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkSparseArray<unsigned long long>::GetNonNullSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IyE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

  unsigned long long temp0;
  vtkArrayCoordinates *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, "vtkArrayCoordinates"))
  {
    if (ap.IsBound())
    {
      op->GetCoordinatesN(temp0, *temp1);
    }
    else
    {
      op->vtkSparseArray<unsigned long long>::GetCoordinatesN(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IyE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkSparseArray<unsigned long long>::DeepCopy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IyE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const unsigned long long *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkSparseArray<unsigned long long>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IyE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const unsigned long long *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkSparseArray<unsigned long long>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IyE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    const unsigned long long *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1, temp2) :
      &op->vtkSparseArray<unsigned long long>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IyE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    const unsigned long long *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkSparseArray<unsigned long long>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IyE_GetValue_Methods[] = {
  {nullptr, PyvtkSparseArray_IyE_GetValue_s1, METH_VARARGS,
   "@k"},
  {nullptr, PyvtkSparseArray_IyE_GetValue_s4, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSparseArray_IyE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IyE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSparseArray_IyE_GetValue_s2(self, args);
    case 3:
      return PyvtkSparseArray_IyE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return nullptr;
}



static PyObject *
PyvtkSparseArray_IyE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const unsigned long long *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkSparseArray<unsigned long long>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IyE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

  vtkIdType temp0;
  unsigned long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<unsigned long long>::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IyE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  unsigned long long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSparseArray<unsigned long long>::SetValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IyE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  unsigned long long temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkSparseArray<unsigned long long>::SetValue(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IyE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  unsigned long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(*temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<unsigned long long>::SetValue(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IyE_SetValue_Methods[] = {
  {nullptr, PyvtkSparseArray_IyE_SetValue_s1, METH_VARARGS,
   "@kK"},
  {nullptr, PyvtkSparseArray_IyE_SetValue_s4, METH_VARARGS,
   "@WK vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSparseArray_IyE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IyE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSparseArray_IyE_SetValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_IyE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return nullptr;
}



static PyObject *
PyvtkSparseArray_IyE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

  unsigned long long temp0;
  unsigned long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValueN(temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<unsigned long long>::SetValueN(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IyE_SetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNullValue(temp0);
    }
    else
    {
      op->vtkSparseArray<unsigned long long>::SetNullValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IyE_GetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const unsigned long long *tempr = (ap.IsBound() ?
      &op->GetNullValue() :
      &op->vtkSparseArray<unsigned long long>::GetNullValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IyE_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Clear();
    }
    else
    {
      op->vtkSparseArray<unsigned long long>::Clear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IyE_Sort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Sort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

  vtkArraySort *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArraySort"))
  {
    if (ap.IsBound())
    {
      op->Sort(*temp0);
    }
    else
    {
      op->vtkSparseArray<unsigned long long>::Sort(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_IyE_GetCoordinateStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType *tempr = (ap.IsBound() ?
      op->GetCoordinateStorage(temp0) :
      op->vtkSparseArray<unsigned long long>::GetCoordinateStorage(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IyE_GetValueStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long long *tempr = (ap.IsBound() ?
      op->GetValueStorage() :
      op->vtkSparseArray<unsigned long long>::GetValueStorage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IyE_ReserveStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReserveStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ReserveStorage(temp0);
    }
    else
    {
      op->vtkSparseArray<unsigned long long>::ReserveStorage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IyE_SetExtentsFromContents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtentsFromContents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtentsFromContents();
    }
    else
    {
      op->vtkSparseArray<unsigned long long>::SetExtentsFromContents();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IyE_SetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

  vtkArrayExtents *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayExtents"))
  {
    if (ap.IsBound())
    {
      op->SetExtents(*temp0);
    }
    else
    {
      op->vtkSparseArray<unsigned long long>::SetExtents(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_IyE_AddValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

  vtkIdType temp0;
  unsigned long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddValue(temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<unsigned long long>::AddValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IyE_AddValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  unsigned long long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->AddValue(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSparseArray<unsigned long long>::AddValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IyE_AddValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  unsigned long long temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->AddValue(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkSparseArray<unsigned long long>::AddValue(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IyE_AddValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  unsigned long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddValue(*temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<unsigned long long>::AddValue(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IyE_AddValue_Methods[] = {
  {nullptr, PyvtkSparseArray_IyE_AddValue_s1, METH_VARARGS,
   "@kK"},
  {nullptr, PyvtkSparseArray_IyE_AddValue_s4, METH_VARARGS,
   "@WK vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSparseArray_IyE_AddValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IyE_AddValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSparseArray_IyE_AddValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_IyE_AddValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddValue");
  return nullptr;
}



static PyObject *
PyvtkSparseArray_IyE_Validate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Validate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<unsigned long long> *op = static_cast<vtkSparseArray<unsigned long long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->Validate() :
      op->vtkSparseArray<unsigned long long>::Validate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSparseArray_IyE_Methods[] = {
  {"IsTypeOf", PyvtkSparseArray_IyE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSparseArray_IyE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSparseArray_IyE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSparseArray_IyE\nC++: static vtkSparseArray<unsigned long long> *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSparseArray_IyE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSparseArray_IyE\nC++: vtkSparseArray<unsigned long long> *NewInstance()\n\n"},
  {"IsDense", PyvtkSparseArray_IyE_IsDense, METH_VARARGS,
   "V.IsDense() -> bool\nC++: bool IsDense() override;\n\nReturns true iff the underlying array storage is \"dense\", i.e.\nthat GetSize() and GetNonNullSize() will always return the same\nvalue. If not, the array is \"sparse\".\n"},
  {"GetExtents", PyvtkSparseArray_IyE_GetExtents, METH_VARARGS,
   "V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents() override;\n\nReturns the extents (the number of dimensions and size along each\ndimension) of the array.\n"},
  {"GetNonNullSize", PyvtkSparseArray_IyE_GetNonNullSize, METH_VARARGS,
   "V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize() override;\n\nReturns the number of non-null values stored in the array.  Note\nthat this value will equal GetSize() for dense arrays, and will\nbe less-than-or-equal to GetSize() for sparse arrays.\n"},
  {"GetCoordinatesN", PyvtkSparseArray_IyE_GetCoordinatesN, METH_VARARGS,
   "V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates) override;\n\nReturns the coordinates of the n-th value in the array, where n\nis in the range [0, GetNonNullSize()).  Note that the order in\nwhich coordinates are visited is undefined, but is guaranteed to\nmatch the order in which values are visited using\nvtkTypedArray::GetValueN() and vtkTypedArray::SetValueN().\n"},
  {"DeepCopy", PyvtkSparseArray_IyE_DeepCopy, METH_VARARGS,
   "V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy() override;\n\nReturns a new array that is a deep copy of this array.\n"},
  {"GetValue", PyvtkSparseArray_IyE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> int\nC++: const unsigned long long &GetValue(CoordinateT i) override;\nV.GetValue(int, int) -> int\nC++: const unsigned long long &GetValue(CoordinateT i,\n    CoordinateT j) override;\nV.GetValue(int, int, int) -> int\nC++: const unsigned long long &GetValue(CoordinateT i,\n    CoordinateT j, CoordinateT k) override;\nV.GetValue(vtkArrayCoordinates) -> int\nC++: const unsigned long long &GetValue(\n    const vtkArrayCoordinates &coordinates) override;\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetValueN", PyvtkSparseArray_IyE_GetValueN, METH_VARARGS,
   "V.GetValueN(int) -> int\nC++: const unsigned long long &GetValueN(const SizeT n) override;\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetValue", PyvtkSparseArray_IyE_SetValue, METH_VARARGS,
   "V.SetValue(int, int)\nC++: void SetValue(CoordinateT i, const unsigned long long &value)\n     override;\nV.SetValue(int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const unsigned long long &value) override;\nV.SetValue(int, int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const unsigned long long &value) override;\nV.SetValue(vtkArrayCoordinates, int)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const unsigned long long &value) override;\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetValueN", PyvtkSparseArray_IyE_SetValueN, METH_VARARGS,
   "V.SetValueN(int, int)\nC++: void SetValueN(const SizeT n,\n    const unsigned long long &value) override;\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetNullValue", PyvtkSparseArray_IyE_SetNullValue, METH_VARARGS,
   "V.SetNullValue(int)\nC++: void SetNullValue(const unsigned long long &value)\n\nSet the value that will be returned by GetValue() for nullptr\nareas of the array.\n"},
  {"GetNullValue", PyvtkSparseArray_IyE_GetNullValue, METH_VARARGS,
   "V.GetNullValue() -> int\nC++: const unsigned long long &GetNullValue()\n\nReturns the value that will be returned by GetValue() for nullptr\nareas of the array.\n"},
  {"Clear", PyvtkSparseArray_IyE_Clear, METH_VARARGS,
   "V.Clear()\nC++: void Clear()\n\nRemove all non-null elements from the array, leaving the number\nof dimensions, the extent of each dimension, and the label for\neach dimension unchanged.\n"},
  {"Sort", PyvtkSparseArray_IyE_Sort, METH_VARARGS,
   "V.Sort(vtkArraySort)\nC++: void Sort(const vtkArraySort &sort)\n\nSorts array values so that their coordinates appear in some\nwell-defined order. The supplied vtkArraySort object controls\nwhich dimensions are sorted, and in what order, and should\ncontain one-or-more sort dimensions, up to the number of\ndimensions stored in the array.\n"},
  {"GetCoordinateStorage", PyvtkSparseArray_IyE_GetCoordinateStorage, METH_VARARGS,
   "V.GetCoordinateStorage(int) -> (int, ...)\nC++: CoordinateT *GetCoordinateStorage(DimensionT dimension)\n\nReturn a mutable reference to the underlying coordinate storage. \nCoordinates for each dimension are stored contiguously as a\none-dimensional array.  The ordering of coordinates within the\narray depends on the order in which values were added to the\narray, and any subsequent sorting.  Use at your own risk!\n"},
  {"GetValueStorage", PyvtkSparseArray_IyE_GetValueStorage, METH_VARARGS,
   "V.GetValueStorage() -> (int, ...)\nC++: unsigned long long *GetValueStorage()\n\nReturn a mutable reference to the underlying value storage. \nValues are stored contiguously, but in arbitrary order.  Use\nGetCoordinateStorage() if you need to get the corresponding\ncoordinates for a value.  Use at your own risk!\n"},
  {"ReserveStorage", PyvtkSparseArray_IyE_ReserveStorage, METH_VARARGS,
   "V.ReserveStorage(int)\nC++: void ReserveStorage(const SizeT value_count)\n\nReserve storage for a specific number of values.  This is useful\nfor reading external data using GetCoordinateStorage() and\nGetValueStorage(), when the total number of non-nullptr values in\nthe array can be determined in advance.  Note that after calling\nReserveStorage(), all coordinates and values will be undefined,\nso you must ensure that every set of coordinates and values is\noverwritten.  It is the caller's responsibility to ensure that\nduplicate coordinates are not inserted into the array.\n"},
  {"SetExtentsFromContents", PyvtkSparseArray_IyE_SetExtentsFromContents, METH_VARARGS,
   "V.SetExtentsFromContents()\nC++: void SetExtentsFromContents()\n\nUpdate the array extents to match its contents, so that the\nextent along each dimension matches the maximum index value along\nthat dimension.\n"},
  {"SetExtents", PyvtkSparseArray_IyE_SetExtents, METH_VARARGS,
   "V.SetExtents(vtkArrayExtents)\nC++: void SetExtents(const vtkArrayExtents &extents)\n\nSpecify arbitrary array extents, without altering the contents of\nthe array.  Note that the extents must be as-large-or-larger-than\nthe extents of the actual values stored in the array.  The number\nof dimensions in the supplied extents must match the number of\ndimensions currently stored in the array.\n"},
  {"AddValue", PyvtkSparseArray_IyE_AddValue, METH_VARARGS,
   "V.AddValue(int, int)\nC++: void AddValue(CoordinateT i, const unsigned long long &value)\nV.AddValue(int, int, int)\nC++: void AddValue(CoordinateT i, CoordinateT j,\n    const unsigned long long &value)\nV.AddValue(int, int, int, int)\nC++: void AddValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const unsigned long long &value)\nV.AddValue(vtkArrayCoordinates, int)\nC++: void AddValue(const vtkArrayCoordinates &coordinates,\n    const unsigned long long &value)\n\nAdds a new non-null element to the array.  Does not test to see\nif an element with matching coordinates already exists.  Useful\nfor providing fast initialization of the array as long as the\ncaller is prepared to guarantee that no duplicate coordinates are\never used.\n"},
  {"Validate", PyvtkSparseArray_IyE_Validate, METH_VARARGS,
   "V.Validate() -> bool\nC++: bool Validate()\n\nValidate the contents of the array, returning false if there are\nany problems. Potential problems include duplicate coordinates,\nwhich can be introduced into the array either through AddValue()\nor direct access to coordinates storage; and coordinates\nout-of-bounds given the current array extents.\n\n* Note that Validate() is a heavyweight O(N log N) operation that\nis intended for\n* temporary use during debugging.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSparseArray_IyE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkSparseArray_IyE", // tp_name
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
  PyvtkSparseArray_IyE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSparseArray_IyE_StaticNew()
{
  return vtkSparseArray<unsigned long long>::New();
}

PyObject *PyvtkSparseArray_IyE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSparseArray_IyE_Type, PyvtkSparseArray_IyE_Methods,
    typeid(vtkSparseArray<unsigned long long>).name(),
 &PyvtkSparseArray_IyE_StaticNew);

  PyTypeObject *pytype = &PyvtkSparseArray_IyE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkTypedArray_IyE_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSparseArray_IfE_ClassNew(); }

#ifndef DECLARED_PyvtkTypedArray_IfE_ClassNew
extern "C" { PyObject *PyvtkTypedArray_IfE_ClassNew(); }
#define DECLARED_PyvtkTypedArray_IfE_ClassNew
#endif

static const char *PyvtkSparseArray_IfE_Doc =
  "vtkSparseArray- Sparse, independent coordinate storage for N-way\narrays.\n\n"
  "Superclass: vtkTypedArray[float32]\n\n"
  "vtkSparseArray is a concrete vtkArray implementation that stores\n"
  "values using sparse independent coordinate storage.  This means that\n"
  "the array stores the complete set of coordinates and the value for\n"
  "each non-null value in the array. While this approach requires\n"
  "slightly more storage than other sparse storage schemes (such as\n"
  "Compressed-Row or Compressed-Column), it is easier and more efficient\n"
  "to work with when implementing algorithms, and it generalizes well\n"
  "for arbitrary numbers of dimensions.\n\n"
  "In addition to the value retrieval and update methods provided by\n"
  "vtkTypedArray, vtkSparseArray provides methods to:\n\n"
  "Get and set a special 'null' value that will be returned when\n"
  "retrieving values for undefined coordinates.\n\n"
  "Clear the contents of the array so that every set of coordinates is\n"
  "undefined.\n\n"
  "Sort the array contents so that value coordinates can be visited in a\n"
  "specific order.\n\n"
  "Retrieve pointers to the value- and coordinate-storage memory blocks.\n\n"
  "Reserve storage for a specific number of non-null values, for\n"
  "efficiency when the number of non-null values is known in advance.\n\n"
  "Recompute the array extents so that they bound the largest set of\n"
  "non-nullptr values along each dimension.\n\n"
  "Specify arbitrary array extents.\n\n"
  "Add values to the array in amortized-constant time.\n\n"
  "Validate that the array does not contain duplicate coordinates.\n\n"
  "@sa\n"
  "vtkArray, vtkTypedArray, vtkDenseArray\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";


static PyObject *
PyvtkSparseArray_IfE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSparseArray<float>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IfE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSparseArray<float>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IfE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSparseArray<float> *tempr = vtkSparseArray<float>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IfE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSparseArray<float> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSparseArray<float>::NewInstance());

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
PyvtkSparseArray_IfE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkSparseArray<float>::IsDense());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IfE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkSparseArray<float>::GetExtents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IfE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkSparseArray<float>::GetNonNullSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IfE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

  unsigned long long temp0;
  vtkArrayCoordinates *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, "vtkArrayCoordinates"))
  {
    if (ap.IsBound())
    {
      op->GetCoordinatesN(temp0, *temp1);
    }
    else
    {
      op->vtkSparseArray<float>::GetCoordinatesN(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IfE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkSparseArray<float>::DeepCopy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IfE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const float *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkSparseArray<float>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IfE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const float *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkSparseArray<float>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IfE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    const float *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1, temp2) :
      &op->vtkSparseArray<float>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IfE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    const float *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkSparseArray<float>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IfE_GetValue_Methods[] = {
  {nullptr, PyvtkSparseArray_IfE_GetValue_s1, METH_VARARGS,
   "@k"},
  {nullptr, PyvtkSparseArray_IfE_GetValue_s4, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSparseArray_IfE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IfE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSparseArray_IfE_GetValue_s2(self, args);
    case 3:
      return PyvtkSparseArray_IfE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return nullptr;
}



static PyObject *
PyvtkSparseArray_IfE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const float *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkSparseArray<float>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IfE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

  vtkIdType temp0;
  float temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<float>::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IfE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  float temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSparseArray<float>::SetValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IfE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  float temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkSparseArray<float>::SetValue(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IfE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  float temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(*temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<float>::SetValue(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IfE_SetValue_Methods[] = {
  {nullptr, PyvtkSparseArray_IfE_SetValue_s1, METH_VARARGS,
   "@kf"},
  {nullptr, PyvtkSparseArray_IfE_SetValue_s4, METH_VARARGS,
   "@Wf vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSparseArray_IfE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IfE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSparseArray_IfE_SetValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_IfE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return nullptr;
}



static PyObject *
PyvtkSparseArray_IfE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

  unsigned long long temp0;
  float temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValueN(temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<float>::SetValueN(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IfE_SetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNullValue(temp0);
    }
    else
    {
      op->vtkSparseArray<float>::SetNullValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IfE_GetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const float *tempr = (ap.IsBound() ?
      &op->GetNullValue() :
      &op->vtkSparseArray<float>::GetNullValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IfE_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Clear();
    }
    else
    {
      op->vtkSparseArray<float>::Clear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IfE_Sort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Sort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

  vtkArraySort *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArraySort"))
  {
    if (ap.IsBound())
    {
      op->Sort(*temp0);
    }
    else
    {
      op->vtkSparseArray<float>::Sort(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_IfE_GetCoordinateStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType *tempr = (ap.IsBound() ?
      op->GetCoordinateStorage(temp0) :
      op->vtkSparseArray<float>::GetCoordinateStorage(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IfE_GetValueStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetValueStorage() :
      op->vtkSparseArray<float>::GetValueStorage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IfE_ReserveStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReserveStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ReserveStorage(temp0);
    }
    else
    {
      op->vtkSparseArray<float>::ReserveStorage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IfE_SetExtentsFromContents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtentsFromContents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtentsFromContents();
    }
    else
    {
      op->vtkSparseArray<float>::SetExtentsFromContents();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IfE_SetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

  vtkArrayExtents *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayExtents"))
  {
    if (ap.IsBound())
    {
      op->SetExtents(*temp0);
    }
    else
    {
      op->vtkSparseArray<float>::SetExtents(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_IfE_AddValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

  vtkIdType temp0;
  float temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddValue(temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<float>::AddValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IfE_AddValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  float temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->AddValue(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSparseArray<float>::AddValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IfE_AddValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  float temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->AddValue(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkSparseArray<float>::AddValue(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IfE_AddValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  float temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddValue(*temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<float>::AddValue(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IfE_AddValue_Methods[] = {
  {nullptr, PyvtkSparseArray_IfE_AddValue_s1, METH_VARARGS,
   "@kf"},
  {nullptr, PyvtkSparseArray_IfE_AddValue_s4, METH_VARARGS,
   "@Wf vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSparseArray_IfE_AddValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IfE_AddValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSparseArray_IfE_AddValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_IfE_AddValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddValue");
  return nullptr;
}



static PyObject *
PyvtkSparseArray_IfE_Validate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Validate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<float> *op = static_cast<vtkSparseArray<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->Validate() :
      op->vtkSparseArray<float>::Validate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSparseArray_IfE_Methods[] = {
  {"IsTypeOf", PyvtkSparseArray_IfE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSparseArray_IfE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSparseArray_IfE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSparseArray_IfE\nC++: static vtkSparseArray<float> *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSparseArray_IfE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSparseArray_IfE\nC++: vtkSparseArray<float> *NewInstance()\n\n"},
  {"IsDense", PyvtkSparseArray_IfE_IsDense, METH_VARARGS,
   "V.IsDense() -> bool\nC++: bool IsDense() override;\n\nReturns true iff the underlying array storage is \"dense\", i.e.\nthat GetSize() and GetNonNullSize() will always return the same\nvalue. If not, the array is \"sparse\".\n"},
  {"GetExtents", PyvtkSparseArray_IfE_GetExtents, METH_VARARGS,
   "V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents() override;\n\nReturns the extents (the number of dimensions and size along each\ndimension) of the array.\n"},
  {"GetNonNullSize", PyvtkSparseArray_IfE_GetNonNullSize, METH_VARARGS,
   "V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize() override;\n\nReturns the number of non-null values stored in the array.  Note\nthat this value will equal GetSize() for dense arrays, and will\nbe less-than-or-equal to GetSize() for sparse arrays.\n"},
  {"GetCoordinatesN", PyvtkSparseArray_IfE_GetCoordinatesN, METH_VARARGS,
   "V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates) override;\n\nReturns the coordinates of the n-th value in the array, where n\nis in the range [0, GetNonNullSize()).  Note that the order in\nwhich coordinates are visited is undefined, but is guaranteed to\nmatch the order in which values are visited using\nvtkTypedArray::GetValueN() and vtkTypedArray::SetValueN().\n"},
  {"DeepCopy", PyvtkSparseArray_IfE_DeepCopy, METH_VARARGS,
   "V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy() override;\n\nReturns a new array that is a deep copy of this array.\n"},
  {"GetValue", PyvtkSparseArray_IfE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> float\nC++: const float &GetValue(CoordinateT i) override;\nV.GetValue(int, int) -> float\nC++: const float &GetValue(CoordinateT i, CoordinateT j) override;\nV.GetValue(int, int, int) -> float\nC++: const float &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k) override;\nV.GetValue(vtkArrayCoordinates) -> float\nC++: const float &GetValue(const vtkArrayCoordinates &coordinates)\n     override;\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetValueN", PyvtkSparseArray_IfE_GetValueN, METH_VARARGS,
   "V.GetValueN(int) -> float\nC++: const float &GetValueN(const SizeT n) override;\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetValue", PyvtkSparseArray_IfE_SetValue, METH_VARARGS,
   "V.SetValue(int, float)\nC++: void SetValue(CoordinateT i, const float &value) override;\nV.SetValue(int, int, float)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const float &value) override;\nV.SetValue(int, int, int, float)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const float &value) override;\nV.SetValue(vtkArrayCoordinates, float)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const float &value) override;\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetValueN", PyvtkSparseArray_IfE_SetValueN, METH_VARARGS,
   "V.SetValueN(int, float)\nC++: void SetValueN(const SizeT n, const float &value) override;\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetNullValue", PyvtkSparseArray_IfE_SetNullValue, METH_VARARGS,
   "V.SetNullValue(float)\nC++: void SetNullValue(const float &value)\n\nSet the value that will be returned by GetValue() for nullptr\nareas of the array.\n"},
  {"GetNullValue", PyvtkSparseArray_IfE_GetNullValue, METH_VARARGS,
   "V.GetNullValue() -> float\nC++: const float &GetNullValue()\n\nReturns the value that will be returned by GetValue() for nullptr\nareas of the array.\n"},
  {"Clear", PyvtkSparseArray_IfE_Clear, METH_VARARGS,
   "V.Clear()\nC++: void Clear()\n\nRemove all non-null elements from the array, leaving the number\nof dimensions, the extent of each dimension, and the label for\neach dimension unchanged.\n"},
  {"Sort", PyvtkSparseArray_IfE_Sort, METH_VARARGS,
   "V.Sort(vtkArraySort)\nC++: void Sort(const vtkArraySort &sort)\n\nSorts array values so that their coordinates appear in some\nwell-defined order. The supplied vtkArraySort object controls\nwhich dimensions are sorted, and in what order, and should\ncontain one-or-more sort dimensions, up to the number of\ndimensions stored in the array.\n"},
  {"GetCoordinateStorage", PyvtkSparseArray_IfE_GetCoordinateStorage, METH_VARARGS,
   "V.GetCoordinateStorage(int) -> (int, ...)\nC++: CoordinateT *GetCoordinateStorage(DimensionT dimension)\n\nReturn a mutable reference to the underlying coordinate storage. \nCoordinates for each dimension are stored contiguously as a\none-dimensional array.  The ordering of coordinates within the\narray depends on the order in which values were added to the\narray, and any subsequent sorting.  Use at your own risk!\n"},
  {"GetValueStorage", PyvtkSparseArray_IfE_GetValueStorage, METH_VARARGS,
   "V.GetValueStorage() -> (float, ...)\nC++: float *GetValueStorage()\n\nReturn a mutable reference to the underlying value storage. \nValues are stored contiguously, but in arbitrary order.  Use\nGetCoordinateStorage() if you need to get the corresponding\ncoordinates for a value.  Use at your own risk!\n"},
  {"ReserveStorage", PyvtkSparseArray_IfE_ReserveStorage, METH_VARARGS,
   "V.ReserveStorage(int)\nC++: void ReserveStorage(const SizeT value_count)\n\nReserve storage for a specific number of values.  This is useful\nfor reading external data using GetCoordinateStorage() and\nGetValueStorage(), when the total number of non-nullptr values in\nthe array can be determined in advance.  Note that after calling\nReserveStorage(), all coordinates and values will be undefined,\nso you must ensure that every set of coordinates and values is\noverwritten.  It is the caller's responsibility to ensure that\nduplicate coordinates are not inserted into the array.\n"},
  {"SetExtentsFromContents", PyvtkSparseArray_IfE_SetExtentsFromContents, METH_VARARGS,
   "V.SetExtentsFromContents()\nC++: void SetExtentsFromContents()\n\nUpdate the array extents to match its contents, so that the\nextent along each dimension matches the maximum index value along\nthat dimension.\n"},
  {"SetExtents", PyvtkSparseArray_IfE_SetExtents, METH_VARARGS,
   "V.SetExtents(vtkArrayExtents)\nC++: void SetExtents(const vtkArrayExtents &extents)\n\nSpecify arbitrary array extents, without altering the contents of\nthe array.  Note that the extents must be as-large-or-larger-than\nthe extents of the actual values stored in the array.  The number\nof dimensions in the supplied extents must match the number of\ndimensions currently stored in the array.\n"},
  {"AddValue", PyvtkSparseArray_IfE_AddValue, METH_VARARGS,
   "V.AddValue(int, float)\nC++: void AddValue(CoordinateT i, const float &value)\nV.AddValue(int, int, float)\nC++: void AddValue(CoordinateT i, CoordinateT j,\n    const float &value)\nV.AddValue(int, int, int, float)\nC++: void AddValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const float &value)\nV.AddValue(vtkArrayCoordinates, float)\nC++: void AddValue(const vtkArrayCoordinates &coordinates,\n    const float &value)\n\nAdds a new non-null element to the array.  Does not test to see\nif an element with matching coordinates already exists.  Useful\nfor providing fast initialization of the array as long as the\ncaller is prepared to guarantee that no duplicate coordinates are\never used.\n"},
  {"Validate", PyvtkSparseArray_IfE_Validate, METH_VARARGS,
   "V.Validate() -> bool\nC++: bool Validate()\n\nValidate the contents of the array, returning false if there are\nany problems. Potential problems include duplicate coordinates,\nwhich can be introduced into the array either through AddValue()\nor direct access to coordinates storage; and coordinates\nout-of-bounds given the current array extents.\n\n* Note that Validate() is a heavyweight O(N log N) operation that\nis intended for\n* temporary use during debugging.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSparseArray_IfE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkSparseArray_IfE", // tp_name
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
  PyvtkSparseArray_IfE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSparseArray_IfE_StaticNew()
{
  return vtkSparseArray<float>::New();
}

PyObject *PyvtkSparseArray_IfE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSparseArray_IfE_Type, PyvtkSparseArray_IfE_Methods,
    typeid(vtkSparseArray<float>).name(),
 &PyvtkSparseArray_IfE_StaticNew);

  PyTypeObject *pytype = &PyvtkSparseArray_IfE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkTypedArray_IfE_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSparseArray_IdE_ClassNew(); }

#ifndef DECLARED_PyvtkTypedArray_IdE_ClassNew
extern "C" { PyObject *PyvtkTypedArray_IdE_ClassNew(); }
#define DECLARED_PyvtkTypedArray_IdE_ClassNew
#endif

static const char *PyvtkSparseArray_IdE_Doc =
  "vtkSparseArray- Sparse, independent coordinate storage for N-way\narrays.\n\n"
  "Superclass: vtkTypedArray[float64]\n\n"
  "vtkSparseArray is a concrete vtkArray implementation that stores\n"
  "values using sparse independent coordinate storage.  This means that\n"
  "the array stores the complete set of coordinates and the value for\n"
  "each non-null value in the array. While this approach requires\n"
  "slightly more storage than other sparse storage schemes (such as\n"
  "Compressed-Row or Compressed-Column), it is easier and more efficient\n"
  "to work with when implementing algorithms, and it generalizes well\n"
  "for arbitrary numbers of dimensions.\n\n"
  "In addition to the value retrieval and update methods provided by\n"
  "vtkTypedArray, vtkSparseArray provides methods to:\n\n"
  "Get and set a special 'null' value that will be returned when\n"
  "retrieving values for undefined coordinates.\n\n"
  "Clear the contents of the array so that every set of coordinates is\n"
  "undefined.\n\n"
  "Sort the array contents so that value coordinates can be visited in a\n"
  "specific order.\n\n"
  "Retrieve pointers to the value- and coordinate-storage memory blocks.\n\n"
  "Reserve storage for a specific number of non-null values, for\n"
  "efficiency when the number of non-null values is known in advance.\n\n"
  "Recompute the array extents so that they bound the largest set of\n"
  "non-nullptr values along each dimension.\n\n"
  "Specify arbitrary array extents.\n\n"
  "Add values to the array in amortized-constant time.\n\n"
  "Validate that the array does not contain duplicate coordinates.\n\n"
  "@sa\n"
  "vtkArray, vtkTypedArray, vtkDenseArray\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";


static PyObject *
PyvtkSparseArray_IdE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSparseArray<double>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IdE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSparseArray<double>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IdE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSparseArray<double> *tempr = vtkSparseArray<double>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IdE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSparseArray<double> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSparseArray<double>::NewInstance());

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
PyvtkSparseArray_IdE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkSparseArray<double>::IsDense());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IdE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkSparseArray<double>::GetExtents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IdE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkSparseArray<double>::GetNonNullSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IdE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

  unsigned long long temp0;
  vtkArrayCoordinates *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, "vtkArrayCoordinates"))
  {
    if (ap.IsBound())
    {
      op->GetCoordinatesN(temp0, *temp1);
    }
    else
    {
      op->vtkSparseArray<double>::GetCoordinatesN(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IdE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkSparseArray<double>::DeepCopy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IdE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const double *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkSparseArray<double>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IdE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const double *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkSparseArray<double>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IdE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    const double *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1, temp2) :
      &op->vtkSparseArray<double>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IdE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    const double *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkSparseArray<double>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IdE_GetValue_Methods[] = {
  {nullptr, PyvtkSparseArray_IdE_GetValue_s1, METH_VARARGS,
   "@k"},
  {nullptr, PyvtkSparseArray_IdE_GetValue_s4, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSparseArray_IdE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IdE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSparseArray_IdE_GetValue_s2(self, args);
    case 3:
      return PyvtkSparseArray_IdE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return nullptr;
}



static PyObject *
PyvtkSparseArray_IdE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const double *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkSparseArray<double>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IdE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

  vtkIdType temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<double>::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IdE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSparseArray<double>::SetValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IdE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkSparseArray<double>::SetValue(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IdE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(*temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<double>::SetValue(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IdE_SetValue_Methods[] = {
  {nullptr, PyvtkSparseArray_IdE_SetValue_s1, METH_VARARGS,
   "@kd"},
  {nullptr, PyvtkSparseArray_IdE_SetValue_s4, METH_VARARGS,
   "@Wd vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSparseArray_IdE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IdE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSparseArray_IdE_SetValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_IdE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return nullptr;
}



static PyObject *
PyvtkSparseArray_IdE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

  unsigned long long temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValueN(temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<double>::SetValueN(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IdE_SetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNullValue(temp0);
    }
    else
    {
      op->vtkSparseArray<double>::SetNullValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IdE_GetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const double *tempr = (ap.IsBound() ?
      &op->GetNullValue() :
      &op->vtkSparseArray<double>::GetNullValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IdE_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Clear();
    }
    else
    {
      op->vtkSparseArray<double>::Clear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IdE_Sort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Sort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

  vtkArraySort *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArraySort"))
  {
    if (ap.IsBound())
    {
      op->Sort(*temp0);
    }
    else
    {
      op->vtkSparseArray<double>::Sort(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_IdE_GetCoordinateStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType *tempr = (ap.IsBound() ?
      op->GetCoordinateStorage(temp0) :
      op->vtkSparseArray<double>::GetCoordinateStorage(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IdE_GetValueStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetValueStorage() :
      op->vtkSparseArray<double>::GetValueStorage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IdE_ReserveStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReserveStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ReserveStorage(temp0);
    }
    else
    {
      op->vtkSparseArray<double>::ReserveStorage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IdE_SetExtentsFromContents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtentsFromContents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtentsFromContents();
    }
    else
    {
      op->vtkSparseArray<double>::SetExtentsFromContents();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_IdE_SetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

  vtkArrayExtents *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayExtents"))
  {
    if (ap.IsBound())
    {
      op->SetExtents(*temp0);
    }
    else
    {
      op->vtkSparseArray<double>::SetExtents(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_IdE_AddValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

  vtkIdType temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddValue(temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<double>::AddValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IdE_AddValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->AddValue(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSparseArray<double>::AddValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IdE_AddValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->AddValue(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkSparseArray<double>::AddValue(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_IdE_AddValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddValue(*temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<double>::AddValue(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_IdE_AddValue_Methods[] = {
  {nullptr, PyvtkSparseArray_IdE_AddValue_s1, METH_VARARGS,
   "@kd"},
  {nullptr, PyvtkSparseArray_IdE_AddValue_s4, METH_VARARGS,
   "@Wd vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSparseArray_IdE_AddValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_IdE_AddValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSparseArray_IdE_AddValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_IdE_AddValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddValue");
  return nullptr;
}



static PyObject *
PyvtkSparseArray_IdE_Validate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Validate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<double> *op = static_cast<vtkSparseArray<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->Validate() :
      op->vtkSparseArray<double>::Validate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSparseArray_IdE_Methods[] = {
  {"IsTypeOf", PyvtkSparseArray_IdE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSparseArray_IdE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSparseArray_IdE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSparseArray_IdE\nC++: static vtkSparseArray<double> *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSparseArray_IdE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSparseArray_IdE\nC++: vtkSparseArray<double> *NewInstance()\n\n"},
  {"IsDense", PyvtkSparseArray_IdE_IsDense, METH_VARARGS,
   "V.IsDense() -> bool\nC++: bool IsDense() override;\n\nReturns true iff the underlying array storage is \"dense\", i.e.\nthat GetSize() and GetNonNullSize() will always return the same\nvalue. If not, the array is \"sparse\".\n"},
  {"GetExtents", PyvtkSparseArray_IdE_GetExtents, METH_VARARGS,
   "V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents() override;\n\nReturns the extents (the number of dimensions and size along each\ndimension) of the array.\n"},
  {"GetNonNullSize", PyvtkSparseArray_IdE_GetNonNullSize, METH_VARARGS,
   "V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize() override;\n\nReturns the number of non-null values stored in the array.  Note\nthat this value will equal GetSize() for dense arrays, and will\nbe less-than-or-equal to GetSize() for sparse arrays.\n"},
  {"GetCoordinatesN", PyvtkSparseArray_IdE_GetCoordinatesN, METH_VARARGS,
   "V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates) override;\n\nReturns the coordinates of the n-th value in the array, where n\nis in the range [0, GetNonNullSize()).  Note that the order in\nwhich coordinates are visited is undefined, but is guaranteed to\nmatch the order in which values are visited using\nvtkTypedArray::GetValueN() and vtkTypedArray::SetValueN().\n"},
  {"DeepCopy", PyvtkSparseArray_IdE_DeepCopy, METH_VARARGS,
   "V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy() override;\n\nReturns a new array that is a deep copy of this array.\n"},
  {"GetValue", PyvtkSparseArray_IdE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> float\nC++: const double &GetValue(CoordinateT i) override;\nV.GetValue(int, int) -> float\nC++: const double &GetValue(CoordinateT i, CoordinateT j)\n    override;\nV.GetValue(int, int, int) -> float\nC++: const double &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k) override;\nV.GetValue(vtkArrayCoordinates) -> float\nC++: const double &GetValue(\n    const vtkArrayCoordinates &coordinates) override;\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetValueN", PyvtkSparseArray_IdE_GetValueN, METH_VARARGS,
   "V.GetValueN(int) -> float\nC++: const double &GetValueN(const SizeT n) override;\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetValue", PyvtkSparseArray_IdE_SetValue, METH_VARARGS,
   "V.SetValue(int, float)\nC++: void SetValue(CoordinateT i, const double &value) override;\nV.SetValue(int, int, float)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const double &value) override;\nV.SetValue(int, int, int, float)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const double &value) override;\nV.SetValue(vtkArrayCoordinates, float)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const double &value) override;\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetValueN", PyvtkSparseArray_IdE_SetValueN, METH_VARARGS,
   "V.SetValueN(int, float)\nC++: void SetValueN(const SizeT n, const double &value) override;\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetNullValue", PyvtkSparseArray_IdE_SetNullValue, METH_VARARGS,
   "V.SetNullValue(float)\nC++: void SetNullValue(const double &value)\n\nSet the value that will be returned by GetValue() for nullptr\nareas of the array.\n"},
  {"GetNullValue", PyvtkSparseArray_IdE_GetNullValue, METH_VARARGS,
   "V.GetNullValue() -> float\nC++: const double &GetNullValue()\n\nReturns the value that will be returned by GetValue() for nullptr\nareas of the array.\n"},
  {"Clear", PyvtkSparseArray_IdE_Clear, METH_VARARGS,
   "V.Clear()\nC++: void Clear()\n\nRemove all non-null elements from the array, leaving the number\nof dimensions, the extent of each dimension, and the label for\neach dimension unchanged.\n"},
  {"Sort", PyvtkSparseArray_IdE_Sort, METH_VARARGS,
   "V.Sort(vtkArraySort)\nC++: void Sort(const vtkArraySort &sort)\n\nSorts array values so that their coordinates appear in some\nwell-defined order. The supplied vtkArraySort object controls\nwhich dimensions are sorted, and in what order, and should\ncontain one-or-more sort dimensions, up to the number of\ndimensions stored in the array.\n"},
  {"GetCoordinateStorage", PyvtkSparseArray_IdE_GetCoordinateStorage, METH_VARARGS,
   "V.GetCoordinateStorage(int) -> (int, ...)\nC++: CoordinateT *GetCoordinateStorage(DimensionT dimension)\n\nReturn a mutable reference to the underlying coordinate storage. \nCoordinates for each dimension are stored contiguously as a\none-dimensional array.  The ordering of coordinates within the\narray depends on the order in which values were added to the\narray, and any subsequent sorting.  Use at your own risk!\n"},
  {"GetValueStorage", PyvtkSparseArray_IdE_GetValueStorage, METH_VARARGS,
   "V.GetValueStorage() -> (float, ...)\nC++: double *GetValueStorage()\n\nReturn a mutable reference to the underlying value storage. \nValues are stored contiguously, but in arbitrary order.  Use\nGetCoordinateStorage() if you need to get the corresponding\ncoordinates for a value.  Use at your own risk!\n"},
  {"ReserveStorage", PyvtkSparseArray_IdE_ReserveStorage, METH_VARARGS,
   "V.ReserveStorage(int)\nC++: void ReserveStorage(const SizeT value_count)\n\nReserve storage for a specific number of values.  This is useful\nfor reading external data using GetCoordinateStorage() and\nGetValueStorage(), when the total number of non-nullptr values in\nthe array can be determined in advance.  Note that after calling\nReserveStorage(), all coordinates and values will be undefined,\nso you must ensure that every set of coordinates and values is\noverwritten.  It is the caller's responsibility to ensure that\nduplicate coordinates are not inserted into the array.\n"},
  {"SetExtentsFromContents", PyvtkSparseArray_IdE_SetExtentsFromContents, METH_VARARGS,
   "V.SetExtentsFromContents()\nC++: void SetExtentsFromContents()\n\nUpdate the array extents to match its contents, so that the\nextent along each dimension matches the maximum index value along\nthat dimension.\n"},
  {"SetExtents", PyvtkSparseArray_IdE_SetExtents, METH_VARARGS,
   "V.SetExtents(vtkArrayExtents)\nC++: void SetExtents(const vtkArrayExtents &extents)\n\nSpecify arbitrary array extents, without altering the contents of\nthe array.  Note that the extents must be as-large-or-larger-than\nthe extents of the actual values stored in the array.  The number\nof dimensions in the supplied extents must match the number of\ndimensions currently stored in the array.\n"},
  {"AddValue", PyvtkSparseArray_IdE_AddValue, METH_VARARGS,
   "V.AddValue(int, float)\nC++: void AddValue(CoordinateT i, const double &value)\nV.AddValue(int, int, float)\nC++: void AddValue(CoordinateT i, CoordinateT j,\n    const double &value)\nV.AddValue(int, int, int, float)\nC++: void AddValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const double &value)\nV.AddValue(vtkArrayCoordinates, float)\nC++: void AddValue(const vtkArrayCoordinates &coordinates,\n    const double &value)\n\nAdds a new non-null element to the array.  Does not test to see\nif an element with matching coordinates already exists.  Useful\nfor providing fast initialization of the array as long as the\ncaller is prepared to guarantee that no duplicate coordinates are\never used.\n"},
  {"Validate", PyvtkSparseArray_IdE_Validate, METH_VARARGS,
   "V.Validate() -> bool\nC++: bool Validate()\n\nValidate the contents of the array, returning false if there are\nany problems. Potential problems include duplicate coordinates,\nwhich can be introduced into the array either through AddValue()\nor direct access to coordinates storage; and coordinates\nout-of-bounds given the current array extents.\n\n* Note that Validate() is a heavyweight O(N log N) operation that\nis intended for\n* temporary use during debugging.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSparseArray_IdE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkSparseArray_IdE", // tp_name
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
  PyvtkSparseArray_IdE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSparseArray_IdE_StaticNew()
{
  return vtkSparseArray<double>::New();
}

PyObject *PyvtkSparseArray_IdE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSparseArray_IdE_Type, PyvtkSparseArray_IdE_Methods,
    typeid(vtkSparseArray<double>).name(),
 &PyvtkSparseArray_IdE_StaticNew);

  PyTypeObject *pytype = &PyvtkSparseArray_IdE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkTypedArray_IdE_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSparseArray_I12vtkStdStringE_ClassNew(); }

#ifndef DECLARED_PyvtkTypedArray_I12vtkStdStringE_ClassNew
extern "C" { PyObject *PyvtkTypedArray_I12vtkStdStringE_ClassNew(); }
#define DECLARED_PyvtkTypedArray_I12vtkStdStringE_ClassNew
#endif

static const char *PyvtkSparseArray_I12vtkStdStringE_Doc =
  "vtkSparseArray- Sparse, independent coordinate storage for N-way\narrays.\n\n"
  "Superclass: vtkTypedArray[str]\n\n"
  "vtkSparseArray is a concrete vtkArray implementation that stores\n"
  "values using sparse independent coordinate storage.  This means that\n"
  "the array stores the complete set of coordinates and the value for\n"
  "each non-null value in the array. While this approach requires\n"
  "slightly more storage than other sparse storage schemes (such as\n"
  "Compressed-Row or Compressed-Column), it is easier and more efficient\n"
  "to work with when implementing algorithms, and it generalizes well\n"
  "for arbitrary numbers of dimensions.\n\n"
  "In addition to the value retrieval and update methods provided by\n"
  "vtkTypedArray, vtkSparseArray provides methods to:\n\n"
  "Get and set a special 'null' value that will be returned when\n"
  "retrieving values for undefined coordinates.\n\n"
  "Clear the contents of the array so that every set of coordinates is\n"
  "undefined.\n\n"
  "Sort the array contents so that value coordinates can be visited in a\n"
  "specific order.\n\n"
  "Retrieve pointers to the value- and coordinate-storage memory blocks.\n\n"
  "Reserve storage for a specific number of non-null values, for\n"
  "efficiency when the number of non-null values is known in advance.\n\n"
  "Recompute the array extents so that they bound the largest set of\n"
  "non-nullptr values along each dimension.\n\n"
  "Specify arbitrary array extents.\n\n"
  "Add values to the array in amortized-constant time.\n\n"
  "Validate that the array does not contain duplicate coordinates.\n\n"
  "@sa\n"
  "vtkArray, vtkTypedArray, vtkDenseArray\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";


static PyObject *
PyvtkSparseArray_I12vtkStdStringE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSparseArray<vtkStdString>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_I12vtkStdStringE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkStdString> *op = static_cast<vtkSparseArray<vtkStdString> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSparseArray<vtkStdString>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_I12vtkStdStringE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSparseArray<vtkStdString> *tempr = vtkSparseArray<vtkStdString>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_I12vtkStdStringE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkStdString> *op = static_cast<vtkSparseArray<vtkStdString> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSparseArray<vtkStdString> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSparseArray<vtkStdString>::NewInstance());

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
PyvtkSparseArray_I12vtkStdStringE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkStdString> *op = static_cast<vtkSparseArray<vtkStdString> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkSparseArray<vtkStdString>::IsDense());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_I12vtkStdStringE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkStdString> *op = static_cast<vtkSparseArray<vtkStdString> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkSparseArray<vtkStdString>::GetExtents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_I12vtkStdStringE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkStdString> *op = static_cast<vtkSparseArray<vtkStdString> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkSparseArray<vtkStdString>::GetNonNullSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_I12vtkStdStringE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkStdString> *op = static_cast<vtkSparseArray<vtkStdString> *>(vp);

  unsigned long long temp0;
  vtkArrayCoordinates *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, "vtkArrayCoordinates"))
  {
    if (ap.IsBound())
    {
      op->GetCoordinatesN(temp0, *temp1);
    }
    else
    {
      op->vtkSparseArray<vtkStdString>::GetCoordinatesN(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_I12vtkStdStringE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkStdString> *op = static_cast<vtkSparseArray<vtkStdString> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkSparseArray<vtkStdString>::DeepCopy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_I12vtkStdStringE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkStdString> *op = static_cast<vtkSparseArray<vtkStdString> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const vtkStdString *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkSparseArray<vtkStdString>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_I12vtkStdStringE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkStdString> *op = static_cast<vtkSparseArray<vtkStdString> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const vtkStdString *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkSparseArray<vtkStdString>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_I12vtkStdStringE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkStdString> *op = static_cast<vtkSparseArray<vtkStdString> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    const vtkStdString *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1, temp2) :
      &op->vtkSparseArray<vtkStdString>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_I12vtkStdStringE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkStdString> *op = static_cast<vtkSparseArray<vtkStdString> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    const vtkStdString *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkSparseArray<vtkStdString>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_I12vtkStdStringE_GetValue_Methods[] = {
  {nullptr, PyvtkSparseArray_I12vtkStdStringE_GetValue_s1, METH_VARARGS,
   "@k"},
  {nullptr, PyvtkSparseArray_I12vtkStdStringE_GetValue_s4, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSparseArray_I12vtkStdStringE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_I12vtkStdStringE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSparseArray_I12vtkStdStringE_GetValue_s2(self, args);
    case 3:
      return PyvtkSparseArray_I12vtkStdStringE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return nullptr;
}



static PyObject *
PyvtkSparseArray_I12vtkStdStringE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkStdString> *op = static_cast<vtkSparseArray<vtkStdString> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const vtkStdString *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkSparseArray<vtkStdString>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_I12vtkStdStringE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkStdString> *op = static_cast<vtkSparseArray<vtkStdString> *>(vp);

  vtkIdType temp0;
  vtkStdString temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<vtkStdString>::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_I12vtkStdStringE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkStdString> *op = static_cast<vtkSparseArray<vtkStdString> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkStdString temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSparseArray<vtkStdString>::SetValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_I12vtkStdStringE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkStdString> *op = static_cast<vtkSparseArray<vtkStdString> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  vtkStdString temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkSparseArray<vtkStdString>::SetValue(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_I12vtkStdStringE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkStdString> *op = static_cast<vtkSparseArray<vtkStdString> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkStdString temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(*temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<vtkStdString>::SetValue(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_I12vtkStdStringE_SetValue_Methods[] = {
  {nullptr, PyvtkSparseArray_I12vtkStdStringE_SetValue_s1, METH_VARARGS,
   "@ks"},
  {nullptr, PyvtkSparseArray_I12vtkStdStringE_SetValue_s4, METH_VARARGS,
   "@Ws vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSparseArray_I12vtkStdStringE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_I12vtkStdStringE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSparseArray_I12vtkStdStringE_SetValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_I12vtkStdStringE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return nullptr;
}



static PyObject *
PyvtkSparseArray_I12vtkStdStringE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkStdString> *op = static_cast<vtkSparseArray<vtkStdString> *>(vp);

  unsigned long long temp0;
  vtkStdString temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValueN(temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<vtkStdString>::SetValueN(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_I12vtkStdStringE_SetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkStdString> *op = static_cast<vtkSparseArray<vtkStdString> *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNullValue(temp0);
    }
    else
    {
      op->vtkSparseArray<vtkStdString>::SetNullValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_I12vtkStdStringE_GetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkStdString> *op = static_cast<vtkSparseArray<vtkStdString> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkStdString *tempr = (ap.IsBound() ?
      &op->GetNullValue() :
      &op->vtkSparseArray<vtkStdString>::GetNullValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_I12vtkStdStringE_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkStdString> *op = static_cast<vtkSparseArray<vtkStdString> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Clear();
    }
    else
    {
      op->vtkSparseArray<vtkStdString>::Clear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_I12vtkStdStringE_Sort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Sort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkStdString> *op = static_cast<vtkSparseArray<vtkStdString> *>(vp);

  vtkArraySort *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArraySort"))
  {
    if (ap.IsBound())
    {
      op->Sort(*temp0);
    }
    else
    {
      op->vtkSparseArray<vtkStdString>::Sort(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_I12vtkStdStringE_GetCoordinateStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkStdString> *op = static_cast<vtkSparseArray<vtkStdString> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType *tempr = (ap.IsBound() ?
      op->GetCoordinateStorage(temp0) :
      op->vtkSparseArray<vtkStdString>::GetCoordinateStorage(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_I12vtkStdStringE_ReserveStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReserveStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkStdString> *op = static_cast<vtkSparseArray<vtkStdString> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ReserveStorage(temp0);
    }
    else
    {
      op->vtkSparseArray<vtkStdString>::ReserveStorage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_I12vtkStdStringE_SetExtentsFromContents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtentsFromContents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkStdString> *op = static_cast<vtkSparseArray<vtkStdString> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtentsFromContents();
    }
    else
    {
      op->vtkSparseArray<vtkStdString>::SetExtentsFromContents();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_I12vtkStdStringE_SetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkStdString> *op = static_cast<vtkSparseArray<vtkStdString> *>(vp);

  vtkArrayExtents *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayExtents"))
  {
    if (ap.IsBound())
    {
      op->SetExtents(*temp0);
    }
    else
    {
      op->vtkSparseArray<vtkStdString>::SetExtents(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_I12vtkStdStringE_AddValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkStdString> *op = static_cast<vtkSparseArray<vtkStdString> *>(vp);

  vtkIdType temp0;
  vtkStdString temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddValue(temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<vtkStdString>::AddValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_I12vtkStdStringE_AddValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkStdString> *op = static_cast<vtkSparseArray<vtkStdString> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkStdString temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->AddValue(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSparseArray<vtkStdString>::AddValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_I12vtkStdStringE_AddValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkStdString> *op = static_cast<vtkSparseArray<vtkStdString> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  vtkStdString temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->AddValue(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkSparseArray<vtkStdString>::AddValue(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_I12vtkStdStringE_AddValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkStdString> *op = static_cast<vtkSparseArray<vtkStdString> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkStdString temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddValue(*temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<vtkStdString>::AddValue(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_I12vtkStdStringE_AddValue_Methods[] = {
  {nullptr, PyvtkSparseArray_I12vtkStdStringE_AddValue_s1, METH_VARARGS,
   "@ks"},
  {nullptr, PyvtkSparseArray_I12vtkStdStringE_AddValue_s4, METH_VARARGS,
   "@Ws vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSparseArray_I12vtkStdStringE_AddValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_I12vtkStdStringE_AddValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSparseArray_I12vtkStdStringE_AddValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_I12vtkStdStringE_AddValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddValue");
  return nullptr;
}



static PyObject *
PyvtkSparseArray_I12vtkStdStringE_Validate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Validate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkStdString> *op = static_cast<vtkSparseArray<vtkStdString> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->Validate() :
      op->vtkSparseArray<vtkStdString>::Validate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSparseArray_I12vtkStdStringE_Methods[] = {
  {"IsTypeOf", PyvtkSparseArray_I12vtkStdStringE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSparseArray_I12vtkStdStringE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSparseArray_I12vtkStdStringE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSparseArray_I12vtkStdStringE\nC++: static vtkSparseArray<vtkStdString> *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSparseArray_I12vtkStdStringE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSparseArray_I12vtkStdStringE\nC++: vtkSparseArray<vtkStdString> *NewInstance()\n\n"},
  {"IsDense", PyvtkSparseArray_I12vtkStdStringE_IsDense, METH_VARARGS,
   "V.IsDense() -> bool\nC++: bool IsDense() override;\n\nReturns true iff the underlying array storage is \"dense\", i.e.\nthat GetSize() and GetNonNullSize() will always return the same\nvalue. If not, the array is \"sparse\".\n"},
  {"GetExtents", PyvtkSparseArray_I12vtkStdStringE_GetExtents, METH_VARARGS,
   "V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents() override;\n\nReturns the extents (the number of dimensions and size along each\ndimension) of the array.\n"},
  {"GetNonNullSize", PyvtkSparseArray_I12vtkStdStringE_GetNonNullSize, METH_VARARGS,
   "V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize() override;\n\nReturns the number of non-null values stored in the array.  Note\nthat this value will equal GetSize() for dense arrays, and will\nbe less-than-or-equal to GetSize() for sparse arrays.\n"},
  {"GetCoordinatesN", PyvtkSparseArray_I12vtkStdStringE_GetCoordinatesN, METH_VARARGS,
   "V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates) override;\n\nReturns the coordinates of the n-th value in the array, where n\nis in the range [0, GetNonNullSize()).  Note that the order in\nwhich coordinates are visited is undefined, but is guaranteed to\nmatch the order in which values are visited using\nvtkTypedArray::GetValueN() and vtkTypedArray::SetValueN().\n"},
  {"DeepCopy", PyvtkSparseArray_I12vtkStdStringE_DeepCopy, METH_VARARGS,
   "V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy() override;\n\nReturns a new array that is a deep copy of this array.\n"},
  {"GetValue", PyvtkSparseArray_I12vtkStdStringE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> string\nC++: const vtkStdString &GetValue(CoordinateT i) override;\nV.GetValue(int, int) -> string\nC++: const vtkStdString &GetValue(CoordinateT i, CoordinateT j)\n    override;\nV.GetValue(int, int, int) -> string\nC++: const vtkStdString &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k) override;\nV.GetValue(vtkArrayCoordinates) -> string\nC++: const vtkStdString &GetValue(\n    const vtkArrayCoordinates &coordinates) override;\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetValueN", PyvtkSparseArray_I12vtkStdStringE_GetValueN, METH_VARARGS,
   "V.GetValueN(int) -> string\nC++: const vtkStdString &GetValueN(const SizeT n) override;\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetValue", PyvtkSparseArray_I12vtkStdStringE_SetValue, METH_VARARGS,
   "V.SetValue(int, string)\nC++: void SetValue(CoordinateT i, const vtkStdString &value)\n    override;\nV.SetValue(int, int, string)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const vtkStdString &value) override;\nV.SetValue(int, int, int, string)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const vtkStdString &value) override;\nV.SetValue(vtkArrayCoordinates, string)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const vtkStdString &value) override;\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetValueN", PyvtkSparseArray_I12vtkStdStringE_SetValueN, METH_VARARGS,
   "V.SetValueN(int, string)\nC++: void SetValueN(const SizeT n, const vtkStdString &value)\n    override;\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetNullValue", PyvtkSparseArray_I12vtkStdStringE_SetNullValue, METH_VARARGS,
   "V.SetNullValue(string)\nC++: void SetNullValue(const vtkStdString &value)\n\nSet the value that will be returned by GetValue() for nullptr\nareas of the array.\n"},
  {"GetNullValue", PyvtkSparseArray_I12vtkStdStringE_GetNullValue, METH_VARARGS,
   "V.GetNullValue() -> string\nC++: const vtkStdString &GetNullValue()\n\nReturns the value that will be returned by GetValue() for nullptr\nareas of the array.\n"},
  {"Clear", PyvtkSparseArray_I12vtkStdStringE_Clear, METH_VARARGS,
   "V.Clear()\nC++: void Clear()\n\nRemove all non-null elements from the array, leaving the number\nof dimensions, the extent of each dimension, and the label for\neach dimension unchanged.\n"},
  {"Sort", PyvtkSparseArray_I12vtkStdStringE_Sort, METH_VARARGS,
   "V.Sort(vtkArraySort)\nC++: void Sort(const vtkArraySort &sort)\n\nSorts array values so that their coordinates appear in some\nwell-defined order. The supplied vtkArraySort object controls\nwhich dimensions are sorted, and in what order, and should\ncontain one-or-more sort dimensions, up to the number of\ndimensions stored in the array.\n"},
  {"GetCoordinateStorage", PyvtkSparseArray_I12vtkStdStringE_GetCoordinateStorage, METH_VARARGS,
   "V.GetCoordinateStorage(int) -> (int, ...)\nC++: CoordinateT *GetCoordinateStorage(DimensionT dimension)\n\nReturn a mutable reference to the underlying coordinate storage. \nCoordinates for each dimension are stored contiguously as a\none-dimensional array.  The ordering of coordinates within the\narray depends on the order in which values were added to the\narray, and any subsequent sorting.  Use at your own risk!\n"},
  {"ReserveStorage", PyvtkSparseArray_I12vtkStdStringE_ReserveStorage, METH_VARARGS,
   "V.ReserveStorage(int)\nC++: void ReserveStorage(const SizeT value_count)\n\nReserve storage for a specific number of values.  This is useful\nfor reading external data using GetCoordinateStorage() and\nGetValueStorage(), when the total number of non-nullptr values in\nthe array can be determined in advance.  Note that after calling\nReserveStorage(), all coordinates and values will be undefined,\nso you must ensure that every set of coordinates and values is\noverwritten.  It is the caller's responsibility to ensure that\nduplicate coordinates are not inserted into the array.\n"},
  {"SetExtentsFromContents", PyvtkSparseArray_I12vtkStdStringE_SetExtentsFromContents, METH_VARARGS,
   "V.SetExtentsFromContents()\nC++: void SetExtentsFromContents()\n\nUpdate the array extents to match its contents, so that the\nextent along each dimension matches the maximum index value along\nthat dimension.\n"},
  {"SetExtents", PyvtkSparseArray_I12vtkStdStringE_SetExtents, METH_VARARGS,
   "V.SetExtents(vtkArrayExtents)\nC++: void SetExtents(const vtkArrayExtents &extents)\n\nSpecify arbitrary array extents, without altering the contents of\nthe array.  Note that the extents must be as-large-or-larger-than\nthe extents of the actual values stored in the array.  The number\nof dimensions in the supplied extents must match the number of\ndimensions currently stored in the array.\n"},
  {"AddValue", PyvtkSparseArray_I12vtkStdStringE_AddValue, METH_VARARGS,
   "V.AddValue(int, string)\nC++: void AddValue(CoordinateT i, const vtkStdString &value)\nV.AddValue(int, int, string)\nC++: void AddValue(CoordinateT i, CoordinateT j,\n    const vtkStdString &value)\nV.AddValue(int, int, int, string)\nC++: void AddValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const vtkStdString &value)\nV.AddValue(vtkArrayCoordinates, string)\nC++: void AddValue(const vtkArrayCoordinates &coordinates,\n    const vtkStdString &value)\n\nAdds a new non-null element to the array.  Does not test to see\nif an element with matching coordinates already exists.  Useful\nfor providing fast initialization of the array as long as the\ncaller is prepared to guarantee that no duplicate coordinates are\never used.\n"},
  {"Validate", PyvtkSparseArray_I12vtkStdStringE_Validate, METH_VARARGS,
   "V.Validate() -> bool\nC++: bool Validate()\n\nValidate the contents of the array, returning false if there are\nany problems. Potential problems include duplicate coordinates,\nwhich can be introduced into the array either through AddValue()\nor direct access to coordinates storage; and coordinates\nout-of-bounds given the current array extents.\n\n* Note that Validate() is a heavyweight O(N log N) operation that\nis intended for\n* temporary use during debugging.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSparseArray_I12vtkStdStringE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkSparseArray_I12vtkStdStringE", // tp_name
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
  PyvtkSparseArray_I12vtkStdStringE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSparseArray_I12vtkStdStringE_StaticNew()
{
  return vtkSparseArray<vtkStdString>::New();
}

PyObject *PyvtkSparseArray_I12vtkStdStringE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSparseArray_I12vtkStdStringE_Type, PyvtkSparseArray_I12vtkStdStringE_Methods,
    typeid(vtkSparseArray<vtkStdString>).name(),
 &PyvtkSparseArray_I12vtkStdStringE_StaticNew);

  PyTypeObject *pytype = &PyvtkSparseArray_I12vtkStdStringE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkTypedArray_I12vtkStdStringE_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSparseArray_I16vtkUnicodeStringE_ClassNew(); }

#ifndef DECLARED_PyvtkTypedArray_I16vtkUnicodeStringE_ClassNew
extern "C" { PyObject *PyvtkTypedArray_I16vtkUnicodeStringE_ClassNew(); }
#define DECLARED_PyvtkTypedArray_I16vtkUnicodeStringE_ClassNew
#endif

static const char *PyvtkSparseArray_I16vtkUnicodeStringE_Doc =
  "vtkSparseArray- Sparse, independent coordinate storage for N-way\narrays.\n\n"
  "Superclass: vtkTypedArray[unicode]\n\n"
  "vtkSparseArray is a concrete vtkArray implementation that stores\n"
  "values using sparse independent coordinate storage.  This means that\n"
  "the array stores the complete set of coordinates and the value for\n"
  "each non-null value in the array. While this approach requires\n"
  "slightly more storage than other sparse storage schemes (such as\n"
  "Compressed-Row or Compressed-Column), it is easier and more efficient\n"
  "to work with when implementing algorithms, and it generalizes well\n"
  "for arbitrary numbers of dimensions.\n\n"
  "In addition to the value retrieval and update methods provided by\n"
  "vtkTypedArray, vtkSparseArray provides methods to:\n\n"
  "Get and set a special 'null' value that will be returned when\n"
  "retrieving values for undefined coordinates.\n\n"
  "Clear the contents of the array so that every set of coordinates is\n"
  "undefined.\n\n"
  "Sort the array contents so that value coordinates can be visited in a\n"
  "specific order.\n\n"
  "Retrieve pointers to the value- and coordinate-storage memory blocks.\n\n"
  "Reserve storage for a specific number of non-null values, for\n"
  "efficiency when the number of non-null values is known in advance.\n\n"
  "Recompute the array extents so that they bound the largest set of\n"
  "non-nullptr values along each dimension.\n\n"
  "Specify arbitrary array extents.\n\n"
  "Add values to the array in amortized-constant time.\n\n"
  "Validate that the array does not contain duplicate coordinates.\n\n"
  "@sa\n"
  "vtkArray, vtkTypedArray, vtkDenseArray\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";


static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSparseArray<vtkUnicodeString>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkUnicodeString> *op = static_cast<vtkSparseArray<vtkUnicodeString> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSparseArray<vtkUnicodeString>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSparseArray<vtkUnicodeString> *tempr = vtkSparseArray<vtkUnicodeString>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkUnicodeString> *op = static_cast<vtkSparseArray<vtkUnicodeString> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSparseArray<vtkUnicodeString> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSparseArray<vtkUnicodeString>::NewInstance());

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
PyvtkSparseArray_I16vtkUnicodeStringE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkUnicodeString> *op = static_cast<vtkSparseArray<vtkUnicodeString> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkSparseArray<vtkUnicodeString>::IsDense());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkUnicodeString> *op = static_cast<vtkSparseArray<vtkUnicodeString> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkSparseArray<vtkUnicodeString>::GetExtents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkUnicodeString> *op = static_cast<vtkSparseArray<vtkUnicodeString> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkSparseArray<vtkUnicodeString>::GetNonNullSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkUnicodeString> *op = static_cast<vtkSparseArray<vtkUnicodeString> *>(vp);

  unsigned long long temp0;
  vtkArrayCoordinates *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, "vtkArrayCoordinates"))
  {
    if (ap.IsBound())
    {
      op->GetCoordinatesN(temp0, *temp1);
    }
    else
    {
      op->vtkSparseArray<vtkUnicodeString>::GetCoordinatesN(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkUnicodeString> *op = static_cast<vtkSparseArray<vtkUnicodeString> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkSparseArray<vtkUnicodeString>::DeepCopy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkUnicodeString> *op = static_cast<vtkSparseArray<vtkUnicodeString> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const vtkUnicodeString *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkSparseArray<vtkUnicodeString>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkUnicodeString> *op = static_cast<vtkSparseArray<vtkUnicodeString> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const vtkUnicodeString *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkSparseArray<vtkUnicodeString>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkUnicodeString> *op = static_cast<vtkSparseArray<vtkUnicodeString> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    const vtkUnicodeString *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1, temp2) :
      &op->vtkSparseArray<vtkUnicodeString>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkUnicodeString> *op = static_cast<vtkSparseArray<vtkUnicodeString> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    const vtkUnicodeString *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkSparseArray<vtkUnicodeString>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_I16vtkUnicodeStringE_GetValue_Methods[] = {
  {nullptr, PyvtkSparseArray_I16vtkUnicodeStringE_GetValue_s1, METH_VARARGS,
   "@k"},
  {nullptr, PyvtkSparseArray_I16vtkUnicodeStringE_GetValue_s4, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_I16vtkUnicodeStringE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSparseArray_I16vtkUnicodeStringE_GetValue_s2(self, args);
    case 3:
      return PyvtkSparseArray_I16vtkUnicodeStringE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return nullptr;
}



static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkUnicodeString> *op = static_cast<vtkSparseArray<vtkUnicodeString> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const vtkUnicodeString *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkSparseArray<vtkUnicodeString>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkUnicodeString> *op = static_cast<vtkSparseArray<vtkUnicodeString> *>(vp);

  vtkIdType temp0;
  vtkUnicodeString temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<vtkUnicodeString>::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkUnicodeString> *op = static_cast<vtkSparseArray<vtkUnicodeString> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkUnicodeString temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSparseArray<vtkUnicodeString>::SetValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkUnicodeString> *op = static_cast<vtkSparseArray<vtkUnicodeString> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  vtkUnicodeString temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkSparseArray<vtkUnicodeString>::SetValue(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkUnicodeString> *op = static_cast<vtkSparseArray<vtkUnicodeString> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkUnicodeString temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(*temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<vtkUnicodeString>::SetValue(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_I16vtkUnicodeStringE_SetValue_Methods[] = {
  {nullptr, PyvtkSparseArray_I16vtkUnicodeStringE_SetValue_s1, METH_VARARGS,
   "@ku"},
  {nullptr, PyvtkSparseArray_I16vtkUnicodeStringE_SetValue_s4, METH_VARARGS,
   "@Wu vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_I16vtkUnicodeStringE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSparseArray_I16vtkUnicodeStringE_SetValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_I16vtkUnicodeStringE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return nullptr;
}



static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkUnicodeString> *op = static_cast<vtkSparseArray<vtkUnicodeString> *>(vp);

  unsigned long long temp0;
  vtkUnicodeString temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValueN(temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<vtkUnicodeString>::SetValueN(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_SetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkUnicodeString> *op = static_cast<vtkSparseArray<vtkUnicodeString> *>(vp);

  vtkUnicodeString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNullValue(temp0);
    }
    else
    {
      op->vtkSparseArray<vtkUnicodeString>::SetNullValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_GetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkUnicodeString> *op = static_cast<vtkSparseArray<vtkUnicodeString> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkUnicodeString *tempr = (ap.IsBound() ?
      &op->GetNullValue() :
      &op->vtkSparseArray<vtkUnicodeString>::GetNullValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkUnicodeString> *op = static_cast<vtkSparseArray<vtkUnicodeString> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Clear();
    }
    else
    {
      op->vtkSparseArray<vtkUnicodeString>::Clear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_Sort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Sort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkUnicodeString> *op = static_cast<vtkSparseArray<vtkUnicodeString> *>(vp);

  vtkArraySort *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArraySort"))
  {
    if (ap.IsBound())
    {
      op->Sort(*temp0);
    }
    else
    {
      op->vtkSparseArray<vtkUnicodeString>::Sort(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_GetCoordinateStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkUnicodeString> *op = static_cast<vtkSparseArray<vtkUnicodeString> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType *tempr = (ap.IsBound() ?
      op->GetCoordinateStorage(temp0) :
      op->vtkSparseArray<vtkUnicodeString>::GetCoordinateStorage(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_ReserveStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReserveStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkUnicodeString> *op = static_cast<vtkSparseArray<vtkUnicodeString> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ReserveStorage(temp0);
    }
    else
    {
      op->vtkSparseArray<vtkUnicodeString>::ReserveStorage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_SetExtentsFromContents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtentsFromContents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkUnicodeString> *op = static_cast<vtkSparseArray<vtkUnicodeString> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtentsFromContents();
    }
    else
    {
      op->vtkSparseArray<vtkUnicodeString>::SetExtentsFromContents();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_SetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkUnicodeString> *op = static_cast<vtkSparseArray<vtkUnicodeString> *>(vp);

  vtkArrayExtents *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayExtents"))
  {
    if (ap.IsBound())
    {
      op->SetExtents(*temp0);
    }
    else
    {
      op->vtkSparseArray<vtkUnicodeString>::SetExtents(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_AddValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkUnicodeString> *op = static_cast<vtkSparseArray<vtkUnicodeString> *>(vp);

  vtkIdType temp0;
  vtkUnicodeString temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddValue(temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<vtkUnicodeString>::AddValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_AddValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkUnicodeString> *op = static_cast<vtkSparseArray<vtkUnicodeString> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkUnicodeString temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->AddValue(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSparseArray<vtkUnicodeString>::AddValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_AddValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkUnicodeString> *op = static_cast<vtkSparseArray<vtkUnicodeString> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  vtkUnicodeString temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->AddValue(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkSparseArray<vtkUnicodeString>::AddValue(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_AddValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkUnicodeString> *op = static_cast<vtkSparseArray<vtkUnicodeString> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkUnicodeString temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddValue(*temp0, temp1);
    }
    else
    {
      op->vtkSparseArray<vtkUnicodeString>::AddValue(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_I16vtkUnicodeStringE_AddValue_Methods[] = {
  {nullptr, PyvtkSparseArray_I16vtkUnicodeStringE_AddValue_s1, METH_VARARGS,
   "@ku"},
  {nullptr, PyvtkSparseArray_I16vtkUnicodeStringE_AddValue_s4, METH_VARARGS,
   "@Wu vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_AddValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_I16vtkUnicodeStringE_AddValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSparseArray_I16vtkUnicodeStringE_AddValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_I16vtkUnicodeStringE_AddValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddValue");
  return nullptr;
}



static PyObject *
PyvtkSparseArray_I16vtkUnicodeStringE_Validate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Validate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkUnicodeString> *op = static_cast<vtkSparseArray<vtkUnicodeString> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->Validate() :
      op->vtkSparseArray<vtkUnicodeString>::Validate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSparseArray_I16vtkUnicodeStringE_Methods[] = {
  {"IsTypeOf", PyvtkSparseArray_I16vtkUnicodeStringE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSparseArray_I16vtkUnicodeStringE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSparseArray_I16vtkUnicodeStringE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkSparseArray_I16vtkUnicodeStringE\nC++: static vtkSparseArray<vtkUnicodeString> *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSparseArray_I16vtkUnicodeStringE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSparseArray_I16vtkUnicodeStringE\nC++: vtkSparseArray<vtkUnicodeString> *NewInstance()\n\n"},
  {"IsDense", PyvtkSparseArray_I16vtkUnicodeStringE_IsDense, METH_VARARGS,
   "V.IsDense() -> bool\nC++: bool IsDense() override;\n\nReturns true iff the underlying array storage is \"dense\", i.e.\nthat GetSize() and GetNonNullSize() will always return the same\nvalue. If not, the array is \"sparse\".\n"},
  {"GetExtents", PyvtkSparseArray_I16vtkUnicodeStringE_GetExtents, METH_VARARGS,
   "V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents() override;\n\nReturns the extents (the number of dimensions and size along each\ndimension) of the array.\n"},
  {"GetNonNullSize", PyvtkSparseArray_I16vtkUnicodeStringE_GetNonNullSize, METH_VARARGS,
   "V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize() override;\n\nReturns the number of non-null values stored in the array.  Note\nthat this value will equal GetSize() for dense arrays, and will\nbe less-than-or-equal to GetSize() for sparse arrays.\n"},
  {"GetCoordinatesN", PyvtkSparseArray_I16vtkUnicodeStringE_GetCoordinatesN, METH_VARARGS,
   "V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates) override;\n\nReturns the coordinates of the n-th value in the array, where n\nis in the range [0, GetNonNullSize()).  Note that the order in\nwhich coordinates are visited is undefined, but is guaranteed to\nmatch the order in which values are visited using\nvtkTypedArray::GetValueN() and vtkTypedArray::SetValueN().\n"},
  {"DeepCopy", PyvtkSparseArray_I16vtkUnicodeStringE_DeepCopy, METH_VARARGS,
   "V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy() override;\n\nReturns a new array that is a deep copy of this array.\n"},
  {"GetValue", PyvtkSparseArray_I16vtkUnicodeStringE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> unicode\nC++: const vtkUnicodeString &GetValue(CoordinateT i) override;\nV.GetValue(int, int) -> unicode\nC++: const vtkUnicodeString &GetValue(CoordinateT i,\n    CoordinateT j) override;\nV.GetValue(int, int, int) -> unicode\nC++: const vtkUnicodeString &GetValue(CoordinateT i,\n    CoordinateT j, CoordinateT k) override;\nV.GetValue(vtkArrayCoordinates) -> unicode\nC++: const vtkUnicodeString &GetValue(\n    const vtkArrayCoordinates &coordinates) override;\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetValueN", PyvtkSparseArray_I16vtkUnicodeStringE_GetValueN, METH_VARARGS,
   "V.GetValueN(int) -> unicode\nC++: const vtkUnicodeString &GetValueN(const SizeT n) override;\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetValue", PyvtkSparseArray_I16vtkUnicodeStringE_SetValue, METH_VARARGS,
   "V.SetValue(int, unicode)\nC++: void SetValue(CoordinateT i, const vtkUnicodeString &value)\n    override;\nV.SetValue(int, int, unicode)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const vtkUnicodeString &value) override;\nV.SetValue(int, int, int, unicode)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const vtkUnicodeString &value) override;\nV.SetValue(vtkArrayCoordinates, unicode)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const vtkUnicodeString &value) override;\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetValueN", PyvtkSparseArray_I16vtkUnicodeStringE_SetValueN, METH_VARARGS,
   "V.SetValueN(int, unicode)\nC++: void SetValueN(const SizeT n, const vtkUnicodeString &value)\n    override;\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetNullValue", PyvtkSparseArray_I16vtkUnicodeStringE_SetNullValue, METH_VARARGS,
   "V.SetNullValue(unicode)\nC++: void SetNullValue(const vtkUnicodeString &value)\n\nSet the value that will be returned by GetValue() for nullptr\nareas of the array.\n"},
  {"GetNullValue", PyvtkSparseArray_I16vtkUnicodeStringE_GetNullValue, METH_VARARGS,
   "V.GetNullValue() -> unicode\nC++: const vtkUnicodeString &GetNullValue()\n\nReturns the value that will be returned by GetValue() for nullptr\nareas of the array.\n"},
  {"Clear", PyvtkSparseArray_I16vtkUnicodeStringE_Clear, METH_VARARGS,
   "V.Clear()\nC++: void Clear()\n\nRemove all non-null elements from the array, leaving the number\nof dimensions, the extent of each dimension, and the label for\neach dimension unchanged.\n"},
  {"Sort", PyvtkSparseArray_I16vtkUnicodeStringE_Sort, METH_VARARGS,
   "V.Sort(vtkArraySort)\nC++: void Sort(const vtkArraySort &sort)\n\nSorts array values so that their coordinates appear in some\nwell-defined order. The supplied vtkArraySort object controls\nwhich dimensions are sorted, and in what order, and should\ncontain one-or-more sort dimensions, up to the number of\ndimensions stored in the array.\n"},
  {"GetCoordinateStorage", PyvtkSparseArray_I16vtkUnicodeStringE_GetCoordinateStorage, METH_VARARGS,
   "V.GetCoordinateStorage(int) -> (int, ...)\nC++: CoordinateT *GetCoordinateStorage(DimensionT dimension)\n\nReturn a mutable reference to the underlying coordinate storage. \nCoordinates for each dimension are stored contiguously as a\none-dimensional array.  The ordering of coordinates within the\narray depends on the order in which values were added to the\narray, and any subsequent sorting.  Use at your own risk!\n"},
  {"ReserveStorage", PyvtkSparseArray_I16vtkUnicodeStringE_ReserveStorage, METH_VARARGS,
   "V.ReserveStorage(int)\nC++: void ReserveStorage(const SizeT value_count)\n\nReserve storage for a specific number of values.  This is useful\nfor reading external data using GetCoordinateStorage() and\nGetValueStorage(), when the total number of non-nullptr values in\nthe array can be determined in advance.  Note that after calling\nReserveStorage(), all coordinates and values will be undefined,\nso you must ensure that every set of coordinates and values is\noverwritten.  It is the caller's responsibility to ensure that\nduplicate coordinates are not inserted into the array.\n"},
  {"SetExtentsFromContents", PyvtkSparseArray_I16vtkUnicodeStringE_SetExtentsFromContents, METH_VARARGS,
   "V.SetExtentsFromContents()\nC++: void SetExtentsFromContents()\n\nUpdate the array extents to match its contents, so that the\nextent along each dimension matches the maximum index value along\nthat dimension.\n"},
  {"SetExtents", PyvtkSparseArray_I16vtkUnicodeStringE_SetExtents, METH_VARARGS,
   "V.SetExtents(vtkArrayExtents)\nC++: void SetExtents(const vtkArrayExtents &extents)\n\nSpecify arbitrary array extents, without altering the contents of\nthe array.  Note that the extents must be as-large-or-larger-than\nthe extents of the actual values stored in the array.  The number\nof dimensions in the supplied extents must match the number of\ndimensions currently stored in the array.\n"},
  {"AddValue", PyvtkSparseArray_I16vtkUnicodeStringE_AddValue, METH_VARARGS,
   "V.AddValue(int, unicode)\nC++: void AddValue(CoordinateT i, const vtkUnicodeString &value)\nV.AddValue(int, int, unicode)\nC++: void AddValue(CoordinateT i, CoordinateT j,\n    const vtkUnicodeString &value)\nV.AddValue(int, int, int, unicode)\nC++: void AddValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const vtkUnicodeString &value)\nV.AddValue(vtkArrayCoordinates, unicode)\nC++: void AddValue(const vtkArrayCoordinates &coordinates,\n    const vtkUnicodeString &value)\n\nAdds a new non-null element to the array.  Does not test to see\nif an element with matching coordinates already exists.  Useful\nfor providing fast initialization of the array as long as the\ncaller is prepared to guarantee that no duplicate coordinates are\never used.\n"},
  {"Validate", PyvtkSparseArray_I16vtkUnicodeStringE_Validate, METH_VARARGS,
   "V.Validate() -> bool\nC++: bool Validate()\n\nValidate the contents of the array, returning false if there are\nany problems. Potential problems include duplicate coordinates,\nwhich can be introduced into the array either through AddValue()\nor direct access to coordinates storage; and coordinates\nout-of-bounds given the current array extents.\n\n* Note that Validate() is a heavyweight O(N log N) operation that\nis intended for\n* temporary use during debugging.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSparseArray_I16vtkUnicodeStringE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkSparseArray_I16vtkUnicodeStringE", // tp_name
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
  PyvtkSparseArray_I16vtkUnicodeStringE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSparseArray_I16vtkUnicodeStringE_StaticNew()
{
  return vtkSparseArray<vtkUnicodeString>::New();
}

PyObject *PyvtkSparseArray_I16vtkUnicodeStringE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSparseArray_I16vtkUnicodeStringE_Type, PyvtkSparseArray_I16vtkUnicodeStringE_Methods,
    typeid(vtkSparseArray<vtkUnicodeString>).name(),
 &PyvtkSparseArray_I16vtkUnicodeStringE_StaticNew);

  PyTypeObject *pytype = &PyvtkSparseArray_I16vtkUnicodeStringE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkTypedArray_I16vtkUnicodeStringE_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSparseArray_I10vtkVariantE_ClassNew(); }

#ifndef DECLARED_PyvtkTypedArray_I10vtkVariantE_ClassNew
extern "C" { PyObject *PyvtkTypedArray_I10vtkVariantE_ClassNew(); }
#define DECLARED_PyvtkTypedArray_I10vtkVariantE_ClassNew
#endif

static const char *PyvtkSparseArray_I10vtkVariantE_Doc =
  "vtkSparseArray- Sparse, independent coordinate storage for N-way\narrays.\n\n"
  "Superclass: vtkTypedArray[vtkVariant]\n\n"
  "vtkSparseArray is a concrete vtkArray implementation that stores\n"
  "values using sparse independent coordinate storage.  This means that\n"
  "the array stores the complete set of coordinates and the value for\n"
  "each non-null value in the array. While this approach requires\n"
  "slightly more storage than other sparse storage schemes (such as\n"
  "Compressed-Row or Compressed-Column), it is easier and more efficient\n"
  "to work with when implementing algorithms, and it generalizes well\n"
  "for arbitrary numbers of dimensions.\n\n"
  "In addition to the value retrieval and update methods provided by\n"
  "vtkTypedArray, vtkSparseArray provides methods to:\n\n"
  "Get and set a special 'null' value that will be returned when\n"
  "retrieving values for undefined coordinates.\n\n"
  "Clear the contents of the array so that every set of coordinates is\n"
  "undefined.\n\n"
  "Sort the array contents so that value coordinates can be visited in a\n"
  "specific order.\n\n"
  "Retrieve pointers to the value- and coordinate-storage memory blocks.\n\n"
  "Reserve storage for a specific number of non-null values, for\n"
  "efficiency when the number of non-null values is known in advance.\n\n"
  "Recompute the array extents so that they bound the largest set of\n"
  "non-nullptr values along each dimension.\n\n"
  "Specify arbitrary array extents.\n\n"
  "Add values to the array in amortized-constant time.\n\n"
  "Validate that the array does not contain duplicate coordinates.\n\n"
  "@sa\n"
  "vtkArray, vtkTypedArray, vtkDenseArray\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";


static PyObject *
PyvtkSparseArray_I10vtkVariantE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSparseArray<vtkVariant>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_I10vtkVariantE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkVariant> *op = static_cast<vtkSparseArray<vtkVariant> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSparseArray<vtkVariant>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_I10vtkVariantE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSparseArray<vtkVariant> *tempr = vtkSparseArray<vtkVariant>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_I10vtkVariantE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkVariant> *op = static_cast<vtkSparseArray<vtkVariant> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSparseArray<vtkVariant> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSparseArray<vtkVariant>::NewInstance());

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
PyvtkSparseArray_I10vtkVariantE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkVariant> *op = static_cast<vtkSparseArray<vtkVariant> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkSparseArray<vtkVariant>::IsDense());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_I10vtkVariantE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkVariant> *op = static_cast<vtkSparseArray<vtkVariant> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkSparseArray<vtkVariant>::GetExtents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_I10vtkVariantE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkVariant> *op = static_cast<vtkSparseArray<vtkVariant> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkSparseArray<vtkVariant>::GetNonNullSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_I10vtkVariantE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkVariant> *op = static_cast<vtkSparseArray<vtkVariant> *>(vp);

  unsigned long long temp0;
  vtkArrayCoordinates *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, "vtkArrayCoordinates"))
  {
    if (ap.IsBound())
    {
      op->GetCoordinatesN(temp0, *temp1);
    }
    else
    {
      op->vtkSparseArray<vtkVariant>::GetCoordinatesN(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_I10vtkVariantE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkVariant> *op = static_cast<vtkSparseArray<vtkVariant> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkSparseArray<vtkVariant>::DeepCopy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_I10vtkVariantE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkVariant> *op = static_cast<vtkSparseArray<vtkVariant> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const vtkVariant *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkSparseArray<vtkVariant>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkVariant");
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_I10vtkVariantE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkVariant> *op = static_cast<vtkSparseArray<vtkVariant> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const vtkVariant *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkSparseArray<vtkVariant>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkVariant");
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_I10vtkVariantE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkVariant> *op = static_cast<vtkSparseArray<vtkVariant> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    const vtkVariant *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1, temp2) :
      &op->vtkSparseArray<vtkVariant>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkVariant");
    }
  }

  return result;
}

static PyObject *
PyvtkSparseArray_I10vtkVariantE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkVariant> *op = static_cast<vtkSparseArray<vtkVariant> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    const vtkVariant *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkSparseArray<vtkVariant>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkVariant");
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSparseArray_I10vtkVariantE_GetValue_Methods[] = {
  {nullptr, PyvtkSparseArray_I10vtkVariantE_GetValue_s1, METH_VARARGS,
   "@k"},
  {nullptr, PyvtkSparseArray_I10vtkVariantE_GetValue_s4, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSparseArray_I10vtkVariantE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_I10vtkVariantE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSparseArray_I10vtkVariantE_GetValue_s2(self, args);
    case 3:
      return PyvtkSparseArray_I10vtkVariantE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return nullptr;
}



static PyObject *
PyvtkSparseArray_I10vtkVariantE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkVariant> *op = static_cast<vtkSparseArray<vtkVariant> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const vtkVariant *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkSparseArray<vtkVariant>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkVariant");
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_I10vtkVariantE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkVariant> *op = static_cast<vtkSparseArray<vtkVariant> *>(vp);

  vtkIdType temp0;
  vtkVariant *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVariant"))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, *temp1);
    }
    else
    {
      op->vtkSparseArray<vtkVariant>::SetValue(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}

static PyObject *
PyvtkSparseArray_I10vtkVariantE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkVariant> *op = static_cast<vtkSparseArray<vtkVariant> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkVariant *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetSpecialObject(temp2, pobj2, "vtkVariant"))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1, *temp2);
    }
    else
    {
      op->vtkSparseArray<vtkVariant>::SetValue(temp0, temp1, *temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj2);

  return result;
}

static PyObject *
PyvtkSparseArray_I10vtkVariantE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkVariant> *op = static_cast<vtkSparseArray<vtkVariant> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  vtkVariant *temp3 = nullptr;
  PyObject *pobj3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetSpecialObject(temp3, pobj3, "vtkVariant"))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1, temp2, *temp3);
    }
    else
    {
      op->vtkSparseArray<vtkVariant>::SetValue(temp0, temp1, temp2, *temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj3);

  return result;
}

static PyObject *
PyvtkSparseArray_I10vtkVariantE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkVariant> *op = static_cast<vtkSparseArray<vtkVariant> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkVariant *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVariant"))
  {
    if (ap.IsBound())
    {
      op->SetValue(*temp0, *temp1);
    }
    else
    {
      op->vtkSparseArray<vtkVariant>::SetValue(*temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkSparseArray_I10vtkVariantE_SetValue_Methods[] = {
  {nullptr, PyvtkSparseArray_I10vtkVariantE_SetValue_s1, METH_VARARGS,
   "@kW vtkVariant"},
  {nullptr, PyvtkSparseArray_I10vtkVariantE_SetValue_s4, METH_VARARGS,
   "@WW vtkArrayCoordinates vtkVariant"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSparseArray_I10vtkVariantE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_I10vtkVariantE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSparseArray_I10vtkVariantE_SetValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_I10vtkVariantE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return nullptr;
}



static PyObject *
PyvtkSparseArray_I10vtkVariantE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkVariant> *op = static_cast<vtkSparseArray<vtkVariant> *>(vp);

  unsigned long long temp0;
  vtkVariant *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVariant"))
  {
    if (ap.IsBound())
    {
      op->SetValueN(temp0, *temp1);
    }
    else
    {
      op->vtkSparseArray<vtkVariant>::SetValueN(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkSparseArray_I10vtkVariantE_SetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkVariant> *op = static_cast<vtkSparseArray<vtkVariant> *>(vp);

  vtkVariant *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant"))
  {
    if (ap.IsBound())
    {
      op->SetNullValue(*temp0);
    }
    else
    {
      op->vtkSparseArray<vtkVariant>::SetNullValue(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_I10vtkVariantE_GetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkVariant> *op = static_cast<vtkSparseArray<vtkVariant> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkVariant *tempr = (ap.IsBound() ?
      &op->GetNullValue() :
      &op->vtkSparseArray<vtkVariant>::GetNullValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkVariant");
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_I10vtkVariantE_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkVariant> *op = static_cast<vtkSparseArray<vtkVariant> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Clear();
    }
    else
    {
      op->vtkSparseArray<vtkVariant>::Clear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_I10vtkVariantE_Sort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Sort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkVariant> *op = static_cast<vtkSparseArray<vtkVariant> *>(vp);

  vtkArraySort *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArraySort"))
  {
    if (ap.IsBound())
    {
      op->Sort(*temp0);
    }
    else
    {
      op->vtkSparseArray<vtkVariant>::Sort(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_I10vtkVariantE_GetCoordinateStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkVariant> *op = static_cast<vtkSparseArray<vtkVariant> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType *tempr = (ap.IsBound() ?
      op->GetCoordinateStorage(temp0) :
      op->vtkSparseArray<vtkVariant>::GetCoordinateStorage(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_I10vtkVariantE_ReserveStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReserveStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkVariant> *op = static_cast<vtkSparseArray<vtkVariant> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ReserveStorage(temp0);
    }
    else
    {
      op->vtkSparseArray<vtkVariant>::ReserveStorage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_I10vtkVariantE_SetExtentsFromContents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtentsFromContents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkVariant> *op = static_cast<vtkSparseArray<vtkVariant> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtentsFromContents();
    }
    else
    {
      op->vtkSparseArray<vtkVariant>::SetExtentsFromContents();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArray_I10vtkVariantE_SetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkVariant> *op = static_cast<vtkSparseArray<vtkVariant> *>(vp);

  vtkArrayExtents *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayExtents"))
  {
    if (ap.IsBound())
    {
      op->SetExtents(*temp0);
    }
    else
    {
      op->vtkSparseArray<vtkVariant>::SetExtents(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSparseArray_I10vtkVariantE_AddValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkVariant> *op = static_cast<vtkSparseArray<vtkVariant> *>(vp);

  vtkIdType temp0;
  vtkVariant *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVariant"))
  {
    if (ap.IsBound())
    {
      op->AddValue(temp0, *temp1);
    }
    else
    {
      op->vtkSparseArray<vtkVariant>::AddValue(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}

static PyObject *
PyvtkSparseArray_I10vtkVariantE_AddValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkVariant> *op = static_cast<vtkSparseArray<vtkVariant> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkVariant *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetSpecialObject(temp2, pobj2, "vtkVariant"))
  {
    if (ap.IsBound())
    {
      op->AddValue(temp0, temp1, *temp2);
    }
    else
    {
      op->vtkSparseArray<vtkVariant>::AddValue(temp0, temp1, *temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj2);

  return result;
}

static PyObject *
PyvtkSparseArray_I10vtkVariantE_AddValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkVariant> *op = static_cast<vtkSparseArray<vtkVariant> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  vtkVariant *temp3 = nullptr;
  PyObject *pobj3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetSpecialObject(temp3, pobj3, "vtkVariant"))
  {
    if (ap.IsBound())
    {
      op->AddValue(temp0, temp1, temp2, *temp3);
    }
    else
    {
      op->vtkSparseArray<vtkVariant>::AddValue(temp0, temp1, temp2, *temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj3);

  return result;
}

static PyObject *
PyvtkSparseArray_I10vtkVariantE_AddValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkVariant> *op = static_cast<vtkSparseArray<vtkVariant> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkVariant *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVariant"))
  {
    if (ap.IsBound())
    {
      op->AddValue(*temp0, *temp1);
    }
    else
    {
      op->vtkSparseArray<vtkVariant>::AddValue(*temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkSparseArray_I10vtkVariantE_AddValue_Methods[] = {
  {nullptr, PyvtkSparseArray_I10vtkVariantE_AddValue_s1, METH_VARARGS,
   "@kW vtkVariant"},
  {nullptr, PyvtkSparseArray_I10vtkVariantE_AddValue_s4, METH_VARARGS,
   "@WW vtkArrayCoordinates vtkVariant"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSparseArray_I10vtkVariantE_AddValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSparseArray_I10vtkVariantE_AddValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSparseArray_I10vtkVariantE_AddValue_s2(self, args);
    case 4:
      return PyvtkSparseArray_I10vtkVariantE_AddValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddValue");
  return nullptr;
}



static PyObject *
PyvtkSparseArray_I10vtkVariantE_Validate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Validate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArray<vtkVariant> *op = static_cast<vtkSparseArray<vtkVariant> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->Validate() :
      op->vtkSparseArray<vtkVariant>::Validate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSparseArray_I10vtkVariantE_Methods[] = {
  {"IsTypeOf", PyvtkSparseArray_I10vtkVariantE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSparseArray_I10vtkVariantE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSparseArray_I10vtkVariantE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSparseArray_I10vtkVariantE\nC++: static vtkSparseArray<vtkVariant> *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSparseArray_I10vtkVariantE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSparseArray_I10vtkVariantE\nC++: vtkSparseArray<vtkVariant> *NewInstance()\n\n"},
  {"IsDense", PyvtkSparseArray_I10vtkVariantE_IsDense, METH_VARARGS,
   "V.IsDense() -> bool\nC++: bool IsDense() override;\n\nReturns true iff the underlying array storage is \"dense\", i.e.\nthat GetSize() and GetNonNullSize() will always return the same\nvalue. If not, the array is \"sparse\".\n"},
  {"GetExtents", PyvtkSparseArray_I10vtkVariantE_GetExtents, METH_VARARGS,
   "V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents() override;\n\nReturns the extents (the number of dimensions and size along each\ndimension) of the array.\n"},
  {"GetNonNullSize", PyvtkSparseArray_I10vtkVariantE_GetNonNullSize, METH_VARARGS,
   "V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize() override;\n\nReturns the number of non-null values stored in the array.  Note\nthat this value will equal GetSize() for dense arrays, and will\nbe less-than-or-equal to GetSize() for sparse arrays.\n"},
  {"GetCoordinatesN", PyvtkSparseArray_I10vtkVariantE_GetCoordinatesN, METH_VARARGS,
   "V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates) override;\n\nReturns the coordinates of the n-th value in the array, where n\nis in the range [0, GetNonNullSize()).  Note that the order in\nwhich coordinates are visited is undefined, but is guaranteed to\nmatch the order in which values are visited using\nvtkTypedArray::GetValueN() and vtkTypedArray::SetValueN().\n"},
  {"DeepCopy", PyvtkSparseArray_I10vtkVariantE_DeepCopy, METH_VARARGS,
   "V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy() override;\n\nReturns a new array that is a deep copy of this array.\n"},
  {"GetValue", PyvtkSparseArray_I10vtkVariantE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> vtkVariant\nC++: const vtkVariant &GetValue(CoordinateT i) override;\nV.GetValue(int, int) -> vtkVariant\nC++: const vtkVariant &GetValue(CoordinateT i, CoordinateT j)\n    override;\nV.GetValue(int, int, int) -> vtkVariant\nC++: const vtkVariant &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k) override;\nV.GetValue(vtkArrayCoordinates) -> vtkVariant\nC++: const vtkVariant &GetValue(\n    const vtkArrayCoordinates &coordinates) override;\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetValueN", PyvtkSparseArray_I10vtkVariantE_GetValueN, METH_VARARGS,
   "V.GetValueN(int) -> vtkVariant\nC++: const vtkVariant &GetValueN(const SizeT n) override;\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetValue", PyvtkSparseArray_I10vtkVariantE_SetValue, METH_VARARGS,
   "V.SetValue(int, vtkVariant)\nC++: void SetValue(CoordinateT i, const vtkVariant &value)\n    override;\nV.SetValue(int, int, vtkVariant)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const vtkVariant &value) override;\nV.SetValue(int, int, int, vtkVariant)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const vtkVariant &value) override;\nV.SetValue(vtkArrayCoordinates, vtkVariant)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const vtkVariant &value) override;\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetValueN", PyvtkSparseArray_I10vtkVariantE_SetValueN, METH_VARARGS,
   "V.SetValueN(int, vtkVariant)\nC++: void SetValueN(const SizeT n, const vtkVariant &value)\n    override;\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetNullValue", PyvtkSparseArray_I10vtkVariantE_SetNullValue, METH_VARARGS,
   "V.SetNullValue(vtkVariant)\nC++: void SetNullValue(const vtkVariant &value)\n\nSet the value that will be returned by GetValue() for nullptr\nareas of the array.\n"},
  {"GetNullValue", PyvtkSparseArray_I10vtkVariantE_GetNullValue, METH_VARARGS,
   "V.GetNullValue() -> vtkVariant\nC++: const vtkVariant &GetNullValue()\n\nReturns the value that will be returned by GetValue() for nullptr\nareas of the array.\n"},
  {"Clear", PyvtkSparseArray_I10vtkVariantE_Clear, METH_VARARGS,
   "V.Clear()\nC++: void Clear()\n\nRemove all non-null elements from the array, leaving the number\nof dimensions, the extent of each dimension, and the label for\neach dimension unchanged.\n"},
  {"Sort", PyvtkSparseArray_I10vtkVariantE_Sort, METH_VARARGS,
   "V.Sort(vtkArraySort)\nC++: void Sort(const vtkArraySort &sort)\n\nSorts array values so that their coordinates appear in some\nwell-defined order. The supplied vtkArraySort object controls\nwhich dimensions are sorted, and in what order, and should\ncontain one-or-more sort dimensions, up to the number of\ndimensions stored in the array.\n"},
  {"GetCoordinateStorage", PyvtkSparseArray_I10vtkVariantE_GetCoordinateStorage, METH_VARARGS,
   "V.GetCoordinateStorage(int) -> (int, ...)\nC++: CoordinateT *GetCoordinateStorage(DimensionT dimension)\n\nReturn a mutable reference to the underlying coordinate storage. \nCoordinates for each dimension are stored contiguously as a\none-dimensional array.  The ordering of coordinates within the\narray depends on the order in which values were added to the\narray, and any subsequent sorting.  Use at your own risk!\n"},
  {"ReserveStorage", PyvtkSparseArray_I10vtkVariantE_ReserveStorage, METH_VARARGS,
   "V.ReserveStorage(int)\nC++: void ReserveStorage(const SizeT value_count)\n\nReserve storage for a specific number of values.  This is useful\nfor reading external data using GetCoordinateStorage() and\nGetValueStorage(), when the total number of non-nullptr values in\nthe array can be determined in advance.  Note that after calling\nReserveStorage(), all coordinates and values will be undefined,\nso you must ensure that every set of coordinates and values is\noverwritten.  It is the caller's responsibility to ensure that\nduplicate coordinates are not inserted into the array.\n"},
  {"SetExtentsFromContents", PyvtkSparseArray_I10vtkVariantE_SetExtentsFromContents, METH_VARARGS,
   "V.SetExtentsFromContents()\nC++: void SetExtentsFromContents()\n\nUpdate the array extents to match its contents, so that the\nextent along each dimension matches the maximum index value along\nthat dimension.\n"},
  {"SetExtents", PyvtkSparseArray_I10vtkVariantE_SetExtents, METH_VARARGS,
   "V.SetExtents(vtkArrayExtents)\nC++: void SetExtents(const vtkArrayExtents &extents)\n\nSpecify arbitrary array extents, without altering the contents of\nthe array.  Note that the extents must be as-large-or-larger-than\nthe extents of the actual values stored in the array.  The number\nof dimensions in the supplied extents must match the number of\ndimensions currently stored in the array.\n"},
  {"AddValue", PyvtkSparseArray_I10vtkVariantE_AddValue, METH_VARARGS,
   "V.AddValue(int, vtkVariant)\nC++: void AddValue(CoordinateT i, const vtkVariant &value)\nV.AddValue(int, int, vtkVariant)\nC++: void AddValue(CoordinateT i, CoordinateT j,\n    const vtkVariant &value)\nV.AddValue(int, int, int, vtkVariant)\nC++: void AddValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const vtkVariant &value)\nV.AddValue(vtkArrayCoordinates, vtkVariant)\nC++: void AddValue(const vtkArrayCoordinates &coordinates,\n    const vtkVariant &value)\n\nAdds a new non-null element to the array.  Does not test to see\nif an element with matching coordinates already exists.  Useful\nfor providing fast initialization of the array as long as the\ncaller is prepared to guarantee that no duplicate coordinates are\never used.\n"},
  {"Validate", PyvtkSparseArray_I10vtkVariantE_Validate, METH_VARARGS,
   "V.Validate() -> bool\nC++: bool Validate()\n\nValidate the contents of the array, returning false if there are\nany problems. Potential problems include duplicate coordinates,\nwhich can be introduced into the array either through AddValue()\nor direct access to coordinates storage; and coordinates\nout-of-bounds given the current array extents.\n\n* Note that Validate() is a heavyweight O(N log N) operation that\nis intended for\n* temporary use during debugging.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSparseArray_I10vtkVariantE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkSparseArray_I10vtkVariantE", // tp_name
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
  PyvtkSparseArray_I10vtkVariantE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSparseArray_I10vtkVariantE_StaticNew()
{
  return vtkSparseArray<vtkVariant>::New();
}

PyObject *PyvtkSparseArray_I10vtkVariantE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSparseArray_I10vtkVariantE_Type, PyvtkSparseArray_I10vtkVariantE_Methods,
    typeid(vtkSparseArray<vtkVariant>).name(),
 &PyvtkSparseArray_I10vtkVariantE_StaticNew);

  PyTypeObject *pytype = &PyvtkSparseArray_I10vtkVariantE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkTypedArray_I10vtkVariantE_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

static const char *PyvtkSparseArray_Doc =
  "vtkSparseArray - Sparse, independent coordinate storage for N-way\narrays.\n\n"
  "Superclass: vtkTypedArray[T]\n\n"
  "vtkSparseArray is a concrete vtkArray implementation that stores\n"
  "values using sparse independent coordinate storage.  This means that\n"
  "the array stores the complete set of coordinates and the value for\n"
  "each non-null value in the array. While this approach requires\n"
  "slightly more storage than other sparse storage schemes (such as\n"
  "Compressed-Row or Compressed-Column), it is easier and more efficient\n"
  "to work with when implementing algorithms, and it generalizes well\n"
  "for arbitrary numbers of dimensions.\n\n"
  "In addition to the value retrieval and update methods provided by\n"
  "vtkTypedArray, vtkSparseArray provides methods to:\n\n"
  "Get and set a special 'null' value that will be returned when\n"
  "retrieving values for undefined coordinates.\n\n"
  "Clear the contents of the array so that every set of coordinates is\n"
  "undefined.\n\n"
  "Sort the array contents so that value coordinates can be visited in a\n"
  "specific order.\n\n"
  "Retrieve pointers to the value- and coordinate-storage memory blocks.\n\n"
  "Reserve storage for a specific number of non-null values, for\n"
  "efficiency when the number of non-null values is known in advance.\n\n"
  "Recompute the array extents so that they bound the largest set of\n"
  "non-nullptr values along each dimension.\n\n"
  "Specify arbitrary array extents.\n\n"
  "Add values to the array in amortized-constant time.\n\n"
  "Validate that the array does not contain duplicate coordinates.\n\n"
  "@sa\n"
  "vtkArray, vtkTypedArray, vtkDenseArray\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n"
  "\nProvided Types:\n\n"
  "  vtkSparseArray[char] => vtkSparseArray<char>\n"

  "  vtkSparseArray[int8] => vtkSparseArray<signed char>\n"

  "  vtkSparseArray[uint8] => vtkSparseArray<unsigned char>\n"

  "  vtkSparseArray[int16] => vtkSparseArray<short>\n"

  "  vtkSparseArray[uint16] => vtkSparseArray<unsigned short>\n"

  "  vtkSparseArray[int32] => vtkSparseArray<int>\n"

  "  vtkSparseArray[uint32] => vtkSparseArray<unsigned int>\n"

  "  vtkSparseArray[int] => vtkSparseArray<long>\n"

  "  vtkSparseArray[uint] => vtkSparseArray<unsigned long>\n"

  "  vtkSparseArray[int64] => vtkSparseArray<long long>\n"

  "  vtkSparseArray[uint64] => vtkSparseArray<unsigned long long>\n"

  "  vtkSparseArray[float32] => vtkSparseArray<float>\n"

  "  vtkSparseArray[float64] => vtkSparseArray<double>\n"

  "  vtkSparseArray[str] => vtkSparseArray<vtkStdString>\n"

  "  vtkSparseArray[unicode] => vtkSparseArray<vtkUnicodeString>\n"

  "  vtkSparseArray[vtkVariant] => vtkSparseArray<vtkVariant>\n"
;

PyObject *PyvtkSparseArray_TemplateNew()
{
  PyObject *o;

  PyObject *temp = PyVTKTemplate_New("vtkCommonCorePython.vtkSparseArray",
                                     PyvtkSparseArray_Doc);

  o = PyvtkSparseArray_IcE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkSparseArray_IaE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkSparseArray_IhE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkSparseArray_IsE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkSparseArray_ItE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkSparseArray_IiE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkSparseArray_IjE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkSparseArray_IlE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkSparseArray_ImE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkSparseArray_IxE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkSparseArray_IyE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkSparseArray_IfE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkSparseArray_IdE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkSparseArray_I12vtkStdStringE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkSparseArray_I16vtkUnicodeStringE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkSparseArray_I10vtkVariantE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  return temp;
}

void PyVTKAddFile_vtkSparseArray(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSparseArray_TemplateNew();

  if (o)
  {
#if PY_VERSION_HEX >= 0x03040000
    const char *methodname = "values";
#else
    char methodname[] = "values";
#endif
    PyObject *l = PyObject_CallMethod(o, methodname, nullptr);
    Py_ssize_t n = PyList_GET_SIZE(l);
    for (Py_ssize_t i = 0; i < n; i++)
    {
      PyObject *ot = PyList_GET_ITEM(l, i);
      const char *nt = nullptr;
      if (PyType_Check(ot))
      {
        nt = ((PyTypeObject *)ot)->tp_name;
      }
      else if (PyCFunction_Check(ot))
      {
        nt = ((PyCFunctionObject *)ot)->m_ml->ml_name;
      }
      if (nt)
      {
        PyDict_SetItemString(dict, nt, ot);
      }
    }
    Py_DECREF(l);
  }

  if (o && PyDict_SetItemString(dict, "vtkSparseArray", o) != 0)
  {
    Py_DECREF(o);
  }

}

