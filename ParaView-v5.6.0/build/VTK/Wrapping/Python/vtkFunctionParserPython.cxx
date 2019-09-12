// python wrapper for vtkFunctionParser
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
#include "vtkFunctionParser.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkFunctionParser(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkFunctionParser_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkFunctionParser_Doc =
  "vtkFunctionParser - Parse and evaluate a mathematical expression\n\n"
  "Superclass: vtkObject\n\n"
  "vtkFunctionParser is a class that takes in a mathematical expression\n"
  "as a char string, parses it, and evaluates it at the specified values\n"
  "of the variables in the input string.\n\n"
  "You can use the \"if\" operator to create conditional expressions such\n"
  "as if ( test, trueresult, falseresult). These evaluate the boolean\n"
  "valued test expression and then evaluate either the trueresult or the\n"
  "falseresult expression to produce a final (scalar or vector valued)\n"
  "value. \"test\" may contain <,>,=,|,&, and () and all three\n"
  "subexpressions can evaluate arbitrary function operators (ln, cos, +,\n"
  "if, etc)\n\n"
  "@par Thanks: Juha Nieminen (juha.nieminen@gmail.com) for relicensing\n"
  "this branch of the function parser code that this class is based upon\n"
  "under the new BSD license so that it could be used in VTK. Note, the\n"
  "BSD license applies to this version of the function parser only (by\n"
  "permission of the author), and not the original library.\n\n"
  "@par Thanks: Thomas Dunne (thomas.dunne@iwr.uni-heidelberg.de) for\n"
  "adding code for two-parameter-parsing and a few functions (sign, min,\n"
  "max).\n\n"
  "@par Thanks: Sid Sydoriak (sxs@lanl.gov) for adding boolean\n"
  "operations and conditional expressions and for fixing a variety of\n"
  "bugs.\n\n";


