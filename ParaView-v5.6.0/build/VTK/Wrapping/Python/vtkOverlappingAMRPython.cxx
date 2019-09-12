// python wrapper for vtkOverlappingAMR
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
#include "vtkAMRBox.h"
#include "vtkOverlappingAMR.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOverlappingAMR(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkOverlappingAMR_ClassNew(); }

#ifndef DECLARED_PyvtkUniformGridAMR_ClassNew
extern "C" { PyObject *PyvtkUniformGridAMR_ClassNew(); }
#define DECLARED_PyvtkUniformGridAMR_ClassNew
#endif

static const char *PyvtkOverlappingAMR_Doc =
  "vtkOverlappingAMR - hierarchical dataset of vtkUniformGrids\n\n"
  "Superclass: vtkUniformGridAMR\n\n"
  "vtkOverlappingAMR extends vtkUniformGridAMR by exposing access to the\n"
  "amr meta data, which stores all structural information represented by\n"
  "an vtkAMRInformation object\n\n"
  "@sa\n"
  "vtkAMRInformation\n\n";


static PyObject *
PyvtkOverlappingAMR_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMR *op = static_cast<vtkOverlappingAMR *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkOverlappingAMR::GetDataObjectType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOverlappingAMR_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOverlappingAMR::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOverlappingAMR_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMR *op = static_cast<vtkOverlappingAMR *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOverlappingAMR::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOverlappingAMR_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOverlappingAMR *tempr = vtkOverlappingAMR::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOverlappingAMR_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMR *op = static_cast<vtkOverlappingAMR *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOverlappingAMR *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOverlappingAMR::NewInstance());

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
PyvtkOverlappingAMR_NewIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMR *op = static_cast<vtkOverlappingAMR *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCompositeDataIterator *tempr = (ap.IsBound() ?
      op->NewIterator() :
      op->vtkOverlappingAMR::NewIterator());

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
PyvtkOverlappingAMR_SetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMR *op = static_cast<vtkOverlappingAMR *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOrigin(temp0);
    }
    else
    {
      op->vtkOverlappingAMR::SetOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOverlappingAMR_GetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMR *op = static_cast<vtkOverlappingAMR *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkOverlappingAMR::GetOrigin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkOverlappingAMR_GetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMR *op = static_cast<vtkOverlappingAMR *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->GetOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkOverlappingAMR::GetOrigin(temp0, temp1, temp2);
    }

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
PyvtkOverlappingAMR_GetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkOverlappingAMR_GetOrigin_s1(self, args);
    case 3:
      return PyvtkOverlappingAMR_GetOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetOrigin");
  return nullptr;
}



static PyObject *
PyvtkOverlappingAMR_SetSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMR *op = static_cast<vtkOverlappingAMR *>(vp);

  unsigned int temp0;
  const size_t size1 = 3;
  double temp1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    if (ap.IsBound())
    {
      op->SetSpacing(temp0, temp1);
    }
    else
    {
      op->vtkOverlappingAMR::SetSpacing(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOverlappingAMR_GetSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMR *op = static_cast<vtkOverlappingAMR *>(vp);

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
      op->GetSpacing(temp0, temp1);
    }
    else
    {
      op->vtkOverlappingAMR::GetSpacing(temp0, temp1);
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
PyvtkOverlappingAMR_SetAMRBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAMRBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMR *op = static_cast<vtkOverlappingAMR *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  vtkAMRBox *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetSpecialObject(temp2, pobj2, "vtkAMRBox"))
  {
    if (ap.IsBound())
    {
      op->SetAMRBox(temp0, temp1, *temp2);
    }
    else
    {
      op->vtkOverlappingAMR::SetAMRBox(temp0, temp1, *temp2);
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
PyvtkOverlappingAMR_GetAMRBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAMRBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMR *op = static_cast<vtkOverlappingAMR *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const vtkAMRBox *tempr = (ap.IsBound() ?
      &op->GetAMRBox(temp0, temp1) :
      &op->vtkOverlappingAMR::GetAMRBox(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkAMRBox");
    }
  }

  return result;
}


static PyObject *
PyvtkOverlappingAMR_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMR *op = static_cast<vtkOverlappingAMR *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->GetBounds(temp0, temp1, temp2);
    }
    else
    {
      op->vtkOverlappingAMR::GetBounds(temp0, temp1, temp2);
    }

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
PyvtkOverlappingAMR_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMR *op = static_cast<vtkOverlappingAMR *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetBounds(temp0);
    }
    else
    {
      op->vtkOverlappingAMR::GetBounds(temp0);
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
PyvtkOverlappingAMR_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkOverlappingAMR_GetBounds_s1(self, args);
    case 1:
      return PyvtkOverlappingAMR_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}



