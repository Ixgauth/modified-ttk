// python wrapper for vtkSMProperty
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
#include "vtkSMDomain.h"
#include "vtkSMProperty.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMProperty(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMProperty_ClassNew(); }

#ifndef DECLARED_PyvtkSMObject_ClassNew
extern "C" { PyObject *PyvtkSMObject_ClassNew(); }
#define DECLARED_PyvtkSMObject_ClassNew
#endif

static const char *PyvtkSMProperty_Doc =
  "vtkSMProperty - superclass for all SM properties\n\n"
  "Superclass: vtkSMObject\n\n"
  "Each instance of vtkSMProperty or a sub-class represents a method and\n"
  "associated arguments (if any) of a VTK object stored on one or more\n"
  "client manager or server nodes. It may have a state and can push this\n"
  "state to the vtk object it refers to. vtkSMProperty only supports\n"
  "methods with no arguments. Sub-classes support methods with different\n"
  "arguments types and numbers.\n\n"
  "vtkSMProperty is typically meant for pushing its values to a VTK\n"
  "object. However, a property may be marked as an InformationOnly\n"
  "property in which case its values are obtained from the server with\n"
  "the UpdateInformation() call.\n\n"
  "Each non-information property can have one or more domains. A domain\n"
  "represents a set of acceptable values the property can have. Domains\n"
  "provide applications mechanisms to extract semantic information from\n"
  "a property.\n\n"
  "A property has two kinds of values: regular (or checked) values and\n"
  "unchecked values. Regular values are the ones that are pushed to the\n"
  "VTK object when the property is updated. These are the ones that get\n"
  "saved in state, etc. Unchecked values are provided so that domains\n"
  "can update their conditions without having the change the property's\n"
  "value e.g. if the domain range for the IsoContour property changes\n"
  "based on the value of the ArrayName property which selects the array\n"
  "to contour with, the can set the unchecked value on the ArrayName\n"
  "property to each of the available arrays to determine what the domain\n"
  "would be without having to modify the property and update its VTK\n"
  "object. If a property has no unchecked-values explicitly set, then\n"
  "the \"Get\" methods that access the unchecked-values should simply\n"
  "return the checked values. If the checked values are changed, the\n"
  "unchecked values are reset to match the checked values.\n\n"
  "A property fires the following events:\n\n"
  "\\li vtkCommand::ModifiedEvent : fired when property's value(s)\n"
  "    is(are)\n"
  "       modified. This must be fired only when values are really\n"
  "changed, not\n"
  "       just the \"set\" methods are called. This event must be fired no\n"
  "matter\n"
  "       how the property's values are changed.\n\n"
  "\\li vtkCommand::UncheckedPropertyModifiedEvent : fired when the\n"
  "    property's\n"
  "       unchecked-value(s) is(are) changed. Note that when a\n"
  "property's\n"
  "       checked values change, it's unchecked values are reset to\n"
  "match the\n"
  "       checked values, so technically,\n"
  "       vtkCommand::UncheckedPropertyModifiedEvent must be fired every\n"
  "time\n"
  "       vtkCommand::ModifiedEvent is fired.\n\n"
  "\\li vtkCommand::DomainModifiedEvent : fired when any of this\n"
  "    properties\n"
  "       domain's fire the same event.\n\n"
  "Properties are typically constructed from ServerManager XML\n"
  "configuration files. Attributes available on a Property XML are as\n"
  "follows:\n\n"
  "\\li name: string: This is the name for the property. This typically\n"
  "       ends up being the name used by the Proxy to refer to this\n"
  "property. It\n"
  "       must be unique for all properties on a Proxy.\n\n"
  "\\li label: string:This is the user-friendly label. Ideally, the label\n"
  "       should be same as the name, however traditionally that hasn't\n"
  "been the\n"
  "       case.\n\n"
  "\\li command: string: This is the name of the method to call on the\n"
  "    VTK\n"
  "       update for the property.\n\n"
  "\\li repeatable or repeat_command: {0,1}: This used to indicate that\n"
  "       the command can be called repeatedly to update the VTK object.\n"
  "e.g.\n"
  "       for multiple inputs, one must call AddInput(..) repeatedly. It\n"
  "also\n"
  "       implies that the number of elements/items in the property can\n"
  "change.\n\n"
  "\\li information_only: {0,1}: When set, it implies that this property\n"
  "       is used to obtain values from the VTK object, rather than the\n"
  "default\n"
  "       behavior which is to set values on the VTK object.\n\n"
  "\\li information_property: string: Value is the name of the property\n"
  "    on the\n"
  "       proxy to which this property belongs that can is\n"
  "information_only\n"
  "       property corresponding to this. This is useful when the\n"
  "variable that\n"
  "       this property sets can be changed by other means besides this\n"
  "property\n"
  "       e.g. through interaction. Applications can use this\n"
  "information to\n"
  "       update the value of this property to reflect the VTK-side\n"
  "state.\n\n"
  "\\li immediate_update: {0,1}: When set, the Proxy will attempt to push\n"
  "       the value for this property to the VTK object as soon as the\n"
  "property\n"
  "       is changed. It is no longer common and should be avoided. It\n"
  "may be\n"
  "       deprecated in near future.\n\n"
  "\\li state_ignored: {0,1}: When set, changes to this property are not\n"
  "       captured in undo-redo stacks. Unlike is_internal, the value\n"
  "for this\n"
  "       property is saved in state files.\n\n"
  "\\li ignore_synchronization: {0,1}: When set, changes to this property\n"
  "       are not synchronized among client-processes in collaborative\n"
  "mode.\n\n"
  "\\li is_internal: {0,1}: When set, the property is treated as internal\n"
  "       which implies that it will not be shown in the UI; its value\n"
  "will not\n"
  "       be pushed when the proxy is created, nor saved in state files\n"
  "or\n"
  "       undo-redo stacks.\n\n"
  "\\li animateable: {0,1}: When set, the property is considered as\n"
  "       animatable which the UI can use to build the animation\n"
  "interface.\n\n"
  "\\li panel_visibility: {default,advanced,never}: Indicates to the UI\n"
  "       that the widget corresponding to this property should be shown\n"
  "in the\n"
  "       default or advanced mode, or never at all.\n\n"
  "\\li panel_widget: string: provides a hint to the UI to determine\n"
  "    which\n"
  "       widget to create to edit this property.\n\n"
  "\\li no_custom_default: {0,1}: When set, vtkSMSettings will neither\n"
  "       change the value of a property upon creation nor save the\n"
  "property\n"
  "       value as a default.\n\n"
  "\\li disable_sub_trace: {0,1}: When set on a ProxyProperty, the python\n"
  "       trace generated by smtrace.py will not contain the properties\n"
  "of the\n"
  "       proxy pointed by the proxy property.\n\n";


