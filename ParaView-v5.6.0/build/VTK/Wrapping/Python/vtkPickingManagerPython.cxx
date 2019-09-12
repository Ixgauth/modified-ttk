// python wrapper for vtkPickingManager
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
#include "vtkPickingManager.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPickingManager(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPickingManager_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkPickingManager_Doc =
  "vtkPickingManager - Class defines API to manage the picking process.\n\n"
  "Superclass: vtkObject\n\n"
  "The Picking Manager (PM) coordinates picking across widgets\n"
  "simultaneously. It maintains a collection of registered pickers; when\n"
  "the manager is picked (e.g. vtkPickingManager::Pick()), a pick is run\n"
  "on each picker but only the best picker (e.g. closest to camera\n"
  "point) is selected. It finally returns the widget/representation or\n"
  "picker that was selected.\n"
  "@warning\n"
  "Every time a vtkWidget and/or a vtkWidgetRepresentation is\n"
  "instantiated, it automatically registers its picker(s) and start\n"
  "being managed by delegating all its pick calls to the picking\n"
  "manager. It is possible to customize with the management in two ways:\n"
  "* at the widget level, the \"ManagesPicking\" variable can be changed\n"
  "  from the widget/representation class to tell whether to use the\n"
  "  manager or not.\n"
  "* Directly disable the picking manager itself with the boolean\n"
  "  variable\n"
  "\\sa Enabled using vtkPickingManager::EnabledOn(), EnabledOff(),\n"
  "SetEnabled(bool).@par Important: The picking manager is not active by\n"
  "default as it slightly reduces the performances when interacting with\n"
  "the scene.@par Important: When registering pickers, a null object is\n"
  "considered valid because we can managed picker without any associated\n"
  "object. It is really important to note that a null object is\n"
  "different from one to an other !! This has been done to allow adding\n"
  "multiple times the same picker to the manager by not passing the\n"
  "referenced object to not force the supression of all pickers\n\n";


