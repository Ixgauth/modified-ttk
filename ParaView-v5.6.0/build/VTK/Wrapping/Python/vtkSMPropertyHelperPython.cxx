// python wrapper for vtkSMPropertyHelper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkSMProxy.h"
#include "vtkSMPropertyHelper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMPropertyHelper(PyObject *); }

static const char *PyvtkSMPropertyHelper_Doc =
  "vtkSMPropertyHelper - helper class to get/set property values.\n\n"
  "vtkSMPropertyHelper is a helper class to get/set property values in a\n"
  "type independent fashion. eg.vtkSMPropertyHelper(proxy,\n"
  "\"Visibility\").Set(0);\n"
  "   vtkSMPropertyHelper(proxy, \"Input\").Set(inputProxy, 0);\n\n\n"
  "   double center[3] = {...};\n"
  "   vtkSMPropertyHelper(proxy, \"Center\").Set(center, 3);\n"
  "@par Caveat: This class is not wrapped, hence not available in any of\n"
  "the wrapped languagues such as python.\n\n"
  "vtkSMPropertyHelper(vtkSMProxy *proxy, const char *name,\n    bool quiet=false)\n"
  "vtkSMPropertyHelper(vtkSMProperty *property, bool quiet=false)\n";


static PyObject *
PyvtkSMPropertyHelper_UpdateValueFromServer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateValueFromServer");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSMPropertyHelper *op = static_cast<vtkSMPropertyHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->UpdateValueFromServer();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMPropertyHelper_SetNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfElements");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSMPropertyHelper *op = static_cast<vtkSMPropertyHelper *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetNumberOfElements(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMPropertyHelper_GetNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElements");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSMPropertyHelper *op = static_cast<vtkSMPropertyHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = op->GetNumberOfElements();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPropertyHelper_RemoveAllValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllValues");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSMPropertyHelper *op = static_cast<vtkSMPropertyHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->RemoveAllValues();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMPropertyHelper_GetAsVariant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAsVariant");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSMPropertyHelper *op = static_cast<vtkSMPropertyHelper *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVariant tempr = op->GetAsVariant(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}


