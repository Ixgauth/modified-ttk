// python wrapper for vtkTesting
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
#include "vtkTesting.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTesting(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTesting_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkTesting_Doc =
  "vtkTesting - a unified VTK regression testing framework\n\n"
  "Superclass: vtkObject\n\n"
  "This is a VTK regression testing framework. Looks like this:\n\n\n"
  " vtkTesting* t = vtkTesting::New();\n\n\n"
  " Two options for setting arguments\n\n\n"
  " Option 1:\n"
  " for ( cc = 1; cc < argc; cc ++ )\n"
  "   {\n"
  "   t->AddArgument(argv[cc]);\n"
  "   }\n\n\n"
  " Option 2:\n"
  " t->AddArgument(\"-D\");\n"
  " t->AddArgument(my_data_dir);\n"
  " t->AddArgument(\"-V\");\n"
  " t->AddArgument(my_valid_image);\n\n\n"
  " ...\n\n\n"
  " Two options of doing testing:\n\n\n"
  " Option 1:\n"
  " t->SetRenderWindow(renWin);\n"
  " int res = t->RegressionTest(threshold);\n\n\n"
  " Option 2:\n"
  " int res = t->RegressionTest(test_image, threshold);\n\n\n"
  " ...\n\n\n"
  " if (res == vtkTesting::PASSED)\n"
  "   {\n"
  "   Test passed\n"
  "   }\n"
  " else\n"
  "   {\n"
  "   Test failed\n"
  "   }\n\n";

static PyTypeObject PyvtkTesting_ReturnValue_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkTestingRenderingPython.vtkTesting.ReturnValue", // tp_name
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

