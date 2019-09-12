// python wrapper for vtkPixelExtent
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkPixelExtent.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPixelExtent(PyObject *); }

static const char *PyvtkPixelExtent_Doc =
  "vtkPixelExtent - Representation of a cartesian pixel plane and common\noperations on it.\n\n"
  "The implementation is intended to be fast and light so that it may be\n"
  "used in place of int[4] with little or no performance penalty.\n\n"
  "NOTE in most cases operation on an empty object produces incorrect\n"
  "results. If it an issue query Empty() first.\n\n"
  "vtkPixelExtent()\n"
  "vtkPixelExtent(const vtkPixelExtent &other)\n";


static PyObject *
PyvtkPixelExtent_SetData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetData");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkPixelExtent *op = static_cast<vtkPixelExtent *>(vp);

  vtkPixelExtent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkPixelExtent"))
  {
    op->SetData(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkPixelExtent_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkPixelExtent *op = static_cast<vtkPixelExtent *>(vp);

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
PyvtkPixelExtent_GetData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetData");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkPixelExtent *op = static_cast<vtkPixelExtent *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = op->GetData();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPixelExtent_GetDataU(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataU");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkPixelExtent *op = static_cast<vtkPixelExtent *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int *tempr = op->GetDataU();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPixelExtent_GetStartIndex_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartIndex");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkPixelExtent *op = static_cast<vtkPixelExtent *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  int save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    op->GetStartIndex(temp0);

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
PyvtkPixelExtent_GetStartIndex_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartIndex");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkPixelExtent *op = static_cast<vtkPixelExtent *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  int save0[2];
  const size_t size1 = 2;
  int temp1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp0, save0, size0);

    op->GetStartIndex(temp0, temp1);

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
PyvtkPixelExtent_GetStartIndex(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkPixelExtent_GetStartIndex_s1(self, args);
    case 2:
      return PyvtkPixelExtent_GetStartIndex_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetStartIndex");
  return nullptr;
}



static PyObject *
PyvtkPixelExtent_GetEndIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndIndex");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkPixelExtent *op = static_cast<vtkPixelExtent *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  int save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    op->GetEndIndex(temp0);

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
PyvtkPixelExtent_Empty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Empty");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkPixelExtent *op = static_cast<vtkPixelExtent *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->Empty();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPixelExtent_Contains_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Contains");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkPixelExtent *op = static_cast<vtkPixelExtent *>(vp);

  vtkPixelExtent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkPixelExtent"))
  {
    int tempr = op->Contains(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkPixelExtent_Contains_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Contains");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkPixelExtent *op = static_cast<vtkPixelExtent *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = op->Contains(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPixelExtent_Contains(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkPixelExtent_Contains_s1(self, args);
    case 2:
      return PyvtkPixelExtent_Contains_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Contains");
  return nullptr;
}



static PyObject *
PyvtkPixelExtent_Disjoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Disjoint");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkPixelExtent *op = static_cast<vtkPixelExtent *>(vp);

  vtkPixelExtent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkPixelExtent"))
  {
    int tempr = op->Disjoint(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkPixelExtent_Size_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Size");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkPixelExtent *op = static_cast<vtkPixelExtent *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    size_t tempr = op->Size();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPixelExtent_Size_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Size");

  vtkPixelExtent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkPixelExtent"))
  {
    size_t tempr = vtkPixelExtent::Size(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkPixelExtent_Size(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkPixelExtent_Size_s1(self, args);
    case 1:
      return PyvtkPixelExtent_Size_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Size");
  return nullptr;
}



static PyObject *
PyvtkPixelExtent_Grow_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Grow");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkPixelExtent *op = static_cast<vtkPixelExtent *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->Grow(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPixelExtent_Grow_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Grow");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkPixelExtent *op = static_cast<vtkPixelExtent *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->Grow(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPixelExtent_Grow_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Grow");

  vtkPixelExtent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkPixelExtent") &&
      ap.GetValue(temp1))
  {
    vtkPixelExtent tempr = vtkPixelExtent::Grow(*temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkPixelExtent");
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkPixelExtent_Grow_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Grow");

  vtkPixelExtent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkPixelExtent *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkPixelExtent") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkPixelExtent") &&
      ap.GetValue(temp2))
  {
    vtkPixelExtent tempr = vtkPixelExtent::Grow(*temp0, *temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkPixelExtent");
    }
  }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkPixelExtent_Grow_Methods[] = {
  {nullptr, PyvtkPixelExtent_Grow_s2, METH_VARARGS,
   "@ii"},
  {nullptr, PyvtkPixelExtent_Grow_s3, METH_VARARGS | METH_STATIC,
   "Wi vtkPixelExtent"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPixelExtent_Grow(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPixelExtent_Grow_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkPixelExtent_Grow_s1(self, args);
    case 3:
      return PyvtkPixelExtent_Grow_s4(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Grow");
  return nullptr;
}



static PyObject *
PyvtkPixelExtent_GrowLow_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GrowLow");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkPixelExtent *op = static_cast<vtkPixelExtent *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->GrowLow(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPixelExtent_GrowLow_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GrowLow");

  vtkPixelExtent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkPixelExtent") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkPixelExtent tempr = vtkPixelExtent::GrowLow(*temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkPixelExtent");
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkPixelExtent_GrowLow(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkPixelExtent_GrowLow_s1(self, args);
    case 3:
      return PyvtkPixelExtent_GrowLow_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GrowLow");
  return nullptr;
}



static PyObject *
PyvtkPixelExtent_GrowHigh_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GrowHigh");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkPixelExtent *op = static_cast<vtkPixelExtent *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->GrowHigh(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPixelExtent_GrowHigh_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GrowHigh");

  vtkPixelExtent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkPixelExtent") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkPixelExtent tempr = vtkPixelExtent::GrowHigh(*temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkPixelExtent");
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkPixelExtent_GrowHigh(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkPixelExtent_GrowHigh_s1(self, args);
    case 3:
      return PyvtkPixelExtent_GrowHigh_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GrowHigh");
  return nullptr;
}



static PyObject *
PyvtkPixelExtent_Shrink_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Shrink");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkPixelExtent *op = static_cast<vtkPixelExtent *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->Shrink(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPixelExtent_Shrink_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Shrink");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkPixelExtent *op = static_cast<vtkPixelExtent *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->Shrink(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPixelExtent_Shrink_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Shrink");

  vtkPixelExtent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkPixelExtent *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkPixelExtent") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkPixelExtent") &&
      ap.GetValue(temp2))
  {
    vtkPixelExtent tempr = vtkPixelExtent::Shrink(*temp0, *temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkPixelExtent");
    }
  }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);

  return result;
}

