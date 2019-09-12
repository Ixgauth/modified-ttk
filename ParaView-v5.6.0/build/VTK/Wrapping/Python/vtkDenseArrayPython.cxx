// python wrapper for vtkDenseArray
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
#include "vtkDenseArray.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDenseArray(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDenseArray_IcE_ClassNew(); }

#ifndef DECLARED_PyvtkTypedArray_IcE_ClassNew
extern "C" { PyObject *PyvtkTypedArray_IcE_ClassNew(); }
#define DECLARED_PyvtkTypedArray_IcE_ClassNew
#endif

static const char *PyvtkDenseArray_IcE_Doc =
  "vtkDenseArray- Contiguous storage for N-way arrays.\n\n"
  "Superclass: vtkTypedArray[char]\n\n"
  "vtkDenseArray is a concrete vtkArray implementation that stores\n"
  "values using a contiguous block of memory.  Values are stored with\n"
  "fortran ordering, meaning that if you iterated over the memory block,\n"
  "the left-most coordinates would vary the fastest.\n\n"
  "In addition to the retrieval and update methods provided by\n"
  "vtkTypedArray, vtkDenseArray provides methods to:\n\n"
  "Fill the entire array with a specific value.\n\n"
  "Retrieve a pointer to the storage memory block.\n\n"
  "@sa\n"
  "vtkArray, vtkTypedArray, vtkSparseArray\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";


