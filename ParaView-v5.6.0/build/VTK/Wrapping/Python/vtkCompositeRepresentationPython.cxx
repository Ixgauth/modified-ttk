// python wrapper for vtkCompositeRepresentation
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
#include "vtkCompositeRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCompositeRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCompositeRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkPVDataRepresentation_ClassNew
extern "C" { PyObject *PyvtkPVDataRepresentation_ClassNew(); }
#define DECLARED_PyvtkPVDataRepresentation_ClassNew
#endif

static const char *PyvtkCompositeRepresentation_Doc =
  "vtkCompositeRepresentation - combine multiple representations into\none with only 1 representation active at a time.\n\n"
  "Superclass: vtkPVDataRepresentation\n\n"
  "vtkCompositeRepresentation makes is possible to combine multiple\n"
  "representations into one. Only one representation can be active at a\n"
  "give time. vtkCompositeRepresentation provides API to add the\n"
  "representations that form the composite and to pick the active\n"
  "representation.\n\n"
  "vtkCompositeRepresentation relies on call AddToView and\n"
  "RemoveFromView on the internal representations whenever it needs to\n"
  "change the active representation. So it is essential that\n"
  "representations handle those methods correctly and don't suffer from uncanny side effects when\n"
  "that's done repeatedly.\n\n";