static PyObject *
PyvtkPixelExtent_Shrink_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Shrink");

  vtkPixelExtent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkPixelExtent") &&
      ap.GetValue(temp1))
  {
    vtkPixelExtent tempr = vtkPixelExtent::Shrink(*temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkPixelExtent");
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkPixelExtent_Shrink_Methods[] = {
  {nullptr, PyvtkPixelExtent_Shrink_s2, METH_VARARGS,
   "@ii"},
  {nullptr, PyvtkPixelExtent_Shrink_s4, METH_VARARGS | METH_STATIC,
   "Wi vtkPixelExtent"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPixelExtent_Shrink(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPixelExtent_Shrink_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkPixelExtent_Shrink_s1(self, args);
    case 3:
      return PyvtkPixelExtent_Shrink_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Shrink");
  return nullptr;
}



static PyObject *
PyvtkPixelExtent_Shift_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Shift");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkPixelExtent *op = static_cast<vtkPixelExtent *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->Shift();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPixelExtent_Shift_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Shift");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkPixelExtent *op = static_cast<vtkPixelExtent *>(vp);

  vtkPixelExtent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkPixelExtent"))
  {
    op->Shift(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkPixelExtent_Shift_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Shift");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkPixelExtent *op = static_cast<vtkPixelExtent *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    op->Shift(temp0);

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
PyvtkPixelExtent_Shift_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Shift");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkPixelExtent *op = static_cast<vtkPixelExtent *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->Shift(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPixelExtent_Shift_s5(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Shift");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    ap.Save(temp0, save0, size0);

    vtkPixelExtent::Shift(temp0, temp1);

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
PyvtkPixelExtent_Shift_s6(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Shift");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    vtkPixelExtent::Shift(temp0, temp1);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPixelExtent_Shift_Methods[] = {
  {nullptr, PyvtkPixelExtent_Shift_s2, METH_VARARGS,
   "@W vtkPixelExtent"},
  {nullptr, PyvtkPixelExtent_Shift_s3, METH_VARARGS,
   "@P *i"},
  {nullptr, PyvtkPixelExtent_Shift_s4, METH_VARARGS,
   "@ii"},
  {nullptr, PyvtkPixelExtent_Shift_s5, METH_VARARGS | METH_STATIC,
   "Pi *i"},
  {nullptr, PyvtkPixelExtent_Shift_s6, METH_VARARGS | METH_STATIC,
   "PP *i *i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPixelExtent_Shift(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPixelExtent_Shift_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkPixelExtent_Shift_s1(self, args);
    case 1:
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Shift");
  return nullptr;
}



static PyObject *
PyvtkPixelExtent_Split(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Split");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkPixelExtent *op = static_cast<vtkPixelExtent *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPixelExtent tempr = op->Split(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkPixelExtent");
    }
  }

  return result;
}


static PyObject *
PyvtkPixelExtent_CellToNode_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellToNode");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkPixelExtent *op = static_cast<vtkPixelExtent *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->CellToNode();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPixelExtent_CellToNode_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CellToNode");

  vtkPixelExtent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkPixelExtent"))
  {
    vtkPixelExtent tempr = vtkPixelExtent::CellToNode(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkPixelExtent");
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkPixelExtent_CellToNode(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkPixelExtent_CellToNode_s1(self, args);
    case 1:
      return PyvtkPixelExtent_CellToNode_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "CellToNode");
  return nullptr;
}



static PyObject *
PyvtkPixelExtent_NodeToCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NodeToCell");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkPixelExtent *op = static_cast<vtkPixelExtent *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->NodeToCell();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPixelExtent_NodeToCell_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "NodeToCell");

  vtkPixelExtent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkPixelExtent"))
  {
    vtkPixelExtent tempr = vtkPixelExtent::NodeToCell(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkPixelExtent");
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkPixelExtent_NodeToCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkPixelExtent_NodeToCell_s1(self, args);
    case 1:
      return PyvtkPixelExtent_NodeToCell_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "NodeToCell");
  return nullptr;
}


static PyMethodDef PyvtkPixelExtent_Methods[] = {
  {"SetData", PyvtkPixelExtent_SetData, METH_VARARGS,
   "V.SetData(vtkPixelExtent)\nC++: void SetData(const vtkPixelExtent &ext)\n\nSet the extent.\n"},
  {"Clear", PyvtkPixelExtent_Clear, METH_VARARGS,
   "V.Clear()\nC++: void Clear()\n\n"},
  {"GetData", PyvtkPixelExtent_GetData, METH_VARARGS,
   "V.GetData() -> (int, ...)\nC++: int *GetData()\n\nDirect access to internal data.\n"},
  {"GetDataU", PyvtkPixelExtent_GetDataU, METH_VARARGS,
   "V.GetDataU() -> (int, ...)\nC++: unsigned int *GetDataU()\n\n"},
  {"GetStartIndex", PyvtkPixelExtent_GetStartIndex, METH_VARARGS,
   "V.GetStartIndex([int, int])\nC++: void GetStartIndex(int first[2])\nV.GetStartIndex([int, int], (int, int))\nC++: void GetStartIndex(int first[2], const int origin[2])\n\nGet the start/end index.\n"},
  {"GetEndIndex", PyvtkPixelExtent_GetEndIndex, METH_VARARGS,
   "V.GetEndIndex([int, int])\nC++: void GetEndIndex(int last[2])\n\nGet the start/end index.\n"},
  {"Empty", PyvtkPixelExtent_Empty, METH_VARARGS,
   "V.Empty() -> int\nC++: int Empty()\n\nReturn true if empty.\n"},
  {"Contains", PyvtkPixelExtent_Contains, METH_VARARGS,
   "V.Contains(vtkPixelExtent) -> int\nC++: int Contains(const vtkPixelExtent &other)\nV.Contains(int, int) -> int\nC++: int Contains(int i, int j)\n\nReturn non-zero if this extent contains the other.\n"},
  {"Disjoint", PyvtkPixelExtent_Disjoint, METH_VARARGS,
   "V.Disjoint(vtkPixelExtent) -> int\nC++: int Disjoint(vtkPixelExtent other)\n\nReturn non-zero if the extent is disjoint from the other\n"},
  {"Size", PyvtkPixelExtent_Size, METH_VARARGS,
   "V.Size() -> int\nC++: size_t Size()\nV.Size(vtkPixelExtent) -> int\nC++: static size_t Size(const vtkPixelExtent &ext)\n\nGet the total number.\n"},
  {"Grow", PyvtkPixelExtent_Grow, METH_VARARGS,
   "V.Grow(int)\nC++: void Grow(int n)\nV.Grow(int, int)\nC++: void Grow(int q, int n)\nV.Grow(vtkPixelExtent, int) -> vtkPixelExtent\nC++: static vtkPixelExtent Grow(const vtkPixelExtent &inputExt,\n    int n)\nV.Grow(vtkPixelExtent, vtkPixelExtent, int) -> vtkPixelExtent\nC++: static vtkPixelExtent Grow(const vtkPixelExtent &inputExt,\n    const vtkPixelExtent &problemDomain, int n)\n\nExpand the extents by n.\n"},
  {"GrowLow", PyvtkPixelExtent_GrowLow, METH_VARARGS,
   "V.GrowLow(int, int)\nC++: void GrowLow(int q, int n)\nV.GrowLow(vtkPixelExtent, int, int) -> vtkPixelExtent\nC++: static vtkPixelExtent GrowLow(const vtkPixelExtent &ext,\n    int q, int n)\n\nExpand the extents by n.\n"},
  {"GrowHigh", PyvtkPixelExtent_GrowHigh, METH_VARARGS,
   "V.GrowHigh(int, int)\nC++: void GrowHigh(int q, int n)\nV.GrowHigh(vtkPixelExtent, int, int) -> vtkPixelExtent\nC++: static vtkPixelExtent GrowHigh(const vtkPixelExtent &ext,\n    int q, int n)\n\nExpand the extents by n.\n"},
  {"Shrink", PyvtkPixelExtent_Shrink, METH_VARARGS,
   "V.Shrink(int)\nC++: void Shrink(int n)\nV.Shrink(int, int)\nC++: void Shrink(int q, int n)\nV.Shrink(vtkPixelExtent, vtkPixelExtent, int) -> vtkPixelExtent\nC++: static vtkPixelExtent Shrink(const vtkPixelExtent &inputExt,\n    const vtkPixelExtent &problemDomain, int n)\nV.Shrink(vtkPixelExtent, int) -> vtkPixelExtent\nC++: static vtkPixelExtent Shrink(const vtkPixelExtent &inputExt,\n    int n)\n\nShrink the extent by n.\n"},
  {"Shift", PyvtkPixelExtent_Shift, METH_VARARGS,
   "V.Shift()\nC++: void Shift()\nV.Shift(vtkPixelExtent)\nC++: void Shift(const vtkPixelExtent &ext)\nV.Shift([int, ...])\nC++: void Shift(int *n)\nV.Shift(int, int)\nC++: void Shift(int q, int n)\nV.Shift([int, ...], int)\nC++: static void Shift(int *ij, int n)\nV.Shift([int, ...], [int, ...])\nC++: static void Shift(int *ij, int *n)\n\nShifts by low corner of this, moving to the origin.\n"},
  {"Split", PyvtkPixelExtent_Split, METH_VARARGS,
   "V.Split(int) -> vtkPixelExtent\nC++: vtkPixelExtent Split(int dir)\n\nDivide the extent in half in the given direction. The operation\nis done in-place the other half of the split extent is returned.\nThe return will be empty if the split could not be made.\n"},
  {"CellToNode", PyvtkPixelExtent_CellToNode, METH_VARARGS,
   "V.CellToNode()\nC++: void CellToNode()\nV.CellToNode(vtkPixelExtent) -> vtkPixelExtent\nC++: static vtkPixelExtent CellToNode(\n    const vtkPixelExtent &inputExt)\n\nIn-place conversion from cell based to node based extent, and\nvise-versa.\n"},
  {"NodeToCell", PyvtkPixelExtent_NodeToCell, METH_VARARGS,
   "V.NodeToCell()\nC++: void NodeToCell()\nV.NodeToCell(vtkPixelExtent) -> vtkPixelExtent\nC++: static vtkPixelExtent NodeToCell(\n    const vtkPixelExtent &inputExt)\n\nIn-place conversion from cell based to node based extent, and\nvise-versa.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkPixelExtent_vtkPixelExtent_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkPixelExtent");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkPixelExtent *op = new vtkPixelExtent();

    result = PyVTKSpecialObject_New("vtkPixelExtent", op);
  }

  return result;
}

static PyObject *
PyvtkPixelExtent_vtkPixelExtent_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkPixelExtent");

  vtkPixelExtent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkPixelExtent"))
  {
    vtkPixelExtent *op = new vtkPixelExtent(*temp0);

    result = PyVTKSpecialObject_New("vtkPixelExtent", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkPixelExtent_vtkPixelExtent_Methods[] = {
  {nullptr, PyvtkPixelExtent_vtkPixelExtent_s2, METH_VARARGS,
   "@W vtkPixelExtent"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPixelExtent_vtkPixelExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkPixelExtent_vtkPixelExtent_s1(self, args);
    case 1:
      return PyvtkPixelExtent_vtkPixelExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkPixelExtent");
  return nullptr;
}


static PyObject *
PyvtkPixelExtent_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkPixelExtent_vtkPixelExtent(nullptr, args);
}

static void PyvtkPixelExtent_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkPixelExtent *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static PyObject *PyvtkPixelExtent_String(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  std::ostringstream os;
  if (obj->vtk_ptr)
  {
    os << *static_cast<const vtkPixelExtent *>(obj->vtk_ptr);
  }
  const std::string &s = os.str();
  return PyString_FromStringAndSize(s.data(), s.size());
}

static int PyvtkPixelExtent_CheckExact(PyObject *ob);

static PyObject *PyvtkPixelExtent_RichCompare(
  PyObject *o1, PyObject *o2, int opid)
{
  PyObject *n1 = nullptr;
  PyObject *n2 = nullptr;
  const vtkPixelExtent *so1 = nullptr;
  const vtkPixelExtent *so2 = nullptr;
  int result = -1;

  if (PyvtkPixelExtent_CheckExact(o1))
  {
    PyVTKSpecialObject *s1 = (PyVTKSpecialObject *)o1;
    so1 = static_cast<const vtkPixelExtent *>(s1->vtk_ptr);
  }
  else
  {
    so1 = static_cast<const vtkPixelExtent *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o1, "vtkPixelExtent", &n1));
    if (so1 == nullptr)
    {
      PyErr_Clear();
      Py_INCREF(Py_NotImplemented);
      return Py_NotImplemented;
    }
  }

  if (PyvtkPixelExtent_CheckExact(o2))
  {
    PyVTKSpecialObject *s2 = (PyVTKSpecialObject *)o2;
    so2 = static_cast<const vtkPixelExtent *>(s2->vtk_ptr);
  }
  else
  {
    so2 = static_cast<const vtkPixelExtent *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o2, "vtkPixelExtent", &n2));
    if (so2 == nullptr)
    {
      PyErr_Clear();
      Py_INCREF(Py_NotImplemented);
      return Py_NotImplemented;
    }
  }

  switch (opid)
  {
    case Py_LT:
      result = ((*so1) < (*so2));
      break;
    case Py_LE:
      break;
    case Py_EQ:
      result = ((*so1) == (*so2));
      break;
    case Py_NE:
      break;
    case Py_GT:
      break;
    case Py_GE:
      break;
  }

  if (n1)
  {
    Py_DECREF(n1);
  }
  else if (n2)
  {
    Py_DECREF(n2);
  }

  if (result == -1)
  {
    PyErr_SetString(PyExc_TypeError, "operation not available");
    return nullptr;
  }

  // avoids aliasing issues with Py_INCREF(Py_False)
  return PyBool_FromLong((long)result);
}

static Py_hash_t PyvtkPixelExtent_Hash(PyObject *self)
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

static PyTypeObject PyvtkPixelExtent_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkPixelExtent", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkPixelExtent_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkPixelExtent_Hash, // tp_hash
  nullptr, // tp_call
  PyvtkPixelExtent_String, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkPixelExtent_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  PyvtkPixelExtent_RichCompare, // tp_richcompare
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
  PyvtkPixelExtent_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static int PyvtkPixelExtent_CheckExact(PyObject *ob)
{
  return (Py_TYPE(ob) == &PyvtkPixelExtent_Type);
}

static void *PyvtkPixelExtent_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkPixelExtent(*static_cast<const vtkPixelExtent*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPixelExtent_TypeNew(); }

PyObject *PyvtkPixelExtent_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkPixelExtent_Type,
    PyvtkPixelExtent_Methods,
    PyvtkPixelExtent_vtkPixelExtent_Methods,
    &PyvtkPixelExtent_CCopy);

  PyTypeObject *pytype = &PyvtkPixelExtent_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPixelExtent(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPixelExtent_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkPixelExtent", o) != 0)
  {
    Py_DECREF(o);
  }

}