static PyObject *
PyvtkOverlappingAMR_NUMBER_OF_BLANKED_POINTS(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "NUMBER_OF_BLANKED_POINTS");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIdTypeKey *tempr = vtkOverlappingAMR::NUMBER_OF_BLANKED_POINTS();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOverlappingAMR_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    vtkOverlappingAMR *tempr = vtkOverlappingAMR::GetData(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkOverlappingAMR_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkOverlappingAMR *tempr = vtkOverlappingAMR::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkOverlappingAMR_GetData_Methods[] = {
  {nullptr, PyvtkOverlappingAMR_GetData_s1, METH_VARARGS | METH_STATIC,
   "V *vtkInformation"},
  {nullptr, PyvtkOverlappingAMR_GetData_s2, METH_VARARGS | METH_STATIC,
   "V|i *vtkInformationVector"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkOverlappingAMR_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkOverlappingAMR_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkOverlappingAMR_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return nullptr;
}



static PyObject *
PyvtkOverlappingAMR_SetRefinementRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRefinementRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMR *op = static_cast<vtkOverlappingAMR *>(vp);

  unsigned int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetRefinementRatio(temp0, temp1);
    }
    else
    {
      op->vtkOverlappingAMR::SetRefinementRatio(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOverlappingAMR_GetRefinementRatio_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRefinementRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMR *op = static_cast<vtkOverlappingAMR *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRefinementRatio(temp0) :
      op->vtkOverlappingAMR::GetRefinementRatio(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkOverlappingAMR_GetRefinementRatio_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRefinementRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMR *op = static_cast<vtkOverlappingAMR *>(vp);

  vtkCompositeDataIterator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataIterator"))
  {
    int tempr = (ap.IsBound() ?
      op->GetRefinementRatio(temp0) :
      op->vtkOverlappingAMR::GetRefinementRatio(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkOverlappingAMR_GetRefinementRatio_Methods[] = {
  {nullptr, PyvtkOverlappingAMR_GetRefinementRatio_s1, METH_VARARGS,
   "@I"},
  {nullptr, PyvtkOverlappingAMR_GetRefinementRatio_s2, METH_VARARGS,
   "@V *vtkCompositeDataIterator"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkOverlappingAMR_GetRefinementRatio(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkOverlappingAMR_GetRefinementRatio_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetRefinementRatio");
  return nullptr;
}



static PyObject *
PyvtkOverlappingAMR_SetAMRBlockSourceIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAMRBlockSourceIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMR *op = static_cast<vtkOverlappingAMR *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetAMRBlockSourceIndex(temp0, temp1, temp2);
    }
    else
    {
      op->vtkOverlappingAMR::SetAMRBlockSourceIndex(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOverlappingAMR_GetAMRBlockSourceIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAMRBlockSourceIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMR *op = static_cast<vtkOverlappingAMR *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetAMRBlockSourceIndex(temp0, temp1) :
      op->vtkOverlappingAMR::GetAMRBlockSourceIndex(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOverlappingAMR_HasChildrenInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasChildrenInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMR *op = static_cast<vtkOverlappingAMR *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasChildrenInformation() :
      op->vtkOverlappingAMR::HasChildrenInformation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOverlappingAMR_GenerateParentChildInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateParentChildInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMR *op = static_cast<vtkOverlappingAMR *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateParentChildInformation();
    }
    else
    {
      op->vtkOverlappingAMR::GenerateParentChildInformation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOverlappingAMR_GetParents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMR *op = static_cast<vtkOverlappingAMR *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  unsigned int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    unsigned int *tempr = (ap.IsBound() ?
      op->GetParents(temp0, temp1, temp2) :
      op->vtkOverlappingAMR::GetParents(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOverlappingAMR_GetChildren(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChildren");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMR *op = static_cast<vtkOverlappingAMR *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  unsigned int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    unsigned int *tempr = (ap.IsBound() ?
      op->GetChildren(temp0, temp1, temp2) :
      op->vtkOverlappingAMR::GetChildren(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOverlappingAMR_PrintParentChildInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrintParentChildInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMR *op = static_cast<vtkOverlappingAMR *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->PrintParentChildInfo(temp0, temp1);
    }
    else
    {
      op->vtkOverlappingAMR::PrintParentChildInfo(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOverlappingAMR_FindGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMR *op = static_cast<vtkOverlappingAMR *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  unsigned int temp1;
  unsigned int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    ap.Save(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->FindGrid(temp0, temp1, temp2) :
      op->vtkOverlappingAMR::FindGrid(temp0, temp1, temp2));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOverlappingAMR_GetAMRInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAMRInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMR *op = static_cast<vtkOverlappingAMR *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAMRInformation *tempr = (ap.IsBound() ?
      op->GetAMRInfo() :
      op->vtkOverlappingAMR::GetAMRInfo());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOverlappingAMR_SetAMRInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAMRInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMR *op = static_cast<vtkOverlappingAMR *>(vp);

  vtkAMRInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAMRInformation"))
  {
    if (ap.IsBound())
    {
      op->SetAMRInfo(temp0);
    }
    else
    {
      op->vtkOverlappingAMR::SetAMRInfo(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOverlappingAMR_Audit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Audit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMR *op = static_cast<vtkOverlappingAMR *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Audit();
    }
    else
    {
      op->vtkOverlappingAMR::Audit();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkOverlappingAMR_Methods[] = {
  {"GetDataObjectType", PyvtkOverlappingAMR_GetDataObjectType, METH_VARARGS,
   "V.GetDataObjectType() -> int\nC++: int GetDataObjectType() override;\n\nReturn class name of data type (see vtkType.h for definitions).\n"},
  {"IsTypeOf", PyvtkOverlappingAMR_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOverlappingAMR_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOverlappingAMR_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkOverlappingAMR\nC++: static vtkOverlappingAMR *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOverlappingAMR_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkOverlappingAMR\nC++: vtkOverlappingAMR *NewInstance()\n\n"},
  {"NewIterator", PyvtkOverlappingAMR_NewIterator, METH_VARARGS,
   "V.NewIterator() -> vtkCompositeDataIterator\nC++: vtkCompositeDataIterator *NewIterator() override;\n\nReturn a new iterator (the iterator has to be deleted by the\nuser).\n"},
  {"SetOrigin", PyvtkOverlappingAMR_SetOrigin, METH_VARARGS,
   "V.SetOrigin((float, ...))\nC++: void SetOrigin(const double *)\n\nGet/Set the global origin of the amr data set\n"},
  {"GetOrigin", PyvtkOverlappingAMR_GetOrigin, METH_VARARGS,
   "V.GetOrigin() -> (float, ...)\nC++: double *GetOrigin()\nV.GetOrigin(int, int, [float, float, float])\nC++: void GetOrigin(unsigned int level, unsigned int id,\n    double origin[3])\n\nGet/Set the global origin of the amr data set\n"},
  {"SetSpacing", PyvtkOverlappingAMR_SetSpacing, METH_VARARGS,
   "V.SetSpacing(int, (float, float, float))\nC++: void SetSpacing(unsigned int level, const double spacing[3])\n\nGet/Set the grid spacing at a given level\n"},
  {"GetSpacing", PyvtkOverlappingAMR_GetSpacing, METH_VARARGS,
   "V.GetSpacing(int, [float, float, float])\nC++: void GetSpacing(unsigned int level, double spacing[3])\n\nGet/Set the grid spacing at a given level\n"},
  {"SetAMRBox", PyvtkOverlappingAMR_SetAMRBox, METH_VARARGS,
   "V.SetAMRBox(int, int, vtkAMRBox)\nC++: void SetAMRBox(unsigned int level, unsigned int id,\n    const vtkAMRBox &box)\n\nSet/Get the AMRBox for a given block\n"},
  {"GetAMRBox", PyvtkOverlappingAMR_GetAMRBox, METH_VARARGS,
   "V.GetAMRBox(int, int) -> vtkAMRBox\nC++: const vtkAMRBox &GetAMRBox(unsigned int level,\n    unsigned int id)\n\nSet/Get the AMRBox for a given block\n"},
  {"GetBounds", PyvtkOverlappingAMR_GetBounds, METH_VARARGS,
   "V.GetBounds(int, int, [float, ...])\nC++: void GetBounds(unsigned int level, unsigned int id,\n    double *bb)\nV.GetBounds([float, float, float, float, float, float])\nC++: void GetBounds(double b[6])\n\nReturns the bounding information of a data set.\n"},
  {"NUMBER_OF_BLANKED_POINTS", PyvtkOverlappingAMR_NUMBER_OF_BLANKED_POINTS, METH_VARARGS,
   "V.NUMBER_OF_BLANKED_POINTS() -> vtkInformationIdTypeKey\nC++: static vtkInformationIdTypeKey *NUMBER_OF_BLANKED_POINTS()\n\n"},
  {"GetData", PyvtkOverlappingAMR_GetData, METH_VARARGS,
   "V.GetData(vtkInformation) -> vtkOverlappingAMR\nC++: static vtkOverlappingAMR *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkOverlappingAMR\nC++: static vtkOverlappingAMR *GetData(vtkInformationVector *v,\n    int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {"SetRefinementRatio", PyvtkOverlappingAMR_SetRefinementRatio, METH_VARARGS,
   "V.SetRefinementRatio(int, int)\nC++: void SetRefinementRatio(unsigned int level, int refRatio)\n\nSets the refinement of a given level. The spacing at level\nlevel+1 is defined as spacing(level+1) =\nspacing(level)/refRatio(level). Note that currently, this is not\nenforced by this class however some algorithms might not function\nproperly if the spacing in the blocks (vtkUniformGrid) does not\nmatch the one described by the refinement ratio.\n"},
  {"GetRefinementRatio", PyvtkOverlappingAMR_GetRefinementRatio, METH_VARARGS,
   "V.GetRefinementRatio(int) -> int\nC++: int GetRefinementRatio(unsigned int level)\nV.GetRefinementRatio(vtkCompositeDataIterator) -> int\nC++: int GetRefinementRatio(vtkCompositeDataIterator *iter)\n\nReturns the refinement of a given level.\n"},
  {"SetAMRBlockSourceIndex", PyvtkOverlappingAMR_SetAMRBlockSourceIndex, METH_VARARGS,
   "V.SetAMRBlockSourceIndex(int, int, int)\nC++: void SetAMRBlockSourceIndex(unsigned int level,\n    unsigned int id, int sourceId)\n\nSet/Get the source id of a block. The source id is produced by an\nAMR source, e.g. a file reader might set this to be a file block\nid\n"},
  {"GetAMRBlockSourceIndex", PyvtkOverlappingAMR_GetAMRBlockSourceIndex, METH_VARARGS,
   "V.GetAMRBlockSourceIndex(int, int) -> int\nC++: int GetAMRBlockSourceIndex(unsigned int level,\n    unsigned int id)\n\nSet/Get the source id of a block. The source id is produced by an\nAMR source, e.g. a file reader might set this to be a file block\nid\n"},
  {"HasChildrenInformation", PyvtkOverlappingAMR_HasChildrenInformation, METH_VARARGS,
   "V.HasChildrenInformation() -> bool\nC++: bool HasChildrenInformation()\n\nReturn whether parent child information has been generated\n"},
  {"GenerateParentChildInformation", PyvtkOverlappingAMR_GenerateParentChildInformation, METH_VARARGS,
   "V.GenerateParentChildInformation()\nC++: void GenerateParentChildInformation()\n\nGenerate the parent/child relationships - needed to be called\nbefore GetParents or GetChildren can be used!\n"},
  {"GetParents", PyvtkOverlappingAMR_GetParents, METH_VARARGS,
   "V.GetParents(int, int, int) -> (int, ...)\nC++: unsigned int *GetParents(unsigned int level,\n    unsigned int index, unsigned int &numParents)\n\nReturn a pointer to Parents of a block.  The first entry is the\nnumber of parents the block has followed by its parent ids in\nlevel-1. If none exits it returns nullptr.\n"},
  {"GetChildren", PyvtkOverlappingAMR_GetChildren, METH_VARARGS,
   "V.GetChildren(int, int, int) -> (int, ...)\nC++: unsigned int *GetChildren(unsigned int level,\n    unsigned int index, unsigned int &numChildren)\n\nReturn a pointer to Children of a block.  The first entry is the\nnumber of children the block has followed by its children ids in\nlevel+1. If none exits it returns nullptr.\n"},
  {"PrintParentChildInfo", PyvtkOverlappingAMR_PrintParentChildInfo, METH_VARARGS,
   "V.PrintParentChildInfo(int, int)\nC++: void PrintParentChildInfo(unsigned int level,\n    unsigned int index)\n\nPrints the parents and children of a requested block (Debug\nRoutine)\n"},
  {"FindGrid", PyvtkOverlappingAMR_FindGrid, METH_VARARGS,
   "V.FindGrid([float, float, float], int, int) -> bool\nC++: bool FindGrid(double q[3], unsigned int &level,\n    unsigned int &gridId)\n\nGiven a point q, find the highest level grid that contains it.\n"},
  {"GetAMRInfo", PyvtkOverlappingAMR_GetAMRInfo, METH_VARARGS,
   "V.GetAMRInfo() -> vtkAMRInformation\nC++: vtkAMRInformation *GetAMRInfo() override;\n\nGet/Set the internal representation of amr meta meta data\n"},
  {"SetAMRInfo", PyvtkOverlappingAMR_SetAMRInfo, METH_VARARGS,
   "V.SetAMRInfo(vtkAMRInformation)\nC++: void SetAMRInfo(vtkAMRInformation *info) override;\n\nGet/Set the meta AMR meta data\n"},
  {"Audit", PyvtkOverlappingAMR_Audit, METH_VARARGS,
   "V.Audit()\nC++: void Audit()\n\nCheck whether the data set is internally consistent, e.g. whether\nthe meta data and actual data blocks match. Incorrectness will be\nreported as error messages\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkOverlappingAMR_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkOverlappingAMR", // tp_name
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
  PyvtkOverlappingAMR_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOverlappingAMR_StaticNew()
{
  return vtkOverlappingAMR::New();
}

PyObject *PyvtkOverlappingAMR_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkOverlappingAMR_Type, PyvtkOverlappingAMR_Methods,
    "vtkOverlappingAMR",
 &PyvtkOverlappingAMR_StaticNew);

  PyTypeObject *pytype = &PyvtkOverlappingAMR_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkUniformGridAMR_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOverlappingAMR(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOverlappingAMR_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOverlappingAMR", o) != 0)
  {
    Py_DECREF(o);
  }

}

