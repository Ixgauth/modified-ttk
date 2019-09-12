// python wrapper for vtkBillboardTextActor3D
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
#include "vtkBillboardTextActor3D.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBillboardTextActor3D(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkBillboardTextActor3D_ClassNew(); }

#ifndef DECLARED_PyvtkProp3D_ClassNew
extern "C" { PyObject *PyvtkProp3D_ClassNew(); }
#define DECLARED_PyvtkProp3D_ClassNew
#endif

static const char *PyvtkBillboardTextActor3D_Doc =
  "vtkBillboardTextActor3D - Renders pixel-aligned text, facing the\ncamera, anchored at a 3D point.\n\n"
  "Superclass: vtkProp3D\n\n"
;


static PyObject *
PyvtkBillboardTextActor3D_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBillboardTextActor3D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBillboardTextActor3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBillboardTextActor3D *op = static_cast<vtkBillboardTextActor3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBillboardTextActor3D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBillboardTextActor3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBillboardTextActor3D *tempr = vtkBillboardTextActor3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBillboardTextActor3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBillboardTextActor3D *op = static_cast<vtkBillboardTextActor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBillboardTextActor3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBillboardTextActor3D::NewInstance());

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
PyvtkBillboardTextActor3D_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBillboardTextActor3D *op = static_cast<vtkBillboardTextActor3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInput(temp0);
    }
    else
    {
      op->vtkBillboardTextActor3D::SetInput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBillboardTextActor3D_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBillboardTextActor3D *op = static_cast<vtkBillboardTextActor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkBillboardTextActor3D::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBillboardTextActor3D_GetDisplayOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBillboardTextActor3D *op = static_cast<vtkBillboardTextActor3D *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetDisplayOffset() :
      op->vtkBillboardTextActor3D::GetDisplayOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkBillboardTextActor3D_SetDisplayOffset_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBillboardTextActor3D *op = static_cast<vtkBillboardTextActor3D *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetDisplayOffset(temp0, temp1);
    }
    else
    {
      op->vtkBillboardTextActor3D::SetDisplayOffset(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBillboardTextActor3D_SetDisplayOffset_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBillboardTextActor3D *op = static_cast<vtkBillboardTextActor3D *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDisplayOffset(temp0);
    }
    else
    {
      op->vtkBillboardTextActor3D::SetDisplayOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBillboardTextActor3D_SetDisplayOffset(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkBillboardTextActor3D_SetDisplayOffset_s1(self, args);
    case 1:
      return PyvtkBillboardTextActor3D_SetDisplayOffset_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDisplayOffset");
  return nullptr;
}



static PyObject *
PyvtkBillboardTextActor3D_SetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBillboardTextActor3D *op = static_cast<vtkBillboardTextActor3D *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetTextProperty(temp0);
    }
    else
    {
      op->vtkBillboardTextActor3D::SetTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBillboardTextActor3D_GetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBillboardTextActor3D *op = static_cast<vtkBillboardTextActor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTextProperty() :
      op->vtkBillboardTextActor3D::GetTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBillboardTextActor3D_SetForceOpaque(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceOpaque");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBillboardTextActor3D *op = static_cast<vtkBillboardTextActor3D *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetForceOpaque(temp0);
    }
    else
    {
      op->vtkBillboardTextActor3D::SetForceOpaque(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBillboardTextActor3D_GetForceOpaque(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceOpaque");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBillboardTextActor3D *op = static_cast<vtkBillboardTextActor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetForceOpaque() :
      op->vtkBillboardTextActor3D::GetForceOpaque());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBillboardTextActor3D_ForceOpaqueOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceOpaqueOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBillboardTextActor3D *op = static_cast<vtkBillboardTextActor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceOpaqueOn();
    }
    else
    {
      op->vtkBillboardTextActor3D::ForceOpaqueOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBillboardTextActor3D_ForceOpaqueOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceOpaqueOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBillboardTextActor3D *op = static_cast<vtkBillboardTextActor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceOpaqueOff();
    }
    else
    {
      op->vtkBillboardTextActor3D::ForceOpaqueOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBillboardTextActor3D_SetForceTranslucent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceTranslucent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBillboardTextActor3D *op = static_cast<vtkBillboardTextActor3D *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetForceTranslucent(temp0);
    }
    else
    {
      op->vtkBillboardTextActor3D::SetForceTranslucent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBillboardTextActor3D_GetForceTranslucent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceTranslucent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBillboardTextActor3D *op = static_cast<vtkBillboardTextActor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetForceTranslucent() :
      op->vtkBillboardTextActor3D::GetForceTranslucent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBillboardTextActor3D_ForceTranslucentOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceTranslucentOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBillboardTextActor3D *op = static_cast<vtkBillboardTextActor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceTranslucentOn();
    }
    else
    {
      op->vtkBillboardTextActor3D::ForceTranslucentOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBillboardTextActor3D_ForceTranslucentOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceTranslucentOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBillboardTextActor3D *op = static_cast<vtkBillboardTextActor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceTranslucentOff();
    }
    else
    {
      op->vtkBillboardTextActor3D::ForceTranslucentOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBillboardTextActor3D_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBillboardTextActor3D *op = static_cast<vtkBillboardTextActor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkBillboardTextActor3D::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBillboardTextActor3D_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBillboardTextActor3D *op = static_cast<vtkBillboardTextActor3D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkBillboardTextActor3D::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBillboardTextActor3D_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBillboardTextActor3D *op = static_cast<vtkBillboardTextActor3D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkBillboardTextActor3D::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBillboardTextActor3D_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBillboardTextActor3D *op = static_cast<vtkBillboardTextActor3D *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources(temp0);
    }
    else
    {
      op->vtkBillboardTextActor3D::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBillboardTextActor3D_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBillboardTextActor3D *op = static_cast<vtkBillboardTextActor3D *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkBillboardTextActor3D::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkBillboardTextActor3D_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBillboardTextActor3D *op = static_cast<vtkBillboardTextActor3D *>(vp);

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
      op->vtkBillboardTextActor3D::GetBounds(temp0);
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
PyvtkBillboardTextActor3D_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkBillboardTextActor3D_GetBounds_s1(self, args);
    case 1:
      return PyvtkBillboardTextActor3D_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}



static PyObject *
PyvtkBillboardTextActor3D_GetAnchorDC(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnchorDC");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBillboardTextActor3D *op = static_cast<vtkBillboardTextActor3D *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetAnchorDC() :
      op->vtkBillboardTextActor3D::GetAnchorDC());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkBillboardTextActor3D_Methods[] = {
  {"IsTypeOf", PyvtkBillboardTextActor3D_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkBillboardTextActor3D_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkBillboardTextActor3D_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkBillboardTextActor3D\nC++: static vtkBillboardTextActor3D *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkBillboardTextActor3D_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkBillboardTextActor3D\nC++: vtkBillboardTextActor3D *NewInstance()\n\n"},
  {"SetInput", PyvtkBillboardTextActor3D_SetInput, METH_VARARGS,
   "V.SetInput(string)\nC++: void SetInput(const char *in)\n\n"},
  {"GetInput", PyvtkBillboardTextActor3D_GetInput, METH_VARARGS,
   "V.GetInput() -> string\nC++: virtual char *GetInput()\n\n"},
  {"GetDisplayOffset", PyvtkBillboardTextActor3D_GetDisplayOffset, METH_VARARGS,
   "V.GetDisplayOffset() -> (int, int)\nC++: int *GetDisplayOffset()\n\n"},
  {"SetDisplayOffset", PyvtkBillboardTextActor3D_SetDisplayOffset, METH_VARARGS,
   "V.SetDisplayOffset(int, int)\nC++: void SetDisplayOffset(int, int)\nV.SetDisplayOffset((int, int))\nC++: void SetDisplayOffset(int a[2])\n\n"},
  {"SetTextProperty", PyvtkBillboardTextActor3D_SetTextProperty, METH_VARARGS,
   "V.SetTextProperty(vtkTextProperty)\nC++: void SetTextProperty(vtkTextProperty *tprop)\n\n"},
  {"GetTextProperty", PyvtkBillboardTextActor3D_GetTextProperty, METH_VARARGS,
   "V.GetTextProperty() -> vtkTextProperty\nC++: virtual vtkTextProperty *GetTextProperty()\n\n"},
  {"SetForceOpaque", PyvtkBillboardTextActor3D_SetForceOpaque, METH_VARARGS,
   "V.SetForceOpaque(bool)\nC++: virtual void SetForceOpaque(bool opaque)\n\n"},
  {"GetForceOpaque", PyvtkBillboardTextActor3D_GetForceOpaque, METH_VARARGS,
   "V.GetForceOpaque() -> bool\nC++: virtual bool GetForceOpaque()\n\n"},
  {"ForceOpaqueOn", PyvtkBillboardTextActor3D_ForceOpaqueOn, METH_VARARGS,
   "V.ForceOpaqueOn()\nC++: virtual void ForceOpaqueOn()\n\n"},
  {"ForceOpaqueOff", PyvtkBillboardTextActor3D_ForceOpaqueOff, METH_VARARGS,
   "V.ForceOpaqueOff()\nC++: virtual void ForceOpaqueOff()\n\n"},
  {"SetForceTranslucent", PyvtkBillboardTextActor3D_SetForceTranslucent, METH_VARARGS,
   "V.SetForceTranslucent(bool)\nC++: virtual void SetForceTranslucent(bool trans)\n\n"},
  {"GetForceTranslucent", PyvtkBillboardTextActor3D_GetForceTranslucent, METH_VARARGS,
   "V.GetForceTranslucent() -> bool\nC++: virtual bool GetForceTranslucent()\n\n"},
  {"ForceTranslucentOn", PyvtkBillboardTextActor3D_ForceTranslucentOn, METH_VARARGS,
   "V.ForceTranslucentOn()\nC++: virtual void ForceTranslucentOn()\n\n"},
  {"ForceTranslucentOff", PyvtkBillboardTextActor3D_ForceTranslucentOff, METH_VARARGS,
   "V.ForceTranslucentOff()\nC++: virtual void ForceTranslucentOff()\n\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkBillboardTextActor3D_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "V.HasTranslucentPolygonalGeometry() -> int\nC++: int HasTranslucentPolygonalGeometry() override;\n\nDefers to internal actor.\n"},
  {"RenderOpaqueGeometry", PyvtkBillboardTextActor3D_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *vp) override;\n\nCheck/update geometry/texture in opaque pass, since it only\nhappens once.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkBillboardTextActor3D_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *vp)\n    override;\n\nJust render in translucent pass, since it can execute multiple\ntimes (depth peeling, for instance).\n"},
  {"ReleaseGraphicsResources", PyvtkBillboardTextActor3D_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *win) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Release\nany graphics resources that are being consumed by this actor. The\nparameter window could be used to determine which graphic\nresources to release.\n"},
  {"GetBounds", PyvtkBillboardTextActor3D_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\nV.GetBounds([float, float, float, float, float, float])\nC++: void GetBounds(double bounds[6])\n\nGet the bounds for this Prop3D as\n(Xmin,Xmax,Ymin,Ymax,Zmin,Zmax).\n"},
  {"GetAnchorDC", PyvtkBillboardTextActor3D_GetAnchorDC, METH_VARARGS,
   "V.GetAnchorDC() -> (float, float, float)\nC++: double *GetAnchorDC()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkBillboardTextActor3D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkBillboardTextActor3D", // tp_name
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
  PyvtkBillboardTextActor3D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBillboardTextActor3D_StaticNew()
{
  return vtkBillboardTextActor3D::New();
}

PyObject *PyvtkBillboardTextActor3D_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkBillboardTextActor3D_Type, PyvtkBillboardTextActor3D_Methods,
    "vtkBillboardTextActor3D",
 &PyvtkBillboardTextActor3D_StaticNew);

  PyTypeObject *pytype = &PyvtkBillboardTextActor3D_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkProp3D_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkBillboardTextActor3D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBillboardTextActor3D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBillboardTextActor3D", o) != 0)
  {
    Py_DECREF(o);
  }

}