static PyObject *
PyvtkSMProperty_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMProperty::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProperty_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMProperty::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProperty_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMProperty *tempr = vtkSMProperty::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProperty_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMProperty *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMProperty::NewInstance());

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
PyvtkSMProperty_SetCommand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCommand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCommand(temp0);
    }
    else
    {
      op->vtkSMProperty::SetCommand(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProperty_GetCommand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCommand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetCommand() :
      op->vtkSMProperty::GetCommand());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProperty_SetImmediateUpdate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImmediateUpdate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetImmediateUpdate(temp0);
    }
    else
    {
      op->vtkSMProperty::SetImmediateUpdate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProperty_GetImmediateUpdate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImmediateUpdate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetImmediateUpdate() :
      op->vtkSMProperty::GetImmediateUpdate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProperty_IsInDomains(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInDomains");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsInDomains() :
      op->vtkSMProperty::IsInDomains());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProperty_NewDomainIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewDomainIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMDomainIterator *tempr = (ap.IsBound() ?
      op->NewDomainIterator() :
      op->vtkSMProperty::NewDomainIterator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProperty_GetDomain(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSMDomain *tempr = (ap.IsBound() ?
      op->GetDomain(temp0) :
      op->vtkSMProperty::GetDomain(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProperty_FindDomain(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSMDomain *tempr = (ap.IsBound() ?
      op->FindDomain(temp0) :
      op->vtkSMProperty::FindDomain(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProperty_GetNumberOfDomains(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfDomains");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfDomains() :
      op->vtkSMProperty::GetNumberOfDomains());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProperty_GetInformationOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInformationOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInformationOnly() :
      op->vtkSMProperty::GetInformationOnly());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProperty_GetIgnoreSynchronization(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIgnoreSynchronization");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIgnoreSynchronization() :
      op->vtkSMProperty::GetIgnoreSynchronization());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProperty_GetInformationProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInformationProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMProperty *tempr = (ap.IsBound() ?
      op->GetInformationProperty() :
      op->vtkSMProperty::GetInformationProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProperty_AddDomain(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  const char *temp0 = nullptr;
  vtkSMDomain *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMDomain"))
  {
    if (ap.IsBound())
    {
      op->AddDomain(temp0, temp1);
    }
    else
    {
      op->vtkSMProperty::AddDomain(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProperty_AddLinkedProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLinkedProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  vtkSMProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProperty"))
  {
    if (ap.IsBound())
    {
      op->AddLinkedProperty(temp0);
    }
    else
    {
      op->vtkSMProperty::AddLinkedProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProperty_RemoveLinkedProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveLinkedProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  vtkSMProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProperty"))
  {
    if (ap.IsBound())
    {
      op->RemoveLinkedProperty(temp0);
    }
    else
    {
      op->vtkSMProperty::RemoveLinkedProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProperty_RemoveFromSourceLink(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveFromSourceLink");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveFromSourceLink();
    }
    else
    {
      op->vtkSMProperty::RemoveFromSourceLink();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProperty_SetAnimateable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimateable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAnimateable(temp0);
    }
    else
    {
      op->vtkSMProperty::SetAnimateable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProperty_GetAnimateable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnimateable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAnimateable() :
      op->vtkSMProperty::GetAnimateable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProperty_SetIsInternal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIsInternal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIsInternal(temp0);
    }
    else
    {
      op->vtkSMProperty::SetIsInternal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProperty_GetIsInternal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsInternal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIsInternal() :
      op->vtkSMProperty::GetIsInternal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProperty_SetNoCustomDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNoCustomDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNoCustomDefault(temp0);
    }
    else
    {
      op->vtkSMProperty::SetNoCustomDefault(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProperty_GetNoCustomDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNoCustomDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNoCustomDefault() :
      op->vtkSMProperty::GetNoCustomDefault());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProperty_SetPanelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPanelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPanelVisibility(temp0);
    }
    else
    {
      op->vtkSMProperty::SetPanelVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProperty_GetPanelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPanelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetPanelVisibility() :
      op->vtkSMProperty::GetPanelVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProperty_SetPanelVisibilityDefaultForRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPanelVisibilityDefaultForRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPanelVisibilityDefaultForRepresentation(temp0);
    }
    else
    {
      op->vtkSMProperty::SetPanelVisibilityDefaultForRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProperty_GetPanelVisibilityDefaultForRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPanelVisibilityDefaultForRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetPanelVisibilityDefaultForRepresentation() :
      op->vtkSMProperty::GetPanelVisibilityDefaultForRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProperty_SetPanelWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPanelWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPanelWidget(temp0);
    }
    else
    {
      op->vtkSMProperty::SetPanelWidget(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProperty_GetPanelWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPanelWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetPanelWidget() :
      op->vtkSMProperty::GetPanelWidget());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProperty_SetDisableSubTrace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisableSubTrace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDisableSubTrace(temp0);
    }
    else
    {
      op->vtkSMProperty::SetDisableSubTrace(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProperty_GetDisableSubTrace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisableSubTrace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetDisableSubTrace() :
      op->vtkSMProperty::GetDisableSubTrace());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProperty_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  vtkSMProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProperty"))
  {
    if (ap.IsBound())
    {
      op->Copy(temp0);
    }
    else
    {
      op->vtkSMProperty::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProperty_GetDocumentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDocumentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMDocumentation *tempr = (ap.IsBound() ?
      op->GetDocumentation() :
      op->vtkSMProperty::GetDocumentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProperty_ResetToDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetToDefault();
    }
    else
    {
      op->vtkSMProperty::ResetToDefault();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProperty_ResetToXMLDefaults(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetToXMLDefaults");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetToXMLDefaults();
    }
    else
    {
      op->vtkSMProperty::ResetToXMLDefaults();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProperty_ResetToDomainDefaults(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetToDomainDefaults");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    bool tempr = (ap.IsBound() ?
      op->ResetToDomainDefaults(temp0) :
      op->vtkSMProperty::ResetToDomainDefaults(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProperty_GetXMLLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXMLLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetXMLLabel() :
      op->vtkSMProperty::GetXMLLabel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProperty_GetXMLName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXMLName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetXMLName() :
      op->vtkSMProperty::GetXMLName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProperty_GetRepeatable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepeatable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRepeatable() :
      op->vtkSMProperty::GetRepeatable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProperty_GetHints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->GetHints() :
      op->vtkSMProperty::GetHints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProperty_SetHints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  vtkPVXMLElement *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement"))
  {
    if (ap.IsBound())
    {
      op->SetHints(temp0);
    }
    else
    {
      op->vtkSMProperty::SetHints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProperty_Modified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Modified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Modified();
    }
    else
    {
      op->vtkSMProperty::Modified();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProperty_GetParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetParent() :
      op->vtkSMProperty::GetParent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProperty_IsStateIgnored(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsStateIgnored");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsStateIgnored() :
      op->vtkSMProperty::IsStateIgnored());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProperty_IsValueDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsValueDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsValueDefault() :
      op->vtkSMProperty::IsValueDefault());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProperty_HasDomainsWithRequiredProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasDomainsWithRequiredProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasDomainsWithRequiredProperties() :
      op->vtkSMProperty::HasDomainsWithRequiredProperties());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProperty_ClearUncheckedElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearUncheckedElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProperty *op = static_cast<vtkSMProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearUncheckedElements();
    }
    else
    {
      op->vtkSMProperty::ClearUncheckedElements();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProperty_CreateNewPrettyLabel(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CreateNewPrettyLabel");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkSMProperty::CreateNewPrettyLabel(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMProperty_Methods[] = {
  {"IsTypeOf", PyvtkSMProperty_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMProperty_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMProperty_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMProperty\nC++: static vtkSMProperty *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMProperty_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMProperty\nC++: vtkSMProperty *NewInstance()\n\n"},
  {"SetCommand", PyvtkSMProperty_SetCommand, METH_VARARGS,
   "V.SetCommand(string)\nC++: virtual void SetCommand(const char *_arg)\n\nThe command name used to set the value on the server object. For\nexample: SetThetaResolution\n"},
  {"GetCommand", PyvtkSMProperty_GetCommand, METH_VARARGS,
   "V.GetCommand() -> string\nC++: virtual char *GetCommand()\n\nThe command name used to set the value on the server object. For\nexample: SetThetaResolution\n"},
  {"SetImmediateUpdate", PyvtkSMProperty_SetImmediateUpdate, METH_VARARGS,
   "V.SetImmediateUpdate(int)\nC++: virtual void SetImmediateUpdate(int _arg)\n\nIf ImmediateUpdate is true, the value of the property will be\npushed to the server as soon as it is modified. Properties that\ndo not have values can be pushed by calling Modified().\n"},
  {"GetImmediateUpdate", PyvtkSMProperty_GetImmediateUpdate, METH_VARARGS,
   "V.GetImmediateUpdate() -> int\nC++: virtual int GetImmediateUpdate()\n\nIf ImmediateUpdate is true, the value of the property will be\npushed to the server as soon as it is modified. Properties that\ndo not have values can be pushed by calling Modified().\n"},
  {"IsInDomains", PyvtkSMProperty_IsInDomains, METH_VARARGS,
   "V.IsInDomains() -> int\nC++: int IsInDomains()\n\nReturns true if all values are in all domains, false otherwise.\nThe domains will check the unchecked values (SetUncheckedXXX())\ninstead of the actual values.\n"},
  {"NewDomainIterator", PyvtkSMProperty_NewDomainIterator, METH_VARARGS,
   "V.NewDomainIterator() -> vtkSMDomainIterator\nC++: vtkSMDomainIterator *NewDomainIterator()\n\nCreates, initializes and returns a new domain iterator. The user\nhas to delete the iterator.\n"},
  {"GetDomain", PyvtkSMProperty_GetDomain, METH_VARARGS,
   "V.GetDomain(string) -> vtkSMDomain\nC++: vtkSMDomain *GetDomain(const char *name)\n\nReturns a domain give a name.\n"},
  {"FindDomain", PyvtkSMProperty_FindDomain, METH_VARARGS,
   "V.FindDomain(string) -> vtkSMDomain\nC++: vtkSMDomain *FindDomain(const char *classname)\n\nReturns the first domain which is of the specified type.\n"},
  {"GetNumberOfDomains", PyvtkSMProperty_GetNumberOfDomains, METH_VARARGS,
   "V.GetNumberOfDomains() -> int\nC++: unsigned int GetNumberOfDomains()\n\nReturns the number of domains this property has. This can be used\nto specify a valid index for GetDomain(index).\n"},
  {"GetInformationOnly", PyvtkSMProperty_GetInformationOnly, METH_VARARGS,
   "V.GetInformationOnly() -> int\nC++: virtual int GetInformationOnly()\n\nIs InformationOnly is set to true, this property is used to get\ninformation from server instead of setting values.\n"},
  {"GetIgnoreSynchronization", PyvtkSMProperty_GetIgnoreSynchronization, METH_VARARGS,
   "V.GetIgnoreSynchronization() -> int\nC++: virtual int GetIgnoreSynchronization()\n\nIf IgnoreSynchronization is set to true, this property is used to\nprevent that property from being updated when changed remotely by\nanother collaborative client.\n"},
  {"GetInformationProperty", PyvtkSMProperty_GetInformationProperty, METH_VARARGS,
   "V.GetInformationProperty() -> vtkSMProperty\nC++: virtual vtkSMProperty *GetInformationProperty()\n\nGet the associated information property. This allows applications\nto have access to both the in and out properties. The information\nproperty has to be specified in the xml configuration file.\n"},
  {"AddDomain", PyvtkSMProperty_AddDomain, METH_VARARGS,
   "V.AddDomain(string, vtkSMDomain)\nC++: void AddDomain(const char *name, vtkSMDomain *dom)\n\nProperties can have one or more domains. These are assigned by\nthe proxy manager and can be used to obtain information other\nthan given by the type of the property and its values.\n"},
  {"AddLinkedProperty", PyvtkSMProperty_AddLinkedProperty, METH_VARARGS,
   "V.AddLinkedProperty(vtkSMProperty)\nC++: virtual void AddLinkedProperty(vtkSMProperty *targetProperty)\n\nAdd a link to a property whose value should be synchronized with\nthis property value.\n"},
  {"RemoveLinkedProperty", PyvtkSMProperty_RemoveLinkedProperty, METH_VARARGS,
   "V.RemoveLinkedProperty(vtkSMProperty)\nC++: virtual void RemoveLinkedProperty(\n    vtkSMProperty *targetProperty)\n\nRemove a link to a property added with AddLinkedProperty()\n"},
  {"RemoveFromSourceLink", PyvtkSMProperty_RemoveFromSourceLink, METH_VARARGS,
   "V.RemoveFromSourceLink()\nC++: virtual void RemoveFromSourceLink()\n\nRemove a link from the source property. This is a useful way for\ntarget properties to unlink themselves from a source property\nprior to, for instance, the deletion of the target property\ninstance. This method only does any work if this instance was\npassed as the argument to AddLinkedProperty() on a different\nproperty instance at some point. Otherwise, it is a no-op.\n"},
  {"SetAnimateable", PyvtkSMProperty_SetAnimateable, METH_VARARGS,
   "V.SetAnimateable(int)\nC++: virtual void SetAnimateable(int _arg)\n\nGet/Set if the property is animateable. Non-animateable\nproperties are shown in the GUI only in advanced mode.\n"},
  {"GetAnimateable", PyvtkSMProperty_GetAnimateable, METH_VARARGS,
   "V.GetAnimateable() -> int\nC++: virtual int GetAnimateable()\n\nGet/Set if the property is animateable. Non-animateable\nproperties are shown in the GUI only in advanced mode.\n"},
  {"SetIsInternal", PyvtkSMProperty_SetIsInternal, METH_VARARGS,
   "V.SetIsInternal(int)\nC++: virtual void SetIsInternal(int _arg)\n\nGet/Set if the property is internal to server manager. Internal\nproperties are not saved in state and should not be displayed in\nthe user interface.\n"},
  {"GetIsInternal", PyvtkSMProperty_GetIsInternal, METH_VARARGS,
   "V.GetIsInternal() -> int\nC++: virtual int GetIsInternal()\n\nGet/Set if the property is internal to server manager. Internal\nproperties are not saved in state and should not be displayed in\nthe user interface.\n"},
  {"SetNoCustomDefault", PyvtkSMProperty_SetNoCustomDefault, METH_VARARGS,
   "V.SetNoCustomDefault(int)\nC++: virtual void SetNoCustomDefault(int _arg)\n\nSets whether the property should ignore custom default settings.\n"},
  {"GetNoCustomDefault", PyvtkSMProperty_GetNoCustomDefault, METH_VARARGS,
   "V.GetNoCustomDefault() -> int\nC++: virtual int GetNoCustomDefault()\n\nGets whether the property should ignore custom default settings.\n"},
  {"SetPanelVisibility", PyvtkSMProperty_SetPanelVisibility, METH_VARARGS,
   "V.SetPanelVisibility(string)\nC++: virtual void SetPanelVisibility(const char *_arg)\n\nSets the panel visibility for the property. The value can be one\nof:\n* \"default\": Show the property by default.\n* \"advanced\": Only show the property in the advanced view.\n* \"never\": Never show the property on the panel.\n\n* By default, all properties have \"default\" visibility.\n"},
  {"GetPanelVisibility", PyvtkSMProperty_GetPanelVisibility, METH_VARARGS,
   "V.GetPanelVisibility() -> string\nC++: virtual char *GetPanelVisibility()\n\nReturns the panel visibility for the property.\n"},
  {"SetPanelVisibilityDefaultForRepresentation", PyvtkSMProperty_SetPanelVisibilityDefaultForRepresentation, METH_VARARGS,
   "V.SetPanelVisibilityDefaultForRepresentation(string)\nC++: virtual void SetPanelVisibilityDefaultForRepresentation(\n    const char *_arg)\n\nSets the panel visibility to default if the current\nrepresentation type matches representation.\n"},
  {"GetPanelVisibilityDefaultForRepresentation", PyvtkSMProperty_GetPanelVisibilityDefaultForRepresentation, METH_VARARGS,
   "V.GetPanelVisibilityDefaultForRepresentation() -> string\nC++: virtual char *GetPanelVisibilityDefaultForRepresentation()\n\nReturns which representation type the property will be shown by\ndefault for.\n"},
  {"SetPanelWidget", PyvtkSMProperty_SetPanelWidget, METH_VARARGS,
   "V.SetPanelWidget(string)\nC++: virtual void SetPanelWidget(const char *_arg)\n\nSets the name of the custom panel widget to use for the property.\n"},
  {"GetPanelWidget", PyvtkSMProperty_GetPanelWidget, METH_VARARGS,
   "V.GetPanelWidget() -> string\nC++: virtual char *GetPanelWidget()\n\nReturns name of the panel widget for the property.\n"},
  {"SetDisableSubTrace", PyvtkSMProperty_SetDisableSubTrace, METH_VARARGS,
   "V.SetDisableSubTrace(string)\nC++: virtual void SetDisableSubTrace(const char *_arg)\n\nSets the tracing of sub property of this property\n"},
  {"GetDisableSubTrace", PyvtkSMProperty_GetDisableSubTrace, METH_VARARGS,
   "V.GetDisableSubTrace() -> string\nC++: virtual char *GetDisableSubTrace()\n\nReturns the tracing state of the properties of this property\n"},
  {"Copy", PyvtkSMProperty_Copy, METH_VARARGS,
   "V.Copy(vtkSMProperty)\nC++: virtual void Copy(vtkSMProperty *src)\n\nCopy all property values. This will copy both checked and\nunchecked values, if applicable.\n"},
  {"GetDocumentation", PyvtkSMProperty_GetDocumentation, METH_VARARGS,
   "V.GetDocumentation() -> vtkSMDocumentation\nC++: virtual vtkSMDocumentation *GetDocumentation()\n\nReturns the documentation for this proxy. The return value may be\nNULL if no documentation is defined in the XML for this property.\n"},
  {"ResetToDefault", PyvtkSMProperty_ResetToDefault, METH_VARARGS,
   "V.ResetToDefault()\nC++: void ResetToDefault()\n\nSimply calls this->ResetToDomainDefaults() and if that returns\nfalse, calls this->ResetToXMLDefaults().\n"},
  {"ResetToXMLDefaults", PyvtkSMProperty_ResetToXMLDefaults, METH_VARARGS,
   "V.ResetToXMLDefaults()\nC++: virtual void ResetToXMLDefaults()\n\nFor properties that support specifying defaults in XML\nconfiguration, this method will reset the property value to the\ndefault values specified in the XML. Default implementation does\nnothing.\n"},
  {"ResetToDomainDefaults", PyvtkSMProperty_ResetToDomainDefaults, METH_VARARGS,
   "V.ResetToDomainDefaults(bool) -> bool\nC++: virtual bool ResetToDomainDefaults(\n    bool use_unchecked_values=false)\n\nIterates over all domains and call SetDefaultValues() on each\ndomain until the first one returns true i.e. indicate that it can\nset a default value and did so. Returns true if any domain can\nsetup a default value for this property. Otherwise false.\nvtkSMVectorProperty overrides this method to add support for\nsetting default values using information_property.\n"},
  {"GetXMLLabel", PyvtkSMProperty_GetXMLLabel, METH_VARARGS,
   "V.GetXMLLabel() -> string\nC++: virtual char *GetXMLLabel()\n\nThe label assigned by the xml parser.\n"},
  {"GetXMLName", PyvtkSMProperty_GetXMLName, METH_VARARGS,
   "V.GetXMLName() -> string\nC++: virtual char *GetXMLName()\n\nThe name assigned by the xml parser. Used to get the property\nfrom a proxy. Note that the name used to obtain a property that\nis on a subproxy may be different from the XMLName of the\nproperty, see the note on ExposedProperties for vtkSMProxy.\n"},
  {"GetRepeatable", PyvtkSMProperty_GetRepeatable, METH_VARARGS,
   "V.GetRepeatable() -> int\nC++: virtual int GetRepeatable()\n\nIf repeatable, a property can have 1 or more values of the same\nkind. This ivar is configured when the xml file is read and is\nmainly useful for information (for example from python).\n"},
  {"GetHints", PyvtkSMProperty_GetHints, METH_VARARGS,
   "V.GetHints() -> vtkPVXMLElement\nC++: virtual vtkPVXMLElement *GetHints()\n\nThe server manager configuration XML may define \\<Hints/> element\nfor a property. Hints are metadata associated with the property.\nThe Server Manager does not (and should not) interpret the hints.\nHints provide a mechanism to add GUI pertinant information to the\nserver manager XML.  Returns the XML element for the hints\nassociated with this property, if any, otherwise returns NULL.\n"},
  {"SetHints", PyvtkSMProperty_SetHints, METH_VARARGS,
   "V.SetHints(vtkPVXMLElement)\nC++: void SetHints(vtkPVXMLElement *hints)\n\nThe server manager configuration XML may define \\<Hints/> element\nfor a property. Hints are metadata associated with the property.\nThe Server Manager does not (and should not) interpret the hints.\nHints provide a mechanism to add GUI pertinant information to the\nserver manager XML.  Returns the XML element for the hints\nassociated with this property, if any, otherwise returns NULL.\n"},
  {"Modified", PyvtkSMProperty_Modified, METH_VARARGS,
   "V.Modified()\nC++: void Modified() override;\n\nOverridden to support blocking of modified events.\n"},
  {"GetParent", PyvtkSMProperty_GetParent, METH_VARARGS,
   "V.GetParent() -> vtkSMProxy\nC++: vtkSMProxy *GetParent()\n\nGet the proxy to which this property belongs. Note that is this\nproperty is belong to a sub-proxy of a proxy, the returned value\nwill indeed be that sub-proxy (and not the outer container\nproxy).\n"},
  {"IsStateIgnored", PyvtkSMProperty_IsStateIgnored, METH_VARARGS,
   "V.IsStateIgnored() -> bool\nC++: virtual bool IsStateIgnored()\n\n"},
  {"IsValueDefault", PyvtkSMProperty_IsValueDefault, METH_VARARGS,
   "V.IsValueDefault() -> bool\nC++: virtual bool IsValueDefault()\n\nReturns true if the property's value is different from the\ndefault value. This is used as a hint by the state saving code to\ndetermine if the value should be written to the file or if the\ndefaults are sufficient.\n"},
  {"HasDomainsWithRequiredProperties", PyvtkSMProperty_HasDomainsWithRequiredProperties, METH_VARARGS,
   "V.HasDomainsWithRequiredProperties() -> bool\nC++: bool HasDomainsWithRequiredProperties()\n\nReturns true if the property has a domain with required\nproperties. This typically indicates that the property has a\ndomain whose values change at runtime based on input dataset or\nfile being processed.\n"},
  {"ClearUncheckedElements", PyvtkSMProperty_ClearUncheckedElements, METH_VARARGS,
   "V.ClearUncheckedElements()\nC++: virtual void ClearUncheckedElements()\n\nUse this method to clear unchecked values set of this property.\n"},
  {"CreateNewPrettyLabel", PyvtkSMProperty_CreateNewPrettyLabel, METH_VARARGS,
   "V.CreateNewPrettyLabel(string) -> string\nC++: static const char *CreateNewPrettyLabel(const char *name)\n\nGiven the string, this method will create and set a well-formated\nstring as XMLLabel and returns it. Need to be deleted after use.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMProperty_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMProperty", // tp_name
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
  PyvtkSMProperty_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMProperty_StaticNew()
{
  return vtkSMProperty::New();
}

PyObject *PyvtkSMProperty_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMProperty_Type, PyvtkSMProperty_Methods,
    "vtkSMProperty",
 &PyvtkSMProperty_StaticNew);

  PyTypeObject *pytype = &PyvtkSMProperty_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMProperty(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMProperty_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMProperty", o) != 0)
  {
    Py_DECREF(o);
  }

}

