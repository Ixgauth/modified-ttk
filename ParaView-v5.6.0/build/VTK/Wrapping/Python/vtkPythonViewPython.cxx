// python wrapper for vtkPythonView
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
#include "vtkPythonView.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPythonView(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPythonView_ClassNew(); }

#ifndef DECLARED_PyvtkPVView_ClassNew
extern "C" { PyObject *PyvtkPVView_ClassNew(); }
#define DECLARED_PyvtkPVView_ClassNew
#endif

static const char *PyvtkPythonView_Doc =
  "vtkPythonView - vtkPythonView is a view for displaying data via a\nPython script that uses matplotlib to generate a plot.\n\n"
  "Superclass: vtkPVView\n\n"
;


static PyObject *
PyvtkPythonView_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPythonView::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonView_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonView *op = static_cast<vtkPythonView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPythonView::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonView_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPythonView *tempr = vtkPythonView::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonView_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonView *op = static_cast<vtkPythonView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPythonView *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPythonView::NewInstance());

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
PyvtkPythonView_REQUEST_DELIVER_DATA_TO_CLIENT(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "REQUEST_DELIVER_DATA_TO_CLIENT");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationRequestKey *tempr = vtkPythonView::REQUEST_DELIVER_DATA_TO_CLIENT();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonView_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonView *op = static_cast<vtkPythonView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkPythonView::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPythonView_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonView *op = static_cast<vtkPythonView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetRenderer() :
      op->vtkPythonView::GetRenderer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonView_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonView *op = static_cast<vtkPythonView *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->SetRenderer(temp0);
    }
    else
    {
      op->vtkPythonView::SetRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPythonView_GetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonView *op = static_cast<vtkPythonView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetRenderWindow() :
      op->vtkPythonView::GetRenderWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonView_SetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonView *op = static_cast<vtkPythonView *>(vp);

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
      op->vtkPythonView::SetRenderWindow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPythonView_SetScript(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScript");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonView *op = static_cast<vtkPythonView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScript(temp0);
    }
    else
    {
      op->vtkPythonView::SetScript(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPythonView_GetScript(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScript");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonView *op = static_cast<vtkPythonView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetScript() :
      op->vtkPythonView::GetScript());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonView_SetMagnification_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMagnification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonView *op = static_cast<vtkPythonView *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetMagnification(temp0, temp1);
    }
    else
    {
      op->vtkPythonView::SetMagnification(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPythonView_SetMagnification_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMagnification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonView *op = static_cast<vtkPythonView *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetMagnification(temp0);
    }
    else
    {
      op->vtkPythonView::SetMagnification(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPythonView_SetMagnification(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkPythonView_SetMagnification_s1(self, args);
    case 1:
      return PyvtkPythonView_SetMagnification_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMagnification");
  return nullptr;
}



static PyObject *
PyvtkPythonView_GetMagnification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMagnification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonView *op = static_cast<vtkPythonView *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetMagnification() :
      op->vtkPythonView::GetMagnification());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonView_GetNumberOfVisibleDataObjects(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVisibleDataObjects");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonView *op = static_cast<vtkPythonView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfVisibleDataObjects() :
      op->vtkPythonView::GetNumberOfVisibleDataObjects());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonView_GetVisibleRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisibleRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonView *op = static_cast<vtkPythonView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPythonRepresentation *tempr = (ap.IsBound() ?
      op->GetVisibleRepresentation(temp0) :
      op->vtkPythonView::GetVisibleRepresentation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonView_GetVisibleDataObjectForSetup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisibleDataObjectForSetup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonView *op = static_cast<vtkPythonView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetVisibleDataObjectForSetup(temp0) :
      op->vtkPythonView::GetVisibleDataObjectForSetup(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonView_GetVisibleDataObjectForRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisibleDataObjectForRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonView *op = static_cast<vtkPythonView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetVisibleDataObjectForRendering(temp0) :
      op->vtkPythonView::GetVisibleDataObjectForRendering(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonView_GetNumberOfAttributeArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAttributeArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonView *op = static_cast<vtkPythonView *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfAttributeArrays(temp0, temp1) :
      op->vtkPythonView::GetNumberOfAttributeArrays(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonView_GetAttributeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonView *op = static_cast<vtkPythonView *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetAttributeArrayName(temp0, temp1, temp2) :
      op->vtkPythonView::GetAttributeArrayName(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonView_SetAttributeArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonView *op = static_cast<vtkPythonView *>(vp);

  int temp0;
  int temp1;
  const char *temp2 = nullptr;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetAttributeArrayStatus(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPythonView::SetAttributeArrayStatus(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPythonView_GetAttributeArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonView *op = static_cast<vtkPythonView *>(vp);

  int temp0;
  int temp1;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->GetAttributeArrayStatus(temp0, temp1, temp2) :
      op->vtkPythonView::GetAttributeArrayStatus(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonView_EnableAllAttributeArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAllAttributeArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonView *op = static_cast<vtkPythonView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableAllAttributeArrays();
    }
    else
    {
      op->vtkPythonView::EnableAllAttributeArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPythonView_DisableAllAttributeArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAllAttributeArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonView *op = static_cast<vtkPythonView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisableAllAttributeArrays();
    }
    else
    {
      op->vtkPythonView::DisableAllAttributeArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPythonView_StillRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StillRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonView *op = static_cast<vtkPythonView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StillRender();
    }
    else
    {
      op->vtkPythonView::StillRender();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPythonView_InteractiveRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InteractiveRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonView *op = static_cast<vtkPythonView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InteractiveRender();
    }
    else
    {
      op->vtkPythonView::InteractiveRender();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPythonView_SetImageData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonView *op = static_cast<vtkPythonView *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetImageData(temp0);
    }
    else
    {
      op->vtkPythonView::SetImageData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPythonView_Methods[] = {
  {"IsTypeOf", PyvtkPythonView_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPythonView_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPythonView_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPythonView\nC++: static vtkPythonView *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPythonView_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPythonView\nC++: vtkPythonView *NewInstance()\n\n"},
  {"REQUEST_DELIVER_DATA_TO_CLIENT", PyvtkPythonView_REQUEST_DELIVER_DATA_TO_CLIENT, METH_VARARGS,
   "V.REQUEST_DELIVER_DATA_TO_CLIENT() -> vtkInformationRequestKey\nC++: static vtkInformationRequestKey *REQUEST_DELIVER_DATA_TO_CLIENT(\n    )\n\nThis is a pass for delivering data from the server nodes to the\nclient.\n"},
  {"Update", PyvtkPythonView_Update, METH_VARARGS,
   "V.Update()\nC++: void Update() override;\n\nOverrides the base class method to request an addition pass that\nmoves data from the server to the client.\n"},
  {"GetRenderer", PyvtkPythonView_GetRenderer, METH_VARARGS,
   "V.GetRenderer() -> vtkRenderer\nC++: virtual vtkRenderer *GetRenderer()\n\nGets the renderer for this view.\n"},
  {"SetRenderer", PyvtkPythonView_SetRenderer, METH_VARARGS,
   "V.SetRenderer(vtkRenderer)\nC++: virtual void SetRenderer(vtkRenderer *ren)\n\n"},
  {"GetRenderWindow", PyvtkPythonView_GetRenderWindow, METH_VARARGS,
   "V.GetRenderWindow() -> vtkRenderWindow\nC++: vtkRenderWindow *GetRenderWindow() override;\n\nGet a handle to the render window.\n"},
  {"SetRenderWindow", PyvtkPythonView_SetRenderWindow, METH_VARARGS,
   "V.SetRenderWindow(vtkRenderWindow)\nC++: virtual void SetRenderWindow(vtkRenderWindow *win)\n\nSet the render window for this view. Note that this requires\nspecial handling in order to do correctly - see the notes in the\ndetailed description of vtkRenderViewBase.\n"},
  {"SetScript", PyvtkPythonView_SetScript, METH_VARARGS,
   "V.SetScript(string)\nC++: virtual void SetScript(const char *_arg)\n\nGet/Set the Python script.\n"},
  {"GetScript", PyvtkPythonView_GetScript, METH_VARARGS,
   "V.GetScript() -> string\nC++: virtual char *GetScript()\n\nGet/Set the Python script.\n"},
  {"SetMagnification", PyvtkPythonView_SetMagnification, METH_VARARGS,
   "V.SetMagnification(int, int)\nC++: void SetMagnification(int, int)\nV.SetMagnification((int, int))\nC++: void SetMagnification(int a[2])\n\n"},
  {"GetMagnification", PyvtkPythonView_GetMagnification, METH_VARARGS,
   "V.GetMagnification() -> (int, int)\nC++: int *GetMagnification()\n\n"},
  {"GetNumberOfVisibleDataObjects", PyvtkPythonView_GetNumberOfVisibleDataObjects, METH_VARARGS,
   "V.GetNumberOfVisibleDataObjects() -> int\nC++: int GetNumberOfVisibleDataObjects()\n\nGets the number of visible data objects in the view.\n"},
  {"GetVisibleRepresentation", PyvtkPythonView_GetVisibleRepresentation, METH_VARARGS,
   "V.GetVisibleRepresentation(int) -> vtkPythonRepresentation\nC++: vtkPythonRepresentation *GetVisibleRepresentation(\n    int visibleObjectIndex)\n\nGet the representation for the visible data object at the given\nindex.\n"},
  {"GetVisibleDataObjectForSetup", PyvtkPythonView_GetVisibleDataObjectForSetup, METH_VARARGS,
   "V.GetVisibleDataObjectForSetup(int) -> vtkDataObject\nC++: vtkDataObject *GetVisibleDataObjectForSetup(\n    int visibleObjectIndex)\n\nGet a local copy of the visible data object at an index. The\nindex must be between 0 and\nthis->GetNumberOfVisibleDataObjects(). If outside this range,\nreturns NULL. This will return a shallow copy of the data object\ninput to the representation.\n\n* WARNING: this method is intended to be called only from within\n* the setup_data() function in the Python Script set for this\n  instance.\n"},
  {"GetVisibleDataObjectForRendering", PyvtkPythonView_GetVisibleDataObjectForRendering, METH_VARARGS,
   "V.GetVisibleDataObjectForRendering(int) -> vtkDataObject\nC++: vtkDataObject *GetVisibleDataObjectForRendering(\n    int visibleObjectIndex)\n\nGet the client's copy of the visible data object at an index. The\nindex must be between 0 and\nthis->GetNumberOfVisibleDataObjects(). If outside this range,\nreturns NULL.\n\n* WARNING: this method should be called only from within the\n  render()\n* function in the Python Script set for this instance.\n"},
  {"GetNumberOfAttributeArrays", PyvtkPythonView_GetNumberOfAttributeArrays, METH_VARARGS,
   "V.GetNumberOfAttributeArrays(int, int) -> int\nC++: int GetNumberOfAttributeArrays(int visibleObjectIndex,\n    int attributeType)\n\nGet number of arrays in an attribute (e.g., vtkDataObject::POINT,\nvtkDataObject::CELL, vtkDataObject::ROW,\nvtkDataObject::FIELD_DATA) for the visible object at the given\nindex.\n"},
  {"GetAttributeArrayName", PyvtkPythonView_GetAttributeArrayName, METH_VARARGS,
   "V.GetAttributeArrayName(int, int, int) -> string\nC++: const char *GetAttributeArrayName(int visibleObjectIndex,\n    int attributeType, int arrayIndex)\n\nFrom the visible object at the given index, get the name of\nattribute array at index for the given attribute type.\n"},
  {"SetAttributeArrayStatus", PyvtkPythonView_SetAttributeArrayStatus, METH_VARARGS,
   "V.SetAttributeArrayStatus(int, int, string, int)\nC++: void SetAttributeArrayStatus(int visibleObjectIndex,\n    int attributeType, const char *name, int status)\n\nSet the array status for the visible object at the given index. A\nstatus of 1 means that the array with the given name for the\ngiven attribute will be copied to the client. A status of 0 means\nthe array will not be copied to the client. The status is 0 by\ndefault.\n"},
  {"GetAttributeArrayStatus", PyvtkPythonView_GetAttributeArrayStatus, METH_VARARGS,
   "V.GetAttributeArrayStatus(int, int, string) -> int\nC++: int GetAttributeArrayStatus(int visibleObjectIndex,\n    int attributeType, const char *name)\n\nGet the status indicating whether the array with the given name\nand attribute type in the visible object will be copied to the\nclient. Status is 0 by default.\n"},
  {"EnableAllAttributeArrays", PyvtkPythonView_EnableAllAttributeArrays, METH_VARARGS,
   "V.EnableAllAttributeArrays()\nC++: void EnableAllAttributeArrays()\n\nEnable all attribute arrays.\n"},
  {"DisableAllAttributeArrays", PyvtkPythonView_DisableAllAttributeArrays, METH_VARARGS,
   "V.DisableAllAttributeArrays()\nC++: void DisableAllAttributeArrays()\n\nDisable all attribute arrays.\n"},
  {"StillRender", PyvtkPythonView_StillRender, METH_VARARGS,
   "V.StillRender()\nC++: void StillRender() override;\n\nTriggers a high-resolution render.\n\note CallOnAllProcesses\n"},
  {"InteractiveRender", PyvtkPythonView_InteractiveRender, METH_VARARGS,
   "V.InteractiveRender()\nC++: void InteractiveRender() override;\n\nTriggers a interactive render. Based on the settings on the view,\nthis may result in a low-resolution rendering or a simplified\ngeometry rendering.\n\note CallOnAllProcesses\n"},
  {"SetImageData", PyvtkPythonView_SetImageData, METH_VARARGS,
   "V.SetImageData(vtkImageData)\nC++: virtual void SetImageData(vtkImageData *_arg)\n\nSet the vtkImageData that will be displayed. This is an internal\nmethod meant only to be called from the python side, but must be\nexposed to be wrapped.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPythonView_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkPythonView", // tp_name
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
  PyvtkPythonView_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPythonView_StaticNew()
{
  return vtkPythonView::New();
}

PyObject *PyvtkPythonView_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPythonView_Type, PyvtkPythonView_Methods,
    "vtkPythonView",
 &PyvtkPythonView_StaticNew);

  PyTypeObject *pytype = &PyvtkPythonView_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPVView_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPythonView(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPythonView_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPythonView", o) != 0)
  {
    Py_DECREF(o);
  }

}

