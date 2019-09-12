// python wrapper for vtkSMSessionProxyManager
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
#include "vtkStdString.h"
#include "vtkSMSessionProxyManager.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMSessionProxyManager(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMSessionProxyManager_ClassNew(); }

#ifndef DECLARED_PyvtkSMSessionObject_ClassNew
extern "C" { PyObject *PyvtkSMSessionObject_ClassNew(); }
#define DECLARED_PyvtkSMSessionObject_ClassNew
#endif

static const char *PyvtkSMSessionProxyManager_Doc =
  "vtkSMSessionProxyManager -  The vtkSMSessionProxyManager is\nesponsible for creating and\n managing proxies for a given session.\n\n"
  "Superclass: vtkSMSessionObject\n\n"
  "vtkSMSessionProxyManager is an instance that creates and manages\n"
  "proxies for a given session/server. It maintains a map of XML\n"
  "elements (populated by the XML parser) from which it can create and\n"
  "initialize proxies and properties. Once a proxy is created, it can\n"
  "either be managed by the user code or the proxy manager. In the\n"
  "latter case, pass the control of the proxy to the manager with\n"
  "RegisterProxy() and unregister it. At destruction, proxy manager\n"
  "deletes all managed proxies.\n\n"
  "vtkSMSessionProxyManager is designed to work with only one session.\n"
  "When the session on which it is attached closes, it has no role and\n"
  "should be deleted right away.\n"
  "@sa\n"
  "vtkSMProxyDefinitionManager\n\n"
  "@sa\n"
  "Basic XML Proxy definition documentation:\n\n"
  "@sa\n"
  "------------- Proxy definition -------------{.xml}\n"
  " <SourceProxy                   => Will create vtkSM + SourceProxy\n"
  "    class.\n"
  "        name=\"SphereSource\"     => Key used to create the proxy.\n"
  "        class=\"vtkSphereSource\" => Concrete VTK class that does the\n"
  "    real job.\n"
  "        label=\"Sphere\">         => Nice name used in menu and python\n"
  "    shell.\n\n"
  "@sa\n"
  "----------- Property definition -----------{.xml}\n"
  "   <DoubleVectorProperty        => Will create vtkSM +\n"
  "    DoubleVectorProperty\n"
  "                                   and vtkSI + DoubleVectorProperty\n"
  "    class by\n"
  "                                   default.\n"
  "        name=\"Center\"           => Name of the property:\n"
  "                                   Example usage:\n"
  "    vtkPropertyHelper(proxy, \"Center\").Set(0,1,2)\n"
  "        command=\"SetCenter\"     => Real method name that will be\n"
  "    called on\n"
  "                                   vtkObject when the property is\n"
  "    updated.\n"
  "        number_of_elements=\"3\"  => Size of the vector.\n"
  "        animateable=\"1\"         => Tell the animation view that\n"
  "    property\n"
  "                                   can be used as an evolving\n"
  "    property.\n"
  "        default_values=\"0 0 0\"> => The value that will be set at the\n"
  "   construction to the VTK object.\n"
  " \n\n"
  "@sa\n"
  "For custom behaviour the user can add some extra attributes:\n\n"
  "- We can specify a custom SIProperty class to handle in a custom way\n"
  "  the data on the server:{.xml}\n"
  "     <StringVectorProperty          => vtkSMStringVectorProperty\n"
  "  class.\n"
  "        name=\"ElementBlocksInfo\"    => Property name.\n"
  "        information_only=\"1\"        => Can only be used to fetch\n"
  "  data.\n"
  "        si_class=\"vtkSISILProperty\" => Class name to instantiate on\n"
  "  the other side.\n"
  "        subtree=\"Blocks\"/>          => Extra attribute used by\n"
  "  vtkSISILProperty.\n\n"
  "@sa\n"
  "- We can trigger after any update a command to be executed:{.xml}\n"
  "     <Proxy name=\"LookupTable\"\n"
  "            class=\"vtkLookupTable\"\n"
  "            post_push=\"Build\"       => The method Build() will be\n"
  "  called each\n"
  "                                       time a new property value is\n"
  "  pushed to\n"
  "                                       the VTK object.\n"
  "            processes=\"dataserver|renderserver|client\" >\n\n"
  "@sa\n"
  "- We can force any property to push its value as soon as it is\n"
  "  changed:{.xml}\n"
  "         <Property name=\"ResetFieldCriteria\"\n"
  "            command=\"ResetFieldCriteria\"\n"
  "            immediate_update=\"1\">     => Modifying the property will\n"
  "  result\n"
  "                                         in an immediate push of it\n"
  "  and the\n"
  "                                         execution of the command on\n"
  "  the vtkObject.\n\n"
  "@sa\n"
  "- To show a source proxy or a filter inside the menu of ParaView we\n"
  "  use a hint:{.xml}\n"
  "      <SourceProxy ...>\n"
  "          \n"
  "             <ShowInMenu                  => The category attribute\n"
  "  enables\n"
  "                 category=\"PersoFilter\"/>    specification of the\n"
  "  sub-menu in which\n"
  "                                             this proxy should be\n"
  "  listed. (optional)\n"
  "          \n"
  "      \n\n";


