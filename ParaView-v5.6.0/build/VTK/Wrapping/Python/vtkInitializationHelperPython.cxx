// python wrapper for vtkInitializationHelper
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
#include "vtkInitializationHelper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkInitializationHelper(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkInitializationHelper_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkInitializationHelper_Doc =
  "vtkInitializationHelper - help class for python modules\n\n"
  "Superclass: vtkObject\n\n"
  "This class is used by the python modules when they are loaded from\n"
  "python (as opposed to pvpython). It simply initializes the server\n"
  "manager so that it can be used.\n\n";


static PyObject *
PyvtkInitializationHelper_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkInitializationHelper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInitializationHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInitializationHelper *op = static_cast<vtkInitializationHelper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInitializationHelper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInitializationHelper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkInitializationHelper *tempr = vtkInitializationHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInitializationHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInitializationHelper *op = static_cast<vtkInitializationHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInitializationHelper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInitializationHelper::NewInstance());

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
PyvtkInitializationHelper_Initialize_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Initialize");

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkInitializationHelper::Initialize(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInitializationHelper_Initialize_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Initialize");

  const char *temp0 = nullptr;
  int temp1;
  vtkPVOptions *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkPVOptions"))
  {
    vtkInitializationHelper::Initialize(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInitializationHelper_Initialize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkInitializationHelper_Initialize_s1(self, args);
    case 3:
      return PyvtkInitializationHelper_Initialize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Initialize");
  return nullptr;
}



static PyObject *
PyvtkInitializationHelper_Finalize(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Finalize");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInitializationHelper::Finalize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInitializationHelper_StandaloneInitialize(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "StandaloneInitialize");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInitializationHelper::StandaloneInitialize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInitializationHelper_StandaloneFinalize(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "StandaloneFinalize");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInitializationHelper::StandaloneFinalize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInitializationHelper_SetLoadSettingsFilesDuringInitialization(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetLoadSettingsFilesDuringInitialization");

  bool temp0 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkInitializationHelper::SetLoadSettingsFilesDuringInitialization(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInitializationHelper_GetLoadSettingsFilesDuringInitialization(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetLoadSettingsFilesDuringInitialization");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    bool tempr = vtkInitializationHelper::GetLoadSettingsFilesDuringInitialization();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInitializationHelper_SetOrganizationName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetOrganizationName");

  std::string temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkInitializationHelper::SetOrganizationName(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInitializationHelper_GetOrganizationName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetOrganizationName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const std::string *tempr = &vtkInitializationHelper::GetOrganizationName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInitializationHelper_SetApplicationName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetApplicationName");

  std::string temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkInitializationHelper::SetApplicationName(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInitializationHelper_GetApplicationName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetApplicationName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const std::string *tempr = &vtkInitializationHelper::GetApplicationName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInitializationHelper_GetUserSettingsDirectory(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetUserSettingsDirectory");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::string tempr = vtkInitializationHelper::GetUserSettingsDirectory();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInitializationHelper_GetUserSettingsFilePath(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetUserSettingsFilePath");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::string tempr = vtkInitializationHelper::GetUserSettingsFilePath();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkInitializationHelper_Methods[] = {
  {"IsTypeOf", PyvtkInitializationHelper_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkInitializationHelper_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkInitializationHelper_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkInitializationHelper\nC++: static vtkInitializationHelper *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkInitializationHelper_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkInitializationHelper\nC++: vtkInitializationHelper *NewInstance()\n\n"},
  {"Initialize", PyvtkInitializationHelper_Initialize, METH_VARARGS,
   "V.Initialize(string, int)\nC++: static void Initialize(const char *executable, int type)\nV.Initialize(string, int, vtkPVOptions)\nC++: static void Initialize(const char *executable, int type,\n    vtkPVOptions *options)\n\nInitializes the server manager. Do not use the server manager\nbefore calling this.\n"},
  {"Finalize", PyvtkInitializationHelper_Finalize, METH_VARARGS,
   "V.Finalize()\nC++: static void Finalize()\n\nFinalizes the server manager. Do not use the server manager after\ncalling this.\n"},
  {"StandaloneInitialize", PyvtkInitializationHelper_StandaloneInitialize, METH_VARARGS,
   "V.StandaloneInitialize()\nC++: static void StandaloneInitialize()\n\nInitialization for standalone executables linking against a PV\nlibrary. This is needed to insure that linker does not remove\nobject factories' auto init during static linking. It also cleans\nup after protobuf.\n"},
  {"StandaloneFinalize", PyvtkInitializationHelper_StandaloneFinalize, METH_VARARGS,
   "V.StandaloneFinalize()\nC++: static void StandaloneFinalize()\n\nInitialization for standalone executables linking against a PV\nlibrary. This is needed to insure that linker does not remove\nobject factories' auto init during static linking. It also cleans\nup after protobuf.\n"},
  {"SetLoadSettingsFilesDuringInitialization", PyvtkInitializationHelper_SetLoadSettingsFilesDuringInitialization, METH_VARARGS,
   "V.SetLoadSettingsFilesDuringInitialization(bool)\nC++: static void SetLoadSettingsFilesDuringInitialization(bool)\n\nDuring initialization, vtkInitializationHelper reads \"settings\"\nfiles for configuring vtkSMSettings. To disable this processing\nof the settings file for an application (e.g. in Catalyst), turn\nthis off. On by default.\n"},
  {"GetLoadSettingsFilesDuringInitialization", PyvtkInitializationHelper_GetLoadSettingsFilesDuringInitialization, METH_VARARGS,
   "V.GetLoadSettingsFilesDuringInitialization() -> bool\nC++: static bool GetLoadSettingsFilesDuringInitialization()\n\nDuring initialization, vtkInitializationHelper reads \"settings\"\nfiles for configuring vtkSMSettings. To disable this processing\nof the settings file for an application (e.g. in Catalyst), turn\nthis off. On by default.\n"},
  {"SetOrganizationName", PyvtkInitializationHelper_SetOrganizationName, METH_VARARGS,
   "V.SetOrganizationName(string)\nC++: static void SetOrganizationName(\n    const std::string &organizationName)\n\nSets the organization producing this application. This is\n\"ParaView\" by default, but can be different for branded\napplications.\n"},
  {"GetOrganizationName", PyvtkInitializationHelper_GetOrganizationName, METH_VARARGS,
   "V.GetOrganizationName() -> string\nC++: static const std::string &GetOrganizationName()\n\nSets the organization producing this application. This is\n\"ParaView\" by default, but can be different for branded\napplications.\n"},
  {"SetApplicationName", PyvtkInitializationHelper_SetApplicationName, METH_VARARGS,
   "V.SetApplicationName(string)\nC++: static void SetApplicationName(const std::string &appName)\n\nSets the name of the application. This is \"ParaView\" by default,\nbut can be different for branded applications.\n"},
  {"GetApplicationName", PyvtkInitializationHelper_GetApplicationName, METH_VARARGS,
   "V.GetApplicationName() -> string\nC++: static const std::string &GetApplicationName()\n\nSets the name of the application. This is \"ParaView\" by default,\nbut can be different for branded applications.\n"},
  {"GetUserSettingsDirectory", PyvtkInitializationHelper_GetUserSettingsDirectory, METH_VARARGS,
   "V.GetUserSettingsDirectory() -> string\nC++: static std::string GetUserSettingsDirectory()\n\nGet directory for user settings file. The last character is\nalways the file path separator appropriate for the system.\n"},
  {"GetUserSettingsFilePath", PyvtkInitializationHelper_GetUserSettingsFilePath, METH_VARARGS,
   "V.GetUserSettingsFilePath() -> string\nC++: static std::string GetUserSettingsFilePath()\n\nGet file path for the user settings file.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkInitializationHelper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerApplicationPython.vtkInitializationHelper", // tp_name
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
  PyvtkInitializationHelper_Doc, // tp_doc
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

PyObject *PyvtkInitializationHelper_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkInitializationHelper_Type, PyvtkInitializationHelper_Methods,
    "vtkInitializationHelper",
 nullptr);

  PyTypeObject *pytype = &PyvtkInitializationHelper_Type;

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

void PyVTKAddFile_vtkInitializationHelper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkInitializationHelper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkInitializationHelper", o) != 0)
  {
    Py_DECREF(o);
  }

}

