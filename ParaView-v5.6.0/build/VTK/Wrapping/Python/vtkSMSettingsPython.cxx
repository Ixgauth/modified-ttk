// python wrapper for vtkSMSettings
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
#include "vtkSMSettings.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMSettings(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMSettings_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkSMSettings_Doc =
  "vtkSMSettings - vtkSMSettings provides the underlying mechanism for\nsetting default property values in ParaView.\n\n"
  "Superclass: vtkObject\n\n"
  "This class is a singleton class. Instances should be retrieved with\n"
  "the GetInstance() method.\n\n"
  "This class provides the facilities for defining a linear hierarchy of\n"
  "setting collections. A setting collection is a group of\n"
  "not-necessarily-related settings defined in a string or text file.\n"
  "The text defining a setting collection is formatted in JSON.\n"
  "Collections can be added using the methods AddSettingsFromString()\n"
  "and AddSettingsFromFile().\n\n"
  "Each setting collection has an associated priority. The priority is\n"
  "used to select the collection from which a setting should be\n"
  "retrieved when more than one collection has the same definition. A\n"
  "setting in a collection with a higher priority than another\n"
  "collection with the same setting has precedence and will be returned\n"
  "by the \"Get*\" methods in this class.\n\n"
  "Settings for proxies and proxy properties are defined by specifying\n"
  "the XML names of the proxy group, proxies, and properties in a\n"
  "three-level hierarchy. For example, the Sphere Source settings can be\n"
  "defined by the following:\n\n"
  "\\pre{\\{\n"
  "  \"sources\" : \\{\n"
  "    \"SphereSource\" : \\{\n"
  "      \"Radius\" : 2.5,\n"
  "      \"Center\" : [0.0, 1.0, 0.0]    \\}\n"
  "  /}\\} }\n\n"
  "In this example, \"sources\" is the proxy group, \"SphereSource\" is the\n"
  "name of a proxy, and \"Radius\" and \"Center\" are properties of the\n"
  "proxy.\n\n"
  "Vector properties with a single element can be defined as a single\n"
  "element (e.g., 2.5) or as a single-element array (e.g., [2.5]).\n"
  "Multi-element vector properties are specified as arrays (e.g., [0.0,\n"
  "1.0, 0.0]).\n\n"
  "The \"Set*\" and \"Get*\" methods of this class take a character string\n"
  "specifying the setting name. This string has the format\n"
  "\".level1.level2.level3[index]\". For example, to retrieve the\n"
  "y-component of the sphere center in the example JSON above, one would\n"
  "write \".sources.SphereSource.Center[1]\". Only literal values (int,\n"
  "double, and string) are available through this interface; access to\n"
  "non-leaf nodes in the JSON format is not provided.\n\n"
  "This class supports setting setting values. Settings modified through\n"
  "the \"Set*\" methods modify thet setting collection that has priority\n"
  "over all other collections. This collection can be saved to a text\n"
  "file in JSON format using the SaveSettingsToFile() method.\n\n"
  "Some convenience methods for getting and setting proxy property\n"
  "values are provided. GetProxySettings() sets the values of proxy\n"
  "properties that are defined in the setting collections.\n"
  "SetProxySettings() saves the non-default proxy properties in the\n"
  "highest-priority collection.\n\n";


