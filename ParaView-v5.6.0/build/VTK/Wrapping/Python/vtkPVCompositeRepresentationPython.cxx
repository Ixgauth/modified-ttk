// python wrapper for vtkPVCompositeRepresentation
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
#include "vtkPVCompositeRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVCompositeRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVCompositeRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkCompositeRepresentation_ClassNew
extern "C" { PyObject *PyvtkCompositeRepresentation_ClassNew(); }
#define DECLARED_PyvtkCompositeRepresentation_ClassNew
#endif

static const char *PyvtkPVCompositeRepresentation_Doc =
  "vtkPVCompositeRepresentation - a data-representation used by ParaView.\n\n"
  "Superclass: vtkCompositeRepresentation\n\n"
  "vtkPVCompositeRepresentation is a data-representation used by\n"
  "ParaView for showing a type of data-set in the render view. It is a\n"
  "composite-representation with some fixed representations for showing\n"
  "things like selection and polar axes. This representation has 1 input\n"
  "port and it ensures that that input is passed on to the internal\n"
  "representations (except SelectionRepresentation and\n"
  "PolarAxesRepresentation) properly. For SelectionRepresentation and\n"
  "PolarAxesRepresentation the client is expected to setup the input\n"
  "(look at vtkSMPVRepresentationProxy).\n\n";