static PyObject *
PyvtkPickingManager_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPickingManager::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPickingManager_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPickingManager *op = static_cast<vtkPickingManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPickingManager::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPickingManager_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPickingManager *tempr = vtkPickingManager::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPickingManager_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPickingManager *op = static_cast<vtkPickingManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPickingManager *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPickingManager::NewInstance());

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
PyvtkPickingManager_EnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPickingManager *op = static_cast<vtkPickingManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnabledOn();
    }
    else
    {
      op->vtkPickingManager::EnabledOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPickingManager_EnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPickingManager *op = static_cast<vtkPickingManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnabledOff();
    }
    else
    {
      op->vtkPickingManager::EnabledOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPickingManager_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPickingManager *op = static_cast<vtkPickingManager *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnabled(temp0);
    }
    else
    {
      op->vtkPickingManager::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPickingManager_GetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPickingManager *op = static_cast<vtkPickingManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEnabled() :
      op->vtkPickingManager::GetEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPickingManager_SetOptimizeOnInteractorEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOptimizeOnInteractorEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPickingManager *op = static_cast<vtkPickingManager *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOptimizeOnInteractorEvents(temp0);
    }
    else
    {
      op->vtkPickingManager::SetOptimizeOnInteractorEvents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPickingManager_GetOptimizeOnInteractorEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOptimizeOnInteractorEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPickingManager *op = static_cast<vtkPickingManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetOptimizeOnInteractorEvents() :
      op->vtkPickingManager::GetOptimizeOnInteractorEvents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPickingManager_SetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPickingManager *op = static_cast<vtkPickingManager *>(vp);

  vtkRenderWindowInteractor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor"))
  {
    if (ap.IsBound())
    {
      op->SetInteractor(temp0);
    }
    else
    {
      op->vtkPickingManager::SetInteractor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPickingManager_GetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPickingManager *op = static_cast<vtkPickingManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindowInteractor *tempr = (ap.IsBound() ?
      op->GetInteractor() :
      op->vtkPickingManager::GetInteractor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPickingManager_AddPicker(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPicker");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPickingManager *op = static_cast<vtkPickingManager *>(vp);

  vtkAbstractPicker *temp0 = nullptr;
  vtkObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkAbstractPicker") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp1, "vtkObject")))
  {
    if (ap.IsBound())
    {
      op->AddPicker(temp0, temp1);
    }
    else
    {
      op->vtkPickingManager::AddPicker(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPickingManager_RemovePicker(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePicker");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPickingManager *op = static_cast<vtkPickingManager *>(vp);

  vtkAbstractPicker *temp0 = nullptr;
  vtkObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkAbstractPicker") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp1, "vtkObject")))
  {
    if (ap.IsBound())
    {
      op->RemovePicker(temp0, temp1);
    }
    else
    {
      op->vtkPickingManager::RemovePicker(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPickingManager_RemoveObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPickingManager *op = static_cast<vtkPickingManager *>(vp);

  vtkObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
  {
    if (ap.IsBound())
    {
      op->RemoveObject(temp0);
    }
    else
    {
      op->vtkPickingManager::RemoveObject(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPickingManager_Pick_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPickingManager *op = static_cast<vtkPickingManager *>(vp);

  vtkAbstractPicker *temp0 = nullptr;
  vtkObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkAbstractPicker") &&
      ap.GetVTKObject(temp1, "vtkObject"))
  {
    bool tempr = (ap.IsBound() ?
      op->Pick(temp0, temp1) :
      op->vtkPickingManager::Pick(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPickingManager_Pick_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPickingManager *op = static_cast<vtkPickingManager *>(vp);

  vtkObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
  {
    bool tempr = (ap.IsBound() ?
      op->Pick(temp0) :
      op->vtkPickingManager::Pick(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPickingManager_Pick_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPickingManager *op = static_cast<vtkPickingManager *>(vp);

  vtkAbstractPicker *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractPicker"))
  {
    bool tempr = (ap.IsBound() ?
      op->Pick(temp0) :
      op->vtkPickingManager::Pick(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPickingManager_Pick_Methods[] = {
  {nullptr, PyvtkPickingManager_Pick_s2, METH_VARARGS,
   "@V *vtkObject"},
  {nullptr, PyvtkPickingManager_Pick_s3, METH_VARARGS,
   "@V *vtkAbstractPicker"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPickingManager_Pick(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPickingManager_Pick_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkPickingManager_Pick_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Pick");
  return nullptr;
}



static PyObject *
PyvtkPickingManager_GetAssemblyPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAssemblyPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPickingManager *op = static_cast<vtkPickingManager *>(vp);

  double temp0;
  double temp1;
  double temp2;
  vtkAbstractPropPicker *temp3 = nullptr;
  vtkRenderer *temp4 = nullptr;
  vtkObject *temp5 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkAbstractPropPicker") &&
      ap.GetVTKObject(temp4, "vtkRenderer") &&
      ap.GetVTKObject(temp5, "vtkObject"))
  {
    vtkAssemblyPath *tempr = (ap.IsBound() ?
      op->GetAssemblyPath(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkPickingManager::GetAssemblyPath(temp0, temp1, temp2, temp3, temp4, temp5));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPickingManager_GetNumberOfPickers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPickers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPickingManager *op = static_cast<vtkPickingManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPickers() :
      op->vtkPickingManager::GetNumberOfPickers());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPickingManager_GetNumberOfObjectsLinked(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfObjectsLinked");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPickingManager *op = static_cast<vtkPickingManager *>(vp);

  vtkAbstractPicker *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractPicker"))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfObjectsLinked(temp0) :
      op->vtkPickingManager::GetNumberOfObjectsLinked(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPickingManager_Methods[] = {
  {"IsTypeOf", PyvtkPickingManager_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPickingManager_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPickingManager_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPickingManager\nC++: static vtkPickingManager *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPickingManager_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPickingManager\nC++: vtkPickingManager *NewInstance()\n\n"},
  {"EnabledOn", PyvtkPickingManager_EnabledOn, METH_VARARGS,
   "V.EnabledOn()\nC++: virtual void EnabledOn()\n\nEnable/Disable management. When disabled, it redirects every pick\non the picker. By default the picking manager is disabled when\ninitialized.\n"},
  {"EnabledOff", PyvtkPickingManager_EnabledOff, METH_VARARGS,
   "V.EnabledOff()\nC++: virtual void EnabledOff()\n\nEnable/Disable management. When disabled, it redirects every pick\non the picker. By default the picking manager is disabled when\ninitialized.\n"},
  {"SetEnabled", PyvtkPickingManager_SetEnabled, METH_VARARGS,
   "V.SetEnabled(bool)\nC++: virtual void SetEnabled(bool _arg)\n\nEnable/Disable management. When disabled, it redirects every pick\non the picker. By default the picking manager is disabled when\ninitialized.\n"},
  {"GetEnabled", PyvtkPickingManager_GetEnabled, METH_VARARGS,
   "V.GetEnabled() -> bool\nC++: virtual bool GetEnabled()\n\nEnable/Disable management. When disabled, it redirects every pick\non the picker. By default the picking manager is disabled when\ninitialized.\n"},
  {"SetOptimizeOnInteractorEvents", PyvtkPickingManager_SetOptimizeOnInteractorEvents, METH_VARARGS,
   "V.SetOptimizeOnInteractorEvents(bool)\nC++: void SetOptimizeOnInteractorEvents(bool optimize)\n\nEnable/Disable optimization depending on the\nrenderWindowInteractor events. The mechanism keeps in cache the\nlast selected picker as well as the last render time to recompute\nthe selection only if a new render event occurred after the last\nselection; otherwise, it simply returns the last picker selected.\nBy default pickingManagers does use the optimization. Warning:\nTurning off the caching significantly decreases performance.\n"},
  {"GetOptimizeOnInteractorEvents", PyvtkPickingManager_GetOptimizeOnInteractorEvents, METH_VARARGS,
   "V.GetOptimizeOnInteractorEvents() -> bool\nC++: virtual bool GetOptimizeOnInteractorEvents()\n\nEnable/Disable optimization depending on the\nrenderWindowInteractor events. The mechanism keeps in cache the\nlast selected picker as well as the last render time to recompute\nthe selection only if a new render event occurred after the last\nselection; otherwise, it simply returns the last picker selected.\nBy default pickingManagers does use the optimization. Warning:\nTurning off the caching significantly decreases performance.\n"},
  {"SetInteractor", PyvtkPickingManager_SetInteractor, METH_VARARGS,
   "V.SetInteractor(vtkRenderWindowInteractor)\nC++: void SetInteractor(vtkRenderWindowInteractor *iren)\n\nSet the window interactor associated with the manager.\n"},
  {"GetInteractor", PyvtkPickingManager_GetInteractor, METH_VARARGS,
   "V.GetInteractor() -> vtkRenderWindowInteractor\nC++: virtual vtkRenderWindowInteractor *GetInteractor()\n\nSet the window interactor associated with the manager.\n"},
  {"AddPicker", PyvtkPickingManager_AddPicker, METH_VARARGS,
   "V.AddPicker(vtkAbstractPicker, vtkObject)\nC++: void AddPicker(vtkAbstractPicker *picker,\n    vtkObject *object=nullptr)\n\nRegister a picker into the picking manager. It can be internally\nassociated (optional) with an object. This allows the removal of\nall the pickers of the given object. Note that a picker can be\nregistered multiple times with different objects.\n\\sa RemovePicker(), RemoveObject().\n"},
  {"RemovePicker", PyvtkPickingManager_RemovePicker, METH_VARARGS,
   "V.RemovePicker(vtkAbstractPicker, vtkObject)\nC++: void RemovePicker(vtkAbstractPicker *picker,\n    vtkObject *object=nullptr)\n\nUnregister the picker from the picking manager. If object is non\nnull, only the pair ( picker, object) is removed.\n"},
  {"RemoveObject", PyvtkPickingManager_RemoveObject, METH_VARARGS,
   "V.RemoveObject(vtkObject)\nC++: void RemoveObject(vtkObject *object)\n\nRemove all occurrence of the object from the registered list. If\na picker associated with the object is not also associated with\nany other object, it is removed from the list as well.\n"},
  {"Pick", PyvtkPickingManager_Pick, METH_VARARGS,
   "V.Pick(vtkAbstractPicker, vtkObject) -> bool\nC++: bool Pick(vtkAbstractPicker *picker, vtkObject *object)\nV.Pick(vtkObject) -> bool\nC++: bool Pick(vtkObject *object)\nV.Pick(vtkAbstractPicker) -> bool\nC++: bool Pick(vtkAbstractPicker *picker)\n\nRun the picking selection process and return true if the object\nis associated with the given picker if it is the best one, false\notherwise. If OptimizeOnInteractorEvents is true, the pick can\nreuse cached information.\n"},
  {"GetAssemblyPath", PyvtkPickingManager_GetAssemblyPath, METH_VARARGS,
   "V.GetAssemblyPath(float, float, float, vtkAbstractPropPicker,\n    vtkRenderer, vtkObject) -> vtkAssemblyPath\nC++: vtkAssemblyPath *GetAssemblyPath(double X, double Y,\n    double Z, vtkAbstractPropPicker *picker,\n    vtkRenderer *renderer, vtkObject *obj)\n\nIf the picking manager is enabled, it runs the picking selection\nprocess and return the assembly path associated to the picker\npassed as argument if it is the one mediated. Otherwise it simply\nproceeds to a pick using the given renderer and returns the\ncorresponding assembly path.\n"},
  {"GetNumberOfPickers", PyvtkPickingManager_GetNumberOfPickers, METH_VARARGS,
   "V.GetNumberOfPickers() -> int\nC++: int GetNumberOfPickers()\n\nReturn the number of pickers registered. If the same picker is\nadded multiple times with different objects, it is counted once.\n"},
  {"GetNumberOfObjectsLinked", PyvtkPickingManager_GetNumberOfObjectsLinked, METH_VARARGS,
   "V.GetNumberOfObjectsLinked(vtkAbstractPicker) -> int\nC++: int GetNumberOfObjectsLinked(vtkAbstractPicker *picker)\n\nReturn the number of objects linked with a given picker. Note: a\nnull object is counted as an associated object.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPickingManager_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkPickingManager", // tp_name
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
  PyvtkPickingManager_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPickingManager_StaticNew()
{
  return vtkPickingManager::New();
}

PyObject *PyvtkPickingManager_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPickingManager_Type, PyvtkPickingManager_Methods,
    "vtkPickingManager",
 &PyvtkPickingManager_StaticNew);

  PyTypeObject *pytype = &PyvtkPickingManager_Type;

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

void PyVTKAddFile_vtkPickingManager(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPickingManager_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPickingManager", o) != 0)
  {
    Py_DECREF(o);
  }

}