static PyObject *
PyvtkSMSettings_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMSettings::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSettings_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMSettings::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSettings_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMSettings *tempr = vtkSMSettings::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSettings_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMSettings *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMSettings::NewInstance());

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
PyvtkSMSettings_GetInstance(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetInstance");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkSMSettings *tempr = vtkSMSettings::GetInstance();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSettings_AddCollectionFromString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCollectionFromString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  std::string temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->AddCollectionFromString(temp0, temp1) :
      op->vtkSMSettings::AddCollectionFromString(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSettings_AddCollectionFromFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCollectionFromFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  std::string temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->AddCollectionFromFile(temp0, temp1) :
      op->vtkSMSettings::AddCollectionFromFile(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSettings_ClearAllSettings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearAllSettings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearAllSettings();
    }
    else
    {
      op->vtkSMSettings::ClearAllSettings();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMSettings_DistributeSettings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DistributeSettings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->DistributeSettings() :
      op->vtkSMSettings::DistributeSettings());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSettings_SaveSettingsToFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveSettingsToFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->SaveSettingsToFile(temp0) :
      op->vtkSMSettings::SaveSettingsToFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSettings_HasSetting_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasSetting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasSetting(temp0) :
      op->vtkSMSettings::HasSetting(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMSettings_HasSetting_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasSetting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  const char *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->HasSetting(temp0, temp1) :
      op->vtkSMSettings::HasSetting(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMSettings_HasSetting(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSMSettings_HasSetting_s1(self, args);
    case 2:
      return PyvtkSMSettings_HasSetting_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "HasSetting");
  return nullptr;
}



static PyObject *
PyvtkSMSettings_GetSettingNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSettingNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetSettingNumberOfElements(temp0) :
      op->vtkSMSettings::GetSettingNumberOfElements(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSettings_GetSettingAsInt_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSettingAsInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetSettingAsInt(temp0, temp1) :
      op->vtkSMSettings::GetSettingAsInt(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMSettings_GetSettingAsInt_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSettingAsInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  const char *temp0 = nullptr;
  unsigned int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->GetSettingAsInt(temp0, temp1, temp2) :
      op->vtkSMSettings::GetSettingAsInt(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMSettings_GetSettingAsInt(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSMSettings_GetSettingAsInt_s1(self, args);
    case 3:
      return PyvtkSMSettings_GetSettingAsInt_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetSettingAsInt");
  return nullptr;
}



static PyObject *
PyvtkSMSettings_GetSettingAsDouble_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSettingAsDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  const char *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    double tempr = (ap.IsBound() ?
      op->GetSettingAsDouble(temp0, temp1) :
      op->vtkSMSettings::GetSettingAsDouble(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMSettings_GetSettingAsDouble_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSettingAsDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  const char *temp0 = nullptr;
  unsigned int temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    double tempr = (ap.IsBound() ?
      op->GetSettingAsDouble(temp0, temp1, temp2) :
      op->vtkSMSettings::GetSettingAsDouble(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMSettings_GetSettingAsDouble(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSMSettings_GetSettingAsDouble_s1(self, args);
    case 3:
      return PyvtkSMSettings_GetSettingAsDouble_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetSettingAsDouble");
  return nullptr;
}



static PyObject *
PyvtkSMSettings_GetSettingAsString_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSettingAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  const char *temp0 = nullptr;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetSettingAsString(temp0, temp1) :
      op->vtkSMSettings::GetSettingAsString(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMSettings_GetSettingAsString_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSettingAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  const char *temp0 = nullptr;
  unsigned int temp1;
  std::string temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetSettingAsString(temp0, temp1, temp2) :
      op->vtkSMSettings::GetSettingAsString(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMSettings_GetSettingAsString(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSMSettings_GetSettingAsString_s1(self, args);
    case 3:
      return PyvtkSMSettings_GetSettingAsString_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetSettingAsString");
  return nullptr;
}



static PyObject *
PyvtkSMSettings_GetPropertySetting_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropertySetting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  vtkSMProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProperty"))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPropertySetting(temp0) :
      op->vtkSMSettings::GetPropertySetting(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMSettings_GetPropertySetting_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropertySetting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  vtkSMProperty *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProperty") &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPropertySetting(temp0, temp1) :
      op->vtkSMSettings::GetPropertySetting(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMSettings_GetPropertySetting_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropertySetting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  const char *temp0 = nullptr;
  vtkSMProperty *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMProperty"))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPropertySetting(temp0, temp1) :
      op->vtkSMSettings::GetPropertySetting(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMSettings_GetPropertySetting_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropertySetting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  const char *temp0 = nullptr;
  vtkSMProperty *temp1 = nullptr;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMProperty") &&
      ap.GetValue(temp2))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPropertySetting(temp0, temp1, temp2) :
      op->vtkSMSettings::GetPropertySetting(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMSettings_GetPropertySetting_Methods[] = {
  {nullptr, PyvtkSMSettings_GetPropertySetting_s2, METH_VARARGS,
   "@Vd *vtkSMProperty"},
  {nullptr, PyvtkSMSettings_GetPropertySetting_s3, METH_VARARGS,
   "@zV *vtkSMProperty"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSMSettings_GetPropertySetting(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMSettings_GetPropertySetting_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSMSettings_GetPropertySetting_s1(self, args);
    case 3:
      return PyvtkSMSettings_GetPropertySetting_s4(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPropertySetting");
  return nullptr;
}



static PyObject *
PyvtkSMSettings_GetProxySettings_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxySettings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    bool tempr = (ap.IsBound() ?
      op->GetProxySettings(temp0) :
      op->vtkSMSettings::GetProxySettings(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMSettings_GetProxySettings_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxySettings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  vtkSMProxy *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->GetProxySettings(temp0, temp1) :
      op->vtkSMSettings::GetProxySettings(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMSettings_GetProxySettings_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxySettings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  const char *temp0 = nullptr;
  vtkSMProxy *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMProxy"))
  {
    bool tempr = (ap.IsBound() ?
      op->GetProxySettings(temp0, temp1) :
      op->vtkSMSettings::GetProxySettings(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMSettings_GetProxySettings_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxySettings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  const char *temp0 = nullptr;
  vtkSMProxy *temp1 = nullptr;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMProxy") &&
      ap.GetValue(temp2))
  {
    bool tempr = (ap.IsBound() ?
      op->GetProxySettings(temp0, temp1, temp2) :
      op->vtkSMSettings::GetProxySettings(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMSettings_GetProxySettings_Methods[] = {
  {nullptr, PyvtkSMSettings_GetProxySettings_s2, METH_VARARGS,
   "@Vd *vtkSMProxy"},
  {nullptr, PyvtkSMSettings_GetProxySettings_s3, METH_VARARGS,
   "@zV *vtkSMProxy"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSMSettings_GetProxySettings(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMSettings_GetProxySettings_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSMSettings_GetProxySettings_s1(self, args);
    case 3:
      return PyvtkSMSettings_GetProxySettings_s4(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetProxySettings");
  return nullptr;
}



static PyObject *
PyvtkSMSettings_GetSettingDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSettingDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetSettingDescription(temp0) :
      op->vtkSMSettings::GetSettingDescription(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSettings_SetSetting_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSetting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSetting(temp0, temp1);
    }
    else
    {
      op->vtkSMSettings::SetSetting(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMSettings_SetSetting_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSetting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  const char *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSetting(temp0, temp1);
    }
    else
    {
      op->vtkSMSettings::SetSetting(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMSettings_SetSetting_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSetting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  const char *temp0 = nullptr;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSetting(temp0, temp1);
    }
    else
    {
      op->vtkSMSettings::SetSetting(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMSettings_SetSetting_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSetting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  const char *temp0 = nullptr;
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
      op->SetSetting(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSMSettings::SetSetting(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMSettings_SetSetting_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSetting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  const char *temp0 = nullptr;
  unsigned int temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetSetting(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSMSettings::SetSetting(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMSettings_SetSetting_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSetting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  const char *temp0 = nullptr;
  unsigned int temp1;
  std::string temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetSetting(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSMSettings::SetSetting(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMSettings_SetSetting_Methods[] = {
  {nullptr, PyvtkSMSettings_SetSetting_s1, METH_VARARGS,
   "@zi"},
  {nullptr, PyvtkSMSettings_SetSetting_s2, METH_VARARGS,
   "@zd"},
  {nullptr, PyvtkSMSettings_SetSetting_s3, METH_VARARGS,
   "@zs"},
  {nullptr, PyvtkSMSettings_SetSetting_s4, METH_VARARGS,
   "@zIi"},
  {nullptr, PyvtkSMSettings_SetSetting_s5, METH_VARARGS,
   "@zId"},
  {nullptr, PyvtkSMSettings_SetSetting_s6, METH_VARARGS,
   "@zIs"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSMSettings_SetSetting(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMSettings_SetSetting_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSetting");
  return nullptr;
}



static PyObject *
PyvtkSMSettings_SetProxySettings_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProxySettings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  vtkSMProxy *temp0 = nullptr;
  vtkSMPropertyIterator *temp1 = NULL;
  bool temp2 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp1, "vtkSMPropertyIterator")) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->SetProxySettings(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSMSettings::SetProxySettings(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMSettings_SetProxySettings_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProxySettings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  const char *temp0 = nullptr;
  vtkSMProxy *temp1 = nullptr;
  vtkSMPropertyIterator *temp2 = NULL;
  bool temp3 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 4) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMProxy") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp2, "vtkSMPropertyIterator")) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    if (ap.IsBound())
    {
      op->SetProxySettings(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkSMSettings::SetProxySettings(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMSettings_SetProxySettings_Methods[] = {
  {nullptr, PyvtkSMSettings_SetProxySettings_s1, METH_VARARGS,
   "@V|Vq *vtkSMProxy *vtkSMPropertyIterator"},
  {nullptr, PyvtkSMSettings_SetProxySettings_s2, METH_VARARGS,
   "@zV|Vq *vtkSMProxy *vtkSMPropertyIterator"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSMSettings_SetProxySettings(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMSettings_SetProxySettings_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSMSettings_SetProxySettings_s1(self, args);
    case 4:
      return PyvtkSMSettings_SetProxySettings_s2(self, args);
    case 2:
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetProxySettings");
  return nullptr;
}



static PyObject *
PyvtkSMSettings_SetSettingDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSettingDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettings *op = static_cast<vtkSMSettings *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSettingDescription(temp0, temp1);
    }
    else
    {
      op->vtkSMSettings::SetSettingDescription(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMSettings_Methods[] = {
  {"IsTypeOf", PyvtkSMSettings_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMSettings_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMSettings_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMSettings\nC++: static vtkSMSettings *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMSettings_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMSettings\nC++: vtkSMSettings *NewInstance()\n\n"},
  {"GetInstance", PyvtkSMSettings_GetInstance, METH_VARARGS,
   "V.GetInstance() -> vtkSMSettings\nC++: static vtkSMSettings *GetInstance()\n\nGet singleton instance.\n"},
  {"AddCollectionFromString", PyvtkSMSettings_AddCollectionFromString, METH_VARARGS,
   "V.AddCollectionFromString(string, float) -> bool\nC++: bool AddCollectionFromString(const std::string &settings,\n    double priority)\n\nAdd settings from a string. The string should contain valid\nJSON-formatted text. The \"priority\" indicates how to treat a\nsetting that has definitions in more than one setting\ncollections. If two setting collections contain values for the\nsame setting, then the setting from the collection with higher\npriority will be used.\n"},
  {"AddCollectionFromFile", PyvtkSMSettings_AddCollectionFromFile, METH_VARARGS,
   "V.AddCollectionFromFile(string, float) -> bool\nC++: bool AddCollectionFromFile(const std::string &fileName,\n    double priority)\n\nThe same as AddCollectionFromString, but this method reads the\nsettings string from the named file. The fileName should be a\nfull path.\n"},
  {"ClearAllSettings", PyvtkSMSettings_ClearAllSettings, METH_VARARGS,
   "V.ClearAllSettings()\nC++: void ClearAllSettings()\n\nClear out all settings, deleting all collections.\n"},
  {"DistributeSettings", PyvtkSMSettings_DistributeSettings, METH_VARARGS,
   "V.DistributeSettings() -> bool\nC++: bool DistributeSettings()\n\nDistribute setting collections to all processes if in batch\nsymmetric mode.\n"},
  {"SaveSettingsToFile", PyvtkSMSettings_SaveSettingsToFile, METH_VARARGS,
   "V.SaveSettingsToFile(string) -> bool\nC++: bool SaveSettingsToFile(const std::string &filePath)\n\nSave highest priority setting collection to file.\n"},
  {"HasSetting", PyvtkSMSettings_HasSetting, METH_VARARGS,
   "V.HasSetting(string) -> bool\nC++: bool HasSetting(const char *settingName)\nV.HasSetting(string, float) -> bool\nC++: bool HasSetting(const char *settingName, double maxPriority)\n\nCheck whether a setting is defined for the requested names.\n"},
  {"GetSettingNumberOfElements", PyvtkSMSettings_GetSettingNumberOfElements, METH_VARARGS,
   "V.GetSettingNumberOfElements(string) -> int\nC++: unsigned int GetSettingNumberOfElements(\n    const char *settingName)\n\nGet the number of elements in a setting.\n"},
  {"GetSettingAsInt", PyvtkSMSettings_GetSettingAsInt, METH_VARARGS,
   "V.GetSettingAsInt(string, int) -> int\nC++: int GetSettingAsInt(const char *settingName,\n    int defaultValue)\nV.GetSettingAsInt(string, int, int) -> int\nC++: int GetSettingAsInt(const char *settingName,\n    unsigned int index, int defaultValue)\n\nGet a vector setting as a scalar value. Shortcut for\nGetSettingAs...(settingName, 0, defaultValue)\n"},
  {"GetSettingAsDouble", PyvtkSMSettings_GetSettingAsDouble, METH_VARARGS,
   "V.GetSettingAsDouble(string, float) -> float\nC++: double GetSettingAsDouble(const char *settingName,\n    double defaultValue)\nV.GetSettingAsDouble(string, int, float) -> float\nC++: double GetSettingAsDouble(const char *settingName,\n    unsigned int index, double defaultValue)\n\nGet a vector setting as a scalar value. Shortcut for\nGetSettingAs...(settingName, 0, defaultValue)\n"},
  {"GetSettingAsString", PyvtkSMSettings_GetSettingAsString, METH_VARARGS,
   "V.GetSettingAsString(string, string) -> string\nC++: std::string GetSettingAsString(const char *settingName,\n    const std::string &defaultValue)\nV.GetSettingAsString(string, int, string) -> string\nC++: std::string GetSettingAsString(const char *settingName,\n    unsigned int index, const std::string &defaultValue)\n\nGet a vector setting as a scalar value. Shortcut for\nGetSettingAs...(settingName, 0, defaultValue)\n"},
  {"GetPropertySetting", PyvtkSMSettings_GetPropertySetting, METH_VARARGS,
   "V.GetPropertySetting(vtkSMProperty) -> bool\nC++: bool GetPropertySetting(vtkSMProperty *property)\nV.GetPropertySetting(vtkSMProperty, float) -> bool\nC++: bool GetPropertySetting(vtkSMProperty *property,\n    double maxPriority)\nV.GetPropertySetting(string, vtkSMProperty) -> bool\nC++: bool GetPropertySetting(const char *prefix,\n    vtkSMProperty *property)\nV.GetPropertySetting(string, vtkSMProperty, float) -> bool\nC++: bool GetPropertySetting(const char *prefix,\n    vtkSMProperty *property, double maxPriority)\n\nSet the property value from the setting collections.\n"},
  {"GetProxySettings", PyvtkSMSettings_GetProxySettings, METH_VARARGS,
   "V.GetProxySettings(vtkSMProxy) -> bool\nC++: bool GetProxySettings(vtkSMProxy *proxy)\nV.GetProxySettings(vtkSMProxy, float) -> bool\nC++: bool GetProxySettings(vtkSMProxy *proxy, double maxPriority)\nV.GetProxySettings(string, vtkSMProxy) -> bool\nC++: bool GetProxySettings(const char *prefix, vtkSMProxy *proxy)\nV.GetProxySettings(string, vtkSMProxy, float) -> bool\nC++: bool GetProxySettings(const char *prefix, vtkSMProxy *proxy,\n    double maxPriority)\n\nSet the property values in a vtkSMProxy from the setting\ncollections.\n"},
  {"GetSettingDescription", PyvtkSMSettings_GetSettingDescription, METH_VARARGS,
   "V.GetSettingDescription(string) -> string\nC++: std::string GetSettingDescription(const char *settingName)\n\nGet description for a setting.\n"},
  {"SetSetting", PyvtkSMSettings_SetSetting, METH_VARARGS,
   "V.SetSetting(string, int)\nC++: void SetSetting(const char *settingName, int value)\nV.SetSetting(string, float)\nC++: void SetSetting(const char *settingName, double value)\nV.SetSetting(string, string)\nC++: void SetSetting(const char *settingName,\n    const std::string &value)\nV.SetSetting(string, int, int)\nC++: void SetSetting(const char *settingName, unsigned int index,\n    int value)\nV.SetSetting(string, int, float)\nC++: void SetSetting(const char *settingName, unsigned int index,\n    double value)\nV.SetSetting(string, int, string)\nC++: void SetSetting(const char *settingName, unsigned int index,\n    const std::string &value)\n\nSet setting of a given name in the highest priority collection.\nShortcut for SetSetting(settingName, 0, value). Useful for\nsetting scalar values.\n"},
  {"SetProxySettings", PyvtkSMSettings_SetProxySettings, METH_VARARGS,
   "V.SetProxySettings(vtkSMProxy, vtkSMPropertyIterator, bool)\nC++: void SetProxySettings(vtkSMProxy *proxy,\n    vtkSMPropertyIterator *propertyIt=NULL,\n    bool skipPropertiesWithDynamicDomains=true)\nV.SetProxySettings(string, vtkSMProxy, vtkSMPropertyIterator,\n    bool)\nC++: void SetProxySettings(const char *prefix, vtkSMProxy *proxy,\n    vtkSMPropertyIterator *propertyIt=NULL,\n    bool skipPropertiesWithDynamicDomains=true)\n\nSave non-default settings in the current user settings. Use the\noptional 'propertyIt' to limit the serialization to a subset of\nproperties (typically using vtkSMPropertyIterator subclasses like\nvtkSMNamedPropertyIterator).skipPropertiesWithDynamicDomains when\ntrue (default) ensures that we skip serializing properties that\nhave domains whose values change at runtime.\n"},
  {"SetSettingDescription", PyvtkSMSettings_SetSettingDescription, METH_VARARGS,
   "V.SetSettingDescription(string, string)\nC++: void SetSettingDescription(const char *settingName,\n    const char *description)\n\nSet the description of a setting.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMSettings_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMSettings", // tp_name
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
  PyvtkSMSettings_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMSettings_StaticNew()
{
  return vtkSMSettings::New();
}

PyObject *PyvtkSMSettings_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMSettings_Type, PyvtkSMSettings_Methods,
    "vtkSMSettings",
 &PyvtkSMSettings_StaticNew);

  PyTypeObject *pytype = &PyvtkSMSettings_Type;

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

void PyVTKAddFile_vtkSMSettings(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMSettings_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMSettings", o) != 0)
  {
    Py_DECREF(o);
  }

}