static PyObject *
PyvtkPVCompositeRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVCompositeRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCompositeRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeRepresentation *op = static_cast<vtkPVCompositeRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVCompositeRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCompositeRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVCompositeRepresentation *tempr = vtkPVCompositeRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCompositeRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeRepresentation *op = static_cast<vtkPVCompositeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVCompositeRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVCompositeRepresentation::NewInstance());

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
PyvtkPVCompositeRepresentation_SetSelectionRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeRepresentation *op = static_cast<vtkPVCompositeRepresentation *>(vp);

  vtkSelectionRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelectionRepresentation"))
  {
    if (ap.IsBound())
    {
      op->SetSelectionRepresentation(temp0);
    }
    else
    {
      op->vtkPVCompositeRepresentation::SetSelectionRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCompositeRepresentation_SetGridAxesRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridAxesRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeRepresentation *op = static_cast<vtkPVCompositeRepresentation *>(vp);

  vtkPVGridAxes3DRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVGridAxes3DRepresentation"))
  {
    if (ap.IsBound())
    {
      op->SetGridAxesRepresentation(temp0);
    }
    else
    {
      op->vtkPVCompositeRepresentation::SetGridAxesRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCompositeRepresentation_SetPolarAxesRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolarAxesRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeRepresentation *op = static_cast<vtkPVCompositeRepresentation *>(vp);

  vtkPolarAxesRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolarAxesRepresentation"))
  {
    if (ap.IsBound())
    {
      op->SetPolarAxesRepresentation(temp0);
    }
    else
    {
      op->vtkPVCompositeRepresentation::SetPolarAxesRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCompositeRepresentation_MarkModified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkModified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeRepresentation *op = static_cast<vtkPVCompositeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MarkModified();
    }
    else
    {
      op->vtkPVCompositeRepresentation::MarkModified();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCompositeRepresentation_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeRepresentation *op = static_cast<vtkPVCompositeRepresentation *>(vp);

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
      op->vtkPVCompositeRepresentation::SetVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCompositeRepresentation_SetSelectionVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeRepresentation *op = static_cast<vtkPVCompositeRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectionVisibility(temp0);
    }
    else
    {
      op->vtkPVCompositeRepresentation::SetSelectionVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCompositeRepresentation_SetPolarAxesVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolarAxesVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeRepresentation *op = static_cast<vtkPVCompositeRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPolarAxesVisibility(temp0);
    }
    else
    {
      op->vtkPVCompositeRepresentation::SetPolarAxesVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCompositeRepresentation_SetUpdateTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpdateTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeRepresentation *op = static_cast<vtkPVCompositeRepresentation *>(vp);

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
      op->vtkPVCompositeRepresentation::SetUpdateTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCompositeRepresentation_SetForceUseCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceUseCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeRepresentation *op = static_cast<vtkPVCompositeRepresentation *>(vp);

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
      op->vtkPVCompositeRepresentation::SetForceUseCache(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCompositeRepresentation_SetForcedCacheKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForcedCacheKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeRepresentation *op = static_cast<vtkPVCompositeRepresentation *>(vp);

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
      op->vtkPVCompositeRepresentation::SetForcedCacheKey(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCompositeRepresentation_SetInputConnection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeRepresentation *op = static_cast<vtkPVCompositeRepresentation *>(vp);

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
      op->vtkPVCompositeRepresentation::SetInputConnection(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVCompositeRepresentation_SetInputConnection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeRepresentation *op = static_cast<vtkPVCompositeRepresentation *>(vp);

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
      op->vtkPVCompositeRepresentation::SetInputConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVCompositeRepresentation_SetInputConnection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkPVCompositeRepresentation_SetInputConnection_s1(self, args);
    case 1:
      return PyvtkPVCompositeRepresentation_SetInputConnection_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInputConnection");
  return nullptr;
}



static PyObject *
PyvtkPVCompositeRepresentation_AddInputConnection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeRepresentation *op = static_cast<vtkPVCompositeRepresentation *>(vp);

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
      op->vtkPVCompositeRepresentation::AddInputConnection(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVCompositeRepresentation_AddInputConnection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeRepresentation *op = static_cast<vtkPVCompositeRepresentation *>(vp);

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
      op->vtkPVCompositeRepresentation::AddInputConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVCompositeRepresentation_AddInputConnection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkPVCompositeRepresentation_AddInputConnection_s1(self, args);
    case 1:
      return PyvtkPVCompositeRepresentation_AddInputConnection_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddInputConnection");
  return nullptr;
}



static PyObject *
PyvtkPVCompositeRepresentation_RemoveInputConnection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeRepresentation *op = static_cast<vtkPVCompositeRepresentation *>(vp);

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
      op->vtkPVCompositeRepresentation::RemoveInputConnection(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVCompositeRepresentation_RemoveInputConnection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeRepresentation *op = static_cast<vtkPVCompositeRepresentation *>(vp);

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
      op->vtkPVCompositeRepresentation::RemoveInputConnection(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVCompositeRepresentation_RemoveInputConnection_Methods[] = {
  {nullptr, PyvtkPVCompositeRepresentation_RemoveInputConnection_s1, METH_VARARGS,
   "@iV *vtkAlgorithmOutput"},
  {nullptr, PyvtkPVCompositeRepresentation_RemoveInputConnection_s2, METH_VARARGS,
   "@ii"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPVCompositeRepresentation_RemoveInputConnection(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPVCompositeRepresentation_RemoveInputConnection_Methods;
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
PyvtkPVCompositeRepresentation_SetPointFieldDataArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointFieldDataArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeRepresentation *op = static_cast<vtkPVCompositeRepresentation *>(vp);

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
      op->vtkPVCompositeRepresentation::SetPointFieldDataArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCompositeRepresentation_SetCellFieldDataArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellFieldDataArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeRepresentation *op = static_cast<vtkPVCompositeRepresentation *>(vp);

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
      op->vtkPVCompositeRepresentation::SetCellFieldDataArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCompositeRepresentation_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeRepresentation *op = static_cast<vtkPVCompositeRepresentation *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->Initialize(temp0, temp1) :
      op->vtkPVCompositeRepresentation::Initialize(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVCompositeRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkPVCompositeRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVCompositeRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVCompositeRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVCompositeRepresentation\nC++: static vtkPVCompositeRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVCompositeRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVCompositeRepresentation\nC++: vtkPVCompositeRepresentation *NewInstance()\n\n"},
  {"SetSelectionRepresentation", PyvtkPVCompositeRepresentation_SetSelectionRepresentation, METH_VARARGS,
   "V.SetSelectionRepresentation(vtkSelectionRepresentation)\nC++: void SetSelectionRepresentation(vtkSelectionRepresentation *)\n\nThese must only be set during initialization before adding the\nrepresentation to any views or calling Update().\n"},
  {"SetGridAxesRepresentation", PyvtkPVCompositeRepresentation_SetGridAxesRepresentation, METH_VARARGS,
   "V.SetGridAxesRepresentation(vtkPVGridAxes3DRepresentation)\nC++: void SetGridAxesRepresentation(\n    vtkPVGridAxes3DRepresentation *)\n\n"},
  {"SetPolarAxesRepresentation", PyvtkPVCompositeRepresentation_SetPolarAxesRepresentation, METH_VARARGS,
   "V.SetPolarAxesRepresentation(vtkPolarAxesRepresentation)\nC++: void SetPolarAxesRepresentation(vtkPolarAxesRepresentation *)\n\nThis must only be set during initialization before adding the\nrepresentation to any views or calling Update().\n"},
  {"MarkModified", PyvtkPVCompositeRepresentation_MarkModified, METH_VARARGS,
   "V.MarkModified()\nC++: void MarkModified() override;\n\nPropagate the modification to all internal representations.\n"},
  {"SetVisibility", PyvtkPVCompositeRepresentation_SetVisibility, METH_VARARGS,
   "V.SetVisibility(bool)\nC++: void SetVisibility(bool visible) override;\n\nSet visibility of the representation. Overridden to update the\ncube-axes and selection visibilities.\n"},
  {"SetSelectionVisibility", PyvtkPVCompositeRepresentation_SetSelectionVisibility, METH_VARARGS,
   "V.SetSelectionVisibility(bool)\nC++: virtual void SetSelectionVisibility(bool visible)\n\nSet the selection visibility.\n"},
  {"SetPolarAxesVisibility", PyvtkPVCompositeRepresentation_SetPolarAxesVisibility, METH_VARARGS,
   "V.SetPolarAxesVisibility(bool)\nC++: virtual void SetPolarAxesVisibility(bool visible)\n\nSet the polar axes visibility.\n"},
  {"SetUpdateTime", PyvtkPVCompositeRepresentation_SetUpdateTime, METH_VARARGS,
   "V.SetUpdateTime(float)\nC++: void SetUpdateTime(double time) override;\n\nPassed on to internal representations as well.\n"},
  {"SetForceUseCache", PyvtkPVCompositeRepresentation_SetForceUseCache, METH_VARARGS,
   "V.SetForceUseCache(bool)\nC++: void SetForceUseCache(bool val) override;\n\nPassed on to internal representations as well.\n"},
  {"SetForcedCacheKey", PyvtkPVCompositeRepresentation_SetForcedCacheKey, METH_VARARGS,
   "V.SetForcedCacheKey(float)\nC++: void SetForcedCacheKey(double val) override;\n\nPassed on to internal representations as well.\n"},
  {"SetInputConnection", PyvtkPVCompositeRepresentation_SetInputConnection, METH_VARARGS,
   "V.SetInputConnection(int, vtkAlgorithmOutput)\nC++: void SetInputConnection(int port, vtkAlgorithmOutput *input)\n    override;\nV.SetInputConnection(vtkAlgorithmOutput)\nC++: void SetInputConnection(vtkAlgorithmOutput *input) override;\n\nPassed on to internal representations as well.\n"},
  {"AddInputConnection", PyvtkPVCompositeRepresentation_AddInputConnection, METH_VARARGS,
   "V.AddInputConnection(int, vtkAlgorithmOutput)\nC++: void AddInputConnection(int port, vtkAlgorithmOutput *input)\n    override;\nV.AddInputConnection(vtkAlgorithmOutput)\nC++: void AddInputConnection(vtkAlgorithmOutput *input) override;\n\nPassed on to internal representations as well.\n"},
  {"RemoveInputConnection", PyvtkPVCompositeRepresentation_RemoveInputConnection, METH_VARARGS,
   "V.RemoveInputConnection(int, vtkAlgorithmOutput)\nC++: void RemoveInputConnection(int port,\n    vtkAlgorithmOutput *input) override;\nV.RemoveInputConnection(int, int)\nC++: void RemoveInputConnection(int port, int idx) override;\n\nPassed on to internal representations as well.\n"},
  {"SetPointFieldDataArrayName", PyvtkPVCompositeRepresentation_SetPointFieldDataArrayName, METH_VARARGS,
   "V.SetPointFieldDataArrayName(string)\nC++: virtual void SetPointFieldDataArrayName(const char *)\n\nForwarded to vtkSelectionRepresentation.\n"},
  {"SetCellFieldDataArrayName", PyvtkPVCompositeRepresentation_SetCellFieldDataArrayName, METH_VARARGS,
   "V.SetCellFieldDataArrayName(string)\nC++: virtual void SetCellFieldDataArrayName(const char *)\n\nForwarded to vtkSelectionRepresentation.\n"},
  {"Initialize", PyvtkPVCompositeRepresentation_Initialize, METH_VARARGS,
   "V.Initialize(int, int) -> int\nC++: unsigned int Initialize(unsigned int minIdAvailable,\n    unsigned int maxIdAvailable) override;\n\nOverride because of internal composite representations that need\nto be initialized as well.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVCompositeRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkPVCompositeRepresentation", // tp_name
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
  PyvtkPVCompositeRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVCompositeRepresentation_StaticNew()
{
  return vtkPVCompositeRepresentation::New();
}

PyObject *PyvtkPVCompositeRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVCompositeRepresentation_Type, PyvtkPVCompositeRepresentation_Methods,
    "vtkPVCompositeRepresentation",
 &PyvtkPVCompositeRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkPVCompositeRepresentation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkCompositeRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVCompositeRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVCompositeRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVCompositeRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