static PyObject *
PyvtkSMPropertyHelper_Set_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSMPropertyHelper *op = static_cast<vtkSMPropertyHelper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->Set(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMPropertyHelper_Set_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSMPropertyHelper *op = static_cast<vtkSMPropertyHelper *>(vp);

  unsigned int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->Set(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMPropertyHelper_Set_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSMPropertyHelper *op = static_cast<vtkSMPropertyHelper *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(size0);
  int *temp0 = store0.Data();
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    op->Set(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMPropertyHelper_Set_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSMPropertyHelper *op = static_cast<vtkSMPropertyHelper *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->Set(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMPropertyHelper_Set_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSMPropertyHelper *op = static_cast<vtkSMPropertyHelper *>(vp);

  unsigned int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->Set(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMPropertyHelper_Set_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSMPropertyHelper *op = static_cast<vtkSMPropertyHelper *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    op->Set(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMPropertyHelper_Set_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSMPropertyHelper *op = static_cast<vtkSMPropertyHelper *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->Set(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMPropertyHelper_Set_s8(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSMPropertyHelper *op = static_cast<vtkSMPropertyHelper *>(vp);

  unsigned int temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->Set(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMPropertyHelper_Set_s9(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSMPropertyHelper *op = static_cast<vtkSMPropertyHelper *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<vtkIdType> store0(size0);
  vtkIdType *temp0 = store0.Data();
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    op->Set(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMPropertyHelper_Set_s10(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSMPropertyHelper *op = static_cast<vtkSMPropertyHelper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->Set(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMPropertyHelper_Set_s11(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSMPropertyHelper *op = static_cast<vtkSMPropertyHelper *>(vp);

  unsigned int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->Set(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMPropertyHelper_Set_s12(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSMPropertyHelper *op = static_cast<vtkSMPropertyHelper *>(vp);

  vtkSMProxy *temp0 = nullptr;
  unsigned int temp1 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    op->Set(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMPropertyHelper_Set_s13(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSMPropertyHelper *op = static_cast<vtkSMPropertyHelper *>(vp);

  unsigned int temp0;
  vtkSMProxy *temp1 = nullptr;
  unsigned int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMProxy") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    op->Set(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMPropertyHelper_Set_Methods[] = {
  {nullptr, PyvtkSMPropertyHelper_Set_s1, METH_VARARGS,
   "@i"},
  {nullptr, PyvtkSMPropertyHelper_Set_s2, METH_VARARGS,
   "@Ii"},
  {nullptr, PyvtkSMPropertyHelper_Set_s3, METH_VARARGS,
   "@PI *i"},
  {nullptr, PyvtkSMPropertyHelper_Set_s4, METH_VARARGS,
   "@d"},
  {nullptr, PyvtkSMPropertyHelper_Set_s5, METH_VARARGS,
   "@Id"},
  {nullptr, PyvtkSMPropertyHelper_Set_s6, METH_VARARGS,
   "@PI *d"},
  {nullptr, PyvtkSMPropertyHelper_Set_s7, METH_VARARGS,
   "@k"},
  {nullptr, PyvtkSMPropertyHelper_Set_s8, METH_VARARGS,
   "@Ik"},
  {nullptr, PyvtkSMPropertyHelper_Set_s9, METH_VARARGS,
   "@PI *k"},
  {nullptr, PyvtkSMPropertyHelper_Set_s10, METH_VARARGS,
   "@z"},
  {nullptr, PyvtkSMPropertyHelper_Set_s11, METH_VARARGS,
   "@Iz"},
  {nullptr, PyvtkSMPropertyHelper_Set_s12, METH_VARARGS,
   "@V|I *vtkSMProxy"},
  {nullptr, PyvtkSMPropertyHelper_Set_s13, METH_VARARGS,
   "@IV|I *vtkSMProxy"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSMPropertyHelper_Set(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMPropertyHelper_Set_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 3:
      return PyvtkSMPropertyHelper_Set_s13(self, args);
    case 1:
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Set");
  return nullptr;
}



static PyObject *
PyvtkSMPropertyHelper_GetAsInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAsInt");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSMPropertyHelper *op = static_cast<vtkSMPropertyHelper *>(vp);

  unsigned int temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    int tempr = op->GetAsInt(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPropertyHelper_Get_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSMPropertyHelper *op = static_cast<vtkSMPropertyHelper *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  unsigned int temp1 = 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetArray(temp0, size0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    ap.Save(temp0, save0, size0);

    unsigned int tempr = op->Get(temp0, temp1);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMPropertyHelper_Get_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSMPropertyHelper *op = static_cast<vtkSMPropertyHelper *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  unsigned int temp1 = 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetArray(temp0, size0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    ap.Save(temp0, save0, size0);

    unsigned int tempr = op->Get(temp0, temp1);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMPropertyHelper_Get_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSMPropertyHelper *op = static_cast<vtkSMPropertyHelper *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<vtkIdType> store0(2*size0);
  vtkIdType *temp0 = store0.Data();
  vtkIdType *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  unsigned int temp1 = 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetArray(temp0, size0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    ap.Save(temp0, save0, size0);

    unsigned int tempr = op->Get(temp0, temp1);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMPropertyHelper_Get_Methods[] = {
  {nullptr, PyvtkSMPropertyHelper_Get_s1, METH_VARARGS,
   "@P|I *i"},
  {nullptr, PyvtkSMPropertyHelper_Get_s2, METH_VARARGS,
   "@P|I *d"},
  {nullptr, PyvtkSMPropertyHelper_Get_s3, METH_VARARGS,
   "@P|I *k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSMPropertyHelper_Get(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMPropertyHelper_Get_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Get");
  return nullptr;
}



static PyObject *
PyvtkSMPropertyHelper_GetAsDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAsDouble");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSMPropertyHelper *op = static_cast<vtkSMPropertyHelper *>(vp);

  unsigned int temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    double tempr = op->GetAsDouble(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPropertyHelper_GetAsIdType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAsIdType");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSMPropertyHelper *op = static_cast<vtkSMPropertyHelper *>(vp);

  unsigned int temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    vtkIdType tempr = op->GetAsIdType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPropertyHelper_GetAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAsString");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSMPropertyHelper *op = static_cast<vtkSMPropertyHelper *>(vp);

  unsigned int temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    const char *tempr = op->GetAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPropertyHelper_Add(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Add");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSMPropertyHelper *op = static_cast<vtkSMPropertyHelper *>(vp);

  vtkSMProxy *temp0 = nullptr;
  unsigned int temp1 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    op->Add(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMPropertyHelper_Remove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSMPropertyHelper *op = static_cast<vtkSMPropertyHelper *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    op->Remove(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMPropertyHelper_GetAsProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAsProxy");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSMPropertyHelper *op = static_cast<vtkSMPropertyHelper *>(vp);

  unsigned int temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    vtkSMProxy *tempr = op->GetAsProxy(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPropertyHelper_GetOutputPort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPort");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSMPropertyHelper *op = static_cast<vtkSMPropertyHelper *>(vp);

  unsigned int temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    unsigned int tempr = op->GetOutputPort(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPropertyHelper_SetStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStatus");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSMPropertyHelper *op = static_cast<vtkSMPropertyHelper *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->SetStatus(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMPropertyHelper_SetStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStatus");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSMPropertyHelper *op = static_cast<vtkSMPropertyHelper *>(vp);

  const char *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    ap.Save(temp1, save1, size1);

    op->SetStatus(temp0, temp1, temp2);

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
PyvtkSMPropertyHelper_SetStatus_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStatus");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSMPropertyHelper *op = static_cast<vtkSMPropertyHelper *>(vp);

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    ap.Save(temp1, save1, size1);

    op->SetStatus(temp0, temp1, temp2);

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
PyvtkSMPropertyHelper_SetStatus_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStatus");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSMPropertyHelper *op = static_cast<vtkSMPropertyHelper *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->SetStatus(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMPropertyHelper_SetStatus_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStatus");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSMPropertyHelper *op = static_cast<vtkSMPropertyHelper *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->SetStatus(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMPropertyHelper_SetStatus_Methods[] = {
  {nullptr, PyvtkSMPropertyHelper_SetStatus_s1, METH_VARARGS,
   "@zi"},
  {nullptr, PyvtkSMPropertyHelper_SetStatus_s2, METH_VARARGS,
   "@zPi *d"},
  {nullptr, PyvtkSMPropertyHelper_SetStatus_s3, METH_VARARGS,
   "@iPi *i"},
  {nullptr, PyvtkSMPropertyHelper_SetStatus_s4, METH_VARARGS,
   "@zz"},
  {nullptr, PyvtkSMPropertyHelper_SetStatus_s5, METH_VARARGS,
   "@ii"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSMPropertyHelper_SetStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMPropertyHelper_SetStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetStatus");
  return nullptr;
}



static PyObject *
PyvtkSMPropertyHelper_GetStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStatus");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSMPropertyHelper *op = static_cast<vtkSMPropertyHelper *>(vp);

  const char *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    int tempr = op->GetStatus(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMPropertyHelper_GetStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStatus");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSMPropertyHelper *op = static_cast<vtkSMPropertyHelper *>(vp);

  const char *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    ap.Save(temp1, save1, size1);

    bool tempr = op->GetStatus(temp0, temp1, temp2);

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMPropertyHelper_GetStatus_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStatus");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSMPropertyHelper *op = static_cast<vtkSMPropertyHelper *>(vp);

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    ap.Save(temp1, save1, size1);

    bool tempr = op->GetStatus(temp0, temp1, temp2);

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMPropertyHelper_GetStatus_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStatus");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSMPropertyHelper *op = static_cast<vtkSMPropertyHelper *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const char *tempr = op->GetStatus(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMPropertyHelper_GetStatus_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStatus");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSMPropertyHelper *op = static_cast<vtkSMPropertyHelper *>(vp);

  int temp0;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    int tempr = op->GetStatus(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMPropertyHelper_GetStatus_Methods[] = {
  {nullptr, PyvtkSMPropertyHelper_GetStatus_s1, METH_VARARGS,
   "@z|i"},
  {nullptr, PyvtkSMPropertyHelper_GetStatus_s2, METH_VARARGS,
   "@zPi *d"},
  {nullptr, PyvtkSMPropertyHelper_GetStatus_s3, METH_VARARGS,
   "@iPi *i"},
  {nullptr, PyvtkSMPropertyHelper_GetStatus_s4, METH_VARARGS,
   "@zz"},
  {nullptr, PyvtkSMPropertyHelper_GetStatus_s5, METH_VARARGS,
   "@i|i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSMPropertyHelper_GetStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMPropertyHelper_GetStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
    case 2:
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetStatus");
  return nullptr;
}



static PyObject *
PyvtkSMPropertyHelper_SetInputArrayToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSMPropertyHelper *op = static_cast<vtkSMPropertyHelper *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->SetInputArrayToProcess(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMPropertyHelper_GetInputArrayAssociation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputArrayAssociation");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSMPropertyHelper *op = static_cast<vtkSMPropertyHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->GetInputArrayAssociation();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPropertyHelper_GetInputArrayNameToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputArrayNameToProcess");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSMPropertyHelper *op = static_cast<vtkSMPropertyHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = op->GetInputArrayNameToProcess();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPropertyHelper_SetUseUnchecked(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseUnchecked");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSMPropertyHelper *op = static_cast<vtkSMPropertyHelper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetUseUnchecked(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMPropertyHelper_GetUseUnchecked(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseUnchecked");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSMPropertyHelper *op = static_cast<vtkSMPropertyHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = op->GetUseUnchecked();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPropertyHelper_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSMPropertyHelper *op = static_cast<vtkSMPropertyHelper *>(vp);

  vtkSMPropertyHelper *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, "vtkSMPropertyHelper"))
  {
    bool tempr = op->Copy(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPropertyHelper_Modified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Modified");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSMPropertyHelper *op = static_cast<vtkSMPropertyHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMPropertyHelper *tempr = &op->Modified();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkSMPropertyHelper");
    }
  }

  return result;
}

static PyMethodDef PyvtkSMPropertyHelper_Methods[] = {
  {"UpdateValueFromServer", PyvtkSMPropertyHelper_UpdateValueFromServer, METH_VARARGS,
   "V.UpdateValueFromServer()\nC++: void UpdateValueFromServer()\n\nUpdates the property value by fetching the value from the server.\nThis only works for properties with InformationOnly attribute set\nto 1. For all other properties, this has no effect.\n"},
  {"SetNumberOfElements", PyvtkSMPropertyHelper_SetNumberOfElements, METH_VARARGS,
   "V.SetNumberOfElements(int)\nC++: void SetNumberOfElements(unsigned int elems)\n\nSet the number of elements in the property. For\nvtkSMProxyProperty, this is equivalent to SetNumberOfProxies().\n"},
  {"GetNumberOfElements", PyvtkSMPropertyHelper_GetNumberOfElements, METH_VARARGS,
   "V.GetNumberOfElements() -> int\nC++: unsigned int GetNumberOfElements()\n\nGet the number of elements in the property. For\nvtkSMProxyProperty, this is equivalent to GetNumberOfProxies().\n"},
  {"RemoveAllValues", PyvtkSMPropertyHelper_RemoveAllValues, METH_VARARGS,
   "V.RemoveAllValues()\nC++: void RemoveAllValues()\n\nEquivalent to SetNumberOfElements(0).\n"},
  {"GetAsVariant", PyvtkSMPropertyHelper_GetAsVariant, METH_VARARGS,
   "V.GetAsVariant(int) -> vtkVariant\nC++: vtkVariant GetAsVariant(unsigned int index)\n\nGet value as a variant.\n"},
  {"Set", PyvtkSMPropertyHelper_Set, METH_VARARGS,
   "V.Set(int)\nC++: void Set(int value)\nV.Set(int, int)\nC++: void Set(unsigned int index, int value)\nV.Set((int, ...), int)\nC++: void Set(const int *values, unsigned int count)\nV.Set(float)\nC++: void Set(double value)\nV.Set(int, float)\nC++: void Set(unsigned int index, double value)\nV.Set((float, ...), int)\nC++: void Set(const double *values, unsigned int count)\nV.Set(int)\nC++: void Set(vtkIdType value)\nV.Set(int, int)\nC++: void Set(unsigned int index, vtkIdType value)\nV.Set((int, ...), int)\nC++: void Set(const vtkIdType *values, unsigned int count)\nV.Set(string)\nC++: void Set(const char *value)\nV.Set(int, string)\nC++: void Set(unsigned int index, const char *value)\nV.Set(vtkSMProxy, int)\nC++: void Set(vtkSMProxy *value, unsigned int outputport=0)\nV.Set(int, vtkSMProxy, int)\nC++: void Set(unsigned int index, vtkSMProxy *value,\n    unsigned int outputport=0)\n\nSet/Get methods with int API. Calling these method on\nvtkSMStringVectorProperty or vtkSMProxyProperty will raise\nerrors.\n"},
  {"GetAsInt", PyvtkSMPropertyHelper_GetAsInt, METH_VARARGS,
   "V.GetAsInt(int) -> int\nC++: int GetAsInt(unsigned int index=0)\n\nSet/Get methods with int API. Calling these method on\nvtkSMStringVectorProperty or vtkSMProxyProperty will raise\nerrors.\n"},
  {"Get", PyvtkSMPropertyHelper_Get, METH_VARARGS,
   "V.Get([int, ...], int) -> int\nC++: unsigned int Get(int *values, unsigned int count=1)\nV.Get([float, ...], int) -> int\nC++: unsigned int Get(double *values, unsigned int count=1)\nV.Get([int, ...], int) -> int\nC++: unsigned int Get(vtkIdType *values, unsigned int count=1)\n\nSet/Get methods with int API. Calling these method on\nvtkSMStringVectorProperty or vtkSMProxyProperty will raise\nerrors.\n"},
  {"GetAsDouble", PyvtkSMPropertyHelper_GetAsDouble, METH_VARARGS,
   "V.GetAsDouble(int) -> float\nC++: double GetAsDouble(unsigned int index=0)\n\nSet/Get methods with double API. Calling these method on\nvtkSMStringVectorProperty or vtkSMProxyProperty will raise\nerrors.\n"},
  {"GetAsIdType", PyvtkSMPropertyHelper_GetAsIdType, METH_VARARGS,
   "V.GetAsIdType(int) -> int\nC++: vtkIdType GetAsIdType(unsigned int index=0)\n\nSet/Get methods with vtkIdType API. Calling these method on\nvtkSMStringVectorProperty or vtkSMProxyProperty will raise\nerrors.\n"},
  {"GetAsString", PyvtkSMPropertyHelper_GetAsString, METH_VARARGS,
   "V.GetAsString(int) -> string\nC++: const char *GetAsString(unsigned int index=0)\n\nSet/Get methods for vtkSMStringVectorProperty. Calling these\nmethods on any other type of property will raise errors. These\noverloads can be used for vtkSMIntVectorProperty with an\nenumeration domain as well, in which case the string-to-int (and\nvice-versa) translations are done internally.\n"},
  {"Add", PyvtkSMPropertyHelper_Add, METH_VARARGS,
   "V.Add(vtkSMProxy, int)\nC++: void Add(vtkSMProxy *value, unsigned int outputport=0)\n\nSet/Get methods for vtkSMProxyProperty or vtkSMInputProperty.\nCalling these methods on any other type of property will raise\nerrors. The option outputport(s) argument is used only for\nvtkSMInputProperty.\n"},
  {"Remove", PyvtkSMPropertyHelper_Remove, METH_VARARGS,
   "V.Remove(vtkSMProxy)\nC++: void Remove(vtkSMProxy *value)\n\nSet/Get methods for vtkSMProxyProperty or vtkSMInputProperty.\nCalling these methods on any other type of property will raise\nerrors. The option outputport(s) argument is used only for\nvtkSMInputProperty.\n"},
  {"GetAsProxy", PyvtkSMPropertyHelper_GetAsProxy, METH_VARARGS,
   "V.GetAsProxy(int) -> vtkSMProxy\nC++: vtkSMProxy *GetAsProxy(unsigned int index=0)\n\nSet/Get methods for vtkSMProxyProperty or vtkSMInputProperty.\nCalling these methods on any other type of property will raise\nerrors. The option outputport(s) argument is used only for\nvtkSMInputProperty.\n"},
  {"GetOutputPort", PyvtkSMPropertyHelper_GetOutputPort, METH_VARARGS,
   "V.GetOutputPort(int) -> int\nC++: unsigned int GetOutputPort(unsigned int index=0)\n\nSet/Get methods for vtkSMProxyProperty or vtkSMInputProperty.\nCalling these methods on any other type of property will raise\nerrors. The option outputport(s) argument is used only for\nvtkSMInputProperty.\n"},
  {"SetStatus", PyvtkSMPropertyHelper_SetStatus, METH_VARARGS,
   "V.SetStatus(string, int)\nC++: void SetStatus(const char *key, int value)\nV.SetStatus(string, [float, ...], int)\nC++: void SetStatus(const char *key, double *values,\n    int num_values)\nV.SetStatus(int, [int, ...], int)\nC++: void SetStatus(const int key, int *values, int num_values)\nV.SetStatus(string, string)\nC++: void SetStatus(const char *key, const char *value)\nV.SetStatus(int, int)\nC++: void SetStatus(const int key, int value)\n\nThis API is useful for setting values on\nvtkSMStringVectorProperty that is used for status where the first\nvalue is the name of the array (for example) and the second value\nis its status.\n"},
  {"GetStatus", PyvtkSMPropertyHelper_GetStatus, METH_VARARGS,
   "V.GetStatus(string, int) -> int\nC++: int GetStatus(const char *key, int default_value=0)\nV.GetStatus(string, [float, ...], int) -> bool\nC++: bool GetStatus(const char *key, double *values,\n    int num_values)\nV.GetStatus(int, [int, ...], int) -> bool\nC++: bool GetStatus(const int key, int *values, int num_values)\nV.GetStatus(string, string) -> string\nC++: const char *GetStatus(const char *key,\n    const char *default_value)\nV.GetStatus(int, int) -> int\nC++: int GetStatus(const int key, int default_value=0)\n\nThis API is useful for setting values on\nvtkSMStringVectorProperty that is used for status where the first\nvalue is the name of the array (for example) and the second value\nis its status.\n"},
  {"SetInputArrayToProcess", PyvtkSMPropertyHelper_SetInputArrayToProcess, METH_VARARGS,
   "V.SetInputArrayToProcess(int, string)\nC++: void SetInputArrayToProcess(int fieldAssociation,\n    const char *arrayName)\n\nFor vtkSMStringVectorProperty that is used to setting input array\nto process on algorithms, this provides a convenient API to\nget/set the values.\n"},
  {"GetInputArrayAssociation", PyvtkSMPropertyHelper_GetInputArrayAssociation, METH_VARARGS,
   "V.GetInputArrayAssociation() -> int\nC++: int GetInputArrayAssociation()\n\nFor vtkSMStringVectorProperty that is used to setting input array\nto process on algorithms, this provides a convenient API to\nget/set the values.\n"},
  {"GetInputArrayNameToProcess", PyvtkSMPropertyHelper_GetInputArrayNameToProcess, METH_VARARGS,
   "V.GetInputArrayNameToProcess() -> string\nC++: const char *GetInputArrayNameToProcess()\n\nFor vtkSMStringVectorProperty that is used to setting input array\nto process on algorithms, this provides a convenient API to\nget/set the values.\n"},
  {"SetUseUnchecked", PyvtkSMPropertyHelper_SetUseUnchecked, METH_VARARGS,
   "V.SetUseUnchecked(bool)\nC++: void SetUseUnchecked(bool val)\n\nGet/Set whether to use unchecked properties.\n"},
  {"GetUseUnchecked", PyvtkSMPropertyHelper_GetUseUnchecked, METH_VARARGS,
   "V.GetUseUnchecked() -> bool\nC++: bool GetUseUnchecked()\n\n"},
  {"Copy", PyvtkSMPropertyHelper_Copy, METH_VARARGS,
   "V.Copy(vtkSMPropertyHelper) -> bool\nC++: bool Copy(vtkSMPropertyHelper &source)\n\nCopy property values from another vtkSMPropertyHelper. This only\nworks for compatible properties and currently only supported for\nnumeric vtkSMVectorProperty subclasses.\n"},
  {"Modified", PyvtkSMPropertyHelper_Modified, METH_VARARGS,
   "V.Modified() -> vtkSMPropertyHelper\nC++: vtkSMPropertyHelper &Modified()\n\nSet the proxy to modified if necessary before calling Set()\nReturn reference so method chaining can be used.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkSMPropertyHelper_vtkSMPropertyHelper_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkSMPropertyHelper");

  vtkSMProxy *temp0 = nullptr;
  const char *temp1 = nullptr;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    vtkSMPropertyHelper *op = new vtkSMPropertyHelper(temp0, temp1, temp2);

    result = PyVTKSpecialObject_New("vtkSMPropertyHelper", op);
  }

  return result;
}

static PyObject *
PyvtkSMPropertyHelper_vtkSMPropertyHelper_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkSMPropertyHelper");

  vtkSMProperty *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkSMProperty") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkSMPropertyHelper *op = new vtkSMPropertyHelper(temp0, temp1);

    result = PyVTKSpecialObject_New("vtkSMPropertyHelper", op);
  }

  return result;
}

static PyMethodDef PyvtkSMPropertyHelper_vtkSMPropertyHelper_Methods[] = {
  {nullptr, PyvtkSMPropertyHelper_vtkSMPropertyHelper_s1, METH_VARARGS,
   "@Vz|q *vtkSMProxy"},
  {nullptr, PyvtkSMPropertyHelper_vtkSMPropertyHelper_s2, METH_VARARGS,
   "@V|q *vtkSMProperty"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSMPropertyHelper_vtkSMPropertyHelper(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMPropertyHelper_vtkSMPropertyHelper_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 3:
      return PyvtkSMPropertyHelper_vtkSMPropertyHelper_s1(self, args);
    case 1:
      return PyvtkSMPropertyHelper_vtkSMPropertyHelper_s2(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkSMPropertyHelper");
  return nullptr;
}


static PyObject *
PyvtkSMPropertyHelper_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkSMPropertyHelper_vtkSMPropertyHelper(nullptr, args);
}

static void PyvtkSMPropertyHelper_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkSMPropertyHelper *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkSMPropertyHelper_Hash(PyObject *self)
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

static PyTypeObject PyvtkSMPropertyHelper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMPropertyHelper", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkSMPropertyHelper_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkSMPropertyHelper_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkSMPropertyHelper_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
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
  PyvtkSMPropertyHelper_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMPropertyHelper_TypeNew(); }

PyObject *PyvtkSMPropertyHelper_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkSMPropertyHelper_Type,
    PyvtkSMPropertyHelper_Methods,
    PyvtkSMPropertyHelper_vtkSMPropertyHelper_Methods,
    nullptr);

  PyTypeObject *pytype = &PyvtkSMPropertyHelper_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMPropertyHelper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMPropertyHelper_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkSMPropertyHelper", o) != 0)
  {
    Py_DECREF(o);
  }

}

