// python wrapper for vtkSMParaViewPipelineControllerWithRendering
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
#include "vtkSMParaViewPipelineControllerWithRendering.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMParaViewPipelineControllerWithRendering(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMParaViewPipelineControllerWithRendering_ClassNew(); }

#ifndef DECLARED_PyvtkSMParaViewPipelineController_ClassNew
extern "C" { PyObject *PyvtkSMParaViewPipelineController_ClassNew(); }
#define DECLARED_PyvtkSMParaViewPipelineController_ClassNew
#endif

static const char *PyvtkSMParaViewPipelineControllerWithRendering_Doc =
  "vtkSMParaViewPipelineControllerWithRendering -\nvtkSMParaViewPipelineControllerWithRendering overrides\nvtkSMParaViewPipelineController to add support for initializing\nrendering proxies appropriately.\n\n"
  "Superclass: vtkSMParaViewPipelineController\n\n"
  "vtkSMParaViewPipelineControllerWithRendering uses vtkObjectFactory\n"
  "mechanisms to override vtkSMParaViewPipelineController's creation.\n"
  "One should not need to create or use this class directly (excepting\n"
  "when needing to subclass). Simply create\n"
  "vtkSMParaViewPipelineController. If the application is linked with\n"
  "the rendering module, then this class will be instantiated instead of\n"
  "vtkSMParaViewPipelineController automatically.\n\n"
  "vtkSMParaViewPipelineControllerWithRendering also adds new API to\n"
  "control representation visibility and manage creation of views. To\n"
  "use that API clients can instantiate\n"
  "vtkSMParaViewPipelineControllerWithRendering. Just like\n"
  "vtkSMParaViewPipelineController, this class also uses\n"
  "vtkObjectFactory mechanisms to enable overriding by clients at\n"
  "compile time.\n\n";


