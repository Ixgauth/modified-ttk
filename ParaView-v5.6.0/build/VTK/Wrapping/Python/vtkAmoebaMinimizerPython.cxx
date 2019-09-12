// python wrapper for vtkAmoebaMinimizer
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
#include "vtkAmoebaMinimizer.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAmoebaMinimizer(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAmoebaMinimizer_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkAmoebaMinimizer_Doc =
  "vtkAmoebaMinimizer - nonlinear optimization with a simplex\n\n"
  "Superclass: vtkObject\n\n"
  "vtkAmoebaMinimizer will modify a set of parameters in order to find\n"
  "the minimum of a specified function.  The method used is commonly\n"
  "known as the amoeba method, it constructs an n-dimensional simplex in\n"
  "parameter space (i.e. a tetrahedron if the number or parameters is 3)\n"
  "and moves the vertices around parameter space until a local minimum\n"
  "is found.  The amoeba method is robust, reasonably efficient, but is\n"
  "not guaranteed to find the global minimum if several local minima\n"
  "exist.\n\n";


static PyObject *
PyvtkAmoebaMinimizer_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAmoebaMinimizer::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAmoebaMinimizer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAmoebaMinimizer::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAmoebaMinimizer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAmoebaMinimizer *tempr = vtkAmoebaMinimizer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAmoebaMinimizer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAmoebaMinimizer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAmoebaMinimizer::NewInstance());

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
PyvtkAmoebaMinimizer_SetFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  PyObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFunction(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFunction(
        (temp0 == Py_None ? nullptr : vtkPythonVoidFunc),
        (temp0 == Py_None ? nullptr : temp0));
      if (temp0 != Py_None)
      {
        Py_INCREF(temp0);
      }
      op->SetFunctionArgDelete(
        (temp0 == Py_None ? nullptr : vtkPythonVoidFuncArgDelete));
    }
    else
    {
      op->vtkAmoebaMinimizer::SetFunction(
        (temp0 == Py_None ? nullptr : vtkPythonVoidFunc),
        (temp0 == Py_None ? nullptr : temp0));
      if (temp0 != Py_None)
      {
        Py_INCREF(temp0);
      }
      op->vtkAmoebaMinimizer::SetFunctionArgDelete(
        (temp0 == Py_None ? nullptr : vtkPythonVoidFuncArgDelete));
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAmoebaMinimizer_SetParameterValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParameterValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  const char *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetParameterValue(temp0, temp1);
    }
    else
    {
      op->vtkAmoebaMinimizer::SetParameterValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAmoebaMinimizer_SetParameterValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParameterValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetParameterValue(temp0, temp1);
    }
    else
    {
      op->vtkAmoebaMinimizer::SetParameterValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAmoebaMinimizer_SetParameterValue_Methods[] = {
  {nullptr, PyvtkAmoebaMinimizer_SetParameterValue_s1, METH_VARARGS,
   "@zd"},
  {nullptr, PyvtkAmoebaMinimizer_SetParameterValue_s2, METH_VARARGS,
   "@id"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkAmoebaMinimizer_SetParameterValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkAmoebaMinimizer_SetParameterValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetParameterValue");
  return nullptr;
}



static PyObject *
PyvtkAmoebaMinimizer_SetParameterScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParameterScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  const char *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetParameterScale(temp0, temp1);
    }
    else
    {
      op->vtkAmoebaMinimizer::SetParameterScale(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAmoebaMinimizer_SetParameterScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParameterScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetParameterScale(temp0, temp1);
    }
    else
    {
      op->vtkAmoebaMinimizer::SetParameterScale(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAmoebaMinimizer_SetParameterScale_Methods[] = {
  {nullptr, PyvtkAmoebaMinimizer_SetParameterScale_s1, METH_VARARGS,
   "@zd"},
  {nullptr, PyvtkAmoebaMinimizer_SetParameterScale_s2, METH_VARARGS,
   "@id"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkAmoebaMinimizer_SetParameterScale(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkAmoebaMinimizer_SetParameterScale_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetParameterScale");
  return nullptr;
}



static PyObject *
PyvtkAmoebaMinimizer_GetParameterScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParameterScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetParameterScale(temp0) :
      op->vtkAmoebaMinimizer::GetParameterScale(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAmoebaMinimizer_GetParameterScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParameterScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetParameterScale(temp0) :
      op->vtkAmoebaMinimizer::GetParameterScale(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAmoebaMinimizer_GetParameterScale_Methods[] = {
  {nullptr, PyvtkAmoebaMinimizer_GetParameterScale_s1, METH_VARARGS,
   "@z"},
  {nullptr, PyvtkAmoebaMinimizer_GetParameterScale_s2, METH_VARARGS,
   "@i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkAmoebaMinimizer_GetParameterScale(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkAmoebaMinimizer_GetParameterScale_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetParameterScale");
  return nullptr;
}



static PyObject *
PyvtkAmoebaMinimizer_GetParameterValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParameterValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetParameterValue(temp0) :
      op->vtkAmoebaMinimizer::GetParameterValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAmoebaMinimizer_GetParameterValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParameterValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetParameterValue(temp0) :
      op->vtkAmoebaMinimizer::GetParameterValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAmoebaMinimizer_GetParameterValue_Methods[] = {
  {nullptr, PyvtkAmoebaMinimizer_GetParameterValue_s1, METH_VARARGS,
   "@z"},
  {nullptr, PyvtkAmoebaMinimizer_GetParameterValue_s2, METH_VARARGS,
   "@i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkAmoebaMinimizer_GetParameterValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkAmoebaMinimizer_GetParameterValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetParameterValue");
  return nullptr;
}



static PyObject *
PyvtkAmoebaMinimizer_GetParameterName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParameterName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetParameterName(temp0) :
      op->vtkAmoebaMinimizer::GetParameterName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAmoebaMinimizer_GetNumberOfParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfParameters() :
      op->vtkAmoebaMinimizer::GetNumberOfParameters());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAmoebaMinimizer_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkAmoebaMinimizer::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAmoebaMinimizer_Minimize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Minimize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Minimize();
    }
    else
    {
      op->vtkAmoebaMinimizer::Minimize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAmoebaMinimizer_Iterate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Iterate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->Iterate() :
      op->vtkAmoebaMinimizer::Iterate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAmoebaMinimizer_SetFunctionValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFunctionValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFunctionValue(temp0);
    }
    else
    {
      op->vtkAmoebaMinimizer::SetFunctionValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAmoebaMinimizer_GetFunctionValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFunctionValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFunctionValue() :
      op->vtkAmoebaMinimizer::GetFunctionValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAmoebaMinimizer_SetContractionRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContractionRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetContractionRatio(temp0);
    }
    else
    {
      op->vtkAmoebaMinimizer::SetContractionRatio(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAmoebaMinimizer_GetContractionRatioMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContractionRatioMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetContractionRatioMinValue() :
      op->vtkAmoebaMinimizer::GetContractionRatioMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAmoebaMinimizer_GetContractionRatioMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContractionRatioMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetContractionRatioMaxValue() :
      op->vtkAmoebaMinimizer::GetContractionRatioMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAmoebaMinimizer_GetContractionRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContractionRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetContractionRatio() :
      op->vtkAmoebaMinimizer::GetContractionRatio());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAmoebaMinimizer_SetExpansionRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExpansionRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExpansionRatio(temp0);
    }
    else
    {
      op->vtkAmoebaMinimizer::SetExpansionRatio(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAmoebaMinimizer_GetExpansionRatioMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExpansionRatioMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetExpansionRatioMinValue() :
      op->vtkAmoebaMinimizer::GetExpansionRatioMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAmoebaMinimizer_GetExpansionRatioMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExpansionRatioMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetExpansionRatioMaxValue() :
      op->vtkAmoebaMinimizer::GetExpansionRatioMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAmoebaMinimizer_GetExpansionRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExpansionRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetExpansionRatio() :
      op->vtkAmoebaMinimizer::GetExpansionRatio());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAmoebaMinimizer_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTolerance(temp0);
    }
    else
    {
      op->vtkAmoebaMinimizer::SetTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAmoebaMinimizer_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkAmoebaMinimizer::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAmoebaMinimizer_SetParameterTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParameterTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetParameterTolerance(temp0);
    }
    else
    {
      op->vtkAmoebaMinimizer::SetParameterTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAmoebaMinimizer_GetParameterTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParameterTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetParameterTolerance() :
      op->vtkAmoebaMinimizer::GetParameterTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAmoebaMinimizer_SetMaxIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxIterations(temp0);
    }
    else
    {
      op->vtkAmoebaMinimizer::SetMaxIterations(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAmoebaMinimizer_GetMaxIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxIterations() :
      op->vtkAmoebaMinimizer::GetMaxIterations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAmoebaMinimizer_GetIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIterations() :
      op->vtkAmoebaMinimizer::GetIterations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAmoebaMinimizer_GetFunctionEvaluations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFunctionEvaluations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFunctionEvaluations() :
      op->vtkAmoebaMinimizer::GetFunctionEvaluations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAmoebaMinimizer_EvaluateFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EvaluateFunction();
    }
    else
    {
      op->vtkAmoebaMinimizer::EvaluateFunction();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAmoebaMinimizer_Methods[] = {
  {"IsTypeOf", PyvtkAmoebaMinimizer_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAmoebaMinimizer_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAmoebaMinimizer_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAmoebaMinimizer\nC++: static vtkAmoebaMinimizer *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAmoebaMinimizer_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAmoebaMinimizer\nC++: vtkAmoebaMinimizer *NewInstance()\n\n"},
  {"SetFunction", PyvtkAmoebaMinimizer_SetFunction, METH_VARARGS,
   "V.SetFunction(function)\nC++: void SetFunction(void (*f)(void *), void *arg)\n\nSpecify the function to be minimized.  When this function is\ncalled, it must get the parameter values by calling\nGetParameterValue() for each parameter, and then must call\nSetFunctionValue() to tell the minimizer what the result of the\nfunction evaluation was.  The number of function evaluations used\nfor the minimization can be retrieved using\nGetFunctionEvaluations().\n"},
  {"SetParameterValue", PyvtkAmoebaMinimizer_SetParameterValue, METH_VARARGS,
   "V.SetParameterValue(string, float)\nC++: void SetParameterValue(const char *name, double value)\nV.SetParameterValue(int, float)\nC++: void SetParameterValue(int i, double value)\n\nSet the initial value for the specified parameter.  Calling this\nfunction for any parameter will reset the Iterations and the\nFunctionEvaluations counts to zero.  You must also use\nSetParameterScale() to specify the step size by which the\nparameter will be modified during the minimization.  It is\npreferable to specify parameters by name, rather than by number.\n"},
  {"SetParameterScale", PyvtkAmoebaMinimizer_SetParameterScale, METH_VARARGS,
   "V.SetParameterScale(string, float)\nC++: void SetParameterScale(const char *name, double scale)\nV.SetParameterScale(int, float)\nC++: void SetParameterScale(int i, double scale)\n\nSet the scale to use when modifying a parameter, i.e. the initial\namount by which the parameter will be modified during the search\nfor the minimum.  It is preferable to identify scalars by name\nrather than by number.\n"},
  {"GetParameterScale", PyvtkAmoebaMinimizer_GetParameterScale, METH_VARARGS,
   "V.GetParameterScale(string) -> float\nC++: double GetParameterScale(const char *name)\nV.GetParameterScale(int) -> float\nC++: double GetParameterScale(int i)\n\nSet the scale to use when modifying a parameter, i.e. the initial\namount by which the parameter will be modified during the search\nfor the minimum.  It is preferable to identify scalars by name\nrather than by number.\n"},
  {"GetParameterValue", PyvtkAmoebaMinimizer_GetParameterValue, METH_VARARGS,
   "V.GetParameterValue(string) -> float\nC++: double GetParameterValue(const char *name)\nV.GetParameterValue(int) -> float\nC++: double GetParameterValue(int i)\n\nGet the value of a parameter at the current stage of the\nminimization. Call this method within the function that you are\nminimizing in order to get the current parameter values.  It is\npreferable to specify parameters by name rather than by index.\n"},
  {"GetParameterName", PyvtkAmoebaMinimizer_GetParameterName, METH_VARARGS,
   "V.GetParameterName(int) -> string\nC++: const char *GetParameterName(int i)\n\nFor completeness, an unchecked method to get the name for\nparticular parameter (the result will be nullptr if no name was\nset).\n"},
  {"GetNumberOfParameters", PyvtkAmoebaMinimizer_GetNumberOfParameters, METH_VARARGS,
   "V.GetNumberOfParameters() -> int\nC++: int GetNumberOfParameters()\n\nGet the number of parameters that have been set.\n"},
  {"Initialize", PyvtkAmoebaMinimizer_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: void Initialize()\n\nInitialize the minimizer.  This will reset the number of\nparameters to zero so that the minimizer can be reused.\n"},
  {"Minimize", PyvtkAmoebaMinimizer_Minimize, METH_VARARGS,
   "V.Minimize()\nC++: virtual void Minimize()\n\nIterate until the minimum is found to within the specified\ntolerance, or until the MaxIterations has been reached.\n"},
  {"Iterate", PyvtkAmoebaMinimizer_Iterate, METH_VARARGS,
   "V.Iterate() -> int\nC++: virtual int Iterate()\n\nPerform one iteration of minimization.  Returns zero if the\ntolerance stopping criterion has been met.\n"},
  {"SetFunctionValue", PyvtkAmoebaMinimizer_SetFunctionValue, METH_VARARGS,
   "V.SetFunctionValue(float)\nC++: virtual void SetFunctionValue(double _arg)\n\nGet the function value resulting from the minimization.\n"},
  {"GetFunctionValue", PyvtkAmoebaMinimizer_GetFunctionValue, METH_VARARGS,
   "V.GetFunctionValue() -> float\nC++: double GetFunctionValue()\n\nGet the function value resulting from the minimization.\n"},
  {"SetContractionRatio", PyvtkAmoebaMinimizer_SetContractionRatio, METH_VARARGS,
   "V.SetContractionRatio(float)\nC++: virtual void SetContractionRatio(double _arg)\n\nSet the amoeba contraction ratio.  The default value of 0.5 gives\nfast convergence, but larger values such as 0.6 or 0.7 provide\ngreater stability.\n"},
  {"GetContractionRatioMinValue", PyvtkAmoebaMinimizer_GetContractionRatioMinValue, METH_VARARGS,
   "V.GetContractionRatioMinValue() -> float\nC++: virtual double GetContractionRatioMinValue()\n\nSet the amoeba contraction ratio.  The default value of 0.5 gives\nfast convergence, but larger values such as 0.6 or 0.7 provide\ngreater stability.\n"},
  {"GetContractionRatioMaxValue", PyvtkAmoebaMinimizer_GetContractionRatioMaxValue, METH_VARARGS,
   "V.GetContractionRatioMaxValue() -> float\nC++: virtual double GetContractionRatioMaxValue()\n\nSet the amoeba contraction ratio.  The default value of 0.5 gives\nfast convergence, but larger values such as 0.6 or 0.7 provide\ngreater stability.\n"},
  {"GetContractionRatio", PyvtkAmoebaMinimizer_GetContractionRatio, METH_VARARGS,
   "V.GetContractionRatio() -> float\nC++: virtual double GetContractionRatio()\n\nSet the amoeba contraction ratio.  The default value of 0.5 gives\nfast convergence, but larger values such as 0.6 or 0.7 provide\ngreater stability.\n"},
  {"SetExpansionRatio", PyvtkAmoebaMinimizer_SetExpansionRatio, METH_VARARGS,
   "V.SetExpansionRatio(float)\nC++: virtual void SetExpansionRatio(double _arg)\n\nSet the amoeba expansion ratio.  The default value is 2.0, which\nprovides rapid expansion.  Values between 1.1 and 2.0 are valid.\n"},
  {"GetExpansionRatioMinValue", PyvtkAmoebaMinimizer_GetExpansionRatioMinValue, METH_VARARGS,
   "V.GetExpansionRatioMinValue() -> float\nC++: virtual double GetExpansionRatioMinValue()\n\nSet the amoeba expansion ratio.  The default value is 2.0, which\nprovides rapid expansion.  Values between 1.1 and 2.0 are valid.\n"},
  {"GetExpansionRatioMaxValue", PyvtkAmoebaMinimizer_GetExpansionRatioMaxValue, METH_VARARGS,
   "V.GetExpansionRatioMaxValue() -> float\nC++: virtual double GetExpansionRatioMaxValue()\n\nSet the amoeba expansion ratio.  The default value is 2.0, which\nprovides rapid expansion.  Values between 1.1 and 2.0 are valid.\n"},
  {"GetExpansionRatio", PyvtkAmoebaMinimizer_GetExpansionRatio, METH_VARARGS,
   "V.GetExpansionRatio() -> float\nC++: virtual double GetExpansionRatio()\n\nSet the amoeba expansion ratio.  The default value is 2.0, which\nprovides rapid expansion.  Values between 1.1 and 2.0 are valid.\n"},
  {"SetTolerance", PyvtkAmoebaMinimizer_SetTolerance, METH_VARARGS,
   "V.SetTolerance(float)\nC++: virtual void SetTolerance(double _arg)\n\nSpecify the value tolerance to aim for during the minimization.\n"},
  {"GetTolerance", PyvtkAmoebaMinimizer_GetTolerance, METH_VARARGS,
   "V.GetTolerance() -> float\nC++: virtual double GetTolerance()\n\nSpecify the value tolerance to aim for during the minimization.\n"},
  {"SetParameterTolerance", PyvtkAmoebaMinimizer_SetParameterTolerance, METH_VARARGS,
   "V.SetParameterTolerance(float)\nC++: virtual void SetParameterTolerance(double _arg)\n\nSpecify the parameter tolerance to aim for during the\nminimization.\n"},
  {"GetParameterTolerance", PyvtkAmoebaMinimizer_GetParameterTolerance, METH_VARARGS,
   "V.GetParameterTolerance() -> float\nC++: virtual double GetParameterTolerance()\n\nSpecify the parameter tolerance to aim for during the\nminimization.\n"},
  {"SetMaxIterations", PyvtkAmoebaMinimizer_SetMaxIterations, METH_VARARGS,
   "V.SetMaxIterations(int)\nC++: virtual void SetMaxIterations(int _arg)\n\nSpecify the maximum number of iterations to try before giving up.\n"},
  {"GetMaxIterations", PyvtkAmoebaMinimizer_GetMaxIterations, METH_VARARGS,
   "V.GetMaxIterations() -> int\nC++: virtual int GetMaxIterations()\n\nSpecify the maximum number of iterations to try before giving up.\n"},
  {"GetIterations", PyvtkAmoebaMinimizer_GetIterations, METH_VARARGS,
   "V.GetIterations() -> int\nC++: virtual int GetIterations()\n\nReturn the number of iterations that have been performed.  This\nis not necessarily the same as the number of function\nevaluations.\n"},
  {"GetFunctionEvaluations", PyvtkAmoebaMinimizer_GetFunctionEvaluations, METH_VARARGS,
   "V.GetFunctionEvaluations() -> int\nC++: virtual int GetFunctionEvaluations()\n\nReturn the number of times that the function has been evaluated.\n"},
  {"EvaluateFunction", PyvtkAmoebaMinimizer_EvaluateFunction, METH_VARARGS,
   "V.EvaluateFunction()\nC++: void EvaluateFunction()\n\nEvaluate the function.  This is usually called internally by the\nminimization code, but it is provided here as a public method.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAmoebaMinimizer_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonMathPython.vtkAmoebaMinimizer", // tp_name
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
  PyvtkAmoebaMinimizer_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAmoebaMinimizer_StaticNew()
{
  return vtkAmoebaMinimizer::New();
}

PyObject *PyvtkAmoebaMinimizer_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAmoebaMinimizer_Type, PyvtkAmoebaMinimizer_Methods,
    "vtkAmoebaMinimizer",
 &PyvtkAmoebaMinimizer_StaticNew);

  PyTypeObject *pytype = &PyvtkAmoebaMinimizer_Type;

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

void PyVTKAddFile_vtkAmoebaMinimizer(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAmoebaMinimizer_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAmoebaMinimizer", o) != 0)
  {
    Py_DECREF(o);
  }

}