static PyObject *
PyvtkSMSessionProxyManager_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMSessionProxyManager::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMSessionProxyManager::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMSessionProxyManager *tempr = vtkSMSessionProxyManager::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMSessionProxyManager *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMSessionProxyManager::NewInstance());

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
PyvtkSMSessionProxyManager_GetReservedGlobalID(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetReservedGlobalID");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    unsigned int tempr = vtkSMSessionProxyManager::GetReservedGlobalID();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_NewProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  const char *temp2 = NULL;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->NewProxy(temp0, temp1, temp2) :
      op->vtkSMSessionProxyManager::NewProxy(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_GetProxyDocumentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxyDocumentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkSMDocumentation *tempr = (ap.IsBound() ?
      op->GetProxyDocumentation(temp0, temp1) :
      op->vtkSMSessionProxyManager::GetProxyDocumentation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_GetPropertyDocumentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropertyDocumentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkSMDocumentation *tempr = (ap.IsBound() ?
      op->GetPropertyDocumentation(temp0, temp1, temp2) :
      op->vtkSMSessionProxyManager::GetPropertyDocumentation(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_RegisterProxy_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  vtkSMProxy *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkSMProxy"))
  {
    if (ap.IsBound())
    {
      op->RegisterProxy(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSMSessionProxyManager::RegisterProxy(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMSessionProxyManager_RegisterProxy_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  const char *temp0 = nullptr;
  vtkSMProxy *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMProxy"))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->RegisterProxy(temp0, temp1) :
      op->vtkSMSessionProxyManager::RegisterProxy(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMSessionProxyManager_RegisterProxy(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSMSessionProxyManager_RegisterProxy_s1(self, args);
    case 2:
      return PyvtkSMSessionProxyManager_RegisterProxy_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RegisterProxy");
  return nullptr;
}



static PyObject *
PyvtkSMSessionProxyManager_GetProxy_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetProxy(temp0, temp1) :
      op->vtkSMSessionProxyManager::GetProxy(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMSessionProxyManager_GetProxy_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetProxy(temp0) :
      op->vtkSMSessionProxyManager::GetProxy(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMSessionProxyManager_GetProxy(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSMSessionProxyManager_GetProxy_s1(self, args);
    case 1:
      return PyvtkSMSessionProxyManager_GetProxy_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetProxy");
  return nullptr;
}



static PyObject *
PyvtkSMSessionProxyManager_GetProxies_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  vtkCollection *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkCollection"))
  {
    if (ap.IsBound())
    {
      op->GetProxies(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSMSessionProxyManager::GetProxies(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMSessionProxyManager_GetProxies_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  const char *temp0 = nullptr;
  vtkCollection *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkCollection"))
  {
    if (ap.IsBound())
    {
      op->GetProxies(temp0, temp1);
    }
    else
    {
      op->vtkSMSessionProxyManager::GetProxies(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMSessionProxyManager_GetProxies(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSMSessionProxyManager_GetProxies_s1(self, args);
    case 2:
      return PyvtkSMSessionProxyManager_GetProxies_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetProxies");
  return nullptr;
}



static PyObject *
PyvtkSMSessionProxyManager_GetPrototypeProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrototypeProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetPrototypeProxy(temp0, temp1) :
      op->vtkSMSessionProxyManager::GetPrototypeProxy(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_GetNumberOfProxies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfProxies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfProxies(temp0) :
      op->vtkSMSessionProxyManager::GetNumberOfProxies(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_GetProxyName_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  const char *temp0 = nullptr;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetProxyName(temp0, temp1) :
      op->vtkSMSessionProxyManager::GetProxyName(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMSessionProxyManager_GetProxyName_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  const char *temp0 = nullptr;
  vtkSMProxy *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMProxy"))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetProxyName(temp0, temp1) :
      op->vtkSMSessionProxyManager::GetProxyName(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMSessionProxyManager_GetProxyName_Methods[] = {
  {nullptr, PyvtkSMSessionProxyManager_GetProxyName_s1, METH_VARARGS,
   "@zI"},
  {nullptr, PyvtkSMSessionProxyManager_GetProxyName_s2, METH_VARARGS,
   "@zV *vtkSMProxy"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSMSessionProxyManager_GetProxyName(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMSessionProxyManager_GetProxyName_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetProxyName");
  return nullptr;
}



static PyObject *
PyvtkSMSessionProxyManager_GetProxyNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxyNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  const char *temp0 = nullptr;
  vtkSMProxy *temp1 = nullptr;
  vtkStringList *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMProxy") &&
      ap.GetVTKObject(temp2, "vtkStringList"))
  {
    if (ap.IsBound())
    {
      op->GetProxyNames(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSMSessionProxyManager::GetProxyNames(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_GetUniqueProxyName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniqueProxyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetUniqueProxyName(temp0, temp1) :
      op->vtkSMSessionProxyManager::GetUniqueProxyName(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_IsProxyInGroup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsProxyInGroup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  vtkSMProxy *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
  {
    const char *tempr = (ap.IsBound() ?
      op->IsProxyInGroup(temp0, temp1) :
      op->vtkSMSessionProxyManager::IsProxyInGroup(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_UnRegisterProxy_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  vtkSMProxy *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkSMProxy"))
  {
    if (ap.IsBound())
    {
      op->UnRegisterProxy(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSMSessionProxyManager::UnRegisterProxy(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMSessionProxyManager_UnRegisterProxy_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->UnRegisterProxy(temp0);
    }
    else
    {
      op->vtkSMSessionProxyManager::UnRegisterProxy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMSessionProxyManager_UnRegisterProxy_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    if (ap.IsBound())
    {
      op->UnRegisterProxy(temp0);
    }
    else
    {
      op->vtkSMSessionProxyManager::UnRegisterProxy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMSessionProxyManager_UnRegisterProxy_Methods[] = {
  {nullptr, PyvtkSMSessionProxyManager_UnRegisterProxy_s2, METH_VARARGS,
   "@z"},
  {nullptr, PyvtkSMSessionProxyManager_UnRegisterProxy_s3, METH_VARARGS,
   "@V *vtkSMProxy"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSMSessionProxyManager_UnRegisterProxy(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMSessionProxyManager_UnRegisterProxy_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSMSessionProxyManager_UnRegisterProxy_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "UnRegisterProxy");
  return nullptr;
}



static PyObject *
PyvtkSMSessionProxyManager_UnRegisterProxies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterProxies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UnRegisterProxies();
    }
    else
    {
      op->vtkSMSessionProxyManager::UnRegisterProxies();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_UpdateRegisteredProxies_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateRegisteredProxies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  const char *temp0 = nullptr;
  int temp1 = 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->UpdateRegisteredProxies(temp0, temp1);
    }
    else
    {
      op->vtkSMSessionProxyManager::UpdateRegisteredProxies(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMSessionProxyManager_UpdateRegisteredProxies_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateRegisteredProxies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  int temp0 = 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    if (ap.IsBound())
    {
      op->UpdateRegisteredProxies(temp0);
    }
    else
    {
      op->vtkSMSessionProxyManager::UpdateRegisteredProxies(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMSessionProxyManager_UpdateRegisteredProxies_Methods[] = {
  {nullptr, PyvtkSMSessionProxyManager_UpdateRegisteredProxies_s1, METH_VARARGS,
   "@z|i"},
  {nullptr, PyvtkSMSessionProxyManager_UpdateRegisteredProxies_s2, METH_VARARGS,
   "@|i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSMSessionProxyManager_UpdateRegisteredProxies(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMSessionProxyManager_UpdateRegisteredProxies_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSMSessionProxyManager_UpdateRegisteredProxies_s1(self, args);
    case 0:
      return PyvtkSMSessionProxyManager_UpdateRegisteredProxies_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "UpdateRegisteredProxies");
  return nullptr;
}



static PyObject *
PyvtkSMSessionProxyManager_UpdateRegisteredProxiesInOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateRegisteredProxiesInOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  int temp0 = 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    if (ap.IsBound())
    {
      op->UpdateRegisteredProxiesInOrder(temp0);
    }
    else
    {
      op->vtkSMSessionProxyManager::UpdateRegisteredProxiesInOrder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_UpdateProxyInOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateProxyInOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    if (ap.IsBound())
    {
      op->UpdateProxyInOrder(temp0);
    }
    else
    {
      op->vtkSMSessionProxyManager::UpdateProxyInOrder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_GetNumberOfLinks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLinks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLinks() :
      op->vtkSMSessionProxyManager::GetNumberOfLinks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_GetLinkName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinkName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetLinkName(temp0) :
      op->vtkSMSessionProxyManager::GetLinkName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_RegisterLink(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterLink");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  const char *temp0 = nullptr;
  vtkSMLink *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMLink"))
  {
    if (ap.IsBound())
    {
      op->RegisterLink(temp0, temp1);
    }
    else
    {
      op->vtkSMSessionProxyManager::RegisterLink(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_UnRegisterLink(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterLink");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->UnRegisterLink(temp0);
    }
    else
    {
      op->vtkSMSessionProxyManager::UnRegisterLink(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_GetRegisteredLink(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegisteredLink");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSMLink *tempr = (ap.IsBound() ?
      op->GetRegisteredLink(temp0) :
      op->vtkSMSessionProxyManager::GetRegisteredLink(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_GetRegisteredLinkName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegisteredLinkName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  vtkSMLink *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMLink"))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetRegisteredLinkName(temp0) :
      op->vtkSMSessionProxyManager::GetRegisteredLinkName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_UnRegisterAllLinks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterAllLinks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UnRegisterAllLinks();
    }
    else
    {
      op->vtkSMSessionProxyManager::UnRegisterAllLinks();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_RegisterCustomProxyDefinition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterCustomProxyDefinition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  vtkPVXMLElement *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkPVXMLElement"))
  {
    if (ap.IsBound())
    {
      op->RegisterCustomProxyDefinition(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSMSessionProxyManager::RegisterCustomProxyDefinition(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_UnRegisterCustomProxyDefinition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterCustomProxyDefinition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->UnRegisterCustomProxyDefinition(temp0, temp1);
    }
    else
    {
      op->vtkSMSessionProxyManager::UnRegisterCustomProxyDefinition(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_UnRegisterCustomProxyDefinitions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterCustomProxyDefinitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UnRegisterCustomProxyDefinitions();
    }
    else
    {
      op->vtkSMSessionProxyManager::UnRegisterCustomProxyDefinitions();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_GetProxyDefinition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxyDefinition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->GetProxyDefinition(temp0, temp1) :
      op->vtkSMSessionProxyManager::GetProxyDefinition(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_LoadCustomProxyDefinitions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadCustomProxyDefinitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->LoadCustomProxyDefinitions(temp0);
    }
    else
    {
      op->vtkSMSessionProxyManager::LoadCustomProxyDefinitions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMSessionProxyManager_LoadCustomProxyDefinitions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadCustomProxyDefinitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  vtkPVXMLElement *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement"))
  {
    if (ap.IsBound())
    {
      op->LoadCustomProxyDefinitions(temp0);
    }
    else
    {
      op->vtkSMSessionProxyManager::LoadCustomProxyDefinitions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMSessionProxyManager_LoadCustomProxyDefinitions_Methods[] = {
  {nullptr, PyvtkSMSessionProxyManager_LoadCustomProxyDefinitions_s1, METH_VARARGS,
   "@z"},
  {nullptr, PyvtkSMSessionProxyManager_LoadCustomProxyDefinitions_s2, METH_VARARGS,
   "@V *vtkPVXMLElement"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSMSessionProxyManager_LoadCustomProxyDefinitions(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMSessionProxyManager_LoadCustomProxyDefinitions_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "LoadCustomProxyDefinitions");
  return nullptr;
}



static PyObject *
PyvtkSMSessionProxyManager_SaveCustomProxyDefinitions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveCustomProxyDefinitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  vtkPVXMLElement *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement"))
  {
    if (ap.IsBound())
    {
      op->SaveCustomProxyDefinitions(temp0);
    }
    else
    {
      op->vtkSMSessionProxyManager::SaveCustomProxyDefinitions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_LoadXMLState_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadXMLState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  const char *temp0 = nullptr;
  vtkSMStateLoader *temp1 = NULL;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp1, "vtkSMStateLoader")))
  {
    if (ap.IsBound())
    {
      op->LoadXMLState(temp0, temp1);
    }
    else
    {
      op->vtkSMSessionProxyManager::LoadXMLState(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMSessionProxyManager_LoadXMLState_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadXMLState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  vtkPVXMLElement *temp0 = nullptr;
  vtkSMStateLoader *temp1 = NULL;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp1, "vtkSMStateLoader")) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->LoadXMLState(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSMSessionProxyManager::LoadXMLState(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMSessionProxyManager_LoadXMLState_Methods[] = {
  {nullptr, PyvtkSMSessionProxyManager_LoadXMLState_s1, METH_VARARGS,
   "@z|V *vtkSMStateLoader"},
  {nullptr, PyvtkSMSessionProxyManager_LoadXMLState_s2, METH_VARARGS,
   "@V|Vq *vtkPVXMLElement *vtkSMStateLoader"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSMSessionProxyManager_LoadXMLState(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMSessionProxyManager_LoadXMLState_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSMSessionProxyManager_LoadXMLState_s2(self, args);
    case 1:
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "LoadXMLState");
  return nullptr;
}



static PyObject *
PyvtkSMSessionProxyManager_GetInLoadXMLState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInLoadXMLState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetInLoadXMLState() :
      op->vtkSMSessionProxyManager::GetInLoadXMLState());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_SaveXMLState_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveXMLState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SaveXMLState(temp0);
    }
    else
    {
      op->vtkSMSessionProxyManager::SaveXMLState(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMSessionProxyManager_SaveXMLState_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveXMLState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->SaveXMLState() :
      op->vtkSMSessionProxyManager::SaveXMLState());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMSessionProxyManager_SaveXMLState(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSMSessionProxyManager_SaveXMLState_s1(self, args);
    case 0:
      return PyvtkSMSessionProxyManager_SaveXMLState_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SaveXMLState");
  return nullptr;
}



static PyObject *
PyvtkSMSessionProxyManager_SaveRegisteredLinks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveRegisteredLinks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  vtkPVXMLElement *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement"))
  {
    if (ap.IsBound())
    {
      op->SaveRegisteredLinks(temp0);
    }
    else
    {
      op->vtkSMSessionProxyManager::SaveRegisteredLinks(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_InstantiateGroupPrototypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InstantiateGroupPrototypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->InstantiateGroupPrototypes(temp0);
    }
    else
    {
      op->vtkSMSessionProxyManager::InstantiateGroupPrototypes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_InstantiatePrototypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InstantiatePrototypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InstantiatePrototypes();
    }
    else
    {
      op->vtkSMSessionProxyManager::InstantiatePrototypes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_ClearPrototypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearPrototypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearPrototypes();
    }
    else
    {
      op->vtkSMSessionProxyManager::ClearPrototypes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_HasDefinition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasDefinition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->HasDefinition(temp0, temp1) :
      op->vtkSMSessionProxyManager::HasDefinition(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_AreProxiesModified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AreProxiesModified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->AreProxiesModified() :
      op->vtkSMSessionProxyManager::AreProxiesModified());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_GetProxyHints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxyHints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->GetProxyHints(temp0, temp1) :
      op->vtkSMSessionProxyManager::GetProxyHints(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_GetPropertyHints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropertyHints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->GetPropertyHints(temp0, temp1, temp2) :
      op->vtkSMSessionProxyManager::GetPropertyHints(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_GetUpdateInputProxies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpdateInputProxies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUpdateInputProxies() :
      op->vtkSMSessionProxyManager::GetUpdateInputProxies());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_LoadConfigurationXML(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadConfigurationXML");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->LoadConfigurationXML(temp0) :
      op->vtkSMSessionProxyManager::LoadConfigurationXML(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_GetProxyDefinitionManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxyDefinitionManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMProxyDefinitionManager *tempr = (ap.IsBound() ?
      op->GetProxyDefinitionManager() :
      op->vtkSMSessionProxyManager::GetProxyDefinitionManager());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_GetSelectionModel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionModel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSMProxySelectionModel *tempr = (ap.IsBound() ?
      op->GetSelectionModel(temp0) :
      op->vtkSMSessionProxyManager::GetSelectionModel(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_GetNumberOfSelectionModel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSelectionModel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfSelectionModel() :
      op->vtkSMSessionProxyManager::GetNumberOfSelectionModel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_GetSelectionModelAt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionModelAt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSMProxySelectionModel *tempr = (ap.IsBound() ?
      op->GetSelectionModelAt(temp0) :
      op->vtkSMSessionProxyManager::GetSelectionModelAt(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_RegisterSelectionModel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterSelectionModel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  const char *temp0 = nullptr;
  vtkSMProxySelectionModel *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMProxySelectionModel"))
  {
    if (ap.IsBound())
    {
      op->RegisterSelectionModel(temp0, temp1);
    }
    else
    {
      op->vtkSMSessionProxyManager::RegisterSelectionModel(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_UnRegisterSelectionModel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterSelectionModel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->UnRegisterSelectionModel(temp0);
    }
    else
    {
      op->vtkSMSessionProxyManager::UnRegisterSelectionModel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_UpdateFromRemote(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateFromRemote");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateFromRemote();
    }
    else
    {
      op->vtkSMSessionProxyManager::UpdateFromRemote();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_IsStateUpdateNotificationEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsStateUpdateNotificationEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsStateUpdateNotificationEnabled() :
      op->vtkSMSessionProxyManager::IsStateUpdateNotificationEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_DisableStateUpdateNotification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableStateUpdateNotification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisableStateUpdateNotification();
    }
    else
    {
      op->vtkSMSessionProxyManager::DisableStateUpdateNotification();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_EnableStateUpdateNotification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableStateUpdateNotification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableStateUpdateNotification();
    }
    else
    {
      op->vtkSMSessionProxyManager::EnableStateUpdateNotification();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_TriggerStateUpdate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TriggerStateUpdate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TriggerStateUpdate();
    }
    else
    {
      op->vtkSMSessionProxyManager::TriggerStateUpdate();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_GetFullState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFullState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkSMMessage *tempr = (ap.IsBound() ?
      op->GetFullState() :
      op->vtkSMSessionProxyManager::GetFullState());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_LoadState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  vtkSMMessage *temp0 = nullptr;
  vtkSMProxyLocator *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMMessage") &&
      ap.GetVTKObject(temp1, "vtkSMProxyLocator"))
  {
    if (ap.IsBound())
    {
      op->LoadState(temp0, temp1);
    }
    else
    {
      op->vtkSMSessionProxyManager::LoadState(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_FindProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->FindProxy(temp0, temp1, temp2) :
      op->vtkSMSessionProxyManager::FindProxy(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionProxyManager_GetExportDepot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExportDepot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionProxyManager *op = static_cast<vtkSMSessionProxyManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMExportProxyDepot *tempr = (ap.IsBound() ?
      op->GetExportDepot() :
      op->vtkSMSessionProxyManager::GetExportDepot());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMSessionProxyManager_Methods[] = {
  {"IsTypeOf", PyvtkSMSessionProxyManager_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nvtkSMSessionProxyManager requires a session and cannot be created\nwithout one.\n"},
  {"IsA", PyvtkSMSessionProxyManager_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nvtkSMSessionProxyManager requires a session and cannot be created\nwithout one.\n"},
  {"SafeDownCast", PyvtkSMSessionProxyManager_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMSessionProxyManager\nC++: static vtkSMSessionProxyManager *SafeDownCast(\n    vtkObjectBase *o)\n\nvtkSMSessionProxyManager requires a session and cannot be created\nwithout one.\n"},
  {"NewInstance", PyvtkSMSessionProxyManager_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMSessionProxyManager\nC++: vtkSMSessionProxyManager *NewInstance()\n\nvtkSMSessionProxyManager requires a session and cannot be created\nwithout one.\n"},
  {"GetReservedGlobalID", PyvtkSMSessionProxyManager_GetReservedGlobalID, METH_VARARGS,
   "V.GetReservedGlobalID() -> int\nC++: static vtkTypeUInt32 GetReservedGlobalID()\n\nReturn the GlobalID that should be used to refer to the\nProxyManager state\n"},
  {"NewProxy", PyvtkSMSessionProxyManager_NewProxy, METH_VARARGS,
   "V.NewProxy(string, string, string) -> vtkSMProxy\nC++: vtkSMProxy *NewProxy(const char *groupName,\n    const char *proxyName, const char *subProxyName=NULL)\n\nGiven a group and proxy name, create and return a proxy instance.\nThe user has to delete the proxy when done. NOTE: If this method\nis called from a scripting language, it may not be possible to\ndelete the returned object with Delete. The VTK wrappers handle\nNew and Delete specially and may not allow the deletion of object\ncreated through other methods. Use UnRegister instead.\n"},
  {"GetProxyDocumentation", PyvtkSMSessionProxyManager_GetProxyDocumentation, METH_VARARGS,
   "V.GetProxyDocumentation(string, string) -> vtkSMDocumentation\nC++: vtkSMDocumentation *GetProxyDocumentation(\n    const char *groupName, const char *proxyName)\n\nReturns a vtkSMDocumentation object with the documentation for\nthe proxy with given name and group name. Note that the name and\ngroup name are not those with the which the proxy is registered,\nbut those with which the proxy is created i.e. the arguments used\nfor NewProxy().\n"},
  {"GetPropertyDocumentation", PyvtkSMSessionProxyManager_GetPropertyDocumentation, METH_VARARGS,
   "V.GetPropertyDocumentation(string, string, string)\n    -> vtkSMDocumentation\nC++: vtkSMDocumentation *GetPropertyDocumentation(\n    const char *groupName, const char *proxyName,\n    const char *propertyName)\n\nReturns a vtkSMDocumentation object with the documentation for\nthe given property of the proxy with given name and group name.\nNote that the name and group name are not those with the which\nthe proxy is registered, but those with which the proxy is\ncreated i.e. the arguments used for NewProxy(). Also, the\nproperty name is the name of an exposed property.\n"},
  {"RegisterProxy", PyvtkSMSessionProxyManager_RegisterProxy, METH_VARARGS,
   "V.RegisterProxy(string, string, vtkSMProxy)\nC++: void RegisterProxy(const char *groupname, const char *name,\n    vtkSMProxy *proxy)\nV.RegisterProxy(string, vtkSMProxy) -> string\nC++: vtkStdString RegisterProxy(const char *groupname,\n    vtkSMProxy *proxy)\n\nUsed to pass the control of the proxy to the manager. The user\ncode can then release its reference count and not care about what\nhappens to the proxy. Managed proxies are deleted at destruction.\nNOTE: The name has to be unique (per group). If not, the existing\nproxy will be replaced (and unregistered). The proxy instances\nare grouped in collections (not necessarily the same as the group\nin the XML configuration file). These collections can be used to\nseparate proxies based on their functionality. For example,\nimplicit planes can be grouped together and the acceptable values\nof a proxy property can be restricted (using a domain) to this\ncollection.\n"},
  {"GetProxy", PyvtkSMSessionProxyManager_GetProxy, METH_VARARGS,
   "V.GetProxy(string, string) -> vtkSMProxy\nC++: vtkSMProxy *GetProxy(const char *groupname, const char *name)\nV.GetProxy(string) -> vtkSMProxy\nC++: vtkSMProxy *GetProxy(const char *name)\n\nGiven its name (and group) returns a proxy. If not a managed\nproxy, returns 0.\n"},
  {"GetProxies", PyvtkSMSessionProxyManager_GetProxies, METH_VARARGS,
   "V.GetProxies(string, string, vtkCollection)\nC++: void GetProxies(const char *groupname, const char *name,\n    vtkCollection *collection)\nV.GetProxies(string, vtkCollection)\nC++: void GetProxies(const char *groupname,\n    vtkCollection *collection)\n\nReturns all proxies registered under the given group with the\ngiven name. The collection is cleared before the proxies are\nadded to it.\n"},
  {"GetPrototypeProxy", PyvtkSMSessionProxyManager_GetPrototypeProxy, METH_VARARGS,
   "V.GetPrototypeProxy(string, string) -> vtkSMProxy\nC++: vtkSMProxy *GetPrototypeProxy(const char *groupname,\n    const char *name)\n\nReturns the prototype proxy for the given type. This method may\ncreate a new prototype proxy, if one does not already exist.\n\note After loading a plugin, all existing prototypes are\ndiscarded. This is done because plugins can potentially alter\ndefinitions for existing proxies.\n"},
  {"GetNumberOfProxies", PyvtkSMSessionProxyManager_GetNumberOfProxies, METH_VARARGS,
   "V.GetNumberOfProxies(string) -> int\nC++: unsigned int GetNumberOfProxies(const char *groupname)\n\nReturns the number of proxies in a group.\n"},
  {"GetProxyName", PyvtkSMSessionProxyManager_GetProxyName, METH_VARARGS,
   "V.GetProxyName(string, int) -> string\nC++: const char *GetProxyName(const char *groupname,\n    unsigned int idx)\nV.GetProxyName(string, vtkSMProxy) -> string\nC++: const char *GetProxyName(const char *groupname,\n    vtkSMProxy *proxy)\n\nGiven a group and an index, returns the name of a proxy. NOTE:\nThis operation is slow.\n"},
  {"GetProxyNames", PyvtkSMSessionProxyManager_GetProxyNames, METH_VARARGS,
   "V.GetProxyNames(string, vtkSMProxy, vtkStringList)\nC++: void GetProxyNames(const char *groupname, vtkSMProxy *proxy,\n    vtkStringList *names)\n\nGiven a group and a proxy, return all its names. This clears\nthenames list before populating it with the names for the proxy\nunder the group. NOTE: This operation is slow.\n"},
  {"GetUniqueProxyName", PyvtkSMSessionProxyManager_GetUniqueProxyName, METH_VARARGS,
   "V.GetUniqueProxyName(string, string) -> string\nC++: vtkStdString GetUniqueProxyName(const char *groupname,\n    const char *prefix)\n\nGiven a group, returns a name not already used for proxies\nregistered in the given group. The prefix is used to come up with\na new name.\n"},
  {"IsProxyInGroup", PyvtkSMSessionProxyManager_IsProxyInGroup, METH_VARARGS,
   "V.IsProxyInGroup(vtkSMProxy, string) -> string\nC++: const char *IsProxyInGroup(vtkSMProxy *proxy,\n    const char *groupname)\n\nIf the proxy is in the given group, return its name, otherwise\nreturn null. NOTE: Any following call to proxy manager might make\nthe returned pointer invalid.\n"},
  {"UnRegisterProxy", PyvtkSMSessionProxyManager_UnRegisterProxy, METH_VARARGS,
   "V.UnRegisterProxy(string, string, vtkSMProxy)\nC++: void UnRegisterProxy(const char *groupname, const char *name,\n     vtkSMProxy *)\nV.UnRegisterProxy(string)\nC++: void UnRegisterProxy(const char *name)\nV.UnRegisterProxy(vtkSMProxy)\nC++: void UnRegisterProxy(vtkSMProxy *proxy)\n\nGiven its name, unregisters a proxy and removes it from the list\nof managed proxies.\n"},
  {"UnRegisterProxies", PyvtkSMSessionProxyManager_UnRegisterProxies, METH_VARARGS,
   "V.UnRegisterProxies()\nC++: void UnRegisterProxies()\n\nUnregisters all managed proxies.\n"},
  {"UpdateRegisteredProxies", PyvtkSMSessionProxyManager_UpdateRegisteredProxies, METH_VARARGS,
   "V.UpdateRegisteredProxies(string, int)\nC++: void UpdateRegisteredProxies(const char *groupname,\n    int modified_only=1)\nV.UpdateRegisteredProxies(int)\nC++: void UpdateRegisteredProxies(int modified_only=1)\n\nCalls UpdateVTKObjects() on all managed proxies. If modified_only\nflag is set, then UpdateVTKObjects will be called only those\nproxies that have any properties that were modified i.e. not\npushed to the VTK objects.\n"},
  {"UpdateRegisteredProxiesInOrder", PyvtkSMSessionProxyManager_UpdateRegisteredProxiesInOrder, METH_VARARGS,
   "V.UpdateRegisteredProxiesInOrder(int)\nC++: void UpdateRegisteredProxiesInOrder(int modified_only=1)\n\nUpdates all registered proxies in order, respecting dependencies\namong each other. This is used after loading state or after\ninstantiating a compound proxy. This uses the\n\"UpdateInputProxies\" flag which vtkSMProxy checks in\nUpdateVTKObjects() to call UpdateVTKObjects() on the input\nproxies as well if the flag is set.\n"},
  {"UpdateProxyInOrder", PyvtkSMSessionProxyManager_UpdateProxyInOrder, METH_VARARGS,
   "V.UpdateProxyInOrder(vtkSMProxy)\nC++: void UpdateProxyInOrder(vtkSMProxy *proxy)\n\nUpdates all registered proxies in order, respecting dependencies\namong each other. This is used after loading state or after\ninstantiating a compound proxy. This uses the\n\"UpdateInputProxies\" flag which vtkSMProxy checks in\nUpdateVTKObjects() to call UpdateVTKObjects() on the input\nproxies as well if the flag is set.\n"},
  {"GetNumberOfLinks", PyvtkSMSessionProxyManager_GetNumberOfLinks, METH_VARARGS,
   "V.GetNumberOfLinks() -> int\nC++: int GetNumberOfLinks()\n\nGet the number of registered links with the server manager.\n"},
  {"GetLinkName", PyvtkSMSessionProxyManager_GetLinkName, METH_VARARGS,
   "V.GetLinkName(int) -> string\nC++: const char *GetLinkName(int index)\n\nGet the name of a link.\n"},
  {"RegisterLink", PyvtkSMSessionProxyManager_RegisterLink, METH_VARARGS,
   "V.RegisterLink(string, vtkSMLink)\nC++: void RegisterLink(const char *linkname, vtkSMLink *link)\n\nRegister proxy/property links with the server manager. The\nlinknames must be unique, if a link with the given name already\nexists, it will be replaced.\n"},
  {"UnRegisterLink", PyvtkSMSessionProxyManager_UnRegisterLink, METH_VARARGS,
   "V.UnRegisterLink(string)\nC++: void UnRegisterLink(const char *linkname)\n\nUnregister a proxy or property link previously registered with\nthe given name.\n"},
  {"GetRegisteredLink", PyvtkSMSessionProxyManager_GetRegisteredLink, METH_VARARGS,
   "V.GetRegisteredLink(string) -> vtkSMLink\nC++: vtkSMLink *GetRegisteredLink(const char *linkname)\n\nGet the link registered with the given name. If no such link\nexists, returns NULL.\n"},
  {"GetRegisteredLinkName", PyvtkSMSessionProxyManager_GetRegisteredLinkName, METH_VARARGS,
   "V.GetRegisteredLinkName(vtkSMLink) -> string\nC++: const char *GetRegisteredLinkName(vtkSMLink *link)\n\nGet the name of the given registered link. If no such link\nexists, returns NULL.\n"},
  {"UnRegisterAllLinks", PyvtkSMSessionProxyManager_UnRegisterAllLinks, METH_VARARGS,
   "V.UnRegisterAllLinks()\nC++: void UnRegisterAllLinks()\n\nUnregister all registered proxy/property links.\n"},
  {"RegisterCustomProxyDefinition", PyvtkSMSessionProxyManager_RegisterCustomProxyDefinition, METH_VARARGS,
   "V.RegisterCustomProxyDefinition(string, string, vtkPVXMLElement)\nC++: void RegisterCustomProxyDefinition(const char *group,\n    const char *name, vtkPVXMLElement *top)\n\nRegister a custom proxy definition with the proxy manager. This\ncan be a compound proxy definition (look at\nvtkSMCompoundSourceProxy.h) or a regular proxy definition. For\nall practical purposes, there's no difference between a proxy\ndefinition added using this method or by parsing a server manager\nconfiguration file.\n"},
  {"UnRegisterCustomProxyDefinition", PyvtkSMSessionProxyManager_UnRegisterCustomProxyDefinition, METH_VARARGS,
   "V.UnRegisterCustomProxyDefinition(string, string)\nC++: void UnRegisterCustomProxyDefinition(const char *group,\n    const char *name)\n\nGiven its name, unregisters a custom proxy definition. Note that\nthis can only be used to remove definitions added using\nRegisterCustomProxyDefinition(), cannot be used to remove\ndefinitions loaded using vtkSMXMLParser.\n"},
  {"UnRegisterCustomProxyDefinitions", PyvtkSMSessionProxyManager_UnRegisterCustomProxyDefinitions, METH_VARARGS,
   "V.UnRegisterCustomProxyDefinitions()\nC++: void UnRegisterCustomProxyDefinitions()\n\nUnregisters all registered custom proxy definitions. Note that\nthis can only be used to remove definitions added using\nRegisterCustomProxyDefinition(), cannot be used to remove\ndefinitions loaded using vtkSMXMLParser.\n"},
  {"GetProxyDefinition", PyvtkSMSessionProxyManager_GetProxyDefinition, METH_VARARGS,
   "V.GetProxyDefinition(string, string) -> vtkPVXMLElement\nC++: vtkPVXMLElement *GetProxyDefinition(const char *group,\n    const char *name)\n\nReturns a registered proxy definition.\n"},
  {"LoadCustomProxyDefinitions", PyvtkSMSessionProxyManager_LoadCustomProxyDefinitions, METH_VARARGS,
   "V.LoadCustomProxyDefinitions(string)\nC++: void LoadCustomProxyDefinitions(const char *filename)\nV.LoadCustomProxyDefinitions(vtkPVXMLElement)\nC++: void LoadCustomProxyDefinitions(vtkPVXMLElement *root)\n\nLoad custom proxy definitions and register them.\n"},
  {"SaveCustomProxyDefinitions", PyvtkSMSessionProxyManager_SaveCustomProxyDefinitions, METH_VARARGS,
   "V.SaveCustomProxyDefinitions(vtkPVXMLElement)\nC++: void SaveCustomProxyDefinitions(vtkPVXMLElement *root)\n\nSave registered custom proxy definitions.\n"},
  {"LoadXMLState", PyvtkSMSessionProxyManager_LoadXMLState, METH_VARARGS,
   "V.LoadXMLState(string, vtkSMStateLoader)\nC++: void LoadXMLState(const char *filename,\n    vtkSMStateLoader *loader=NULL)\nV.LoadXMLState(vtkPVXMLElement, vtkSMStateLoader, bool)\nC++: void LoadXMLState(vtkPVXMLElement *rootElement,\n    vtkSMStateLoader *loader=NULL, bool keepOriginalIds=false)\n\nLoads the state of the server manager from XML. If loader is not\nspecified, a vtkSMStateLoader instance is used. When loading XML\nstate, `vtkSMSessionProxyManager::GetInLoadXMLState` will return\ntrue.\n"},
  {"GetInLoadXMLState", PyvtkSMSessionProxyManager_GetInLoadXMLState, METH_VARARGS,
   "V.GetInLoadXMLState() -> bool\nC++: virtual bool GetInLoadXMLState()\n\nIndicates if an XML state is currently being loaded. This may be\nused by the application to limit updates to the GUI while state\nis being loaded.\n"},
  {"SaveXMLState", PyvtkSMSessionProxyManager_SaveXMLState, METH_VARARGS,
   "V.SaveXMLState(string)\nC++: void SaveXMLState(const char *filename)\nV.SaveXMLState() -> vtkPVXMLElement\nC++: vtkPVXMLElement *SaveXMLState()\n\nSave the state of the server manager in XML format in a file.\nThis saves the state of all proxies and properties.\n"},
  {"SaveRegisteredLinks", PyvtkSMSessionProxyManager_SaveRegisteredLinks, METH_VARARGS,
   "V.SaveRegisteredLinks(vtkPVXMLElement)\nC++: void SaveRegisteredLinks(vtkPVXMLElement *root)\n\nSave/Load registered link states.\n"},
  {"InstantiateGroupPrototypes", PyvtkSMSessionProxyManager_InstantiateGroupPrototypes, METH_VARARGS,
   "V.InstantiateGroupPrototypes(string)\nC++: void InstantiateGroupPrototypes(const char *groupName)\n\nGiven a group name, create prototypes and store them in a\ninstance group called groupName_prototypes. Prototypes have their\nConnectionID set to the SelfConnection.\n"},
  {"InstantiatePrototypes", PyvtkSMSessionProxyManager_InstantiatePrototypes, METH_VARARGS,
   "V.InstantiatePrototypes()\nC++: void InstantiatePrototypes()\n\nCreates protytpes for all known proxy types.\n"},
  {"ClearPrototypes", PyvtkSMSessionProxyManager_ClearPrototypes, METH_VARARGS,
   "V.ClearPrototypes()\nC++: void ClearPrototypes()\n\nConverse on `InstantiatePrototypes`, clear all prototypes.\n"},
  {"HasDefinition", PyvtkSMSessionProxyManager_HasDefinition, METH_VARARGS,
   "V.HasDefinition(string, string) -> bool\nC++: bool HasDefinition(const char *groupName,\n    const char *proxyName)\n\nReturn true if the XML Definition was found by\nvtkSMProxyDefinitionManager\n"},
  {"AreProxiesModified", PyvtkSMSessionProxyManager_AreProxiesModified, METH_VARARGS,
   "V.AreProxiesModified() -> int\nC++: int AreProxiesModified()\n\nGet if there are any registered proxies that have their\nproperties in a modified state.\n"},
  {"GetProxyHints", PyvtkSMSessionProxyManager_GetProxyHints, METH_VARARGS,
   "V.GetProxyHints(string, string) -> vtkPVXMLElement\nC++: vtkPVXMLElement *GetProxyHints(const char *xmlgroup,\n    const char *xmlname)\n\nThe server manager configuration XML may define \\<Hints/> element\nfor a proxy/property. Hints are metadata associated with the\nproxy/property. The Server Manager does not (and should not)\ninterpret the hints. Hints provide a mechanism to add\nGUI-pertinent information to the server manager XML.  Returns the\nXML element for the hints associated with this proxy/property, if\nany, otherwise returns NULL.\n"},
  {"GetPropertyHints", PyvtkSMSessionProxyManager_GetPropertyHints, METH_VARARGS,
   "V.GetPropertyHints(string, string, string) -> vtkPVXMLElement\nC++: vtkPVXMLElement *GetPropertyHints(const char *groupName,\n    const char *proxyName, const char *propertyName)\n\nThe server manager configuration XML may define \\<Hints/> element\nfor a proxy/property. Hints are metadata associated with the\nproxy/property. The Server Manager does not (and should not)\ninterpret the hints. Hints provide a mechanism to add\nGUI-pertinent information to the server manager XML.  Returns the\nXML element for the hints associated with this proxy/property, if\nany, otherwise returns NULL.\n"},
  {"GetUpdateInputProxies", PyvtkSMSessionProxyManager_GetUpdateInputProxies, METH_VARARGS,
   "V.GetUpdateInputProxies() -> int\nC++: virtual int GetUpdateInputProxies()\n\nCheck if UpdateInputProxies flag is set. This is used after\nloading state or after instantiating a compound proxy. This uses\nthe \"UpdateInputProxies\" flag which vtkSMProxy checks in\nUpdateVTKObjects() to call UpdateVTKObjects() on the input\nproxies as well if the flag is set.\n"},
  {"LoadConfigurationXML", PyvtkSMSessionProxyManager_LoadConfigurationXML, METH_VARARGS,
   "V.LoadConfigurationXML(string) -> bool\nC++: bool LoadConfigurationXML(const char *xmlcontents)\n\nLoads server-manager configuration xml.\n"},
  {"GetProxyDefinitionManager", PyvtkSMSessionProxyManager_GetProxyDefinitionManager, METH_VARARGS,
   "V.GetProxyDefinitionManager() -> vtkSMProxyDefinitionManager\nC++: virtual vtkSMProxyDefinitionManager *GetProxyDefinitionManager(\n    )\n\nGet the proxy definition manager. Proxy definition manager\nmaintains all the information about proxy definitions.\n"},
  {"GetSelectionModel", PyvtkSMSessionProxyManager_GetSelectionModel, METH_VARARGS,
   "V.GetSelectionModel(string) -> vtkSMProxySelectionModel\nC++: vtkSMProxySelectionModel *GetSelectionModel(const char *name)\n\nGet a registered selection model. Will return null if no such\nmodel is registered. This will forward the call to the\nProxyManager singleton\n"},
  {"GetNumberOfSelectionModel", PyvtkSMSessionProxyManager_GetNumberOfSelectionModel, METH_VARARGS,
   "V.GetNumberOfSelectionModel() -> int\nC++: vtkIdType GetNumberOfSelectionModel()\n\nReturn the number of Selections models registered\n"},
  {"GetSelectionModelAt", PyvtkSMSessionProxyManager_GetSelectionModelAt, METH_VARARGS,
   "V.GetSelectionModelAt(int) -> vtkSMProxySelectionModel\nC++: vtkSMProxySelectionModel *GetSelectionModelAt(int idx)\n\nReturn the selection model present at the index idx.\n"},
  {"RegisterSelectionModel", PyvtkSMSessionProxyManager_RegisterSelectionModel, METH_VARARGS,
   "V.RegisterSelectionModel(string, vtkSMProxySelectionModel)\nC++: void RegisterSelectionModel(const char *name,\n    vtkSMProxySelectionModel *)\n\nRegister/UnRegister a selection model. A selection model can be\ntypically used by applications to keep track of active sources,\nfilters, views etc. This will forward the call to the\nProxyManager singleton\n"},
  {"UnRegisterSelectionModel", PyvtkSMSessionProxyManager_UnRegisterSelectionModel, METH_VARARGS,
   "V.UnRegisterSelectionModel(string)\nC++: void UnRegisterSelectionModel(const char *name)\n\nRegister/UnRegister a selection model. A selection model can be\ntypically used by applications to keep track of active sources,\nfilters, views etc. This will forward the call to the\nProxyManager singleton\n"},
  {"UpdateFromRemote", PyvtkSMSessionProxyManager_UpdateFromRemote, METH_VARARGS,
   "V.UpdateFromRemote()\nC++: void UpdateFromRemote()\n\nMethod used to fetch the last state of the ProxyManager from the\npvserver. This is used in the collaboration context when the user\nconnects to a remote server and wants to update its state before\ndoing anything.\n"},
  {"IsStateUpdateNotificationEnabled", PyvtkSMSessionProxyManager_IsStateUpdateNotificationEnabled, METH_VARARGS,
   "V.IsStateUpdateNotificationEnabled() -> bool\nC++: bool IsStateUpdateNotificationEnabled()\n\nThese methods allow the user to make atomic change set in the\nnotification collaboration in terms of set of proxy registration.\nThis enables us to prevent deletion on remote sites of proxies\nthat will end up in the ProxyManager but have not been set into\nit yet.\n"},
  {"DisableStateUpdateNotification", PyvtkSMSessionProxyManager_DisableStateUpdateNotification, METH_VARARGS,
   "V.DisableStateUpdateNotification()\nC++: void DisableStateUpdateNotification()\n\nThese methods allow the user to make atomic change set in the\nnotification collaboration in terms of set of proxy registration.\nThis enables us to prevent deletion on remote sites of proxies\nthat will end up in the ProxyManager but have not been set into\nit yet.\n"},
  {"EnableStateUpdateNotification", PyvtkSMSessionProxyManager_EnableStateUpdateNotification, METH_VARARGS,
   "V.EnableStateUpdateNotification()\nC++: void EnableStateUpdateNotification()\n\nThese methods allow the user to make atomic change set in the\nnotification collaboration in terms of set of proxy registration.\nThis enables us to prevent deletion on remote sites of proxies\nthat will end up in the ProxyManager but have not been set into\nit yet.\n"},
  {"TriggerStateUpdate", PyvtkSMSessionProxyManager_TriggerStateUpdate, METH_VARARGS,
   "V.TriggerStateUpdate()\nC++: void TriggerStateUpdate()\n\nThese methods allow the user to make atomic change set in the\nnotification collaboration in terms of set of proxy registration.\nThis enables us to prevent deletion on remote sites of proxies\nthat will end up in the ProxyManager but have not been set into\nit yet.\n"},
  {"GetFullState", PyvtkSMSessionProxyManager_GetFullState, METH_VARARGS,
   "V.GetFullState() -> vtkSMMessage\nC++: virtual const vtkSMMessage *GetFullState()\n\nThis method returns the full object state that can be used to\ncreate that object from scratch. This method will be used to fill\nthe undo stack. If not overridden this will return NULL.\n"},
  {"LoadState", PyvtkSMSessionProxyManager_LoadState, METH_VARARGS,
   "V.LoadState(vtkSMMessage, vtkSMProxyLocator)\nC++: virtual void LoadState(const vtkSMMessage *msg,\n    vtkSMProxyLocator *locator)\n\nThis method is used to initialise the ProxyManager to the given\nstate\n"},
  {"FindProxy", PyvtkSMSessionProxyManager_FindProxy, METH_VARARGS,
   "V.FindProxy(string, string, string) -> vtkSMProxy\nC++: vtkSMProxy *FindProxy(const char *reggroup,\n    const char *xmlgroup, const char *xmltype)\n\nFind proxy of the group type (xmlgroup, xmltype) registered under\na particular group (reggroup). Returns the first proxy found, if\nany.\n"},
  {"GetExportDepot", PyvtkSMSessionProxyManager_GetExportDepot, METH_VARARGS,
   "V.GetExportDepot() -> vtkSMExportProxyDepot\nC++: virtual vtkSMExportProxyDepot *GetExportDepot()\n\nGet access the the export depot.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMSessionProxyManager_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMSessionProxyManager", // tp_name
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
  PyvtkSMSessionProxyManager_Doc, // tp_doc
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

PyObject *PyvtkSMSessionProxyManager_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMSessionProxyManager_Type, PyvtkSMSessionProxyManager_Methods,
    "vtkSMSessionProxyManager",
 nullptr);

  PyTypeObject *pytype = &PyvtkSMSessionProxyManager_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMSessionObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMSessionProxyManager(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMSessionProxyManager_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMSessionProxyManager", o) != 0)
  {
    Py_DECREF(o);
  }

}

