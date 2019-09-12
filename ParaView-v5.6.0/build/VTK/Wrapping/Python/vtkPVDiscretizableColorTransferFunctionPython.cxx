// python wrapper for vtkPVDiscretizableColorTransferFunction
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
#include "vtkStdString.h"
#include "vtkPVDiscretizableColorTransferFunction.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVDiscretizableColorTransferFunction(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVDiscretizableColorTransferFunction_ClassNew(); }

#ifndef DECLARED_PyvtkDiscretizableColorTransferFunction_ClassNew
extern "C" { PyObject *PyvtkDiscretizableColorTransferFunction_ClassNew(); }
#define DECLARED_PyvtkDiscretizableColorTransferFunction_ClassNew
#endif

static const char *PyvtkPVDiscretizableColorTransferFunction_Doc =
  "vtkPVDiscretizableColorTransferFunction - custom version of\nvtkDiscretizableColorTransferFunction that adds some functionality.\n\n"
  "Superclass: vtkDiscretizableColorTransferFunction\n\n"
  "This class is the same as vtkDiscretizableColorTransferFunction, but\n"
  "it adds the concept of \"active\" annotations. These annotations are a\n"
  "subset of the full list of annotations available and are used in\n"
  "place of the full annotation list.\n\n";


static PyObject *
PyvtkPVDiscretizableColorTransferFunction_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVDiscretizableColorTransferFunction::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDiscretizableColorTransferFunction_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDiscretizableColorTransferFunction *op = static_cast<vtkPVDiscretizableColorTransferFunction *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVDiscretizableColorTransferFunction::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDiscretizableColorTransferFunction_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVDiscretizableColorTransferFunction *tempr = vtkPVDiscretizableColorTransferFunction::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDiscretizableColorTransferFunction_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDiscretizableColorTransferFunction *op = static_cast<vtkPVDiscretizableColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVDiscretizableColorTransferFunction *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVDiscretizableColorTransferFunction::NewInstance());

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
PyvtkPVDiscretizableColorTransferFunction_SetAnnotationsInFullSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnnotationsInFullSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDiscretizableColorTransferFunction *op = static_cast<vtkPVDiscretizableColorTransferFunction *>(vp);

  vtkAbstractArray *temp0 = nullptr;
  vtkStringArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray") &&
      ap.GetVTKObject(temp1, "vtkStringArray"))
  {
    if (ap.IsBound())
    {
      op->SetAnnotationsInFullSet(temp0, temp1);
    }
    else
    {
      op->vtkPVDiscretizableColorTransferFunction::SetAnnotationsInFullSet(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVDiscretizableColorTransferFunction_GetAnnotatedValuesInFullSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnnotatedValuesInFullSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDiscretizableColorTransferFunction *op = static_cast<vtkPVDiscretizableColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->GetAnnotatedValuesInFullSet() :
      op->vtkPVDiscretizableColorTransferFunction::GetAnnotatedValuesInFullSet());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDiscretizableColorTransferFunction_GetAnnotationsInFullSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnnotationsInFullSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDiscretizableColorTransferFunction *op = static_cast<vtkPVDiscretizableColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetAnnotationsInFullSet() :
      op->vtkPVDiscretizableColorTransferFunction::GetAnnotationsInFullSet());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDiscretizableColorTransferFunction_SetAnnotationInFullSet_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnnotationInFullSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDiscretizableColorTransferFunction *op = static_cast<vtkPVDiscretizableColorTransferFunction *>(vp);

  vtkVariant *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkStdString temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant") &&
      ap.GetValue(temp1))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->SetAnnotationInFullSet(*temp0, temp1) :
      op->vtkPVDiscretizableColorTransferFunction::SetAnnotationInFullSet(*temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkPVDiscretizableColorTransferFunction_SetAnnotationInFullSet_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnnotationInFullSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDiscretizableColorTransferFunction *op = static_cast<vtkPVDiscretizableColorTransferFunction *>(vp);

  vtkStdString temp0;
  vtkStdString temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->SetAnnotationInFullSet(temp0, temp1) :
      op->vtkPVDiscretizableColorTransferFunction::SetAnnotationInFullSet(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVDiscretizableColorTransferFunction_SetAnnotationInFullSet_Methods[] = {
  {nullptr, PyvtkPVDiscretizableColorTransferFunction_SetAnnotationInFullSet_s1, METH_VARARGS,
   "@Ws vtkVariant"},
  {nullptr, PyvtkPVDiscretizableColorTransferFunction_SetAnnotationInFullSet_s2, METH_VARARGS,
   "@ss"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPVDiscretizableColorTransferFunction_SetAnnotationInFullSet(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPVDiscretizableColorTransferFunction_SetAnnotationInFullSet_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAnnotationInFullSet");
  return nullptr;
}



static PyObject *
PyvtkPVDiscretizableColorTransferFunction_ResetAnnotationsInFullSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetAnnotationsInFullSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDiscretizableColorTransferFunction *op = static_cast<vtkPVDiscretizableColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetAnnotationsInFullSet();
    }
    else
    {
      op->vtkPVDiscretizableColorTransferFunction::ResetAnnotationsInFullSet();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVDiscretizableColorTransferFunction_ResetActiveAnnotatedValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetActiveAnnotatedValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDiscretizableColorTransferFunction *op = static_cast<vtkPVDiscretizableColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetActiveAnnotatedValues();
    }
    else
    {
      op->vtkPVDiscretizableColorTransferFunction::ResetActiveAnnotatedValues();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVDiscretizableColorTransferFunction_SetActiveAnnotatedValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveAnnotatedValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDiscretizableColorTransferFunction *op = static_cast<vtkPVDiscretizableColorTransferFunction *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetActiveAnnotatedValue(temp0);
    }
    else
    {
      op->vtkPVDiscretizableColorTransferFunction::SetActiveAnnotatedValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVDiscretizableColorTransferFunction_SetNumberOfIndexedColorsInFullSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfIndexedColorsInFullSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDiscretizableColorTransferFunction *op = static_cast<vtkPVDiscretizableColorTransferFunction *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfIndexedColorsInFullSet(temp0);
    }
    else
    {
      op->vtkPVDiscretizableColorTransferFunction::SetNumberOfIndexedColorsInFullSet(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVDiscretizableColorTransferFunction_GetNumberOfIndexedColorsInFullSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIndexedColorsInFullSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDiscretizableColorTransferFunction *op = static_cast<vtkPVDiscretizableColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfIndexedColorsInFullSet() :
      op->vtkPVDiscretizableColorTransferFunction::GetNumberOfIndexedColorsInFullSet());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDiscretizableColorTransferFunction_SetIndexedColorInFullSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndexedColorInFullSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDiscretizableColorTransferFunction *op = static_cast<vtkPVDiscretizableColorTransferFunction *>(vp);

  unsigned int temp0;
  double temp1;
  double temp2;
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
      op->SetIndexedColorInFullSet(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPVDiscretizableColorTransferFunction::SetIndexedColorInFullSet(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVDiscretizableColorTransferFunction_GetIndexedColorInFullSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndexedColorInFullSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDiscretizableColorTransferFunction *op = static_cast<vtkPVDiscretizableColorTransferFunction *>(vp);

  unsigned int temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetIndexedColorInFullSet(temp0, temp1);
    }
    else
    {
      op->vtkPVDiscretizableColorTransferFunction::GetIndexedColorInFullSet(temp0, temp1);
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


static PyObject *
PyvtkPVDiscretizableColorTransferFunction_SetNumberOfIndexedOpacitiesInFullSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfIndexedOpacitiesInFullSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDiscretizableColorTransferFunction *op = static_cast<vtkPVDiscretizableColorTransferFunction *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfIndexedOpacitiesInFullSet(temp0);
    }
    else
    {
      op->vtkPVDiscretizableColorTransferFunction::SetNumberOfIndexedOpacitiesInFullSet(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVDiscretizableColorTransferFunction_GetNumberOfIndexedOpacitiesInFullSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIndexedOpacitiesInFullSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDiscretizableColorTransferFunction *op = static_cast<vtkPVDiscretizableColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfIndexedOpacitiesInFullSet() :
      op->vtkPVDiscretizableColorTransferFunction::GetNumberOfIndexedOpacitiesInFullSet());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDiscretizableColorTransferFunction_SetIndexedOpacityInFullSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndexedOpacityInFullSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDiscretizableColorTransferFunction *op = static_cast<vtkPVDiscretizableColorTransferFunction *>(vp);

  unsigned int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetIndexedOpacityInFullSet(temp0, temp1);
    }
    else
    {
      op->vtkPVDiscretizableColorTransferFunction::SetIndexedOpacityInFullSet(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVDiscretizableColorTransferFunction_GetIndexedOpacityInFullSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndexedOpacityInFullSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDiscretizableColorTransferFunction *op = static_cast<vtkPVDiscretizableColorTransferFunction *>(vp);

  unsigned int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetIndexedOpacityInFullSet(temp0, temp1);
    }
    else
    {
      op->vtkPVDiscretizableColorTransferFunction::GetIndexedOpacityInFullSet(temp0, temp1);
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


static PyObject *
PyvtkPVDiscretizableColorTransferFunction_SetUseActiveValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseActiveValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDiscretizableColorTransferFunction *op = static_cast<vtkPVDiscretizableColorTransferFunction *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseActiveValues(temp0);
    }
    else
    {
      op->vtkPVDiscretizableColorTransferFunction::SetUseActiveValues(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVDiscretizableColorTransferFunction_GetUseActiveValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseActiveValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDiscretizableColorTransferFunction *op = static_cast<vtkPVDiscretizableColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseActiveValues() :
      op->vtkPVDiscretizableColorTransferFunction::GetUseActiveValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDiscretizableColorTransferFunction_UseActiveValuesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseActiveValuesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDiscretizableColorTransferFunction *op = static_cast<vtkPVDiscretizableColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseActiveValuesOn();
    }
    else
    {
      op->vtkPVDiscretizableColorTransferFunction::UseActiveValuesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVDiscretizableColorTransferFunction_UseActiveValuesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseActiveValuesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDiscretizableColorTransferFunction *op = static_cast<vtkPVDiscretizableColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseActiveValuesOff();
    }
    else
    {
      op->vtkPVDiscretizableColorTransferFunction::UseActiveValuesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVDiscretizableColorTransferFunction_Build(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Build");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDiscretizableColorTransferFunction *op = static_cast<vtkPVDiscretizableColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Build();
    }
    else
    {
      op->vtkPVDiscretizableColorTransferFunction::Build();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVDiscretizableColorTransferFunction_Methods[] = {
  {"IsTypeOf", PyvtkPVDiscretizableColorTransferFunction_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVDiscretizableColorTransferFunction_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVDiscretizableColorTransferFunction_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkPVDiscretizableColorTransferFunction\nC++: static vtkPVDiscretizableColorTransferFunction *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVDiscretizableColorTransferFunction_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVDiscretizableColorTransferFunction\nC++: vtkPVDiscretizableColorTransferFunction *NewInstance()\n\n"},
  {"SetAnnotationsInFullSet", PyvtkPVDiscretizableColorTransferFunction_SetAnnotationsInFullSet, METH_VARARGS,
   "V.SetAnnotationsInFullSet(vtkAbstractArray, vtkStringArray)\nC++: virtual void SetAnnotationsInFullSet(\n    vtkAbstractArray *values, vtkStringArray *annotations)\n\nParallel API to API for annotated values to set/get the full list\nof annotations. A subset of the full list will be used.\n"},
  {"GetAnnotatedValuesInFullSet", PyvtkPVDiscretizableColorTransferFunction_GetAnnotatedValuesInFullSet, METH_VARARGS,
   "V.GetAnnotatedValuesInFullSet() -> vtkAbstractArray\nC++: virtual vtkAbstractArray *GetAnnotatedValuesInFullSet()\n\nParallel API to API for annotated values to set/get the full list\nof annotations. A subset of the full list will be used.\n"},
  {"GetAnnotationsInFullSet", PyvtkPVDiscretizableColorTransferFunction_GetAnnotationsInFullSet, METH_VARARGS,
   "V.GetAnnotationsInFullSet() -> vtkStringArray\nC++: virtual vtkStringArray *GetAnnotationsInFullSet()\n\nParallel API to API for annotated values to set/get the full list\nof annotations. A subset of the full list will be used.\n"},
  {"SetAnnotationInFullSet", PyvtkPVDiscretizableColorTransferFunction_SetAnnotationInFullSet, METH_VARARGS,
   "V.SetAnnotationInFullSet(vtkVariant, string) -> int\nC++: virtual vtkIdType SetAnnotationInFullSet(vtkVariant value,\n    vtkStdString annotation)\nV.SetAnnotationInFullSet(string, string) -> int\nC++: virtual vtkIdType SetAnnotationInFullSet(vtkStdString value,\n    vtkStdString annotation)\n\nParallel API to API for annotated values to set/get the full list\nof annotations. A subset of the full list will be used.\n"},
  {"ResetAnnotationsInFullSet", PyvtkPVDiscretizableColorTransferFunction_ResetAnnotationsInFullSet, METH_VARARGS,
   "V.ResetAnnotationsInFullSet()\nC++: virtual void ResetAnnotationsInFullSet()\n\nParallel API to API for annotated values to set/get the full list\nof annotations. A subset of the full list will be used.\n"},
  {"ResetActiveAnnotatedValues", PyvtkPVDiscretizableColorTransferFunction_ResetActiveAnnotatedValues, METH_VARARGS,
   "V.ResetActiveAnnotatedValues()\nC++: void ResetActiveAnnotatedValues()\n\n"},
  {"SetActiveAnnotatedValue", PyvtkPVDiscretizableColorTransferFunction_SetActiveAnnotatedValue, METH_VARARGS,
   "V.SetActiveAnnotatedValue(string)\nC++: void SetActiveAnnotatedValue(vtkStdString value)\n\n"},
  {"SetNumberOfIndexedColorsInFullSet", PyvtkPVDiscretizableColorTransferFunction_SetNumberOfIndexedColorsInFullSet, METH_VARARGS,
   "V.SetNumberOfIndexedColorsInFullSet(int)\nC++: void SetNumberOfIndexedColorsInFullSet(int n)\n\n"},
  {"GetNumberOfIndexedColorsInFullSet", PyvtkPVDiscretizableColorTransferFunction_GetNumberOfIndexedColorsInFullSet, METH_VARARGS,
   "V.GetNumberOfIndexedColorsInFullSet() -> int\nC++: int GetNumberOfIndexedColorsInFullSet()\n\n"},
  {"SetIndexedColorInFullSet", PyvtkPVDiscretizableColorTransferFunction_SetIndexedColorInFullSet, METH_VARARGS,
   "V.SetIndexedColorInFullSet(int, float, float, float)\nC++: void SetIndexedColorInFullSet(unsigned int index, double r,\n    double g, double b)\n\n"},
  {"GetIndexedColorInFullSet", PyvtkPVDiscretizableColorTransferFunction_GetIndexedColorInFullSet, METH_VARARGS,
   "V.GetIndexedColorInFullSet(int, [float, float, float])\nC++: void GetIndexedColorInFullSet(unsigned int index,\n    double rgb[3])\n\n"},
  {"SetNumberOfIndexedOpacitiesInFullSet", PyvtkPVDiscretizableColorTransferFunction_SetNumberOfIndexedOpacitiesInFullSet, METH_VARARGS,
   "V.SetNumberOfIndexedOpacitiesInFullSet(int)\nC++: void SetNumberOfIndexedOpacitiesInFullSet(int n)\n\n"},
  {"GetNumberOfIndexedOpacitiesInFullSet", PyvtkPVDiscretizableColorTransferFunction_GetNumberOfIndexedOpacitiesInFullSet, METH_VARARGS,
   "V.GetNumberOfIndexedOpacitiesInFullSet() -> int\nC++: int GetNumberOfIndexedOpacitiesInFullSet()\n\n"},
  {"SetIndexedOpacityInFullSet", PyvtkPVDiscretizableColorTransferFunction_SetIndexedOpacityInFullSet, METH_VARARGS,
   "V.SetIndexedOpacityInFullSet(int, float)\nC++: void SetIndexedOpacityInFullSet(unsigned int index,\n    double alpha)\n\n"},
  {"GetIndexedOpacityInFullSet", PyvtkPVDiscretizableColorTransferFunction_GetIndexedOpacityInFullSet, METH_VARARGS,
   "V.GetIndexedOpacityInFullSet(int, [float, ...])\nC++: void GetIndexedOpacityInFullSet(unsigned int index,\n    double *alpha)\n\n"},
  {"SetUseActiveValues", PyvtkPVDiscretizableColorTransferFunction_SetUseActiveValues, METH_VARARGS,
   "V.SetUseActiveValues(bool)\nC++: virtual void SetUseActiveValues(bool _arg)\n\nSet whether to use restrict annotations to only the values\ndesignated as active. Off by default.\n"},
  {"GetUseActiveValues", PyvtkPVDiscretizableColorTransferFunction_GetUseActiveValues, METH_VARARGS,
   "V.GetUseActiveValues() -> bool\nC++: virtual bool GetUseActiveValues()\n\nSet whether to use restrict annotations to only the values\ndesignated as active. Off by default.\n"},
  {"UseActiveValuesOn", PyvtkPVDiscretizableColorTransferFunction_UseActiveValuesOn, METH_VARARGS,
   "V.UseActiveValuesOn()\nC++: virtual void UseActiveValuesOn()\n\nSet whether to use restrict annotations to only the values\ndesignated as active. Off by default.\n"},
  {"UseActiveValuesOff", PyvtkPVDiscretizableColorTransferFunction_UseActiveValuesOff, METH_VARARGS,
   "V.UseActiveValuesOff()\nC++: virtual void UseActiveValuesOff()\n\nSet whether to use restrict annotations to only the values\ndesignated as active. Off by default.\n"},
  {"Build", PyvtkPVDiscretizableColorTransferFunction_Build, METH_VARARGS,
   "V.Build()\nC++: void Build() override;\n\nOverride to set only the active annotations\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVDiscretizableColorTransferFunction_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsRenderingPython.vtkPVDiscretizableColorTransferFunction", // tp_name
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
  PyvtkPVDiscretizableColorTransferFunction_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVDiscretizableColorTransferFunction_StaticNew()
{
  return vtkPVDiscretizableColorTransferFunction::New();
}

PyObject *PyvtkPVDiscretizableColorTransferFunction_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVDiscretizableColorTransferFunction_Type, PyvtkPVDiscretizableColorTransferFunction_Methods,
    "vtkPVDiscretizableColorTransferFunction",
 &PyvtkPVDiscretizableColorTransferFunction_StaticNew);

  PyTypeObject *pytype = &PyvtkPVDiscretizableColorTransferFunction_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDiscretizableColorTransferFunction_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVDiscretizableColorTransferFunction(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVDiscretizableColorTransferFunction_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVDiscretizableColorTransferFunction", o) != 0)
  {
    Py_DECREF(o);
  }

}

