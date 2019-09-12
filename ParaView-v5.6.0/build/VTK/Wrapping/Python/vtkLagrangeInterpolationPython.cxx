// python wrapper for vtkLagrangeInterpolation
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
#include "vtkVector.h"
#include "vtkVector.h"
#include "vtkLagrangeInterpolation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkLagrangeInterpolation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkLagrangeInterpolation_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkLagrangeInterpolation_Doc =
  "vtkLagrangeInterpolation\n\n"
  "Superclass: vtkObject\n\n"
  "See Also:\n\n";

static PyTypeObject PyvtkLagrangeInterpolation_Constants_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkLagrangeInterpolation.Constants", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkLagrangeInterpolation_Constants_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkLagrangeInterpolation_Constants_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkLagrangeInterpolation_Constants_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkLagrangeInterpolation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLagrangeInterpolation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeInterpolation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangeInterpolation *op = static_cast<vtkLagrangeInterpolation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLagrangeInterpolation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeInterpolation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLagrangeInterpolation *tempr = vtkLagrangeInterpolation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeInterpolation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangeInterpolation *op = static_cast<vtkLagrangeInterpolation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLagrangeInterpolation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLagrangeInterpolation::NewInstance());

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
PyvtkLagrangeInterpolation_EvaluateShapeFunctions(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "EvaluateShapeFunctions");

  int temp0;
  double temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp2, save2, size2);

    vtkLagrangeInterpolation::EvaluateShapeFunctions(temp0, temp1, temp2);

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeInterpolation_EvaluateShapeAndGradient(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "EvaluateShapeAndGradient");

  int temp0;
  double temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
  {
    ap.Save(temp2, save2, size2);
    ap.Save(temp3, save3, size3);

    vtkLagrangeInterpolation::EvaluateShapeAndGradient(temp0, temp1, temp2, temp3);

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeInterpolation_Tensor1ShapeFunctions(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Tensor1ShapeFunctions");

  const size_t size0 = 1;
  int temp0[1];
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(size1);
  double *temp1 = store1.Data();
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp2, save2, size2);

    int tempr = vtkLagrangeInterpolation::Tensor1ShapeFunctions(temp0, temp1, temp2);

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeInterpolation_Tensor1ShapeDerivatives(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Tensor1ShapeDerivatives");

  const size_t size0 = 1;
  int temp0[1];
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(size1);
  double *temp1 = store1.Data();
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp2, save2, size2);

    int tempr = vtkLagrangeInterpolation::Tensor1ShapeDerivatives(temp0, temp1, temp2);

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeInterpolation_Tensor2ShapeFunctions(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Tensor2ShapeFunctions");

  const size_t size0 = 2;
  int temp0[2];
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(size1);
  double *temp1 = store1.Data();
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp2, save2, size2);

    int tempr = vtkLagrangeInterpolation::Tensor2ShapeFunctions(temp0, temp1, temp2);

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeInterpolation_Tensor2ShapeDerivatives(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Tensor2ShapeDerivatives");

  const size_t size0 = 2;
  int temp0[2];
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(size1);
  double *temp1 = store1.Data();
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp2, save2, size2);

    int tempr = vtkLagrangeInterpolation::Tensor2ShapeDerivatives(temp0, temp1, temp2);

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeInterpolation_Tensor3ShapeFunctions(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Tensor3ShapeFunctions");

  const size_t size0 = 3;
  int temp0[3];
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(size1);
  double *temp1 = store1.Data();
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp2, save2, size2);

    int tempr = vtkLagrangeInterpolation::Tensor3ShapeFunctions(temp0, temp1, temp2);

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeInterpolation_Tensor3ShapeDerivatives(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Tensor3ShapeDerivatives");

  const size_t size0 = 3;
  int temp0[3];
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(size1);
  double *temp1 = store1.Data();
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp2, save2, size2);

    int tempr = vtkLagrangeInterpolation::Tensor3ShapeDerivatives(temp0, temp1, temp2);

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeInterpolation_Tensor3EvaluateDerivative(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Tensor3EvaluateDerivative");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangeInterpolation *op = static_cast<vtkLagrangeInterpolation *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(size1);
  double *temp1 = store1.Data();
  vtkPoints *temp2 = nullptr;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(size3);
  double *temp3 = store3.Data();
  int temp4;
  size_t size5 = ap.GetArgSize(5);
  vtkPythonArgs::Array<double> store5(2*size5);
  double *temp5 = store5.Data();
  double *save5 = (size5 == 0 ? nullptr : temp5 + size5);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkPoints") &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetArray(temp5, size5))
  {
    ap.Save(temp5, save5, size5);

    if (ap.IsBound())
    {
      op->Tensor3EvaluateDerivative(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkLagrangeInterpolation::Tensor3EvaluateDerivative(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (ap.HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeInterpolation_WedgeShapeFunctions(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "WedgeShapeFunctions");

  const size_t size0 = 3;
  int temp0[3];
  vtkIdType temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(size2);
  double *temp2 = store2.Data();
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
  {
    ap.Save(temp3, save3, size3);

    vtkLagrangeInterpolation::WedgeShapeFunctions(temp0, temp1, temp2, temp3);

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeInterpolation_WedgeShapeDerivatives(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "WedgeShapeDerivatives");

  const size_t size0 = 3;
  int temp0[3];
  vtkIdType temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(size2);
  double *temp2 = store2.Data();
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
  {
    ap.Save(temp3, save3, size3);

    vtkLagrangeInterpolation::WedgeShapeDerivatives(temp0, temp1, temp2, temp3);

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeInterpolation_WedgeEvaluate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WedgeEvaluate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangeInterpolation *op = static_cast<vtkLagrangeInterpolation *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  vtkIdType temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(size2);
  double *temp2 = store2.Data();
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  int temp4;
  size_t size5 = ap.GetArgSize(5);
  vtkPythonArgs::Array<double> store5(2*size5);
  double *temp5 = store5.Data();
  double *save5 = (size5 == 0 ? nullptr : temp5 + size5);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetArray(temp5, size5))
  {
    ap.Save(temp3, save3, size3);
    ap.Save(temp5, save5, size5);

    if (ap.IsBound())
    {
      op->WedgeEvaluate(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkLagrangeInterpolation::WedgeEvaluate(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (ap.HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeInterpolation_WedgeEvaluateDerivative(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WedgeEvaluateDerivative");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangeInterpolation *op = static_cast<vtkLagrangeInterpolation *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(size1);
  double *temp1 = store1.Data();
  vtkPoints *temp2 = nullptr;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(size3);
  double *temp3 = store3.Data();
  int temp4;
  size_t size5 = ap.GetArgSize(5);
  vtkPythonArgs::Array<double> store5(2*size5);
  double *temp5 = store5.Data();
  double *save5 = (size5 == 0 ? nullptr : temp5 + size5);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkPoints") &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetArray(temp5, size5))
  {
    ap.Save(temp5, save5, size5);

    if (ap.IsBound())
    {
      op->WedgeEvaluateDerivative(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkLagrangeInterpolation::WedgeEvaluateDerivative(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (ap.HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeInterpolation_GetParametricHexCoordinates(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetParametricHexCoordinates");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVector3d tempr = vtkLagrangeInterpolation::GetParametricHexCoordinates(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector3d");
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeInterpolation_GetPointIndicesBoundingHexEdge(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPointIndicesBoundingHexEdge");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVector2i tempr = vtkLagrangeInterpolation::GetPointIndicesBoundingHexEdge(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2i");
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeInterpolation_GetVaryingParameterOfHexEdge(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetVaryingParameterOfHexEdge");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLagrangeInterpolation::GetVaryingParameterOfHexEdge(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeInterpolation_GetFixedParametersOfHexEdge(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetFixedParametersOfHexEdge");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVector2i tempr = vtkLagrangeInterpolation::GetFixedParametersOfHexEdge(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2i");
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeInterpolation_GetPointIndicesBoundingHexFace(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPointIndicesBoundingHexFace");

  int temp0;
  size_t sizer = 4;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const int *tempr = vtkLagrangeInterpolation::GetPointIndicesBoundingHexFace(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeInterpolation_GetEdgeIndicesBoundingHexFace(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetEdgeIndicesBoundingHexFace");

  int temp0;
  size_t sizer = 4;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const int *tempr = vtkLagrangeInterpolation::GetEdgeIndicesBoundingHexFace(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeInterpolation_GetVaryingParametersOfHexFace(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetVaryingParametersOfHexFace");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVector2i tempr = vtkLagrangeInterpolation::GetVaryingParametersOfHexFace(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2i");
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeInterpolation_GetFixedParameterOfHexFace(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetFixedParameterOfHexFace");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLagrangeInterpolation::GetFixedParameterOfHexFace(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeInterpolation_GetParametricWedgeCoordinates(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetParametricWedgeCoordinates");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVector3d tempr = vtkLagrangeInterpolation::GetParametricWedgeCoordinates(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector3d");
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeInterpolation_GetPointIndicesBoundingWedgeEdge(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPointIndicesBoundingWedgeEdge");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVector2i tempr = vtkLagrangeInterpolation::GetPointIndicesBoundingWedgeEdge(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2i");
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeInterpolation_GetVaryingParameterOfWedgeEdge(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetVaryingParameterOfWedgeEdge");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLagrangeInterpolation::GetVaryingParameterOfWedgeEdge(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeInterpolation_GetFixedParametersOfWedgeEdge(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetFixedParametersOfWedgeEdge");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVector2i tempr = vtkLagrangeInterpolation::GetFixedParametersOfWedgeEdge(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2i");
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeInterpolation_GetPointIndicesBoundingWedgeFace(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPointIndicesBoundingWedgeFace");

  int temp0;
  size_t sizer = 4;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const int *tempr = vtkLagrangeInterpolation::GetPointIndicesBoundingWedgeFace(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeInterpolation_GetEdgeIndicesBoundingWedgeFace(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetEdgeIndicesBoundingWedgeFace");

  int temp0;
  size_t sizer = 4;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const int *tempr = vtkLagrangeInterpolation::GetEdgeIndicesBoundingWedgeFace(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeInterpolation_GetVaryingParametersOfWedgeFace(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetVaryingParametersOfWedgeFace");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVector2i tempr = vtkLagrangeInterpolation::GetVaryingParametersOfWedgeFace(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2i");
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeInterpolation_GetFixedParameterOfWedgeFace(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetFixedParameterOfWedgeFace");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLagrangeInterpolation::GetFixedParameterOfWedgeFace(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkLagrangeInterpolation_Methods[] = {
  {"IsTypeOf", PyvtkLagrangeInterpolation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLagrangeInterpolation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLagrangeInterpolation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkLagrangeInterpolation\nC++: static vtkLagrangeInterpolation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLagrangeInterpolation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkLagrangeInterpolation\nC++: vtkLagrangeInterpolation *NewInstance()\n\n"},
  {"EvaluateShapeFunctions", PyvtkLagrangeInterpolation_EvaluateShapeFunctions, METH_VARARGS,
   "V.EvaluateShapeFunctions(int, float, [float, ...])\nC++: static void EvaluateShapeFunctions(int order, double pcoord,\n    double *shape)\n\n"},
  {"EvaluateShapeAndGradient", PyvtkLagrangeInterpolation_EvaluateShapeAndGradient, METH_VARARGS,
   "V.EvaluateShapeAndGradient(int, float, [float, ...], [float, ...])\nC++: static void EvaluateShapeAndGradient(int order,\n    double pcoord, double *shape, double *grad)\n\n"},
  {"Tensor1ShapeFunctions", PyvtkLagrangeInterpolation_Tensor1ShapeFunctions, METH_VARARGS,
   "V.Tensor1ShapeFunctions((int), (float, ...), [float, ...]) -> int\nC++: static int Tensor1ShapeFunctions(const int order[1],\n    const double *pcoords, double *shape)\n\n"},
  {"Tensor1ShapeDerivatives", PyvtkLagrangeInterpolation_Tensor1ShapeDerivatives, METH_VARARGS,
   "V.Tensor1ShapeDerivatives((int), (float, ...), [float, ...])\n    -> int\nC++: static int Tensor1ShapeDerivatives(const int order[1],\n    const double *pcoords, double *derivs)\n\n"},
  {"Tensor2ShapeFunctions", PyvtkLagrangeInterpolation_Tensor2ShapeFunctions, METH_VARARGS,
   "V.Tensor2ShapeFunctions((int, int), (float, ...), [float, ...])\n    -> int\nC++: static int Tensor2ShapeFunctions(const int order[2],\n    const double *pcoords, double *shape)\n\n"},
  {"Tensor2ShapeDerivatives", PyvtkLagrangeInterpolation_Tensor2ShapeDerivatives, METH_VARARGS,
   "V.Tensor2ShapeDerivatives((int, int), (float, ...), [float, ...])\n    -> int\nC++: static int Tensor2ShapeDerivatives(const int order[2],\n    const double *pcoords, double *derivs)\n\n"},
  {"Tensor3ShapeFunctions", PyvtkLagrangeInterpolation_Tensor3ShapeFunctions, METH_VARARGS,
   "V.Tensor3ShapeFunctions((int, int, int), (float, ...), [float,\n    ...]) -> int\nC++: static int Tensor3ShapeFunctions(const int order[3],\n    const double *pcoords, double *shape)\n\n"},
  {"Tensor3ShapeDerivatives", PyvtkLagrangeInterpolation_Tensor3ShapeDerivatives, METH_VARARGS,
   "V.Tensor3ShapeDerivatives((int, int, int), (float, ...), [float,\n    ...]) -> int\nC++: static int Tensor3ShapeDerivatives(const int order[3],\n    const double *pcoords, double *derivs)\n\n"},
  {"Tensor3EvaluateDerivative", PyvtkLagrangeInterpolation_Tensor3EvaluateDerivative, METH_VARARGS,
   "V.Tensor3EvaluateDerivative((int, int, int), (float, ...),\n    vtkPoints, (float, ...), int, [float, ...])\nC++: void Tensor3EvaluateDerivative(const int order[3],\n    const double *pcoords, vtkPoints *points,\n    const double *fieldVals, int fieldDim, double *fieldDerivs)\n\n"},
  {"WedgeShapeFunctions", PyvtkLagrangeInterpolation_WedgeShapeFunctions, METH_VARARGS,
   "V.WedgeShapeFunctions((int, int, int), int, (float, ...), [float,\n    ...])\nC++: static void WedgeShapeFunctions(const int order[3],\n    const vtkIdType numberOfPoints, const double *pcoords,\n    double *shape)\n\n"},
  {"WedgeShapeDerivatives", PyvtkLagrangeInterpolation_WedgeShapeDerivatives, METH_VARARGS,
   "V.WedgeShapeDerivatives((int, int, int), int, (float, ...),\n    [float, ...])\nC++: static void WedgeShapeDerivatives(const int order[3],\n    const vtkIdType numberOfPoints, const double *pcoords,\n    double *derivs)\n\n"},
  {"WedgeEvaluate", PyvtkLagrangeInterpolation_WedgeEvaluate, METH_VARARGS,
   "V.WedgeEvaluate((int, int, int), int, (float, ...), [float, ...],\n    int, [float, ...])\nC++: void WedgeEvaluate(const int order[3],\n    const vtkIdType numberOfPoints, const double *pcoords,\n    double *fieldVals, int fieldDim, double *fieldAtPCoords)\n\n"},
  {"WedgeEvaluateDerivative", PyvtkLagrangeInterpolation_WedgeEvaluateDerivative, METH_VARARGS,
   "V.WedgeEvaluateDerivative((int, int, int), (float, ...),\n    vtkPoints, (float, ...), int, [float, ...])\nC++: void WedgeEvaluateDerivative(const int order[3],\n    const double *pcoords, vtkPoints *points,\n    const double *fieldVals, int fieldDim, double *fieldDerivs)\n\n"},
  {"GetParametricHexCoordinates", PyvtkLagrangeInterpolation_GetParametricHexCoordinates, METH_VARARGS,
   "V.GetParametricHexCoordinates(int) -> vtkVector3d\nC++: static vtkVector3d GetParametricHexCoordinates(int vertexId)\n\n"},
  {"GetPointIndicesBoundingHexEdge", PyvtkLagrangeInterpolation_GetPointIndicesBoundingHexEdge, METH_VARARGS,
   "V.GetPointIndicesBoundingHexEdge(int) -> vtkVector2i\nC++: static vtkVector2i GetPointIndicesBoundingHexEdge(int edgeId)\n\n"},
  {"GetVaryingParameterOfHexEdge", PyvtkLagrangeInterpolation_GetVaryingParameterOfHexEdge, METH_VARARGS,
   "V.GetVaryingParameterOfHexEdge(int) -> int\nC++: static int GetVaryingParameterOfHexEdge(int edgeId)\n\n"},
  {"GetFixedParametersOfHexEdge", PyvtkLagrangeInterpolation_GetFixedParametersOfHexEdge, METH_VARARGS,
   "V.GetFixedParametersOfHexEdge(int) -> vtkVector2i\nC++: static vtkVector2i GetFixedParametersOfHexEdge(int edgeId)\n\n"},
  {"GetPointIndicesBoundingHexFace", PyvtkLagrangeInterpolation_GetPointIndicesBoundingHexFace, METH_VARARGS,
   "V.GetPointIndicesBoundingHexFace(int) -> (int, int, int, int)\nC++: static const int *GetPointIndicesBoundingHexFace(int faceId)\n\n"},
  {"GetEdgeIndicesBoundingHexFace", PyvtkLagrangeInterpolation_GetEdgeIndicesBoundingHexFace, METH_VARARGS,
   "V.GetEdgeIndicesBoundingHexFace(int) -> (int, int, int, int)\nC++: static const int *GetEdgeIndicesBoundingHexFace(int faceId)\n\n"},
  {"GetVaryingParametersOfHexFace", PyvtkLagrangeInterpolation_GetVaryingParametersOfHexFace, METH_VARARGS,
   "V.GetVaryingParametersOfHexFace(int) -> vtkVector2i\nC++: static vtkVector2i GetVaryingParametersOfHexFace(int faceId)\n\n"},
  {"GetFixedParameterOfHexFace", PyvtkLagrangeInterpolation_GetFixedParameterOfHexFace, METH_VARARGS,
   "V.GetFixedParameterOfHexFace(int) -> int\nC++: static int GetFixedParameterOfHexFace(int faceId)\n\n"},
  {"GetParametricWedgeCoordinates", PyvtkLagrangeInterpolation_GetParametricWedgeCoordinates, METH_VARARGS,
   "V.GetParametricWedgeCoordinates(int) -> vtkVector3d\nC++: static vtkVector3d GetParametricWedgeCoordinates(\n    int vertexId)\n\n"},
  {"GetPointIndicesBoundingWedgeEdge", PyvtkLagrangeInterpolation_GetPointIndicesBoundingWedgeEdge, METH_VARARGS,
   "V.GetPointIndicesBoundingWedgeEdge(int) -> vtkVector2i\nC++: static vtkVector2i GetPointIndicesBoundingWedgeEdge(\n    int edgeId)\n\n"},
  {"GetVaryingParameterOfWedgeEdge", PyvtkLagrangeInterpolation_GetVaryingParameterOfWedgeEdge, METH_VARARGS,
   "V.GetVaryingParameterOfWedgeEdge(int) -> int\nC++: static int GetVaryingParameterOfWedgeEdge(int edgeId)\n\n"},
  {"GetFixedParametersOfWedgeEdge", PyvtkLagrangeInterpolation_GetFixedParametersOfWedgeEdge, METH_VARARGS,
   "V.GetFixedParametersOfWedgeEdge(int) -> vtkVector2i\nC++: static vtkVector2i GetFixedParametersOfWedgeEdge(int edgeId)\n\n"},
  {"GetPointIndicesBoundingWedgeFace", PyvtkLagrangeInterpolation_GetPointIndicesBoundingWedgeFace, METH_VARARGS,
   "V.GetPointIndicesBoundingWedgeFace(int) -> (int, int, int, int)\nC++: static const int *GetPointIndicesBoundingWedgeFace(\n    int faceId)\n\n"},
  {"GetEdgeIndicesBoundingWedgeFace", PyvtkLagrangeInterpolation_GetEdgeIndicesBoundingWedgeFace, METH_VARARGS,
   "V.GetEdgeIndicesBoundingWedgeFace(int) -> (int, int, int, int)\nC++: static const int *GetEdgeIndicesBoundingWedgeFace(int faceId)\n\n"},
  {"GetVaryingParametersOfWedgeFace", PyvtkLagrangeInterpolation_GetVaryingParametersOfWedgeFace, METH_VARARGS,
   "V.GetVaryingParametersOfWedgeFace(int) -> vtkVector2i\nC++: static vtkVector2i GetVaryingParametersOfWedgeFace(\n    int faceId)\n\n"},
  {"GetFixedParameterOfWedgeFace", PyvtkLagrangeInterpolation_GetFixedParameterOfWedgeFace, METH_VARARGS,
   "V.GetFixedParameterOfWedgeFace(int) -> int\nC++: static int GetFixedParameterOfWedgeFace(int faceId)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkLagrangeInterpolation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkLagrangeInterpolation", // tp_name
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
  PyvtkLagrangeInterpolation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkLagrangeInterpolation_StaticNew()
{
  return vtkLagrangeInterpolation::New();
}

PyObject *PyvtkLagrangeInterpolation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkLagrangeInterpolation_Type, PyvtkLagrangeInterpolation_Methods,
    "vtkLagrangeInterpolation",
 &PyvtkLagrangeInterpolation_StaticNew);

  PyTypeObject *pytype = &PyvtkLagrangeInterpolation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkLagrangeInterpolation_Constants_Type);
  PyvtkLagrangeInterpolation_Constants_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkLagrangeInterpolation_Constants_Type);

  o = (PyObject *)&PyvtkLagrangeInterpolation_Constants_Type;
  if (PyDict_SetItemString(d, "Constants", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkLagrangeInterpolation_Constants_FromEnum(vtkLagrangeInterpolation::MaxDegree);
  if (o)
  {
    PyDict_SetItemString(d, "MaxDegree", o);
    Py_DECREF(o);
  }
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkLagrangeInterpolation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLagrangeInterpolation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLagrangeInterpolation", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyBool_FromLong((long)(true));
  if (o)
  {
    PyDict_SetItemString(dict, "VTK_21_POINT_WEDGE", o);
    Py_DECREF(o);
  }
}