static PyObject *
PyvtkCompositeRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCompositeRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRepresentation *op = static_cast<vtkCompositeRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCompositeRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCompositeRepresentation *tempr = vtkCompositeRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRepresentation *op = static_cast<vtkCompositeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCompositeRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCompositeRepresentation::NewInstance());

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
PyvtkCompositeRepresentation_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRepresentation *op = static_cast<vtkCompositeRepresentation *>(vp);

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
      op->vtkCompositeRepresentation::SetVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeRepresentation_AddRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRepresentation *op = static_cast<vtkCompositeRepresentation *>(vp);

  const char *temp0 = nullptr;
  vtkPVDataRepresentation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPVDataRepresentation"))
  {
    if (ap.IsBound())
    {
      op->AddRepresentation(temp0, temp1);
    }
    else
    {
      op->vtkCompositeRepresentation::AddRepresentation(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeRepresentation_RemoveRepresentation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRepresentation *op = static_cast<vtkCompositeRepresentation *>(vp);

  vtkPVDataRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVDataRepresentation"))
  {
    if (ap.IsBound())
    {
      op->RemoveRepresentation(temp0);
    }
    else
    {
      op->vtkCompositeRepresentation::RemoveRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCompositeRepresentation_RemoveRepresentation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRepresentation *op = static_cast<vtkCompositeRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveRepresentation(temp0);
    }
    else
    {
      op->vtkCompositeRepresentation::RemoveRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCompositeRepresentation_RemoveRepresentation_Methods[] = {
  {nullptr, PyvtkCompositeRepresentation_RemoveRepresentation_s1, METH_VARARGS,
   "@V *vtkPVDataRepresentation"},
  {nullptr, PyvtkCompositeRepresentation_RemoveRepresentation_s2, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCompositeRepresentation_RemoveRepresentation(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCompositeRepresentation_RemoveRepresentation_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RemoveRepresentation");
  return nullptr;
}



static PyObject *
PyvtkCompositeRepresentation_SetActiveRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRepresentation *op = static_cast<vtkCompositeRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetActiveRepresentation(temp0);
    }
    else
    {
      op->vtkCompositeRepresentation::SetActiveRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeRepresentation_GetActiveRepresentationKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveRepresentationKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRepresentation *op = static_cast<vtkCompositeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetActiveRepresentationKey() :
      op->vtkCompositeRepresentation::GetActiveRepresentationKey());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeRepresentation_GetActiveRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRepresentation *op = static_cast<vtkCompositeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVDataRepresentation *tempr = (ap.IsBound() ?
      op->GetActiveRepresentation() :
      op->vtkCompositeRepresentation::GetActiveRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeRepresentation_SetInputConnection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRepresentation *op = static_cast<vtkCompositeRepresentation *>(vp);

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
      op->vtkCompositeRepresentation::SetInputConnection(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCompositeRepresentation_SetInputConnection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRepresentation *op = static_cast<vtkCompositeRepresentation *>(vp);

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
      op->vtkCompositeRepresentation::SetInputConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCompositeRepresentation_SetInputConnection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkCompositeRepresentation_SetInputConnection_s1(self, args);
    case 1:
      return PyvtkCompositeRepresentation_SetInputConnection_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInputConnection");
  return nullptr;
}



static PyObject *
PyvtkCompositeRepresentation_AddInputConnection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRepresentation *op = static_cast<vtkCompositeRepresentation *>(vp);

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
      op->vtkCompositeRepresentation::AddInputConnection(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCompositeRepresentation_AddInputConnection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRepresentation *op = static_cast<vtkCompositeRepresentation *>(vp);

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
      op->vtkCompositeRepresentation::AddInputConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCompositeRepresentation_AddInputConnection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkCompositeRepresentation_AddInputConnection_s1(self, args);
    case 1:
      return PyvtkCompositeRepresentation_AddInputConnection_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddInputConnection");
  return nullptr;
}



static PyObject *
PyvtkCompositeRepresentation_RemoveInputConnection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRepresentation *op = static_cast<vtkCompositeRepresentation *>(vp);

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
      op->vtkCompositeRepresentation::RemoveInputConnection(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCompositeRepresentation_RemoveInputConnection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRepresentation *op = static_cast<vtkCompositeRepresentation *>(vp);

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
      op->vtkCompositeRepresentation::RemoveInputConnection(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCompositeRepresentation_RemoveInputConnection_Methods[] = {
  {nullptr, PyvtkCompositeRepresentation_RemoveInputConnection_s1, METH_VARARGS,
   "@iV *vtkAlgorithmOutput"},
  {nullptr, PyvtkCompositeRepresentation_RemoveInputConnection_s2, METH_VARARGS,
   "@ii"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCompositeRepresentation_RemoveInputConnection(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCompositeRepresentation_RemoveInputConnection_Methods;
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
PyvtkCompositeRepresentation_MarkModified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkModified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRepresentation *op = static_cast<vtkCompositeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MarkModified();
    }
    else
    {
      op->vtkCompositeRepresentation::MarkModified();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeRepresentation_GetRenderedDataObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderedDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRepresentation *op = static_cast<vtkCompositeRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetRenderedDataObject(temp0) :
      op->vtkCompositeRepresentation::GetRenderedDataObject(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeRepresentation_GetRepresentationTypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentationTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRepresentation *op = static_cast<vtkCompositeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetRepresentationTypes() :
      op->vtkCompositeRepresentation::GetRepresentationTypes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeRepresentation_SetUpdateTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpdateTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRepresentation *op = static_cast<vtkCompositeRepresentation *>(vp);

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
      op->vtkCompositeRepresentation::SetUpdateTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeRepresentation_SetForceUseCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceUseCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRepresentation *op = static_cast<vtkCompositeRepresentation *>(vp);

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
      op->vtkCompositeRepresentation::SetForceUseCache(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeRepresentation_SetForcedCacheKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForcedCacheKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRepresentation *op = static_cast<vtkCompositeRepresentation *>(vp);

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
      op->vtkCompositeRepresentation::SetForcedCacheKey(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCompositeRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkCompositeRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCompositeRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCompositeRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCompositeRepresentation\nC++: static vtkCompositeRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCompositeRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCompositeRepresentation\nC++: vtkCompositeRepresentation *NewInstance()\n\n"},
  {"SetVisibility", PyvtkCompositeRepresentation_SetVisibility, METH_VARARGS,
   "V.SetVisibility(bool)\nC++: void SetVisibility(bool val) override;\n\nMethods overridden to propagate to the active representation.\n"},
  {"AddRepresentation", PyvtkCompositeRepresentation_AddRepresentation, METH_VARARGS,
   "V.AddRepresentation(string, vtkPVDataRepresentation)\nC++: virtual void AddRepresentation(const char *key,\n    vtkPVDataRepresentation *repr)\n\nAdd/Remove representations. key is a unique string used to\nidentify that representation.\n"},
  {"RemoveRepresentation", PyvtkCompositeRepresentation_RemoveRepresentation, METH_VARARGS,
   "V.RemoveRepresentation(vtkPVDataRepresentation)\nC++: virtual void RemoveRepresentation(\n    vtkPVDataRepresentation *repr)\nV.RemoveRepresentation(string)\nC++: virtual void RemoveRepresentation(const char *key)\n\nAdd/Remove representations. key is a unique string used to\nidentify that representation.\n"},
  {"SetActiveRepresentation", PyvtkCompositeRepresentation_SetActiveRepresentation, METH_VARARGS,
   "V.SetActiveRepresentation(string)\nC++: void SetActiveRepresentation(const char *key)\n\nSet the active key. If a valid key is not specified, then none of\nthe representations is treated as active.\n"},
  {"GetActiveRepresentationKey", PyvtkCompositeRepresentation_GetActiveRepresentationKey, METH_VARARGS,
   "V.GetActiveRepresentationKey() -> string\nC++: const char *GetActiveRepresentationKey()\n\nSet the active key. If a valid key is not specified, then none of\nthe representations is treated as active.\n"},
  {"GetActiveRepresentation", PyvtkCompositeRepresentation_GetActiveRepresentation, METH_VARARGS,
   "V.GetActiveRepresentation() -> vtkPVDataRepresentation\nC++: vtkPVDataRepresentation *GetActiveRepresentation()\n\nReturns the active representation if valid.\n"},
  {"SetInputConnection", PyvtkCompositeRepresentation_SetInputConnection, METH_VARARGS,
   "V.SetInputConnection(int, vtkAlgorithmOutput)\nC++: void SetInputConnection(int port, vtkAlgorithmOutput *input)\n    override;\nV.SetInputConnection(vtkAlgorithmOutput)\nC++: void SetInputConnection(vtkAlgorithmOutput *input) override;\n\nOverridden to simply pass the input to the internal\nrepresentations. We won't need this if vtkPVDataRepresentation\ncorrectly respected in the arguments passed to it during\nProcessRequest() etc.\n"},
  {"AddInputConnection", PyvtkCompositeRepresentation_AddInputConnection, METH_VARARGS,
   "V.AddInputConnection(int, vtkAlgorithmOutput)\nC++: void AddInputConnection(int port, vtkAlgorithmOutput *input)\n    override;\nV.AddInputConnection(vtkAlgorithmOutput)\nC++: void AddInputConnection(vtkAlgorithmOutput *input) override;\n\nOverridden to simply pass the input to the internal\nrepresentations. We won't need this if vtkPVDataRepresentation\ncorrectly respected in the arguments passed to it during\nProcessRequest() etc.\n"},
  {"RemoveInputConnection", PyvtkCompositeRepresentation_RemoveInputConnection, METH_VARARGS,
   "V.RemoveInputConnection(int, vtkAlgorithmOutput)\nC++: void RemoveInputConnection(int port,\n    vtkAlgorithmOutput *input) override;\nV.RemoveInputConnection(int, int)\nC++: void RemoveInputConnection(int port, int idx) override;\n\nOverridden to simply pass the input to the internal\nrepresentations. We won't need this if vtkPVDataRepresentation\ncorrectly respected in the arguments passed to it during\nProcessRequest() etc.\n"},
  {"MarkModified", PyvtkCompositeRepresentation_MarkModified, METH_VARARGS,
   "V.MarkModified()\nC++: void MarkModified() override;\n\nPropagate the modification to all internal representations.\n"},
  {"GetRenderedDataObject", PyvtkCompositeRepresentation_GetRenderedDataObject, METH_VARARGS,
   "V.GetRenderedDataObject(int) -> vtkDataObject\nC++: vtkDataObject *GetRenderedDataObject(int port) override;\n\nReturns the data object that is rendered from the given input\nport.\n"},
  {"GetRepresentationTypes", PyvtkCompositeRepresentation_GetRepresentationTypes, METH_VARARGS,
   "V.GetRepresentationTypes() -> vtkStringArray\nC++: vtkStringArray *GetRepresentationTypes()\n\nReturns the list of available representation types as a string\narray.\n"},
  {"SetUpdateTime", PyvtkCompositeRepresentation_SetUpdateTime, METH_VARARGS,
   "V.SetUpdateTime(float)\nC++: void SetUpdateTime(double time) override;\n\nPassed on to internal representations as well.\n"},
  {"SetForceUseCache", PyvtkCompositeRepresentation_SetForceUseCache, METH_VARARGS,
   "V.SetForceUseCache(bool)\nC++: void SetForceUseCache(bool val) override;\n\nPassed on to internal representations as well.\n"},
  {"SetForcedCacheKey", PyvtkCompositeRepresentation_SetForcedCacheKey, METH_VARARGS,
   "V.SetForcedCacheKey(float)\nC++: void SetForcedCacheKey(double val) override;\n\nPassed on to internal representations as well.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCompositeRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkCompositeRepresentation", // tp_name
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
  PyvtkCompositeRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCompositeRepresentation_StaticNew()
{
  return vtkCompositeRepresentation::New();
}

PyObject *PyvtkCompositeRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCompositeRepresentation_Type, PyvtkCompositeRepresentation_Methods,
    "vtkCompositeRepresentation",
 &PyvtkCompositeRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkCompositeRepresentation_Type;

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

void PyVTKAddFile_vtkCompositeRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCompositeRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCompositeRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

