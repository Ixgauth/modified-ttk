// python wrapper for vtkTypedArray
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
#include "vtkArrayCoordinates.h"
#include "vtkTypedArray.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTypedArray(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTypedArray_IcE_ClassNew(); }

#ifndef DECLARED_PyvtkArray_ClassNew
extern "C" { PyObject *PyvtkArray_ClassNew(); }
#define DECLARED_PyvtkArray_ClassNew
#endif

static const char *PyvtkTypedArray_IcE_Doc =
  "vtkTypedArray- Provides a type-specific interface to N-way arrays\n\n"
  "Superclass: vtkArray\n\n"
  "vtkTypedArray provides an interface for retrieving and updating data\n"
  "in an arbitrary-dimension array.  It derives from vtkArray and is\n"
  "templated on the type of value stored in the array.\n\n"
  "Methods are provided for retrieving and updating array values based\n"
  "either on their array coordinates, or on a 1-dimensional integer\n"
  "index.  The latter approach can be used to iterate over the values in\n"
  "an array in arbitrary order, which is useful when writing filters\n"
  "that operate efficiently on sparse arrays and arrays that can have\n"
  "any number of dimensions.\n\n"
  "Special overloaded methods provide simple access for arrays with one,\n"
  "two, or three dimensions.\n\n"
  "@sa\n"
  "vtkArray, vtkDenseArray, vtkSparseArray\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";


static PyObject *
PyvtkTypedArray_IcE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTypedArray<char>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_IcE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<char> *op = static_cast<vtkTypedArray<char> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTypedArray<char>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_IcE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTypedArray<char> *tempr = vtkTypedArray<char>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_IcE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<char> *op = static_cast<vtkTypedArray<char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTypedArray<char> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTypedArray<char>::NewInstance());

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
PyvtkTypedArray_IcE_GetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<char> *op = static_cast<vtkTypedArray<char> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(*temp0) :
      op->vtkTypedArray<char>::GetVariantValue(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkTypedArray_IcE_GetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<char> *op = static_cast<vtkTypedArray<char> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0) :
      op->vtkTypedArray<char>::GetVariantValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IcE_GetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<char> *op = static_cast<vtkTypedArray<char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1) :
      op->vtkTypedArray<char>::GetVariantValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IcE_GetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<char> *op = static_cast<vtkTypedArray<char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1, temp2) :
      op->vtkTypedArray<char>::GetVariantValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}