static PyObject *
PyvtkDenseArray_IcE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDenseArray<char>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IcE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<char> *op = static_cast<vtkDenseArray<char> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDenseArray<char>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IcE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDenseArray<char> *tempr = vtkDenseArray<char>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IcE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<char> *op = static_cast<vtkDenseArray<char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDenseArray<char> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDenseArray<char>::NewInstance());

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
PyvtkDenseArray_IcE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<char> *op = static_cast<vtkDenseArray<char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkDenseArray<char>::IsDense());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IcE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<char> *op = static_cast<vtkDenseArray<char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkDenseArray<char>::GetExtents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IcE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<char> *op = static_cast<vtkDenseArray<char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkDenseArray<char>::GetNonNullSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IcE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<char> *op = static_cast<vtkDenseArray<char> *>(vp);

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
      op->vtkDenseArray<char>::GetCoordinatesN(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IcE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<char> *op = static_cast<vtkDenseArray<char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkDenseArray<char>::DeepCopy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IcE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<char> *op = static_cast<vtkDenseArray<char> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkDenseArray<char>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IcE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<char> *op = static_cast<vtkDenseArray<char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const char *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkDenseArray<char>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IcE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<char> *op = static_cast<vtkDenseArray<char> *>(vp);

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
      &op->vtkDenseArray<char>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IcE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<char> *op = static_cast<vtkDenseArray<char> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    const char *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkDenseArray<char>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_IcE_GetValue_Methods[] = {
  {nullptr, PyvtkDenseArray_IcE_GetValue_s1, METH_VARARGS,
   "@k"},
  {nullptr, PyvtkDenseArray_IcE_GetValue_s4, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDenseArray_IcE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_IcE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkDenseArray_IcE_GetValue_s2(self, args);
    case 3:
      return PyvtkDenseArray_IcE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return nullptr;
}



static PyObject *
PyvtkDenseArray_IcE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<char> *op = static_cast<vtkDenseArray<char> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkDenseArray<char>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IcE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<char> *op = static_cast<vtkDenseArray<char> *>(vp);

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
      op->vtkDenseArray<char>::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IcE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<char> *op = static_cast<vtkDenseArray<char> *>(vp);

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
      op->vtkDenseArray<char>::SetValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IcE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<char> *op = static_cast<vtkDenseArray<char> *>(vp);

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
      op->vtkDenseArray<char>::SetValue(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IcE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<char> *op = static_cast<vtkDenseArray<char> *>(vp);

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
      op->vtkDenseArray<char>::SetValue(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_IcE_SetValue_Methods[] = {
  {nullptr, PyvtkDenseArray_IcE_SetValue_s1, METH_VARARGS,
   "@kc"},
  {nullptr, PyvtkDenseArray_IcE_SetValue_s4, METH_VARARGS,
   "@Wc vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDenseArray_IcE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_IcE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkDenseArray_IcE_SetValue_s2(self, args);
    case 4:
      return PyvtkDenseArray_IcE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return nullptr;
}



static PyObject *
PyvtkDenseArray_IcE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<char> *op = static_cast<vtkDenseArray<char> *>(vp);

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
      op->vtkDenseArray<char>::SetValueN(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IcE_Fill(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Fill");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<char> *op = static_cast<vtkDenseArray<char> *>(vp);

  char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Fill(temp0);
    }
    else
    {
      op->vtkDenseArray<char>::Fill(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IcE_GetStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<char> *op = static_cast<vtkDenseArray<char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetStorage() :
      op->vtkDenseArray<char>::GetStorage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDenseArray_IcE_Methods[] = {
  {"IsTypeOf", PyvtkDenseArray_IcE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDenseArray_IcE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDenseArray_IcE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDenseArray_IcE\nC++: static vtkDenseArray<char> *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDenseArray_IcE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDenseArray_IcE\nC++: vtkDenseArray<char> *NewInstance()\n\n"},
  {"IsDense", PyvtkDenseArray_IcE_IsDense, METH_VARARGS,
   "V.IsDense() -> bool\nC++: bool IsDense() override;\n\nReturns true iff the underlying array storage is \"dense\", i.e.\nthat GetSize() and GetNonNullSize() will always return the same\nvalue. If not, the array is \"sparse\".\n"},
  {"GetExtents", PyvtkDenseArray_IcE_GetExtents, METH_VARARGS,
   "V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents() override;\n\nReturns the extents (the number of dimensions and size along each\ndimension) of the array.\n"},
  {"GetNonNullSize", PyvtkDenseArray_IcE_GetNonNullSize, METH_VARARGS,
   "V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize() override;\n\nReturns the number of non-null values stored in the array.  Note\nthat this value will equal GetSize() for dense arrays, and will\nbe less-than-or-equal to GetSize() for sparse arrays.\n"},
  {"GetCoordinatesN", PyvtkDenseArray_IcE_GetCoordinatesN, METH_VARARGS,
   "V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates) override;\n\nReturns the coordinates of the n-th value in the array, where n\nis in the range [0, GetNonNullSize()).  Note that the order in\nwhich coordinates are visited is undefined, but is guaranteed to\nmatch the order in which values are visited using\nvtkTypedArray::GetValueN() and vtkTypedArray::SetValueN().\n"},
  {"DeepCopy", PyvtkDenseArray_IcE_DeepCopy, METH_VARARGS,
   "V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy() override;\n\nReturns a new array that is a deep copy of this array.\n"},
  {"GetValue", PyvtkDenseArray_IcE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> char\nC++: const char &GetValue(CoordinateT i) override;\nV.GetValue(int, int) -> char\nC++: const char &GetValue(CoordinateT i, CoordinateT j) override;\nV.GetValue(int, int, int) -> char\nC++: const char &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k) override;\nV.GetValue(vtkArrayCoordinates) -> char\nC++: const char &GetValue(const vtkArrayCoordinates &coordinates)\n    override;\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetValueN", PyvtkDenseArray_IcE_GetValueN, METH_VARARGS,
   "V.GetValueN(int) -> char\nC++: const char &GetValueN(const SizeT n) override;\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetValue", PyvtkDenseArray_IcE_SetValue, METH_VARARGS,
   "V.SetValue(int, char)\nC++: void SetValue(CoordinateT i, const char &value) override;\nV.SetValue(int, int, char)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const char &value) override;\nV.SetValue(int, int, int, char)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const char &value) override;\nV.SetValue(vtkArrayCoordinates, char)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const char &value) override;\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetValueN", PyvtkDenseArray_IcE_SetValueN, METH_VARARGS,
   "V.SetValueN(int, char)\nC++: void SetValueN(const SizeT n, const char &value) override;\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"Fill", PyvtkDenseArray_IcE_Fill, METH_VARARGS,
   "V.Fill(char)\nC++: void Fill(const char &value)\n\nFills every element in the array with the given value.\n"},
  {"GetStorage", PyvtkDenseArray_IcE_GetStorage, METH_VARARGS,
   "V.GetStorage() -> string\nC++: char *GetStorage()\n\nReturns a mutable reference to the underlying storage.  Values\nare stored contiguously with fortran ordering.  Use at your own\nrisk!\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDenseArray_IcE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkDenseArray_IcE", // tp_name
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
  PyvtkDenseArray_IcE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDenseArray_IcE_StaticNew()
{
  return vtkDenseArray<char>::New();
}

PyObject *PyvtkDenseArray_IcE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDenseArray_IcE_Type, PyvtkDenseArray_IcE_Methods,
    typeid(vtkDenseArray<char>).name(),
 &PyvtkDenseArray_IcE_StaticNew);

  PyTypeObject *pytype = &PyvtkDenseArray_IcE_Type;

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

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDenseArray_IaE_ClassNew(); }

#ifndef DECLARED_PyvtkTypedArray_IaE_ClassNew
extern "C" { PyObject *PyvtkTypedArray_IaE_ClassNew(); }
#define DECLARED_PyvtkTypedArray_IaE_ClassNew
#endif

static const char *PyvtkDenseArray_IaE_Doc =
  "vtkDenseArray<signed char> - Contiguous storage for N-way arrays.\n\n"
  "Superclass: vtkTypedArray[int8]\n\n"
  "vtkDenseArray is a concrete vtkArray implementation that stores\n"
  "values using a contiguous block of memory.  Values are stored with\n"
  "fortran ordering, meaning that if you iterated over the memory block,\n"
  "the left-most coordinates would vary the fastest.\n\n"
  "In addition to the retrieval and update methods provided by\n"
  "vtkTypedArray, vtkDenseArray provides methods to:\n\n"
  "Fill the entire array with a specific value.\n\n"
  "Retrieve a pointer to the storage memory block.\n\n"
  "@sa\n"
  "vtkArray, vtkTypedArray, vtkSparseArray\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";


static PyObject *
PyvtkDenseArray_IaE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDenseArray<signed char>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IaE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<signed char> *op = static_cast<vtkDenseArray<signed char> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDenseArray<signed char>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IaE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDenseArray<signed char> *tempr = vtkDenseArray<signed char>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IaE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<signed char> *op = static_cast<vtkDenseArray<signed char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDenseArray<signed char> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDenseArray<signed char>::NewInstance());

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
PyvtkDenseArray_IaE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<signed char> *op = static_cast<vtkDenseArray<signed char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkDenseArray<signed char>::IsDense());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IaE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<signed char> *op = static_cast<vtkDenseArray<signed char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkDenseArray<signed char>::GetExtents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IaE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<signed char> *op = static_cast<vtkDenseArray<signed char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkDenseArray<signed char>::GetNonNullSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IaE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<signed char> *op = static_cast<vtkDenseArray<signed char> *>(vp);

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
      op->vtkDenseArray<signed char>::GetCoordinatesN(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IaE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<signed char> *op = static_cast<vtkDenseArray<signed char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkDenseArray<signed char>::DeepCopy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IaE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<signed char> *op = static_cast<vtkDenseArray<signed char> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const signed char *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkDenseArray<signed char>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IaE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<signed char> *op = static_cast<vtkDenseArray<signed char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const signed char *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkDenseArray<signed char>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IaE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<signed char> *op = static_cast<vtkDenseArray<signed char> *>(vp);

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
      &op->vtkDenseArray<signed char>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IaE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<signed char> *op = static_cast<vtkDenseArray<signed char> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    const signed char *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkDenseArray<signed char>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_IaE_GetValue_Methods[] = {
  {nullptr, PyvtkDenseArray_IaE_GetValue_s1, METH_VARARGS,
   "@k"},
  {nullptr, PyvtkDenseArray_IaE_GetValue_s4, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDenseArray_IaE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_IaE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkDenseArray_IaE_GetValue_s2(self, args);
    case 3:
      return PyvtkDenseArray_IaE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return nullptr;
}



static PyObject *
PyvtkDenseArray_IaE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<signed char> *op = static_cast<vtkDenseArray<signed char> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const signed char *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkDenseArray<signed char>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IaE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<signed char> *op = static_cast<vtkDenseArray<signed char> *>(vp);

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
      op->vtkDenseArray<signed char>::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IaE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<signed char> *op = static_cast<vtkDenseArray<signed char> *>(vp);

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
      op->vtkDenseArray<signed char>::SetValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IaE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<signed char> *op = static_cast<vtkDenseArray<signed char> *>(vp);

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
      op->vtkDenseArray<signed char>::SetValue(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IaE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<signed char> *op = static_cast<vtkDenseArray<signed char> *>(vp);

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
      op->vtkDenseArray<signed char>::SetValue(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_IaE_SetValue_Methods[] = {
  {nullptr, PyvtkDenseArray_IaE_SetValue_s1, METH_VARARGS,
   "@kb"},
  {nullptr, PyvtkDenseArray_IaE_SetValue_s4, METH_VARARGS,
   "@Wb vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDenseArray_IaE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_IaE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkDenseArray_IaE_SetValue_s2(self, args);
    case 4:
      return PyvtkDenseArray_IaE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return nullptr;
}



static PyObject *
PyvtkDenseArray_IaE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<signed char> *op = static_cast<vtkDenseArray<signed char> *>(vp);

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
      op->vtkDenseArray<signed char>::SetValueN(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IaE_Fill(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Fill");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<signed char> *op = static_cast<vtkDenseArray<signed char> *>(vp);

  signed char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Fill(temp0);
    }
    else
    {
      op->vtkDenseArray<signed char>::Fill(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IaE_GetStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<signed char> *op = static_cast<vtkDenseArray<signed char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    signed char *tempr = (ap.IsBound() ?
      op->GetStorage() :
      op->vtkDenseArray<signed char>::GetStorage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDenseArray_IaE_Methods[] = {
  {"IsTypeOf", PyvtkDenseArray_IaE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDenseArray_IaE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDenseArray_IaE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDenseArray_IaE\nC++: static vtkDenseArray<signed char> *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDenseArray_IaE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDenseArray_IaE\nC++: vtkDenseArray<signed char> *NewInstance()\n\n"},
  {"IsDense", PyvtkDenseArray_IaE_IsDense, METH_VARARGS,
   "V.IsDense() -> bool\nC++: bool IsDense() override;\n\nReturns true iff the underlying array storage is \"dense\", i.e.\nthat GetSize() and GetNonNullSize() will always return the same\nvalue. If not, the array is \"sparse\".\n"},
  {"GetExtents", PyvtkDenseArray_IaE_GetExtents, METH_VARARGS,
   "V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents() override;\n\nReturns the extents (the number of dimensions and size along each\ndimension) of the array.\n"},
  {"GetNonNullSize", PyvtkDenseArray_IaE_GetNonNullSize, METH_VARARGS,
   "V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize() override;\n\nReturns the number of non-null values stored in the array.  Note\nthat this value will equal GetSize() for dense arrays, and will\nbe less-than-or-equal to GetSize() for sparse arrays.\n"},
  {"GetCoordinatesN", PyvtkDenseArray_IaE_GetCoordinatesN, METH_VARARGS,
   "V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates) override;\n\nReturns the coordinates of the n-th value in the array, where n\nis in the range [0, GetNonNullSize()).  Note that the order in\nwhich coordinates are visited is undefined, but is guaranteed to\nmatch the order in which values are visited using\nvtkTypedArray::GetValueN() and vtkTypedArray::SetValueN().\n"},
  {"DeepCopy", PyvtkDenseArray_IaE_DeepCopy, METH_VARARGS,
   "V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy() override;\n\nReturns a new array that is a deep copy of this array.\n"},
  {"GetValue", PyvtkDenseArray_IaE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> int\nC++: const signed char &GetValue(CoordinateT i) override;\nV.GetValue(int, int) -> int\nC++: const signed char &GetValue(CoordinateT i, CoordinateT j)\n    override;\nV.GetValue(int, int, int) -> int\nC++: const signed char &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k) override;\nV.GetValue(vtkArrayCoordinates) -> int\nC++: const signed char &GetValue(\n    const vtkArrayCoordinates &coordinates) override;\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetValueN", PyvtkDenseArray_IaE_GetValueN, METH_VARARGS,
   "V.GetValueN(int) -> int\nC++: const signed char &GetValueN(const SizeT n) override;\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetValue", PyvtkDenseArray_IaE_SetValue, METH_VARARGS,
   "V.SetValue(int, int)\nC++: void SetValue(CoordinateT i, const signed char &value)\n    override;\nV.SetValue(int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const signed char &value) override;\nV.SetValue(int, int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const signed char &value) override;\nV.SetValue(vtkArrayCoordinates, int)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const signed char &value) override;\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetValueN", PyvtkDenseArray_IaE_SetValueN, METH_VARARGS,
   "V.SetValueN(int, int)\nC++: void SetValueN(const SizeT n, const signed char &value)\n    override;\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"Fill", PyvtkDenseArray_IaE_Fill, METH_VARARGS,
   "V.Fill(int)\nC++: void Fill(const signed char &value)\n\nFills every element in the array with the given value.\n"},
  {"GetStorage", PyvtkDenseArray_IaE_GetStorage, METH_VARARGS,
   "V.GetStorage() -> (int, ...)\nC++: signed char *GetStorage()\n\nReturns a mutable reference to the underlying storage.  Values\nare stored contiguously with fortran ordering.  Use at your own\nrisk!\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDenseArray_IaE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkDenseArray_IaE", // tp_name
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
  PyvtkDenseArray_IaE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDenseArray_IaE_StaticNew()
{
  return vtkDenseArray<signed char>::New();
}

PyObject *PyvtkDenseArray_IaE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDenseArray_IaE_Type, PyvtkDenseArray_IaE_Methods,
    typeid(vtkDenseArray<signed char>).name(),
 &PyvtkDenseArray_IaE_StaticNew);

  PyTypeObject *pytype = &PyvtkDenseArray_IaE_Type;

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

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDenseArray_IhE_ClassNew(); }

#ifndef DECLARED_PyvtkTypedArray_IhE_ClassNew
extern "C" { PyObject *PyvtkTypedArray_IhE_ClassNew(); }
#define DECLARED_PyvtkTypedArray_IhE_ClassNew
#endif

static const char *PyvtkDenseArray_IhE_Doc =
  "vtkDenseArray<unsigned char> - Contiguous storage for N-way arrays.\n\n"
  "Superclass: vtkTypedArray[uint8]\n\n"
  "vtkDenseArray is a concrete vtkArray implementation that stores\n"
  "values using a contiguous block of memory.  Values are stored with\n"
  "fortran ordering, meaning that if you iterated over the memory block,\n"
  "the left-most coordinates would vary the fastest.\n\n"
  "In addition to the retrieval and update methods provided by\n"
  "vtkTypedArray, vtkDenseArray provides methods to:\n\n"
  "Fill the entire array with a specific value.\n\n"
  "Retrieve a pointer to the storage memory block.\n\n"
  "@sa\n"
  "vtkArray, vtkTypedArray, vtkSparseArray\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";


static PyObject *
PyvtkDenseArray_IhE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDenseArray<unsigned char>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IhE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned char> *op = static_cast<vtkDenseArray<unsigned char> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDenseArray<unsigned char>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IhE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDenseArray<unsigned char> *tempr = vtkDenseArray<unsigned char>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IhE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned char> *op = static_cast<vtkDenseArray<unsigned char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDenseArray<unsigned char> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDenseArray<unsigned char>::NewInstance());

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
PyvtkDenseArray_IhE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned char> *op = static_cast<vtkDenseArray<unsigned char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkDenseArray<unsigned char>::IsDense());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IhE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned char> *op = static_cast<vtkDenseArray<unsigned char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkDenseArray<unsigned char>::GetExtents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IhE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned char> *op = static_cast<vtkDenseArray<unsigned char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkDenseArray<unsigned char>::GetNonNullSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IhE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned char> *op = static_cast<vtkDenseArray<unsigned char> *>(vp);

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
      op->vtkDenseArray<unsigned char>::GetCoordinatesN(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IhE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned char> *op = static_cast<vtkDenseArray<unsigned char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkDenseArray<unsigned char>::DeepCopy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IhE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned char> *op = static_cast<vtkDenseArray<unsigned char> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const unsigned char *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkDenseArray<unsigned char>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IhE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned char> *op = static_cast<vtkDenseArray<unsigned char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const unsigned char *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkDenseArray<unsigned char>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IhE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned char> *op = static_cast<vtkDenseArray<unsigned char> *>(vp);

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
      &op->vtkDenseArray<unsigned char>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IhE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned char> *op = static_cast<vtkDenseArray<unsigned char> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    const unsigned char *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkDenseArray<unsigned char>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_IhE_GetValue_Methods[] = {
  {nullptr, PyvtkDenseArray_IhE_GetValue_s1, METH_VARARGS,
   "@k"},
  {nullptr, PyvtkDenseArray_IhE_GetValue_s4, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDenseArray_IhE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_IhE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkDenseArray_IhE_GetValue_s2(self, args);
    case 3:
      return PyvtkDenseArray_IhE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return nullptr;
}



static PyObject *
PyvtkDenseArray_IhE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned char> *op = static_cast<vtkDenseArray<unsigned char> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const unsigned char *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkDenseArray<unsigned char>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IhE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned char> *op = static_cast<vtkDenseArray<unsigned char> *>(vp);

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
      op->vtkDenseArray<unsigned char>::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IhE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned char> *op = static_cast<vtkDenseArray<unsigned char> *>(vp);

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
      op->vtkDenseArray<unsigned char>::SetValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IhE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned char> *op = static_cast<vtkDenseArray<unsigned char> *>(vp);

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
      op->vtkDenseArray<unsigned char>::SetValue(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IhE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned char> *op = static_cast<vtkDenseArray<unsigned char> *>(vp);

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
      op->vtkDenseArray<unsigned char>::SetValue(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_IhE_SetValue_Methods[] = {
  {nullptr, PyvtkDenseArray_IhE_SetValue_s1, METH_VARARGS,
   "@kB"},
  {nullptr, PyvtkDenseArray_IhE_SetValue_s4, METH_VARARGS,
   "@WB vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDenseArray_IhE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_IhE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkDenseArray_IhE_SetValue_s2(self, args);
    case 4:
      return PyvtkDenseArray_IhE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return nullptr;
}



static PyObject *
PyvtkDenseArray_IhE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned char> *op = static_cast<vtkDenseArray<unsigned char> *>(vp);

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
      op->vtkDenseArray<unsigned char>::SetValueN(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IhE_Fill(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Fill");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned char> *op = static_cast<vtkDenseArray<unsigned char> *>(vp);

  unsigned char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Fill(temp0);
    }
    else
    {
      op->vtkDenseArray<unsigned char>::Fill(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IhE_GetStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned char> *op = static_cast<vtkDenseArray<unsigned char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetStorage() :
      op->vtkDenseArray<unsigned char>::GetStorage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDenseArray_IhE_Methods[] = {
  {"IsTypeOf", PyvtkDenseArray_IhE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDenseArray_IhE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDenseArray_IhE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDenseArray_IhE\nC++: static vtkDenseArray<unsigned char> *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDenseArray_IhE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDenseArray_IhE\nC++: vtkDenseArray<unsigned char> *NewInstance()\n\n"},
  {"IsDense", PyvtkDenseArray_IhE_IsDense, METH_VARARGS,
   "V.IsDense() -> bool\nC++: bool IsDense() override;\n\nReturns true iff the underlying array storage is \"dense\", i.e.\nthat GetSize() and GetNonNullSize() will always return the same\nvalue. If not, the array is \"sparse\".\n"},
  {"GetExtents", PyvtkDenseArray_IhE_GetExtents, METH_VARARGS,
   "V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents() override;\n\nReturns the extents (the number of dimensions and size along each\ndimension) of the array.\n"},
  {"GetNonNullSize", PyvtkDenseArray_IhE_GetNonNullSize, METH_VARARGS,
   "V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize() override;\n\nReturns the number of non-null values stored in the array.  Note\nthat this value will equal GetSize() for dense arrays, and will\nbe less-than-or-equal to GetSize() for sparse arrays.\n"},
  {"GetCoordinatesN", PyvtkDenseArray_IhE_GetCoordinatesN, METH_VARARGS,
   "V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates) override;\n\nReturns the coordinates of the n-th value in the array, where n\nis in the range [0, GetNonNullSize()).  Note that the order in\nwhich coordinates are visited is undefined, but is guaranteed to\nmatch the order in which values are visited using\nvtkTypedArray::GetValueN() and vtkTypedArray::SetValueN().\n"},
  {"DeepCopy", PyvtkDenseArray_IhE_DeepCopy, METH_VARARGS,
   "V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy() override;\n\nReturns a new array that is a deep copy of this array.\n"},
  {"GetValue", PyvtkDenseArray_IhE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> int\nC++: const unsigned char &GetValue(CoordinateT i) override;\nV.GetValue(int, int) -> int\nC++: const unsigned char &GetValue(CoordinateT i, CoordinateT j)\n    override;\nV.GetValue(int, int, int) -> int\nC++: const unsigned char &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k) override;\nV.GetValue(vtkArrayCoordinates) -> int\nC++: const unsigned char &GetValue(\n    const vtkArrayCoordinates &coordinates) override;\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetValueN", PyvtkDenseArray_IhE_GetValueN, METH_VARARGS,
   "V.GetValueN(int) -> int\nC++: const unsigned char &GetValueN(const SizeT n) override;\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetValue", PyvtkDenseArray_IhE_SetValue, METH_VARARGS,
   "V.SetValue(int, int)\nC++: void SetValue(CoordinateT i, const unsigned char &value)\n    override;\nV.SetValue(int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const unsigned char &value) override;\nV.SetValue(int, int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const unsigned char &value) override;\nV.SetValue(vtkArrayCoordinates, int)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const unsigned char &value) override;\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetValueN", PyvtkDenseArray_IhE_SetValueN, METH_VARARGS,
   "V.SetValueN(int, int)\nC++: void SetValueN(const SizeT n, const unsigned char &value)\n    override;\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"Fill", PyvtkDenseArray_IhE_Fill, METH_VARARGS,
   "V.Fill(int)\nC++: void Fill(const unsigned char &value)\n\nFills every element in the array with the given value.\n"},
  {"GetStorage", PyvtkDenseArray_IhE_GetStorage, METH_VARARGS,
   "V.GetStorage() -> (int, ...)\nC++: unsigned char *GetStorage()\n\nReturns a mutable reference to the underlying storage.  Values\nare stored contiguously with fortran ordering.  Use at your own\nrisk!\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDenseArray_IhE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkDenseArray_IhE", // tp_name
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
  PyvtkDenseArray_IhE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDenseArray_IhE_StaticNew()
{
  return vtkDenseArray<unsigned char>::New();
}

PyObject *PyvtkDenseArray_IhE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDenseArray_IhE_Type, PyvtkDenseArray_IhE_Methods,
    typeid(vtkDenseArray<unsigned char>).name(),
 &PyvtkDenseArray_IhE_StaticNew);

  PyTypeObject *pytype = &PyvtkDenseArray_IhE_Type;

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

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDenseArray_IsE_ClassNew(); }

#ifndef DECLARED_PyvtkTypedArray_IsE_ClassNew
extern "C" { PyObject *PyvtkTypedArray_IsE_ClassNew(); }
#define DECLARED_PyvtkTypedArray_IsE_ClassNew
#endif

static const char *PyvtkDenseArray_IsE_Doc =
  "vtkDenseArray- Contiguous storage for N-way arrays.\n\n"
  "Superclass: vtkTypedArray[int16]\n\n"
  "vtkDenseArray is a concrete vtkArray implementation that stores\n"
  "values using a contiguous block of memory.  Values are stored with\n"
  "fortran ordering, meaning that if you iterated over the memory block,\n"
  "the left-most coordinates would vary the fastest.\n\n"
  "In addition to the retrieval and update methods provided by\n"
  "vtkTypedArray, vtkDenseArray provides methods to:\n\n"
  "Fill the entire array with a specific value.\n\n"
  "Retrieve a pointer to the storage memory block.\n\n"
  "@sa\n"
  "vtkArray, vtkTypedArray, vtkSparseArray\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";


static PyObject *
PyvtkDenseArray_IsE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDenseArray<short>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IsE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<short> *op = static_cast<vtkDenseArray<short> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDenseArray<short>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IsE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDenseArray<short> *tempr = vtkDenseArray<short>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IsE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<short> *op = static_cast<vtkDenseArray<short> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDenseArray<short> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDenseArray<short>::NewInstance());

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
PyvtkDenseArray_IsE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<short> *op = static_cast<vtkDenseArray<short> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkDenseArray<short>::IsDense());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IsE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<short> *op = static_cast<vtkDenseArray<short> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkDenseArray<short>::GetExtents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IsE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<short> *op = static_cast<vtkDenseArray<short> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkDenseArray<short>::GetNonNullSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IsE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<short> *op = static_cast<vtkDenseArray<short> *>(vp);

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
      op->vtkDenseArray<short>::GetCoordinatesN(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IsE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<short> *op = static_cast<vtkDenseArray<short> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkDenseArray<short>::DeepCopy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IsE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<short> *op = static_cast<vtkDenseArray<short> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const short *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkDenseArray<short>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IsE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<short> *op = static_cast<vtkDenseArray<short> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const short *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkDenseArray<short>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IsE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<short> *op = static_cast<vtkDenseArray<short> *>(vp);

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
      &op->vtkDenseArray<short>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IsE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<short> *op = static_cast<vtkDenseArray<short> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    const short *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkDenseArray<short>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_IsE_GetValue_Methods[] = {
  {nullptr, PyvtkDenseArray_IsE_GetValue_s1, METH_VARARGS,
   "@k"},
  {nullptr, PyvtkDenseArray_IsE_GetValue_s4, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDenseArray_IsE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_IsE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkDenseArray_IsE_GetValue_s2(self, args);
    case 3:
      return PyvtkDenseArray_IsE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return nullptr;
}



static PyObject *
PyvtkDenseArray_IsE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<short> *op = static_cast<vtkDenseArray<short> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const short *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkDenseArray<short>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IsE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<short> *op = static_cast<vtkDenseArray<short> *>(vp);

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
      op->vtkDenseArray<short>::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IsE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<short> *op = static_cast<vtkDenseArray<short> *>(vp);

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
      op->vtkDenseArray<short>::SetValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IsE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<short> *op = static_cast<vtkDenseArray<short> *>(vp);

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
      op->vtkDenseArray<short>::SetValue(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IsE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<short> *op = static_cast<vtkDenseArray<short> *>(vp);

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
      op->vtkDenseArray<short>::SetValue(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_IsE_SetValue_Methods[] = {
  {nullptr, PyvtkDenseArray_IsE_SetValue_s1, METH_VARARGS,
   "@kh"},
  {nullptr, PyvtkDenseArray_IsE_SetValue_s4, METH_VARARGS,
   "@Wh vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDenseArray_IsE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_IsE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkDenseArray_IsE_SetValue_s2(self, args);
    case 4:
      return PyvtkDenseArray_IsE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return nullptr;
}



static PyObject *
PyvtkDenseArray_IsE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<short> *op = static_cast<vtkDenseArray<short> *>(vp);

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
      op->vtkDenseArray<short>::SetValueN(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IsE_Fill(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Fill");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<short> *op = static_cast<vtkDenseArray<short> *>(vp);

  short temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Fill(temp0);
    }
    else
    {
      op->vtkDenseArray<short>::Fill(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IsE_GetStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<short> *op = static_cast<vtkDenseArray<short> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    short *tempr = (ap.IsBound() ?
      op->GetStorage() :
      op->vtkDenseArray<short>::GetStorage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDenseArray_IsE_Methods[] = {
  {"IsTypeOf", PyvtkDenseArray_IsE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDenseArray_IsE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDenseArray_IsE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDenseArray_IsE\nC++: static vtkDenseArray<short> *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDenseArray_IsE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDenseArray_IsE\nC++: vtkDenseArray<short> *NewInstance()\n\n"},
  {"IsDense", PyvtkDenseArray_IsE_IsDense, METH_VARARGS,
   "V.IsDense() -> bool\nC++: bool IsDense() override;\n\nReturns true iff the underlying array storage is \"dense\", i.e.\nthat GetSize() and GetNonNullSize() will always return the same\nvalue. If not, the array is \"sparse\".\n"},
  {"GetExtents", PyvtkDenseArray_IsE_GetExtents, METH_VARARGS,
   "V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents() override;\n\nReturns the extents (the number of dimensions and size along each\ndimension) of the array.\n"},
  {"GetNonNullSize", PyvtkDenseArray_IsE_GetNonNullSize, METH_VARARGS,
   "V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize() override;\n\nReturns the number of non-null values stored in the array.  Note\nthat this value will equal GetSize() for dense arrays, and will\nbe less-than-or-equal to GetSize() for sparse arrays.\n"},
  {"GetCoordinatesN", PyvtkDenseArray_IsE_GetCoordinatesN, METH_VARARGS,
   "V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates) override;\n\nReturns the coordinates of the n-th value in the array, where n\nis in the range [0, GetNonNullSize()).  Note that the order in\nwhich coordinates are visited is undefined, but is guaranteed to\nmatch the order in which values are visited using\nvtkTypedArray::GetValueN() and vtkTypedArray::SetValueN().\n"},
  {"DeepCopy", PyvtkDenseArray_IsE_DeepCopy, METH_VARARGS,
   "V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy() override;\n\nReturns a new array that is a deep copy of this array.\n"},
  {"GetValue", PyvtkDenseArray_IsE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> int\nC++: const short &GetValue(CoordinateT i) override;\nV.GetValue(int, int) -> int\nC++: const short &GetValue(CoordinateT i, CoordinateT j) override;\nV.GetValue(int, int, int) -> int\nC++: const short &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k) override;\nV.GetValue(vtkArrayCoordinates) -> int\nC++: const short &GetValue(const vtkArrayCoordinates &coordinates)\n     override;\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetValueN", PyvtkDenseArray_IsE_GetValueN, METH_VARARGS,
   "V.GetValueN(int) -> int\nC++: const short &GetValueN(const SizeT n) override;\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetValue", PyvtkDenseArray_IsE_SetValue, METH_VARARGS,
   "V.SetValue(int, int)\nC++: void SetValue(CoordinateT i, const short &value) override;\nV.SetValue(int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const short &value) override;\nV.SetValue(int, int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const short &value) override;\nV.SetValue(vtkArrayCoordinates, int)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const short &value) override;\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetValueN", PyvtkDenseArray_IsE_SetValueN, METH_VARARGS,
   "V.SetValueN(int, int)\nC++: void SetValueN(const SizeT n, const short &value) override;\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"Fill", PyvtkDenseArray_IsE_Fill, METH_VARARGS,
   "V.Fill(int)\nC++: void Fill(const short &value)\n\nFills every element in the array with the given value.\n"},
  {"GetStorage", PyvtkDenseArray_IsE_GetStorage, METH_VARARGS,
   "V.GetStorage() -> (int, ...)\nC++: short *GetStorage()\n\nReturns a mutable reference to the underlying storage.  Values\nare stored contiguously with fortran ordering.  Use at your own\nrisk!\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDenseArray_IsE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkDenseArray_IsE", // tp_name
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
  PyvtkDenseArray_IsE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDenseArray_IsE_StaticNew()
{
  return vtkDenseArray<short>::New();
}

PyObject *PyvtkDenseArray_IsE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDenseArray_IsE_Type, PyvtkDenseArray_IsE_Methods,
    typeid(vtkDenseArray<short>).name(),
 &PyvtkDenseArray_IsE_StaticNew);

  PyTypeObject *pytype = &PyvtkDenseArray_IsE_Type;

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

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDenseArray_ItE_ClassNew(); }

#ifndef DECLARED_PyvtkTypedArray_ItE_ClassNew
extern "C" { PyObject *PyvtkTypedArray_ItE_ClassNew(); }
#define DECLARED_PyvtkTypedArray_ItE_ClassNew
#endif

static const char *PyvtkDenseArray_ItE_Doc =
  "vtkDenseArray<unsigned short> - Contiguous storage for N-way arrays.\n\n"
  "Superclass: vtkTypedArray[uint16]\n\n"
  "vtkDenseArray is a concrete vtkArray implementation that stores\n"
  "values using a contiguous block of memory.  Values are stored with\n"
  "fortran ordering, meaning that if you iterated over the memory block,\n"
  "the left-most coordinates would vary the fastest.\n\n"
  "In addition to the retrieval and update methods provided by\n"
  "vtkTypedArray, vtkDenseArray provides methods to:\n\n"
  "Fill the entire array with a specific value.\n\n"
  "Retrieve a pointer to the storage memory block.\n\n"
  "@sa\n"
  "vtkArray, vtkTypedArray, vtkSparseArray\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";


static PyObject *
PyvtkDenseArray_ItE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDenseArray<unsigned short>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_ItE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned short> *op = static_cast<vtkDenseArray<unsigned short> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDenseArray<unsigned short>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_ItE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDenseArray<unsigned short> *tempr = vtkDenseArray<unsigned short>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_ItE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned short> *op = static_cast<vtkDenseArray<unsigned short> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDenseArray<unsigned short> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDenseArray<unsigned short>::NewInstance());

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
PyvtkDenseArray_ItE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned short> *op = static_cast<vtkDenseArray<unsigned short> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkDenseArray<unsigned short>::IsDense());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_ItE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned short> *op = static_cast<vtkDenseArray<unsigned short> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkDenseArray<unsigned short>::GetExtents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_ItE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned short> *op = static_cast<vtkDenseArray<unsigned short> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkDenseArray<unsigned short>::GetNonNullSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_ItE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned short> *op = static_cast<vtkDenseArray<unsigned short> *>(vp);

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
      op->vtkDenseArray<unsigned short>::GetCoordinatesN(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_ItE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned short> *op = static_cast<vtkDenseArray<unsigned short> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkDenseArray<unsigned short>::DeepCopy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_ItE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned short> *op = static_cast<vtkDenseArray<unsigned short> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const unsigned short *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkDenseArray<unsigned short>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_ItE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned short> *op = static_cast<vtkDenseArray<unsigned short> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const unsigned short *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkDenseArray<unsigned short>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_ItE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned short> *op = static_cast<vtkDenseArray<unsigned short> *>(vp);

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
      &op->vtkDenseArray<unsigned short>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_ItE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned short> *op = static_cast<vtkDenseArray<unsigned short> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    const unsigned short *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkDenseArray<unsigned short>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_ItE_GetValue_Methods[] = {
  {nullptr, PyvtkDenseArray_ItE_GetValue_s1, METH_VARARGS,
   "@k"},
  {nullptr, PyvtkDenseArray_ItE_GetValue_s4, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDenseArray_ItE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_ItE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkDenseArray_ItE_GetValue_s2(self, args);
    case 3:
      return PyvtkDenseArray_ItE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return nullptr;
}



static PyObject *
PyvtkDenseArray_ItE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned short> *op = static_cast<vtkDenseArray<unsigned short> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const unsigned short *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkDenseArray<unsigned short>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_ItE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned short> *op = static_cast<vtkDenseArray<unsigned short> *>(vp);

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
      op->vtkDenseArray<unsigned short>::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_ItE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned short> *op = static_cast<vtkDenseArray<unsigned short> *>(vp);

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
      op->vtkDenseArray<unsigned short>::SetValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_ItE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned short> *op = static_cast<vtkDenseArray<unsigned short> *>(vp);

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
      op->vtkDenseArray<unsigned short>::SetValue(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_ItE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned short> *op = static_cast<vtkDenseArray<unsigned short> *>(vp);

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
      op->vtkDenseArray<unsigned short>::SetValue(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_ItE_SetValue_Methods[] = {
  {nullptr, PyvtkDenseArray_ItE_SetValue_s1, METH_VARARGS,
   "@kH"},
  {nullptr, PyvtkDenseArray_ItE_SetValue_s4, METH_VARARGS,
   "@WH vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDenseArray_ItE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_ItE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkDenseArray_ItE_SetValue_s2(self, args);
    case 4:
      return PyvtkDenseArray_ItE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return nullptr;
}



static PyObject *
PyvtkDenseArray_ItE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned short> *op = static_cast<vtkDenseArray<unsigned short> *>(vp);

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
      op->vtkDenseArray<unsigned short>::SetValueN(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_ItE_Fill(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Fill");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned short> *op = static_cast<vtkDenseArray<unsigned short> *>(vp);

  unsigned short temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Fill(temp0);
    }
    else
    {
      op->vtkDenseArray<unsigned short>::Fill(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_ItE_GetStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned short> *op = static_cast<vtkDenseArray<unsigned short> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned short *tempr = (ap.IsBound() ?
      op->GetStorage() :
      op->vtkDenseArray<unsigned short>::GetStorage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDenseArray_ItE_Methods[] = {
  {"IsTypeOf", PyvtkDenseArray_ItE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDenseArray_ItE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDenseArray_ItE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDenseArray_ItE\nC++: static vtkDenseArray<unsigned short> *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDenseArray_ItE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDenseArray_ItE\nC++: vtkDenseArray<unsigned short> *NewInstance()\n\n"},
  {"IsDense", PyvtkDenseArray_ItE_IsDense, METH_VARARGS,
   "V.IsDense() -> bool\nC++: bool IsDense() override;\n\nReturns true iff the underlying array storage is \"dense\", i.e.\nthat GetSize() and GetNonNullSize() will always return the same\nvalue. If not, the array is \"sparse\".\n"},
  {"GetExtents", PyvtkDenseArray_ItE_GetExtents, METH_VARARGS,
   "V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents() override;\n\nReturns the extents (the number of dimensions and size along each\ndimension) of the array.\n"},
  {"GetNonNullSize", PyvtkDenseArray_ItE_GetNonNullSize, METH_VARARGS,
   "V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize() override;\n\nReturns the number of non-null values stored in the array.  Note\nthat this value will equal GetSize() for dense arrays, and will\nbe less-than-or-equal to GetSize() for sparse arrays.\n"},
  {"GetCoordinatesN", PyvtkDenseArray_ItE_GetCoordinatesN, METH_VARARGS,
   "V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates) override;\n\nReturns the coordinates of the n-th value in the array, where n\nis in the range [0, GetNonNullSize()).  Note that the order in\nwhich coordinates are visited is undefined, but is guaranteed to\nmatch the order in which values are visited using\nvtkTypedArray::GetValueN() and vtkTypedArray::SetValueN().\n"},
  {"DeepCopy", PyvtkDenseArray_ItE_DeepCopy, METH_VARARGS,
   "V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy() override;\n\nReturns a new array that is a deep copy of this array.\n"},
  {"GetValue", PyvtkDenseArray_ItE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> int\nC++: const unsigned short &GetValue(CoordinateT i) override;\nV.GetValue(int, int) -> int\nC++: const unsigned short &GetValue(CoordinateT i, CoordinateT j)\n    override;\nV.GetValue(int, int, int) -> int\nC++: const unsigned short &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k) override;\nV.GetValue(vtkArrayCoordinates) -> int\nC++: const unsigned short &GetValue(\n    const vtkArrayCoordinates &coordinates) override;\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetValueN", PyvtkDenseArray_ItE_GetValueN, METH_VARARGS,
   "V.GetValueN(int) -> int\nC++: const unsigned short &GetValueN(const SizeT n) override;\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetValue", PyvtkDenseArray_ItE_SetValue, METH_VARARGS,
   "V.SetValue(int, int)\nC++: void SetValue(CoordinateT i, const unsigned short &value)\n    override;\nV.SetValue(int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const unsigned short &value) override;\nV.SetValue(int, int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const unsigned short &value) override;\nV.SetValue(vtkArrayCoordinates, int)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const unsigned short &value) override;\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetValueN", PyvtkDenseArray_ItE_SetValueN, METH_VARARGS,
   "V.SetValueN(int, int)\nC++: void SetValueN(const SizeT n, const unsigned short &value)\n    override;\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"Fill", PyvtkDenseArray_ItE_Fill, METH_VARARGS,
   "V.Fill(int)\nC++: void Fill(const unsigned short &value)\n\nFills every element in the array with the given value.\n"},
  {"GetStorage", PyvtkDenseArray_ItE_GetStorage, METH_VARARGS,
   "V.GetStorage() -> (int, ...)\nC++: unsigned short *GetStorage()\n\nReturns a mutable reference to the underlying storage.  Values\nare stored contiguously with fortran ordering.  Use at your own\nrisk!\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDenseArray_ItE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkDenseArray_ItE", // tp_name
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
  PyvtkDenseArray_ItE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDenseArray_ItE_StaticNew()
{
  return vtkDenseArray<unsigned short>::New();
}

PyObject *PyvtkDenseArray_ItE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDenseArray_ItE_Type, PyvtkDenseArray_ItE_Methods,
    typeid(vtkDenseArray<unsigned short>).name(),
 &PyvtkDenseArray_ItE_StaticNew);

  PyTypeObject *pytype = &PyvtkDenseArray_ItE_Type;

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

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDenseArray_IiE_ClassNew(); }

#ifndef DECLARED_PyvtkTypedArray_IiE_ClassNew
extern "C" { PyObject *PyvtkTypedArray_IiE_ClassNew(); }
#define DECLARED_PyvtkTypedArray_IiE_ClassNew
#endif

static const char *PyvtkDenseArray_IiE_Doc =
  "vtkDenseArray- Contiguous storage for N-way arrays.\n\n"
  "Superclass: vtkTypedArray[int32]\n\n"
  "vtkDenseArray is a concrete vtkArray implementation that stores\n"
  "values using a contiguous block of memory.  Values are stored with\n"
  "fortran ordering, meaning that if you iterated over the memory block,\n"
  "the left-most coordinates would vary the fastest.\n\n"
  "In addition to the retrieval and update methods provided by\n"
  "vtkTypedArray, vtkDenseArray provides methods to:\n\n"
  "Fill the entire array with a specific value.\n\n"
  "Retrieve a pointer to the storage memory block.\n\n"
  "@sa\n"
  "vtkArray, vtkTypedArray, vtkSparseArray\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";


static PyObject *
PyvtkDenseArray_IiE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDenseArray<int>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IiE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<int> *op = static_cast<vtkDenseArray<int> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDenseArray<int>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IiE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDenseArray<int> *tempr = vtkDenseArray<int>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IiE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<int> *op = static_cast<vtkDenseArray<int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDenseArray<int> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDenseArray<int>::NewInstance());

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
PyvtkDenseArray_IiE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<int> *op = static_cast<vtkDenseArray<int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkDenseArray<int>::IsDense());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IiE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<int> *op = static_cast<vtkDenseArray<int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkDenseArray<int>::GetExtents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IiE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<int> *op = static_cast<vtkDenseArray<int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkDenseArray<int>::GetNonNullSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IiE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<int> *op = static_cast<vtkDenseArray<int> *>(vp);

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
      op->vtkDenseArray<int>::GetCoordinatesN(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IiE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<int> *op = static_cast<vtkDenseArray<int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkDenseArray<int>::DeepCopy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IiE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<int> *op = static_cast<vtkDenseArray<int> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const int *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkDenseArray<int>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IiE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<int> *op = static_cast<vtkDenseArray<int> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const int *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkDenseArray<int>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IiE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<int> *op = static_cast<vtkDenseArray<int> *>(vp);

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
      &op->vtkDenseArray<int>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IiE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<int> *op = static_cast<vtkDenseArray<int> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    const int *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkDenseArray<int>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_IiE_GetValue_Methods[] = {
  {nullptr, PyvtkDenseArray_IiE_GetValue_s1, METH_VARARGS,
   "@k"},
  {nullptr, PyvtkDenseArray_IiE_GetValue_s4, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDenseArray_IiE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_IiE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkDenseArray_IiE_GetValue_s2(self, args);
    case 3:
      return PyvtkDenseArray_IiE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return nullptr;
}



static PyObject *
PyvtkDenseArray_IiE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<int> *op = static_cast<vtkDenseArray<int> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const int *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkDenseArray<int>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IiE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<int> *op = static_cast<vtkDenseArray<int> *>(vp);

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
      op->vtkDenseArray<int>::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IiE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<int> *op = static_cast<vtkDenseArray<int> *>(vp);

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
      op->vtkDenseArray<int>::SetValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IiE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<int> *op = static_cast<vtkDenseArray<int> *>(vp);

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
      op->vtkDenseArray<int>::SetValue(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IiE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<int> *op = static_cast<vtkDenseArray<int> *>(vp);

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
      op->vtkDenseArray<int>::SetValue(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_IiE_SetValue_Methods[] = {
  {nullptr, PyvtkDenseArray_IiE_SetValue_s1, METH_VARARGS,
   "@ki"},
  {nullptr, PyvtkDenseArray_IiE_SetValue_s4, METH_VARARGS,
   "@Wi vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDenseArray_IiE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_IiE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkDenseArray_IiE_SetValue_s2(self, args);
    case 4:
      return PyvtkDenseArray_IiE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return nullptr;
}



static PyObject *
PyvtkDenseArray_IiE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<int> *op = static_cast<vtkDenseArray<int> *>(vp);

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
      op->vtkDenseArray<int>::SetValueN(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IiE_Fill(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Fill");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<int> *op = static_cast<vtkDenseArray<int> *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Fill(temp0);
    }
    else
    {
      op->vtkDenseArray<int>::Fill(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IiE_GetStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<int> *op = static_cast<vtkDenseArray<int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetStorage() :
      op->vtkDenseArray<int>::GetStorage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDenseArray_IiE_Methods[] = {
  {"IsTypeOf", PyvtkDenseArray_IiE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDenseArray_IiE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDenseArray_IiE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDenseArray_IiE\nC++: static vtkDenseArray<int> *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDenseArray_IiE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDenseArray_IiE\nC++: vtkDenseArray<int> *NewInstance()\n\n"},
  {"IsDense", PyvtkDenseArray_IiE_IsDense, METH_VARARGS,
   "V.IsDense() -> bool\nC++: bool IsDense() override;\n\nReturns true iff the underlying array storage is \"dense\", i.e.\nthat GetSize() and GetNonNullSize() will always return the same\nvalue. If not, the array is \"sparse\".\n"},
  {"GetExtents", PyvtkDenseArray_IiE_GetExtents, METH_VARARGS,
   "V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents() override;\n\nReturns the extents (the number of dimensions and size along each\ndimension) of the array.\n"},
  {"GetNonNullSize", PyvtkDenseArray_IiE_GetNonNullSize, METH_VARARGS,
   "V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize() override;\n\nReturns the number of non-null values stored in the array.  Note\nthat this value will equal GetSize() for dense arrays, and will\nbe less-than-or-equal to GetSize() for sparse arrays.\n"},
  {"GetCoordinatesN", PyvtkDenseArray_IiE_GetCoordinatesN, METH_VARARGS,
   "V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates) override;\n\nReturns the coordinates of the n-th value in the array, where n\nis in the range [0, GetNonNullSize()).  Note that the order in\nwhich coordinates are visited is undefined, but is guaranteed to\nmatch the order in which values are visited using\nvtkTypedArray::GetValueN() and vtkTypedArray::SetValueN().\n"},
  {"DeepCopy", PyvtkDenseArray_IiE_DeepCopy, METH_VARARGS,
   "V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy() override;\n\nReturns a new array that is a deep copy of this array.\n"},
  {"GetValue", PyvtkDenseArray_IiE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> int\nC++: const int &GetValue(CoordinateT i) override;\nV.GetValue(int, int) -> int\nC++: const int &GetValue(CoordinateT i, CoordinateT j) override;\nV.GetValue(int, int, int) -> int\nC++: const int &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k) override;\nV.GetValue(vtkArrayCoordinates) -> int\nC++: const int &GetValue(const vtkArrayCoordinates &coordinates)\n    override;\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetValueN", PyvtkDenseArray_IiE_GetValueN, METH_VARARGS,
   "V.GetValueN(int) -> int\nC++: const int &GetValueN(const SizeT n) override;\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetValue", PyvtkDenseArray_IiE_SetValue, METH_VARARGS,
   "V.SetValue(int, int)\nC++: void SetValue(CoordinateT i, const int &value) override;\nV.SetValue(int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j, const int &value)\n     override;\nV.SetValue(int, int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const int &value) override;\nV.SetValue(vtkArrayCoordinates, int)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const int &value) override;\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetValueN", PyvtkDenseArray_IiE_SetValueN, METH_VARARGS,
   "V.SetValueN(int, int)\nC++: void SetValueN(const SizeT n, const int &value) override;\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"Fill", PyvtkDenseArray_IiE_Fill, METH_VARARGS,
   "V.Fill(int)\nC++: void Fill(const int &value)\n\nFills every element in the array with the given value.\n"},
  {"GetStorage", PyvtkDenseArray_IiE_GetStorage, METH_VARARGS,
   "V.GetStorage() -> (int, ...)\nC++: int *GetStorage()\n\nReturns a mutable reference to the underlying storage.  Values\nare stored contiguously with fortran ordering.  Use at your own\nrisk!\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDenseArray_IiE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkDenseArray_IiE", // tp_name
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
  PyvtkDenseArray_IiE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDenseArray_IiE_StaticNew()
{
  return vtkDenseArray<int>::New();
}

PyObject *PyvtkDenseArray_IiE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDenseArray_IiE_Type, PyvtkDenseArray_IiE_Methods,
    typeid(vtkDenseArray<int>).name(),
 &PyvtkDenseArray_IiE_StaticNew);

  PyTypeObject *pytype = &PyvtkDenseArray_IiE_Type;

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

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDenseArray_IjE_ClassNew(); }

#ifndef DECLARED_PyvtkTypedArray_IjE_ClassNew
extern "C" { PyObject *PyvtkTypedArray_IjE_ClassNew(); }
#define DECLARED_PyvtkTypedArray_IjE_ClassNew
#endif

static const char *PyvtkDenseArray_IjE_Doc =
  "vtkDenseArray<unsigned int> - Contiguous storage for N-way arrays.\n\n"
  "Superclass: vtkTypedArray[uint32]\n\n"
  "vtkDenseArray is a concrete vtkArray implementation that stores\n"
  "values using a contiguous block of memory.  Values are stored with\n"
  "fortran ordering, meaning that if you iterated over the memory block,\n"
  "the left-most coordinates would vary the fastest.\n\n"
  "In addition to the retrieval and update methods provided by\n"
  "vtkTypedArray, vtkDenseArray provides methods to:\n\n"
  "Fill the entire array with a specific value.\n\n"
  "Retrieve a pointer to the storage memory block.\n\n"
  "@sa\n"
  "vtkArray, vtkTypedArray, vtkSparseArray\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";


static PyObject *
PyvtkDenseArray_IjE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDenseArray<unsigned int>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IjE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned int> *op = static_cast<vtkDenseArray<unsigned int> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDenseArray<unsigned int>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IjE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDenseArray<unsigned int> *tempr = vtkDenseArray<unsigned int>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IjE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned int> *op = static_cast<vtkDenseArray<unsigned int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDenseArray<unsigned int> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDenseArray<unsigned int>::NewInstance());

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
PyvtkDenseArray_IjE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned int> *op = static_cast<vtkDenseArray<unsigned int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkDenseArray<unsigned int>::IsDense());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IjE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned int> *op = static_cast<vtkDenseArray<unsigned int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkDenseArray<unsigned int>::GetExtents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IjE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned int> *op = static_cast<vtkDenseArray<unsigned int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkDenseArray<unsigned int>::GetNonNullSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IjE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned int> *op = static_cast<vtkDenseArray<unsigned int> *>(vp);

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
      op->vtkDenseArray<unsigned int>::GetCoordinatesN(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IjE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned int> *op = static_cast<vtkDenseArray<unsigned int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkDenseArray<unsigned int>::DeepCopy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IjE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned int> *op = static_cast<vtkDenseArray<unsigned int> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const unsigned int *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkDenseArray<unsigned int>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IjE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned int> *op = static_cast<vtkDenseArray<unsigned int> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const unsigned int *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkDenseArray<unsigned int>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IjE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned int> *op = static_cast<vtkDenseArray<unsigned int> *>(vp);

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
      &op->vtkDenseArray<unsigned int>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IjE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned int> *op = static_cast<vtkDenseArray<unsigned int> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    const unsigned int *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkDenseArray<unsigned int>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_IjE_GetValue_Methods[] = {
  {nullptr, PyvtkDenseArray_IjE_GetValue_s1, METH_VARARGS,
   "@k"},
  {nullptr, PyvtkDenseArray_IjE_GetValue_s4, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDenseArray_IjE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_IjE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkDenseArray_IjE_GetValue_s2(self, args);
    case 3:
      return PyvtkDenseArray_IjE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return nullptr;
}



static PyObject *
PyvtkDenseArray_IjE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned int> *op = static_cast<vtkDenseArray<unsigned int> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const unsigned int *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkDenseArray<unsigned int>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IjE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned int> *op = static_cast<vtkDenseArray<unsigned int> *>(vp);

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
      op->vtkDenseArray<unsigned int>::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IjE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned int> *op = static_cast<vtkDenseArray<unsigned int> *>(vp);

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
      op->vtkDenseArray<unsigned int>::SetValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IjE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned int> *op = static_cast<vtkDenseArray<unsigned int> *>(vp);

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
      op->vtkDenseArray<unsigned int>::SetValue(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IjE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned int> *op = static_cast<vtkDenseArray<unsigned int> *>(vp);

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
      op->vtkDenseArray<unsigned int>::SetValue(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_IjE_SetValue_Methods[] = {
  {nullptr, PyvtkDenseArray_IjE_SetValue_s1, METH_VARARGS,
   "@kI"},
  {nullptr, PyvtkDenseArray_IjE_SetValue_s4, METH_VARARGS,
   "@WI vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDenseArray_IjE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_IjE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkDenseArray_IjE_SetValue_s2(self, args);
    case 4:
      return PyvtkDenseArray_IjE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return nullptr;
}



static PyObject *
PyvtkDenseArray_IjE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned int> *op = static_cast<vtkDenseArray<unsigned int> *>(vp);

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
      op->vtkDenseArray<unsigned int>::SetValueN(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IjE_Fill(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Fill");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned int> *op = static_cast<vtkDenseArray<unsigned int> *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Fill(temp0);
    }
    else
    {
      op->vtkDenseArray<unsigned int>::Fill(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IjE_GetStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned int> *op = static_cast<vtkDenseArray<unsigned int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int *tempr = (ap.IsBound() ?
      op->GetStorage() :
      op->vtkDenseArray<unsigned int>::GetStorage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDenseArray_IjE_Methods[] = {
  {"IsTypeOf", PyvtkDenseArray_IjE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDenseArray_IjE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDenseArray_IjE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDenseArray_IjE\nC++: static vtkDenseArray<unsigned int> *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDenseArray_IjE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDenseArray_IjE\nC++: vtkDenseArray<unsigned int> *NewInstance()\n\n"},
  {"IsDense", PyvtkDenseArray_IjE_IsDense, METH_VARARGS,
   "V.IsDense() -> bool\nC++: bool IsDense() override;\n\nReturns true iff the underlying array storage is \"dense\", i.e.\nthat GetSize() and GetNonNullSize() will always return the same\nvalue. If not, the array is \"sparse\".\n"},
  {"GetExtents", PyvtkDenseArray_IjE_GetExtents, METH_VARARGS,
   "V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents() override;\n\nReturns the extents (the number of dimensions and size along each\ndimension) of the array.\n"},
  {"GetNonNullSize", PyvtkDenseArray_IjE_GetNonNullSize, METH_VARARGS,
   "V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize() override;\n\nReturns the number of non-null values stored in the array.  Note\nthat this value will equal GetSize() for dense arrays, and will\nbe less-than-or-equal to GetSize() for sparse arrays.\n"},
  {"GetCoordinatesN", PyvtkDenseArray_IjE_GetCoordinatesN, METH_VARARGS,
   "V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates) override;\n\nReturns the coordinates of the n-th value in the array, where n\nis in the range [0, GetNonNullSize()).  Note that the order in\nwhich coordinates are visited is undefined, but is guaranteed to\nmatch the order in which values are visited using\nvtkTypedArray::GetValueN() and vtkTypedArray::SetValueN().\n"},
  {"DeepCopy", PyvtkDenseArray_IjE_DeepCopy, METH_VARARGS,
   "V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy() override;\n\nReturns a new array that is a deep copy of this array.\n"},
  {"GetValue", PyvtkDenseArray_IjE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> int\nC++: const unsigned int &GetValue(CoordinateT i) override;\nV.GetValue(int, int) -> int\nC++: const unsigned int &GetValue(CoordinateT i, CoordinateT j)\n    override;\nV.GetValue(int, int, int) -> int\nC++: const unsigned int &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k) override;\nV.GetValue(vtkArrayCoordinates) -> int\nC++: const unsigned int &GetValue(\n    const vtkArrayCoordinates &coordinates) override;\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetValueN", PyvtkDenseArray_IjE_GetValueN, METH_VARARGS,
   "V.GetValueN(int) -> int\nC++: const unsigned int &GetValueN(const SizeT n) override;\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetValue", PyvtkDenseArray_IjE_SetValue, METH_VARARGS,
   "V.SetValue(int, int)\nC++: void SetValue(CoordinateT i, const unsigned int &value)\n    override;\nV.SetValue(int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const unsigned int &value) override;\nV.SetValue(int, int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const unsigned int &value) override;\nV.SetValue(vtkArrayCoordinates, int)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const unsigned int &value) override;\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetValueN", PyvtkDenseArray_IjE_SetValueN, METH_VARARGS,
   "V.SetValueN(int, int)\nC++: void SetValueN(const SizeT n, const unsigned int &value)\n    override;\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"Fill", PyvtkDenseArray_IjE_Fill, METH_VARARGS,
   "V.Fill(int)\nC++: void Fill(const unsigned int &value)\n\nFills every element in the array with the given value.\n"},
  {"GetStorage", PyvtkDenseArray_IjE_GetStorage, METH_VARARGS,
   "V.GetStorage() -> (int, ...)\nC++: unsigned int *GetStorage()\n\nReturns a mutable reference to the underlying storage.  Values\nare stored contiguously with fortran ordering.  Use at your own\nrisk!\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDenseArray_IjE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkDenseArray_IjE", // tp_name
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
  PyvtkDenseArray_IjE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDenseArray_IjE_StaticNew()
{
  return vtkDenseArray<unsigned int>::New();
}

PyObject *PyvtkDenseArray_IjE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDenseArray_IjE_Type, PyvtkDenseArray_IjE_Methods,
    typeid(vtkDenseArray<unsigned int>).name(),
 &PyvtkDenseArray_IjE_StaticNew);

  PyTypeObject *pytype = &PyvtkDenseArray_IjE_Type;

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

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDenseArray_IlE_ClassNew(); }

#ifndef DECLARED_PyvtkTypedArray_IlE_ClassNew
extern "C" { PyObject *PyvtkTypedArray_IlE_ClassNew(); }
#define DECLARED_PyvtkTypedArray_IlE_ClassNew
#endif

static const char *PyvtkDenseArray_IlE_Doc =
  "vtkDenseArray- Contiguous storage for N-way arrays.\n\n"
  "Superclass: vtkTypedArray[int]\n\n"
  "vtkDenseArray is a concrete vtkArray implementation that stores\n"
  "values using a contiguous block of memory.  Values are stored with\n"
  "fortran ordering, meaning that if you iterated over the memory block,\n"
  "the left-most coordinates would vary the fastest.\n\n"
  "In addition to the retrieval and update methods provided by\n"
  "vtkTypedArray, vtkDenseArray provides methods to:\n\n"
  "Fill the entire array with a specific value.\n\n"
  "Retrieve a pointer to the storage memory block.\n\n"
  "@sa\n"
  "vtkArray, vtkTypedArray, vtkSparseArray\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";


static PyObject *
PyvtkDenseArray_IlE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDenseArray<long>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IlE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long> *op = static_cast<vtkDenseArray<long> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDenseArray<long>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IlE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDenseArray<long> *tempr = vtkDenseArray<long>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IlE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long> *op = static_cast<vtkDenseArray<long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDenseArray<long> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDenseArray<long>::NewInstance());

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
PyvtkDenseArray_IlE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long> *op = static_cast<vtkDenseArray<long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkDenseArray<long>::IsDense());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IlE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long> *op = static_cast<vtkDenseArray<long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkDenseArray<long>::GetExtents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IlE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long> *op = static_cast<vtkDenseArray<long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkDenseArray<long>::GetNonNullSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IlE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long> *op = static_cast<vtkDenseArray<long> *>(vp);

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
      op->vtkDenseArray<long>::GetCoordinatesN(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IlE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long> *op = static_cast<vtkDenseArray<long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkDenseArray<long>::DeepCopy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IlE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long> *op = static_cast<vtkDenseArray<long> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const long *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkDenseArray<long>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IlE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long> *op = static_cast<vtkDenseArray<long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const long *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkDenseArray<long>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IlE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long> *op = static_cast<vtkDenseArray<long> *>(vp);

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
      &op->vtkDenseArray<long>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IlE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long> *op = static_cast<vtkDenseArray<long> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    const long *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkDenseArray<long>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_IlE_GetValue_Methods[] = {
  {nullptr, PyvtkDenseArray_IlE_GetValue_s1, METH_VARARGS,
   "@k"},
  {nullptr, PyvtkDenseArray_IlE_GetValue_s4, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDenseArray_IlE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_IlE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkDenseArray_IlE_GetValue_s2(self, args);
    case 3:
      return PyvtkDenseArray_IlE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return nullptr;
}



static PyObject *
PyvtkDenseArray_IlE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long> *op = static_cast<vtkDenseArray<long> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const long *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkDenseArray<long>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IlE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long> *op = static_cast<vtkDenseArray<long> *>(vp);

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
      op->vtkDenseArray<long>::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IlE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long> *op = static_cast<vtkDenseArray<long> *>(vp);

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
      op->vtkDenseArray<long>::SetValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IlE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long> *op = static_cast<vtkDenseArray<long> *>(vp);

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
      op->vtkDenseArray<long>::SetValue(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IlE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long> *op = static_cast<vtkDenseArray<long> *>(vp);

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
      op->vtkDenseArray<long>::SetValue(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_IlE_SetValue_Methods[] = {
  {nullptr, PyvtkDenseArray_IlE_SetValue_s1, METH_VARARGS,
   "@kl"},
  {nullptr, PyvtkDenseArray_IlE_SetValue_s4, METH_VARARGS,
   "@Wl vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDenseArray_IlE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_IlE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkDenseArray_IlE_SetValue_s2(self, args);
    case 4:
      return PyvtkDenseArray_IlE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return nullptr;
}



static PyObject *
PyvtkDenseArray_IlE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long> *op = static_cast<vtkDenseArray<long> *>(vp);

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
      op->vtkDenseArray<long>::SetValueN(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IlE_Fill(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Fill");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long> *op = static_cast<vtkDenseArray<long> *>(vp);

  long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Fill(temp0);
    }
    else
    {
      op->vtkDenseArray<long>::Fill(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IlE_GetStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long> *op = static_cast<vtkDenseArray<long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long *tempr = (ap.IsBound() ?
      op->GetStorage() :
      op->vtkDenseArray<long>::GetStorage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDenseArray_IlE_Methods[] = {
  {"IsTypeOf", PyvtkDenseArray_IlE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDenseArray_IlE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDenseArray_IlE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDenseArray_IlE\nC++: static vtkDenseArray<long> *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDenseArray_IlE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDenseArray_IlE\nC++: vtkDenseArray<long> *NewInstance()\n\n"},
  {"IsDense", PyvtkDenseArray_IlE_IsDense, METH_VARARGS,
   "V.IsDense() -> bool\nC++: bool IsDense() override;\n\nReturns true iff the underlying array storage is \"dense\", i.e.\nthat GetSize() and GetNonNullSize() will always return the same\nvalue. If not, the array is \"sparse\".\n"},
  {"GetExtents", PyvtkDenseArray_IlE_GetExtents, METH_VARARGS,
   "V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents() override;\n\nReturns the extents (the number of dimensions and size along each\ndimension) of the array.\n"},
  {"GetNonNullSize", PyvtkDenseArray_IlE_GetNonNullSize, METH_VARARGS,
   "V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize() override;\n\nReturns the number of non-null values stored in the array.  Note\nthat this value will equal GetSize() for dense arrays, and will\nbe less-than-or-equal to GetSize() for sparse arrays.\n"},
  {"GetCoordinatesN", PyvtkDenseArray_IlE_GetCoordinatesN, METH_VARARGS,
   "V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates) override;\n\nReturns the coordinates of the n-th value in the array, where n\nis in the range [0, GetNonNullSize()).  Note that the order in\nwhich coordinates are visited is undefined, but is guaranteed to\nmatch the order in which values are visited using\nvtkTypedArray::GetValueN() and vtkTypedArray::SetValueN().\n"},
  {"DeepCopy", PyvtkDenseArray_IlE_DeepCopy, METH_VARARGS,
   "V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy() override;\n\nReturns a new array that is a deep copy of this array.\n"},
  {"GetValue", PyvtkDenseArray_IlE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> int\nC++: const long &GetValue(CoordinateT i) override;\nV.GetValue(int, int) -> int\nC++: const long &GetValue(CoordinateT i, CoordinateT j) override;\nV.GetValue(int, int, int) -> int\nC++: const long &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k) override;\nV.GetValue(vtkArrayCoordinates) -> int\nC++: const long &GetValue(const vtkArrayCoordinates &coordinates)\n    override;\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetValueN", PyvtkDenseArray_IlE_GetValueN, METH_VARARGS,
   "V.GetValueN(int) -> int\nC++: const long &GetValueN(const SizeT n) override;\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetValue", PyvtkDenseArray_IlE_SetValue, METH_VARARGS,
   "V.SetValue(int, int)\nC++: void SetValue(CoordinateT i, const long &value) override;\nV.SetValue(int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const long &value) override;\nV.SetValue(int, int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const long &value) override;\nV.SetValue(vtkArrayCoordinates, int)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const long &value) override;\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetValueN", PyvtkDenseArray_IlE_SetValueN, METH_VARARGS,
   "V.SetValueN(int, int)\nC++: void SetValueN(const SizeT n, const long &value) override;\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"Fill", PyvtkDenseArray_IlE_Fill, METH_VARARGS,
   "V.Fill(int)\nC++: void Fill(const long &value)\n\nFills every element in the array with the given value.\n"},
  {"GetStorage", PyvtkDenseArray_IlE_GetStorage, METH_VARARGS,
   "V.GetStorage() -> (int, ...)\nC++: long *GetStorage()\n\nReturns a mutable reference to the underlying storage.  Values\nare stored contiguously with fortran ordering.  Use at your own\nrisk!\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDenseArray_IlE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkDenseArray_IlE", // tp_name
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
  PyvtkDenseArray_IlE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDenseArray_IlE_StaticNew()
{
  return vtkDenseArray<long>::New();
}

PyObject *PyvtkDenseArray_IlE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDenseArray_IlE_Type, PyvtkDenseArray_IlE_Methods,
    typeid(vtkDenseArray<long>).name(),
 &PyvtkDenseArray_IlE_StaticNew);

  PyTypeObject *pytype = &PyvtkDenseArray_IlE_Type;

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

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDenseArray_ImE_ClassNew(); }

#ifndef DECLARED_PyvtkTypedArray_ImE_ClassNew
extern "C" { PyObject *PyvtkTypedArray_ImE_ClassNew(); }
#define DECLARED_PyvtkTypedArray_ImE_ClassNew
#endif

static const char *PyvtkDenseArray_ImE_Doc =
  "vtkDenseArray<unsigned long> - Contiguous storage for N-way arrays.\n\n"
  "Superclass: vtkTypedArray[uint]\n\n"
  "vtkDenseArray is a concrete vtkArray implementation that stores\n"
  "values using a contiguous block of memory.  Values are stored with\n"
  "fortran ordering, meaning that if you iterated over the memory block,\n"
  "the left-most coordinates would vary the fastest.\n\n"
  "In addition to the retrieval and update methods provided by\n"
  "vtkTypedArray, vtkDenseArray provides methods to:\n\n"
  "Fill the entire array with a specific value.\n\n"
  "Retrieve a pointer to the storage memory block.\n\n"
  "@sa\n"
  "vtkArray, vtkTypedArray, vtkSparseArray\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";


static PyObject *
PyvtkDenseArray_ImE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDenseArray<unsigned long>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_ImE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long> *op = static_cast<vtkDenseArray<unsigned long> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDenseArray<unsigned long>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_ImE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDenseArray<unsigned long> *tempr = vtkDenseArray<unsigned long>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_ImE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long> *op = static_cast<vtkDenseArray<unsigned long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDenseArray<unsigned long> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDenseArray<unsigned long>::NewInstance());

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
PyvtkDenseArray_ImE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long> *op = static_cast<vtkDenseArray<unsigned long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkDenseArray<unsigned long>::IsDense());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_ImE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long> *op = static_cast<vtkDenseArray<unsigned long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkDenseArray<unsigned long>::GetExtents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_ImE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long> *op = static_cast<vtkDenseArray<unsigned long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkDenseArray<unsigned long>::GetNonNullSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_ImE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long> *op = static_cast<vtkDenseArray<unsigned long> *>(vp);

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
      op->vtkDenseArray<unsigned long>::GetCoordinatesN(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_ImE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long> *op = static_cast<vtkDenseArray<unsigned long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkDenseArray<unsigned long>::DeepCopy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_ImE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long> *op = static_cast<vtkDenseArray<unsigned long> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const unsigned long *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkDenseArray<unsigned long>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_ImE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long> *op = static_cast<vtkDenseArray<unsigned long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const unsigned long *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkDenseArray<unsigned long>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_ImE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long> *op = static_cast<vtkDenseArray<unsigned long> *>(vp);

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
      &op->vtkDenseArray<unsigned long>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_ImE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long> *op = static_cast<vtkDenseArray<unsigned long> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    const unsigned long *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkDenseArray<unsigned long>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_ImE_GetValue_Methods[] = {
  {nullptr, PyvtkDenseArray_ImE_GetValue_s1, METH_VARARGS,
   "@k"},
  {nullptr, PyvtkDenseArray_ImE_GetValue_s4, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDenseArray_ImE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_ImE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkDenseArray_ImE_GetValue_s2(self, args);
    case 3:
      return PyvtkDenseArray_ImE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return nullptr;
}



static PyObject *
PyvtkDenseArray_ImE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long> *op = static_cast<vtkDenseArray<unsigned long> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const unsigned long *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkDenseArray<unsigned long>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_ImE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long> *op = static_cast<vtkDenseArray<unsigned long> *>(vp);

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
      op->vtkDenseArray<unsigned long>::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_ImE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long> *op = static_cast<vtkDenseArray<unsigned long> *>(vp);

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
      op->vtkDenseArray<unsigned long>::SetValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_ImE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long> *op = static_cast<vtkDenseArray<unsigned long> *>(vp);

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
      op->vtkDenseArray<unsigned long>::SetValue(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_ImE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long> *op = static_cast<vtkDenseArray<unsigned long> *>(vp);

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
      op->vtkDenseArray<unsigned long>::SetValue(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_ImE_SetValue_Methods[] = {
  {nullptr, PyvtkDenseArray_ImE_SetValue_s1, METH_VARARGS,
   "@kL"},
  {nullptr, PyvtkDenseArray_ImE_SetValue_s4, METH_VARARGS,
   "@WL vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDenseArray_ImE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_ImE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkDenseArray_ImE_SetValue_s2(self, args);
    case 4:
      return PyvtkDenseArray_ImE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return nullptr;
}



static PyObject *
PyvtkDenseArray_ImE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long> *op = static_cast<vtkDenseArray<unsigned long> *>(vp);

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
      op->vtkDenseArray<unsigned long>::SetValueN(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_ImE_Fill(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Fill");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long> *op = static_cast<vtkDenseArray<unsigned long> *>(vp);

  unsigned long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Fill(temp0);
    }
    else
    {
      op->vtkDenseArray<unsigned long>::Fill(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_ImE_GetStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long> *op = static_cast<vtkDenseArray<unsigned long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long *tempr = (ap.IsBound() ?
      op->GetStorage() :
      op->vtkDenseArray<unsigned long>::GetStorage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDenseArray_ImE_Methods[] = {
  {"IsTypeOf", PyvtkDenseArray_ImE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDenseArray_ImE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDenseArray_ImE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDenseArray_ImE\nC++: static vtkDenseArray<unsigned long> *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDenseArray_ImE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDenseArray_ImE\nC++: vtkDenseArray<unsigned long> *NewInstance()\n\n"},
  {"IsDense", PyvtkDenseArray_ImE_IsDense, METH_VARARGS,
   "V.IsDense() -> bool\nC++: bool IsDense() override;\n\nReturns true iff the underlying array storage is \"dense\", i.e.\nthat GetSize() and GetNonNullSize() will always return the same\nvalue. If not, the array is \"sparse\".\n"},
  {"GetExtents", PyvtkDenseArray_ImE_GetExtents, METH_VARARGS,
   "V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents() override;\n\nReturns the extents (the number of dimensions and size along each\ndimension) of the array.\n"},
  {"GetNonNullSize", PyvtkDenseArray_ImE_GetNonNullSize, METH_VARARGS,
   "V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize() override;\n\nReturns the number of non-null values stored in the array.  Note\nthat this value will equal GetSize() for dense arrays, and will\nbe less-than-or-equal to GetSize() for sparse arrays.\n"},
  {"GetCoordinatesN", PyvtkDenseArray_ImE_GetCoordinatesN, METH_VARARGS,
   "V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates) override;\n\nReturns the coordinates of the n-th value in the array, where n\nis in the range [0, GetNonNullSize()).  Note that the order in\nwhich coordinates are visited is undefined, but is guaranteed to\nmatch the order in which values are visited using\nvtkTypedArray::GetValueN() and vtkTypedArray::SetValueN().\n"},
  {"DeepCopy", PyvtkDenseArray_ImE_DeepCopy, METH_VARARGS,
   "V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy() override;\n\nReturns a new array that is a deep copy of this array.\n"},
  {"GetValue", PyvtkDenseArray_ImE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> int\nC++: const unsigned long &GetValue(CoordinateT i) override;\nV.GetValue(int, int) -> int\nC++: const unsigned long &GetValue(CoordinateT i, CoordinateT j)\n    override;\nV.GetValue(int, int, int) -> int\nC++: const unsigned long &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k) override;\nV.GetValue(vtkArrayCoordinates) -> int\nC++: const unsigned long &GetValue(\n    const vtkArrayCoordinates &coordinates) override;\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetValueN", PyvtkDenseArray_ImE_GetValueN, METH_VARARGS,
   "V.GetValueN(int) -> int\nC++: const unsigned long &GetValueN(const SizeT n) override;\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetValue", PyvtkDenseArray_ImE_SetValue, METH_VARARGS,
   "V.SetValue(int, int)\nC++: void SetValue(CoordinateT i, const unsigned long &value)\n    override;\nV.SetValue(int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const unsigned long &value) override;\nV.SetValue(int, int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const unsigned long &value) override;\nV.SetValue(vtkArrayCoordinates, int)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const unsigned long &value) override;\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetValueN", PyvtkDenseArray_ImE_SetValueN, METH_VARARGS,
   "V.SetValueN(int, int)\nC++: void SetValueN(const SizeT n, const unsigned long &value)\n    override;\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"Fill", PyvtkDenseArray_ImE_Fill, METH_VARARGS,
   "V.Fill(int)\nC++: void Fill(const unsigned long &value)\n\nFills every element in the array with the given value.\n"},
  {"GetStorage", PyvtkDenseArray_ImE_GetStorage, METH_VARARGS,
   "V.GetStorage() -> (int, ...)\nC++: unsigned long *GetStorage()\n\nReturns a mutable reference to the underlying storage.  Values\nare stored contiguously with fortran ordering.  Use at your own\nrisk!\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDenseArray_ImE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkDenseArray_ImE", // tp_name
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
  PyvtkDenseArray_ImE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDenseArray_ImE_StaticNew()
{
  return vtkDenseArray<unsigned long>::New();
}

PyObject *PyvtkDenseArray_ImE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDenseArray_ImE_Type, PyvtkDenseArray_ImE_Methods,
    typeid(vtkDenseArray<unsigned long>).name(),
 &PyvtkDenseArray_ImE_StaticNew);

  PyTypeObject *pytype = &PyvtkDenseArray_ImE_Type;

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

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDenseArray_IxE_ClassNew(); }

#ifndef DECLARED_PyvtkTypedArray_IxE_ClassNew
extern "C" { PyObject *PyvtkTypedArray_IxE_ClassNew(); }
#define DECLARED_PyvtkTypedArray_IxE_ClassNew
#endif

static const char *PyvtkDenseArray_IxE_Doc =
  "vtkDenseArray<long long> - Contiguous storage for N-way arrays.\n\n"
  "Superclass: vtkTypedArray[int64]\n\n"
  "vtkDenseArray is a concrete vtkArray implementation that stores\n"
  "values using a contiguous block of memory.  Values are stored with\n"
  "fortran ordering, meaning that if you iterated over the memory block,\n"
  "the left-most coordinates would vary the fastest.\n\n"
  "In addition to the retrieval and update methods provided by\n"
  "vtkTypedArray, vtkDenseArray provides methods to:\n\n"
  "Fill the entire array with a specific value.\n\n"
  "Retrieve a pointer to the storage memory block.\n\n"
  "@sa\n"
  "vtkArray, vtkTypedArray, vtkSparseArray\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";


static PyObject *
PyvtkDenseArray_IxE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDenseArray<long long>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IxE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long long> *op = static_cast<vtkDenseArray<long long> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDenseArray<long long>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IxE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDenseArray<long long> *tempr = vtkDenseArray<long long>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IxE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long long> *op = static_cast<vtkDenseArray<long long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDenseArray<long long> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDenseArray<long long>::NewInstance());

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
PyvtkDenseArray_IxE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long long> *op = static_cast<vtkDenseArray<long long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkDenseArray<long long>::IsDense());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IxE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long long> *op = static_cast<vtkDenseArray<long long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkDenseArray<long long>::GetExtents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IxE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long long> *op = static_cast<vtkDenseArray<long long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkDenseArray<long long>::GetNonNullSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IxE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long long> *op = static_cast<vtkDenseArray<long long> *>(vp);

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
      op->vtkDenseArray<long long>::GetCoordinatesN(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IxE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long long> *op = static_cast<vtkDenseArray<long long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkDenseArray<long long>::DeepCopy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IxE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long long> *op = static_cast<vtkDenseArray<long long> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const long long *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkDenseArray<long long>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IxE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long long> *op = static_cast<vtkDenseArray<long long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const long long *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkDenseArray<long long>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IxE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long long> *op = static_cast<vtkDenseArray<long long> *>(vp);

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
      &op->vtkDenseArray<long long>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IxE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long long> *op = static_cast<vtkDenseArray<long long> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    const long long *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkDenseArray<long long>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_IxE_GetValue_Methods[] = {
  {nullptr, PyvtkDenseArray_IxE_GetValue_s1, METH_VARARGS,
   "@k"},
  {nullptr, PyvtkDenseArray_IxE_GetValue_s4, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDenseArray_IxE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_IxE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkDenseArray_IxE_GetValue_s2(self, args);
    case 3:
      return PyvtkDenseArray_IxE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return nullptr;
}



static PyObject *
PyvtkDenseArray_IxE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long long> *op = static_cast<vtkDenseArray<long long> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const long long *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkDenseArray<long long>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IxE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long long> *op = static_cast<vtkDenseArray<long long> *>(vp);

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
      op->vtkDenseArray<long long>::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IxE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long long> *op = static_cast<vtkDenseArray<long long> *>(vp);

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
      op->vtkDenseArray<long long>::SetValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IxE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long long> *op = static_cast<vtkDenseArray<long long> *>(vp);

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
      op->vtkDenseArray<long long>::SetValue(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IxE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long long> *op = static_cast<vtkDenseArray<long long> *>(vp);

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
      op->vtkDenseArray<long long>::SetValue(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_IxE_SetValue_Methods[] = {
  {nullptr, PyvtkDenseArray_IxE_SetValue_s1, METH_VARARGS,
   "@kk"},
  {nullptr, PyvtkDenseArray_IxE_SetValue_s4, METH_VARARGS,
   "@Wk vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDenseArray_IxE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_IxE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkDenseArray_IxE_SetValue_s2(self, args);
    case 4:
      return PyvtkDenseArray_IxE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return nullptr;
}



static PyObject *
PyvtkDenseArray_IxE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long long> *op = static_cast<vtkDenseArray<long long> *>(vp);

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
      op->vtkDenseArray<long long>::SetValueN(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IxE_Fill(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Fill");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long long> *op = static_cast<vtkDenseArray<long long> *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Fill(temp0);
    }
    else
    {
      op->vtkDenseArray<long long>::Fill(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IxE_GetStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<long long> *op = static_cast<vtkDenseArray<long long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long *tempr = (ap.IsBound() ?
      op->GetStorage() :
      op->vtkDenseArray<long long>::GetStorage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDenseArray_IxE_Methods[] = {
  {"IsTypeOf", PyvtkDenseArray_IxE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDenseArray_IxE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDenseArray_IxE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDenseArray_IxE\nC++: static vtkDenseArray<long long> *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDenseArray_IxE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDenseArray_IxE\nC++: vtkDenseArray<long long> *NewInstance()\n\n"},
  {"IsDense", PyvtkDenseArray_IxE_IsDense, METH_VARARGS,
   "V.IsDense() -> bool\nC++: bool IsDense() override;\n\nReturns true iff the underlying array storage is \"dense\", i.e.\nthat GetSize() and GetNonNullSize() will always return the same\nvalue. If not, the array is \"sparse\".\n"},
  {"GetExtents", PyvtkDenseArray_IxE_GetExtents, METH_VARARGS,
   "V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents() override;\n\nReturns the extents (the number of dimensions and size along each\ndimension) of the array.\n"},
  {"GetNonNullSize", PyvtkDenseArray_IxE_GetNonNullSize, METH_VARARGS,
   "V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize() override;\n\nReturns the number of non-null values stored in the array.  Note\nthat this value will equal GetSize() for dense arrays, and will\nbe less-than-or-equal to GetSize() for sparse arrays.\n"},
  {"GetCoordinatesN", PyvtkDenseArray_IxE_GetCoordinatesN, METH_VARARGS,
   "V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates) override;\n\nReturns the coordinates of the n-th value in the array, where n\nis in the range [0, GetNonNullSize()).  Note that the order in\nwhich coordinates are visited is undefined, but is guaranteed to\nmatch the order in which values are visited using\nvtkTypedArray::GetValueN() and vtkTypedArray::SetValueN().\n"},
  {"DeepCopy", PyvtkDenseArray_IxE_DeepCopy, METH_VARARGS,
   "V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy() override;\n\nReturns a new array that is a deep copy of this array.\n"},
  {"GetValue", PyvtkDenseArray_IxE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> int\nC++: const long long &GetValue(CoordinateT i) override;\nV.GetValue(int, int) -> int\nC++: const long long &GetValue(CoordinateT i, CoordinateT j)\n    override;\nV.GetValue(int, int, int) -> int\nC++: const long long &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k) override;\nV.GetValue(vtkArrayCoordinates) -> int\nC++: const long long &GetValue(\n    const vtkArrayCoordinates &coordinates) override;\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetValueN", PyvtkDenseArray_IxE_GetValueN, METH_VARARGS,
   "V.GetValueN(int) -> int\nC++: const long long &GetValueN(const SizeT n) override;\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetValue", PyvtkDenseArray_IxE_SetValue, METH_VARARGS,
   "V.SetValue(int, int)\nC++: void SetValue(CoordinateT i, const long long &value)\n    override;\nV.SetValue(int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const long long &value) override;\nV.SetValue(int, int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const long long &value) override;\nV.SetValue(vtkArrayCoordinates, int)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const long long &value) override;\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetValueN", PyvtkDenseArray_IxE_SetValueN, METH_VARARGS,
   "V.SetValueN(int, int)\nC++: void SetValueN(const SizeT n, const long long &value)\n    override;\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"Fill", PyvtkDenseArray_IxE_Fill, METH_VARARGS,
   "V.Fill(int)\nC++: void Fill(const long long &value)\n\nFills every element in the array with the given value.\n"},
  {"GetStorage", PyvtkDenseArray_IxE_GetStorage, METH_VARARGS,
   "V.GetStorage() -> (int, ...)\nC++: long long *GetStorage()\n\nReturns a mutable reference to the underlying storage.  Values\nare stored contiguously with fortran ordering.  Use at your own\nrisk!\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDenseArray_IxE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkDenseArray_IxE", // tp_name
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
  PyvtkDenseArray_IxE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDenseArray_IxE_StaticNew()
{
  return vtkDenseArray<long long>::New();
}

PyObject *PyvtkDenseArray_IxE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDenseArray_IxE_Type, PyvtkDenseArray_IxE_Methods,
    typeid(vtkDenseArray<long long>).name(),
 &PyvtkDenseArray_IxE_StaticNew);

  PyTypeObject *pytype = &PyvtkDenseArray_IxE_Type;

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

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDenseArray_IyE_ClassNew(); }

#ifndef DECLARED_PyvtkTypedArray_IyE_ClassNew
extern "C" { PyObject *PyvtkTypedArray_IyE_ClassNew(); }
#define DECLARED_PyvtkTypedArray_IyE_ClassNew
#endif

static const char *PyvtkDenseArray_IyE_Doc =
  "vtkDenseArray<unsigned long long> - Contiguous storage for N-way\narrays.\n\n"
  "Superclass: vtkTypedArray[uint64]\n\n"
  "vtkDenseArray is a concrete vtkArray implementation that stores\n"
  "values using a contiguous block of memory.  Values are stored with\n"
  "fortran ordering, meaning that if you iterated over the memory block,\n"
  "the left-most coordinates would vary the fastest.\n\n"
  "In addition to the retrieval and update methods provided by\n"
  "vtkTypedArray, vtkDenseArray provides methods to:\n\n"
  "Fill the entire array with a specific value.\n\n"
  "Retrieve a pointer to the storage memory block.\n\n"
  "@sa\n"
  "vtkArray, vtkTypedArray, vtkSparseArray\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";


static PyObject *
PyvtkDenseArray_IyE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDenseArray<unsigned long long>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IyE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long long> *op = static_cast<vtkDenseArray<unsigned long long> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDenseArray<unsigned long long>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IyE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDenseArray<unsigned long long> *tempr = vtkDenseArray<unsigned long long>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IyE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long long> *op = static_cast<vtkDenseArray<unsigned long long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDenseArray<unsigned long long> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDenseArray<unsigned long long>::NewInstance());

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
PyvtkDenseArray_IyE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long long> *op = static_cast<vtkDenseArray<unsigned long long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkDenseArray<unsigned long long>::IsDense());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IyE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long long> *op = static_cast<vtkDenseArray<unsigned long long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkDenseArray<unsigned long long>::GetExtents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IyE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long long> *op = static_cast<vtkDenseArray<unsigned long long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkDenseArray<unsigned long long>::GetNonNullSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IyE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long long> *op = static_cast<vtkDenseArray<unsigned long long> *>(vp);

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
      op->vtkDenseArray<unsigned long long>::GetCoordinatesN(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IyE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long long> *op = static_cast<vtkDenseArray<unsigned long long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkDenseArray<unsigned long long>::DeepCopy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IyE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long long> *op = static_cast<vtkDenseArray<unsigned long long> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const unsigned long long *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkDenseArray<unsigned long long>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IyE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long long> *op = static_cast<vtkDenseArray<unsigned long long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const unsigned long long *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkDenseArray<unsigned long long>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IyE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long long> *op = static_cast<vtkDenseArray<unsigned long long> *>(vp);

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
      &op->vtkDenseArray<unsigned long long>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IyE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long long> *op = static_cast<vtkDenseArray<unsigned long long> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    const unsigned long long *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkDenseArray<unsigned long long>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_IyE_GetValue_Methods[] = {
  {nullptr, PyvtkDenseArray_IyE_GetValue_s1, METH_VARARGS,
   "@k"},
  {nullptr, PyvtkDenseArray_IyE_GetValue_s4, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDenseArray_IyE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_IyE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkDenseArray_IyE_GetValue_s2(self, args);
    case 3:
      return PyvtkDenseArray_IyE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return nullptr;
}



static PyObject *
PyvtkDenseArray_IyE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long long> *op = static_cast<vtkDenseArray<unsigned long long> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const unsigned long long *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkDenseArray<unsigned long long>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IyE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long long> *op = static_cast<vtkDenseArray<unsigned long long> *>(vp);

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
      op->vtkDenseArray<unsigned long long>::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IyE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long long> *op = static_cast<vtkDenseArray<unsigned long long> *>(vp);

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
      op->vtkDenseArray<unsigned long long>::SetValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IyE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long long> *op = static_cast<vtkDenseArray<unsigned long long> *>(vp);

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
      op->vtkDenseArray<unsigned long long>::SetValue(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IyE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long long> *op = static_cast<vtkDenseArray<unsigned long long> *>(vp);

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
      op->vtkDenseArray<unsigned long long>::SetValue(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_IyE_SetValue_Methods[] = {
  {nullptr, PyvtkDenseArray_IyE_SetValue_s1, METH_VARARGS,
   "@kK"},
  {nullptr, PyvtkDenseArray_IyE_SetValue_s4, METH_VARARGS,
   "@WK vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDenseArray_IyE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_IyE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkDenseArray_IyE_SetValue_s2(self, args);
    case 4:
      return PyvtkDenseArray_IyE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return nullptr;
}



static PyObject *
PyvtkDenseArray_IyE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long long> *op = static_cast<vtkDenseArray<unsigned long long> *>(vp);

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
      op->vtkDenseArray<unsigned long long>::SetValueN(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IyE_Fill(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Fill");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long long> *op = static_cast<vtkDenseArray<unsigned long long> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Fill(temp0);
    }
    else
    {
      op->vtkDenseArray<unsigned long long>::Fill(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IyE_GetStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<unsigned long long> *op = static_cast<vtkDenseArray<unsigned long long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long long *tempr = (ap.IsBound() ?
      op->GetStorage() :
      op->vtkDenseArray<unsigned long long>::GetStorage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDenseArray_IyE_Methods[] = {
  {"IsTypeOf", PyvtkDenseArray_IyE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDenseArray_IyE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDenseArray_IyE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDenseArray_IyE\nC++: static vtkDenseArray<unsigned long long> *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDenseArray_IyE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDenseArray_IyE\nC++: vtkDenseArray<unsigned long long> *NewInstance()\n\n"},
  {"IsDense", PyvtkDenseArray_IyE_IsDense, METH_VARARGS,
   "V.IsDense() -> bool\nC++: bool IsDense() override;\n\nReturns true iff the underlying array storage is \"dense\", i.e.\nthat GetSize() and GetNonNullSize() will always return the same\nvalue. If not, the array is \"sparse\".\n"},
  {"GetExtents", PyvtkDenseArray_IyE_GetExtents, METH_VARARGS,
   "V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents() override;\n\nReturns the extents (the number of dimensions and size along each\ndimension) of the array.\n"},
  {"GetNonNullSize", PyvtkDenseArray_IyE_GetNonNullSize, METH_VARARGS,
   "V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize() override;\n\nReturns the number of non-null values stored in the array.  Note\nthat this value will equal GetSize() for dense arrays, and will\nbe less-than-or-equal to GetSize() for sparse arrays.\n"},
  {"GetCoordinatesN", PyvtkDenseArray_IyE_GetCoordinatesN, METH_VARARGS,
   "V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates) override;\n\nReturns the coordinates of the n-th value in the array, where n\nis in the range [0, GetNonNullSize()).  Note that the order in\nwhich coordinates are visited is undefined, but is guaranteed to\nmatch the order in which values are visited using\nvtkTypedArray::GetValueN() and vtkTypedArray::SetValueN().\n"},
  {"DeepCopy", PyvtkDenseArray_IyE_DeepCopy, METH_VARARGS,
   "V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy() override;\n\nReturns a new array that is a deep copy of this array.\n"},
  {"GetValue", PyvtkDenseArray_IyE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> int\nC++: const unsigned long long &GetValue(CoordinateT i) override;\nV.GetValue(int, int) -> int\nC++: const unsigned long long &GetValue(CoordinateT i,\n    CoordinateT j) override;\nV.GetValue(int, int, int) -> int\nC++: const unsigned long long &GetValue(CoordinateT i,\n    CoordinateT j, CoordinateT k) override;\nV.GetValue(vtkArrayCoordinates) -> int\nC++: const unsigned long long &GetValue(\n    const vtkArrayCoordinates &coordinates) override;\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetValueN", PyvtkDenseArray_IyE_GetValueN, METH_VARARGS,
   "V.GetValueN(int) -> int\nC++: const unsigned long long &GetValueN(const SizeT n) override;\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetValue", PyvtkDenseArray_IyE_SetValue, METH_VARARGS,
   "V.SetValue(int, int)\nC++: void SetValue(CoordinateT i, const unsigned long long &value)\n     override;\nV.SetValue(int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const unsigned long long &value) override;\nV.SetValue(int, int, int, int)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const unsigned long long &value) override;\nV.SetValue(vtkArrayCoordinates, int)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const unsigned long long &value) override;\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetValueN", PyvtkDenseArray_IyE_SetValueN, METH_VARARGS,
   "V.SetValueN(int, int)\nC++: void SetValueN(const SizeT n,\n    const unsigned long long &value) override;\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"Fill", PyvtkDenseArray_IyE_Fill, METH_VARARGS,
   "V.Fill(int)\nC++: void Fill(const unsigned long long &value)\n\nFills every element in the array with the given value.\n"},
  {"GetStorage", PyvtkDenseArray_IyE_GetStorage, METH_VARARGS,
   "V.GetStorage() -> (int, ...)\nC++: unsigned long long *GetStorage()\n\nReturns a mutable reference to the underlying storage.  Values\nare stored contiguously with fortran ordering.  Use at your own\nrisk!\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDenseArray_IyE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkDenseArray_IyE", // tp_name
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
  PyvtkDenseArray_IyE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDenseArray_IyE_StaticNew()
{
  return vtkDenseArray<unsigned long long>::New();
}

PyObject *PyvtkDenseArray_IyE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDenseArray_IyE_Type, PyvtkDenseArray_IyE_Methods,
    typeid(vtkDenseArray<unsigned long long>).name(),
 &PyvtkDenseArray_IyE_StaticNew);

  PyTypeObject *pytype = &PyvtkDenseArray_IyE_Type;

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

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDenseArray_IfE_ClassNew(); }

#ifndef DECLARED_PyvtkTypedArray_IfE_ClassNew
extern "C" { PyObject *PyvtkTypedArray_IfE_ClassNew(); }
#define DECLARED_PyvtkTypedArray_IfE_ClassNew
#endif

static const char *PyvtkDenseArray_IfE_Doc =
  "vtkDenseArray- Contiguous storage for N-way arrays.\n\n"
  "Superclass: vtkTypedArray[float32]\n\n"
  "vtkDenseArray is a concrete vtkArray implementation that stores\n"
  "values using a contiguous block of memory.  Values are stored with\n"
  "fortran ordering, meaning that if you iterated over the memory block,\n"
  "the left-most coordinates would vary the fastest.\n\n"
  "In addition to the retrieval and update methods provided by\n"
  "vtkTypedArray, vtkDenseArray provides methods to:\n\n"
  "Fill the entire array with a specific value.\n\n"
  "Retrieve a pointer to the storage memory block.\n\n"
  "@sa\n"
  "vtkArray, vtkTypedArray, vtkSparseArray\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";


static PyObject *
PyvtkDenseArray_IfE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDenseArray<float>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IfE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<float> *op = static_cast<vtkDenseArray<float> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDenseArray<float>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IfE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDenseArray<float> *tempr = vtkDenseArray<float>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IfE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<float> *op = static_cast<vtkDenseArray<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDenseArray<float> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDenseArray<float>::NewInstance());

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
PyvtkDenseArray_IfE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<float> *op = static_cast<vtkDenseArray<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkDenseArray<float>::IsDense());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IfE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<float> *op = static_cast<vtkDenseArray<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkDenseArray<float>::GetExtents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IfE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<float> *op = static_cast<vtkDenseArray<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkDenseArray<float>::GetNonNullSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IfE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<float> *op = static_cast<vtkDenseArray<float> *>(vp);

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
      op->vtkDenseArray<float>::GetCoordinatesN(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IfE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<float> *op = static_cast<vtkDenseArray<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkDenseArray<float>::DeepCopy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IfE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<float> *op = static_cast<vtkDenseArray<float> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const float *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkDenseArray<float>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IfE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<float> *op = static_cast<vtkDenseArray<float> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const float *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkDenseArray<float>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IfE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<float> *op = static_cast<vtkDenseArray<float> *>(vp);

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
      &op->vtkDenseArray<float>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IfE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<float> *op = static_cast<vtkDenseArray<float> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    const float *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkDenseArray<float>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_IfE_GetValue_Methods[] = {
  {nullptr, PyvtkDenseArray_IfE_GetValue_s1, METH_VARARGS,
   "@k"},
  {nullptr, PyvtkDenseArray_IfE_GetValue_s4, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDenseArray_IfE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_IfE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkDenseArray_IfE_GetValue_s2(self, args);
    case 3:
      return PyvtkDenseArray_IfE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return nullptr;
}



static PyObject *
PyvtkDenseArray_IfE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<float> *op = static_cast<vtkDenseArray<float> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const float *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkDenseArray<float>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IfE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<float> *op = static_cast<vtkDenseArray<float> *>(vp);

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
      op->vtkDenseArray<float>::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IfE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<float> *op = static_cast<vtkDenseArray<float> *>(vp);

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
      op->vtkDenseArray<float>::SetValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IfE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<float> *op = static_cast<vtkDenseArray<float> *>(vp);

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
      op->vtkDenseArray<float>::SetValue(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IfE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<float> *op = static_cast<vtkDenseArray<float> *>(vp);

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
      op->vtkDenseArray<float>::SetValue(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_IfE_SetValue_Methods[] = {
  {nullptr, PyvtkDenseArray_IfE_SetValue_s1, METH_VARARGS,
   "@kf"},
  {nullptr, PyvtkDenseArray_IfE_SetValue_s4, METH_VARARGS,
   "@Wf vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDenseArray_IfE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_IfE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkDenseArray_IfE_SetValue_s2(self, args);
    case 4:
      return PyvtkDenseArray_IfE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return nullptr;
}



static PyObject *
PyvtkDenseArray_IfE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<float> *op = static_cast<vtkDenseArray<float> *>(vp);

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
      op->vtkDenseArray<float>::SetValueN(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IfE_Fill(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Fill");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<float> *op = static_cast<vtkDenseArray<float> *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Fill(temp0);
    }
    else
    {
      op->vtkDenseArray<float>::Fill(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IfE_GetStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<float> *op = static_cast<vtkDenseArray<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetStorage() :
      op->vtkDenseArray<float>::GetStorage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDenseArray_IfE_Methods[] = {
  {"IsTypeOf", PyvtkDenseArray_IfE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDenseArray_IfE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDenseArray_IfE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDenseArray_IfE\nC++: static vtkDenseArray<float> *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDenseArray_IfE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDenseArray_IfE\nC++: vtkDenseArray<float> *NewInstance()\n\n"},
  {"IsDense", PyvtkDenseArray_IfE_IsDense, METH_VARARGS,
   "V.IsDense() -> bool\nC++: bool IsDense() override;\n\nReturns true iff the underlying array storage is \"dense\", i.e.\nthat GetSize() and GetNonNullSize() will always return the same\nvalue. If not, the array is \"sparse\".\n"},
  {"GetExtents", PyvtkDenseArray_IfE_GetExtents, METH_VARARGS,
   "V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents() override;\n\nReturns the extents (the number of dimensions and size along each\ndimension) of the array.\n"},
  {"GetNonNullSize", PyvtkDenseArray_IfE_GetNonNullSize, METH_VARARGS,
   "V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize() override;\n\nReturns the number of non-null values stored in the array.  Note\nthat this value will equal GetSize() for dense arrays, and will\nbe less-than-or-equal to GetSize() for sparse arrays.\n"},
  {"GetCoordinatesN", PyvtkDenseArray_IfE_GetCoordinatesN, METH_VARARGS,
   "V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates) override;\n\nReturns the coordinates of the n-th value in the array, where n\nis in the range [0, GetNonNullSize()).  Note that the order in\nwhich coordinates are visited is undefined, but is guaranteed to\nmatch the order in which values are visited using\nvtkTypedArray::GetValueN() and vtkTypedArray::SetValueN().\n"},
  {"DeepCopy", PyvtkDenseArray_IfE_DeepCopy, METH_VARARGS,
   "V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy() override;\n\nReturns a new array that is a deep copy of this array.\n"},
  {"GetValue", PyvtkDenseArray_IfE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> float\nC++: const float &GetValue(CoordinateT i) override;\nV.GetValue(int, int) -> float\nC++: const float &GetValue(CoordinateT i, CoordinateT j) override;\nV.GetValue(int, int, int) -> float\nC++: const float &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k) override;\nV.GetValue(vtkArrayCoordinates) -> float\nC++: const float &GetValue(const vtkArrayCoordinates &coordinates)\n     override;\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetValueN", PyvtkDenseArray_IfE_GetValueN, METH_VARARGS,
   "V.GetValueN(int) -> float\nC++: const float &GetValueN(const SizeT n) override;\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetValue", PyvtkDenseArray_IfE_SetValue, METH_VARARGS,
   "V.SetValue(int, float)\nC++: void SetValue(CoordinateT i, const float &value) override;\nV.SetValue(int, int, float)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const float &value) override;\nV.SetValue(int, int, int, float)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const float &value) override;\nV.SetValue(vtkArrayCoordinates, float)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const float &value) override;\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetValueN", PyvtkDenseArray_IfE_SetValueN, METH_VARARGS,
   "V.SetValueN(int, float)\nC++: void SetValueN(const SizeT n, const float &value) override;\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"Fill", PyvtkDenseArray_IfE_Fill, METH_VARARGS,
   "V.Fill(float)\nC++: void Fill(const float &value)\n\nFills every element in the array with the given value.\n"},
  {"GetStorage", PyvtkDenseArray_IfE_GetStorage, METH_VARARGS,
   "V.GetStorage() -> (float, ...)\nC++: float *GetStorage()\n\nReturns a mutable reference to the underlying storage.  Values\nare stored contiguously with fortran ordering.  Use at your own\nrisk!\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDenseArray_IfE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkDenseArray_IfE", // tp_name
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
  PyvtkDenseArray_IfE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDenseArray_IfE_StaticNew()
{
  return vtkDenseArray<float>::New();
}

PyObject *PyvtkDenseArray_IfE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDenseArray_IfE_Type, PyvtkDenseArray_IfE_Methods,
    typeid(vtkDenseArray<float>).name(),
 &PyvtkDenseArray_IfE_StaticNew);

  PyTypeObject *pytype = &PyvtkDenseArray_IfE_Type;

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

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDenseArray_IdE_ClassNew(); }

#ifndef DECLARED_PyvtkTypedArray_IdE_ClassNew
extern "C" { PyObject *PyvtkTypedArray_IdE_ClassNew(); }
#define DECLARED_PyvtkTypedArray_IdE_ClassNew
#endif

static const char *PyvtkDenseArray_IdE_Doc =
  "vtkDenseArray- Contiguous storage for N-way arrays.\n\n"
  "Superclass: vtkTypedArray[float64]\n\n"
  "vtkDenseArray is a concrete vtkArray implementation that stores\n"
  "values using a contiguous block of memory.  Values are stored with\n"
  "fortran ordering, meaning that if you iterated over the memory block,\n"
  "the left-most coordinates would vary the fastest.\n\n"
  "In addition to the retrieval and update methods provided by\n"
  "vtkTypedArray, vtkDenseArray provides methods to:\n\n"
  "Fill the entire array with a specific value.\n\n"
  "Retrieve a pointer to the storage memory block.\n\n"
  "@sa\n"
  "vtkArray, vtkTypedArray, vtkSparseArray\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";


static PyObject *
PyvtkDenseArray_IdE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDenseArray<double>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IdE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<double> *op = static_cast<vtkDenseArray<double> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDenseArray<double>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IdE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDenseArray<double> *tempr = vtkDenseArray<double>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IdE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<double> *op = static_cast<vtkDenseArray<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDenseArray<double> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDenseArray<double>::NewInstance());

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
PyvtkDenseArray_IdE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<double> *op = static_cast<vtkDenseArray<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkDenseArray<double>::IsDense());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IdE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<double> *op = static_cast<vtkDenseArray<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkDenseArray<double>::GetExtents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IdE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<double> *op = static_cast<vtkDenseArray<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkDenseArray<double>::GetNonNullSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IdE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<double> *op = static_cast<vtkDenseArray<double> *>(vp);

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
      op->vtkDenseArray<double>::GetCoordinatesN(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IdE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<double> *op = static_cast<vtkDenseArray<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkDenseArray<double>::DeepCopy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IdE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<double> *op = static_cast<vtkDenseArray<double> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const double *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkDenseArray<double>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IdE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<double> *op = static_cast<vtkDenseArray<double> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const double *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkDenseArray<double>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IdE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<double> *op = static_cast<vtkDenseArray<double> *>(vp);

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
      &op->vtkDenseArray<double>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IdE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<double> *op = static_cast<vtkDenseArray<double> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    const double *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkDenseArray<double>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_IdE_GetValue_Methods[] = {
  {nullptr, PyvtkDenseArray_IdE_GetValue_s1, METH_VARARGS,
   "@k"},
  {nullptr, PyvtkDenseArray_IdE_GetValue_s4, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDenseArray_IdE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_IdE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkDenseArray_IdE_GetValue_s2(self, args);
    case 3:
      return PyvtkDenseArray_IdE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return nullptr;
}



static PyObject *
PyvtkDenseArray_IdE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<double> *op = static_cast<vtkDenseArray<double> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const double *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkDenseArray<double>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IdE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<double> *op = static_cast<vtkDenseArray<double> *>(vp);

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
      op->vtkDenseArray<double>::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IdE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<double> *op = static_cast<vtkDenseArray<double> *>(vp);

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
      op->vtkDenseArray<double>::SetValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IdE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<double> *op = static_cast<vtkDenseArray<double> *>(vp);

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
      op->vtkDenseArray<double>::SetValue(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_IdE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<double> *op = static_cast<vtkDenseArray<double> *>(vp);

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
      op->vtkDenseArray<double>::SetValue(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_IdE_SetValue_Methods[] = {
  {nullptr, PyvtkDenseArray_IdE_SetValue_s1, METH_VARARGS,
   "@kd"},
  {nullptr, PyvtkDenseArray_IdE_SetValue_s4, METH_VARARGS,
   "@Wd vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDenseArray_IdE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_IdE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkDenseArray_IdE_SetValue_s2(self, args);
    case 4:
      return PyvtkDenseArray_IdE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return nullptr;
}



static PyObject *
PyvtkDenseArray_IdE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<double> *op = static_cast<vtkDenseArray<double> *>(vp);

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
      op->vtkDenseArray<double>::SetValueN(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IdE_Fill(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Fill");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<double> *op = static_cast<vtkDenseArray<double> *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Fill(temp0);
    }
    else
    {
      op->vtkDenseArray<double>::Fill(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_IdE_GetStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<double> *op = static_cast<vtkDenseArray<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetStorage() :
      op->vtkDenseArray<double>::GetStorage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDenseArray_IdE_Methods[] = {
  {"IsTypeOf", PyvtkDenseArray_IdE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDenseArray_IdE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDenseArray_IdE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDenseArray_IdE\nC++: static vtkDenseArray<double> *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDenseArray_IdE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDenseArray_IdE\nC++: vtkDenseArray<double> *NewInstance()\n\n"},
  {"IsDense", PyvtkDenseArray_IdE_IsDense, METH_VARARGS,
   "V.IsDense() -> bool\nC++: bool IsDense() override;\n\nReturns true iff the underlying array storage is \"dense\", i.e.\nthat GetSize() and GetNonNullSize() will always return the same\nvalue. If not, the array is \"sparse\".\n"},
  {"GetExtents", PyvtkDenseArray_IdE_GetExtents, METH_VARARGS,
   "V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents() override;\n\nReturns the extents (the number of dimensions and size along each\ndimension) of the array.\n"},
  {"GetNonNullSize", PyvtkDenseArray_IdE_GetNonNullSize, METH_VARARGS,
   "V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize() override;\n\nReturns the number of non-null values stored in the array.  Note\nthat this value will equal GetSize() for dense arrays, and will\nbe less-than-or-equal to GetSize() for sparse arrays.\n"},
  {"GetCoordinatesN", PyvtkDenseArray_IdE_GetCoordinatesN, METH_VARARGS,
   "V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates) override;\n\nReturns the coordinates of the n-th value in the array, where n\nis in the range [0, GetNonNullSize()).  Note that the order in\nwhich coordinates are visited is undefined, but is guaranteed to\nmatch the order in which values are visited using\nvtkTypedArray::GetValueN() and vtkTypedArray::SetValueN().\n"},
  {"DeepCopy", PyvtkDenseArray_IdE_DeepCopy, METH_VARARGS,
   "V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy() override;\n\nReturns a new array that is a deep copy of this array.\n"},
  {"GetValue", PyvtkDenseArray_IdE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> float\nC++: const double &GetValue(CoordinateT i) override;\nV.GetValue(int, int) -> float\nC++: const double &GetValue(CoordinateT i, CoordinateT j)\n    override;\nV.GetValue(int, int, int) -> float\nC++: const double &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k) override;\nV.GetValue(vtkArrayCoordinates) -> float\nC++: const double &GetValue(\n    const vtkArrayCoordinates &coordinates) override;\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetValueN", PyvtkDenseArray_IdE_GetValueN, METH_VARARGS,
   "V.GetValueN(int) -> float\nC++: const double &GetValueN(const SizeT n) override;\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetValue", PyvtkDenseArray_IdE_SetValue, METH_VARARGS,
   "V.SetValue(int, float)\nC++: void SetValue(CoordinateT i, const double &value) override;\nV.SetValue(int, int, float)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const double &value) override;\nV.SetValue(int, int, int, float)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const double &value) override;\nV.SetValue(vtkArrayCoordinates, float)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const double &value) override;\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetValueN", PyvtkDenseArray_IdE_SetValueN, METH_VARARGS,
   "V.SetValueN(int, float)\nC++: void SetValueN(const SizeT n, const double &value) override;\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"Fill", PyvtkDenseArray_IdE_Fill, METH_VARARGS,
   "V.Fill(float)\nC++: void Fill(const double &value)\n\nFills every element in the array with the given value.\n"},
  {"GetStorage", PyvtkDenseArray_IdE_GetStorage, METH_VARARGS,
   "V.GetStorage() -> (float, ...)\nC++: double *GetStorage()\n\nReturns a mutable reference to the underlying storage.  Values\nare stored contiguously with fortran ordering.  Use at your own\nrisk!\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDenseArray_IdE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkDenseArray_IdE", // tp_name
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
  PyvtkDenseArray_IdE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDenseArray_IdE_StaticNew()
{
  return vtkDenseArray<double>::New();
}

PyObject *PyvtkDenseArray_IdE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDenseArray_IdE_Type, PyvtkDenseArray_IdE_Methods,
    typeid(vtkDenseArray<double>).name(),
 &PyvtkDenseArray_IdE_StaticNew);

  PyTypeObject *pytype = &PyvtkDenseArray_IdE_Type;

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

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDenseArray_I12vtkStdStringE_ClassNew(); }

#ifndef DECLARED_PyvtkTypedArray_I12vtkStdStringE_ClassNew
extern "C" { PyObject *PyvtkTypedArray_I12vtkStdStringE_ClassNew(); }
#define DECLARED_PyvtkTypedArray_I12vtkStdStringE_ClassNew
#endif

static const char *PyvtkDenseArray_I12vtkStdStringE_Doc =
  "vtkDenseArray- Contiguous storage for N-way arrays.\n\n"
  "Superclass: vtkTypedArray[str]\n\n"
  "vtkDenseArray is a concrete vtkArray implementation that stores\n"
  "values using a contiguous block of memory.  Values are stored with\n"
  "fortran ordering, meaning that if you iterated over the memory block,\n"
  "the left-most coordinates would vary the fastest.\n\n"
  "In addition to the retrieval and update methods provided by\n"
  "vtkTypedArray, vtkDenseArray provides methods to:\n\n"
  "Fill the entire array with a specific value.\n\n"
  "Retrieve a pointer to the storage memory block.\n\n"
  "@sa\n"
  "vtkArray, vtkTypedArray, vtkSparseArray\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";


static PyObject *
PyvtkDenseArray_I12vtkStdStringE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDenseArray<vtkStdString>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_I12vtkStdStringE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkStdString> *op = static_cast<vtkDenseArray<vtkStdString> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDenseArray<vtkStdString>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_I12vtkStdStringE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDenseArray<vtkStdString> *tempr = vtkDenseArray<vtkStdString>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_I12vtkStdStringE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkStdString> *op = static_cast<vtkDenseArray<vtkStdString> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDenseArray<vtkStdString> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDenseArray<vtkStdString>::NewInstance());

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
PyvtkDenseArray_I12vtkStdStringE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkStdString> *op = static_cast<vtkDenseArray<vtkStdString> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkDenseArray<vtkStdString>::IsDense());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_I12vtkStdStringE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkStdString> *op = static_cast<vtkDenseArray<vtkStdString> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkDenseArray<vtkStdString>::GetExtents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_I12vtkStdStringE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkStdString> *op = static_cast<vtkDenseArray<vtkStdString> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkDenseArray<vtkStdString>::GetNonNullSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_I12vtkStdStringE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkStdString> *op = static_cast<vtkDenseArray<vtkStdString> *>(vp);

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
      op->vtkDenseArray<vtkStdString>::GetCoordinatesN(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_I12vtkStdStringE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkStdString> *op = static_cast<vtkDenseArray<vtkStdString> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkDenseArray<vtkStdString>::DeepCopy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_I12vtkStdStringE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkStdString> *op = static_cast<vtkDenseArray<vtkStdString> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const vtkStdString *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkDenseArray<vtkStdString>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_I12vtkStdStringE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkStdString> *op = static_cast<vtkDenseArray<vtkStdString> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const vtkStdString *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkDenseArray<vtkStdString>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_I12vtkStdStringE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkStdString> *op = static_cast<vtkDenseArray<vtkStdString> *>(vp);

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
      &op->vtkDenseArray<vtkStdString>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_I12vtkStdStringE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkStdString> *op = static_cast<vtkDenseArray<vtkStdString> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    const vtkStdString *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkDenseArray<vtkStdString>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_I12vtkStdStringE_GetValue_Methods[] = {
  {nullptr, PyvtkDenseArray_I12vtkStdStringE_GetValue_s1, METH_VARARGS,
   "@k"},
  {nullptr, PyvtkDenseArray_I12vtkStdStringE_GetValue_s4, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDenseArray_I12vtkStdStringE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_I12vtkStdStringE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkDenseArray_I12vtkStdStringE_GetValue_s2(self, args);
    case 3:
      return PyvtkDenseArray_I12vtkStdStringE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return nullptr;
}



static PyObject *
PyvtkDenseArray_I12vtkStdStringE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkStdString> *op = static_cast<vtkDenseArray<vtkStdString> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const vtkStdString *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkDenseArray<vtkStdString>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_I12vtkStdStringE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkStdString> *op = static_cast<vtkDenseArray<vtkStdString> *>(vp);

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
      op->vtkDenseArray<vtkStdString>::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_I12vtkStdStringE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkStdString> *op = static_cast<vtkDenseArray<vtkStdString> *>(vp);

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
      op->vtkDenseArray<vtkStdString>::SetValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_I12vtkStdStringE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkStdString> *op = static_cast<vtkDenseArray<vtkStdString> *>(vp);

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
      op->vtkDenseArray<vtkStdString>::SetValue(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_I12vtkStdStringE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkStdString> *op = static_cast<vtkDenseArray<vtkStdString> *>(vp);

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
      op->vtkDenseArray<vtkStdString>::SetValue(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_I12vtkStdStringE_SetValue_Methods[] = {
  {nullptr, PyvtkDenseArray_I12vtkStdStringE_SetValue_s1, METH_VARARGS,
   "@ks"},
  {nullptr, PyvtkDenseArray_I12vtkStdStringE_SetValue_s4, METH_VARARGS,
   "@Ws vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDenseArray_I12vtkStdStringE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_I12vtkStdStringE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkDenseArray_I12vtkStdStringE_SetValue_s2(self, args);
    case 4:
      return PyvtkDenseArray_I12vtkStdStringE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return nullptr;
}



static PyObject *
PyvtkDenseArray_I12vtkStdStringE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkStdString> *op = static_cast<vtkDenseArray<vtkStdString> *>(vp);

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
      op->vtkDenseArray<vtkStdString>::SetValueN(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_I12vtkStdStringE_Fill(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Fill");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkStdString> *op = static_cast<vtkDenseArray<vtkStdString> *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Fill(temp0);
    }
    else
    {
      op->vtkDenseArray<vtkStdString>::Fill(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDenseArray_I12vtkStdStringE_Methods[] = {
  {"IsTypeOf", PyvtkDenseArray_I12vtkStdStringE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDenseArray_I12vtkStdStringE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDenseArray_I12vtkStdStringE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDenseArray_I12vtkStdStringE\nC++: static vtkDenseArray<vtkStdString> *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDenseArray_I12vtkStdStringE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDenseArray_I12vtkStdStringE\nC++: vtkDenseArray<vtkStdString> *NewInstance()\n\n"},
  {"IsDense", PyvtkDenseArray_I12vtkStdStringE_IsDense, METH_VARARGS,
   "V.IsDense() -> bool\nC++: bool IsDense() override;\n\nReturns true iff the underlying array storage is \"dense\", i.e.\nthat GetSize() and GetNonNullSize() will always return the same\nvalue. If not, the array is \"sparse\".\n"},
  {"GetExtents", PyvtkDenseArray_I12vtkStdStringE_GetExtents, METH_VARARGS,
   "V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents() override;\n\nReturns the extents (the number of dimensions and size along each\ndimension) of the array.\n"},
  {"GetNonNullSize", PyvtkDenseArray_I12vtkStdStringE_GetNonNullSize, METH_VARARGS,
   "V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize() override;\n\nReturns the number of non-null values stored in the array.  Note\nthat this value will equal GetSize() for dense arrays, and will\nbe less-than-or-equal to GetSize() for sparse arrays.\n"},
  {"GetCoordinatesN", PyvtkDenseArray_I12vtkStdStringE_GetCoordinatesN, METH_VARARGS,
   "V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates) override;\n\nReturns the coordinates of the n-th value in the array, where n\nis in the range [0, GetNonNullSize()).  Note that the order in\nwhich coordinates are visited is undefined, but is guaranteed to\nmatch the order in which values are visited using\nvtkTypedArray::GetValueN() and vtkTypedArray::SetValueN().\n"},
  {"DeepCopy", PyvtkDenseArray_I12vtkStdStringE_DeepCopy, METH_VARARGS,
   "V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy() override;\n\nReturns a new array that is a deep copy of this array.\n"},
  {"GetValue", PyvtkDenseArray_I12vtkStdStringE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> string\nC++: const vtkStdString &GetValue(CoordinateT i) override;\nV.GetValue(int, int) -> string\nC++: const vtkStdString &GetValue(CoordinateT i, CoordinateT j)\n    override;\nV.GetValue(int, int, int) -> string\nC++: const vtkStdString &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k) override;\nV.GetValue(vtkArrayCoordinates) -> string\nC++: const vtkStdString &GetValue(\n    const vtkArrayCoordinates &coordinates) override;\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetValueN", PyvtkDenseArray_I12vtkStdStringE_GetValueN, METH_VARARGS,
   "V.GetValueN(int) -> string\nC++: const vtkStdString &GetValueN(const SizeT n) override;\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetValue", PyvtkDenseArray_I12vtkStdStringE_SetValue, METH_VARARGS,
   "V.SetValue(int, string)\nC++: void SetValue(CoordinateT i, const vtkStdString &value)\n    override;\nV.SetValue(int, int, string)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const vtkStdString &value) override;\nV.SetValue(int, int, int, string)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const vtkStdString &value) override;\nV.SetValue(vtkArrayCoordinates, string)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const vtkStdString &value) override;\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetValueN", PyvtkDenseArray_I12vtkStdStringE_SetValueN, METH_VARARGS,
   "V.SetValueN(int, string)\nC++: void SetValueN(const SizeT n, const vtkStdString &value)\n    override;\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"Fill", PyvtkDenseArray_I12vtkStdStringE_Fill, METH_VARARGS,
   "V.Fill(string)\nC++: void Fill(const vtkStdString &value)\n\nFills every element in the array with the given value.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDenseArray_I12vtkStdStringE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkDenseArray_I12vtkStdStringE", // tp_name
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
  PyvtkDenseArray_I12vtkStdStringE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDenseArray_I12vtkStdStringE_StaticNew()
{
  return vtkDenseArray<vtkStdString>::New();
}

PyObject *PyvtkDenseArray_I12vtkStdStringE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDenseArray_I12vtkStdStringE_Type, PyvtkDenseArray_I12vtkStdStringE_Methods,
    typeid(vtkDenseArray<vtkStdString>).name(),
 &PyvtkDenseArray_I12vtkStdStringE_StaticNew);

  PyTypeObject *pytype = &PyvtkDenseArray_I12vtkStdStringE_Type;

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

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDenseArray_I16vtkUnicodeStringE_ClassNew(); }

#ifndef DECLARED_PyvtkTypedArray_I16vtkUnicodeStringE_ClassNew
extern "C" { PyObject *PyvtkTypedArray_I16vtkUnicodeStringE_ClassNew(); }
#define DECLARED_PyvtkTypedArray_I16vtkUnicodeStringE_ClassNew
#endif

static const char *PyvtkDenseArray_I16vtkUnicodeStringE_Doc =
  "vtkDenseArray- Contiguous storage for N-way arrays.\n\n"
  "Superclass: vtkTypedArray[unicode]\n\n"
  "vtkDenseArray is a concrete vtkArray implementation that stores\n"
  "values using a contiguous block of memory.  Values are stored with\n"
  "fortran ordering, meaning that if you iterated over the memory block,\n"
  "the left-most coordinates would vary the fastest.\n\n"
  "In addition to the retrieval and update methods provided by\n"
  "vtkTypedArray, vtkDenseArray provides methods to:\n\n"
  "Fill the entire array with a specific value.\n\n"
  "Retrieve a pointer to the storage memory block.\n\n"
  "@sa\n"
  "vtkArray, vtkTypedArray, vtkSparseArray\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";


static PyObject *
PyvtkDenseArray_I16vtkUnicodeStringE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDenseArray<vtkUnicodeString>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_I16vtkUnicodeStringE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkUnicodeString> *op = static_cast<vtkDenseArray<vtkUnicodeString> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDenseArray<vtkUnicodeString>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_I16vtkUnicodeStringE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDenseArray<vtkUnicodeString> *tempr = vtkDenseArray<vtkUnicodeString>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_I16vtkUnicodeStringE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkUnicodeString> *op = static_cast<vtkDenseArray<vtkUnicodeString> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDenseArray<vtkUnicodeString> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDenseArray<vtkUnicodeString>::NewInstance());

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
PyvtkDenseArray_I16vtkUnicodeStringE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkUnicodeString> *op = static_cast<vtkDenseArray<vtkUnicodeString> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkDenseArray<vtkUnicodeString>::IsDense());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_I16vtkUnicodeStringE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkUnicodeString> *op = static_cast<vtkDenseArray<vtkUnicodeString> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkDenseArray<vtkUnicodeString>::GetExtents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_I16vtkUnicodeStringE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkUnicodeString> *op = static_cast<vtkDenseArray<vtkUnicodeString> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkDenseArray<vtkUnicodeString>::GetNonNullSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_I16vtkUnicodeStringE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkUnicodeString> *op = static_cast<vtkDenseArray<vtkUnicodeString> *>(vp);

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
      op->vtkDenseArray<vtkUnicodeString>::GetCoordinatesN(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_I16vtkUnicodeStringE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkUnicodeString> *op = static_cast<vtkDenseArray<vtkUnicodeString> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkDenseArray<vtkUnicodeString>::DeepCopy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_I16vtkUnicodeStringE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkUnicodeString> *op = static_cast<vtkDenseArray<vtkUnicodeString> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const vtkUnicodeString *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkDenseArray<vtkUnicodeString>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_I16vtkUnicodeStringE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkUnicodeString> *op = static_cast<vtkDenseArray<vtkUnicodeString> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const vtkUnicodeString *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkDenseArray<vtkUnicodeString>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_I16vtkUnicodeStringE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkUnicodeString> *op = static_cast<vtkDenseArray<vtkUnicodeString> *>(vp);

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
      &op->vtkDenseArray<vtkUnicodeString>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_I16vtkUnicodeStringE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkUnicodeString> *op = static_cast<vtkDenseArray<vtkUnicodeString> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    const vtkUnicodeString *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkDenseArray<vtkUnicodeString>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_I16vtkUnicodeStringE_GetValue_Methods[] = {
  {nullptr, PyvtkDenseArray_I16vtkUnicodeStringE_GetValue_s1, METH_VARARGS,
   "@k"},
  {nullptr, PyvtkDenseArray_I16vtkUnicodeStringE_GetValue_s4, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDenseArray_I16vtkUnicodeStringE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_I16vtkUnicodeStringE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkDenseArray_I16vtkUnicodeStringE_GetValue_s2(self, args);
    case 3:
      return PyvtkDenseArray_I16vtkUnicodeStringE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return nullptr;
}



static PyObject *
PyvtkDenseArray_I16vtkUnicodeStringE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkUnicodeString> *op = static_cast<vtkDenseArray<vtkUnicodeString> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const vtkUnicodeString *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkDenseArray<vtkUnicodeString>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_I16vtkUnicodeStringE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkUnicodeString> *op = static_cast<vtkDenseArray<vtkUnicodeString> *>(vp);

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
      op->vtkDenseArray<vtkUnicodeString>::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_I16vtkUnicodeStringE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkUnicodeString> *op = static_cast<vtkDenseArray<vtkUnicodeString> *>(vp);

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
      op->vtkDenseArray<vtkUnicodeString>::SetValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_I16vtkUnicodeStringE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkUnicodeString> *op = static_cast<vtkDenseArray<vtkUnicodeString> *>(vp);

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
      op->vtkDenseArray<vtkUnicodeString>::SetValue(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_I16vtkUnicodeStringE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkUnicodeString> *op = static_cast<vtkDenseArray<vtkUnicodeString> *>(vp);

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
      op->vtkDenseArray<vtkUnicodeString>::SetValue(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_I16vtkUnicodeStringE_SetValue_Methods[] = {
  {nullptr, PyvtkDenseArray_I16vtkUnicodeStringE_SetValue_s1, METH_VARARGS,
   "@ku"},
  {nullptr, PyvtkDenseArray_I16vtkUnicodeStringE_SetValue_s4, METH_VARARGS,
   "@Wu vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDenseArray_I16vtkUnicodeStringE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_I16vtkUnicodeStringE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkDenseArray_I16vtkUnicodeStringE_SetValue_s2(self, args);
    case 4:
      return PyvtkDenseArray_I16vtkUnicodeStringE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return nullptr;
}



static PyObject *
PyvtkDenseArray_I16vtkUnicodeStringE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkUnicodeString> *op = static_cast<vtkDenseArray<vtkUnicodeString> *>(vp);

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
      op->vtkDenseArray<vtkUnicodeString>::SetValueN(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_I16vtkUnicodeStringE_Fill(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Fill");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkUnicodeString> *op = static_cast<vtkDenseArray<vtkUnicodeString> *>(vp);

  vtkUnicodeString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Fill(temp0);
    }
    else
    {
      op->vtkDenseArray<vtkUnicodeString>::Fill(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDenseArray_I16vtkUnicodeStringE_Methods[] = {
  {"IsTypeOf", PyvtkDenseArray_I16vtkUnicodeStringE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDenseArray_I16vtkUnicodeStringE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDenseArray_I16vtkUnicodeStringE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkDenseArray_I16vtkUnicodeStringE\nC++: static vtkDenseArray<vtkUnicodeString> *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDenseArray_I16vtkUnicodeStringE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDenseArray_I16vtkUnicodeStringE\nC++: vtkDenseArray<vtkUnicodeString> *NewInstance()\n\n"},
  {"IsDense", PyvtkDenseArray_I16vtkUnicodeStringE_IsDense, METH_VARARGS,
   "V.IsDense() -> bool\nC++: bool IsDense() override;\n\nReturns true iff the underlying array storage is \"dense\", i.e.\nthat GetSize() and GetNonNullSize() will always return the same\nvalue. If not, the array is \"sparse\".\n"},
  {"GetExtents", PyvtkDenseArray_I16vtkUnicodeStringE_GetExtents, METH_VARARGS,
   "V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents() override;\n\nReturns the extents (the number of dimensions and size along each\ndimension) of the array.\n"},
  {"GetNonNullSize", PyvtkDenseArray_I16vtkUnicodeStringE_GetNonNullSize, METH_VARARGS,
   "V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize() override;\n\nReturns the number of non-null values stored in the array.  Note\nthat this value will equal GetSize() for dense arrays, and will\nbe less-than-or-equal to GetSize() for sparse arrays.\n"},
  {"GetCoordinatesN", PyvtkDenseArray_I16vtkUnicodeStringE_GetCoordinatesN, METH_VARARGS,
   "V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates) override;\n\nReturns the coordinates of the n-th value in the array, where n\nis in the range [0, GetNonNullSize()).  Note that the order in\nwhich coordinates are visited is undefined, but is guaranteed to\nmatch the order in which values are visited using\nvtkTypedArray::GetValueN() and vtkTypedArray::SetValueN().\n"},
  {"DeepCopy", PyvtkDenseArray_I16vtkUnicodeStringE_DeepCopy, METH_VARARGS,
   "V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy() override;\n\nReturns a new array that is a deep copy of this array.\n"},
  {"GetValue", PyvtkDenseArray_I16vtkUnicodeStringE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> unicode\nC++: const vtkUnicodeString &GetValue(CoordinateT i) override;\nV.GetValue(int, int) -> unicode\nC++: const vtkUnicodeString &GetValue(CoordinateT i,\n    CoordinateT j) override;\nV.GetValue(int, int, int) -> unicode\nC++: const vtkUnicodeString &GetValue(CoordinateT i,\n    CoordinateT j, CoordinateT k) override;\nV.GetValue(vtkArrayCoordinates) -> unicode\nC++: const vtkUnicodeString &GetValue(\n    const vtkArrayCoordinates &coordinates) override;\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetValueN", PyvtkDenseArray_I16vtkUnicodeStringE_GetValueN, METH_VARARGS,
   "V.GetValueN(int) -> unicode\nC++: const vtkUnicodeString &GetValueN(const SizeT n) override;\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetValue", PyvtkDenseArray_I16vtkUnicodeStringE_SetValue, METH_VARARGS,
   "V.SetValue(int, unicode)\nC++: void SetValue(CoordinateT i, const vtkUnicodeString &value)\n    override;\nV.SetValue(int, int, unicode)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const vtkUnicodeString &value) override;\nV.SetValue(int, int, int, unicode)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const vtkUnicodeString &value) override;\nV.SetValue(vtkArrayCoordinates, unicode)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const vtkUnicodeString &value) override;\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetValueN", PyvtkDenseArray_I16vtkUnicodeStringE_SetValueN, METH_VARARGS,
   "V.SetValueN(int, unicode)\nC++: void SetValueN(const SizeT n, const vtkUnicodeString &value)\n    override;\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"Fill", PyvtkDenseArray_I16vtkUnicodeStringE_Fill, METH_VARARGS,
   "V.Fill(unicode)\nC++: void Fill(const vtkUnicodeString &value)\n\nFills every element in the array with the given value.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDenseArray_I16vtkUnicodeStringE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkDenseArray_I16vtkUnicodeStringE", // tp_name
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
  PyvtkDenseArray_I16vtkUnicodeStringE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDenseArray_I16vtkUnicodeStringE_StaticNew()
{
  return vtkDenseArray<vtkUnicodeString>::New();
}

PyObject *PyvtkDenseArray_I16vtkUnicodeStringE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDenseArray_I16vtkUnicodeStringE_Type, PyvtkDenseArray_I16vtkUnicodeStringE_Methods,
    typeid(vtkDenseArray<vtkUnicodeString>).name(),
 &PyvtkDenseArray_I16vtkUnicodeStringE_StaticNew);

  PyTypeObject *pytype = &PyvtkDenseArray_I16vtkUnicodeStringE_Type;

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

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDenseArray_I10vtkVariantE_ClassNew(); }

#ifndef DECLARED_PyvtkTypedArray_I10vtkVariantE_ClassNew
extern "C" { PyObject *PyvtkTypedArray_I10vtkVariantE_ClassNew(); }
#define DECLARED_PyvtkTypedArray_I10vtkVariantE_ClassNew
#endif

static const char *PyvtkDenseArray_I10vtkVariantE_Doc =
  "vtkDenseArray- Contiguous storage for N-way arrays.\n\n"
  "Superclass: vtkTypedArray[vtkVariant]\n\n"
  "vtkDenseArray is a concrete vtkArray implementation that stores\n"
  "values using a contiguous block of memory.  Values are stored with\n"
  "fortran ordering, meaning that if you iterated over the memory block,\n"
  "the left-most coordinates would vary the fastest.\n\n"
  "In addition to the retrieval and update methods provided by\n"
  "vtkTypedArray, vtkDenseArray provides methods to:\n\n"
  "Fill the entire array with a specific value.\n\n"
  "Retrieve a pointer to the storage memory block.\n\n"
  "@sa\n"
  "vtkArray, vtkTypedArray, vtkSparseArray\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";


static PyObject *
PyvtkDenseArray_I10vtkVariantE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDenseArray<vtkVariant>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_I10vtkVariantE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkVariant> *op = static_cast<vtkDenseArray<vtkVariant> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDenseArray<vtkVariant>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_I10vtkVariantE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDenseArray<vtkVariant> *tempr = vtkDenseArray<vtkVariant>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_I10vtkVariantE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkVariant> *op = static_cast<vtkDenseArray<vtkVariant> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDenseArray<vtkVariant> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDenseArray<vtkVariant>::NewInstance());

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
PyvtkDenseArray_I10vtkVariantE_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkVariant> *op = static_cast<vtkDenseArray<vtkVariant> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsDense() :
      op->vtkDenseArray<vtkVariant>::IsDense());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_I10vtkVariantE_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkVariant> *op = static_cast<vtkDenseArray<vtkVariant> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkArrayExtents *tempr = (ap.IsBound() ?
      &op->GetExtents() :
      &op->vtkDenseArray<vtkVariant>::GetExtents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_I10vtkVariantE_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkVariant> *op = static_cast<vtkDenseArray<vtkVariant> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetNonNullSize() :
      op->vtkDenseArray<vtkVariant>::GetNonNullSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_I10vtkVariantE_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkVariant> *op = static_cast<vtkDenseArray<vtkVariant> *>(vp);

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
      op->vtkDenseArray<vtkVariant>::GetCoordinatesN(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_I10vtkVariantE_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkVariant> *op = static_cast<vtkDenseArray<vtkVariant> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArray *tempr = (ap.IsBound() ?
      op->DeepCopy() :
      op->vtkDenseArray<vtkVariant>::DeepCopy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_I10vtkVariantE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkVariant> *op = static_cast<vtkDenseArray<vtkVariant> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const vtkVariant *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkDenseArray<vtkVariant>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkVariant");
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_I10vtkVariantE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkVariant> *op = static_cast<vtkDenseArray<vtkVariant> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const vtkVariant *tempr = (ap.IsBound() ?
      &op->GetValue(temp0, temp1) :
      &op->vtkDenseArray<vtkVariant>::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkVariant");
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_I10vtkVariantE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkVariant> *op = static_cast<vtkDenseArray<vtkVariant> *>(vp);

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
      &op->vtkDenseArray<vtkVariant>::GetValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkVariant");
    }
  }

  return result;
}

static PyObject *
PyvtkDenseArray_I10vtkVariantE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkVariant> *op = static_cast<vtkDenseArray<vtkVariant> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    const vtkVariant *tempr = (ap.IsBound() ?
      &op->GetValue(*temp0) :
      &op->vtkDenseArray<vtkVariant>::GetValue(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkVariant");
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_I10vtkVariantE_GetValue_Methods[] = {
  {nullptr, PyvtkDenseArray_I10vtkVariantE_GetValue_s1, METH_VARARGS,
   "@k"},
  {nullptr, PyvtkDenseArray_I10vtkVariantE_GetValue_s4, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDenseArray_I10vtkVariantE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_I10vtkVariantE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkDenseArray_I10vtkVariantE_GetValue_s2(self, args);
    case 3:
      return PyvtkDenseArray_I10vtkVariantE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return nullptr;
}



static PyObject *
PyvtkDenseArray_I10vtkVariantE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkVariant> *op = static_cast<vtkDenseArray<vtkVariant> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const vtkVariant *tempr = (ap.IsBound() ?
      &op->GetValueN(temp0) :
      &op->vtkDenseArray<vtkVariant>::GetValueN(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkVariant");
    }
  }

  return result;
}


static PyObject *
PyvtkDenseArray_I10vtkVariantE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkVariant> *op = static_cast<vtkDenseArray<vtkVariant> *>(vp);

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
      op->vtkDenseArray<vtkVariant>::SetValue(temp0, *temp1);
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
PyvtkDenseArray_I10vtkVariantE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkVariant> *op = static_cast<vtkDenseArray<vtkVariant> *>(vp);

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
      op->vtkDenseArray<vtkVariant>::SetValue(temp0, temp1, *temp2);
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
PyvtkDenseArray_I10vtkVariantE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkVariant> *op = static_cast<vtkDenseArray<vtkVariant> *>(vp);

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
      op->vtkDenseArray<vtkVariant>::SetValue(temp0, temp1, temp2, *temp3);
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
PyvtkDenseArray_I10vtkVariantE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkVariant> *op = static_cast<vtkDenseArray<vtkVariant> *>(vp);

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
      op->vtkDenseArray<vtkVariant>::SetValue(*temp0, *temp1);
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

static PyMethodDef PyvtkDenseArray_I10vtkVariantE_SetValue_Methods[] = {
  {nullptr, PyvtkDenseArray_I10vtkVariantE_SetValue_s1, METH_VARARGS,
   "@kW vtkVariant"},
  {nullptr, PyvtkDenseArray_I10vtkVariantE_SetValue_s4, METH_VARARGS,
   "@WW vtkArrayCoordinates vtkVariant"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDenseArray_I10vtkVariantE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDenseArray_I10vtkVariantE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkDenseArray_I10vtkVariantE_SetValue_s2(self, args);
    case 4:
      return PyvtkDenseArray_I10vtkVariantE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return nullptr;
}



static PyObject *
PyvtkDenseArray_I10vtkVariantE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkVariant> *op = static_cast<vtkDenseArray<vtkVariant> *>(vp);

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
      op->vtkDenseArray<vtkVariant>::SetValueN(temp0, *temp1);
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
PyvtkDenseArray_I10vtkVariantE_Fill(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Fill");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDenseArray<vtkVariant> *op = static_cast<vtkDenseArray<vtkVariant> *>(vp);

  vtkVariant *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant"))
  {
    if (ap.IsBound())
    {
      op->Fill(*temp0);
    }
    else
    {
      op->vtkDenseArray<vtkVariant>::Fill(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDenseArray_I10vtkVariantE_Methods[] = {
  {"IsTypeOf", PyvtkDenseArray_I10vtkVariantE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDenseArray_I10vtkVariantE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDenseArray_I10vtkVariantE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDenseArray_I10vtkVariantE\nC++: static vtkDenseArray<vtkVariant> *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDenseArray_I10vtkVariantE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDenseArray_I10vtkVariantE\nC++: vtkDenseArray<vtkVariant> *NewInstance()\n\n"},
  {"IsDense", PyvtkDenseArray_I10vtkVariantE_IsDense, METH_VARARGS,
   "V.IsDense() -> bool\nC++: bool IsDense() override;\n\nReturns true iff the underlying array storage is \"dense\", i.e.\nthat GetSize() and GetNonNullSize() will always return the same\nvalue. If not, the array is \"sparse\".\n"},
  {"GetExtents", PyvtkDenseArray_I10vtkVariantE_GetExtents, METH_VARARGS,
   "V.GetExtents() -> vtkArrayExtents\nC++: const vtkArrayExtents &GetExtents() override;\n\nReturns the extents (the number of dimensions and size along each\ndimension) of the array.\n"},
  {"GetNonNullSize", PyvtkDenseArray_I10vtkVariantE_GetNonNullSize, METH_VARARGS,
   "V.GetNonNullSize() -> int\nC++: SizeT GetNonNullSize() override;\n\nReturns the number of non-null values stored in the array.  Note\nthat this value will equal GetSize() for dense arrays, and will\nbe less-than-or-equal to GetSize() for sparse arrays.\n"},
  {"GetCoordinatesN", PyvtkDenseArray_I10vtkVariantE_GetCoordinatesN, METH_VARARGS,
   "V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates) override;\n\nReturns the coordinates of the n-th value in the array, where n\nis in the range [0, GetNonNullSize()).  Note that the order in\nwhich coordinates are visited is undefined, but is guaranteed to\nmatch the order in which values are visited using\nvtkTypedArray::GetValueN() and vtkTypedArray::SetValueN().\n"},
  {"DeepCopy", PyvtkDenseArray_I10vtkVariantE_DeepCopy, METH_VARARGS,
   "V.DeepCopy() -> vtkArray\nC++: vtkArray *DeepCopy() override;\n\nReturns a new array that is a deep copy of this array.\n"},
  {"GetValue", PyvtkDenseArray_I10vtkVariantE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> vtkVariant\nC++: const vtkVariant &GetValue(CoordinateT i) override;\nV.GetValue(int, int) -> vtkVariant\nC++: const vtkVariant &GetValue(CoordinateT i, CoordinateT j)\n    override;\nV.GetValue(int, int, int) -> vtkVariant\nC++: const vtkVariant &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k) override;\nV.GetValue(vtkArrayCoordinates) -> vtkVariant\nC++: const vtkVariant &GetValue(\n    const vtkArrayCoordinates &coordinates) override;\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetValueN", PyvtkDenseArray_I10vtkVariantE_GetValueN, METH_VARARGS,
   "V.GetValueN(int) -> vtkVariant\nC++: const vtkVariant &GetValueN(const SizeT n) override;\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetValue", PyvtkDenseArray_I10vtkVariantE_SetValue, METH_VARARGS,
   "V.SetValue(int, vtkVariant)\nC++: void SetValue(CoordinateT i, const vtkVariant &value)\n    override;\nV.SetValue(int, int, vtkVariant)\nC++: void SetValue(CoordinateT i, CoordinateT j,\n    const vtkVariant &value) override;\nV.SetValue(int, int, int, vtkVariant)\nC++: void SetValue(CoordinateT i, CoordinateT j, CoordinateT k,\n    const vtkVariant &value) override;\nV.SetValue(vtkArrayCoordinates, vtkVariant)\nC++: void SetValue(const vtkArrayCoordinates &coordinates,\n    const vtkVariant &value) override;\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetValueN", PyvtkDenseArray_I10vtkVariantE_SetValueN, METH_VARARGS,
   "V.SetValueN(int, vtkVariant)\nC++: void SetValueN(const SizeT n, const vtkVariant &value)\n    override;\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"Fill", PyvtkDenseArray_I10vtkVariantE_Fill, METH_VARARGS,
   "V.Fill(vtkVariant)\nC++: void Fill(const vtkVariant &value)\n\nFills every element in the array with the given value.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDenseArray_I10vtkVariantE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkDenseArray_I10vtkVariantE", // tp_name
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
  PyvtkDenseArray_I10vtkVariantE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDenseArray_I10vtkVariantE_StaticNew()
{
  return vtkDenseArray<vtkVariant>::New();
}

PyObject *PyvtkDenseArray_I10vtkVariantE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDenseArray_I10vtkVariantE_Type, PyvtkDenseArray_I10vtkVariantE_Methods,
    typeid(vtkDenseArray<vtkVariant>).name(),
 &PyvtkDenseArray_I10vtkVariantE_StaticNew);

  PyTypeObject *pytype = &PyvtkDenseArray_I10vtkVariantE_Type;

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

static const char *PyvtkDenseArray_Doc =
  "vtkDenseArray - Contiguous storage for N-way arrays.\n\n"
  "Superclass: vtkTypedArray[T]\n\n"
  "vtkDenseArray is a concrete vtkArray implementation that stores\n"
  "values using a contiguous block of memory.  Values are stored with\n"
  "fortran ordering, meaning that if you iterated over the memory block,\n"
  "the left-most coordinates would vary the fastest.\n\n"
  "In addition to the retrieval and update methods provided by\n"
  "vtkTypedArray, vtkDenseArray provides methods to:\n\n"
  "Fill the entire array with a specific value.\n\n"
  "Retrieve a pointer to the storage memory block.\n\n"
  "@sa\n"
  "vtkArray, vtkTypedArray, vtkSparseArray\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n"
  "\nProvided Types:\n\n"
  "  vtkDenseArray[char] => vtkDenseArray<char>\n"

  "  vtkDenseArray[int8] => vtkDenseArray<signed char>\n"

  "  vtkDenseArray[uint8] => vtkDenseArray<unsigned char>\n"

  "  vtkDenseArray[int16] => vtkDenseArray<short>\n"

  "  vtkDenseArray[uint16] => vtkDenseArray<unsigned short>\n"

  "  vtkDenseArray[int32] => vtkDenseArray<int>\n"

  "  vtkDenseArray[uint32] => vtkDenseArray<unsigned int>\n"

  "  vtkDenseArray[int] => vtkDenseArray<long>\n"

  "  vtkDenseArray[uint] => vtkDenseArray<unsigned long>\n"

  "  vtkDenseArray[int64] => vtkDenseArray<long long>\n"

  "  vtkDenseArray[uint64] => vtkDenseArray<unsigned long long>\n"

  "  vtkDenseArray[float32] => vtkDenseArray<float>\n"

  "  vtkDenseArray[float64] => vtkDenseArray<double>\n"

  "  vtkDenseArray[str] => vtkDenseArray<vtkStdString>\n"

  "  vtkDenseArray[unicode] => vtkDenseArray<vtkUnicodeString>\n"

  "  vtkDenseArray[vtkVariant] => vtkDenseArray<vtkVariant>\n"
;

PyObject *PyvtkDenseArray_TemplateNew()
{
  PyObject *o;

  PyObject *temp = PyVTKTemplate_New("vtkCommonCorePython.vtkDenseArray",
                                     PyvtkDenseArray_Doc);

  o = PyvtkDenseArray_IcE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkDenseArray_IaE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkDenseArray_IhE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkDenseArray_IsE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkDenseArray_ItE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkDenseArray_IiE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkDenseArray_IjE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkDenseArray_IlE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkDenseArray_ImE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkDenseArray_IxE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkDenseArray_IyE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkDenseArray_IfE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkDenseArray_IdE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkDenseArray_I12vtkStdStringE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkDenseArray_I16vtkUnicodeStringE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkDenseArray_I10vtkVariantE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  return temp;
}

void PyVTKAddFile_vtkDenseArray(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDenseArray_TemplateNew();

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

  if (o && PyDict_SetItemString(dict, "vtkDenseArray", o) != 0)
  {
    Py_DECREF(o);
  }

}