static PyObject *
PyvtkSMParaViewPipelineControllerWithRendering_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMParaViewPipelineControllerWithRendering::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineControllerWithRendering_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineControllerWithRendering *op = static_cast<vtkSMParaViewPipelineControllerWithRendering *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMParaViewPipelineControllerWithRendering::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineControllerWithRendering_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMParaViewPipelineControllerWithRendering *tempr = vtkSMParaViewPipelineControllerWithRendering::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineControllerWithRendering_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineControllerWithRendering *op = static_cast<vtkSMParaViewPipelineControllerWithRendering *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMParaViewPipelineControllerWithRendering *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMParaViewPipelineControllerWithRendering::NewInstance());

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
PyvtkSMParaViewPipelineControllerWithRendering_Show(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Show");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineControllerWithRendering *op = static_cast<vtkSMParaViewPipelineControllerWithRendering *>(vp);

  vtkSMSourceProxy *temp0 = nullptr;
  int temp1;
  vtkSMViewProxy *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkSMViewProxy"))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->Show(temp0, temp1, temp2) :
      op->vtkSMParaViewPipelineControllerWithRendering::Show(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineControllerWithRendering_ShowAll(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowAll");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineControllerWithRendering *op = static_cast<vtkSMParaViewPipelineControllerWithRendering *>(vp);

  vtkSMViewProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMViewProxy"))
  {
    if (ap.IsBound())
    {
      op->ShowAll(temp0);
    }
    else
    {
      op->vtkSMParaViewPipelineControllerWithRendering::ShowAll(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineControllerWithRendering_Hide_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Hide");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineControllerWithRendering *op = static_cast<vtkSMParaViewPipelineControllerWithRendering *>(vp);

  vtkSMSourceProxy *temp0 = nullptr;
  int temp1;
  vtkSMViewProxy *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkSMViewProxy"))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->Hide(temp0, temp1, temp2) :
      op->vtkSMParaViewPipelineControllerWithRendering::Hide(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMParaViewPipelineControllerWithRendering_Hide_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Hide");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineControllerWithRendering *op = static_cast<vtkSMParaViewPipelineControllerWithRendering *>(vp);

  vtkSMProxy *temp0 = nullptr;
  vtkSMViewProxy *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetVTKObject(temp1, "vtkSMViewProxy"))
  {
    if (ap.IsBound())
    {
      op->Hide(temp0, temp1);
    }
    else
    {
      op->vtkSMParaViewPipelineControllerWithRendering::Hide(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMParaViewPipelineControllerWithRendering_Hide(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSMParaViewPipelineControllerWithRendering_Hide_s1(self, args);
    case 2:
      return PyvtkSMParaViewPipelineControllerWithRendering_Hide_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Hide");
  return nullptr;
}



static PyObject *
PyvtkSMParaViewPipelineControllerWithRendering_HideAll(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HideAll");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineControllerWithRendering *op = static_cast<vtkSMParaViewPipelineControllerWithRendering *>(vp);

  vtkSMViewProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMViewProxy"))
  {
    if (ap.IsBound())
    {
      op->HideAll(temp0);
    }
    else
    {
      op->vtkSMParaViewPipelineControllerWithRendering::HideAll(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineControllerWithRendering_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineControllerWithRendering *op = static_cast<vtkSMParaViewPipelineControllerWithRendering *>(vp);

  vtkSMSourceProxy *temp0 = nullptr;
  int temp1;
  vtkSMViewProxy *temp2 = nullptr;
  bool temp3 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkSMViewProxy") &&
      ap.GetValue(temp3))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->SetVisibility(temp0, temp1, temp2, temp3) :
      op->vtkSMParaViewPipelineControllerWithRendering::SetVisibility(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineControllerWithRendering_GetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineControllerWithRendering *op = static_cast<vtkSMParaViewPipelineControllerWithRendering *>(vp);

  vtkSMSourceProxy *temp0 = nullptr;
  int temp1;
  vtkSMViewProxy *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkSMViewProxy"))
  {
    bool tempr = (ap.IsBound() ?
      op->GetVisibility(temp0, temp1, temp2) :
      op->vtkSMParaViewPipelineControllerWithRendering::GetVisibility(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineControllerWithRendering_ShowInPreferredView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowInPreferredView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineControllerWithRendering *op = static_cast<vtkSMParaViewPipelineControllerWithRendering *>(vp);

  vtkSMSourceProxy *temp0 = nullptr;
  int temp1;
  vtkSMViewProxy *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkSMViewProxy"))
  {
    vtkSMViewProxy *tempr = (ap.IsBound() ?
      op->ShowInPreferredView(temp0, temp1, temp2) :
      op->vtkSMParaViewPipelineControllerWithRendering::ShowInPreferredView(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineControllerWithRendering_GetPreferredViewType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreferredViewType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineControllerWithRendering *op = static_cast<vtkSMParaViewPipelineControllerWithRendering *>(vp);

  vtkSMSourceProxy *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy") &&
      ap.GetValue(temp1))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPreferredViewType(temp0, temp1) :
      op->vtkSMParaViewPipelineControllerWithRendering::GetPreferredViewType(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineControllerWithRendering_RegisterRepresentationProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterRepresentationProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineControllerWithRendering *op = static_cast<vtkSMParaViewPipelineControllerWithRendering *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    bool tempr = (ap.IsBound() ?
      op->RegisterRepresentationProxy(temp0) :
      op->vtkSMParaViewPipelineControllerWithRendering::RegisterRepresentationProxy(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineControllerWithRendering_SetHideScalarBarOnHide(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetHideScalarBarOnHide");

  bool temp0 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSMParaViewPipelineControllerWithRendering::SetHideScalarBarOnHide(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineControllerWithRendering_SetInheritRepresentationProperties(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetInheritRepresentationProperties");

  bool temp0 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSMParaViewPipelineControllerWithRendering::SetInheritRepresentationProperties(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineControllerWithRendering_GetInheritRepresentationProperties(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetInheritRepresentationProperties");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    bool tempr = vtkSMParaViewPipelineControllerWithRendering::GetInheritRepresentationProperties();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineControllerWithRendering_PostInitializeProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PostInitializeProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineControllerWithRendering *op = static_cast<vtkSMParaViewPipelineControllerWithRendering *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    bool tempr = (ap.IsBound() ?
      op->PostInitializeProxy(temp0) :
      op->vtkSMParaViewPipelineControllerWithRendering::PostInitializeProxy(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineControllerWithRendering_RegisterViewProxy_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterViewProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineControllerWithRendering *op = static_cast<vtkSMParaViewPipelineControllerWithRendering *>(vp);

  vtkSMProxy *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->RegisterViewProxy(temp0, temp1) :
      op->vtkSMParaViewPipelineControllerWithRendering::RegisterViewProxy(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMParaViewPipelineControllerWithRendering_RegisterViewProxy_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterViewProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineControllerWithRendering *op = static_cast<vtkSMParaViewPipelineControllerWithRendering *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    bool tempr = (ap.IsBound() ?
      op->RegisterViewProxy(temp0) :
      op->vtkSMParaViewPipelineControllerWithRendering::RegisterViewProxy(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMParaViewPipelineControllerWithRendering_RegisterViewProxy(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSMParaViewPipelineControllerWithRendering_RegisterViewProxy_s1(self, args);
    case 1:
      return PyvtkSMParaViewPipelineControllerWithRendering_RegisterViewProxy_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RegisterViewProxy");
  return nullptr;
}



static PyObject *
PyvtkSMParaViewPipelineControllerWithRendering_RegisterLayoutProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterLayoutProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineControllerWithRendering *op = static_cast<vtkSMParaViewPipelineControllerWithRendering *>(vp);

  vtkSMProxy *temp0 = nullptr;
  const char *temp1 = NULL;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    bool tempr = (ap.IsBound() ?
      op->RegisterLayoutProxy(temp0, temp1) :
      op->vtkSMParaViewPipelineControllerWithRendering::RegisterLayoutProxy(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMParaViewPipelineControllerWithRendering_Methods[] = {
  {"IsTypeOf", PyvtkSMParaViewPipelineControllerWithRendering_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMParaViewPipelineControllerWithRendering_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMParaViewPipelineControllerWithRendering_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkSMParaViewPipelineControllerWithRendering\nC++: static vtkSMParaViewPipelineControllerWithRendering *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMParaViewPipelineControllerWithRendering_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMParaViewPipelineControllerWithRendering\nC++: vtkSMParaViewPipelineControllerWithRendering *NewInstance()\n\n"},
  {"Show", PyvtkSMParaViewPipelineControllerWithRendering_Show, METH_VARARGS,
   "V.Show(vtkSMSourceProxy, int, vtkSMViewProxy) -> vtkSMProxy\nC++: virtual vtkSMProxy *Show(vtkSMSourceProxy *producer,\n    int outputPort, vtkSMViewProxy *view)\n\nShow the output data in the view. If data cannot be shown in the\nview, returns NULL. If view is NULL, this simply calls\nShowInPreferredView().\n"},
  {"ShowAll", PyvtkSMParaViewPipelineControllerWithRendering_ShowAll, METH_VARARGS,
   "V.ShowAll(vtkSMViewProxy)\nC++: void ShowAll(vtkSMViewProxy *view)\n\nShow all source output ports in provided view.\n"},
  {"Hide", PyvtkSMParaViewPipelineControllerWithRendering_Hide, METH_VARARGS,
   "V.Hide(vtkSMSourceProxy, int, vtkSMViewProxy) -> vtkSMProxy\nC++: virtual vtkSMProxy *Hide(vtkSMSourceProxy *producer,\n    int outputPort, vtkSMViewProxy *view)\nV.Hide(vtkSMProxy, vtkSMViewProxy)\nC++: virtual void Hide(vtkSMProxy *repr, vtkSMViewProxy *view)\n\nOpposite of Show(). Locates the representation for the producer\nand then hides it, if found. Returns that representation, if\nfound.\n"},
  {"HideAll", PyvtkSMParaViewPipelineControllerWithRendering_HideAll, METH_VARARGS,
   "V.HideAll(vtkSMViewProxy)\nC++: virtual void HideAll(vtkSMViewProxy *view)\n\nHide all visible sources output ports in provided view\n"},
  {"SetVisibility", PyvtkSMParaViewPipelineControllerWithRendering_SetVisibility, METH_VARARGS,
   "V.SetVisibility(vtkSMSourceProxy, int, vtkSMViewProxy, bool)\n    -> vtkSMProxy\nC++: vtkSMProxy *SetVisibility(vtkSMSourceProxy *producer,\n    int outputPort, vtkSMViewProxy *view, bool visible)\n\nAlternative method to call Show and Hide using a visibility flag.\n"},
  {"GetVisibility", PyvtkSMParaViewPipelineControllerWithRendering_GetVisibility, METH_VARARGS,
   "V.GetVisibility(vtkSMSourceProxy, int, vtkSMViewProxy) -> bool\nC++: virtual bool GetVisibility(vtkSMSourceProxy *producer,\n    int outputPort, vtkSMViewProxy *view)\n\nReturns whether the producer/port are shown in the given view.\n"},
  {"ShowInPreferredView", PyvtkSMParaViewPipelineControllerWithRendering_ShowInPreferredView, METH_VARARGS,
   "V.ShowInPreferredView(vtkSMSourceProxy, int, vtkSMViewProxy)\n    -> vtkSMViewProxy\nC++: virtual vtkSMViewProxy *ShowInPreferredView(\n    vtkSMSourceProxy *producer, int outputPort,\n    vtkSMViewProxy *view)\n\nSame as Show() except that if the view is NULL or not the\npreferred view for the producer's output, this method will create\na new view and show the data in that new view.\n\nThere are several different strategies employed to determine the\npreferred view for the producer's output. See\nvtkSMParaViewPipelineControllerWithRendering::GetPreferredViewType\n() for details.\n\note if the source's hint indicates so, the data may also be\n      shown in the view passed in, in addition to the preferred\nview.\n      This is done by using the `also_show_in_current_view`\nattribute to\n      the `<View />` hint.\n\n@returns the view in which the data ends up being shown, if any.\n         It may return nullptr if the view is not the preferred\ntype\n         or the preferred cannot be determined or created.\n"},
  {"GetPreferredViewType", PyvtkSMParaViewPipelineControllerWithRendering_GetPreferredViewType, METH_VARARGS,
   "V.GetPreferredViewType(vtkSMSourceProxy, int) -> string\nC++: virtual const char *GetPreferredViewType(\n    vtkSMSourceProxy *producer, int outputPort)\n\nReturns the name for the preferred view type, if there is any.\nThere are several strategies employed by the default\nimplementation to determine the preferred view type.\n\n-# Using XML hints.\n\n\n   A producer proxy can provide XML hints to define the preferred\nview type\n   of each (or all) of its output ports. This is done as follows:\n\n   {xml}\n     \n       \n         <View type=\"<view name>\" port=\"<output port number\" />\n       \n        \n\n\n   Attribute `port` is optional and only needed to explicitly\nspecify\n   different view types for different output ports.\n\n-# Using data type.\n\n\n   If the data type for the generated data is `vtkTable`, then\nthe\n   preferred view (if none provided) is assumed to be\n`SpreadSheetView`.\n\n@returns XML name for the preferred view proxy. It is assumed to\n    be defined\n         in the \"views\" group.\n"},
  {"RegisterRepresentationProxy", PyvtkSMParaViewPipelineControllerWithRendering_RegisterRepresentationProxy, METH_VARARGS,
   "V.RegisterRepresentationProxy(vtkSMProxy) -> bool\nC++: bool RegisterRepresentationProxy(vtkSMProxy *proxy) override;\n\nOverridden to create color and opacity transfer functions if\napplicable. While it is tempting to add any default property\nsetup logic in such overrides, we must keep such overrides to a\nminimal and opting for domains that set appropriate defaults\nwhere as much as possible.\n"},
  {"SetHideScalarBarOnHide", PyvtkSMParaViewPipelineControllerWithRendering_SetHideScalarBarOnHide, METH_VARARGS,
   "V.SetHideScalarBarOnHide(bool)\nC++: static void SetHideScalarBarOnHide(bool)\n\nControl how scalar bar visibility is updated by the Hide call.\n"},
  {"SetInheritRepresentationProperties", PyvtkSMParaViewPipelineControllerWithRendering_SetInheritRepresentationProperties, METH_VARARGS,
   "V.SetInheritRepresentationProperties(bool)\nC++: static void SetInheritRepresentationProperties(bool)\n\nControl whether representations try to maintain properties from\nan input representation, if present. e.g. if you \"Transform\" the\nrepresentation for a source, then any filter that you connect to\nit should be transformed as well.\n"},
  {"GetInheritRepresentationProperties", PyvtkSMParaViewPipelineControllerWithRendering_GetInheritRepresentationProperties, METH_VARARGS,
   "V.GetInheritRepresentationProperties() -> bool\nC++: static bool GetInheritRepresentationProperties()\n\nControl whether representations try to maintain properties from\nan input representation, if present. e.g. if you \"Transform\" the\nrepresentation for a source, then any filter that you connect to\nit should be transformed as well.\n"},
  {"PostInitializeProxy", PyvtkSMParaViewPipelineControllerWithRendering_PostInitializeProxy, METH_VARARGS,
   "V.PostInitializeProxy(vtkSMProxy) -> bool\nC++: bool PostInitializeProxy(vtkSMProxy *proxy) override;\n\nOverridden to handle default ColorArrayName for representations\ncorrectly.\n"},
  {"RegisterViewProxy", PyvtkSMParaViewPipelineControllerWithRendering_RegisterViewProxy, METH_VARARGS,
   "V.RegisterViewProxy(vtkSMProxy, string) -> bool\nC++: bool RegisterViewProxy(vtkSMProxy *proxy,\n    const char *proxyname) override;\nV.RegisterViewProxy(vtkSMProxy) -> bool\nC++: virtual bool RegisterViewProxy(vtkSMProxy *proxy)\n\nOverridden to place the view in a layout on creation.\n"},
  {"RegisterLayoutProxy", PyvtkSMParaViewPipelineControllerWithRendering_RegisterLayoutProxy, METH_VARARGS,
   "V.RegisterLayoutProxy(vtkSMProxy, string) -> bool\nC++: virtual bool RegisterLayoutProxy(vtkSMProxy *proxy,\n    const char *proxyname=NULL)\n\nRegister layout proxy.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMParaViewPipelineControllerWithRendering_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerRenderingPython.vtkSMParaViewPipelineControllerWithRendering", // tp_name
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
  PyvtkSMParaViewPipelineControllerWithRendering_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMParaViewPipelineControllerWithRendering_StaticNew()
{
  return vtkSMParaViewPipelineControllerWithRendering::New();
}

PyObject *PyvtkSMParaViewPipelineControllerWithRendering_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMParaViewPipelineControllerWithRendering_Type, PyvtkSMParaViewPipelineControllerWithRendering_Methods,
    "vtkSMParaViewPipelineControllerWithRendering",
 &PyvtkSMParaViewPipelineControllerWithRendering_StaticNew);

  PyTypeObject *pytype = &PyvtkSMParaViewPipelineControllerWithRendering_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMParaViewPipelineController_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMParaViewPipelineControllerWithRendering(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMParaViewPipelineControllerWithRendering_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMParaViewPipelineControllerWithRendering", o) != 0)
  {
    Py_DECREF(o);
  }

}