PyObject *PyvtkTesting_ReturnValue_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkTesting_ReturnValue_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkTesting_ReturnValue_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkTesting_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTesting::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTesting_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTesting::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTesting_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTesting *tempr = vtkTesting::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTesting_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTesting *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTesting::NewInstance());

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
PyvtkTesting_FrontBufferOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FrontBufferOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FrontBufferOn();
    }
    else
    {
      op->vtkTesting::FrontBufferOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTesting_FrontBufferOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FrontBufferOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FrontBufferOff();
    }
    else
    {
      op->vtkTesting::FrontBufferOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTesting_GetFrontBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrontBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFrontBuffer() :
      op->vtkTesting::GetFrontBuffer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTesting_SetFrontBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrontBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFrontBuffer(temp0);
    }
    else
    {
      op->vtkTesting::SetFrontBuffer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTesting_RegressionTest_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegressionTest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->RegressionTest(temp0) :
      op->vtkTesting::RegressionTest(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTesting_RegressionTest_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegressionTest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  std::string temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->RegressionTest(temp0, temp1) :
      op->vtkTesting::RegressionTest(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTesting_RegressionTest_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegressionTest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  vtkAlgorithm *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkAlgorithm") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->RegressionTest(temp0, temp1) :
      op->vtkTesting::RegressionTest(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTesting_RegressionTest_Methods[] = {
  {nullptr, PyvtkTesting_RegressionTest_s2, METH_VARARGS,
   "@sd"},
  {nullptr, PyvtkTesting_RegressionTest_s3, METH_VARARGS,
   "@Vd *vtkAlgorithm"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTesting_RegressionTest(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTesting_RegressionTest_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkTesting_RegressionTest_s1(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RegressionTest");
  return nullptr;
}



static PyObject *
PyvtkTesting_CompareAverageOfL2Norm_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CompareAverageOfL2Norm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  vtkDataSet *temp0 = nullptr;
  vtkDataSet *temp1 = nullptr;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetVTKObject(temp1, "vtkDataSet") &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->CompareAverageOfL2Norm(temp0, temp1, temp2) :
      op->vtkTesting::CompareAverageOfL2Norm(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTesting_CompareAverageOfL2Norm_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CompareAverageOfL2Norm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  vtkDataArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->CompareAverageOfL2Norm(temp0, temp1, temp2) :
      op->vtkTesting::CompareAverageOfL2Norm(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTesting_CompareAverageOfL2Norm_Methods[] = {
  {nullptr, PyvtkTesting_CompareAverageOfL2Norm_s1, METH_VARARGS,
   "@VVd *vtkDataSet *vtkDataSet"},
  {nullptr, PyvtkTesting_CompareAverageOfL2Norm_s2, METH_VARARGS,
   "@VVd *vtkDataArray *vtkDataArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTesting_CompareAverageOfL2Norm(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTesting_CompareAverageOfL2Norm_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "CompareAverageOfL2Norm");
  return nullptr;
}



static PyObject *
PyvtkTesting_SetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  vtkRenderWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
  {
    if (ap.IsBound())
    {
      op->SetRenderWindow(temp0);
    }
    else
    {
      op->vtkTesting::SetRenderWindow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTesting_GetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetRenderWindow() :
      op->vtkTesting::GetRenderWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTesting_SetValidImageFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValidImageFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetValidImageFileName(temp0);
    }
    else
    {
      op->vtkTesting::SetValidImageFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTesting_GetValidImageFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValidImageFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetValidImageFileName() :
      op->vtkTesting::GetValidImageFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTesting_GetImageDifference(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageDifference");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetImageDifference() :
      op->vtkTesting::GetImageDifference());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTesting_AddArgument(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddArgument");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddArgument(temp0);
    }
    else
    {
      op->vtkTesting::AddArgument(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTesting_GetArgument(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArgument");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetArgument(temp0) :
      op->vtkTesting::GetArgument(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTesting_CleanArguments(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CleanArguments");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CleanArguments();
    }
    else
    {
      op->vtkTesting::CleanArguments();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTesting_GetDataRoot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataRoot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDataRoot() :
      op->vtkTesting::GetDataRoot());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTesting_SetDataRoot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataRoot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDataRoot(temp0);
    }
    else
    {
      op->vtkTesting::SetDataRoot(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTesting_GetTempDirectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTempDirectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTempDirectory() :
      op->vtkTesting::GetTempDirectory());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTesting_SetTempDirectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTempDirectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTempDirectory(temp0);
    }
    else
    {
      op->vtkTesting::SetTempDirectory(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTesting_IsValidImageSpecified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsValidImageSpecified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsValidImageSpecified() :
      op->vtkTesting::IsValidImageSpecified());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTesting_IsInteractiveModeSpecified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInteractiveModeSpecified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsInteractiveModeSpecified() :
      op->vtkTesting::IsInteractiveModeSpecified());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTesting_IsFlagSpecified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsFlagSpecified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsFlagSpecified(temp0) :
      op->vtkTesting::IsFlagSpecified(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTesting_SetBorderOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBorderOffset(temp0);
    }
    else
    {
      op->vtkTesting::SetBorderOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTesting_GetBorderOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorderOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBorderOffset() :
      op->vtkTesting::GetBorderOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTesting_SetVerbose(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVerbose");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVerbose(temp0);
    }
    else
    {
      op->vtkTesting::SetVerbose(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTesting_GetVerbose(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVerbose");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVerbose() :
      op->vtkTesting::GetVerbose());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTesting_Methods[] = {
  {"IsTypeOf", PyvtkTesting_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTesting_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTesting_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTesting\nC++: static vtkTesting *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTesting_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTesting\nC++: vtkTesting *NewInstance()\n\n"},
  {"FrontBufferOn", PyvtkTesting_FrontBufferOn, METH_VARARGS,
   "V.FrontBufferOn()\nC++: virtual void FrontBufferOn()\n\nUse the front buffer first for regression test comparisons. By\ndefault use back buffer first, then try the front buffer if the\ntest fails when comparing to the back buffer.\n"},
  {"FrontBufferOff", PyvtkTesting_FrontBufferOff, METH_VARARGS,
   "V.FrontBufferOff()\nC++: virtual void FrontBufferOff()\n\nUse the front buffer first for regression test comparisons. By\ndefault use back buffer first, then try the front buffer if the\ntest fails when comparing to the back buffer.\n"},
  {"GetFrontBuffer", PyvtkTesting_GetFrontBuffer, METH_VARARGS,
   "V.GetFrontBuffer() -> int\nC++: virtual vtkTypeBool GetFrontBuffer()\n\nUse the front buffer first for regression test comparisons. By\ndefault use back buffer first, then try the front buffer if the\ntest fails when comparing to the back buffer.\n"},
  {"SetFrontBuffer", PyvtkTesting_SetFrontBuffer, METH_VARARGS,
   "V.SetFrontBuffer(int)\nC++: void SetFrontBuffer(vtkTypeBool frontBuffer)\n\nUse the front buffer first for regression test comparisons. By\ndefault use back buffer first, then try the front buffer if the\ntest fails when comparing to the back buffer.\n"},
  {"RegressionTest", PyvtkTesting_RegressionTest, METH_VARARGS,
   "V.RegressionTest(float) -> int\nC++: virtual int RegressionTest(double thresh)\nV.RegressionTest(string, float) -> int\nC++: virtual int RegressionTest(const std::string &pngFileName,\n    double thresh)\nV.RegressionTest(vtkAlgorithm, float) -> int\nC++: virtual int RegressionTest(vtkAlgorithm *imageSource,\n    double thresh)\n\nPerform the test and return the result. Delegates to\nRegressionTestAndCaptureOutput, sending the output to cout.\n"},
  {"CompareAverageOfL2Norm", PyvtkTesting_CompareAverageOfL2Norm, METH_VARARGS,
   "V.CompareAverageOfL2Norm(vtkDataSet, vtkDataSet, float) -> int\nC++: int CompareAverageOfL2Norm(vtkDataSet *pdA, vtkDataSet *pdB,\n    double tol)\nV.CompareAverageOfL2Norm(vtkDataArray, vtkDataArray, float) -> int\nC++: int CompareAverageOfL2Norm(vtkDataArray *daA,\n    vtkDataArray *daB, double tol)\n\nCompute the average L2 norm between all point data data arrays of\ntypes float and double present in the data sets \"dsA\" and \"dsB\"\n(this includes instances of vtkPoints) Compare the result of each\nL2 comutation to \"tol\".\n"},
  {"SetRenderWindow", PyvtkTesting_SetRenderWindow, METH_VARARGS,
   "V.SetRenderWindow(vtkRenderWindow)\nC++: virtual void SetRenderWindow(vtkRenderWindow *rw)\n\nSet and get the render window that will be used for regression\ntesting.\n"},
  {"GetRenderWindow", PyvtkTesting_GetRenderWindow, METH_VARARGS,
   "V.GetRenderWindow() -> vtkRenderWindow\nC++: virtual vtkRenderWindow *GetRenderWindow()\n\nSet and get the render window that will be used for regression\ntesting.\n"},
  {"SetValidImageFileName", PyvtkTesting_SetValidImageFileName, METH_VARARGS,
   "V.SetValidImageFileName(string)\nC++: virtual void SetValidImageFileName(const char *_arg)\n\nSet/Get the name of the valid image file\n"},
  {"GetValidImageFileName", PyvtkTesting_GetValidImageFileName, METH_VARARGS,
   "V.GetValidImageFileName() -> string\nC++: const char *GetValidImageFileName()\n\nSet/Get the name of the valid image file\n"},
  {"GetImageDifference", PyvtkTesting_GetImageDifference, METH_VARARGS,
   "V.GetImageDifference() -> float\nC++: virtual double GetImageDifference()\n\nGet the image difference.\n"},
  {"AddArgument", PyvtkTesting_AddArgument, METH_VARARGS,
   "V.AddArgument(string)\nC++: void AddArgument(const char *argv)\n\nPass the command line arguments into this class to be processed.\nMany of the Get methods such as GetValidImage and GetBaselineRoot\nrely on the arguments to be passed in prior to retrieving these\nvalues. Just call AddArgument for each argument that was passed\ninto the command line\n"},
  {"GetArgument", PyvtkTesting_GetArgument, METH_VARARGS,
   "V.GetArgument(string) -> string\nC++: char *GetArgument(const char *arg)\n\nSearch for a specific argument by name and return its value\n(assumed to be the next on the command tail). Up to caller to\ndelete the returned string.\n"},
  {"CleanArguments", PyvtkTesting_CleanArguments, METH_VARARGS,
   "V.CleanArguments()\nC++: void CleanArguments()\n\nThis method delete all arguments in vtkTesting, this way you can\nreuse it in a loop where you would have multiple testing.\n"},
  {"GetDataRoot", PyvtkTesting_GetDataRoot, METH_VARARGS,
   "V.GetDataRoot() -> string\nC++: const char *GetDataRoot()\n\nGet some parameters from the command line arguments, env, or\ndefaults\n"},
  {"SetDataRoot", PyvtkTesting_SetDataRoot, METH_VARARGS,
   "V.SetDataRoot(string)\nC++: virtual void SetDataRoot(const char *_arg)\n\nGet some parameters from the command line arguments, env, or\ndefaults\n"},
  {"GetTempDirectory", PyvtkTesting_GetTempDirectory, METH_VARARGS,
   "V.GetTempDirectory() -> string\nC++: const char *GetTempDirectory()\n\nGet some parameters from the command line arguments, env, or\ndefaults\n"},
  {"SetTempDirectory", PyvtkTesting_SetTempDirectory, METH_VARARGS,
   "V.SetTempDirectory(string)\nC++: virtual void SetTempDirectory(const char *_arg)\n\nGet some parameters from the command line arguments, env, or\ndefaults\n"},
  {"IsValidImageSpecified", PyvtkTesting_IsValidImageSpecified, METH_VARARGS,
   "V.IsValidImageSpecified() -> int\nC++: int IsValidImageSpecified()\n\nIs a valid image specified on the command line areguments?\n"},
  {"IsInteractiveModeSpecified", PyvtkTesting_IsInteractiveModeSpecified, METH_VARARGS,
   "V.IsInteractiveModeSpecified() -> int\nC++: int IsInteractiveModeSpecified()\n\nIs the interactive mode specified?\n"},
  {"IsFlagSpecified", PyvtkTesting_IsFlagSpecified, METH_VARARGS,
   "V.IsFlagSpecified(string) -> int\nC++: int IsFlagSpecified(const char *flag)\n\nIs some arbitrary user flag (\"-X\", \"-Z\" etc) specified\n"},
  {"SetBorderOffset", PyvtkTesting_SetBorderOffset, METH_VARARGS,
   "V.SetBorderOffset(int)\nC++: virtual void SetBorderOffset(int _arg)\n\nNumber of pixels added as borders to avoid problems with window\ndecorations added by some window managers.\n"},
  {"GetBorderOffset", PyvtkTesting_GetBorderOffset, METH_VARARGS,
   "V.GetBorderOffset() -> int\nC++: virtual int GetBorderOffset()\n\nNumber of pixels added as borders to avoid problems with window\ndecorations added by some window managers.\n"},
  {"SetVerbose", PyvtkTesting_SetVerbose, METH_VARARGS,
   "V.SetVerbose(int)\nC++: virtual void SetVerbose(int _arg)\n\nGet/Set verbosity level. A level of 0 is quiet.\n"},
  {"GetVerbose", PyvtkTesting_GetVerbose, METH_VARARGS,
   "V.GetVerbose() -> int\nC++: virtual int GetVerbose()\n\nGet/Set verbosity level. A level of 0 is quiet.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTesting_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkTestingRenderingPython.vtkTesting", // tp_name
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
  PyvtkTesting_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTesting_StaticNew()
{
  return vtkTesting::New();
}

PyObject *PyvtkTesting_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTesting_Type, PyvtkTesting_Methods,
    "vtkTesting",
 &PyvtkTesting_StaticNew);

  PyTypeObject *pytype = &PyvtkTesting_Type;

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

  PyType_Ready(&PyvtkTesting_ReturnValue_Type);
  PyvtkTesting_ReturnValue_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkTesting_ReturnValue_Type);

  o = (PyObject *)&PyvtkTesting_ReturnValue_Type;
  if (PyDict_SetItemString(d, "ReturnValue", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkTesting::ReturnValue cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "FAILED", vtkTesting::FAILED },
        { "PASSED", vtkTesting::PASSED },
        { "NOT_RUN", vtkTesting::NOT_RUN },
        { "DO_INTERACTOR", vtkTesting::DO_INTERACTOR },
      };

    o = PyvtkTesting_ReturnValue_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTesting(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTesting_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTesting", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyInt_FromLong(125);
  if (o)
  {
    PyDict_SetItemString(dict, "VTK_SKIP_RETURN_CODE", o);
    Py_DECREF(o);
  }
}

