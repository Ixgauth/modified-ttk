// python wrapper for vtkSelectionRepresentation
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
#include "vtkSelectionRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSelectionRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSelectionRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkPVDataRepresentation_ClassNew
extern "C" { PyObject *PyvtkPVDataRepresentation_ClassNew(); }
#define DECLARED_PyvtkPVDataRepresentation_ClassNew
#endif

static const char *PyvtkSelectionRepresentation_Doc =
  "vtkSelectionRepresentation - vtkSelectionRepresentation is a\nrepresentation to show the extracted cells.\n\n"
  "Superclass: vtkPVDataRepresentation\n\n"
  "It uses vtkGeometryRepresentation and vtkPVDataRepresentation\n"
  "internally.@par Thanks: The addition of a transformation matrix was\n"
  "supported by CEA/DIF Commissariat a l'Energie Atomique, Centre DAM\n"
  "Ile-De-France, Arpajon, France.\n\n";


static PyObject *
PyvtkSelectionRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSelectionRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionRepresentation *op = static_cast<vtkSelectionRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSelectionRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSelectionRepresentation *tempr = vtkSelectionRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionRepresentation *op = static_cast<vtkSelectionRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSelectionRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSelectionRepresentation::NewInstance());

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
PyvtkSelectionRepresentation_SetLabelRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionRepresentation *op = static_cast<vtkSelectionRepresentation *>(vp);

  vtkDataLabelRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataLabelRepresentation"))
  {
    if (ap.IsBound())
    {
      op->SetLabelRepresentation(temp0);
    }
    else
    {
      op->vtkSelectionRepresentation::SetLabelRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionRepresentation_SetInputConnection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionRepresentation *op = static_cast<vtkSelectionRepresentation *>(vp);

  int temp0;
  vtkAlgorithmOutput *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetInputConnection(temp0, temp1);
    }
    else
    {
      op->vtkSelectionRepresentation::SetInputConnection(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionRepresentation_SetInputConnection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionRepresentation *op = static_cast<vtkSelectionRepresentation *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetInputConnection(temp0);
    }
    else
    {
      op->vtkSelectionRepresentation::SetInputConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionRepresentation_SetInputConnection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSelectionRepresentation_SetInputConnection_s1(self, args);
    case 1:
      return PyvtkSelectionRepresentation_SetInputConnection_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInputConnection");
  return nullptr;
}



static PyObject *
PyvtkSelectionRepresentation_AddInputConnection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionRepresentation *op = static_cast<vtkSelectionRepresentation *>(vp);

  int temp0;
  vtkAlgorithmOutput *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->AddInputConnection(temp0, temp1);
    }
    else
    {
      op->vtkSelectionRepresentation::AddInputConnection(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionRepresentation_AddInputConnection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionRepresentation *op = static_cast<vtkSelectionRepresentation *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->AddInputConnection(temp0);
    }
    else
    {
      op->vtkSelectionRepresentation::AddInputConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionRepresentation_AddInputConnection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSelectionRepresentation_AddInputConnection_s1(self, args);
    case 1:
      return PyvtkSelectionRepresentation_AddInputConnection_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddInputConnection");
  return nullptr;
}



static PyObject *
PyvtkSelectionRepresentation_RemoveInputConnection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionRepresentation *op = static_cast<vtkSelectionRepresentation *>(vp);

  int temp0;
  vtkAlgorithmOutput *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->RemoveInputConnection(temp0, temp1);
    }
    else
    {
      op->vtkSelectionRepresentation::RemoveInputConnection(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionRepresentation_RemoveInputConnection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionRepresentation *op = static_cast<vtkSelectionRepresentation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->RemoveInputConnection(temp0, temp1);
    }
    else
    {
      op->vtkSelectionRepresentation::RemoveInputConnection(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSelectionRepresentation_RemoveInputConnection_Methods[] = {
  {nullptr, PyvtkSelectionRepresentation_RemoveInputConnection_s1, METH_VARARGS,
   "@iV *vtkAlgorithmOutput"},
  {nullptr, PyvtkSelectionRepresentation_RemoveInputConnection_s2, METH_VARARGS,
   "@ii"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSelectionRepresentation_RemoveInputConnection(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSelectionRepresentation_RemoveInputConnection_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RemoveInputConnection");
  return nullptr;
}



static PyObject *
PyvtkSelectionRepresentation_MarkModified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkModified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionRepresentation *op = static_cast<vtkSelectionRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MarkModified();
    }
    else
    {
      op->vtkSelectionRepresentation::MarkModified();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionRepresentation_SetUpdateTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpdateTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionRepresentation *op = static_cast<vtkSelectionRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUpdateTime(temp0);
    }
    else
    {
      op->vtkSelectionRepresentation::SetUpdateTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionRepresentation_SetForceUseCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceUseCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionRepresentation *op = static_cast<vtkSelectionRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetForceUseCache(temp0);
    }
    else
    {
      op->vtkSelectionRepresentation::SetForceUseCache(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionRepresentation_SetForcedCacheKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForcedCacheKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionRepresentation *op = static_cast<vtkSelectionRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetForcedCacheKey(temp0);
    }
    else
    {
      op->vtkSelectionRepresentation::SetForcedCacheKey(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionRepresentation_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionRepresentation *op = static_cast<vtkSelectionRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVisibility(temp0);
    }
    else
    {
      op->vtkSelectionRepresentation::SetVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionRepresentation_SetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionRepresentation *op = static_cast<vtkSelectionRepresentation *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSelectionRepresentation::SetColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionRepresentation_SetLineWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionRepresentation *op = static_cast<vtkSelectionRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLineWidth(temp0);
    }
    else
    {
      op->vtkSelectionRepresentation::SetLineWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionRepresentation_SetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionRepresentation *op = static_cast<vtkSelectionRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOpacity(temp0);
    }
    else
    {
      op->vtkSelectionRepresentation::SetOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionRepresentation_SetPointSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionRepresentation *op = static_cast<vtkSelectionRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointSize(temp0);
    }
    else
    {
      op->vtkSelectionRepresentation::SetPointSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionRepresentation_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionRepresentation *op = static_cast<vtkSelectionRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRepresentation(temp0);
    }
    else
    {
      op->vtkSelectionRepresentation::SetRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionRepresentation_SetUseOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionRepresentation *op = static_cast<vtkSelectionRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseOutline(temp0);
    }
    else
    {
      op->vtkSelectionRepresentation::SetUseOutline(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionRepresentation_SetRenderPointsAsSpheres(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderPointsAsSpheres");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionRepresentation *op = static_cast<vtkSelectionRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRenderPointsAsSpheres(temp0);
    }
    else
    {
      op->vtkSelectionRepresentation::SetRenderPointsAsSpheres(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionRepresentation_SetRenderLinesAsTubes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderLinesAsTubes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionRepresentation *op = static_cast<vtkSelectionRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRenderLinesAsTubes(temp0);
    }
    else
    {
      op->vtkSelectionRepresentation::SetRenderLinesAsTubes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionRepresentation_SetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionRepresentation *op = static_cast<vtkSelectionRepresentation *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetOrientation(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSelectionRepresentation::SetOrientation(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionRepresentation_SetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionRepresentation *op = static_cast<vtkSelectionRepresentation *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSelectionRepresentation::SetOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionRepresentation_SetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionRepresentation *op = static_cast<vtkSelectionRepresentation *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetPosition(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSelectionRepresentation::SetPosition(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionRepresentation_SetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionRepresentation *op = static_cast<vtkSelectionRepresentation *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetScale(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSelectionRepresentation::SetScale(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionRepresentation_SetUserTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionRepresentation *op = static_cast<vtkSelectionRepresentation *>(vp);

  const size_t size0 = 16;
  double temp0[16];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetUserTransform(temp0);
    }
    else
    {
      op->vtkSelectionRepresentation::SetUserTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionRepresentation_SetPointFieldDataArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointFieldDataArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionRepresentation *op = static_cast<vtkSelectionRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointFieldDataArrayName(temp0);
    }
    else
    {
      op->vtkSelectionRepresentation::SetPointFieldDataArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionRepresentation_SetCellFieldDataArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellFieldDataArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionRepresentation *op = static_cast<vtkSelectionRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellFieldDataArrayName(temp0);
    }
    else
    {
      op->vtkSelectionRepresentation::SetCellFieldDataArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionRepresentation_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionRepresentation *op = static_cast<vtkSelectionRepresentation *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->Initialize(temp0, temp1) :
      op->vtkSelectionRepresentation::Initialize(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSelectionRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkSelectionRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSelectionRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSelectionRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSelectionRepresentation\nC++: static vtkSelectionRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSelectionRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSelectionRepresentation\nC++: vtkSelectionRepresentation *NewInstance()\n\n"},
  {"SetLabelRepresentation", PyvtkSelectionRepresentation_SetLabelRepresentation, METH_VARARGS,
   "V.SetLabelRepresentation(vtkDataLabelRepresentation)\nC++: void SetLabelRepresentation(vtkDataLabelRepresentation *)\n\nOne must change the internal representations only before the\nrepresentation is added to a view, after that it should not be\ntouched.\n"},
  {"SetInputConnection", PyvtkSelectionRepresentation_SetInputConnection, METH_VARARGS,
   "V.SetInputConnection(int, vtkAlgorithmOutput)\nC++: void SetInputConnection(int port, vtkAlgorithmOutput *input)\n    override;\nV.SetInputConnection(vtkAlgorithmOutput)\nC++: void SetInputConnection(vtkAlgorithmOutput *input) override;\n\nOverridden to simply pass the input to the internal\nrepresentations. We won't need this if vtkPVDataRepresentation\ncorrectly respected in the arguments passed to it during\nProcessRequest() etc.\n"},
  {"AddInputConnection", PyvtkSelectionRepresentation_AddInputConnection, METH_VARARGS,
   "V.AddInputConnection(int, vtkAlgorithmOutput)\nC++: void AddInputConnection(int port, vtkAlgorithmOutput *input)\n    override;\nV.AddInputConnection(vtkAlgorithmOutput)\nC++: void AddInputConnection(vtkAlgorithmOutput *input) override;\n\nOverridden to simply pass the input to the internal\nrepresentations. We won't need this if vtkPVDataRepresentation\ncorrectly respected in the arguments passed to it during\nProcessRequest() etc.\n"},
  {"RemoveInputConnection", PyvtkSelectionRepresentation_RemoveInputConnection, METH_VARARGS,
   "V.RemoveInputConnection(int, vtkAlgorithmOutput)\nC++: void RemoveInputConnection(int port,\n    vtkAlgorithmOutput *input) override;\nV.RemoveInputConnection(int, int)\nC++: void RemoveInputConnection(int port, int idx) override;\n\nOverridden to simply pass the input to the internal\nrepresentations. We won't need this if vtkPVDataRepresentation\ncorrectly respected in the arguments passed to it during\nProcessRequest() etc.\n"},
  {"MarkModified", PyvtkSelectionRepresentation_MarkModified, METH_VARARGS,
   "V.MarkModified()\nC++: void MarkModified() override;\n\nThis needs to be called on all instances of\nvtkSelectionRepresentation when the input is modified. This is\nessential since the geometry filter does not have any real-input\non the client side which messes with the Update requests.\n"},
  {"SetUpdateTime", PyvtkSelectionRepresentation_SetUpdateTime, METH_VARARGS,
   "V.SetUpdateTime(float)\nC++: void SetUpdateTime(double time) override;\n\nPassed on to internal representations as well.\n"},
  {"SetForceUseCache", PyvtkSelectionRepresentation_SetForceUseCache, METH_VARARGS,
   "V.SetForceUseCache(bool)\nC++: void SetForceUseCache(bool val) override;\n\nPassed on to internal representations as well.\n"},
  {"SetForcedCacheKey", PyvtkSelectionRepresentation_SetForcedCacheKey, METH_VARARGS,
   "V.SetForcedCacheKey(float)\nC++: void SetForcedCacheKey(double val) override;\n\nPassed on to internal representations as well.\n"},
  {"SetVisibility", PyvtkSelectionRepresentation_SetVisibility, METH_VARARGS,
   "V.SetVisibility(bool)\nC++: void SetVisibility(bool val) override;\n\nGet/Set the visibility for this representation. When the\nvisibility of representation of false, all view passes are\nignored. Overridden to propagate to the active representation.\n"},
  {"SetColor", PyvtkSelectionRepresentation_SetColor, METH_VARARGS,
   "V.SetColor(float, float, float)\nC++: void SetColor(double r, double g, double b)\n\nForwarded to GeometryRepresentation.\n"},
  {"SetLineWidth", PyvtkSelectionRepresentation_SetLineWidth, METH_VARARGS,
   "V.SetLineWidth(float)\nC++: void SetLineWidth(double val)\n\nForwarded to GeometryRepresentation.\n"},
  {"SetOpacity", PyvtkSelectionRepresentation_SetOpacity, METH_VARARGS,
   "V.SetOpacity(float)\nC++: void SetOpacity(double val)\n\nForwarded to GeometryRepresentation.\n"},
  {"SetPointSize", PyvtkSelectionRepresentation_SetPointSize, METH_VARARGS,
   "V.SetPointSize(float)\nC++: void SetPointSize(double val)\n\nForwarded to GeometryRepresentation.\n"},
  {"SetRepresentation", PyvtkSelectionRepresentation_SetRepresentation, METH_VARARGS,
   "V.SetRepresentation(int)\nC++: void SetRepresentation(int val)\n\nForwarded to GeometryRepresentation.\n"},
  {"SetUseOutline", PyvtkSelectionRepresentation_SetUseOutline, METH_VARARGS,
   "V.SetUseOutline(int)\nC++: void SetUseOutline(int)\n\nForwarded to GeometryRepresentation.\n"},
  {"SetRenderPointsAsSpheres", PyvtkSelectionRepresentation_SetRenderPointsAsSpheres, METH_VARARGS,
   "V.SetRenderPointsAsSpheres(bool)\nC++: void SetRenderPointsAsSpheres(bool)\n\nForwarded to GeometryRepresentation.\n"},
  {"SetRenderLinesAsTubes", PyvtkSelectionRepresentation_SetRenderLinesAsTubes, METH_VARARGS,
   "V.SetRenderLinesAsTubes(bool)\nC++: void SetRenderLinesAsTubes(bool)\n\nForwarded to GeometryRepresentation.\n"},
  {"SetOrientation", PyvtkSelectionRepresentation_SetOrientation, METH_VARARGS,
   "V.SetOrientation(float, float, float)\nC++: void SetOrientation(double, double, double)\n\nForwarded to GeometryRepresentation and LabelRepresentation\n"},
  {"SetOrigin", PyvtkSelectionRepresentation_SetOrigin, METH_VARARGS,
   "V.SetOrigin(float, float, float)\nC++: void SetOrigin(double, double, double)\n\nForwarded to GeometryRepresentation and LabelRepresentation\n"},
  {"SetPosition", PyvtkSelectionRepresentation_SetPosition, METH_VARARGS,
   "V.SetPosition(float, float, float)\nC++: void SetPosition(double, double, double)\n\nForwarded to GeometryRepresentation and LabelRepresentation\n"},
  {"SetScale", PyvtkSelectionRepresentation_SetScale, METH_VARARGS,
   "V.SetScale(float, float, float)\nC++: void SetScale(double, double, double)\n\nForwarded to GeometryRepresentation and LabelRepresentation\n"},
  {"SetUserTransform", PyvtkSelectionRepresentation_SetUserTransform, METH_VARARGS,
   "V.SetUserTransform((float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float))\nC++: void SetUserTransform(const double[16])\n\nForwarded to GeometryRepresentation and LabelRepresentation\n"},
  {"SetPointFieldDataArrayName", PyvtkSelectionRepresentation_SetPointFieldDataArrayName, METH_VARARGS,
   "V.SetPointFieldDataArrayName(string)\nC++: virtual void SetPointFieldDataArrayName(const char *val)\n\nForwarded to vtkDataLabelRepresentation.\n"},
  {"SetCellFieldDataArrayName", PyvtkSelectionRepresentation_SetCellFieldDataArrayName, METH_VARARGS,
   "V.SetCellFieldDataArrayName(string)\nC++: virtual void SetCellFieldDataArrayName(const char *val)\n\nForwarded to vtkDataLabelRepresentation.\n"},
  {"Initialize", PyvtkSelectionRepresentation_Initialize, METH_VARARGS,
   "V.Initialize(int, int) -> int\nC++: unsigned int Initialize(unsigned int minIdAvailable,\n    unsigned int maxIdAvailable) override;\n\nOverride because of internal composite representations that need\nto be initialized as well.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSelectionRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkSelectionRepresentation", // tp_name
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
  PyvtkSelectionRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSelectionRepresentation_StaticNew()
{
  return vtkSelectionRepresentation::New();
}

PyObject *PyvtkSelectionRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSelectionRepresentation_Type, PyvtkSelectionRepresentation_Methods,
    "vtkSelectionRepresentation",
 &PyvtkSelectionRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkSelectionRepresentation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPVDataRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSelectionRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSelectionRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSelectionRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