static PyObject *
PyvtkFunctionParser_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkFunctionParser::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFunctionParser_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFunctionParser::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFunctionParser_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkFunctionParser *tempr = vtkFunctionParser::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFunctionParser_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFunctionParser *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFunctionParser::NewInstance());

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
PyvtkFunctionParser_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkFunctionParser::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFunctionParser_SetFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFunction(temp0);
    }
    else
    {
      op->vtkFunctionParser::SetFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFunctionParser_GetFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFunction() :
      op->vtkFunctionParser::GetFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFunctionParser_IsScalarResult(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsScalarResult");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsScalarResult() :
      op->vtkFunctionParser::IsScalarResult());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFunctionParser_IsVectorResult(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsVectorResult");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsVectorResult() :
      op->vtkFunctionParser::IsVectorResult());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFunctionParser_GetScalarResult(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarResult");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScalarResult() :
      op->vtkFunctionParser::GetScalarResult());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFunctionParser_GetVectorResult_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorResult");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetVectorResult() :
      op->vtkFunctionParser::GetVectorResult());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkFunctionParser_GetVectorResult_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorResult");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetVectorResult(temp0);
    }
    else
    {
      op->vtkFunctionParser::GetVectorResult(temp0);
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
PyvtkFunctionParser_GetVectorResult(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkFunctionParser_GetVectorResult_s1(self, args);
    case 1:
      return PyvtkFunctionParser_GetVectorResult_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetVectorResult");
  return nullptr;
}



static PyObject *
PyvtkFunctionParser_SetScalarVariableValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarVariableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  const char *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetScalarVariableValue(temp0, temp1);
    }
    else
    {
      op->vtkFunctionParser::SetScalarVariableValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFunctionParser_SetScalarVariableValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarVariableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetScalarVariableValue(temp0, temp1);
    }
    else
    {
      op->vtkFunctionParser::SetScalarVariableValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkFunctionParser_SetScalarVariableValue_Methods[] = {
  {nullptr, PyvtkFunctionParser_SetScalarVariableValue_s1, METH_VARARGS,
   "@zd"},
  {nullptr, PyvtkFunctionParser_SetScalarVariableValue_s2, METH_VARARGS,
   "@id"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkFunctionParser_SetScalarVariableValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkFunctionParser_SetScalarVariableValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetScalarVariableValue");
  return nullptr;
}



static PyObject *
PyvtkFunctionParser_GetScalarVariableValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarVariableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScalarVariableValue(temp0) :
      op->vtkFunctionParser::GetScalarVariableValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkFunctionParser_GetScalarVariableValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarVariableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScalarVariableValue(temp0) :
      op->vtkFunctionParser::GetScalarVariableValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkFunctionParser_GetScalarVariableValue_Methods[] = {
  {nullptr, PyvtkFunctionParser_GetScalarVariableValue_s1, METH_VARARGS,
   "@z"},
  {nullptr, PyvtkFunctionParser_GetScalarVariableValue_s2, METH_VARARGS,
   "@i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkFunctionParser_GetScalarVariableValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkFunctionParser_GetScalarVariableValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetScalarVariableValue");
  return nullptr;
}



static PyObject *
PyvtkFunctionParser_SetVectorVariableValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorVariableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  const char *temp0 = nullptr;
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
      op->SetVectorVariableValue(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkFunctionParser::SetVectorVariableValue(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFunctionParser_SetVectorVariableValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorVariableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  const char *temp0 = nullptr;
  const size_t size1 = 3;
  double temp1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    if (ap.IsBound())
    {
      op->SetVectorVariableValue(temp0, temp1);
    }
    else
    {
      op->vtkFunctionParser::SetVectorVariableValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFunctionParser_SetVectorVariableValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorVariableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  int temp0;
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
      op->SetVectorVariableValue(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkFunctionParser::SetVectorVariableValue(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFunctionParser_SetVectorVariableValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorVariableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    if (ap.IsBound())
    {
      op->SetVectorVariableValue(temp0, temp1);
    }
    else
    {
      op->vtkFunctionParser::SetVectorVariableValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkFunctionParser_SetVectorVariableValue_Methods[] = {
  {nullptr, PyvtkFunctionParser_SetVectorVariableValue_s1, METH_VARARGS,
   "@zddd"},
  {nullptr, PyvtkFunctionParser_SetVectorVariableValue_s2, METH_VARARGS,
   "@zP *d"},
  {nullptr, PyvtkFunctionParser_SetVectorVariableValue_s3, METH_VARARGS,
   "@iddd"},
  {nullptr, PyvtkFunctionParser_SetVectorVariableValue_s4, METH_VARARGS,
   "@iP *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkFunctionParser_SetVectorVariableValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkFunctionParser_SetVectorVariableValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetVectorVariableValue");
  return nullptr;
}



static PyObject *
PyvtkFunctionParser_GetVectorVariableValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorVariableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  const char *temp0 = nullptr;
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetVectorVariableValue(temp0) :
      op->vtkFunctionParser::GetVectorVariableValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkFunctionParser_GetVectorVariableValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorVariableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  const char *temp0 = nullptr;
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
      op->GetVectorVariableValue(temp0, temp1);
    }
    else
    {
      op->vtkFunctionParser::GetVectorVariableValue(temp0, temp1);
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
PyvtkFunctionParser_GetVectorVariableValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorVariableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  int temp0;
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetVectorVariableValue(temp0) :
      op->vtkFunctionParser::GetVectorVariableValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkFunctionParser_GetVectorVariableValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorVariableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  int temp0;
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
      op->GetVectorVariableValue(temp0, temp1);
    }
    else
    {
      op->vtkFunctionParser::GetVectorVariableValue(temp0, temp1);
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

static PyMethodDef PyvtkFunctionParser_GetVectorVariableValue_Methods[] = {
  {nullptr, PyvtkFunctionParser_GetVectorVariableValue_s1, METH_VARARGS,
   "@z"},
  {nullptr, PyvtkFunctionParser_GetVectorVariableValue_s2, METH_VARARGS,
   "@zP *d"},
  {nullptr, PyvtkFunctionParser_GetVectorVariableValue_s3, METH_VARARGS,
   "@i"},
  {nullptr, PyvtkFunctionParser_GetVectorVariableValue_s4, METH_VARARGS,
   "@iP *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkFunctionParser_GetVectorVariableValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkFunctionParser_GetVectorVariableValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetVectorVariableValue");
  return nullptr;
}



static PyObject *
PyvtkFunctionParser_GetNumberOfScalarVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfScalarVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfScalarVariables() :
      op->vtkFunctionParser::GetNumberOfScalarVariables());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFunctionParser_GetScalarVariableIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarVariableIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarVariableIndex(temp0) :
      op->vtkFunctionParser::GetScalarVariableIndex(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFunctionParser_GetNumberOfVectorVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVectorVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfVectorVariables() :
      op->vtkFunctionParser::GetNumberOfVectorVariables());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFunctionParser_GetVectorVariableIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorVariableIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVectorVariableIndex(temp0) :
      op->vtkFunctionParser::GetVectorVariableIndex(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFunctionParser_GetScalarVariableName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarVariableName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetScalarVariableName(temp0) :
      op->vtkFunctionParser::GetScalarVariableName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFunctionParser_GetVectorVariableName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorVariableName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetVectorVariableName(temp0) :
      op->vtkFunctionParser::GetVectorVariableName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFunctionParser_GetScalarVariableNeeded_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarVariableNeeded");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetScalarVariableNeeded(temp0) :
      op->vtkFunctionParser::GetScalarVariableNeeded(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkFunctionParser_GetScalarVariableNeeded_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarVariableNeeded");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetScalarVariableNeeded(temp0) :
      op->vtkFunctionParser::GetScalarVariableNeeded(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkFunctionParser_GetScalarVariableNeeded_Methods[] = {
  {nullptr, PyvtkFunctionParser_GetScalarVariableNeeded_s1, METH_VARARGS,
   "@i"},
  {nullptr, PyvtkFunctionParser_GetScalarVariableNeeded_s2, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkFunctionParser_GetScalarVariableNeeded(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkFunctionParser_GetScalarVariableNeeded_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetScalarVariableNeeded");
  return nullptr;
}



static PyObject *
PyvtkFunctionParser_GetVectorVariableNeeded_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorVariableNeeded");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetVectorVariableNeeded(temp0) :
      op->vtkFunctionParser::GetVectorVariableNeeded(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkFunctionParser_GetVectorVariableNeeded_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorVariableNeeded");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetVectorVariableNeeded(temp0) :
      op->vtkFunctionParser::GetVectorVariableNeeded(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkFunctionParser_GetVectorVariableNeeded_Methods[] = {
  {nullptr, PyvtkFunctionParser_GetVectorVariableNeeded_s1, METH_VARARGS,
   "@i"},
  {nullptr, PyvtkFunctionParser_GetVectorVariableNeeded_s2, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkFunctionParser_GetVectorVariableNeeded(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkFunctionParser_GetVectorVariableNeeded_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetVectorVariableNeeded");
  return nullptr;
}



static PyObject *
PyvtkFunctionParser_RemoveAllVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllVariables();
    }
    else
    {
      op->vtkFunctionParser::RemoveAllVariables();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFunctionParser_RemoveScalarVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveScalarVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveScalarVariables();
    }
    else
    {
      op->vtkFunctionParser::RemoveScalarVariables();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFunctionParser_RemoveVectorVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveVectorVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveVectorVariables();
    }
    else
    {
      op->vtkFunctionParser::RemoveVectorVariables();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFunctionParser_SetReplaceInvalidValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReplaceInvalidValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReplaceInvalidValues(temp0);
    }
    else
    {
      op->vtkFunctionParser::SetReplaceInvalidValues(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFunctionParser_GetReplaceInvalidValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReplaceInvalidValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReplaceInvalidValues() :
      op->vtkFunctionParser::GetReplaceInvalidValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFunctionParser_ReplaceInvalidValuesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceInvalidValuesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReplaceInvalidValuesOn();
    }
    else
    {
      op->vtkFunctionParser::ReplaceInvalidValuesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFunctionParser_ReplaceInvalidValuesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceInvalidValuesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReplaceInvalidValuesOff();
    }
    else
    {
      op->vtkFunctionParser::ReplaceInvalidValuesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFunctionParser_SetReplacementValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReplacementValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReplacementValue(temp0);
    }
    else
    {
      op->vtkFunctionParser::SetReplacementValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFunctionParser_GetReplacementValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReplacementValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetReplacementValue() :
      op->vtkFunctionParser::GetReplacementValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFunctionParser_InvalidateFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvalidateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InvalidateFunction();
    }
    else
    {
      op->vtkFunctionParser::InvalidateFunction();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkFunctionParser_Methods[] = {
  {"IsTypeOf", PyvtkFunctionParser_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkFunctionParser_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkFunctionParser_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkFunctionParser\nC++: static vtkFunctionParser *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkFunctionParser_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkFunctionParser\nC++: vtkFunctionParser *NewInstance()\n\n"},
  {"GetMTime", PyvtkFunctionParser_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn parser's MTime\n"},
  {"SetFunction", PyvtkFunctionParser_SetFunction, METH_VARARGS,
   "V.SetFunction(string)\nC++: void SetFunction(const char *function)\n\nSet/Get input string to evaluate.\n"},
  {"GetFunction", PyvtkFunctionParser_GetFunction, METH_VARARGS,
   "V.GetFunction() -> string\nC++: virtual char *GetFunction()\n\nSet/Get input string to evaluate.\n"},
  {"IsScalarResult", PyvtkFunctionParser_IsScalarResult, METH_VARARGS,
   "V.IsScalarResult() -> int\nC++: int IsScalarResult()\n\nCheck whether the result is a scalar result.  If it isn't, then\neither the result is a vector or an error has occurred.\n"},
  {"IsVectorResult", PyvtkFunctionParser_IsVectorResult, METH_VARARGS,
   "V.IsVectorResult() -> int\nC++: int IsVectorResult()\n\nCheck whether the result is a vector result.  If it isn't, then\neither the result is scalar or an error has occurred.\n"},
  {"GetScalarResult", PyvtkFunctionParser_GetScalarResult, METH_VARARGS,
   "V.GetScalarResult() -> float\nC++: double GetScalarResult()\n\nGet a scalar result from evaluating the input function.\n"},
  {"GetVectorResult", PyvtkFunctionParser_GetVectorResult, METH_VARARGS,
   "V.GetVectorResult() -> (float, float, float)\nC++: double *GetVectorResult()\nV.GetVectorResult([float, float, float])\nC++: void GetVectorResult(double result[3])\n\nGet a vector result from evaluating the input function.\n"},
  {"SetScalarVariableValue", PyvtkFunctionParser_SetScalarVariableValue, METH_VARARGS,
   "V.SetScalarVariableValue(string, float)\nC++: void SetScalarVariableValue(const char *variableName,\n    double value)\nV.SetScalarVariableValue(int, float)\nC++: void SetScalarVariableValue(int i, double value)\n\nSet the value of a scalar variable.  If a variable with this name\nexists, then its value will be set to the new value.  If there is\nnot already a variable with this name, variableName will be added\nto the list of variables, and its value will be set to the new\nvalue.\n"},
  {"GetScalarVariableValue", PyvtkFunctionParser_GetScalarVariableValue, METH_VARARGS,
   "V.GetScalarVariableValue(string) -> float\nC++: double GetScalarVariableValue(const char *variableName)\nV.GetScalarVariableValue(int) -> float\nC++: double GetScalarVariableValue(int i)\n\nGet the value of a scalar variable.\n"},
  {"SetVectorVariableValue", PyvtkFunctionParser_SetVectorVariableValue, METH_VARARGS,
   "V.SetVectorVariableValue(string, float, float, float)\nC++: void SetVectorVariableValue(const char *variableName,\n    double xValue, double yValue, double zValue)\nV.SetVectorVariableValue(string, (float, float, float))\nC++: void SetVectorVariableValue(const char *variableName,\n    const double values[3])\nV.SetVectorVariableValue(int, float, float, float)\nC++: void SetVectorVariableValue(int i, double xValue,\n    double yValue, double zValue)\nV.SetVectorVariableValue(int, (float, float, float))\nC++: void SetVectorVariableValue(int i, const double values[3])\n\nSet the value of a vector variable.  If a variable with this name\nexists, then its value will be set to the new value.  If there is\nnot already a variable with this name, variableName will be added\nto the list of variables, and its value will be set to the new\nvalue.\n"},
  {"GetVectorVariableValue", PyvtkFunctionParser_GetVectorVariableValue, METH_VARARGS,
   "V.GetVectorVariableValue(string) -> (float, float, float)\nC++: double *GetVectorVariableValue(const char *variableName)\nV.GetVectorVariableValue(string, [float, float, float])\nC++: void GetVectorVariableValue(const char *variableName,\n    double value[3])\nV.GetVectorVariableValue(int) -> (float, float, float)\nC++: double *GetVectorVariableValue(int i)\nV.GetVectorVariableValue(int, [float, float, float])\nC++: void GetVectorVariableValue(int i, double value[3])\n\nGet the value of a vector variable.\n"},
  {"GetNumberOfScalarVariables", PyvtkFunctionParser_GetNumberOfScalarVariables, METH_VARARGS,
   "V.GetNumberOfScalarVariables() -> int\nC++: int GetNumberOfScalarVariables()\n\nGet the number of scalar variables.\n"},
  {"GetScalarVariableIndex", PyvtkFunctionParser_GetScalarVariableIndex, METH_VARARGS,
   "V.GetScalarVariableIndex(string) -> int\nC++: int GetScalarVariableIndex(const char *name)\n\nGet scalar variable index or -1 if not found\n"},
  {"GetNumberOfVectorVariables", PyvtkFunctionParser_GetNumberOfVectorVariables, METH_VARARGS,
   "V.GetNumberOfVectorVariables() -> int\nC++: int GetNumberOfVectorVariables()\n\nGet the number of vector variables.\n"},
  {"GetVectorVariableIndex", PyvtkFunctionParser_GetVectorVariableIndex, METH_VARARGS,
   "V.GetVectorVariableIndex(string) -> int\nC++: int GetVectorVariableIndex(const char *name)\n\nGet scalar variable index or -1 if not found\n"},
  {"GetScalarVariableName", PyvtkFunctionParser_GetScalarVariableName, METH_VARARGS,
   "V.GetScalarVariableName(int) -> string\nC++: const char *GetScalarVariableName(int i)\n\nGet the ith scalar variable name.\n"},
  {"GetVectorVariableName", PyvtkFunctionParser_GetVectorVariableName, METH_VARARGS,
   "V.GetVectorVariableName(int) -> string\nC++: const char *GetVectorVariableName(int i)\n\nGet the ith vector variable name.\n"},
  {"GetScalarVariableNeeded", PyvtkFunctionParser_GetScalarVariableNeeded, METH_VARARGS,
   "V.GetScalarVariableNeeded(int) -> bool\nC++: bool GetScalarVariableNeeded(int i)\nV.GetScalarVariableNeeded(string) -> bool\nC++: bool GetScalarVariableNeeded(const char *variableName)\n\nReturns whether a scalar variable is needed for the function\nevaluation. This is only valid after a successful Parse(). Thus,\ncall GetScalarResult() or IsScalarResult() or similar method\nbefore calling this.\n"},
  {"GetVectorVariableNeeded", PyvtkFunctionParser_GetVectorVariableNeeded, METH_VARARGS,
   "V.GetVectorVariableNeeded(int) -> bool\nC++: bool GetVectorVariableNeeded(int i)\nV.GetVectorVariableNeeded(string) -> bool\nC++: bool GetVectorVariableNeeded(const char *variableName)\n\nReturns whether a vector variable is needed for the function\nevaluation. This is only valid after a successful Parse(). Thus,\ncall GetVectorResult() or IsVectorResult() or similar method\nbefore calling this.\n"},
  {"RemoveAllVariables", PyvtkFunctionParser_RemoveAllVariables, METH_VARARGS,
   "V.RemoveAllVariables()\nC++: void RemoveAllVariables()\n\nRemove all the current variables.\n"},
  {"RemoveScalarVariables", PyvtkFunctionParser_RemoveScalarVariables, METH_VARARGS,
   "V.RemoveScalarVariables()\nC++: void RemoveScalarVariables()\n\nRemove all the scalar variables.\n"},
  {"RemoveVectorVariables", PyvtkFunctionParser_RemoveVectorVariables, METH_VARARGS,
   "V.RemoveVectorVariables()\nC++: void RemoveVectorVariables()\n\nRemove all the vector variables.\n"},
  {"SetReplaceInvalidValues", PyvtkFunctionParser_SetReplaceInvalidValues, METH_VARARGS,
   "V.SetReplaceInvalidValues(int)\nC++: virtual void SetReplaceInvalidValues(vtkTypeBool _arg)\n\nWhen ReplaceInvalidValues is on, all invalid values (such as\nsqrt(-2), note that function parser does not handle complex\nnumbers) will be replaced by ReplacementValue. Otherwise an error\nwill be reported\n"},
  {"GetReplaceInvalidValues", PyvtkFunctionParser_GetReplaceInvalidValues, METH_VARARGS,
   "V.GetReplaceInvalidValues() -> int\nC++: virtual vtkTypeBool GetReplaceInvalidValues()\n\nWhen ReplaceInvalidValues is on, all invalid values (such as\nsqrt(-2), note that function parser does not handle complex\nnumbers) will be replaced by ReplacementValue. Otherwise an error\nwill be reported\n"},
  {"ReplaceInvalidValuesOn", PyvtkFunctionParser_ReplaceInvalidValuesOn, METH_VARARGS,
   "V.ReplaceInvalidValuesOn()\nC++: virtual void ReplaceInvalidValuesOn()\n\nWhen ReplaceInvalidValues is on, all invalid values (such as\nsqrt(-2), note that function parser does not handle complex\nnumbers) will be replaced by ReplacementValue. Otherwise an error\nwill be reported\n"},
  {"ReplaceInvalidValuesOff", PyvtkFunctionParser_ReplaceInvalidValuesOff, METH_VARARGS,
   "V.ReplaceInvalidValuesOff()\nC++: virtual void ReplaceInvalidValuesOff()\n\nWhen ReplaceInvalidValues is on, all invalid values (such as\nsqrt(-2), note that function parser does not handle complex\nnumbers) will be replaced by ReplacementValue. Otherwise an error\nwill be reported\n"},
  {"SetReplacementValue", PyvtkFunctionParser_SetReplacementValue, METH_VARARGS,
   "V.SetReplacementValue(float)\nC++: virtual void SetReplacementValue(double _arg)\n\nWhen ReplaceInvalidValues is on, all invalid values (such as\nsqrt(-2), note that function parser does not handle complex\nnumbers) will be replaced by ReplacementValue. Otherwise an error\nwill be reported\n"},
  {"GetReplacementValue", PyvtkFunctionParser_GetReplacementValue, METH_VARARGS,
   "V.GetReplacementValue() -> float\nC++: virtual double GetReplacementValue()\n\nWhen ReplaceInvalidValues is on, all invalid values (such as\nsqrt(-2), note that function parser does not handle complex\nnumbers) will be replaced by ReplacementValue. Otherwise an error\nwill be reported\n"},
  {"InvalidateFunction", PyvtkFunctionParser_InvalidateFunction, METH_VARARGS,
   "V.InvalidateFunction()\nC++: void InvalidateFunction()\n\nAllow the user to force the function to be re-parsed\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkFunctionParser_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonMiscPython.vtkFunctionParser", // tp_name
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
  PyvtkFunctionParser_Doc, // tp_doc
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

static vtkObjectBase *PyvtkFunctionParser_StaticNew()
{
  return vtkFunctionParser::New();
}

PyObject *PyvtkFunctionParser_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkFunctionParser_Type, PyvtkFunctionParser_Methods,
    "vtkFunctionParser",
 &PyvtkFunctionParser_StaticNew);

  PyTypeObject *pytype = &PyvtkFunctionParser_Type;

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

void PyVTKAddFile_vtkFunctionParser(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFunctionParser_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkFunctionParser", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 50; c++)
  {
    static const struct { const char *name; int value; }
      constants[50] = {
        { "VTK_PARSER_IMMEDIATE", 1 },
        { "VTK_PARSER_UNARY_MINUS", 2 },
        { "VTK_PARSER_UNARY_PLUS", 3 },
        { "VTK_PARSER_ADD", 4 },
        { "VTK_PARSER_SUBTRACT", 5 },
        { "VTK_PARSER_MULTIPLY", 6 },
        { "VTK_PARSER_DIVIDE", 7 },
        { "VTK_PARSER_POWER", 8 },
        { "VTK_PARSER_ABSOLUTE_VALUE", 9 },
        { "VTK_PARSER_EXPONENT", 10 },
        { "VTK_PARSER_CEILING", 11 },
        { "VTK_PARSER_FLOOR", 12 },
        { "VTK_PARSER_LOGARITHM", 13 },
        { "VTK_PARSER_LOGARITHME", 14 },
        { "VTK_PARSER_LOGARITHM10", 15 },
        { "VTK_PARSER_SQUARE_ROOT", 16 },
        { "VTK_PARSER_SINE", 17 },
        { "VTK_PARSER_COSINE", 18 },
        { "VTK_PARSER_TANGENT", 19 },
        { "VTK_PARSER_ARCSINE", 20 },
        { "VTK_PARSER_ARCCOSINE", 21 },
        { "VTK_PARSER_ARCTANGENT", 22 },
        { "VTK_PARSER_HYPERBOLIC_SINE", 23 },
        { "VTK_PARSER_HYPERBOLIC_COSINE", 24 },
        { "VTK_PARSER_HYPERBOLIC_TANGENT", 25 },
        { "VTK_PARSER_MIN", 26 },
        { "VTK_PARSER_MAX", 27 },
        { "VTK_PARSER_SIGN", 29 },
        { "VTK_PARSER_CROSS", 28 },
        { "VTK_PARSER_VECTOR_UNARY_MINUS", 30 },
        { "VTK_PARSER_VECTOR_UNARY_PLUS", 31 },
        { "VTK_PARSER_DOT_PRODUCT", 32 },
        { "VTK_PARSER_VECTOR_ADD", 33 },
        { "VTK_PARSER_VECTOR_SUBTRACT", 34 },
        { "VTK_PARSER_SCALAR_TIMES_VECTOR", 35 },
        { "VTK_PARSER_VECTOR_TIMES_SCALAR", 36 },
        { "VTK_PARSER_VECTOR_OVER_SCALAR", 37 },
        { "VTK_PARSER_MAGNITUDE", 38 },
        { "VTK_PARSER_NORMALIZE", 39 },
        { "VTK_PARSER_IHAT", 40 },
        { "VTK_PARSER_JHAT", 41 },
        { "VTK_PARSER_KHAT", 42 },
        { "VTK_PARSER_IF", 43 },
        { "VTK_PARSER_VECTOR_IF", 44 },
        { "VTK_PARSER_LESS_THAN", 45 },
        { "VTK_PARSER_GREATER_THAN", 46 },
        { "VTK_PARSER_EQUAL_TO", 47 },
        { "VTK_PARSER_AND", 48 },
        { "VTK_PARSER_OR", 49 },
        { "VTK_PARSER_BEGIN_VARIABLES", 50 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  o = PyFloat_FromDouble(VTK_FLOAT_MAX);
  if (o)
  {
    PyDict_SetItemString(dict, "VTK_PARSER_ERROR_RESULT", o);
    Py_DECREF(o);
  }
}