static PyMethodDef PyvtkTypedArray_IcE_GetVariantValue_Methods[] = {
  {nullptr, PyvtkTypedArray_IcE_GetVariantValue_s1, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, PyvtkTypedArray_IcE_GetVariantValue_s2, METH_VARARGS,
   "@k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_IcE_GetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IcE_GetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkTypedArray_IcE_GetVariantValue_s3(self, args);
    case 3:
      return PyvtkTypedArray_IcE_GetVariantValue_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetVariantValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_IcE_GetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<char> *op = static_cast<vtkTypedArray<char> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValueN(temp0) :
      op->vtkTypedArray<char>::GetVariantValueN(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_IcE_SetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<char> *op = static_cast<vtkTypedArray<char> *>(vp);

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
      op->SetVariantValue(*temp0, *temp1);
    }
    else
    {
      op->vtkTypedArray<char>::SetVariantValue(*temp0, *temp1);
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

static PyObject *
PyvtkTypedArray_IcE_SetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<char> *op = static_cast<vtkTypedArray<char> *>(vp);

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
      op->SetVariantValue(temp0, *temp1);
    }
    else
    {
      op->vtkTypedArray<char>::SetVariantValue(temp0, *temp1);
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
PyvtkTypedArray_IcE_SetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<char> *op = static_cast<vtkTypedArray<char> *>(vp);

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
      op->SetVariantValue(temp0, temp1, *temp2);
    }
    else
    {
      op->vtkTypedArray<char>::SetVariantValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_IcE_SetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<char> *op = static_cast<vtkTypedArray<char> *>(vp);

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
      op->SetVariantValue(temp0, temp1, temp2, *temp3);
    }
    else
    {
      op->vtkTypedArray<char>::SetVariantValue(temp0, temp1, temp2, *temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj3);

  return result;
}

static PyMethodDef PyvtkTypedArray_IcE_SetVariantValue_Methods[] = {
  {nullptr, PyvtkTypedArray_IcE_SetVariantValue_s1, METH_VARARGS,
   "@WW vtkArrayCoordinates vtkVariant"},
  {nullptr, PyvtkTypedArray_IcE_SetVariantValue_s2, METH_VARARGS,
   "@kW vtkVariant"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_IcE_SetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IcE_SetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTypedArray_IcE_SetVariantValue_s3(self, args);
    case 4:
      return PyvtkTypedArray_IcE_SetVariantValue_s4(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetVariantValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_IcE_SetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<char> *op = static_cast<vtkTypedArray<char> *>(vp);

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
      op->SetVariantValueN(temp0, *temp1);
    }
    else
    {
      op->vtkTypedArray<char>::SetVariantValueN(temp0, *temp1);
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
PyvtkTypedArray_IcE_CopyValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<char> *op = static_cast<vtkTypedArray<char> *>(vp);

  vtkArray *temp0 = nullptr;
  vtkArrayCoordinates *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  vtkArrayCoordinates *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
  {
    if (ap.IsBound())
    {
      op->CopyValue(temp0, *temp1, *temp2);
    }
    else
    {
      op->vtkTypedArray<char>::CopyValue(temp0, *temp1, *temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);
  Py_XDECREF(pobj2);

  return result;
}

static PyObject *
PyvtkTypedArray_IcE_CopyValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<char> *op = static_cast<vtkTypedArray<char> *>(vp);

  vtkArray *temp0 = nullptr;
  unsigned long long temp1;
  vtkArrayCoordinates *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetValue(temp1) &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
  {
    if (ap.IsBound())
    {
      op->CopyValue(temp0, temp1, *temp2);
    }
    else
    {
      op->vtkTypedArray<char>::CopyValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_IcE_CopyValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<char> *op = static_cast<vtkTypedArray<char> *>(vp);

  vtkArray *temp0 = nullptr;
  vtkArrayCoordinates *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  unsigned long long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->CopyValue(temp0, *temp1, temp2);
    }
    else
    {
      op->vtkTypedArray<char>::CopyValue(temp0, *temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkTypedArray_IcE_CopyValue_Methods[] = {
  {nullptr, PyvtkTypedArray_IcE_CopyValue_s1, METH_VARARGS,
   "@VWW *vtkArray vtkArrayCoordinates vtkArrayCoordinates"},
  {nullptr, PyvtkTypedArray_IcE_CopyValue_s2, METH_VARARGS,
   "@VKW *vtkArray vtkArrayCoordinates"},
  {nullptr, PyvtkTypedArray_IcE_CopyValue_s3, METH_VARARGS,
   "@VWK *vtkArray vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_IcE_CopyValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IcE_CopyValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "CopyValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_IcE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<char> *op = static_cast<vtkTypedArray<char> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = &op->GetValue(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IcE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<char> *op = static_cast<vtkTypedArray<char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const char *tempr = &op->GetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IcE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<char> *op = static_cast<vtkTypedArray<char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    const char *tempr = &op->GetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IcE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<char> *op = static_cast<vtkTypedArray<char> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    const char *tempr = &op->GetValue(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_IcE_GetValue_Methods[] = {
  {nullptr, PyvtkTypedArray_IcE_GetValue_s1, METH_VARARGS,
   "@k"},
  {nullptr, PyvtkTypedArray_IcE_GetValue_s4, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_IcE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IcE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkTypedArray_IcE_GetValue_s2(self, args);
    case 3:
      return PyvtkTypedArray_IcE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_IcE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<char> *op = static_cast<vtkTypedArray<char> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = &op->GetValueN(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_IcE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<char> *op = static_cast<vtkTypedArray<char> *>(vp);

  vtkIdType temp0;
  char temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->SetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IcE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<char> *op = static_cast<vtkTypedArray<char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  char temp2;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    op->SetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IcE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<char> *op = static_cast<vtkTypedArray<char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  char temp3;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    op->SetValue(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IcE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<char> *op = static_cast<vtkTypedArray<char> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  char temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
  {
    op->SetValue(*temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_IcE_SetValue_Methods[] = {
  {nullptr, PyvtkTypedArray_IcE_SetValue_s1, METH_VARARGS,
   "@kc"},
  {nullptr, PyvtkTypedArray_IcE_SetValue_s4, METH_VARARGS,
   "@Wc vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_IcE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IcE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTypedArray_IcE_SetValue_s2(self, args);
    case 4:
      return PyvtkTypedArray_IcE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_IcE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<char> *op = static_cast<vtkTypedArray<char> *>(vp);

  unsigned long long temp0;
  char temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->SetValueN(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTypedArray_IcE_Methods[] = {
  {"IsTypeOf", PyvtkTypedArray_IcE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTypedArray_IcE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTypedArray_IcE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTypedArray_IcE\nC++: static vtkTypedArray<char> *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTypedArray_IcE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTypedArray_IcE\nC++: vtkTypedArray<char> *NewInstance()\n\n"},
  {"GetVariantValue", PyvtkTypedArray_IcE_GetVariantValue, METH_VARARGS,
   "V.GetVariantValue(vtkArrayCoordinates) -> vtkVariant\nC++: vtkVariant GetVariantValue(\n    const vtkArrayCoordinates &coordinates) override;\nV.GetVariantValue(int) -> vtkVariant\nC++: vtkVariant GetVariantValue(CoordinateT i)\nV.GetVariantValue(int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(CoordinateT i, CoordinateT j)\nV.GetVariantValue(int, int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(CoordinateT i, CoordinateT j,\n    CoordinateT k)\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetVariantValueN", PyvtkTypedArray_IcE_GetVariantValueN, METH_VARARGS,
   "V.GetVariantValueN(int) -> vtkVariant\nC++: vtkVariant GetVariantValueN(const SizeT n) override;\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetVariantValue", PyvtkTypedArray_IcE_SetVariantValue, METH_VARARGS,
   "V.SetVariantValue(vtkArrayCoordinates, vtkVariant)\nC++: void SetVariantValue(const vtkArrayCoordinates &coordinates,\n    const vtkVariant &value) override;\nV.SetVariantValue(int, vtkVariant)\nC++: void SetVariantValue(CoordinateT i, const vtkVariant &value)\nV.SetVariantValue(int, int, vtkVariant)\nC++: void SetVariantValue(CoordinateT i, CoordinateT j,\n    const vtkVariant &value)\nV.SetVariantValue(int, int, int, vtkVariant)\nC++: void SetVariantValue(CoordinateT i, CoordinateT j,\n    CoordinateT k, const vtkVariant &value)\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetVariantValueN", PyvtkTypedArray_IcE_SetVariantValueN, METH_VARARGS,
   "V.SetVariantValueN(int, vtkVariant)\nC++: void SetVariantValueN(const SizeT n, const vtkVariant &value)\n     override;\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"CopyValue", PyvtkTypedArray_IcE_CopyValue, METH_VARARGS,
   "V.CopyValue(vtkArray, vtkArrayCoordinates, vtkArrayCoordinates)\nC++: void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const vtkArrayCoordinates &target_coordinates) override;\nV.CopyValue(vtkArray, int, vtkArrayCoordinates)\nC++: void CopyValue(vtkArray *source, const SizeT source_index,\n    const vtkArrayCoordinates &target_coordinates) override;\nV.CopyValue(vtkArray, vtkArrayCoordinates, int)\nC++: void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const SizeT target_index) override;\n\nOverwrites a value with a value retrieved from another array. \nBoth arrays must store the same data types.\n"},
  {"GetValue", PyvtkTypedArray_IcE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> char\nC++: virtual const char &GetValue(CoordinateT i)\nV.GetValue(int, int) -> char\nC++: virtual const char &GetValue(CoordinateT i, CoordinateT j)\nV.GetValue(int, int, int) -> char\nC++: virtual const char &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> char\nC++: virtual const char &GetValue(\n    const vtkArrayCoordinates &coordinates)\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetValueN", PyvtkTypedArray_IcE_GetValueN, METH_VARARGS,
   "V.GetValueN(int) -> char\nC++: virtual const char &GetValueN(const SizeT n)\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetValue", PyvtkTypedArray_IcE_SetValue, METH_VARARGS,
   "V.SetValue(int, char)\nC++: virtual void SetValue(CoordinateT i, const char &value)\nV.SetValue(int, int, char)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    const char &value)\nV.SetValue(int, int, int, char)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k, const char &value)\nV.SetValue(vtkArrayCoordinates, char)\nC++: virtual void SetValue(const vtkArrayCoordinates &coordinates,\n     const char &value)\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetValueN", PyvtkTypedArray_IcE_SetValueN, METH_VARARGS,
   "V.SetValueN(int, char)\nC++: virtual void SetValueN(const SizeT n, const char &value)\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTypedArray_IcE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkTypedArray_IcE", // tp_name
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
  PyvtkTypedArray_IcE_Doc, // tp_doc
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

PyObject *PyvtkTypedArray_IcE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTypedArray_IcE_Type, PyvtkTypedArray_IcE_Methods,
    typeid(vtkTypedArray<char>).name(),
 nullptr);

  PyTypeObject *pytype = &PyvtkTypedArray_IcE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkArray_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTypedArray_IaE_ClassNew(); }

#ifndef DECLARED_PyvtkArray_ClassNew
extern "C" { PyObject *PyvtkArray_ClassNew(); }
#define DECLARED_PyvtkArray_ClassNew
#endif

static const char *PyvtkTypedArray_IaE_Doc =
  "vtkTypedArray<signed char> - Provides a type-specific interface to\nN-way arrays\n\n"
  "Superclass: vtkArray\n\n"
  "vtkTypedArray provides an interface for retrieving and updating data\n"
  "in an arbitrary-dimension array.  It derives from vtkArray and is\n"
  "templated on the type of value stored in the array.\n\n"
  "Methods are provided for retrieving and updating array values based\n"
  "either on their array coordinates, or on a 1-dimensional integer\n"
  "index.  The latter approach can be used to iterate over the values in\n"
  "an array in arbitrary order, which is useful when writing filters\n"
  "that operate efficiently on sparse arrays and arrays that can have\n"
  "any number of dimensions.\n\n"
  "Special overloaded methods provide simple access for arrays with one,\n"
  "two, or three dimensions.\n\n"
  "@sa\n"
  "vtkArray, vtkDenseArray, vtkSparseArray\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";


static PyObject *
PyvtkTypedArray_IaE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTypedArray<signed char>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_IaE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<signed char> *op = static_cast<vtkTypedArray<signed char> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTypedArray<signed char>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_IaE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTypedArray<signed char> *tempr = vtkTypedArray<signed char>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_IaE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<signed char> *op = static_cast<vtkTypedArray<signed char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTypedArray<signed char> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTypedArray<signed char>::NewInstance());

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
PyvtkTypedArray_IaE_GetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<signed char> *op = static_cast<vtkTypedArray<signed char> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(*temp0) :
      op->vtkTypedArray<signed char>::GetVariantValue(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkTypedArray_IaE_GetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<signed char> *op = static_cast<vtkTypedArray<signed char> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0) :
      op->vtkTypedArray<signed char>::GetVariantValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IaE_GetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<signed char> *op = static_cast<vtkTypedArray<signed char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1) :
      op->vtkTypedArray<signed char>::GetVariantValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IaE_GetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<signed char> *op = static_cast<vtkTypedArray<signed char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1, temp2) :
      op->vtkTypedArray<signed char>::GetVariantValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}

static PyMethodDef PyvtkTypedArray_IaE_GetVariantValue_Methods[] = {
  {nullptr, PyvtkTypedArray_IaE_GetVariantValue_s1, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, PyvtkTypedArray_IaE_GetVariantValue_s2, METH_VARARGS,
   "@k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_IaE_GetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IaE_GetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkTypedArray_IaE_GetVariantValue_s3(self, args);
    case 3:
      return PyvtkTypedArray_IaE_GetVariantValue_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetVariantValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_IaE_GetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<signed char> *op = static_cast<vtkTypedArray<signed char> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValueN(temp0) :
      op->vtkTypedArray<signed char>::GetVariantValueN(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_IaE_SetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<signed char> *op = static_cast<vtkTypedArray<signed char> *>(vp);

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
      op->SetVariantValue(*temp0, *temp1);
    }
    else
    {
      op->vtkTypedArray<signed char>::SetVariantValue(*temp0, *temp1);
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

static PyObject *
PyvtkTypedArray_IaE_SetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<signed char> *op = static_cast<vtkTypedArray<signed char> *>(vp);

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
      op->SetVariantValue(temp0, *temp1);
    }
    else
    {
      op->vtkTypedArray<signed char>::SetVariantValue(temp0, *temp1);
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
PyvtkTypedArray_IaE_SetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<signed char> *op = static_cast<vtkTypedArray<signed char> *>(vp);

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
      op->SetVariantValue(temp0, temp1, *temp2);
    }
    else
    {
      op->vtkTypedArray<signed char>::SetVariantValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_IaE_SetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<signed char> *op = static_cast<vtkTypedArray<signed char> *>(vp);

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
      op->SetVariantValue(temp0, temp1, temp2, *temp3);
    }
    else
    {
      op->vtkTypedArray<signed char>::SetVariantValue(temp0, temp1, temp2, *temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj3);

  return result;
}

static PyMethodDef PyvtkTypedArray_IaE_SetVariantValue_Methods[] = {
  {nullptr, PyvtkTypedArray_IaE_SetVariantValue_s1, METH_VARARGS,
   "@WW vtkArrayCoordinates vtkVariant"},
  {nullptr, PyvtkTypedArray_IaE_SetVariantValue_s2, METH_VARARGS,
   "@kW vtkVariant"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_IaE_SetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IaE_SetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTypedArray_IaE_SetVariantValue_s3(self, args);
    case 4:
      return PyvtkTypedArray_IaE_SetVariantValue_s4(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetVariantValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_IaE_SetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<signed char> *op = static_cast<vtkTypedArray<signed char> *>(vp);

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
      op->SetVariantValueN(temp0, *temp1);
    }
    else
    {
      op->vtkTypedArray<signed char>::SetVariantValueN(temp0, *temp1);
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
PyvtkTypedArray_IaE_CopyValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<signed char> *op = static_cast<vtkTypedArray<signed char> *>(vp);

  vtkArray *temp0 = nullptr;
  vtkArrayCoordinates *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  vtkArrayCoordinates *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
  {
    if (ap.IsBound())
    {
      op->CopyValue(temp0, *temp1, *temp2);
    }
    else
    {
      op->vtkTypedArray<signed char>::CopyValue(temp0, *temp1, *temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);
  Py_XDECREF(pobj2);

  return result;
}

static PyObject *
PyvtkTypedArray_IaE_CopyValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<signed char> *op = static_cast<vtkTypedArray<signed char> *>(vp);

  vtkArray *temp0 = nullptr;
  unsigned long long temp1;
  vtkArrayCoordinates *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetValue(temp1) &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
  {
    if (ap.IsBound())
    {
      op->CopyValue(temp0, temp1, *temp2);
    }
    else
    {
      op->vtkTypedArray<signed char>::CopyValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_IaE_CopyValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<signed char> *op = static_cast<vtkTypedArray<signed char> *>(vp);

  vtkArray *temp0 = nullptr;
  vtkArrayCoordinates *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  unsigned long long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->CopyValue(temp0, *temp1, temp2);
    }
    else
    {
      op->vtkTypedArray<signed char>::CopyValue(temp0, *temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkTypedArray_IaE_CopyValue_Methods[] = {
  {nullptr, PyvtkTypedArray_IaE_CopyValue_s1, METH_VARARGS,
   "@VWW *vtkArray vtkArrayCoordinates vtkArrayCoordinates"},
  {nullptr, PyvtkTypedArray_IaE_CopyValue_s2, METH_VARARGS,
   "@VKW *vtkArray vtkArrayCoordinates"},
  {nullptr, PyvtkTypedArray_IaE_CopyValue_s3, METH_VARARGS,
   "@VWK *vtkArray vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_IaE_CopyValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IaE_CopyValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "CopyValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_IaE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<signed char> *op = static_cast<vtkTypedArray<signed char> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const signed char *tempr = &op->GetValue(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IaE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<signed char> *op = static_cast<vtkTypedArray<signed char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const signed char *tempr = &op->GetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IaE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<signed char> *op = static_cast<vtkTypedArray<signed char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    const signed char *tempr = &op->GetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IaE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<signed char> *op = static_cast<vtkTypedArray<signed char> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    const signed char *tempr = &op->GetValue(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_IaE_GetValue_Methods[] = {
  {nullptr, PyvtkTypedArray_IaE_GetValue_s1, METH_VARARGS,
   "@k"},
  {nullptr, PyvtkTypedArray_IaE_GetValue_s4, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_IaE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IaE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkTypedArray_IaE_GetValue_s2(self, args);
    case 3:
      return PyvtkTypedArray_IaE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_IaE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<signed char> *op = static_cast<vtkTypedArray<signed char> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const signed char *tempr = &op->GetValueN(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_IaE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<signed char> *op = static_cast<vtkTypedArray<signed char> *>(vp);

  vtkIdType temp0;
  signed char temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->SetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IaE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<signed char> *op = static_cast<vtkTypedArray<signed char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  signed char temp2;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    op->SetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IaE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<signed char> *op = static_cast<vtkTypedArray<signed char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  signed char temp3;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    op->SetValue(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IaE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<signed char> *op = static_cast<vtkTypedArray<signed char> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  signed char temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
  {
    op->SetValue(*temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_IaE_SetValue_Methods[] = {
  {nullptr, PyvtkTypedArray_IaE_SetValue_s1, METH_VARARGS,
   "@kb"},
  {nullptr, PyvtkTypedArray_IaE_SetValue_s4, METH_VARARGS,
   "@Wb vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_IaE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IaE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTypedArray_IaE_SetValue_s2(self, args);
    case 4:
      return PyvtkTypedArray_IaE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_IaE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<signed char> *op = static_cast<vtkTypedArray<signed char> *>(vp);

  unsigned long long temp0;
  signed char temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->SetValueN(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTypedArray_IaE_Methods[] = {
  {"IsTypeOf", PyvtkTypedArray_IaE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTypedArray_IaE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTypedArray_IaE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTypedArray_IaE\nC++: static vtkTypedArray<signed char> *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTypedArray_IaE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTypedArray_IaE\nC++: vtkTypedArray<signed char> *NewInstance()\n\n"},
  {"GetVariantValue", PyvtkTypedArray_IaE_GetVariantValue, METH_VARARGS,
   "V.GetVariantValue(vtkArrayCoordinates) -> vtkVariant\nC++: vtkVariant GetVariantValue(\n    const vtkArrayCoordinates &coordinates) override;\nV.GetVariantValue(int) -> vtkVariant\nC++: vtkVariant GetVariantValue(CoordinateT i)\nV.GetVariantValue(int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(CoordinateT i, CoordinateT j)\nV.GetVariantValue(int, int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(CoordinateT i, CoordinateT j,\n    CoordinateT k)\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetVariantValueN", PyvtkTypedArray_IaE_GetVariantValueN, METH_VARARGS,
   "V.GetVariantValueN(int) -> vtkVariant\nC++: vtkVariant GetVariantValueN(const SizeT n) override;\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetVariantValue", PyvtkTypedArray_IaE_SetVariantValue, METH_VARARGS,
   "V.SetVariantValue(vtkArrayCoordinates, vtkVariant)\nC++: void SetVariantValue(const vtkArrayCoordinates &coordinates,\n    const vtkVariant &value) override;\nV.SetVariantValue(int, vtkVariant)\nC++: void SetVariantValue(CoordinateT i, const vtkVariant &value)\nV.SetVariantValue(int, int, vtkVariant)\nC++: void SetVariantValue(CoordinateT i, CoordinateT j,\n    const vtkVariant &value)\nV.SetVariantValue(int, int, int, vtkVariant)\nC++: void SetVariantValue(CoordinateT i, CoordinateT j,\n    CoordinateT k, const vtkVariant &value)\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetVariantValueN", PyvtkTypedArray_IaE_SetVariantValueN, METH_VARARGS,
   "V.SetVariantValueN(int, vtkVariant)\nC++: void SetVariantValueN(const SizeT n, const vtkVariant &value)\n     override;\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"CopyValue", PyvtkTypedArray_IaE_CopyValue, METH_VARARGS,
   "V.CopyValue(vtkArray, vtkArrayCoordinates, vtkArrayCoordinates)\nC++: void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const vtkArrayCoordinates &target_coordinates) override;\nV.CopyValue(vtkArray, int, vtkArrayCoordinates)\nC++: void CopyValue(vtkArray *source, const SizeT source_index,\n    const vtkArrayCoordinates &target_coordinates) override;\nV.CopyValue(vtkArray, vtkArrayCoordinates, int)\nC++: void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const SizeT target_index) override;\n\nOverwrites a value with a value retrieved from another array. \nBoth arrays must store the same data types.\n"},
  {"GetValue", PyvtkTypedArray_IaE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> int\nC++: virtual const signed char &GetValue(CoordinateT i)\nV.GetValue(int, int) -> int\nC++: virtual const signed char &GetValue(CoordinateT i,\n    CoordinateT j)\nV.GetValue(int, int, int) -> int\nC++: virtual const signed char &GetValue(CoordinateT i,\n    CoordinateT j, CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> int\nC++: virtual const signed char &GetValue(\n    const vtkArrayCoordinates &coordinates)\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetValueN", PyvtkTypedArray_IaE_GetValueN, METH_VARARGS,
   "V.GetValueN(int) -> int\nC++: virtual const signed char &GetValueN(const SizeT n)\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetValue", PyvtkTypedArray_IaE_SetValue, METH_VARARGS,
   "V.SetValue(int, int)\nC++: virtual void SetValue(CoordinateT i,\n    const signed char &value)\nV.SetValue(int, int, int)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    const signed char &value)\nV.SetValue(int, int, int, int)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k, const signed char &value)\nV.SetValue(vtkArrayCoordinates, int)\nC++: virtual void SetValue(const vtkArrayCoordinates &coordinates,\n     const signed char &value)\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetValueN", PyvtkTypedArray_IaE_SetValueN, METH_VARARGS,
   "V.SetValueN(int, int)\nC++: virtual void SetValueN(const SizeT n,\n    const signed char &value)\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTypedArray_IaE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkTypedArray_IaE", // tp_name
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
  PyvtkTypedArray_IaE_Doc, // tp_doc
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

PyObject *PyvtkTypedArray_IaE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTypedArray_IaE_Type, PyvtkTypedArray_IaE_Methods,
    typeid(vtkTypedArray<signed char>).name(),
 nullptr);

  PyTypeObject *pytype = &PyvtkTypedArray_IaE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkArray_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTypedArray_IhE_ClassNew(); }

#ifndef DECLARED_PyvtkArray_ClassNew
extern "C" { PyObject *PyvtkArray_ClassNew(); }
#define DECLARED_PyvtkArray_ClassNew
#endif

static const char *PyvtkTypedArray_IhE_Doc =
  "vtkTypedArray<unsigned char> - Provides a type-specific interface to\nN-way arrays\n\n"
  "Superclass: vtkArray\n\n"
  "vtkTypedArray provides an interface for retrieving and updating data\n"
  "in an arbitrary-dimension array.  It derives from vtkArray and is\n"
  "templated on the type of value stored in the array.\n\n"
  "Methods are provided for retrieving and updating array values based\n"
  "either on their array coordinates, or on a 1-dimensional integer\n"
  "index.  The latter approach can be used to iterate over the values in\n"
  "an array in arbitrary order, which is useful when writing filters\n"
  "that operate efficiently on sparse arrays and arrays that can have\n"
  "any number of dimensions.\n\n"
  "Special overloaded methods provide simple access for arrays with one,\n"
  "two, or three dimensions.\n\n"
  "@sa\n"
  "vtkArray, vtkDenseArray, vtkSparseArray\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";


static PyObject *
PyvtkTypedArray_IhE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTypedArray<unsigned char>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_IhE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned char> *op = static_cast<vtkTypedArray<unsigned char> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTypedArray<unsigned char>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_IhE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTypedArray<unsigned char> *tempr = vtkTypedArray<unsigned char>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_IhE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned char> *op = static_cast<vtkTypedArray<unsigned char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTypedArray<unsigned char> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTypedArray<unsigned char>::NewInstance());

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
PyvtkTypedArray_IhE_GetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned char> *op = static_cast<vtkTypedArray<unsigned char> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(*temp0) :
      op->vtkTypedArray<unsigned char>::GetVariantValue(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkTypedArray_IhE_GetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned char> *op = static_cast<vtkTypedArray<unsigned char> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0) :
      op->vtkTypedArray<unsigned char>::GetVariantValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IhE_GetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned char> *op = static_cast<vtkTypedArray<unsigned char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1) :
      op->vtkTypedArray<unsigned char>::GetVariantValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IhE_GetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned char> *op = static_cast<vtkTypedArray<unsigned char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1, temp2) :
      op->vtkTypedArray<unsigned char>::GetVariantValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}

static PyMethodDef PyvtkTypedArray_IhE_GetVariantValue_Methods[] = {
  {nullptr, PyvtkTypedArray_IhE_GetVariantValue_s1, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, PyvtkTypedArray_IhE_GetVariantValue_s2, METH_VARARGS,
   "@k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_IhE_GetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IhE_GetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkTypedArray_IhE_GetVariantValue_s3(self, args);
    case 3:
      return PyvtkTypedArray_IhE_GetVariantValue_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetVariantValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_IhE_GetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned char> *op = static_cast<vtkTypedArray<unsigned char> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValueN(temp0) :
      op->vtkTypedArray<unsigned char>::GetVariantValueN(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_IhE_SetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned char> *op = static_cast<vtkTypedArray<unsigned char> *>(vp);

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
      op->SetVariantValue(*temp0, *temp1);
    }
    else
    {
      op->vtkTypedArray<unsigned char>::SetVariantValue(*temp0, *temp1);
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

static PyObject *
PyvtkTypedArray_IhE_SetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned char> *op = static_cast<vtkTypedArray<unsigned char> *>(vp);

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
      op->SetVariantValue(temp0, *temp1);
    }
    else
    {
      op->vtkTypedArray<unsigned char>::SetVariantValue(temp0, *temp1);
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
PyvtkTypedArray_IhE_SetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned char> *op = static_cast<vtkTypedArray<unsigned char> *>(vp);

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
      op->SetVariantValue(temp0, temp1, *temp2);
    }
    else
    {
      op->vtkTypedArray<unsigned char>::SetVariantValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_IhE_SetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned char> *op = static_cast<vtkTypedArray<unsigned char> *>(vp);

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
      op->SetVariantValue(temp0, temp1, temp2, *temp3);
    }
    else
    {
      op->vtkTypedArray<unsigned char>::SetVariantValue(temp0, temp1, temp2, *temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj3);

  return result;
}

static PyMethodDef PyvtkTypedArray_IhE_SetVariantValue_Methods[] = {
  {nullptr, PyvtkTypedArray_IhE_SetVariantValue_s1, METH_VARARGS,
   "@WW vtkArrayCoordinates vtkVariant"},
  {nullptr, PyvtkTypedArray_IhE_SetVariantValue_s2, METH_VARARGS,
   "@kW vtkVariant"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_IhE_SetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IhE_SetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTypedArray_IhE_SetVariantValue_s3(self, args);
    case 4:
      return PyvtkTypedArray_IhE_SetVariantValue_s4(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetVariantValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_IhE_SetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned char> *op = static_cast<vtkTypedArray<unsigned char> *>(vp);

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
      op->SetVariantValueN(temp0, *temp1);
    }
    else
    {
      op->vtkTypedArray<unsigned char>::SetVariantValueN(temp0, *temp1);
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
PyvtkTypedArray_IhE_CopyValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned char> *op = static_cast<vtkTypedArray<unsigned char> *>(vp);

  vtkArray *temp0 = nullptr;
  vtkArrayCoordinates *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  vtkArrayCoordinates *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
  {
    if (ap.IsBound())
    {
      op->CopyValue(temp0, *temp1, *temp2);
    }
    else
    {
      op->vtkTypedArray<unsigned char>::CopyValue(temp0, *temp1, *temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);
  Py_XDECREF(pobj2);

  return result;
}

static PyObject *
PyvtkTypedArray_IhE_CopyValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned char> *op = static_cast<vtkTypedArray<unsigned char> *>(vp);

  vtkArray *temp0 = nullptr;
  unsigned long long temp1;
  vtkArrayCoordinates *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetValue(temp1) &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
  {
    if (ap.IsBound())
    {
      op->CopyValue(temp0, temp1, *temp2);
    }
    else
    {
      op->vtkTypedArray<unsigned char>::CopyValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_IhE_CopyValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned char> *op = static_cast<vtkTypedArray<unsigned char> *>(vp);

  vtkArray *temp0 = nullptr;
  vtkArrayCoordinates *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  unsigned long long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->CopyValue(temp0, *temp1, temp2);
    }
    else
    {
      op->vtkTypedArray<unsigned char>::CopyValue(temp0, *temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkTypedArray_IhE_CopyValue_Methods[] = {
  {nullptr, PyvtkTypedArray_IhE_CopyValue_s1, METH_VARARGS,
   "@VWW *vtkArray vtkArrayCoordinates vtkArrayCoordinates"},
  {nullptr, PyvtkTypedArray_IhE_CopyValue_s2, METH_VARARGS,
   "@VKW *vtkArray vtkArrayCoordinates"},
  {nullptr, PyvtkTypedArray_IhE_CopyValue_s3, METH_VARARGS,
   "@VWK *vtkArray vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_IhE_CopyValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IhE_CopyValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "CopyValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_IhE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned char> *op = static_cast<vtkTypedArray<unsigned char> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const unsigned char *tempr = &op->GetValue(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IhE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned char> *op = static_cast<vtkTypedArray<unsigned char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const unsigned char *tempr = &op->GetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IhE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned char> *op = static_cast<vtkTypedArray<unsigned char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    const unsigned char *tempr = &op->GetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IhE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned char> *op = static_cast<vtkTypedArray<unsigned char> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    const unsigned char *tempr = &op->GetValue(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_IhE_GetValue_Methods[] = {
  {nullptr, PyvtkTypedArray_IhE_GetValue_s1, METH_VARARGS,
   "@k"},
  {nullptr, PyvtkTypedArray_IhE_GetValue_s4, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_IhE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IhE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkTypedArray_IhE_GetValue_s2(self, args);
    case 3:
      return PyvtkTypedArray_IhE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_IhE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned char> *op = static_cast<vtkTypedArray<unsigned char> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const unsigned char *tempr = &op->GetValueN(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_IhE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned char> *op = static_cast<vtkTypedArray<unsigned char> *>(vp);

  vtkIdType temp0;
  unsigned char temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->SetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IhE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned char> *op = static_cast<vtkTypedArray<unsigned char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  unsigned char temp2;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    op->SetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IhE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned char> *op = static_cast<vtkTypedArray<unsigned char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  unsigned char temp3;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    op->SetValue(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IhE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned char> *op = static_cast<vtkTypedArray<unsigned char> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  unsigned char temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
  {
    op->SetValue(*temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_IhE_SetValue_Methods[] = {
  {nullptr, PyvtkTypedArray_IhE_SetValue_s1, METH_VARARGS,
   "@kB"},
  {nullptr, PyvtkTypedArray_IhE_SetValue_s4, METH_VARARGS,
   "@WB vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_IhE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IhE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTypedArray_IhE_SetValue_s2(self, args);
    case 4:
      return PyvtkTypedArray_IhE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_IhE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned char> *op = static_cast<vtkTypedArray<unsigned char> *>(vp);

  unsigned long long temp0;
  unsigned char temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->SetValueN(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTypedArray_IhE_Methods[] = {
  {"IsTypeOf", PyvtkTypedArray_IhE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTypedArray_IhE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTypedArray_IhE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTypedArray_IhE\nC++: static vtkTypedArray<unsigned char> *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTypedArray_IhE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTypedArray_IhE\nC++: vtkTypedArray<unsigned char> *NewInstance()\n\n"},
  {"GetVariantValue", PyvtkTypedArray_IhE_GetVariantValue, METH_VARARGS,
   "V.GetVariantValue(vtkArrayCoordinates) -> vtkVariant\nC++: vtkVariant GetVariantValue(\n    const vtkArrayCoordinates &coordinates) override;\nV.GetVariantValue(int) -> vtkVariant\nC++: vtkVariant GetVariantValue(CoordinateT i)\nV.GetVariantValue(int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(CoordinateT i, CoordinateT j)\nV.GetVariantValue(int, int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(CoordinateT i, CoordinateT j,\n    CoordinateT k)\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetVariantValueN", PyvtkTypedArray_IhE_GetVariantValueN, METH_VARARGS,
   "V.GetVariantValueN(int) -> vtkVariant\nC++: vtkVariant GetVariantValueN(const SizeT n) override;\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetVariantValue", PyvtkTypedArray_IhE_SetVariantValue, METH_VARARGS,
   "V.SetVariantValue(vtkArrayCoordinates, vtkVariant)\nC++: void SetVariantValue(const vtkArrayCoordinates &coordinates,\n    const vtkVariant &value) override;\nV.SetVariantValue(int, vtkVariant)\nC++: void SetVariantValue(CoordinateT i, const vtkVariant &value)\nV.SetVariantValue(int, int, vtkVariant)\nC++: void SetVariantValue(CoordinateT i, CoordinateT j,\n    const vtkVariant &value)\nV.SetVariantValue(int, int, int, vtkVariant)\nC++: void SetVariantValue(CoordinateT i, CoordinateT j,\n    CoordinateT k, const vtkVariant &value)\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetVariantValueN", PyvtkTypedArray_IhE_SetVariantValueN, METH_VARARGS,
   "V.SetVariantValueN(int, vtkVariant)\nC++: void SetVariantValueN(const SizeT n, const vtkVariant &value)\n     override;\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"CopyValue", PyvtkTypedArray_IhE_CopyValue, METH_VARARGS,
   "V.CopyValue(vtkArray, vtkArrayCoordinates, vtkArrayCoordinates)\nC++: void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const vtkArrayCoordinates &target_coordinates) override;\nV.CopyValue(vtkArray, int, vtkArrayCoordinates)\nC++: void CopyValue(vtkArray *source, const SizeT source_index,\n    const vtkArrayCoordinates &target_coordinates) override;\nV.CopyValue(vtkArray, vtkArrayCoordinates, int)\nC++: void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const SizeT target_index) override;\n\nOverwrites a value with a value retrieved from another array. \nBoth arrays must store the same data types.\n"},
  {"GetValue", PyvtkTypedArray_IhE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> int\nC++: virtual const unsigned char &GetValue(CoordinateT i)\nV.GetValue(int, int) -> int\nC++: virtual const unsigned char &GetValue(CoordinateT i,\n    CoordinateT j)\nV.GetValue(int, int, int) -> int\nC++: virtual const unsigned char &GetValue(CoordinateT i,\n    CoordinateT j, CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> int\nC++: virtual const unsigned char &GetValue(\n    const vtkArrayCoordinates &coordinates)\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetValueN", PyvtkTypedArray_IhE_GetValueN, METH_VARARGS,
   "V.GetValueN(int) -> int\nC++: virtual const unsigned char &GetValueN(const SizeT n)\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetValue", PyvtkTypedArray_IhE_SetValue, METH_VARARGS,
   "V.SetValue(int, int)\nC++: virtual void SetValue(CoordinateT i,\n    const unsigned char &value)\nV.SetValue(int, int, int)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    const unsigned char &value)\nV.SetValue(int, int, int, int)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k, const unsigned char &value)\nV.SetValue(vtkArrayCoordinates, int)\nC++: virtual void SetValue(const vtkArrayCoordinates &coordinates,\n     const unsigned char &value)\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetValueN", PyvtkTypedArray_IhE_SetValueN, METH_VARARGS,
   "V.SetValueN(int, int)\nC++: virtual void SetValueN(const SizeT n,\n    const unsigned char &value)\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTypedArray_IhE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkTypedArray_IhE", // tp_name
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
  PyvtkTypedArray_IhE_Doc, // tp_doc
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

PyObject *PyvtkTypedArray_IhE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTypedArray_IhE_Type, PyvtkTypedArray_IhE_Methods,
    typeid(vtkTypedArray<unsigned char>).name(),
 nullptr);

  PyTypeObject *pytype = &PyvtkTypedArray_IhE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkArray_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTypedArray_IsE_ClassNew(); }

#ifndef DECLARED_PyvtkArray_ClassNew
extern "C" { PyObject *PyvtkArray_ClassNew(); }
#define DECLARED_PyvtkArray_ClassNew
#endif

static const char *PyvtkTypedArray_IsE_Doc =
  "vtkTypedArray- Provides a type-specific interface to N-way arrays\n\n"
  "Superclass: vtkArray\n\n"
  "vtkTypedArray provides an interface for retrieving and updating data\n"
  "in an arbitrary-dimension array.  It derives from vtkArray and is\n"
  "templated on the type of value stored in the array.\n\n"
  "Methods are provided for retrieving and updating array values based\n"
  "either on their array coordinates, or on a 1-dimensional integer\n"
  "index.  The latter approach can be used to iterate over the values in\n"
  "an array in arbitrary order, which is useful when writing filters\n"
  "that operate efficiently on sparse arrays and arrays that can have\n"
  "any number of dimensions.\n\n"
  "Special overloaded methods provide simple access for arrays with one,\n"
  "two, or three dimensions.\n\n"
  "@sa\n"
  "vtkArray, vtkDenseArray, vtkSparseArray\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";


static PyObject *
PyvtkTypedArray_IsE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTypedArray<short>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_IsE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<short> *op = static_cast<vtkTypedArray<short> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTypedArray<short>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_IsE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTypedArray<short> *tempr = vtkTypedArray<short>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_IsE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<short> *op = static_cast<vtkTypedArray<short> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTypedArray<short> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTypedArray<short>::NewInstance());

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
PyvtkTypedArray_IsE_GetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<short> *op = static_cast<vtkTypedArray<short> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(*temp0) :
      op->vtkTypedArray<short>::GetVariantValue(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkTypedArray_IsE_GetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<short> *op = static_cast<vtkTypedArray<short> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0) :
      op->vtkTypedArray<short>::GetVariantValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IsE_GetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<short> *op = static_cast<vtkTypedArray<short> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1) :
      op->vtkTypedArray<short>::GetVariantValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IsE_GetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<short> *op = static_cast<vtkTypedArray<short> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1, temp2) :
      op->vtkTypedArray<short>::GetVariantValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}

static PyMethodDef PyvtkTypedArray_IsE_GetVariantValue_Methods[] = {
  {nullptr, PyvtkTypedArray_IsE_GetVariantValue_s1, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, PyvtkTypedArray_IsE_GetVariantValue_s2, METH_VARARGS,
   "@k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_IsE_GetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IsE_GetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkTypedArray_IsE_GetVariantValue_s3(self, args);
    case 3:
      return PyvtkTypedArray_IsE_GetVariantValue_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetVariantValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_IsE_GetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<short> *op = static_cast<vtkTypedArray<short> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValueN(temp0) :
      op->vtkTypedArray<short>::GetVariantValueN(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_IsE_SetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<short> *op = static_cast<vtkTypedArray<short> *>(vp);

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
      op->SetVariantValue(*temp0, *temp1);
    }
    else
    {
      op->vtkTypedArray<short>::SetVariantValue(*temp0, *temp1);
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

static PyObject *
PyvtkTypedArray_IsE_SetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<short> *op = static_cast<vtkTypedArray<short> *>(vp);

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
      op->SetVariantValue(temp0, *temp1);
    }
    else
    {
      op->vtkTypedArray<short>::SetVariantValue(temp0, *temp1);
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
PyvtkTypedArray_IsE_SetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<short> *op = static_cast<vtkTypedArray<short> *>(vp);

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
      op->SetVariantValue(temp0, temp1, *temp2);
    }
    else
    {
      op->vtkTypedArray<short>::SetVariantValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_IsE_SetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<short> *op = static_cast<vtkTypedArray<short> *>(vp);

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
      op->SetVariantValue(temp0, temp1, temp2, *temp3);
    }
    else
    {
      op->vtkTypedArray<short>::SetVariantValue(temp0, temp1, temp2, *temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj3);

  return result;
}

static PyMethodDef PyvtkTypedArray_IsE_SetVariantValue_Methods[] = {
  {nullptr, PyvtkTypedArray_IsE_SetVariantValue_s1, METH_VARARGS,
   "@WW vtkArrayCoordinates vtkVariant"},
  {nullptr, PyvtkTypedArray_IsE_SetVariantValue_s2, METH_VARARGS,
   "@kW vtkVariant"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_IsE_SetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IsE_SetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTypedArray_IsE_SetVariantValue_s3(self, args);
    case 4:
      return PyvtkTypedArray_IsE_SetVariantValue_s4(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetVariantValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_IsE_SetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<short> *op = static_cast<vtkTypedArray<short> *>(vp);

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
      op->SetVariantValueN(temp0, *temp1);
    }
    else
    {
      op->vtkTypedArray<short>::SetVariantValueN(temp0, *temp1);
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
PyvtkTypedArray_IsE_CopyValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<short> *op = static_cast<vtkTypedArray<short> *>(vp);

  vtkArray *temp0 = nullptr;
  vtkArrayCoordinates *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  vtkArrayCoordinates *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
  {
    if (ap.IsBound())
    {
      op->CopyValue(temp0, *temp1, *temp2);
    }
    else
    {
      op->vtkTypedArray<short>::CopyValue(temp0, *temp1, *temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);
  Py_XDECREF(pobj2);

  return result;
}

static PyObject *
PyvtkTypedArray_IsE_CopyValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<short> *op = static_cast<vtkTypedArray<short> *>(vp);

  vtkArray *temp0 = nullptr;
  unsigned long long temp1;
  vtkArrayCoordinates *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetValue(temp1) &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
  {
    if (ap.IsBound())
    {
      op->CopyValue(temp0, temp1, *temp2);
    }
    else
    {
      op->vtkTypedArray<short>::CopyValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_IsE_CopyValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<short> *op = static_cast<vtkTypedArray<short> *>(vp);

  vtkArray *temp0 = nullptr;
  vtkArrayCoordinates *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  unsigned long long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->CopyValue(temp0, *temp1, temp2);
    }
    else
    {
      op->vtkTypedArray<short>::CopyValue(temp0, *temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkTypedArray_IsE_CopyValue_Methods[] = {
  {nullptr, PyvtkTypedArray_IsE_CopyValue_s1, METH_VARARGS,
   "@VWW *vtkArray vtkArrayCoordinates vtkArrayCoordinates"},
  {nullptr, PyvtkTypedArray_IsE_CopyValue_s2, METH_VARARGS,
   "@VKW *vtkArray vtkArrayCoordinates"},
  {nullptr, PyvtkTypedArray_IsE_CopyValue_s3, METH_VARARGS,
   "@VWK *vtkArray vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_IsE_CopyValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IsE_CopyValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "CopyValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_IsE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<short> *op = static_cast<vtkTypedArray<short> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const short *tempr = &op->GetValue(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IsE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<short> *op = static_cast<vtkTypedArray<short> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const short *tempr = &op->GetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IsE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<short> *op = static_cast<vtkTypedArray<short> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    const short *tempr = &op->GetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IsE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<short> *op = static_cast<vtkTypedArray<short> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    const short *tempr = &op->GetValue(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_IsE_GetValue_Methods[] = {
  {nullptr, PyvtkTypedArray_IsE_GetValue_s1, METH_VARARGS,
   "@k"},
  {nullptr, PyvtkTypedArray_IsE_GetValue_s4, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_IsE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IsE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkTypedArray_IsE_GetValue_s2(self, args);
    case 3:
      return PyvtkTypedArray_IsE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_IsE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<short> *op = static_cast<vtkTypedArray<short> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const short *tempr = &op->GetValueN(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_IsE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<short> *op = static_cast<vtkTypedArray<short> *>(vp);

  vtkIdType temp0;
  short temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->SetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IsE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<short> *op = static_cast<vtkTypedArray<short> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  short temp2;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    op->SetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IsE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<short> *op = static_cast<vtkTypedArray<short> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  short temp3;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    op->SetValue(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IsE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<short> *op = static_cast<vtkTypedArray<short> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  short temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
  {
    op->SetValue(*temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_IsE_SetValue_Methods[] = {
  {nullptr, PyvtkTypedArray_IsE_SetValue_s1, METH_VARARGS,
   "@kh"},
  {nullptr, PyvtkTypedArray_IsE_SetValue_s4, METH_VARARGS,
   "@Wh vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_IsE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IsE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTypedArray_IsE_SetValue_s2(self, args);
    case 4:
      return PyvtkTypedArray_IsE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_IsE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<short> *op = static_cast<vtkTypedArray<short> *>(vp);

  unsigned long long temp0;
  short temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->SetValueN(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTypedArray_IsE_Methods[] = {
  {"IsTypeOf", PyvtkTypedArray_IsE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTypedArray_IsE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTypedArray_IsE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTypedArray_IsE\nC++: static vtkTypedArray<short> *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTypedArray_IsE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTypedArray_IsE\nC++: vtkTypedArray<short> *NewInstance()\n\n"},
  {"GetVariantValue", PyvtkTypedArray_IsE_GetVariantValue, METH_VARARGS,
   "V.GetVariantValue(vtkArrayCoordinates) -> vtkVariant\nC++: vtkVariant GetVariantValue(\n    const vtkArrayCoordinates &coordinates) override;\nV.GetVariantValue(int) -> vtkVariant\nC++: vtkVariant GetVariantValue(CoordinateT i)\nV.GetVariantValue(int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(CoordinateT i, CoordinateT j)\nV.GetVariantValue(int, int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(CoordinateT i, CoordinateT j,\n    CoordinateT k)\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetVariantValueN", PyvtkTypedArray_IsE_GetVariantValueN, METH_VARARGS,
   "V.GetVariantValueN(int) -> vtkVariant\nC++: vtkVariant GetVariantValueN(const SizeT n) override;\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetVariantValue", PyvtkTypedArray_IsE_SetVariantValue, METH_VARARGS,
   "V.SetVariantValue(vtkArrayCoordinates, vtkVariant)\nC++: void SetVariantValue(const vtkArrayCoordinates &coordinates,\n    const vtkVariant &value) override;\nV.SetVariantValue(int, vtkVariant)\nC++: void SetVariantValue(CoordinateT i, const vtkVariant &value)\nV.SetVariantValue(int, int, vtkVariant)\nC++: void SetVariantValue(CoordinateT i, CoordinateT j,\n    const vtkVariant &value)\nV.SetVariantValue(int, int, int, vtkVariant)\nC++: void SetVariantValue(CoordinateT i, CoordinateT j,\n    CoordinateT k, const vtkVariant &value)\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetVariantValueN", PyvtkTypedArray_IsE_SetVariantValueN, METH_VARARGS,
   "V.SetVariantValueN(int, vtkVariant)\nC++: void SetVariantValueN(const SizeT n, const vtkVariant &value)\n     override;\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"CopyValue", PyvtkTypedArray_IsE_CopyValue, METH_VARARGS,
   "V.CopyValue(vtkArray, vtkArrayCoordinates, vtkArrayCoordinates)\nC++: void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const vtkArrayCoordinates &target_coordinates) override;\nV.CopyValue(vtkArray, int, vtkArrayCoordinates)\nC++: void CopyValue(vtkArray *source, const SizeT source_index,\n    const vtkArrayCoordinates &target_coordinates) override;\nV.CopyValue(vtkArray, vtkArrayCoordinates, int)\nC++: void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const SizeT target_index) override;\n\nOverwrites a value with a value retrieved from another array. \nBoth arrays must store the same data types.\n"},
  {"GetValue", PyvtkTypedArray_IsE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> int\nC++: virtual const short &GetValue(CoordinateT i)\nV.GetValue(int, int) -> int\nC++: virtual const short &GetValue(CoordinateT i, CoordinateT j)\nV.GetValue(int, int, int) -> int\nC++: virtual const short &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> int\nC++: virtual const short &GetValue(\n    const vtkArrayCoordinates &coordinates)\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetValueN", PyvtkTypedArray_IsE_GetValueN, METH_VARARGS,
   "V.GetValueN(int) -> int\nC++: virtual const short &GetValueN(const SizeT n)\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetValue", PyvtkTypedArray_IsE_SetValue, METH_VARARGS,
   "V.SetValue(int, int)\nC++: virtual void SetValue(CoordinateT i, const short &value)\nV.SetValue(int, int, int)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    const short &value)\nV.SetValue(int, int, int, int)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k, const short &value)\nV.SetValue(vtkArrayCoordinates, int)\nC++: virtual void SetValue(const vtkArrayCoordinates &coordinates,\n     const short &value)\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetValueN", PyvtkTypedArray_IsE_SetValueN, METH_VARARGS,
   "V.SetValueN(int, int)\nC++: virtual void SetValueN(const SizeT n, const short &value)\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTypedArray_IsE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkTypedArray_IsE", // tp_name
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
  PyvtkTypedArray_IsE_Doc, // tp_doc
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

PyObject *PyvtkTypedArray_IsE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTypedArray_IsE_Type, PyvtkTypedArray_IsE_Methods,
    typeid(vtkTypedArray<short>).name(),
 nullptr);

  PyTypeObject *pytype = &PyvtkTypedArray_IsE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkArray_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTypedArray_ItE_ClassNew(); }

#ifndef DECLARED_PyvtkArray_ClassNew
extern "C" { PyObject *PyvtkArray_ClassNew(); }
#define DECLARED_PyvtkArray_ClassNew
#endif

static const char *PyvtkTypedArray_ItE_Doc =
  "vtkTypedArray<unsigned short> - Provides a type-specific interface to\nN-way arrays\n\n"
  "Superclass: vtkArray\n\n"
  "vtkTypedArray provides an interface for retrieving and updating data\n"
  "in an arbitrary-dimension array.  It derives from vtkArray and is\n"
  "templated on the type of value stored in the array.\n\n"
  "Methods are provided for retrieving and updating array values based\n"
  "either on their array coordinates, or on a 1-dimensional integer\n"
  "index.  The latter approach can be used to iterate over the values in\n"
  "an array in arbitrary order, which is useful when writing filters\n"
  "that operate efficiently on sparse arrays and arrays that can have\n"
  "any number of dimensions.\n\n"
  "Special overloaded methods provide simple access for arrays with one,\n"
  "two, or three dimensions.\n\n"
  "@sa\n"
  "vtkArray, vtkDenseArray, vtkSparseArray\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";


static PyObject *
PyvtkTypedArray_ItE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTypedArray<unsigned short>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_ItE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned short> *op = static_cast<vtkTypedArray<unsigned short> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTypedArray<unsigned short>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_ItE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTypedArray<unsigned short> *tempr = vtkTypedArray<unsigned short>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_ItE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned short> *op = static_cast<vtkTypedArray<unsigned short> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTypedArray<unsigned short> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTypedArray<unsigned short>::NewInstance());

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
PyvtkTypedArray_ItE_GetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned short> *op = static_cast<vtkTypedArray<unsigned short> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(*temp0) :
      op->vtkTypedArray<unsigned short>::GetVariantValue(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkTypedArray_ItE_GetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned short> *op = static_cast<vtkTypedArray<unsigned short> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0) :
      op->vtkTypedArray<unsigned short>::GetVariantValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_ItE_GetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned short> *op = static_cast<vtkTypedArray<unsigned short> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1) :
      op->vtkTypedArray<unsigned short>::GetVariantValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_ItE_GetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned short> *op = static_cast<vtkTypedArray<unsigned short> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1, temp2) :
      op->vtkTypedArray<unsigned short>::GetVariantValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}

static PyMethodDef PyvtkTypedArray_ItE_GetVariantValue_Methods[] = {
  {nullptr, PyvtkTypedArray_ItE_GetVariantValue_s1, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, PyvtkTypedArray_ItE_GetVariantValue_s2, METH_VARARGS,
   "@k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_ItE_GetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_ItE_GetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkTypedArray_ItE_GetVariantValue_s3(self, args);
    case 3:
      return PyvtkTypedArray_ItE_GetVariantValue_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetVariantValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_ItE_GetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned short> *op = static_cast<vtkTypedArray<unsigned short> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValueN(temp0) :
      op->vtkTypedArray<unsigned short>::GetVariantValueN(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_ItE_SetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned short> *op = static_cast<vtkTypedArray<unsigned short> *>(vp);

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
      op->SetVariantValue(*temp0, *temp1);
    }
    else
    {
      op->vtkTypedArray<unsigned short>::SetVariantValue(*temp0, *temp1);
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

static PyObject *
PyvtkTypedArray_ItE_SetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned short> *op = static_cast<vtkTypedArray<unsigned short> *>(vp);

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
      op->SetVariantValue(temp0, *temp1);
    }
    else
    {
      op->vtkTypedArray<unsigned short>::SetVariantValue(temp0, *temp1);
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
PyvtkTypedArray_ItE_SetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned short> *op = static_cast<vtkTypedArray<unsigned short> *>(vp);

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
      op->SetVariantValue(temp0, temp1, *temp2);
    }
    else
    {
      op->vtkTypedArray<unsigned short>::SetVariantValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_ItE_SetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned short> *op = static_cast<vtkTypedArray<unsigned short> *>(vp);

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
      op->SetVariantValue(temp0, temp1, temp2, *temp3);
    }
    else
    {
      op->vtkTypedArray<unsigned short>::SetVariantValue(temp0, temp1, temp2, *temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj3);

  return result;
}

static PyMethodDef PyvtkTypedArray_ItE_SetVariantValue_Methods[] = {
  {nullptr, PyvtkTypedArray_ItE_SetVariantValue_s1, METH_VARARGS,
   "@WW vtkArrayCoordinates vtkVariant"},
  {nullptr, PyvtkTypedArray_ItE_SetVariantValue_s2, METH_VARARGS,
   "@kW vtkVariant"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_ItE_SetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_ItE_SetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTypedArray_ItE_SetVariantValue_s3(self, args);
    case 4:
      return PyvtkTypedArray_ItE_SetVariantValue_s4(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetVariantValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_ItE_SetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned short> *op = static_cast<vtkTypedArray<unsigned short> *>(vp);

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
      op->SetVariantValueN(temp0, *temp1);
    }
    else
    {
      op->vtkTypedArray<unsigned short>::SetVariantValueN(temp0, *temp1);
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
PyvtkTypedArray_ItE_CopyValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned short> *op = static_cast<vtkTypedArray<unsigned short> *>(vp);

  vtkArray *temp0 = nullptr;
  vtkArrayCoordinates *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  vtkArrayCoordinates *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
  {
    if (ap.IsBound())
    {
      op->CopyValue(temp0, *temp1, *temp2);
    }
    else
    {
      op->vtkTypedArray<unsigned short>::CopyValue(temp0, *temp1, *temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);
  Py_XDECREF(pobj2);

  return result;
}

static PyObject *
PyvtkTypedArray_ItE_CopyValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned short> *op = static_cast<vtkTypedArray<unsigned short> *>(vp);

  vtkArray *temp0 = nullptr;
  unsigned long long temp1;
  vtkArrayCoordinates *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetValue(temp1) &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
  {
    if (ap.IsBound())
    {
      op->CopyValue(temp0, temp1, *temp2);
    }
    else
    {
      op->vtkTypedArray<unsigned short>::CopyValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_ItE_CopyValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned short> *op = static_cast<vtkTypedArray<unsigned short> *>(vp);

  vtkArray *temp0 = nullptr;
  vtkArrayCoordinates *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  unsigned long long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->CopyValue(temp0, *temp1, temp2);
    }
    else
    {
      op->vtkTypedArray<unsigned short>::CopyValue(temp0, *temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkTypedArray_ItE_CopyValue_Methods[] = {
  {nullptr, PyvtkTypedArray_ItE_CopyValue_s1, METH_VARARGS,
   "@VWW *vtkArray vtkArrayCoordinates vtkArrayCoordinates"},
  {nullptr, PyvtkTypedArray_ItE_CopyValue_s2, METH_VARARGS,
   "@VKW *vtkArray vtkArrayCoordinates"},
  {nullptr, PyvtkTypedArray_ItE_CopyValue_s3, METH_VARARGS,
   "@VWK *vtkArray vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_ItE_CopyValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_ItE_CopyValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "CopyValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_ItE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned short> *op = static_cast<vtkTypedArray<unsigned short> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const unsigned short *tempr = &op->GetValue(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_ItE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned short> *op = static_cast<vtkTypedArray<unsigned short> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const unsigned short *tempr = &op->GetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_ItE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned short> *op = static_cast<vtkTypedArray<unsigned short> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    const unsigned short *tempr = &op->GetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_ItE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned short> *op = static_cast<vtkTypedArray<unsigned short> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    const unsigned short *tempr = &op->GetValue(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_ItE_GetValue_Methods[] = {
  {nullptr, PyvtkTypedArray_ItE_GetValue_s1, METH_VARARGS,
   "@k"},
  {nullptr, PyvtkTypedArray_ItE_GetValue_s4, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_ItE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_ItE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkTypedArray_ItE_GetValue_s2(self, args);
    case 3:
      return PyvtkTypedArray_ItE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_ItE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned short> *op = static_cast<vtkTypedArray<unsigned short> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const unsigned short *tempr = &op->GetValueN(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_ItE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned short> *op = static_cast<vtkTypedArray<unsigned short> *>(vp);

  vtkIdType temp0;
  unsigned short temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->SetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_ItE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned short> *op = static_cast<vtkTypedArray<unsigned short> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  unsigned short temp2;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    op->SetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_ItE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned short> *op = static_cast<vtkTypedArray<unsigned short> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  unsigned short temp3;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    op->SetValue(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_ItE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned short> *op = static_cast<vtkTypedArray<unsigned short> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  unsigned short temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
  {
    op->SetValue(*temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_ItE_SetValue_Methods[] = {
  {nullptr, PyvtkTypedArray_ItE_SetValue_s1, METH_VARARGS,
   "@kH"},
  {nullptr, PyvtkTypedArray_ItE_SetValue_s4, METH_VARARGS,
   "@WH vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_ItE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_ItE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTypedArray_ItE_SetValue_s2(self, args);
    case 4:
      return PyvtkTypedArray_ItE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_ItE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned short> *op = static_cast<vtkTypedArray<unsigned short> *>(vp);

  unsigned long long temp0;
  unsigned short temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->SetValueN(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTypedArray_ItE_Methods[] = {
  {"IsTypeOf", PyvtkTypedArray_ItE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTypedArray_ItE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTypedArray_ItE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTypedArray_ItE\nC++: static vtkTypedArray<unsigned short> *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTypedArray_ItE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTypedArray_ItE\nC++: vtkTypedArray<unsigned short> *NewInstance()\n\n"},
  {"GetVariantValue", PyvtkTypedArray_ItE_GetVariantValue, METH_VARARGS,
   "V.GetVariantValue(vtkArrayCoordinates) -> vtkVariant\nC++: vtkVariant GetVariantValue(\n    const vtkArrayCoordinates &coordinates) override;\nV.GetVariantValue(int) -> vtkVariant\nC++: vtkVariant GetVariantValue(CoordinateT i)\nV.GetVariantValue(int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(CoordinateT i, CoordinateT j)\nV.GetVariantValue(int, int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(CoordinateT i, CoordinateT j,\n    CoordinateT k)\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetVariantValueN", PyvtkTypedArray_ItE_GetVariantValueN, METH_VARARGS,
   "V.GetVariantValueN(int) -> vtkVariant\nC++: vtkVariant GetVariantValueN(const SizeT n) override;\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetVariantValue", PyvtkTypedArray_ItE_SetVariantValue, METH_VARARGS,
   "V.SetVariantValue(vtkArrayCoordinates, vtkVariant)\nC++: void SetVariantValue(const vtkArrayCoordinates &coordinates,\n    const vtkVariant &value) override;\nV.SetVariantValue(int, vtkVariant)\nC++: void SetVariantValue(CoordinateT i, const vtkVariant &value)\nV.SetVariantValue(int, int, vtkVariant)\nC++: void SetVariantValue(CoordinateT i, CoordinateT j,\n    const vtkVariant &value)\nV.SetVariantValue(int, int, int, vtkVariant)\nC++: void SetVariantValue(CoordinateT i, CoordinateT j,\n    CoordinateT k, const vtkVariant &value)\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetVariantValueN", PyvtkTypedArray_ItE_SetVariantValueN, METH_VARARGS,
   "V.SetVariantValueN(int, vtkVariant)\nC++: void SetVariantValueN(const SizeT n, const vtkVariant &value)\n     override;\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"CopyValue", PyvtkTypedArray_ItE_CopyValue, METH_VARARGS,
   "V.CopyValue(vtkArray, vtkArrayCoordinates, vtkArrayCoordinates)\nC++: void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const vtkArrayCoordinates &target_coordinates) override;\nV.CopyValue(vtkArray, int, vtkArrayCoordinates)\nC++: void CopyValue(vtkArray *source, const SizeT source_index,\n    const vtkArrayCoordinates &target_coordinates) override;\nV.CopyValue(vtkArray, vtkArrayCoordinates, int)\nC++: void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const SizeT target_index) override;\n\nOverwrites a value with a value retrieved from another array. \nBoth arrays must store the same data types.\n"},
  {"GetValue", PyvtkTypedArray_ItE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> int\nC++: virtual const unsigned short &GetValue(CoordinateT i)\nV.GetValue(int, int) -> int\nC++: virtual const unsigned short &GetValue(CoordinateT i,\n    CoordinateT j)\nV.GetValue(int, int, int) -> int\nC++: virtual const unsigned short &GetValue(CoordinateT i,\n    CoordinateT j, CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> int\nC++: virtual const unsigned short &GetValue(\n    const vtkArrayCoordinates &coordinates)\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetValueN", PyvtkTypedArray_ItE_GetValueN, METH_VARARGS,
   "V.GetValueN(int) -> int\nC++: virtual const unsigned short &GetValueN(const SizeT n)\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetValue", PyvtkTypedArray_ItE_SetValue, METH_VARARGS,
   "V.SetValue(int, int)\nC++: virtual void SetValue(CoordinateT i,\n    const unsigned short &value)\nV.SetValue(int, int, int)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    const unsigned short &value)\nV.SetValue(int, int, int, int)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k, const unsigned short &value)\nV.SetValue(vtkArrayCoordinates, int)\nC++: virtual void SetValue(const vtkArrayCoordinates &coordinates,\n     const unsigned short &value)\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetValueN", PyvtkTypedArray_ItE_SetValueN, METH_VARARGS,
   "V.SetValueN(int, int)\nC++: virtual void SetValueN(const SizeT n,\n    const unsigned short &value)\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTypedArray_ItE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkTypedArray_ItE", // tp_name
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
  PyvtkTypedArray_ItE_Doc, // tp_doc
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

PyObject *PyvtkTypedArray_ItE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTypedArray_ItE_Type, PyvtkTypedArray_ItE_Methods,
    typeid(vtkTypedArray<unsigned short>).name(),
 nullptr);

  PyTypeObject *pytype = &PyvtkTypedArray_ItE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkArray_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTypedArray_IiE_ClassNew(); }

#ifndef DECLARED_PyvtkArray_ClassNew
extern "C" { PyObject *PyvtkArray_ClassNew(); }
#define DECLARED_PyvtkArray_ClassNew
#endif

static const char *PyvtkTypedArray_IiE_Doc =
  "vtkTypedArray- Provides a type-specific interface to N-way arrays\n\n"
  "Superclass: vtkArray\n\n"
  "vtkTypedArray provides an interface for retrieving and updating data\n"
  "in an arbitrary-dimension array.  It derives from vtkArray and is\n"
  "templated on the type of value stored in the array.\n\n"
  "Methods are provided for retrieving and updating array values based\n"
  "either on their array coordinates, or on a 1-dimensional integer\n"
  "index.  The latter approach can be used to iterate over the values in\n"
  "an array in arbitrary order, which is useful when writing filters\n"
  "that operate efficiently on sparse arrays and arrays that can have\n"
  "any number of dimensions.\n\n"
  "Special overloaded methods provide simple access for arrays with one,\n"
  "two, or three dimensions.\n\n"
  "@sa\n"
  "vtkArray, vtkDenseArray, vtkSparseArray\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";


static PyObject *
PyvtkTypedArray_IiE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTypedArray<int>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_IiE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<int> *op = static_cast<vtkTypedArray<int> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTypedArray<int>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_IiE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTypedArray<int> *tempr = vtkTypedArray<int>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_IiE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<int> *op = static_cast<vtkTypedArray<int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTypedArray<int> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTypedArray<int>::NewInstance());

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
PyvtkTypedArray_IiE_GetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<int> *op = static_cast<vtkTypedArray<int> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(*temp0) :
      op->vtkTypedArray<int>::GetVariantValue(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkTypedArray_IiE_GetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<int> *op = static_cast<vtkTypedArray<int> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0) :
      op->vtkTypedArray<int>::GetVariantValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IiE_GetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<int> *op = static_cast<vtkTypedArray<int> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1) :
      op->vtkTypedArray<int>::GetVariantValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IiE_GetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<int> *op = static_cast<vtkTypedArray<int> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1, temp2) :
      op->vtkTypedArray<int>::GetVariantValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}

static PyMethodDef PyvtkTypedArray_IiE_GetVariantValue_Methods[] = {
  {nullptr, PyvtkTypedArray_IiE_GetVariantValue_s1, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, PyvtkTypedArray_IiE_GetVariantValue_s2, METH_VARARGS,
   "@k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_IiE_GetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IiE_GetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkTypedArray_IiE_GetVariantValue_s3(self, args);
    case 3:
      return PyvtkTypedArray_IiE_GetVariantValue_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetVariantValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_IiE_GetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<int> *op = static_cast<vtkTypedArray<int> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValueN(temp0) :
      op->vtkTypedArray<int>::GetVariantValueN(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_IiE_SetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<int> *op = static_cast<vtkTypedArray<int> *>(vp);

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
      op->SetVariantValue(*temp0, *temp1);
    }
    else
    {
      op->vtkTypedArray<int>::SetVariantValue(*temp0, *temp1);
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

static PyObject *
PyvtkTypedArray_IiE_SetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<int> *op = static_cast<vtkTypedArray<int> *>(vp);

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
      op->SetVariantValue(temp0, *temp1);
    }
    else
    {
      op->vtkTypedArray<int>::SetVariantValue(temp0, *temp1);
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
PyvtkTypedArray_IiE_SetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<int> *op = static_cast<vtkTypedArray<int> *>(vp);

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
      op->SetVariantValue(temp0, temp1, *temp2);
    }
    else
    {
      op->vtkTypedArray<int>::SetVariantValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_IiE_SetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<int> *op = static_cast<vtkTypedArray<int> *>(vp);

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
      op->SetVariantValue(temp0, temp1, temp2, *temp3);
    }
    else
    {
      op->vtkTypedArray<int>::SetVariantValue(temp0, temp1, temp2, *temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj3);

  return result;
}

static PyMethodDef PyvtkTypedArray_IiE_SetVariantValue_Methods[] = {
  {nullptr, PyvtkTypedArray_IiE_SetVariantValue_s1, METH_VARARGS,
   "@WW vtkArrayCoordinates vtkVariant"},
  {nullptr, PyvtkTypedArray_IiE_SetVariantValue_s2, METH_VARARGS,
   "@kW vtkVariant"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_IiE_SetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IiE_SetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTypedArray_IiE_SetVariantValue_s3(self, args);
    case 4:
      return PyvtkTypedArray_IiE_SetVariantValue_s4(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetVariantValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_IiE_SetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<int> *op = static_cast<vtkTypedArray<int> *>(vp);

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
      op->SetVariantValueN(temp0, *temp1);
    }
    else
    {
      op->vtkTypedArray<int>::SetVariantValueN(temp0, *temp1);
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
PyvtkTypedArray_IiE_CopyValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<int> *op = static_cast<vtkTypedArray<int> *>(vp);

  vtkArray *temp0 = nullptr;
  vtkArrayCoordinates *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  vtkArrayCoordinates *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
  {
    if (ap.IsBound())
    {
      op->CopyValue(temp0, *temp1, *temp2);
    }
    else
    {
      op->vtkTypedArray<int>::CopyValue(temp0, *temp1, *temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);
  Py_XDECREF(pobj2);

  return result;
}

static PyObject *
PyvtkTypedArray_IiE_CopyValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<int> *op = static_cast<vtkTypedArray<int> *>(vp);

  vtkArray *temp0 = nullptr;
  unsigned long long temp1;
  vtkArrayCoordinates *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetValue(temp1) &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
  {
    if (ap.IsBound())
    {
      op->CopyValue(temp0, temp1, *temp2);
    }
    else
    {
      op->vtkTypedArray<int>::CopyValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_IiE_CopyValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<int> *op = static_cast<vtkTypedArray<int> *>(vp);

  vtkArray *temp0 = nullptr;
  vtkArrayCoordinates *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  unsigned long long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->CopyValue(temp0, *temp1, temp2);
    }
    else
    {
      op->vtkTypedArray<int>::CopyValue(temp0, *temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkTypedArray_IiE_CopyValue_Methods[] = {
  {nullptr, PyvtkTypedArray_IiE_CopyValue_s1, METH_VARARGS,
   "@VWW *vtkArray vtkArrayCoordinates vtkArrayCoordinates"},
  {nullptr, PyvtkTypedArray_IiE_CopyValue_s2, METH_VARARGS,
   "@VKW *vtkArray vtkArrayCoordinates"},
  {nullptr, PyvtkTypedArray_IiE_CopyValue_s3, METH_VARARGS,
   "@VWK *vtkArray vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_IiE_CopyValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IiE_CopyValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "CopyValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_IiE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<int> *op = static_cast<vtkTypedArray<int> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const int *tempr = &op->GetValue(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IiE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<int> *op = static_cast<vtkTypedArray<int> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const int *tempr = &op->GetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IiE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<int> *op = static_cast<vtkTypedArray<int> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    const int *tempr = &op->GetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IiE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<int> *op = static_cast<vtkTypedArray<int> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    const int *tempr = &op->GetValue(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_IiE_GetValue_Methods[] = {
  {nullptr, PyvtkTypedArray_IiE_GetValue_s1, METH_VARARGS,
   "@k"},
  {nullptr, PyvtkTypedArray_IiE_GetValue_s4, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_IiE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IiE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkTypedArray_IiE_GetValue_s2(self, args);
    case 3:
      return PyvtkTypedArray_IiE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_IiE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<int> *op = static_cast<vtkTypedArray<int> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const int *tempr = &op->GetValueN(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_IiE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<int> *op = static_cast<vtkTypedArray<int> *>(vp);

  vtkIdType temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->SetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IiE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<int> *op = static_cast<vtkTypedArray<int> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    op->SetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IiE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<int> *op = static_cast<vtkTypedArray<int> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    op->SetValue(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IiE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<int> *op = static_cast<vtkTypedArray<int> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
  {
    op->SetValue(*temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_IiE_SetValue_Methods[] = {
  {nullptr, PyvtkTypedArray_IiE_SetValue_s1, METH_VARARGS,
   "@ki"},
  {nullptr, PyvtkTypedArray_IiE_SetValue_s4, METH_VARARGS,
   "@Wi vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_IiE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IiE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTypedArray_IiE_SetValue_s2(self, args);
    case 4:
      return PyvtkTypedArray_IiE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_IiE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<int> *op = static_cast<vtkTypedArray<int> *>(vp);

  unsigned long long temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->SetValueN(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTypedArray_IiE_Methods[] = {
  {"IsTypeOf", PyvtkTypedArray_IiE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTypedArray_IiE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTypedArray_IiE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTypedArray_IiE\nC++: static vtkTypedArray<int> *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTypedArray_IiE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTypedArray_IiE\nC++: vtkTypedArray<int> *NewInstance()\n\n"},
  {"GetVariantValue", PyvtkTypedArray_IiE_GetVariantValue, METH_VARARGS,
   "V.GetVariantValue(vtkArrayCoordinates) -> vtkVariant\nC++: vtkVariant GetVariantValue(\n    const vtkArrayCoordinates &coordinates) override;\nV.GetVariantValue(int) -> vtkVariant\nC++: vtkVariant GetVariantValue(CoordinateT i)\nV.GetVariantValue(int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(CoordinateT i, CoordinateT j)\nV.GetVariantValue(int, int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(CoordinateT i, CoordinateT j,\n    CoordinateT k)\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetVariantValueN", PyvtkTypedArray_IiE_GetVariantValueN, METH_VARARGS,
   "V.GetVariantValueN(int) -> vtkVariant\nC++: vtkVariant GetVariantValueN(const SizeT n) override;\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetVariantValue", PyvtkTypedArray_IiE_SetVariantValue, METH_VARARGS,
   "V.SetVariantValue(vtkArrayCoordinates, vtkVariant)\nC++: void SetVariantValue(const vtkArrayCoordinates &coordinates,\n    const vtkVariant &value) override;\nV.SetVariantValue(int, vtkVariant)\nC++: void SetVariantValue(CoordinateT i, const vtkVariant &value)\nV.SetVariantValue(int, int, vtkVariant)\nC++: void SetVariantValue(CoordinateT i, CoordinateT j,\n    const vtkVariant &value)\nV.SetVariantValue(int, int, int, vtkVariant)\nC++: void SetVariantValue(CoordinateT i, CoordinateT j,\n    CoordinateT k, const vtkVariant &value)\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetVariantValueN", PyvtkTypedArray_IiE_SetVariantValueN, METH_VARARGS,
   "V.SetVariantValueN(int, vtkVariant)\nC++: void SetVariantValueN(const SizeT n, const vtkVariant &value)\n     override;\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"CopyValue", PyvtkTypedArray_IiE_CopyValue, METH_VARARGS,
   "V.CopyValue(vtkArray, vtkArrayCoordinates, vtkArrayCoordinates)\nC++: void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const vtkArrayCoordinates &target_coordinates) override;\nV.CopyValue(vtkArray, int, vtkArrayCoordinates)\nC++: void CopyValue(vtkArray *source, const SizeT source_index,\n    const vtkArrayCoordinates &target_coordinates) override;\nV.CopyValue(vtkArray, vtkArrayCoordinates, int)\nC++: void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const SizeT target_index) override;\n\nOverwrites a value with a value retrieved from another array. \nBoth arrays must store the same data types.\n"},
  {"GetValue", PyvtkTypedArray_IiE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> int\nC++: virtual const int &GetValue(CoordinateT i)\nV.GetValue(int, int) -> int\nC++: virtual const int &GetValue(CoordinateT i, CoordinateT j)\nV.GetValue(int, int, int) -> int\nC++: virtual const int &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> int\nC++: virtual const int &GetValue(\n    const vtkArrayCoordinates &coordinates)\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetValueN", PyvtkTypedArray_IiE_GetValueN, METH_VARARGS,
   "V.GetValueN(int) -> int\nC++: virtual const int &GetValueN(const SizeT n)\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetValue", PyvtkTypedArray_IiE_SetValue, METH_VARARGS,
   "V.SetValue(int, int)\nC++: virtual void SetValue(CoordinateT i, const int &value)\nV.SetValue(int, int, int)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    const int &value)\nV.SetValue(int, int, int, int)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k, const int &value)\nV.SetValue(vtkArrayCoordinates, int)\nC++: virtual void SetValue(const vtkArrayCoordinates &coordinates,\n     const int &value)\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetValueN", PyvtkTypedArray_IiE_SetValueN, METH_VARARGS,
   "V.SetValueN(int, int)\nC++: virtual void SetValueN(const SizeT n, const int &value)\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTypedArray_IiE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkTypedArray_IiE", // tp_name
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
  PyvtkTypedArray_IiE_Doc, // tp_doc
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

PyObject *PyvtkTypedArray_IiE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTypedArray_IiE_Type, PyvtkTypedArray_IiE_Methods,
    typeid(vtkTypedArray<int>).name(),
 nullptr);

  PyTypeObject *pytype = &PyvtkTypedArray_IiE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkArray_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTypedArray_IjE_ClassNew(); }

#ifndef DECLARED_PyvtkArray_ClassNew
extern "C" { PyObject *PyvtkArray_ClassNew(); }
#define DECLARED_PyvtkArray_ClassNew
#endif

static const char *PyvtkTypedArray_IjE_Doc =
  "vtkTypedArray<unsigned int> - Provides a type-specific interface to\nN-way arrays\n\n"
  "Superclass: vtkArray\n\n"
  "vtkTypedArray provides an interface for retrieving and updating data\n"
  "in an arbitrary-dimension array.  It derives from vtkArray and is\n"
  "templated on the type of value stored in the array.\n\n"
  "Methods are provided for retrieving and updating array values based\n"
  "either on their array coordinates, or on a 1-dimensional integer\n"
  "index.  The latter approach can be used to iterate over the values in\n"
  "an array in arbitrary order, which is useful when writing filters\n"
  "that operate efficiently on sparse arrays and arrays that can have\n"
  "any number of dimensions.\n\n"
  "Special overloaded methods provide simple access for arrays with one,\n"
  "two, or three dimensions.\n\n"
  "@sa\n"
  "vtkArray, vtkDenseArray, vtkSparseArray\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";


static PyObject *
PyvtkTypedArray_IjE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTypedArray<unsigned int>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_IjE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned int> *op = static_cast<vtkTypedArray<unsigned int> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTypedArray<unsigned int>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_IjE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTypedArray<unsigned int> *tempr = vtkTypedArray<unsigned int>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_IjE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned int> *op = static_cast<vtkTypedArray<unsigned int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTypedArray<unsigned int> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTypedArray<unsigned int>::NewInstance());

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
PyvtkTypedArray_IjE_GetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned int> *op = static_cast<vtkTypedArray<unsigned int> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(*temp0) :
      op->vtkTypedArray<unsigned int>::GetVariantValue(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkTypedArray_IjE_GetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned int> *op = static_cast<vtkTypedArray<unsigned int> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0) :
      op->vtkTypedArray<unsigned int>::GetVariantValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IjE_GetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned int> *op = static_cast<vtkTypedArray<unsigned int> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1) :
      op->vtkTypedArray<unsigned int>::GetVariantValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IjE_GetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned int> *op = static_cast<vtkTypedArray<unsigned int> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1, temp2) :
      op->vtkTypedArray<unsigned int>::GetVariantValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}

static PyMethodDef PyvtkTypedArray_IjE_GetVariantValue_Methods[] = {
  {nullptr, PyvtkTypedArray_IjE_GetVariantValue_s1, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, PyvtkTypedArray_IjE_GetVariantValue_s2, METH_VARARGS,
   "@k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_IjE_GetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IjE_GetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkTypedArray_IjE_GetVariantValue_s3(self, args);
    case 3:
      return PyvtkTypedArray_IjE_GetVariantValue_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetVariantValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_IjE_GetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned int> *op = static_cast<vtkTypedArray<unsigned int> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValueN(temp0) :
      op->vtkTypedArray<unsigned int>::GetVariantValueN(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_IjE_SetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned int> *op = static_cast<vtkTypedArray<unsigned int> *>(vp);

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
      op->SetVariantValue(*temp0, *temp1);
    }
    else
    {
      op->vtkTypedArray<unsigned int>::SetVariantValue(*temp0, *temp1);
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

static PyObject *
PyvtkTypedArray_IjE_SetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned int> *op = static_cast<vtkTypedArray<unsigned int> *>(vp);

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
      op->SetVariantValue(temp0, *temp1);
    }
    else
    {
      op->vtkTypedArray<unsigned int>::SetVariantValue(temp0, *temp1);
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
PyvtkTypedArray_IjE_SetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned int> *op = static_cast<vtkTypedArray<unsigned int> *>(vp);

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
      op->SetVariantValue(temp0, temp1, *temp2);
    }
    else
    {
      op->vtkTypedArray<unsigned int>::SetVariantValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_IjE_SetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned int> *op = static_cast<vtkTypedArray<unsigned int> *>(vp);

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
      op->SetVariantValue(temp0, temp1, temp2, *temp3);
    }
    else
    {
      op->vtkTypedArray<unsigned int>::SetVariantValue(temp0, temp1, temp2, *temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj3);

  return result;
}

static PyMethodDef PyvtkTypedArray_IjE_SetVariantValue_Methods[] = {
  {nullptr, PyvtkTypedArray_IjE_SetVariantValue_s1, METH_VARARGS,
   "@WW vtkArrayCoordinates vtkVariant"},
  {nullptr, PyvtkTypedArray_IjE_SetVariantValue_s2, METH_VARARGS,
   "@kW vtkVariant"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_IjE_SetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IjE_SetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTypedArray_IjE_SetVariantValue_s3(self, args);
    case 4:
      return PyvtkTypedArray_IjE_SetVariantValue_s4(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetVariantValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_IjE_SetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned int> *op = static_cast<vtkTypedArray<unsigned int> *>(vp);

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
      op->SetVariantValueN(temp0, *temp1);
    }
    else
    {
      op->vtkTypedArray<unsigned int>::SetVariantValueN(temp0, *temp1);
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
PyvtkTypedArray_IjE_CopyValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned int> *op = static_cast<vtkTypedArray<unsigned int> *>(vp);

  vtkArray *temp0 = nullptr;
  vtkArrayCoordinates *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  vtkArrayCoordinates *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
  {
    if (ap.IsBound())
    {
      op->CopyValue(temp0, *temp1, *temp2);
    }
    else
    {
      op->vtkTypedArray<unsigned int>::CopyValue(temp0, *temp1, *temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);
  Py_XDECREF(pobj2);

  return result;
}

static PyObject *
PyvtkTypedArray_IjE_CopyValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned int> *op = static_cast<vtkTypedArray<unsigned int> *>(vp);

  vtkArray *temp0 = nullptr;
  unsigned long long temp1;
  vtkArrayCoordinates *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetValue(temp1) &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
  {
    if (ap.IsBound())
    {
      op->CopyValue(temp0, temp1, *temp2);
    }
    else
    {
      op->vtkTypedArray<unsigned int>::CopyValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_IjE_CopyValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned int> *op = static_cast<vtkTypedArray<unsigned int> *>(vp);

  vtkArray *temp0 = nullptr;
  vtkArrayCoordinates *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  unsigned long long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->CopyValue(temp0, *temp1, temp2);
    }
    else
    {
      op->vtkTypedArray<unsigned int>::CopyValue(temp0, *temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkTypedArray_IjE_CopyValue_Methods[] = {
  {nullptr, PyvtkTypedArray_IjE_CopyValue_s1, METH_VARARGS,
   "@VWW *vtkArray vtkArrayCoordinates vtkArrayCoordinates"},
  {nullptr, PyvtkTypedArray_IjE_CopyValue_s2, METH_VARARGS,
   "@VKW *vtkArray vtkArrayCoordinates"},
  {nullptr, PyvtkTypedArray_IjE_CopyValue_s3, METH_VARARGS,
   "@VWK *vtkArray vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_IjE_CopyValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IjE_CopyValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "CopyValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_IjE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned int> *op = static_cast<vtkTypedArray<unsigned int> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const unsigned int *tempr = &op->GetValue(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IjE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned int> *op = static_cast<vtkTypedArray<unsigned int> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const unsigned int *tempr = &op->GetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IjE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned int> *op = static_cast<vtkTypedArray<unsigned int> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    const unsigned int *tempr = &op->GetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IjE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned int> *op = static_cast<vtkTypedArray<unsigned int> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    const unsigned int *tempr = &op->GetValue(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_IjE_GetValue_Methods[] = {
  {nullptr, PyvtkTypedArray_IjE_GetValue_s1, METH_VARARGS,
   "@k"},
  {nullptr, PyvtkTypedArray_IjE_GetValue_s4, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_IjE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IjE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkTypedArray_IjE_GetValue_s2(self, args);
    case 3:
      return PyvtkTypedArray_IjE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_IjE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned int> *op = static_cast<vtkTypedArray<unsigned int> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const unsigned int *tempr = &op->GetValueN(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_IjE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned int> *op = static_cast<vtkTypedArray<unsigned int> *>(vp);

  vtkIdType temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->SetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IjE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned int> *op = static_cast<vtkTypedArray<unsigned int> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  unsigned int temp2;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    op->SetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IjE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned int> *op = static_cast<vtkTypedArray<unsigned int> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  unsigned int temp3;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    op->SetValue(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IjE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned int> *op = static_cast<vtkTypedArray<unsigned int> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
  {
    op->SetValue(*temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_IjE_SetValue_Methods[] = {
  {nullptr, PyvtkTypedArray_IjE_SetValue_s1, METH_VARARGS,
   "@kI"},
  {nullptr, PyvtkTypedArray_IjE_SetValue_s4, METH_VARARGS,
   "@WI vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_IjE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IjE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTypedArray_IjE_SetValue_s2(self, args);
    case 4:
      return PyvtkTypedArray_IjE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_IjE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned int> *op = static_cast<vtkTypedArray<unsigned int> *>(vp);

  unsigned long long temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->SetValueN(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTypedArray_IjE_Methods[] = {
  {"IsTypeOf", PyvtkTypedArray_IjE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTypedArray_IjE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTypedArray_IjE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTypedArray_IjE\nC++: static vtkTypedArray<unsigned int> *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTypedArray_IjE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTypedArray_IjE\nC++: vtkTypedArray<unsigned int> *NewInstance()\n\n"},
  {"GetVariantValue", PyvtkTypedArray_IjE_GetVariantValue, METH_VARARGS,
   "V.GetVariantValue(vtkArrayCoordinates) -> vtkVariant\nC++: vtkVariant GetVariantValue(\n    const vtkArrayCoordinates &coordinates) override;\nV.GetVariantValue(int) -> vtkVariant\nC++: vtkVariant GetVariantValue(CoordinateT i)\nV.GetVariantValue(int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(CoordinateT i, CoordinateT j)\nV.GetVariantValue(int, int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(CoordinateT i, CoordinateT j,\n    CoordinateT k)\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetVariantValueN", PyvtkTypedArray_IjE_GetVariantValueN, METH_VARARGS,
   "V.GetVariantValueN(int) -> vtkVariant\nC++: vtkVariant GetVariantValueN(const SizeT n) override;\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetVariantValue", PyvtkTypedArray_IjE_SetVariantValue, METH_VARARGS,
   "V.SetVariantValue(vtkArrayCoordinates, vtkVariant)\nC++: void SetVariantValue(const vtkArrayCoordinates &coordinates,\n    const vtkVariant &value) override;\nV.SetVariantValue(int, vtkVariant)\nC++: void SetVariantValue(CoordinateT i, const vtkVariant &value)\nV.SetVariantValue(int, int, vtkVariant)\nC++: void SetVariantValue(CoordinateT i, CoordinateT j,\n    const vtkVariant &value)\nV.SetVariantValue(int, int, int, vtkVariant)\nC++: void SetVariantValue(CoordinateT i, CoordinateT j,\n    CoordinateT k, const vtkVariant &value)\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetVariantValueN", PyvtkTypedArray_IjE_SetVariantValueN, METH_VARARGS,
   "V.SetVariantValueN(int, vtkVariant)\nC++: void SetVariantValueN(const SizeT n, const vtkVariant &value)\n     override;\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"CopyValue", PyvtkTypedArray_IjE_CopyValue, METH_VARARGS,
   "V.CopyValue(vtkArray, vtkArrayCoordinates, vtkArrayCoordinates)\nC++: void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const vtkArrayCoordinates &target_coordinates) override;\nV.CopyValue(vtkArray, int, vtkArrayCoordinates)\nC++: void CopyValue(vtkArray *source, const SizeT source_index,\n    const vtkArrayCoordinates &target_coordinates) override;\nV.CopyValue(vtkArray, vtkArrayCoordinates, int)\nC++: void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const SizeT target_index) override;\n\nOverwrites a value with a value retrieved from another array. \nBoth arrays must store the same data types.\n"},
  {"GetValue", PyvtkTypedArray_IjE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> int\nC++: virtual const unsigned int &GetValue(CoordinateT i)\nV.GetValue(int, int) -> int\nC++: virtual const unsigned int &GetValue(CoordinateT i,\n    CoordinateT j)\nV.GetValue(int, int, int) -> int\nC++: virtual const unsigned int &GetValue(CoordinateT i,\n    CoordinateT j, CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> int\nC++: virtual const unsigned int &GetValue(\n    const vtkArrayCoordinates &coordinates)\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetValueN", PyvtkTypedArray_IjE_GetValueN, METH_VARARGS,
   "V.GetValueN(int) -> int\nC++: virtual const unsigned int &GetValueN(const SizeT n)\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetValue", PyvtkTypedArray_IjE_SetValue, METH_VARARGS,
   "V.SetValue(int, int)\nC++: virtual void SetValue(CoordinateT i,\n    const unsigned int &value)\nV.SetValue(int, int, int)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    const unsigned int &value)\nV.SetValue(int, int, int, int)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k, const unsigned int &value)\nV.SetValue(vtkArrayCoordinates, int)\nC++: virtual void SetValue(const vtkArrayCoordinates &coordinates,\n     const unsigned int &value)\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetValueN", PyvtkTypedArray_IjE_SetValueN, METH_VARARGS,
   "V.SetValueN(int, int)\nC++: virtual void SetValueN(const SizeT n,\n    const unsigned int &value)\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTypedArray_IjE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkTypedArray_IjE", // tp_name
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
  PyvtkTypedArray_IjE_Doc, // tp_doc
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

PyObject *PyvtkTypedArray_IjE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTypedArray_IjE_Type, PyvtkTypedArray_IjE_Methods,
    typeid(vtkTypedArray<unsigned int>).name(),
 nullptr);

  PyTypeObject *pytype = &PyvtkTypedArray_IjE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkArray_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTypedArray_IlE_ClassNew(); }

#ifndef DECLARED_PyvtkArray_ClassNew
extern "C" { PyObject *PyvtkArray_ClassNew(); }
#define DECLARED_PyvtkArray_ClassNew
#endif

static const char *PyvtkTypedArray_IlE_Doc =
  "vtkTypedArray- Provides a type-specific interface to N-way arrays\n\n"
  "Superclass: vtkArray\n\n"
  "vtkTypedArray provides an interface for retrieving and updating data\n"
  "in an arbitrary-dimension array.  It derives from vtkArray and is\n"
  "templated on the type of value stored in the array.\n\n"
  "Methods are provided for retrieving and updating array values based\n"
  "either on their array coordinates, or on a 1-dimensional integer\n"
  "index.  The latter approach can be used to iterate over the values in\n"
  "an array in arbitrary order, which is useful when writing filters\n"
  "that operate efficiently on sparse arrays and arrays that can have\n"
  "any number of dimensions.\n\n"
  "Special overloaded methods provide simple access for arrays with one,\n"
  "two, or three dimensions.\n\n"
  "@sa\n"
  "vtkArray, vtkDenseArray, vtkSparseArray\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";


static PyObject *
PyvtkTypedArray_IlE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTypedArray<long>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_IlE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long> *op = static_cast<vtkTypedArray<long> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTypedArray<long>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_IlE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTypedArray<long> *tempr = vtkTypedArray<long>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_IlE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long> *op = static_cast<vtkTypedArray<long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTypedArray<long> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTypedArray<long>::NewInstance());

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
PyvtkTypedArray_IlE_GetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long> *op = static_cast<vtkTypedArray<long> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(*temp0) :
      op->vtkTypedArray<long>::GetVariantValue(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkTypedArray_IlE_GetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long> *op = static_cast<vtkTypedArray<long> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0) :
      op->vtkTypedArray<long>::GetVariantValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IlE_GetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long> *op = static_cast<vtkTypedArray<long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1) :
      op->vtkTypedArray<long>::GetVariantValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IlE_GetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long> *op = static_cast<vtkTypedArray<long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1, temp2) :
      op->vtkTypedArray<long>::GetVariantValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}

static PyMethodDef PyvtkTypedArray_IlE_GetVariantValue_Methods[] = {
  {nullptr, PyvtkTypedArray_IlE_GetVariantValue_s1, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, PyvtkTypedArray_IlE_GetVariantValue_s2, METH_VARARGS,
   "@k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_IlE_GetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IlE_GetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkTypedArray_IlE_GetVariantValue_s3(self, args);
    case 3:
      return PyvtkTypedArray_IlE_GetVariantValue_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetVariantValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_IlE_GetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long> *op = static_cast<vtkTypedArray<long> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValueN(temp0) :
      op->vtkTypedArray<long>::GetVariantValueN(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_IlE_SetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long> *op = static_cast<vtkTypedArray<long> *>(vp);

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
      op->SetVariantValue(*temp0, *temp1);
    }
    else
    {
      op->vtkTypedArray<long>::SetVariantValue(*temp0, *temp1);
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

static PyObject *
PyvtkTypedArray_IlE_SetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long> *op = static_cast<vtkTypedArray<long> *>(vp);

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
      op->SetVariantValue(temp0, *temp1);
    }
    else
    {
      op->vtkTypedArray<long>::SetVariantValue(temp0, *temp1);
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
PyvtkTypedArray_IlE_SetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long> *op = static_cast<vtkTypedArray<long> *>(vp);

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
      op->SetVariantValue(temp0, temp1, *temp2);
    }
    else
    {
      op->vtkTypedArray<long>::SetVariantValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_IlE_SetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long> *op = static_cast<vtkTypedArray<long> *>(vp);

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
      op->SetVariantValue(temp0, temp1, temp2, *temp3);
    }
    else
    {
      op->vtkTypedArray<long>::SetVariantValue(temp0, temp1, temp2, *temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj3);

  return result;
}

static PyMethodDef PyvtkTypedArray_IlE_SetVariantValue_Methods[] = {
  {nullptr, PyvtkTypedArray_IlE_SetVariantValue_s1, METH_VARARGS,
   "@WW vtkArrayCoordinates vtkVariant"},
  {nullptr, PyvtkTypedArray_IlE_SetVariantValue_s2, METH_VARARGS,
   "@kW vtkVariant"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_IlE_SetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IlE_SetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTypedArray_IlE_SetVariantValue_s3(self, args);
    case 4:
      return PyvtkTypedArray_IlE_SetVariantValue_s4(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetVariantValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_IlE_SetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long> *op = static_cast<vtkTypedArray<long> *>(vp);

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
      op->SetVariantValueN(temp0, *temp1);
    }
    else
    {
      op->vtkTypedArray<long>::SetVariantValueN(temp0, *temp1);
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
PyvtkTypedArray_IlE_CopyValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long> *op = static_cast<vtkTypedArray<long> *>(vp);

  vtkArray *temp0 = nullptr;
  vtkArrayCoordinates *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  vtkArrayCoordinates *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
  {
    if (ap.IsBound())
    {
      op->CopyValue(temp0, *temp1, *temp2);
    }
    else
    {
      op->vtkTypedArray<long>::CopyValue(temp0, *temp1, *temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);
  Py_XDECREF(pobj2);

  return result;
}

static PyObject *
PyvtkTypedArray_IlE_CopyValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long> *op = static_cast<vtkTypedArray<long> *>(vp);

  vtkArray *temp0 = nullptr;
  unsigned long long temp1;
  vtkArrayCoordinates *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetValue(temp1) &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
  {
    if (ap.IsBound())
    {
      op->CopyValue(temp0, temp1, *temp2);
    }
    else
    {
      op->vtkTypedArray<long>::CopyValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_IlE_CopyValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long> *op = static_cast<vtkTypedArray<long> *>(vp);

  vtkArray *temp0 = nullptr;
  vtkArrayCoordinates *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  unsigned long long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->CopyValue(temp0, *temp1, temp2);
    }
    else
    {
      op->vtkTypedArray<long>::CopyValue(temp0, *temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkTypedArray_IlE_CopyValue_Methods[] = {
  {nullptr, PyvtkTypedArray_IlE_CopyValue_s1, METH_VARARGS,
   "@VWW *vtkArray vtkArrayCoordinates vtkArrayCoordinates"},
  {nullptr, PyvtkTypedArray_IlE_CopyValue_s2, METH_VARARGS,
   "@VKW *vtkArray vtkArrayCoordinates"},
  {nullptr, PyvtkTypedArray_IlE_CopyValue_s3, METH_VARARGS,
   "@VWK *vtkArray vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_IlE_CopyValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IlE_CopyValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "CopyValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_IlE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long> *op = static_cast<vtkTypedArray<long> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const long *tempr = &op->GetValue(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IlE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long> *op = static_cast<vtkTypedArray<long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const long *tempr = &op->GetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IlE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long> *op = static_cast<vtkTypedArray<long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    const long *tempr = &op->GetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IlE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long> *op = static_cast<vtkTypedArray<long> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    const long *tempr = &op->GetValue(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_IlE_GetValue_Methods[] = {
  {nullptr, PyvtkTypedArray_IlE_GetValue_s1, METH_VARARGS,
   "@k"},
  {nullptr, PyvtkTypedArray_IlE_GetValue_s4, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_IlE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IlE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkTypedArray_IlE_GetValue_s2(self, args);
    case 3:
      return PyvtkTypedArray_IlE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_IlE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long> *op = static_cast<vtkTypedArray<long> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const long *tempr = &op->GetValueN(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_IlE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long> *op = static_cast<vtkTypedArray<long> *>(vp);

  vtkIdType temp0;
  long temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->SetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IlE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long> *op = static_cast<vtkTypedArray<long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  long temp2;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    op->SetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IlE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long> *op = static_cast<vtkTypedArray<long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  long temp3;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    op->SetValue(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IlE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long> *op = static_cast<vtkTypedArray<long> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  long temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
  {
    op->SetValue(*temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_IlE_SetValue_Methods[] = {
  {nullptr, PyvtkTypedArray_IlE_SetValue_s1, METH_VARARGS,
   "@kl"},
  {nullptr, PyvtkTypedArray_IlE_SetValue_s4, METH_VARARGS,
   "@Wl vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_IlE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IlE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTypedArray_IlE_SetValue_s2(self, args);
    case 4:
      return PyvtkTypedArray_IlE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_IlE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long> *op = static_cast<vtkTypedArray<long> *>(vp);

  unsigned long long temp0;
  long temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->SetValueN(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTypedArray_IlE_Methods[] = {
  {"IsTypeOf", PyvtkTypedArray_IlE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTypedArray_IlE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTypedArray_IlE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTypedArray_IlE\nC++: static vtkTypedArray<long> *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTypedArray_IlE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTypedArray_IlE\nC++: vtkTypedArray<long> *NewInstance()\n\n"},
  {"GetVariantValue", PyvtkTypedArray_IlE_GetVariantValue, METH_VARARGS,
   "V.GetVariantValue(vtkArrayCoordinates) -> vtkVariant\nC++: vtkVariant GetVariantValue(\n    const vtkArrayCoordinates &coordinates) override;\nV.GetVariantValue(int) -> vtkVariant\nC++: vtkVariant GetVariantValue(CoordinateT i)\nV.GetVariantValue(int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(CoordinateT i, CoordinateT j)\nV.GetVariantValue(int, int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(CoordinateT i, CoordinateT j,\n    CoordinateT k)\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetVariantValueN", PyvtkTypedArray_IlE_GetVariantValueN, METH_VARARGS,
   "V.GetVariantValueN(int) -> vtkVariant\nC++: vtkVariant GetVariantValueN(const SizeT n) override;\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetVariantValue", PyvtkTypedArray_IlE_SetVariantValue, METH_VARARGS,
   "V.SetVariantValue(vtkArrayCoordinates, vtkVariant)\nC++: void SetVariantValue(const vtkArrayCoordinates &coordinates,\n    const vtkVariant &value) override;\nV.SetVariantValue(int, vtkVariant)\nC++: void SetVariantValue(CoordinateT i, const vtkVariant &value)\nV.SetVariantValue(int, int, vtkVariant)\nC++: void SetVariantValue(CoordinateT i, CoordinateT j,\n    const vtkVariant &value)\nV.SetVariantValue(int, int, int, vtkVariant)\nC++: void SetVariantValue(CoordinateT i, CoordinateT j,\n    CoordinateT k, const vtkVariant &value)\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetVariantValueN", PyvtkTypedArray_IlE_SetVariantValueN, METH_VARARGS,
   "V.SetVariantValueN(int, vtkVariant)\nC++: void SetVariantValueN(const SizeT n, const vtkVariant &value)\n     override;\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"CopyValue", PyvtkTypedArray_IlE_CopyValue, METH_VARARGS,
   "V.CopyValue(vtkArray, vtkArrayCoordinates, vtkArrayCoordinates)\nC++: void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const vtkArrayCoordinates &target_coordinates) override;\nV.CopyValue(vtkArray, int, vtkArrayCoordinates)\nC++: void CopyValue(vtkArray *source, const SizeT source_index,\n    const vtkArrayCoordinates &target_coordinates) override;\nV.CopyValue(vtkArray, vtkArrayCoordinates, int)\nC++: void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const SizeT target_index) override;\n\nOverwrites a value with a value retrieved from another array. \nBoth arrays must store the same data types.\n"},
  {"GetValue", PyvtkTypedArray_IlE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> int\nC++: virtual const long &GetValue(CoordinateT i)\nV.GetValue(int, int) -> int\nC++: virtual const long &GetValue(CoordinateT i, CoordinateT j)\nV.GetValue(int, int, int) -> int\nC++: virtual const long &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> int\nC++: virtual const long &GetValue(\n    const vtkArrayCoordinates &coordinates)\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetValueN", PyvtkTypedArray_IlE_GetValueN, METH_VARARGS,
   "V.GetValueN(int) -> int\nC++: virtual const long &GetValueN(const SizeT n)\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetValue", PyvtkTypedArray_IlE_SetValue, METH_VARARGS,
   "V.SetValue(int, int)\nC++: virtual void SetValue(CoordinateT i, const long &value)\nV.SetValue(int, int, int)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    const long &value)\nV.SetValue(int, int, int, int)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k, const long &value)\nV.SetValue(vtkArrayCoordinates, int)\nC++: virtual void SetValue(const vtkArrayCoordinates &coordinates,\n     const long &value)\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetValueN", PyvtkTypedArray_IlE_SetValueN, METH_VARARGS,
   "V.SetValueN(int, int)\nC++: virtual void SetValueN(const SizeT n, const long &value)\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTypedArray_IlE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkTypedArray_IlE", // tp_name
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
  PyvtkTypedArray_IlE_Doc, // tp_doc
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

PyObject *PyvtkTypedArray_IlE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTypedArray_IlE_Type, PyvtkTypedArray_IlE_Methods,
    typeid(vtkTypedArray<long>).name(),
 nullptr);

  PyTypeObject *pytype = &PyvtkTypedArray_IlE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkArray_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTypedArray_ImE_ClassNew(); }

#ifndef DECLARED_PyvtkArray_ClassNew
extern "C" { PyObject *PyvtkArray_ClassNew(); }
#define DECLARED_PyvtkArray_ClassNew
#endif

static const char *PyvtkTypedArray_ImE_Doc =
  "vtkTypedArray<unsigned long> - Provides a type-specific interface to\nN-way arrays\n\n"
  "Superclass: vtkArray\n\n"
  "vtkTypedArray provides an interface for retrieving and updating data\n"
  "in an arbitrary-dimension array.  It derives from vtkArray and is\n"
  "templated on the type of value stored in the array.\n\n"
  "Methods are provided for retrieving and updating array values based\n"
  "either on their array coordinates, or on a 1-dimensional integer\n"
  "index.  The latter approach can be used to iterate over the values in\n"
  "an array in arbitrary order, which is useful when writing filters\n"
  "that operate efficiently on sparse arrays and arrays that can have\n"
  "any number of dimensions.\n\n"
  "Special overloaded methods provide simple access for arrays with one,\n"
  "two, or three dimensions.\n\n"
  "@sa\n"
  "vtkArray, vtkDenseArray, vtkSparseArray\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";


static PyObject *
PyvtkTypedArray_ImE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTypedArray<unsigned long>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_ImE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long> *op = static_cast<vtkTypedArray<unsigned long> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTypedArray<unsigned long>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_ImE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTypedArray<unsigned long> *tempr = vtkTypedArray<unsigned long>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_ImE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long> *op = static_cast<vtkTypedArray<unsigned long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTypedArray<unsigned long> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTypedArray<unsigned long>::NewInstance());

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
PyvtkTypedArray_ImE_GetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long> *op = static_cast<vtkTypedArray<unsigned long> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(*temp0) :
      op->vtkTypedArray<unsigned long>::GetVariantValue(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkTypedArray_ImE_GetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long> *op = static_cast<vtkTypedArray<unsigned long> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0) :
      op->vtkTypedArray<unsigned long>::GetVariantValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_ImE_GetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long> *op = static_cast<vtkTypedArray<unsigned long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1) :
      op->vtkTypedArray<unsigned long>::GetVariantValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_ImE_GetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long> *op = static_cast<vtkTypedArray<unsigned long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1, temp2) :
      op->vtkTypedArray<unsigned long>::GetVariantValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}

static PyMethodDef PyvtkTypedArray_ImE_GetVariantValue_Methods[] = {
  {nullptr, PyvtkTypedArray_ImE_GetVariantValue_s1, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, PyvtkTypedArray_ImE_GetVariantValue_s2, METH_VARARGS,
   "@k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_ImE_GetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_ImE_GetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkTypedArray_ImE_GetVariantValue_s3(self, args);
    case 3:
      return PyvtkTypedArray_ImE_GetVariantValue_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetVariantValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_ImE_GetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long> *op = static_cast<vtkTypedArray<unsigned long> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValueN(temp0) :
      op->vtkTypedArray<unsigned long>::GetVariantValueN(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_ImE_SetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long> *op = static_cast<vtkTypedArray<unsigned long> *>(vp);

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
      op->SetVariantValue(*temp0, *temp1);
    }
    else
    {
      op->vtkTypedArray<unsigned long>::SetVariantValue(*temp0, *temp1);
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

static PyObject *
PyvtkTypedArray_ImE_SetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long> *op = static_cast<vtkTypedArray<unsigned long> *>(vp);

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
      op->SetVariantValue(temp0, *temp1);
    }
    else
    {
      op->vtkTypedArray<unsigned long>::SetVariantValue(temp0, *temp1);
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
PyvtkTypedArray_ImE_SetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long> *op = static_cast<vtkTypedArray<unsigned long> *>(vp);

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
      op->SetVariantValue(temp0, temp1, *temp2);
    }
    else
    {
      op->vtkTypedArray<unsigned long>::SetVariantValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_ImE_SetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long> *op = static_cast<vtkTypedArray<unsigned long> *>(vp);

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
      op->SetVariantValue(temp0, temp1, temp2, *temp3);
    }
    else
    {
      op->vtkTypedArray<unsigned long>::SetVariantValue(temp0, temp1, temp2, *temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj3);

  return result;
}

static PyMethodDef PyvtkTypedArray_ImE_SetVariantValue_Methods[] = {
  {nullptr, PyvtkTypedArray_ImE_SetVariantValue_s1, METH_VARARGS,
   "@WW vtkArrayCoordinates vtkVariant"},
  {nullptr, PyvtkTypedArray_ImE_SetVariantValue_s2, METH_VARARGS,
   "@kW vtkVariant"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_ImE_SetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_ImE_SetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTypedArray_ImE_SetVariantValue_s3(self, args);
    case 4:
      return PyvtkTypedArray_ImE_SetVariantValue_s4(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetVariantValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_ImE_SetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long> *op = static_cast<vtkTypedArray<unsigned long> *>(vp);

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
      op->SetVariantValueN(temp0, *temp1);
    }
    else
    {
      op->vtkTypedArray<unsigned long>::SetVariantValueN(temp0, *temp1);
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
PyvtkTypedArray_ImE_CopyValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long> *op = static_cast<vtkTypedArray<unsigned long> *>(vp);

  vtkArray *temp0 = nullptr;
  vtkArrayCoordinates *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  vtkArrayCoordinates *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
  {
    if (ap.IsBound())
    {
      op->CopyValue(temp0, *temp1, *temp2);
    }
    else
    {
      op->vtkTypedArray<unsigned long>::CopyValue(temp0, *temp1, *temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);
  Py_XDECREF(pobj2);

  return result;
}

static PyObject *
PyvtkTypedArray_ImE_CopyValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long> *op = static_cast<vtkTypedArray<unsigned long> *>(vp);

  vtkArray *temp0 = nullptr;
  unsigned long long temp1;
  vtkArrayCoordinates *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetValue(temp1) &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
  {
    if (ap.IsBound())
    {
      op->CopyValue(temp0, temp1, *temp2);
    }
    else
    {
      op->vtkTypedArray<unsigned long>::CopyValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_ImE_CopyValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long> *op = static_cast<vtkTypedArray<unsigned long> *>(vp);

  vtkArray *temp0 = nullptr;
  vtkArrayCoordinates *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  unsigned long long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->CopyValue(temp0, *temp1, temp2);
    }
    else
    {
      op->vtkTypedArray<unsigned long>::CopyValue(temp0, *temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkTypedArray_ImE_CopyValue_Methods[] = {
  {nullptr, PyvtkTypedArray_ImE_CopyValue_s1, METH_VARARGS,
   "@VWW *vtkArray vtkArrayCoordinates vtkArrayCoordinates"},
  {nullptr, PyvtkTypedArray_ImE_CopyValue_s2, METH_VARARGS,
   "@VKW *vtkArray vtkArrayCoordinates"},
  {nullptr, PyvtkTypedArray_ImE_CopyValue_s3, METH_VARARGS,
   "@VWK *vtkArray vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_ImE_CopyValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_ImE_CopyValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "CopyValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_ImE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long> *op = static_cast<vtkTypedArray<unsigned long> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const unsigned long *tempr = &op->GetValue(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_ImE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long> *op = static_cast<vtkTypedArray<unsigned long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const unsigned long *tempr = &op->GetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_ImE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long> *op = static_cast<vtkTypedArray<unsigned long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    const unsigned long *tempr = &op->GetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_ImE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long> *op = static_cast<vtkTypedArray<unsigned long> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    const unsigned long *tempr = &op->GetValue(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_ImE_GetValue_Methods[] = {
  {nullptr, PyvtkTypedArray_ImE_GetValue_s1, METH_VARARGS,
   "@k"},
  {nullptr, PyvtkTypedArray_ImE_GetValue_s4, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_ImE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_ImE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkTypedArray_ImE_GetValue_s2(self, args);
    case 3:
      return PyvtkTypedArray_ImE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_ImE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long> *op = static_cast<vtkTypedArray<unsigned long> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const unsigned long *tempr = &op->GetValueN(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_ImE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long> *op = static_cast<vtkTypedArray<unsigned long> *>(vp);

  vtkIdType temp0;
  unsigned long temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->SetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_ImE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long> *op = static_cast<vtkTypedArray<unsigned long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  unsigned long temp2;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    op->SetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_ImE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long> *op = static_cast<vtkTypedArray<unsigned long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  unsigned long temp3;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    op->SetValue(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_ImE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long> *op = static_cast<vtkTypedArray<unsigned long> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  unsigned long temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
  {
    op->SetValue(*temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_ImE_SetValue_Methods[] = {
  {nullptr, PyvtkTypedArray_ImE_SetValue_s1, METH_VARARGS,
   "@kL"},
  {nullptr, PyvtkTypedArray_ImE_SetValue_s4, METH_VARARGS,
   "@WL vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_ImE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_ImE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTypedArray_ImE_SetValue_s2(self, args);
    case 4:
      return PyvtkTypedArray_ImE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_ImE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long> *op = static_cast<vtkTypedArray<unsigned long> *>(vp);

  unsigned long long temp0;
  unsigned long temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->SetValueN(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTypedArray_ImE_Methods[] = {
  {"IsTypeOf", PyvtkTypedArray_ImE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTypedArray_ImE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTypedArray_ImE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTypedArray_ImE\nC++: static vtkTypedArray<unsigned long> *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTypedArray_ImE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTypedArray_ImE\nC++: vtkTypedArray<unsigned long> *NewInstance()\n\n"},
  {"GetVariantValue", PyvtkTypedArray_ImE_GetVariantValue, METH_VARARGS,
   "V.GetVariantValue(vtkArrayCoordinates) -> vtkVariant\nC++: vtkVariant GetVariantValue(\n    const vtkArrayCoordinates &coordinates) override;\nV.GetVariantValue(int) -> vtkVariant\nC++: vtkVariant GetVariantValue(CoordinateT i)\nV.GetVariantValue(int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(CoordinateT i, CoordinateT j)\nV.GetVariantValue(int, int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(CoordinateT i, CoordinateT j,\n    CoordinateT k)\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetVariantValueN", PyvtkTypedArray_ImE_GetVariantValueN, METH_VARARGS,
   "V.GetVariantValueN(int) -> vtkVariant\nC++: vtkVariant GetVariantValueN(const SizeT n) override;\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetVariantValue", PyvtkTypedArray_ImE_SetVariantValue, METH_VARARGS,
   "V.SetVariantValue(vtkArrayCoordinates, vtkVariant)\nC++: void SetVariantValue(const vtkArrayCoordinates &coordinates,\n    const vtkVariant &value) override;\nV.SetVariantValue(int, vtkVariant)\nC++: void SetVariantValue(CoordinateT i, const vtkVariant &value)\nV.SetVariantValue(int, int, vtkVariant)\nC++: void SetVariantValue(CoordinateT i, CoordinateT j,\n    const vtkVariant &value)\nV.SetVariantValue(int, int, int, vtkVariant)\nC++: void SetVariantValue(CoordinateT i, CoordinateT j,\n    CoordinateT k, const vtkVariant &value)\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetVariantValueN", PyvtkTypedArray_ImE_SetVariantValueN, METH_VARARGS,
   "V.SetVariantValueN(int, vtkVariant)\nC++: void SetVariantValueN(const SizeT n, const vtkVariant &value)\n     override;\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"CopyValue", PyvtkTypedArray_ImE_CopyValue, METH_VARARGS,
   "V.CopyValue(vtkArray, vtkArrayCoordinates, vtkArrayCoordinates)\nC++: void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const vtkArrayCoordinates &target_coordinates) override;\nV.CopyValue(vtkArray, int, vtkArrayCoordinates)\nC++: void CopyValue(vtkArray *source, const SizeT source_index,\n    const vtkArrayCoordinates &target_coordinates) override;\nV.CopyValue(vtkArray, vtkArrayCoordinates, int)\nC++: void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const SizeT target_index) override;\n\nOverwrites a value with a value retrieved from another array. \nBoth arrays must store the same data types.\n"},
  {"GetValue", PyvtkTypedArray_ImE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> int\nC++: virtual const unsigned long &GetValue(CoordinateT i)\nV.GetValue(int, int) -> int\nC++: virtual const unsigned long &GetValue(CoordinateT i,\n    CoordinateT j)\nV.GetValue(int, int, int) -> int\nC++: virtual const unsigned long &GetValue(CoordinateT i,\n    CoordinateT j, CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> int\nC++: virtual const unsigned long &GetValue(\n    const vtkArrayCoordinates &coordinates)\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetValueN", PyvtkTypedArray_ImE_GetValueN, METH_VARARGS,
   "V.GetValueN(int) -> int\nC++: virtual const unsigned long &GetValueN(const SizeT n)\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetValue", PyvtkTypedArray_ImE_SetValue, METH_VARARGS,
   "V.SetValue(int, int)\nC++: virtual void SetValue(CoordinateT i,\n    const unsigned long &value)\nV.SetValue(int, int, int)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    const unsigned long &value)\nV.SetValue(int, int, int, int)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k, const unsigned long &value)\nV.SetValue(vtkArrayCoordinates, int)\nC++: virtual void SetValue(const vtkArrayCoordinates &coordinates,\n     const unsigned long &value)\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetValueN", PyvtkTypedArray_ImE_SetValueN, METH_VARARGS,
   "V.SetValueN(int, int)\nC++: virtual void SetValueN(const SizeT n,\n    const unsigned long &value)\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTypedArray_ImE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkTypedArray_ImE", // tp_name
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
  PyvtkTypedArray_ImE_Doc, // tp_doc
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

PyObject *PyvtkTypedArray_ImE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTypedArray_ImE_Type, PyvtkTypedArray_ImE_Methods,
    typeid(vtkTypedArray<unsigned long>).name(),
 nullptr);

  PyTypeObject *pytype = &PyvtkTypedArray_ImE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkArray_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTypedArray_IxE_ClassNew(); }

#ifndef DECLARED_PyvtkArray_ClassNew
extern "C" { PyObject *PyvtkArray_ClassNew(); }
#define DECLARED_PyvtkArray_ClassNew
#endif

static const char *PyvtkTypedArray_IxE_Doc =
  "vtkTypedArray<long long> - Provides a type-specific interface to\nN-way arrays\n\n"
  "Superclass: vtkArray\n\n"
  "vtkTypedArray provides an interface for retrieving and updating data\n"
  "in an arbitrary-dimension array.  It derives from vtkArray and is\n"
  "templated on the type of value stored in the array.\n\n"
  "Methods are provided for retrieving and updating array values based\n"
  "either on their array coordinates, or on a 1-dimensional integer\n"
  "index.  The latter approach can be used to iterate over the values in\n"
  "an array in arbitrary order, which is useful when writing filters\n"
  "that operate efficiently on sparse arrays and arrays that can have\n"
  "any number of dimensions.\n\n"
  "Special overloaded methods provide simple access for arrays with one,\n"
  "two, or three dimensions.\n\n"
  "@sa\n"
  "vtkArray, vtkDenseArray, vtkSparseArray\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";


static PyObject *
PyvtkTypedArray_IxE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTypedArray<long long>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_IxE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long long> *op = static_cast<vtkTypedArray<long long> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTypedArray<long long>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_IxE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTypedArray<long long> *tempr = vtkTypedArray<long long>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_IxE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long long> *op = static_cast<vtkTypedArray<long long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTypedArray<long long> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTypedArray<long long>::NewInstance());

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
PyvtkTypedArray_IxE_GetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long long> *op = static_cast<vtkTypedArray<long long> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(*temp0) :
      op->vtkTypedArray<long long>::GetVariantValue(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkTypedArray_IxE_GetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long long> *op = static_cast<vtkTypedArray<long long> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0) :
      op->vtkTypedArray<long long>::GetVariantValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IxE_GetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long long> *op = static_cast<vtkTypedArray<long long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1) :
      op->vtkTypedArray<long long>::GetVariantValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IxE_GetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long long> *op = static_cast<vtkTypedArray<long long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1, temp2) :
      op->vtkTypedArray<long long>::GetVariantValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}

static PyMethodDef PyvtkTypedArray_IxE_GetVariantValue_Methods[] = {
  {nullptr, PyvtkTypedArray_IxE_GetVariantValue_s1, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, PyvtkTypedArray_IxE_GetVariantValue_s2, METH_VARARGS,
   "@k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_IxE_GetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IxE_GetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkTypedArray_IxE_GetVariantValue_s3(self, args);
    case 3:
      return PyvtkTypedArray_IxE_GetVariantValue_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetVariantValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_IxE_GetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long long> *op = static_cast<vtkTypedArray<long long> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValueN(temp0) :
      op->vtkTypedArray<long long>::GetVariantValueN(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_IxE_SetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long long> *op = static_cast<vtkTypedArray<long long> *>(vp);

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
      op->SetVariantValue(*temp0, *temp1);
    }
    else
    {
      op->vtkTypedArray<long long>::SetVariantValue(*temp0, *temp1);
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

static PyObject *
PyvtkTypedArray_IxE_SetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long long> *op = static_cast<vtkTypedArray<long long> *>(vp);

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
      op->SetVariantValue(temp0, *temp1);
    }
    else
    {
      op->vtkTypedArray<long long>::SetVariantValue(temp0, *temp1);
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
PyvtkTypedArray_IxE_SetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long long> *op = static_cast<vtkTypedArray<long long> *>(vp);

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
      op->SetVariantValue(temp0, temp1, *temp2);
    }
    else
    {
      op->vtkTypedArray<long long>::SetVariantValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_IxE_SetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long long> *op = static_cast<vtkTypedArray<long long> *>(vp);

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
      op->SetVariantValue(temp0, temp1, temp2, *temp3);
    }
    else
    {
      op->vtkTypedArray<long long>::SetVariantValue(temp0, temp1, temp2, *temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj3);

  return result;
}

static PyMethodDef PyvtkTypedArray_IxE_SetVariantValue_Methods[] = {
  {nullptr, PyvtkTypedArray_IxE_SetVariantValue_s1, METH_VARARGS,
   "@WW vtkArrayCoordinates vtkVariant"},
  {nullptr, PyvtkTypedArray_IxE_SetVariantValue_s2, METH_VARARGS,
   "@kW vtkVariant"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_IxE_SetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IxE_SetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTypedArray_IxE_SetVariantValue_s3(self, args);
    case 4:
      return PyvtkTypedArray_IxE_SetVariantValue_s4(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetVariantValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_IxE_SetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long long> *op = static_cast<vtkTypedArray<long long> *>(vp);

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
      op->SetVariantValueN(temp0, *temp1);
    }
    else
    {
      op->vtkTypedArray<long long>::SetVariantValueN(temp0, *temp1);
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
PyvtkTypedArray_IxE_CopyValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long long> *op = static_cast<vtkTypedArray<long long> *>(vp);

  vtkArray *temp0 = nullptr;
  vtkArrayCoordinates *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  vtkArrayCoordinates *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
  {
    if (ap.IsBound())
    {
      op->CopyValue(temp0, *temp1, *temp2);
    }
    else
    {
      op->vtkTypedArray<long long>::CopyValue(temp0, *temp1, *temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);
  Py_XDECREF(pobj2);

  return result;
}

static PyObject *
PyvtkTypedArray_IxE_CopyValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long long> *op = static_cast<vtkTypedArray<long long> *>(vp);

  vtkArray *temp0 = nullptr;
  unsigned long long temp1;
  vtkArrayCoordinates *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetValue(temp1) &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
  {
    if (ap.IsBound())
    {
      op->CopyValue(temp0, temp1, *temp2);
    }
    else
    {
      op->vtkTypedArray<long long>::CopyValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_IxE_CopyValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long long> *op = static_cast<vtkTypedArray<long long> *>(vp);

  vtkArray *temp0 = nullptr;
  vtkArrayCoordinates *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  unsigned long long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->CopyValue(temp0, *temp1, temp2);
    }
    else
    {
      op->vtkTypedArray<long long>::CopyValue(temp0, *temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkTypedArray_IxE_CopyValue_Methods[] = {
  {nullptr, PyvtkTypedArray_IxE_CopyValue_s1, METH_VARARGS,
   "@VWW *vtkArray vtkArrayCoordinates vtkArrayCoordinates"},
  {nullptr, PyvtkTypedArray_IxE_CopyValue_s2, METH_VARARGS,
   "@VKW *vtkArray vtkArrayCoordinates"},
  {nullptr, PyvtkTypedArray_IxE_CopyValue_s3, METH_VARARGS,
   "@VWK *vtkArray vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_IxE_CopyValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IxE_CopyValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "CopyValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_IxE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long long> *op = static_cast<vtkTypedArray<long long> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const long long *tempr = &op->GetValue(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IxE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long long> *op = static_cast<vtkTypedArray<long long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const long long *tempr = &op->GetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IxE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long long> *op = static_cast<vtkTypedArray<long long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    const long long *tempr = &op->GetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IxE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long long> *op = static_cast<vtkTypedArray<long long> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    const long long *tempr = &op->GetValue(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_IxE_GetValue_Methods[] = {
  {nullptr, PyvtkTypedArray_IxE_GetValue_s1, METH_VARARGS,
   "@k"},
  {nullptr, PyvtkTypedArray_IxE_GetValue_s4, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_IxE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IxE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkTypedArray_IxE_GetValue_s2(self, args);
    case 3:
      return PyvtkTypedArray_IxE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_IxE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long long> *op = static_cast<vtkTypedArray<long long> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const long long *tempr = &op->GetValueN(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_IxE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long long> *op = static_cast<vtkTypedArray<long long> *>(vp);

  vtkIdType temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->SetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IxE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long long> *op = static_cast<vtkTypedArray<long long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  long long temp2;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    op->SetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IxE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long long> *op = static_cast<vtkTypedArray<long long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  long long temp3;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    op->SetValue(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IxE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long long> *op = static_cast<vtkTypedArray<long long> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  long long temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
  {
    op->SetValue(*temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_IxE_SetValue_Methods[] = {
  {nullptr, PyvtkTypedArray_IxE_SetValue_s1, METH_VARARGS,
   "@kk"},
  {nullptr, PyvtkTypedArray_IxE_SetValue_s4, METH_VARARGS,
   "@Wk vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_IxE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IxE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTypedArray_IxE_SetValue_s2(self, args);
    case 4:
      return PyvtkTypedArray_IxE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_IxE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<long long> *op = static_cast<vtkTypedArray<long long> *>(vp);

  unsigned long long temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->SetValueN(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTypedArray_IxE_Methods[] = {
  {"IsTypeOf", PyvtkTypedArray_IxE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTypedArray_IxE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTypedArray_IxE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTypedArray_IxE\nC++: static vtkTypedArray<long long> *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTypedArray_IxE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTypedArray_IxE\nC++: vtkTypedArray<long long> *NewInstance()\n\n"},
  {"GetVariantValue", PyvtkTypedArray_IxE_GetVariantValue, METH_VARARGS,
   "V.GetVariantValue(vtkArrayCoordinates) -> vtkVariant\nC++: vtkVariant GetVariantValue(\n    const vtkArrayCoordinates &coordinates) override;\nV.GetVariantValue(int) -> vtkVariant\nC++: vtkVariant GetVariantValue(CoordinateT i)\nV.GetVariantValue(int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(CoordinateT i, CoordinateT j)\nV.GetVariantValue(int, int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(CoordinateT i, CoordinateT j,\n    CoordinateT k)\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetVariantValueN", PyvtkTypedArray_IxE_GetVariantValueN, METH_VARARGS,
   "V.GetVariantValueN(int) -> vtkVariant\nC++: vtkVariant GetVariantValueN(const SizeT n) override;\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetVariantValue", PyvtkTypedArray_IxE_SetVariantValue, METH_VARARGS,
   "V.SetVariantValue(vtkArrayCoordinates, vtkVariant)\nC++: void SetVariantValue(const vtkArrayCoordinates &coordinates,\n    const vtkVariant &value) override;\nV.SetVariantValue(int, vtkVariant)\nC++: void SetVariantValue(CoordinateT i, const vtkVariant &value)\nV.SetVariantValue(int, int, vtkVariant)\nC++: void SetVariantValue(CoordinateT i, CoordinateT j,\n    const vtkVariant &value)\nV.SetVariantValue(int, int, int, vtkVariant)\nC++: void SetVariantValue(CoordinateT i, CoordinateT j,\n    CoordinateT k, const vtkVariant &value)\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetVariantValueN", PyvtkTypedArray_IxE_SetVariantValueN, METH_VARARGS,
   "V.SetVariantValueN(int, vtkVariant)\nC++: void SetVariantValueN(const SizeT n, const vtkVariant &value)\n     override;\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"CopyValue", PyvtkTypedArray_IxE_CopyValue, METH_VARARGS,
   "V.CopyValue(vtkArray, vtkArrayCoordinates, vtkArrayCoordinates)\nC++: void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const vtkArrayCoordinates &target_coordinates) override;\nV.CopyValue(vtkArray, int, vtkArrayCoordinates)\nC++: void CopyValue(vtkArray *source, const SizeT source_index,\n    const vtkArrayCoordinates &target_coordinates) override;\nV.CopyValue(vtkArray, vtkArrayCoordinates, int)\nC++: void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const SizeT target_index) override;\n\nOverwrites a value with a value retrieved from another array. \nBoth arrays must store the same data types.\n"},
  {"GetValue", PyvtkTypedArray_IxE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> int\nC++: virtual const long long &GetValue(CoordinateT i)\nV.GetValue(int, int) -> int\nC++: virtual const long long &GetValue(CoordinateT i,\n    CoordinateT j)\nV.GetValue(int, int, int) -> int\nC++: virtual const long long &GetValue(CoordinateT i,\n    CoordinateT j, CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> int\nC++: virtual const long long &GetValue(\n    const vtkArrayCoordinates &coordinates)\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetValueN", PyvtkTypedArray_IxE_GetValueN, METH_VARARGS,
   "V.GetValueN(int) -> int\nC++: virtual const long long &GetValueN(const SizeT n)\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetValue", PyvtkTypedArray_IxE_SetValue, METH_VARARGS,
   "V.SetValue(int, int)\nC++: virtual void SetValue(CoordinateT i, const long long &value)\nV.SetValue(int, int, int)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    const long long &value)\nV.SetValue(int, int, int, int)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k, const long long &value)\nV.SetValue(vtkArrayCoordinates, int)\nC++: virtual void SetValue(const vtkArrayCoordinates &coordinates,\n     const long long &value)\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetValueN", PyvtkTypedArray_IxE_SetValueN, METH_VARARGS,
   "V.SetValueN(int, int)\nC++: virtual void SetValueN(const SizeT n, const long long &value)\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTypedArray_IxE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkTypedArray_IxE", // tp_name
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
  PyvtkTypedArray_IxE_Doc, // tp_doc
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

PyObject *PyvtkTypedArray_IxE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTypedArray_IxE_Type, PyvtkTypedArray_IxE_Methods,
    typeid(vtkTypedArray<long long>).name(),
 nullptr);

  PyTypeObject *pytype = &PyvtkTypedArray_IxE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkArray_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTypedArray_IyE_ClassNew(); }

#ifndef DECLARED_PyvtkArray_ClassNew
extern "C" { PyObject *PyvtkArray_ClassNew(); }
#define DECLARED_PyvtkArray_ClassNew
#endif

static const char *PyvtkTypedArray_IyE_Doc =
  "vtkTypedArray<unsigned long long> - Provides a type-specific\ninterface to N-way arrays\n\n"
  "Superclass: vtkArray\n\n"
  "vtkTypedArray provides an interface for retrieving and updating data\n"
  "in an arbitrary-dimension array.  It derives from vtkArray and is\n"
  "templated on the type of value stored in the array.\n\n"
  "Methods are provided for retrieving and updating array values based\n"
  "either on their array coordinates, or on a 1-dimensional integer\n"
  "index.  The latter approach can be used to iterate over the values in\n"
  "an array in arbitrary order, which is useful when writing filters\n"
  "that operate efficiently on sparse arrays and arrays that can have\n"
  "any number of dimensions.\n\n"
  "Special overloaded methods provide simple access for arrays with one,\n"
  "two, or three dimensions.\n\n"
  "@sa\n"
  "vtkArray, vtkDenseArray, vtkSparseArray\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";


static PyObject *
PyvtkTypedArray_IyE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTypedArray<unsigned long long>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_IyE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long long> *op = static_cast<vtkTypedArray<unsigned long long> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTypedArray<unsigned long long>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_IyE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTypedArray<unsigned long long> *tempr = vtkTypedArray<unsigned long long>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_IyE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long long> *op = static_cast<vtkTypedArray<unsigned long long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTypedArray<unsigned long long> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTypedArray<unsigned long long>::NewInstance());

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
PyvtkTypedArray_IyE_GetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long long> *op = static_cast<vtkTypedArray<unsigned long long> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(*temp0) :
      op->vtkTypedArray<unsigned long long>::GetVariantValue(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkTypedArray_IyE_GetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long long> *op = static_cast<vtkTypedArray<unsigned long long> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0) :
      op->vtkTypedArray<unsigned long long>::GetVariantValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IyE_GetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long long> *op = static_cast<vtkTypedArray<unsigned long long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1) :
      op->vtkTypedArray<unsigned long long>::GetVariantValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IyE_GetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long long> *op = static_cast<vtkTypedArray<unsigned long long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1, temp2) :
      op->vtkTypedArray<unsigned long long>::GetVariantValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}

static PyMethodDef PyvtkTypedArray_IyE_GetVariantValue_Methods[] = {
  {nullptr, PyvtkTypedArray_IyE_GetVariantValue_s1, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, PyvtkTypedArray_IyE_GetVariantValue_s2, METH_VARARGS,
   "@k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_IyE_GetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IyE_GetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkTypedArray_IyE_GetVariantValue_s3(self, args);
    case 3:
      return PyvtkTypedArray_IyE_GetVariantValue_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetVariantValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_IyE_GetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long long> *op = static_cast<vtkTypedArray<unsigned long long> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValueN(temp0) :
      op->vtkTypedArray<unsigned long long>::GetVariantValueN(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_IyE_SetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long long> *op = static_cast<vtkTypedArray<unsigned long long> *>(vp);

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
      op->SetVariantValue(*temp0, *temp1);
    }
    else
    {
      op->vtkTypedArray<unsigned long long>::SetVariantValue(*temp0, *temp1);
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

static PyObject *
PyvtkTypedArray_IyE_SetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long long> *op = static_cast<vtkTypedArray<unsigned long long> *>(vp);

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
      op->SetVariantValue(temp0, *temp1);
    }
    else
    {
      op->vtkTypedArray<unsigned long long>::SetVariantValue(temp0, *temp1);
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
PyvtkTypedArray_IyE_SetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long long> *op = static_cast<vtkTypedArray<unsigned long long> *>(vp);

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
      op->SetVariantValue(temp0, temp1, *temp2);
    }
    else
    {
      op->vtkTypedArray<unsigned long long>::SetVariantValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_IyE_SetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long long> *op = static_cast<vtkTypedArray<unsigned long long> *>(vp);

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
      op->SetVariantValue(temp0, temp1, temp2, *temp3);
    }
    else
    {
      op->vtkTypedArray<unsigned long long>::SetVariantValue(temp0, temp1, temp2, *temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj3);

  return result;
}

static PyMethodDef PyvtkTypedArray_IyE_SetVariantValue_Methods[] = {
  {nullptr, PyvtkTypedArray_IyE_SetVariantValue_s1, METH_VARARGS,
   "@WW vtkArrayCoordinates vtkVariant"},
  {nullptr, PyvtkTypedArray_IyE_SetVariantValue_s2, METH_VARARGS,
   "@kW vtkVariant"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_IyE_SetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IyE_SetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTypedArray_IyE_SetVariantValue_s3(self, args);
    case 4:
      return PyvtkTypedArray_IyE_SetVariantValue_s4(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetVariantValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_IyE_SetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long long> *op = static_cast<vtkTypedArray<unsigned long long> *>(vp);

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
      op->SetVariantValueN(temp0, *temp1);
    }
    else
    {
      op->vtkTypedArray<unsigned long long>::SetVariantValueN(temp0, *temp1);
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
PyvtkTypedArray_IyE_CopyValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long long> *op = static_cast<vtkTypedArray<unsigned long long> *>(vp);

  vtkArray *temp0 = nullptr;
  vtkArrayCoordinates *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  vtkArrayCoordinates *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
  {
    if (ap.IsBound())
    {
      op->CopyValue(temp0, *temp1, *temp2);
    }
    else
    {
      op->vtkTypedArray<unsigned long long>::CopyValue(temp0, *temp1, *temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);
  Py_XDECREF(pobj2);

  return result;
}

static PyObject *
PyvtkTypedArray_IyE_CopyValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long long> *op = static_cast<vtkTypedArray<unsigned long long> *>(vp);

  vtkArray *temp0 = nullptr;
  unsigned long long temp1;
  vtkArrayCoordinates *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetValue(temp1) &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
  {
    if (ap.IsBound())
    {
      op->CopyValue(temp0, temp1, *temp2);
    }
    else
    {
      op->vtkTypedArray<unsigned long long>::CopyValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_IyE_CopyValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long long> *op = static_cast<vtkTypedArray<unsigned long long> *>(vp);

  vtkArray *temp0 = nullptr;
  vtkArrayCoordinates *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  unsigned long long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->CopyValue(temp0, *temp1, temp2);
    }
    else
    {
      op->vtkTypedArray<unsigned long long>::CopyValue(temp0, *temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkTypedArray_IyE_CopyValue_Methods[] = {
  {nullptr, PyvtkTypedArray_IyE_CopyValue_s1, METH_VARARGS,
   "@VWW *vtkArray vtkArrayCoordinates vtkArrayCoordinates"},
  {nullptr, PyvtkTypedArray_IyE_CopyValue_s2, METH_VARARGS,
   "@VKW *vtkArray vtkArrayCoordinates"},
  {nullptr, PyvtkTypedArray_IyE_CopyValue_s3, METH_VARARGS,
   "@VWK *vtkArray vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_IyE_CopyValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IyE_CopyValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "CopyValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_IyE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long long> *op = static_cast<vtkTypedArray<unsigned long long> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const unsigned long long *tempr = &op->GetValue(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IyE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long long> *op = static_cast<vtkTypedArray<unsigned long long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const unsigned long long *tempr = &op->GetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IyE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long long> *op = static_cast<vtkTypedArray<unsigned long long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    const unsigned long long *tempr = &op->GetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IyE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long long> *op = static_cast<vtkTypedArray<unsigned long long> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    const unsigned long long *tempr = &op->GetValue(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_IyE_GetValue_Methods[] = {
  {nullptr, PyvtkTypedArray_IyE_GetValue_s1, METH_VARARGS,
   "@k"},
  {nullptr, PyvtkTypedArray_IyE_GetValue_s4, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_IyE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IyE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkTypedArray_IyE_GetValue_s2(self, args);
    case 3:
      return PyvtkTypedArray_IyE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_IyE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long long> *op = static_cast<vtkTypedArray<unsigned long long> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const unsigned long long *tempr = &op->GetValueN(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_IyE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long long> *op = static_cast<vtkTypedArray<unsigned long long> *>(vp);

  vtkIdType temp0;
  unsigned long long temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->SetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IyE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long long> *op = static_cast<vtkTypedArray<unsigned long long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  unsigned long long temp2;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    op->SetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IyE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long long> *op = static_cast<vtkTypedArray<unsigned long long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  unsigned long long temp3;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    op->SetValue(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IyE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long long> *op = static_cast<vtkTypedArray<unsigned long long> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  unsigned long long temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
  {
    op->SetValue(*temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_IyE_SetValue_Methods[] = {
  {nullptr, PyvtkTypedArray_IyE_SetValue_s1, METH_VARARGS,
   "@kK"},
  {nullptr, PyvtkTypedArray_IyE_SetValue_s4, METH_VARARGS,
   "@WK vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_IyE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IyE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTypedArray_IyE_SetValue_s2(self, args);
    case 4:
      return PyvtkTypedArray_IyE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_IyE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<unsigned long long> *op = static_cast<vtkTypedArray<unsigned long long> *>(vp);

  unsigned long long temp0;
  unsigned long long temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->SetValueN(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTypedArray_IyE_Methods[] = {
  {"IsTypeOf", PyvtkTypedArray_IyE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTypedArray_IyE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTypedArray_IyE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTypedArray_IyE\nC++: static vtkTypedArray<unsigned long long> *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTypedArray_IyE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTypedArray_IyE\nC++: vtkTypedArray<unsigned long long> *NewInstance()\n\n"},
  {"GetVariantValue", PyvtkTypedArray_IyE_GetVariantValue, METH_VARARGS,
   "V.GetVariantValue(vtkArrayCoordinates) -> vtkVariant\nC++: vtkVariant GetVariantValue(\n    const vtkArrayCoordinates &coordinates) override;\nV.GetVariantValue(int) -> vtkVariant\nC++: vtkVariant GetVariantValue(CoordinateT i)\nV.GetVariantValue(int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(CoordinateT i, CoordinateT j)\nV.GetVariantValue(int, int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(CoordinateT i, CoordinateT j,\n    CoordinateT k)\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetVariantValueN", PyvtkTypedArray_IyE_GetVariantValueN, METH_VARARGS,
   "V.GetVariantValueN(int) -> vtkVariant\nC++: vtkVariant GetVariantValueN(const SizeT n) override;\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetVariantValue", PyvtkTypedArray_IyE_SetVariantValue, METH_VARARGS,
   "V.SetVariantValue(vtkArrayCoordinates, vtkVariant)\nC++: void SetVariantValue(const vtkArrayCoordinates &coordinates,\n    const vtkVariant &value) override;\nV.SetVariantValue(int, vtkVariant)\nC++: void SetVariantValue(CoordinateT i, const vtkVariant &value)\nV.SetVariantValue(int, int, vtkVariant)\nC++: void SetVariantValue(CoordinateT i, CoordinateT j,\n    const vtkVariant &value)\nV.SetVariantValue(int, int, int, vtkVariant)\nC++: void SetVariantValue(CoordinateT i, CoordinateT j,\n    CoordinateT k, const vtkVariant &value)\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetVariantValueN", PyvtkTypedArray_IyE_SetVariantValueN, METH_VARARGS,
   "V.SetVariantValueN(int, vtkVariant)\nC++: void SetVariantValueN(const SizeT n, const vtkVariant &value)\n     override;\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"CopyValue", PyvtkTypedArray_IyE_CopyValue, METH_VARARGS,
   "V.CopyValue(vtkArray, vtkArrayCoordinates, vtkArrayCoordinates)\nC++: void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const vtkArrayCoordinates &target_coordinates) override;\nV.CopyValue(vtkArray, int, vtkArrayCoordinates)\nC++: void CopyValue(vtkArray *source, const SizeT source_index,\n    const vtkArrayCoordinates &target_coordinates) override;\nV.CopyValue(vtkArray, vtkArrayCoordinates, int)\nC++: void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const SizeT target_index) override;\n\nOverwrites a value with a value retrieved from another array. \nBoth arrays must store the same data types.\n"},
  {"GetValue", PyvtkTypedArray_IyE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> int\nC++: virtual const unsigned long long &GetValue(CoordinateT i)\nV.GetValue(int, int) -> int\nC++: virtual const unsigned long long &GetValue(CoordinateT i,\n    CoordinateT j)\nV.GetValue(int, int, int) -> int\nC++: virtual const unsigned long long &GetValue(CoordinateT i,\n    CoordinateT j, CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> int\nC++: virtual const unsigned long long &GetValue(\n    const vtkArrayCoordinates &coordinates)\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetValueN", PyvtkTypedArray_IyE_GetValueN, METH_VARARGS,
   "V.GetValueN(int) -> int\nC++: virtual const unsigned long long &GetValueN(const SizeT n)\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetValue", PyvtkTypedArray_IyE_SetValue, METH_VARARGS,
   "V.SetValue(int, int)\nC++: virtual void SetValue(CoordinateT i,\n    const unsigned long long &value)\nV.SetValue(int, int, int)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    const unsigned long long &value)\nV.SetValue(int, int, int, int)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k, const unsigned long long &value)\nV.SetValue(vtkArrayCoordinates, int)\nC++: virtual void SetValue(const vtkArrayCoordinates &coordinates,\n     const unsigned long long &value)\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetValueN", PyvtkTypedArray_IyE_SetValueN, METH_VARARGS,
   "V.SetValueN(int, int)\nC++: virtual void SetValueN(const SizeT n,\n    const unsigned long long &value)\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTypedArray_IyE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkTypedArray_IyE", // tp_name
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
  PyvtkTypedArray_IyE_Doc, // tp_doc
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

PyObject *PyvtkTypedArray_IyE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTypedArray_IyE_Type, PyvtkTypedArray_IyE_Methods,
    typeid(vtkTypedArray<unsigned long long>).name(),
 nullptr);

  PyTypeObject *pytype = &PyvtkTypedArray_IyE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkArray_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTypedArray_IfE_ClassNew(); }

#ifndef DECLARED_PyvtkArray_ClassNew
extern "C" { PyObject *PyvtkArray_ClassNew(); }
#define DECLARED_PyvtkArray_ClassNew
#endif

static const char *PyvtkTypedArray_IfE_Doc =
  "vtkTypedArray- Provides a type-specific interface to N-way arrays\n\n"
  "Superclass: vtkArray\n\n"
  "vtkTypedArray provides an interface for retrieving and updating data\n"
  "in an arbitrary-dimension array.  It derives from vtkArray and is\n"
  "templated on the type of value stored in the array.\n\n"
  "Methods are provided for retrieving and updating array values based\n"
  "either on their array coordinates, or on a 1-dimensional integer\n"
  "index.  The latter approach can be used to iterate over the values in\n"
  "an array in arbitrary order, which is useful when writing filters\n"
  "that operate efficiently on sparse arrays and arrays that can have\n"
  "any number of dimensions.\n\n"
  "Special overloaded methods provide simple access for arrays with one,\n"
  "two, or three dimensions.\n\n"
  "@sa\n"
  "vtkArray, vtkDenseArray, vtkSparseArray\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";


static PyObject *
PyvtkTypedArray_IfE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTypedArray<float>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_IfE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<float> *op = static_cast<vtkTypedArray<float> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTypedArray<float>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_IfE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTypedArray<float> *tempr = vtkTypedArray<float>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_IfE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<float> *op = static_cast<vtkTypedArray<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTypedArray<float> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTypedArray<float>::NewInstance());

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
PyvtkTypedArray_IfE_GetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<float> *op = static_cast<vtkTypedArray<float> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(*temp0) :
      op->vtkTypedArray<float>::GetVariantValue(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkTypedArray_IfE_GetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<float> *op = static_cast<vtkTypedArray<float> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0) :
      op->vtkTypedArray<float>::GetVariantValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IfE_GetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<float> *op = static_cast<vtkTypedArray<float> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1) :
      op->vtkTypedArray<float>::GetVariantValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IfE_GetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<float> *op = static_cast<vtkTypedArray<float> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1, temp2) :
      op->vtkTypedArray<float>::GetVariantValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}

static PyMethodDef PyvtkTypedArray_IfE_GetVariantValue_Methods[] = {
  {nullptr, PyvtkTypedArray_IfE_GetVariantValue_s1, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, PyvtkTypedArray_IfE_GetVariantValue_s2, METH_VARARGS,
   "@k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_IfE_GetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IfE_GetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkTypedArray_IfE_GetVariantValue_s3(self, args);
    case 3:
      return PyvtkTypedArray_IfE_GetVariantValue_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetVariantValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_IfE_GetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<float> *op = static_cast<vtkTypedArray<float> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValueN(temp0) :
      op->vtkTypedArray<float>::GetVariantValueN(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_IfE_SetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<float> *op = static_cast<vtkTypedArray<float> *>(vp);

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
      op->SetVariantValue(*temp0, *temp1);
    }
    else
    {
      op->vtkTypedArray<float>::SetVariantValue(*temp0, *temp1);
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

static PyObject *
PyvtkTypedArray_IfE_SetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<float> *op = static_cast<vtkTypedArray<float> *>(vp);

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
      op->SetVariantValue(temp0, *temp1);
    }
    else
    {
      op->vtkTypedArray<float>::SetVariantValue(temp0, *temp1);
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
PyvtkTypedArray_IfE_SetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<float> *op = static_cast<vtkTypedArray<float> *>(vp);

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
      op->SetVariantValue(temp0, temp1, *temp2);
    }
    else
    {
      op->vtkTypedArray<float>::SetVariantValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_IfE_SetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<float> *op = static_cast<vtkTypedArray<float> *>(vp);

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
      op->SetVariantValue(temp0, temp1, temp2, *temp3);
    }
    else
    {
      op->vtkTypedArray<float>::SetVariantValue(temp0, temp1, temp2, *temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj3);

  return result;
}

static PyMethodDef PyvtkTypedArray_IfE_SetVariantValue_Methods[] = {
  {nullptr, PyvtkTypedArray_IfE_SetVariantValue_s1, METH_VARARGS,
   "@WW vtkArrayCoordinates vtkVariant"},
  {nullptr, PyvtkTypedArray_IfE_SetVariantValue_s2, METH_VARARGS,
   "@kW vtkVariant"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_IfE_SetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IfE_SetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTypedArray_IfE_SetVariantValue_s3(self, args);
    case 4:
      return PyvtkTypedArray_IfE_SetVariantValue_s4(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetVariantValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_IfE_SetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<float> *op = static_cast<vtkTypedArray<float> *>(vp);

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
      op->SetVariantValueN(temp0, *temp1);
    }
    else
    {
      op->vtkTypedArray<float>::SetVariantValueN(temp0, *temp1);
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
PyvtkTypedArray_IfE_CopyValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<float> *op = static_cast<vtkTypedArray<float> *>(vp);

  vtkArray *temp0 = nullptr;
  vtkArrayCoordinates *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  vtkArrayCoordinates *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
  {
    if (ap.IsBound())
    {
      op->CopyValue(temp0, *temp1, *temp2);
    }
    else
    {
      op->vtkTypedArray<float>::CopyValue(temp0, *temp1, *temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);
  Py_XDECREF(pobj2);

  return result;
}

static PyObject *
PyvtkTypedArray_IfE_CopyValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<float> *op = static_cast<vtkTypedArray<float> *>(vp);

  vtkArray *temp0 = nullptr;
  unsigned long long temp1;
  vtkArrayCoordinates *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetValue(temp1) &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
  {
    if (ap.IsBound())
    {
      op->CopyValue(temp0, temp1, *temp2);
    }
    else
    {
      op->vtkTypedArray<float>::CopyValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_IfE_CopyValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<float> *op = static_cast<vtkTypedArray<float> *>(vp);

  vtkArray *temp0 = nullptr;
  vtkArrayCoordinates *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  unsigned long long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->CopyValue(temp0, *temp1, temp2);
    }
    else
    {
      op->vtkTypedArray<float>::CopyValue(temp0, *temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkTypedArray_IfE_CopyValue_Methods[] = {
  {nullptr, PyvtkTypedArray_IfE_CopyValue_s1, METH_VARARGS,
   "@VWW *vtkArray vtkArrayCoordinates vtkArrayCoordinates"},
  {nullptr, PyvtkTypedArray_IfE_CopyValue_s2, METH_VARARGS,
   "@VKW *vtkArray vtkArrayCoordinates"},
  {nullptr, PyvtkTypedArray_IfE_CopyValue_s3, METH_VARARGS,
   "@VWK *vtkArray vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_IfE_CopyValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IfE_CopyValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "CopyValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_IfE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<float> *op = static_cast<vtkTypedArray<float> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const float *tempr = &op->GetValue(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IfE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<float> *op = static_cast<vtkTypedArray<float> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const float *tempr = &op->GetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IfE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<float> *op = static_cast<vtkTypedArray<float> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    const float *tempr = &op->GetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IfE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<float> *op = static_cast<vtkTypedArray<float> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    const float *tempr = &op->GetValue(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_IfE_GetValue_Methods[] = {
  {nullptr, PyvtkTypedArray_IfE_GetValue_s1, METH_VARARGS,
   "@k"},
  {nullptr, PyvtkTypedArray_IfE_GetValue_s4, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_IfE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IfE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkTypedArray_IfE_GetValue_s2(self, args);
    case 3:
      return PyvtkTypedArray_IfE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_IfE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<float> *op = static_cast<vtkTypedArray<float> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const float *tempr = &op->GetValueN(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_IfE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<float> *op = static_cast<vtkTypedArray<float> *>(vp);

  vtkIdType temp0;
  float temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->SetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IfE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<float> *op = static_cast<vtkTypedArray<float> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  float temp2;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    op->SetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IfE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<float> *op = static_cast<vtkTypedArray<float> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  float temp3;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    op->SetValue(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IfE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<float> *op = static_cast<vtkTypedArray<float> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  float temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
  {
    op->SetValue(*temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_IfE_SetValue_Methods[] = {
  {nullptr, PyvtkTypedArray_IfE_SetValue_s1, METH_VARARGS,
   "@kf"},
  {nullptr, PyvtkTypedArray_IfE_SetValue_s4, METH_VARARGS,
   "@Wf vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_IfE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IfE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTypedArray_IfE_SetValue_s2(self, args);
    case 4:
      return PyvtkTypedArray_IfE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_IfE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<float> *op = static_cast<vtkTypedArray<float> *>(vp);

  unsigned long long temp0;
  float temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->SetValueN(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTypedArray_IfE_Methods[] = {
  {"IsTypeOf", PyvtkTypedArray_IfE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTypedArray_IfE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTypedArray_IfE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTypedArray_IfE\nC++: static vtkTypedArray<float> *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTypedArray_IfE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTypedArray_IfE\nC++: vtkTypedArray<float> *NewInstance()\n\n"},
  {"GetVariantValue", PyvtkTypedArray_IfE_GetVariantValue, METH_VARARGS,
   "V.GetVariantValue(vtkArrayCoordinates) -> vtkVariant\nC++: vtkVariant GetVariantValue(\n    const vtkArrayCoordinates &coordinates) override;\nV.GetVariantValue(int) -> vtkVariant\nC++: vtkVariant GetVariantValue(CoordinateT i)\nV.GetVariantValue(int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(CoordinateT i, CoordinateT j)\nV.GetVariantValue(int, int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(CoordinateT i, CoordinateT j,\n    CoordinateT k)\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetVariantValueN", PyvtkTypedArray_IfE_GetVariantValueN, METH_VARARGS,
   "V.GetVariantValueN(int) -> vtkVariant\nC++: vtkVariant GetVariantValueN(const SizeT n) override;\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetVariantValue", PyvtkTypedArray_IfE_SetVariantValue, METH_VARARGS,
   "V.SetVariantValue(vtkArrayCoordinates, vtkVariant)\nC++: void SetVariantValue(const vtkArrayCoordinates &coordinates,\n    const vtkVariant &value) override;\nV.SetVariantValue(int, vtkVariant)\nC++: void SetVariantValue(CoordinateT i, const vtkVariant &value)\nV.SetVariantValue(int, int, vtkVariant)\nC++: void SetVariantValue(CoordinateT i, CoordinateT j,\n    const vtkVariant &value)\nV.SetVariantValue(int, int, int, vtkVariant)\nC++: void SetVariantValue(CoordinateT i, CoordinateT j,\n    CoordinateT k, const vtkVariant &value)\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetVariantValueN", PyvtkTypedArray_IfE_SetVariantValueN, METH_VARARGS,
   "V.SetVariantValueN(int, vtkVariant)\nC++: void SetVariantValueN(const SizeT n, const vtkVariant &value)\n     override;\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"CopyValue", PyvtkTypedArray_IfE_CopyValue, METH_VARARGS,
   "V.CopyValue(vtkArray, vtkArrayCoordinates, vtkArrayCoordinates)\nC++: void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const vtkArrayCoordinates &target_coordinates) override;\nV.CopyValue(vtkArray, int, vtkArrayCoordinates)\nC++: void CopyValue(vtkArray *source, const SizeT source_index,\n    const vtkArrayCoordinates &target_coordinates) override;\nV.CopyValue(vtkArray, vtkArrayCoordinates, int)\nC++: void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const SizeT target_index) override;\n\nOverwrites a value with a value retrieved from another array. \nBoth arrays must store the same data types.\n"},
  {"GetValue", PyvtkTypedArray_IfE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> float\nC++: virtual const float &GetValue(CoordinateT i)\nV.GetValue(int, int) -> float\nC++: virtual const float &GetValue(CoordinateT i, CoordinateT j)\nV.GetValue(int, int, int) -> float\nC++: virtual const float &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> float\nC++: virtual const float &GetValue(\n    const vtkArrayCoordinates &coordinates)\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetValueN", PyvtkTypedArray_IfE_GetValueN, METH_VARARGS,
   "V.GetValueN(int) -> float\nC++: virtual const float &GetValueN(const SizeT n)\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetValue", PyvtkTypedArray_IfE_SetValue, METH_VARARGS,
   "V.SetValue(int, float)\nC++: virtual void SetValue(CoordinateT i, const float &value)\nV.SetValue(int, int, float)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    const float &value)\nV.SetValue(int, int, int, float)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k, const float &value)\nV.SetValue(vtkArrayCoordinates, float)\nC++: virtual void SetValue(const vtkArrayCoordinates &coordinates,\n     const float &value)\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetValueN", PyvtkTypedArray_IfE_SetValueN, METH_VARARGS,
   "V.SetValueN(int, float)\nC++: virtual void SetValueN(const SizeT n, const float &value)\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTypedArray_IfE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkTypedArray_IfE", // tp_name
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
  PyvtkTypedArray_IfE_Doc, // tp_doc
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

PyObject *PyvtkTypedArray_IfE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTypedArray_IfE_Type, PyvtkTypedArray_IfE_Methods,
    typeid(vtkTypedArray<float>).name(),
 nullptr);

  PyTypeObject *pytype = &PyvtkTypedArray_IfE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkArray_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTypedArray_IdE_ClassNew(); }

#ifndef DECLARED_PyvtkArray_ClassNew
extern "C" { PyObject *PyvtkArray_ClassNew(); }
#define DECLARED_PyvtkArray_ClassNew
#endif

static const char *PyvtkTypedArray_IdE_Doc =
  "vtkTypedArray- Provides a type-specific interface to N-way arrays\n\n"
  "Superclass: vtkArray\n\n"
  "vtkTypedArray provides an interface for retrieving and updating data\n"
  "in an arbitrary-dimension array.  It derives from vtkArray and is\n"
  "templated on the type of value stored in the array.\n\n"
  "Methods are provided for retrieving and updating array values based\n"
  "either on their array coordinates, or on a 1-dimensional integer\n"
  "index.  The latter approach can be used to iterate over the values in\n"
  "an array in arbitrary order, which is useful when writing filters\n"
  "that operate efficiently on sparse arrays and arrays that can have\n"
  "any number of dimensions.\n\n"
  "Special overloaded methods provide simple access for arrays with one,\n"
  "two, or three dimensions.\n\n"
  "@sa\n"
  "vtkArray, vtkDenseArray, vtkSparseArray\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";


static PyObject *
PyvtkTypedArray_IdE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTypedArray<double>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_IdE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<double> *op = static_cast<vtkTypedArray<double> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTypedArray<double>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_IdE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTypedArray<double> *tempr = vtkTypedArray<double>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_IdE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<double> *op = static_cast<vtkTypedArray<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTypedArray<double> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTypedArray<double>::NewInstance());

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
PyvtkTypedArray_IdE_GetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<double> *op = static_cast<vtkTypedArray<double> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(*temp0) :
      op->vtkTypedArray<double>::GetVariantValue(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkTypedArray_IdE_GetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<double> *op = static_cast<vtkTypedArray<double> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0) :
      op->vtkTypedArray<double>::GetVariantValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IdE_GetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<double> *op = static_cast<vtkTypedArray<double> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1) :
      op->vtkTypedArray<double>::GetVariantValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IdE_GetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<double> *op = static_cast<vtkTypedArray<double> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1, temp2) :
      op->vtkTypedArray<double>::GetVariantValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}

static PyMethodDef PyvtkTypedArray_IdE_GetVariantValue_Methods[] = {
  {nullptr, PyvtkTypedArray_IdE_GetVariantValue_s1, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, PyvtkTypedArray_IdE_GetVariantValue_s2, METH_VARARGS,
   "@k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_IdE_GetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IdE_GetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkTypedArray_IdE_GetVariantValue_s3(self, args);
    case 3:
      return PyvtkTypedArray_IdE_GetVariantValue_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetVariantValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_IdE_GetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<double> *op = static_cast<vtkTypedArray<double> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValueN(temp0) :
      op->vtkTypedArray<double>::GetVariantValueN(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_IdE_SetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<double> *op = static_cast<vtkTypedArray<double> *>(vp);

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
      op->SetVariantValue(*temp0, *temp1);
    }
    else
    {
      op->vtkTypedArray<double>::SetVariantValue(*temp0, *temp1);
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

static PyObject *
PyvtkTypedArray_IdE_SetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<double> *op = static_cast<vtkTypedArray<double> *>(vp);

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
      op->SetVariantValue(temp0, *temp1);
    }
    else
    {
      op->vtkTypedArray<double>::SetVariantValue(temp0, *temp1);
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
PyvtkTypedArray_IdE_SetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<double> *op = static_cast<vtkTypedArray<double> *>(vp);

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
      op->SetVariantValue(temp0, temp1, *temp2);
    }
    else
    {
      op->vtkTypedArray<double>::SetVariantValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_IdE_SetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<double> *op = static_cast<vtkTypedArray<double> *>(vp);

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
      op->SetVariantValue(temp0, temp1, temp2, *temp3);
    }
    else
    {
      op->vtkTypedArray<double>::SetVariantValue(temp0, temp1, temp2, *temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj3);

  return result;
}

static PyMethodDef PyvtkTypedArray_IdE_SetVariantValue_Methods[] = {
  {nullptr, PyvtkTypedArray_IdE_SetVariantValue_s1, METH_VARARGS,
   "@WW vtkArrayCoordinates vtkVariant"},
  {nullptr, PyvtkTypedArray_IdE_SetVariantValue_s2, METH_VARARGS,
   "@kW vtkVariant"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_IdE_SetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IdE_SetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTypedArray_IdE_SetVariantValue_s3(self, args);
    case 4:
      return PyvtkTypedArray_IdE_SetVariantValue_s4(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetVariantValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_IdE_SetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<double> *op = static_cast<vtkTypedArray<double> *>(vp);

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
      op->SetVariantValueN(temp0, *temp1);
    }
    else
    {
      op->vtkTypedArray<double>::SetVariantValueN(temp0, *temp1);
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
PyvtkTypedArray_IdE_CopyValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<double> *op = static_cast<vtkTypedArray<double> *>(vp);

  vtkArray *temp0 = nullptr;
  vtkArrayCoordinates *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  vtkArrayCoordinates *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
  {
    if (ap.IsBound())
    {
      op->CopyValue(temp0, *temp1, *temp2);
    }
    else
    {
      op->vtkTypedArray<double>::CopyValue(temp0, *temp1, *temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);
  Py_XDECREF(pobj2);

  return result;
}

static PyObject *
PyvtkTypedArray_IdE_CopyValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<double> *op = static_cast<vtkTypedArray<double> *>(vp);

  vtkArray *temp0 = nullptr;
  unsigned long long temp1;
  vtkArrayCoordinates *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetValue(temp1) &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
  {
    if (ap.IsBound())
    {
      op->CopyValue(temp0, temp1, *temp2);
    }
    else
    {
      op->vtkTypedArray<double>::CopyValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_IdE_CopyValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<double> *op = static_cast<vtkTypedArray<double> *>(vp);

  vtkArray *temp0 = nullptr;
  vtkArrayCoordinates *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  unsigned long long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->CopyValue(temp0, *temp1, temp2);
    }
    else
    {
      op->vtkTypedArray<double>::CopyValue(temp0, *temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkTypedArray_IdE_CopyValue_Methods[] = {
  {nullptr, PyvtkTypedArray_IdE_CopyValue_s1, METH_VARARGS,
   "@VWW *vtkArray vtkArrayCoordinates vtkArrayCoordinates"},
  {nullptr, PyvtkTypedArray_IdE_CopyValue_s2, METH_VARARGS,
   "@VKW *vtkArray vtkArrayCoordinates"},
  {nullptr, PyvtkTypedArray_IdE_CopyValue_s3, METH_VARARGS,
   "@VWK *vtkArray vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_IdE_CopyValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IdE_CopyValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "CopyValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_IdE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<double> *op = static_cast<vtkTypedArray<double> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const double *tempr = &op->GetValue(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IdE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<double> *op = static_cast<vtkTypedArray<double> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const double *tempr = &op->GetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IdE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<double> *op = static_cast<vtkTypedArray<double> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    const double *tempr = &op->GetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IdE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<double> *op = static_cast<vtkTypedArray<double> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    const double *tempr = &op->GetValue(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_IdE_GetValue_Methods[] = {
  {nullptr, PyvtkTypedArray_IdE_GetValue_s1, METH_VARARGS,
   "@k"},
  {nullptr, PyvtkTypedArray_IdE_GetValue_s4, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_IdE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IdE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkTypedArray_IdE_GetValue_s2(self, args);
    case 3:
      return PyvtkTypedArray_IdE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_IdE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<double> *op = static_cast<vtkTypedArray<double> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const double *tempr = &op->GetValueN(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_IdE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<double> *op = static_cast<vtkTypedArray<double> *>(vp);

  vtkIdType temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->SetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IdE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<double> *op = static_cast<vtkTypedArray<double> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    op->SetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IdE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<double> *op = static_cast<vtkTypedArray<double> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    op->SetValue(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_IdE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<double> *op = static_cast<vtkTypedArray<double> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
  {
    op->SetValue(*temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_IdE_SetValue_Methods[] = {
  {nullptr, PyvtkTypedArray_IdE_SetValue_s1, METH_VARARGS,
   "@kd"},
  {nullptr, PyvtkTypedArray_IdE_SetValue_s4, METH_VARARGS,
   "@Wd vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_IdE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_IdE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTypedArray_IdE_SetValue_s2(self, args);
    case 4:
      return PyvtkTypedArray_IdE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_IdE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<double> *op = static_cast<vtkTypedArray<double> *>(vp);

  unsigned long long temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->SetValueN(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTypedArray_IdE_Methods[] = {
  {"IsTypeOf", PyvtkTypedArray_IdE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTypedArray_IdE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTypedArray_IdE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTypedArray_IdE\nC++: static vtkTypedArray<double> *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTypedArray_IdE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTypedArray_IdE\nC++: vtkTypedArray<double> *NewInstance()\n\n"},
  {"GetVariantValue", PyvtkTypedArray_IdE_GetVariantValue, METH_VARARGS,
   "V.GetVariantValue(vtkArrayCoordinates) -> vtkVariant\nC++: vtkVariant GetVariantValue(\n    const vtkArrayCoordinates &coordinates) override;\nV.GetVariantValue(int) -> vtkVariant\nC++: vtkVariant GetVariantValue(CoordinateT i)\nV.GetVariantValue(int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(CoordinateT i, CoordinateT j)\nV.GetVariantValue(int, int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(CoordinateT i, CoordinateT j,\n    CoordinateT k)\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetVariantValueN", PyvtkTypedArray_IdE_GetVariantValueN, METH_VARARGS,
   "V.GetVariantValueN(int) -> vtkVariant\nC++: vtkVariant GetVariantValueN(const SizeT n) override;\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetVariantValue", PyvtkTypedArray_IdE_SetVariantValue, METH_VARARGS,
   "V.SetVariantValue(vtkArrayCoordinates, vtkVariant)\nC++: void SetVariantValue(const vtkArrayCoordinates &coordinates,\n    const vtkVariant &value) override;\nV.SetVariantValue(int, vtkVariant)\nC++: void SetVariantValue(CoordinateT i, const vtkVariant &value)\nV.SetVariantValue(int, int, vtkVariant)\nC++: void SetVariantValue(CoordinateT i, CoordinateT j,\n    const vtkVariant &value)\nV.SetVariantValue(int, int, int, vtkVariant)\nC++: void SetVariantValue(CoordinateT i, CoordinateT j,\n    CoordinateT k, const vtkVariant &value)\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetVariantValueN", PyvtkTypedArray_IdE_SetVariantValueN, METH_VARARGS,
   "V.SetVariantValueN(int, vtkVariant)\nC++: void SetVariantValueN(const SizeT n, const vtkVariant &value)\n     override;\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"CopyValue", PyvtkTypedArray_IdE_CopyValue, METH_VARARGS,
   "V.CopyValue(vtkArray, vtkArrayCoordinates, vtkArrayCoordinates)\nC++: void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const vtkArrayCoordinates &target_coordinates) override;\nV.CopyValue(vtkArray, int, vtkArrayCoordinates)\nC++: void CopyValue(vtkArray *source, const SizeT source_index,\n    const vtkArrayCoordinates &target_coordinates) override;\nV.CopyValue(vtkArray, vtkArrayCoordinates, int)\nC++: void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const SizeT target_index) override;\n\nOverwrites a value with a value retrieved from another array. \nBoth arrays must store the same data types.\n"},
  {"GetValue", PyvtkTypedArray_IdE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> float\nC++: virtual const double &GetValue(CoordinateT i)\nV.GetValue(int, int) -> float\nC++: virtual const double &GetValue(CoordinateT i, CoordinateT j)\nV.GetValue(int, int, int) -> float\nC++: virtual const double &GetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> float\nC++: virtual const double &GetValue(\n    const vtkArrayCoordinates &coordinates)\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetValueN", PyvtkTypedArray_IdE_GetValueN, METH_VARARGS,
   "V.GetValueN(int) -> float\nC++: virtual const double &GetValueN(const SizeT n)\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetValue", PyvtkTypedArray_IdE_SetValue, METH_VARARGS,
   "V.SetValue(int, float)\nC++: virtual void SetValue(CoordinateT i, const double &value)\nV.SetValue(int, int, float)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    const double &value)\nV.SetValue(int, int, int, float)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k, const double &value)\nV.SetValue(vtkArrayCoordinates, float)\nC++: virtual void SetValue(const vtkArrayCoordinates &coordinates,\n     const double &value)\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetValueN", PyvtkTypedArray_IdE_SetValueN, METH_VARARGS,
   "V.SetValueN(int, float)\nC++: virtual void SetValueN(const SizeT n, const double &value)\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTypedArray_IdE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkTypedArray_IdE", // tp_name
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
  PyvtkTypedArray_IdE_Doc, // tp_doc
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

PyObject *PyvtkTypedArray_IdE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTypedArray_IdE_Type, PyvtkTypedArray_IdE_Methods,
    typeid(vtkTypedArray<double>).name(),
 nullptr);

  PyTypeObject *pytype = &PyvtkTypedArray_IdE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkArray_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTypedArray_I12vtkStdStringE_ClassNew(); }

#ifndef DECLARED_PyvtkArray_ClassNew
extern "C" { PyObject *PyvtkArray_ClassNew(); }
#define DECLARED_PyvtkArray_ClassNew
#endif

static const char *PyvtkTypedArray_I12vtkStdStringE_Doc =
  "vtkTypedArray- Provides a type-specific interface to N-way arrays\n\n"
  "Superclass: vtkArray\n\n"
  "vtkTypedArray provides an interface for retrieving and updating data\n"
  "in an arbitrary-dimension array.  It derives from vtkArray and is\n"
  "templated on the type of value stored in the array.\n\n"
  "Methods are provided for retrieving and updating array values based\n"
  "either on their array coordinates, or on a 1-dimensional integer\n"
  "index.  The latter approach can be used to iterate over the values in\n"
  "an array in arbitrary order, which is useful when writing filters\n"
  "that operate efficiently on sparse arrays and arrays that can have\n"
  "any number of dimensions.\n\n"
  "Special overloaded methods provide simple access for arrays with one,\n"
  "two, or three dimensions.\n\n"
  "@sa\n"
  "vtkArray, vtkDenseArray, vtkSparseArray\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";


static PyObject *
PyvtkTypedArray_I12vtkStdStringE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTypedArray<vtkStdString>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_I12vtkStdStringE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkStdString> *op = static_cast<vtkTypedArray<vtkStdString> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTypedArray<vtkStdString>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_I12vtkStdStringE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTypedArray<vtkStdString> *tempr = vtkTypedArray<vtkStdString>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_I12vtkStdStringE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkStdString> *op = static_cast<vtkTypedArray<vtkStdString> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTypedArray<vtkStdString> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTypedArray<vtkStdString>::NewInstance());

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
PyvtkTypedArray_I12vtkStdStringE_GetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkStdString> *op = static_cast<vtkTypedArray<vtkStdString> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(*temp0) :
      op->vtkTypedArray<vtkStdString>::GetVariantValue(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkTypedArray_I12vtkStdStringE_GetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkStdString> *op = static_cast<vtkTypedArray<vtkStdString> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0) :
      op->vtkTypedArray<vtkStdString>::GetVariantValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_I12vtkStdStringE_GetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkStdString> *op = static_cast<vtkTypedArray<vtkStdString> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1) :
      op->vtkTypedArray<vtkStdString>::GetVariantValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_I12vtkStdStringE_GetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkStdString> *op = static_cast<vtkTypedArray<vtkStdString> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1, temp2) :
      op->vtkTypedArray<vtkStdString>::GetVariantValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}

static PyMethodDef PyvtkTypedArray_I12vtkStdStringE_GetVariantValue_Methods[] = {
  {nullptr, PyvtkTypedArray_I12vtkStdStringE_GetVariantValue_s1, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, PyvtkTypedArray_I12vtkStdStringE_GetVariantValue_s2, METH_VARARGS,
   "@k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_I12vtkStdStringE_GetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_I12vtkStdStringE_GetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkTypedArray_I12vtkStdStringE_GetVariantValue_s3(self, args);
    case 3:
      return PyvtkTypedArray_I12vtkStdStringE_GetVariantValue_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetVariantValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_I12vtkStdStringE_GetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkStdString> *op = static_cast<vtkTypedArray<vtkStdString> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValueN(temp0) :
      op->vtkTypedArray<vtkStdString>::GetVariantValueN(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_I12vtkStdStringE_SetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkStdString> *op = static_cast<vtkTypedArray<vtkStdString> *>(vp);

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
      op->SetVariantValue(*temp0, *temp1);
    }
    else
    {
      op->vtkTypedArray<vtkStdString>::SetVariantValue(*temp0, *temp1);
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

static PyObject *
PyvtkTypedArray_I12vtkStdStringE_SetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkStdString> *op = static_cast<vtkTypedArray<vtkStdString> *>(vp);

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
      op->SetVariantValue(temp0, *temp1);
    }
    else
    {
      op->vtkTypedArray<vtkStdString>::SetVariantValue(temp0, *temp1);
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
PyvtkTypedArray_I12vtkStdStringE_SetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkStdString> *op = static_cast<vtkTypedArray<vtkStdString> *>(vp);

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
      op->SetVariantValue(temp0, temp1, *temp2);
    }
    else
    {
      op->vtkTypedArray<vtkStdString>::SetVariantValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_I12vtkStdStringE_SetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkStdString> *op = static_cast<vtkTypedArray<vtkStdString> *>(vp);

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
      op->SetVariantValue(temp0, temp1, temp2, *temp3);
    }
    else
    {
      op->vtkTypedArray<vtkStdString>::SetVariantValue(temp0, temp1, temp2, *temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj3);

  return result;
}

static PyMethodDef PyvtkTypedArray_I12vtkStdStringE_SetVariantValue_Methods[] = {
  {nullptr, PyvtkTypedArray_I12vtkStdStringE_SetVariantValue_s1, METH_VARARGS,
   "@WW vtkArrayCoordinates vtkVariant"},
  {nullptr, PyvtkTypedArray_I12vtkStdStringE_SetVariantValue_s2, METH_VARARGS,
   "@kW vtkVariant"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_I12vtkStdStringE_SetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_I12vtkStdStringE_SetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTypedArray_I12vtkStdStringE_SetVariantValue_s3(self, args);
    case 4:
      return PyvtkTypedArray_I12vtkStdStringE_SetVariantValue_s4(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetVariantValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_I12vtkStdStringE_SetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkStdString> *op = static_cast<vtkTypedArray<vtkStdString> *>(vp);

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
      op->SetVariantValueN(temp0, *temp1);
    }
    else
    {
      op->vtkTypedArray<vtkStdString>::SetVariantValueN(temp0, *temp1);
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
PyvtkTypedArray_I12vtkStdStringE_CopyValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkStdString> *op = static_cast<vtkTypedArray<vtkStdString> *>(vp);

  vtkArray *temp0 = nullptr;
  vtkArrayCoordinates *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  vtkArrayCoordinates *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
  {
    if (ap.IsBound())
    {
      op->CopyValue(temp0, *temp1, *temp2);
    }
    else
    {
      op->vtkTypedArray<vtkStdString>::CopyValue(temp0, *temp1, *temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);
  Py_XDECREF(pobj2);

  return result;
}

static PyObject *
PyvtkTypedArray_I12vtkStdStringE_CopyValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkStdString> *op = static_cast<vtkTypedArray<vtkStdString> *>(vp);

  vtkArray *temp0 = nullptr;
  unsigned long long temp1;
  vtkArrayCoordinates *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetValue(temp1) &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
  {
    if (ap.IsBound())
    {
      op->CopyValue(temp0, temp1, *temp2);
    }
    else
    {
      op->vtkTypedArray<vtkStdString>::CopyValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_I12vtkStdStringE_CopyValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkStdString> *op = static_cast<vtkTypedArray<vtkStdString> *>(vp);

  vtkArray *temp0 = nullptr;
  vtkArrayCoordinates *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  unsigned long long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->CopyValue(temp0, *temp1, temp2);
    }
    else
    {
      op->vtkTypedArray<vtkStdString>::CopyValue(temp0, *temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkTypedArray_I12vtkStdStringE_CopyValue_Methods[] = {
  {nullptr, PyvtkTypedArray_I12vtkStdStringE_CopyValue_s1, METH_VARARGS,
   "@VWW *vtkArray vtkArrayCoordinates vtkArrayCoordinates"},
  {nullptr, PyvtkTypedArray_I12vtkStdStringE_CopyValue_s2, METH_VARARGS,
   "@VKW *vtkArray vtkArrayCoordinates"},
  {nullptr, PyvtkTypedArray_I12vtkStdStringE_CopyValue_s3, METH_VARARGS,
   "@VWK *vtkArray vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_I12vtkStdStringE_CopyValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_I12vtkStdStringE_CopyValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "CopyValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_I12vtkStdStringE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkStdString> *op = static_cast<vtkTypedArray<vtkStdString> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const vtkStdString *tempr = &op->GetValue(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_I12vtkStdStringE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkStdString> *op = static_cast<vtkTypedArray<vtkStdString> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const vtkStdString *tempr = &op->GetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_I12vtkStdStringE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkStdString> *op = static_cast<vtkTypedArray<vtkStdString> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    const vtkStdString *tempr = &op->GetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_I12vtkStdStringE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkStdString> *op = static_cast<vtkTypedArray<vtkStdString> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    const vtkStdString *tempr = &op->GetValue(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_I12vtkStdStringE_GetValue_Methods[] = {
  {nullptr, PyvtkTypedArray_I12vtkStdStringE_GetValue_s1, METH_VARARGS,
   "@k"},
  {nullptr, PyvtkTypedArray_I12vtkStdStringE_GetValue_s4, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_I12vtkStdStringE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_I12vtkStdStringE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkTypedArray_I12vtkStdStringE_GetValue_s2(self, args);
    case 3:
      return PyvtkTypedArray_I12vtkStdStringE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_I12vtkStdStringE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkStdString> *op = static_cast<vtkTypedArray<vtkStdString> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const vtkStdString *tempr = &op->GetValueN(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_I12vtkStdStringE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkStdString> *op = static_cast<vtkTypedArray<vtkStdString> *>(vp);

  vtkIdType temp0;
  vtkStdString temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->SetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_I12vtkStdStringE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkStdString> *op = static_cast<vtkTypedArray<vtkStdString> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkStdString temp2;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    op->SetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_I12vtkStdStringE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkStdString> *op = static_cast<vtkTypedArray<vtkStdString> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  vtkStdString temp3;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    op->SetValue(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_I12vtkStdStringE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkStdString> *op = static_cast<vtkTypedArray<vtkStdString> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkStdString temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
  {
    op->SetValue(*temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_I12vtkStdStringE_SetValue_Methods[] = {
  {nullptr, PyvtkTypedArray_I12vtkStdStringE_SetValue_s1, METH_VARARGS,
   "@ks"},
  {nullptr, PyvtkTypedArray_I12vtkStdStringE_SetValue_s4, METH_VARARGS,
   "@Ws vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_I12vtkStdStringE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_I12vtkStdStringE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTypedArray_I12vtkStdStringE_SetValue_s2(self, args);
    case 4:
      return PyvtkTypedArray_I12vtkStdStringE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_I12vtkStdStringE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkStdString> *op = static_cast<vtkTypedArray<vtkStdString> *>(vp);

  unsigned long long temp0;
  vtkStdString temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->SetValueN(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTypedArray_I12vtkStdStringE_Methods[] = {
  {"IsTypeOf", PyvtkTypedArray_I12vtkStdStringE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTypedArray_I12vtkStdStringE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTypedArray_I12vtkStdStringE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTypedArray_I12vtkStdStringE\nC++: static vtkTypedArray<vtkStdString> *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTypedArray_I12vtkStdStringE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTypedArray_I12vtkStdStringE\nC++: vtkTypedArray<vtkStdString> *NewInstance()\n\n"},
  {"GetVariantValue", PyvtkTypedArray_I12vtkStdStringE_GetVariantValue, METH_VARARGS,
   "V.GetVariantValue(vtkArrayCoordinates) -> vtkVariant\nC++: vtkVariant GetVariantValue(\n    const vtkArrayCoordinates &coordinates) override;\nV.GetVariantValue(int) -> vtkVariant\nC++: vtkVariant GetVariantValue(CoordinateT i)\nV.GetVariantValue(int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(CoordinateT i, CoordinateT j)\nV.GetVariantValue(int, int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(CoordinateT i, CoordinateT j,\n    CoordinateT k)\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetVariantValueN", PyvtkTypedArray_I12vtkStdStringE_GetVariantValueN, METH_VARARGS,
   "V.GetVariantValueN(int) -> vtkVariant\nC++: vtkVariant GetVariantValueN(const SizeT n) override;\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetVariantValue", PyvtkTypedArray_I12vtkStdStringE_SetVariantValue, METH_VARARGS,
   "V.SetVariantValue(vtkArrayCoordinates, vtkVariant)\nC++: void SetVariantValue(const vtkArrayCoordinates &coordinates,\n    const vtkVariant &value) override;\nV.SetVariantValue(int, vtkVariant)\nC++: void SetVariantValue(CoordinateT i, const vtkVariant &value)\nV.SetVariantValue(int, int, vtkVariant)\nC++: void SetVariantValue(CoordinateT i, CoordinateT j,\n    const vtkVariant &value)\nV.SetVariantValue(int, int, int, vtkVariant)\nC++: void SetVariantValue(CoordinateT i, CoordinateT j,\n    CoordinateT k, const vtkVariant &value)\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetVariantValueN", PyvtkTypedArray_I12vtkStdStringE_SetVariantValueN, METH_VARARGS,
   "V.SetVariantValueN(int, vtkVariant)\nC++: void SetVariantValueN(const SizeT n, const vtkVariant &value)\n     override;\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"CopyValue", PyvtkTypedArray_I12vtkStdStringE_CopyValue, METH_VARARGS,
   "V.CopyValue(vtkArray, vtkArrayCoordinates, vtkArrayCoordinates)\nC++: void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const vtkArrayCoordinates &target_coordinates) override;\nV.CopyValue(vtkArray, int, vtkArrayCoordinates)\nC++: void CopyValue(vtkArray *source, const SizeT source_index,\n    const vtkArrayCoordinates &target_coordinates) override;\nV.CopyValue(vtkArray, vtkArrayCoordinates, int)\nC++: void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const SizeT target_index) override;\n\nOverwrites a value with a value retrieved from another array. \nBoth arrays must store the same data types.\n"},
  {"GetValue", PyvtkTypedArray_I12vtkStdStringE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> string\nC++: virtual const vtkStdString &GetValue(CoordinateT i)\nV.GetValue(int, int) -> string\nC++: virtual const vtkStdString &GetValue(CoordinateT i,\n    CoordinateT j)\nV.GetValue(int, int, int) -> string\nC++: virtual const vtkStdString &GetValue(CoordinateT i,\n    CoordinateT j, CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> string\nC++: virtual const vtkStdString &GetValue(\n    const vtkArrayCoordinates &coordinates)\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetValueN", PyvtkTypedArray_I12vtkStdStringE_GetValueN, METH_VARARGS,
   "V.GetValueN(int) -> string\nC++: virtual const vtkStdString &GetValueN(const SizeT n)\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetValue", PyvtkTypedArray_I12vtkStdStringE_SetValue, METH_VARARGS,
   "V.SetValue(int, string)\nC++: virtual void SetValue(CoordinateT i,\n    const vtkStdString &value)\nV.SetValue(int, int, string)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    const vtkStdString &value)\nV.SetValue(int, int, int, string)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k, const vtkStdString &value)\nV.SetValue(vtkArrayCoordinates, string)\nC++: virtual void SetValue(const vtkArrayCoordinates &coordinates,\n     const vtkStdString &value)\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetValueN", PyvtkTypedArray_I12vtkStdStringE_SetValueN, METH_VARARGS,
   "V.SetValueN(int, string)\nC++: virtual void SetValueN(const SizeT n,\n    const vtkStdString &value)\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTypedArray_I12vtkStdStringE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkTypedArray_I12vtkStdStringE", // tp_name
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
  PyvtkTypedArray_I12vtkStdStringE_Doc, // tp_doc
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

PyObject *PyvtkTypedArray_I12vtkStdStringE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTypedArray_I12vtkStdStringE_Type, PyvtkTypedArray_I12vtkStdStringE_Methods,
    typeid(vtkTypedArray<vtkStdString>).name(),
 nullptr);

  PyTypeObject *pytype = &PyvtkTypedArray_I12vtkStdStringE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkArray_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTypedArray_I16vtkUnicodeStringE_ClassNew(); }

#ifndef DECLARED_PyvtkArray_ClassNew
extern "C" { PyObject *PyvtkArray_ClassNew(); }
#define DECLARED_PyvtkArray_ClassNew
#endif

static const char *PyvtkTypedArray_I16vtkUnicodeStringE_Doc =
  "vtkTypedArray- Provides a type-specific interface to N-way arrays\n\n"
  "Superclass: vtkArray\n\n"
  "vtkTypedArray provides an interface for retrieving and updating data\n"
  "in an arbitrary-dimension array.  It derives from vtkArray and is\n"
  "templated on the type of value stored in the array.\n\n"
  "Methods are provided for retrieving and updating array values based\n"
  "either on their array coordinates, or on a 1-dimensional integer\n"
  "index.  The latter approach can be used to iterate over the values in\n"
  "an array in arbitrary order, which is useful when writing filters\n"
  "that operate efficiently on sparse arrays and arrays that can have\n"
  "any number of dimensions.\n\n"
  "Special overloaded methods provide simple access for arrays with one,\n"
  "two, or three dimensions.\n\n"
  "@sa\n"
  "vtkArray, vtkDenseArray, vtkSparseArray\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";


static PyObject *
PyvtkTypedArray_I16vtkUnicodeStringE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTypedArray<vtkUnicodeString>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_I16vtkUnicodeStringE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkUnicodeString> *op = static_cast<vtkTypedArray<vtkUnicodeString> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTypedArray<vtkUnicodeString>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_I16vtkUnicodeStringE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTypedArray<vtkUnicodeString> *tempr = vtkTypedArray<vtkUnicodeString>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_I16vtkUnicodeStringE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkUnicodeString> *op = static_cast<vtkTypedArray<vtkUnicodeString> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTypedArray<vtkUnicodeString> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTypedArray<vtkUnicodeString>::NewInstance());

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
PyvtkTypedArray_I16vtkUnicodeStringE_GetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkUnicodeString> *op = static_cast<vtkTypedArray<vtkUnicodeString> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(*temp0) :
      op->vtkTypedArray<vtkUnicodeString>::GetVariantValue(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkTypedArray_I16vtkUnicodeStringE_GetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkUnicodeString> *op = static_cast<vtkTypedArray<vtkUnicodeString> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0) :
      op->vtkTypedArray<vtkUnicodeString>::GetVariantValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_I16vtkUnicodeStringE_GetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkUnicodeString> *op = static_cast<vtkTypedArray<vtkUnicodeString> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1) :
      op->vtkTypedArray<vtkUnicodeString>::GetVariantValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_I16vtkUnicodeStringE_GetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkUnicodeString> *op = static_cast<vtkTypedArray<vtkUnicodeString> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1, temp2) :
      op->vtkTypedArray<vtkUnicodeString>::GetVariantValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}

static PyMethodDef PyvtkTypedArray_I16vtkUnicodeStringE_GetVariantValue_Methods[] = {
  {nullptr, PyvtkTypedArray_I16vtkUnicodeStringE_GetVariantValue_s1, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, PyvtkTypedArray_I16vtkUnicodeStringE_GetVariantValue_s2, METH_VARARGS,
   "@k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_I16vtkUnicodeStringE_GetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_I16vtkUnicodeStringE_GetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkTypedArray_I16vtkUnicodeStringE_GetVariantValue_s3(self, args);
    case 3:
      return PyvtkTypedArray_I16vtkUnicodeStringE_GetVariantValue_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetVariantValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_I16vtkUnicodeStringE_GetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkUnicodeString> *op = static_cast<vtkTypedArray<vtkUnicodeString> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValueN(temp0) :
      op->vtkTypedArray<vtkUnicodeString>::GetVariantValueN(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_I16vtkUnicodeStringE_SetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkUnicodeString> *op = static_cast<vtkTypedArray<vtkUnicodeString> *>(vp);

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
      op->SetVariantValue(*temp0, *temp1);
    }
    else
    {
      op->vtkTypedArray<vtkUnicodeString>::SetVariantValue(*temp0, *temp1);
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

static PyObject *
PyvtkTypedArray_I16vtkUnicodeStringE_SetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkUnicodeString> *op = static_cast<vtkTypedArray<vtkUnicodeString> *>(vp);

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
      op->SetVariantValue(temp0, *temp1);
    }
    else
    {
      op->vtkTypedArray<vtkUnicodeString>::SetVariantValue(temp0, *temp1);
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
PyvtkTypedArray_I16vtkUnicodeStringE_SetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkUnicodeString> *op = static_cast<vtkTypedArray<vtkUnicodeString> *>(vp);

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
      op->SetVariantValue(temp0, temp1, *temp2);
    }
    else
    {
      op->vtkTypedArray<vtkUnicodeString>::SetVariantValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_I16vtkUnicodeStringE_SetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkUnicodeString> *op = static_cast<vtkTypedArray<vtkUnicodeString> *>(vp);

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
      op->SetVariantValue(temp0, temp1, temp2, *temp3);
    }
    else
    {
      op->vtkTypedArray<vtkUnicodeString>::SetVariantValue(temp0, temp1, temp2, *temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj3);

  return result;
}

static PyMethodDef PyvtkTypedArray_I16vtkUnicodeStringE_SetVariantValue_Methods[] = {
  {nullptr, PyvtkTypedArray_I16vtkUnicodeStringE_SetVariantValue_s1, METH_VARARGS,
   "@WW vtkArrayCoordinates vtkVariant"},
  {nullptr, PyvtkTypedArray_I16vtkUnicodeStringE_SetVariantValue_s2, METH_VARARGS,
   "@kW vtkVariant"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_I16vtkUnicodeStringE_SetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_I16vtkUnicodeStringE_SetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTypedArray_I16vtkUnicodeStringE_SetVariantValue_s3(self, args);
    case 4:
      return PyvtkTypedArray_I16vtkUnicodeStringE_SetVariantValue_s4(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetVariantValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_I16vtkUnicodeStringE_SetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkUnicodeString> *op = static_cast<vtkTypedArray<vtkUnicodeString> *>(vp);

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
      op->SetVariantValueN(temp0, *temp1);
    }
    else
    {
      op->vtkTypedArray<vtkUnicodeString>::SetVariantValueN(temp0, *temp1);
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
PyvtkTypedArray_I16vtkUnicodeStringE_CopyValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkUnicodeString> *op = static_cast<vtkTypedArray<vtkUnicodeString> *>(vp);

  vtkArray *temp0 = nullptr;
  vtkArrayCoordinates *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  vtkArrayCoordinates *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
  {
    if (ap.IsBound())
    {
      op->CopyValue(temp0, *temp1, *temp2);
    }
    else
    {
      op->vtkTypedArray<vtkUnicodeString>::CopyValue(temp0, *temp1, *temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);
  Py_XDECREF(pobj2);

  return result;
}

static PyObject *
PyvtkTypedArray_I16vtkUnicodeStringE_CopyValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkUnicodeString> *op = static_cast<vtkTypedArray<vtkUnicodeString> *>(vp);

  vtkArray *temp0 = nullptr;
  unsigned long long temp1;
  vtkArrayCoordinates *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetValue(temp1) &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
  {
    if (ap.IsBound())
    {
      op->CopyValue(temp0, temp1, *temp2);
    }
    else
    {
      op->vtkTypedArray<vtkUnicodeString>::CopyValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_I16vtkUnicodeStringE_CopyValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkUnicodeString> *op = static_cast<vtkTypedArray<vtkUnicodeString> *>(vp);

  vtkArray *temp0 = nullptr;
  vtkArrayCoordinates *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  unsigned long long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->CopyValue(temp0, *temp1, temp2);
    }
    else
    {
      op->vtkTypedArray<vtkUnicodeString>::CopyValue(temp0, *temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkTypedArray_I16vtkUnicodeStringE_CopyValue_Methods[] = {
  {nullptr, PyvtkTypedArray_I16vtkUnicodeStringE_CopyValue_s1, METH_VARARGS,
   "@VWW *vtkArray vtkArrayCoordinates vtkArrayCoordinates"},
  {nullptr, PyvtkTypedArray_I16vtkUnicodeStringE_CopyValue_s2, METH_VARARGS,
   "@VKW *vtkArray vtkArrayCoordinates"},
  {nullptr, PyvtkTypedArray_I16vtkUnicodeStringE_CopyValue_s3, METH_VARARGS,
   "@VWK *vtkArray vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_I16vtkUnicodeStringE_CopyValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_I16vtkUnicodeStringE_CopyValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "CopyValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_I16vtkUnicodeStringE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkUnicodeString> *op = static_cast<vtkTypedArray<vtkUnicodeString> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const vtkUnicodeString *tempr = &op->GetValue(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_I16vtkUnicodeStringE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkUnicodeString> *op = static_cast<vtkTypedArray<vtkUnicodeString> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const vtkUnicodeString *tempr = &op->GetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_I16vtkUnicodeStringE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkUnicodeString> *op = static_cast<vtkTypedArray<vtkUnicodeString> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    const vtkUnicodeString *tempr = &op->GetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_I16vtkUnicodeStringE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkUnicodeString> *op = static_cast<vtkTypedArray<vtkUnicodeString> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    const vtkUnicodeString *tempr = &op->GetValue(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_I16vtkUnicodeStringE_GetValue_Methods[] = {
  {nullptr, PyvtkTypedArray_I16vtkUnicodeStringE_GetValue_s1, METH_VARARGS,
   "@k"},
  {nullptr, PyvtkTypedArray_I16vtkUnicodeStringE_GetValue_s4, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_I16vtkUnicodeStringE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_I16vtkUnicodeStringE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkTypedArray_I16vtkUnicodeStringE_GetValue_s2(self, args);
    case 3:
      return PyvtkTypedArray_I16vtkUnicodeStringE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_I16vtkUnicodeStringE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkUnicodeString> *op = static_cast<vtkTypedArray<vtkUnicodeString> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const vtkUnicodeString *tempr = &op->GetValueN(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_I16vtkUnicodeStringE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkUnicodeString> *op = static_cast<vtkTypedArray<vtkUnicodeString> *>(vp);

  vtkIdType temp0;
  vtkUnicodeString temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->SetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_I16vtkUnicodeStringE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkUnicodeString> *op = static_cast<vtkTypedArray<vtkUnicodeString> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkUnicodeString temp2;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    op->SetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_I16vtkUnicodeStringE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkUnicodeString> *op = static_cast<vtkTypedArray<vtkUnicodeString> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  vtkUnicodeString temp3;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    op->SetValue(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_I16vtkUnicodeStringE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkUnicodeString> *op = static_cast<vtkTypedArray<vtkUnicodeString> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkUnicodeString temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetValue(temp1))
  {
    op->SetValue(*temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_I16vtkUnicodeStringE_SetValue_Methods[] = {
  {nullptr, PyvtkTypedArray_I16vtkUnicodeStringE_SetValue_s1, METH_VARARGS,
   "@ku"},
  {nullptr, PyvtkTypedArray_I16vtkUnicodeStringE_SetValue_s4, METH_VARARGS,
   "@Wu vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_I16vtkUnicodeStringE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_I16vtkUnicodeStringE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTypedArray_I16vtkUnicodeStringE_SetValue_s2(self, args);
    case 4:
      return PyvtkTypedArray_I16vtkUnicodeStringE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_I16vtkUnicodeStringE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkUnicodeString> *op = static_cast<vtkTypedArray<vtkUnicodeString> *>(vp);

  unsigned long long temp0;
  vtkUnicodeString temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->SetValueN(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTypedArray_I16vtkUnicodeStringE_Methods[] = {
  {"IsTypeOf", PyvtkTypedArray_I16vtkUnicodeStringE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTypedArray_I16vtkUnicodeStringE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTypedArray_I16vtkUnicodeStringE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkTypedArray_I16vtkUnicodeStringE\nC++: static vtkTypedArray<vtkUnicodeString> *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTypedArray_I16vtkUnicodeStringE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTypedArray_I16vtkUnicodeStringE\nC++: vtkTypedArray<vtkUnicodeString> *NewInstance()\n\n"},
  {"GetVariantValue", PyvtkTypedArray_I16vtkUnicodeStringE_GetVariantValue, METH_VARARGS,
   "V.GetVariantValue(vtkArrayCoordinates) -> vtkVariant\nC++: vtkVariant GetVariantValue(\n    const vtkArrayCoordinates &coordinates) override;\nV.GetVariantValue(int) -> vtkVariant\nC++: vtkVariant GetVariantValue(CoordinateT i)\nV.GetVariantValue(int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(CoordinateT i, CoordinateT j)\nV.GetVariantValue(int, int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(CoordinateT i, CoordinateT j,\n    CoordinateT k)\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetVariantValueN", PyvtkTypedArray_I16vtkUnicodeStringE_GetVariantValueN, METH_VARARGS,
   "V.GetVariantValueN(int) -> vtkVariant\nC++: vtkVariant GetVariantValueN(const SizeT n) override;\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetVariantValue", PyvtkTypedArray_I16vtkUnicodeStringE_SetVariantValue, METH_VARARGS,
   "V.SetVariantValue(vtkArrayCoordinates, vtkVariant)\nC++: void SetVariantValue(const vtkArrayCoordinates &coordinates,\n    const vtkVariant &value) override;\nV.SetVariantValue(int, vtkVariant)\nC++: void SetVariantValue(CoordinateT i, const vtkVariant &value)\nV.SetVariantValue(int, int, vtkVariant)\nC++: void SetVariantValue(CoordinateT i, CoordinateT j,\n    const vtkVariant &value)\nV.SetVariantValue(int, int, int, vtkVariant)\nC++: void SetVariantValue(CoordinateT i, CoordinateT j,\n    CoordinateT k, const vtkVariant &value)\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetVariantValueN", PyvtkTypedArray_I16vtkUnicodeStringE_SetVariantValueN, METH_VARARGS,
   "V.SetVariantValueN(int, vtkVariant)\nC++: void SetVariantValueN(const SizeT n, const vtkVariant &value)\n     override;\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"CopyValue", PyvtkTypedArray_I16vtkUnicodeStringE_CopyValue, METH_VARARGS,
   "V.CopyValue(vtkArray, vtkArrayCoordinates, vtkArrayCoordinates)\nC++: void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const vtkArrayCoordinates &target_coordinates) override;\nV.CopyValue(vtkArray, int, vtkArrayCoordinates)\nC++: void CopyValue(vtkArray *source, const SizeT source_index,\n    const vtkArrayCoordinates &target_coordinates) override;\nV.CopyValue(vtkArray, vtkArrayCoordinates, int)\nC++: void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const SizeT target_index) override;\n\nOverwrites a value with a value retrieved from another array. \nBoth arrays must store the same data types.\n"},
  {"GetValue", PyvtkTypedArray_I16vtkUnicodeStringE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> unicode\nC++: virtual const vtkUnicodeString &GetValue(CoordinateT i)\nV.GetValue(int, int) -> unicode\nC++: virtual const vtkUnicodeString &GetValue(CoordinateT i,\n    CoordinateT j)\nV.GetValue(int, int, int) -> unicode\nC++: virtual const vtkUnicodeString &GetValue(CoordinateT i,\n    CoordinateT j, CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> unicode\nC++: virtual const vtkUnicodeString &GetValue(\n    const vtkArrayCoordinates &coordinates)\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetValueN", PyvtkTypedArray_I16vtkUnicodeStringE_GetValueN, METH_VARARGS,
   "V.GetValueN(int) -> unicode\nC++: virtual const vtkUnicodeString &GetValueN(const SizeT n)\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetValue", PyvtkTypedArray_I16vtkUnicodeStringE_SetValue, METH_VARARGS,
   "V.SetValue(int, unicode)\nC++: virtual void SetValue(CoordinateT i,\n    const vtkUnicodeString &value)\nV.SetValue(int, int, unicode)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    const vtkUnicodeString &value)\nV.SetValue(int, int, int, unicode)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k, const vtkUnicodeString &value)\nV.SetValue(vtkArrayCoordinates, unicode)\nC++: virtual void SetValue(const vtkArrayCoordinates &coordinates,\n     const vtkUnicodeString &value)\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetValueN", PyvtkTypedArray_I16vtkUnicodeStringE_SetValueN, METH_VARARGS,
   "V.SetValueN(int, unicode)\nC++: virtual void SetValueN(const SizeT n,\n    const vtkUnicodeString &value)\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTypedArray_I16vtkUnicodeStringE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkTypedArray_I16vtkUnicodeStringE", // tp_name
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
  PyvtkTypedArray_I16vtkUnicodeStringE_Doc, // tp_doc
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

PyObject *PyvtkTypedArray_I16vtkUnicodeStringE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTypedArray_I16vtkUnicodeStringE_Type, PyvtkTypedArray_I16vtkUnicodeStringE_Methods,
    typeid(vtkTypedArray<vtkUnicodeString>).name(),
 nullptr);

  PyTypeObject *pytype = &PyvtkTypedArray_I16vtkUnicodeStringE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkArray_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTypedArray_I10vtkVariantE_ClassNew(); }

#ifndef DECLARED_PyvtkArray_ClassNew
extern "C" { PyObject *PyvtkArray_ClassNew(); }
#define DECLARED_PyvtkArray_ClassNew
#endif

static const char *PyvtkTypedArray_I10vtkVariantE_Doc =
  "vtkTypedArray- Provides a type-specific interface to N-way arrays\n\n"
  "Superclass: vtkArray\n\n"
  "vtkTypedArray provides an interface for retrieving and updating data\n"
  "in an arbitrary-dimension array.  It derives from vtkArray and is\n"
  "templated on the type of value stored in the array.\n\n"
  "Methods are provided for retrieving and updating array values based\n"
  "either on their array coordinates, or on a 1-dimensional integer\n"
  "index.  The latter approach can be used to iterate over the values in\n"
  "an array in arbitrary order, which is useful when writing filters\n"
  "that operate efficiently on sparse arrays and arrays that can have\n"
  "any number of dimensions.\n\n"
  "Special overloaded methods provide simple access for arrays with one,\n"
  "two, or three dimensions.\n\n"
  "@sa\n"
  "vtkArray, vtkDenseArray, vtkSparseArray\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";


static PyObject *
PyvtkTypedArray_I10vtkVariantE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTypedArray<vtkVariant>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_I10vtkVariantE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkVariant> *op = static_cast<vtkTypedArray<vtkVariant> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTypedArray<vtkVariant>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_I10vtkVariantE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTypedArray<vtkVariant> *tempr = vtkTypedArray<vtkVariant>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_I10vtkVariantE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkVariant> *op = static_cast<vtkTypedArray<vtkVariant> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTypedArray<vtkVariant> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTypedArray<vtkVariant>::NewInstance());

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
PyvtkTypedArray_I10vtkVariantE_GetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkVariant> *op = static_cast<vtkTypedArray<vtkVariant> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(*temp0) :
      op->vtkTypedArray<vtkVariant>::GetVariantValue(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkTypedArray_I10vtkVariantE_GetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkVariant> *op = static_cast<vtkTypedArray<vtkVariant> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0) :
      op->vtkTypedArray<vtkVariant>::GetVariantValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_I10vtkVariantE_GetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkVariant> *op = static_cast<vtkTypedArray<vtkVariant> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1) :
      op->vtkTypedArray<vtkVariant>::GetVariantValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_I10vtkVariantE_GetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkVariant> *op = static_cast<vtkTypedArray<vtkVariant> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0, temp1, temp2) :
      op->vtkTypedArray<vtkVariant>::GetVariantValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}

static PyMethodDef PyvtkTypedArray_I10vtkVariantE_GetVariantValue_Methods[] = {
  {nullptr, PyvtkTypedArray_I10vtkVariantE_GetVariantValue_s1, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, PyvtkTypedArray_I10vtkVariantE_GetVariantValue_s2, METH_VARARGS,
   "@k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_I10vtkVariantE_GetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_I10vtkVariantE_GetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkTypedArray_I10vtkVariantE_GetVariantValue_s3(self, args);
    case 3:
      return PyvtkTypedArray_I10vtkVariantE_GetVariantValue_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetVariantValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_I10vtkVariantE_GetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkVariant> *op = static_cast<vtkTypedArray<vtkVariant> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValueN(temp0) :
      op->vtkTypedArray<vtkVariant>::GetVariantValueN(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_I10vtkVariantE_SetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkVariant> *op = static_cast<vtkTypedArray<vtkVariant> *>(vp);

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
      op->SetVariantValue(*temp0, *temp1);
    }
    else
    {
      op->vtkTypedArray<vtkVariant>::SetVariantValue(*temp0, *temp1);
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

static PyObject *
PyvtkTypedArray_I10vtkVariantE_SetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkVariant> *op = static_cast<vtkTypedArray<vtkVariant> *>(vp);

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
      op->SetVariantValue(temp0, *temp1);
    }
    else
    {
      op->vtkTypedArray<vtkVariant>::SetVariantValue(temp0, *temp1);
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
PyvtkTypedArray_I10vtkVariantE_SetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkVariant> *op = static_cast<vtkTypedArray<vtkVariant> *>(vp);

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
      op->SetVariantValue(temp0, temp1, *temp2);
    }
    else
    {
      op->vtkTypedArray<vtkVariant>::SetVariantValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_I10vtkVariantE_SetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkVariant> *op = static_cast<vtkTypedArray<vtkVariant> *>(vp);

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
      op->SetVariantValue(temp0, temp1, temp2, *temp3);
    }
    else
    {
      op->vtkTypedArray<vtkVariant>::SetVariantValue(temp0, temp1, temp2, *temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj3);

  return result;
}

static PyMethodDef PyvtkTypedArray_I10vtkVariantE_SetVariantValue_Methods[] = {
  {nullptr, PyvtkTypedArray_I10vtkVariantE_SetVariantValue_s1, METH_VARARGS,
   "@WW vtkArrayCoordinates vtkVariant"},
  {nullptr, PyvtkTypedArray_I10vtkVariantE_SetVariantValue_s2, METH_VARARGS,
   "@kW vtkVariant"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_I10vtkVariantE_SetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_I10vtkVariantE_SetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTypedArray_I10vtkVariantE_SetVariantValue_s3(self, args);
    case 4:
      return PyvtkTypedArray_I10vtkVariantE_SetVariantValue_s4(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetVariantValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_I10vtkVariantE_SetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkVariant> *op = static_cast<vtkTypedArray<vtkVariant> *>(vp);

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
      op->SetVariantValueN(temp0, *temp1);
    }
    else
    {
      op->vtkTypedArray<vtkVariant>::SetVariantValueN(temp0, *temp1);
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
PyvtkTypedArray_I10vtkVariantE_CopyValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkVariant> *op = static_cast<vtkTypedArray<vtkVariant> *>(vp);

  vtkArray *temp0 = nullptr;
  vtkArrayCoordinates *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  vtkArrayCoordinates *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
  {
    if (ap.IsBound())
    {
      op->CopyValue(temp0, *temp1, *temp2);
    }
    else
    {
      op->vtkTypedArray<vtkVariant>::CopyValue(temp0, *temp1, *temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);
  Py_XDECREF(pobj2);

  return result;
}

static PyObject *
PyvtkTypedArray_I10vtkVariantE_CopyValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkVariant> *op = static_cast<vtkTypedArray<vtkVariant> *>(vp);

  vtkArray *temp0 = nullptr;
  unsigned long long temp1;
  vtkArrayCoordinates *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetValue(temp1) &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
  {
    if (ap.IsBound())
    {
      op->CopyValue(temp0, temp1, *temp2);
    }
    else
    {
      op->vtkTypedArray<vtkVariant>::CopyValue(temp0, temp1, *temp2);
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
PyvtkTypedArray_I10vtkVariantE_CopyValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkVariant> *op = static_cast<vtkTypedArray<vtkVariant> *>(vp);

  vtkArray *temp0 = nullptr;
  vtkArrayCoordinates *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  unsigned long long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->CopyValue(temp0, *temp1, temp2);
    }
    else
    {
      op->vtkTypedArray<vtkVariant>::CopyValue(temp0, *temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkTypedArray_I10vtkVariantE_CopyValue_Methods[] = {
  {nullptr, PyvtkTypedArray_I10vtkVariantE_CopyValue_s1, METH_VARARGS,
   "@VWW *vtkArray vtkArrayCoordinates vtkArrayCoordinates"},
  {nullptr, PyvtkTypedArray_I10vtkVariantE_CopyValue_s2, METH_VARARGS,
   "@VKW *vtkArray vtkArrayCoordinates"},
  {nullptr, PyvtkTypedArray_I10vtkVariantE_CopyValue_s3, METH_VARARGS,
   "@VWK *vtkArray vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_I10vtkVariantE_CopyValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_I10vtkVariantE_CopyValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "CopyValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_I10vtkVariantE_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkVariant> *op = static_cast<vtkTypedArray<vtkVariant> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const vtkVariant *tempr = &op->GetValue(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkVariant");
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_I10vtkVariantE_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkVariant> *op = static_cast<vtkTypedArray<vtkVariant> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const vtkVariant *tempr = &op->GetValue(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkVariant");
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_I10vtkVariantE_GetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkVariant> *op = static_cast<vtkTypedArray<vtkVariant> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    const vtkVariant *tempr = &op->GetValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkVariant");
    }
  }

  return result;
}

static PyObject *
PyvtkTypedArray_I10vtkVariantE_GetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkVariant> *op = static_cast<vtkTypedArray<vtkVariant> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    const vtkVariant *tempr = &op->GetValue(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkVariant");
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTypedArray_I10vtkVariantE_GetValue_Methods[] = {
  {nullptr, PyvtkTypedArray_I10vtkVariantE_GetValue_s1, METH_VARARGS,
   "@k"},
  {nullptr, PyvtkTypedArray_I10vtkVariantE_GetValue_s4, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_I10vtkVariantE_GetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_I10vtkVariantE_GetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkTypedArray_I10vtkVariantE_GetValue_s2(self, args);
    case 3:
      return PyvtkTypedArray_I10vtkVariantE_GetValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_I10vtkVariantE_GetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkVariant> *op = static_cast<vtkTypedArray<vtkVariant> *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const vtkVariant *tempr = &op->GetValueN(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkVariant");
    }
  }

  return result;
}


static PyObject *
PyvtkTypedArray_I10vtkVariantE_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkVariant> *op = static_cast<vtkTypedArray<vtkVariant> *>(vp);

  vtkIdType temp0;
  vtkVariant *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVariant"))
  {
    op->SetValue(temp0, *temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}

static PyObject *
PyvtkTypedArray_I10vtkVariantE_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkVariant> *op = static_cast<vtkTypedArray<vtkVariant> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkVariant *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetSpecialObject(temp2, pobj2, "vtkVariant"))
  {
    op->SetValue(temp0, temp1, *temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj2);

  return result;
}

static PyObject *
PyvtkTypedArray_I10vtkVariantE_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkVariant> *op = static_cast<vtkTypedArray<vtkVariant> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  vtkVariant *temp3 = nullptr;
  PyObject *pobj3 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetSpecialObject(temp3, pobj3, "vtkVariant"))
  {
    op->SetValue(temp0, temp1, temp2, *temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj3);

  return result;
}

static PyObject *
PyvtkTypedArray_I10vtkVariantE_SetValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkVariant> *op = static_cast<vtkTypedArray<vtkVariant> *>(vp);

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkVariant *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVariant"))
  {
    op->SetValue(*temp0, *temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkTypedArray_I10vtkVariantE_SetValue_Methods[] = {
  {nullptr, PyvtkTypedArray_I10vtkVariantE_SetValue_s1, METH_VARARGS,
   "@kW vtkVariant"},
  {nullptr, PyvtkTypedArray_I10vtkVariantE_SetValue_s4, METH_VARARGS,
   "@WW vtkArrayCoordinates vtkVariant"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTypedArray_I10vtkVariantE_SetValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTypedArray_I10vtkVariantE_SetValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTypedArray_I10vtkVariantE_SetValue_s2(self, args);
    case 4:
      return PyvtkTypedArray_I10vtkVariantE_SetValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return nullptr;
}



static PyObject *
PyvtkTypedArray_I10vtkVariantE_SetValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypedArray<vtkVariant> *op = static_cast<vtkTypedArray<vtkVariant> *>(vp);

  unsigned long long temp0;
  vtkVariant *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVariant"))
  {
    op->SetValueN(temp0, *temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkTypedArray_I10vtkVariantE_Methods[] = {
  {"IsTypeOf", PyvtkTypedArray_I10vtkVariantE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTypedArray_I10vtkVariantE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTypedArray_I10vtkVariantE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTypedArray_I10vtkVariantE\nC++: static vtkTypedArray<vtkVariant> *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTypedArray_I10vtkVariantE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTypedArray_I10vtkVariantE\nC++: vtkTypedArray<vtkVariant> *NewInstance()\n\n"},
  {"GetVariantValue", PyvtkTypedArray_I10vtkVariantE_GetVariantValue, METH_VARARGS,
   "V.GetVariantValue(vtkArrayCoordinates) -> vtkVariant\nC++: vtkVariant GetVariantValue(\n    const vtkArrayCoordinates &coordinates) override;\nV.GetVariantValue(int) -> vtkVariant\nC++: vtkVariant GetVariantValue(CoordinateT i)\nV.GetVariantValue(int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(CoordinateT i, CoordinateT j)\nV.GetVariantValue(int, int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(CoordinateT i, CoordinateT j,\n    CoordinateT k)\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetVariantValueN", PyvtkTypedArray_I10vtkVariantE_GetVariantValueN, METH_VARARGS,
   "V.GetVariantValueN(int) -> vtkVariant\nC++: vtkVariant GetVariantValueN(const SizeT n) override;\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetVariantValue", PyvtkTypedArray_I10vtkVariantE_SetVariantValue, METH_VARARGS,
   "V.SetVariantValue(vtkArrayCoordinates, vtkVariant)\nC++: void SetVariantValue(const vtkArrayCoordinates &coordinates,\n    const vtkVariant &value) override;\nV.SetVariantValue(int, vtkVariant)\nC++: void SetVariantValue(CoordinateT i, const vtkVariant &value)\nV.SetVariantValue(int, int, vtkVariant)\nC++: void SetVariantValue(CoordinateT i, CoordinateT j,\n    const vtkVariant &value)\nV.SetVariantValue(int, int, int, vtkVariant)\nC++: void SetVariantValue(CoordinateT i, CoordinateT j,\n    CoordinateT k, const vtkVariant &value)\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetVariantValueN", PyvtkTypedArray_I10vtkVariantE_SetVariantValueN, METH_VARARGS,
   "V.SetVariantValueN(int, vtkVariant)\nC++: void SetVariantValueN(const SizeT n, const vtkVariant &value)\n     override;\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"CopyValue", PyvtkTypedArray_I10vtkVariantE_CopyValue, METH_VARARGS,
   "V.CopyValue(vtkArray, vtkArrayCoordinates, vtkArrayCoordinates)\nC++: void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const vtkArrayCoordinates &target_coordinates) override;\nV.CopyValue(vtkArray, int, vtkArrayCoordinates)\nC++: void CopyValue(vtkArray *source, const SizeT source_index,\n    const vtkArrayCoordinates &target_coordinates) override;\nV.CopyValue(vtkArray, vtkArrayCoordinates, int)\nC++: void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const SizeT target_index) override;\n\nOverwrites a value with a value retrieved from another array. \nBoth arrays must store the same data types.\n"},
  {"GetValue", PyvtkTypedArray_I10vtkVariantE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> vtkVariant\nC++: virtual const vtkVariant &GetValue(CoordinateT i)\nV.GetValue(int, int) -> vtkVariant\nC++: virtual const vtkVariant &GetValue(CoordinateT i,\n    CoordinateT j)\nV.GetValue(int, int, int) -> vtkVariant\nC++: virtual const vtkVariant &GetValue(CoordinateT i,\n    CoordinateT j, CoordinateT k)\nV.GetValue(vtkArrayCoordinates) -> vtkVariant\nC++: virtual const vtkVariant &GetValue(\n    const vtkArrayCoordinates &coordinates)\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {"GetValueN", PyvtkTypedArray_I10vtkVariantE_GetValueN, METH_VARARGS,
   "V.GetValueN(int) -> vtkVariant\nC++: virtual const vtkVariant &GetValueN(const SizeT n)\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {"SetValue", PyvtkTypedArray_I10vtkVariantE_SetValue, METH_VARARGS,
   "V.SetValue(int, vtkVariant)\nC++: virtual void SetValue(CoordinateT i, const vtkVariant &value)\nV.SetValue(int, int, vtkVariant)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    const vtkVariant &value)\nV.SetValue(int, int, int, vtkVariant)\nC++: virtual void SetValue(CoordinateT i, CoordinateT j,\n    CoordinateT k, const vtkVariant &value)\nV.SetValue(vtkArrayCoordinates, vtkVariant)\nC++: virtual void SetValue(const vtkArrayCoordinates &coordinates,\n     const vtkVariant &value)\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {"SetValueN", PyvtkTypedArray_I10vtkVariantE_SetValueN, METH_VARARGS,
   "V.SetValueN(int, vtkVariant)\nC++: virtual void SetValueN(const SizeT n,\n    const vtkVariant &value)\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTypedArray_I10vtkVariantE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkTypedArray_I10vtkVariantE", // tp_name
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
  PyvtkTypedArray_I10vtkVariantE_Doc, // tp_doc
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

PyObject *PyvtkTypedArray_I10vtkVariantE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTypedArray_I10vtkVariantE_Type, PyvtkTypedArray_I10vtkVariantE_Methods,
    typeid(vtkTypedArray<vtkVariant>).name(),
 nullptr);

  PyTypeObject *pytype = &PyvtkTypedArray_I10vtkVariantE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkArray_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

static const char *PyvtkTypedArray_Doc =
  "vtkTypedArray - Provides a type-specific interface to N-way arrays\n\n"
  "Superclass: vtkArray\n\n"
  "vtkTypedArray provides an interface for retrieving and updating data\n"
  "in an arbitrary-dimension array.  It derives from vtkArray and is\n"
  "templated on the type of value stored in the array.\n\n"
  "Methods are provided for retrieving and updating array values based\n"
  "either on their array coordinates, or on a 1-dimensional integer\n"
  "index.  The latter approach can be used to iterate over the values in\n"
  "an array in arbitrary order, which is useful when writing filters\n"
  "that operate efficiently on sparse arrays and arrays that can have\n"
  "any number of dimensions.\n\n"
  "Special overloaded methods provide simple access for arrays with one,\n"
  "two, or three dimensions.\n\n"
  "@sa\n"
  "vtkArray, vtkDenseArray, vtkSparseArray\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n"
  "\nProvided Types:\n\n"
  "  vtkTypedArray[char] => vtkTypedArray<char>\n"

  "  vtkTypedArray[int8] => vtkTypedArray<signed char>\n"

  "  vtkTypedArray[uint8] => vtkTypedArray<unsigned char>\n"

  "  vtkTypedArray[int16] => vtkTypedArray<short>\n"

  "  vtkTypedArray[uint16] => vtkTypedArray<unsigned short>\n"

  "  vtkTypedArray[int32] => vtkTypedArray<int>\n"

  "  vtkTypedArray[uint32] => vtkTypedArray<unsigned int>\n"

  "  vtkTypedArray[int] => vtkTypedArray<long>\n"

  "  vtkTypedArray[uint] => vtkTypedArray<unsigned long>\n"

  "  vtkTypedArray[int64] => vtkTypedArray<long long>\n"

  "  vtkTypedArray[uint64] => vtkTypedArray<unsigned long long>\n"

  "  vtkTypedArray[float32] => vtkTypedArray<float>\n"

  "  vtkTypedArray[float64] => vtkTypedArray<double>\n"

  "  vtkTypedArray[str] => vtkTypedArray<vtkStdString>\n"

  "  vtkTypedArray[unicode] => vtkTypedArray<vtkUnicodeString>\n"

  "  vtkTypedArray[vtkVariant] => vtkTypedArray<vtkVariant>\n"
;

PyObject *PyvtkTypedArray_TemplateNew()
{
  PyObject *o;

  PyObject *temp = PyVTKTemplate_New("vtkCommonCorePython.vtkTypedArray",
                                     PyvtkTypedArray_Doc);

  o = PyvtkTypedArray_IcE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkTypedArray_IaE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkTypedArray_IhE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkTypedArray_IsE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkTypedArray_ItE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkTypedArray_IiE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkTypedArray_IjE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkTypedArray_IlE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkTypedArray_ImE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkTypedArray_IxE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkTypedArray_IyE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkTypedArray_IfE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkTypedArray_IdE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkTypedArray_I12vtkStdStringE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkTypedArray_I16vtkUnicodeStringE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkTypedArray_I10vtkVariantE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  return temp;
}

void PyVTKAddFile_vtkTypedArray(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTypedArray_TemplateNew();

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

  if (o && PyDict_SetItemString(dict, "vtkTypedArray", o) != 0)
  {
    Py_DECREF(o);
  }

}

