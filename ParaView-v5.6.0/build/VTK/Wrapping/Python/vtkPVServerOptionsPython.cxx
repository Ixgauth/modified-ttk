// python wrapper for vtkPVServerOptions
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
#include "vtkPVServerOptions.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVServerOptions(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVServerOptions_ClassNew(); }

#ifndef DECLARED_PyvtkPVOptions_ClassNew
extern "C" { PyObject *PyvtkPVOptions_ClassNew(); }
#define DECLARED_PyvtkPVOptions_ClassNew
#endif

static const char *PyvtkPVServerOptions_Doc =
  "vtkPVServerOptions - ParaView options for server executables.\n\n"
  "Superclass: vtkPVOptions\n\n"
  "An object of this class represents a storage for command line options\n"
  "for various server executables.\n\n"
  "These options can be retrieved during run-time, set using\n"
  "configuration file or using Command Line Arguments.\n\n";


static PyObject *
PyvtkPVServerOptions_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVServerOptions::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVServerOptions_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerOptions *op = static_cast<vtkPVServerOptions *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVServerOptions::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVServerOptions_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVServerOptions *tempr = vtkPVServerOptions::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVServerOptions_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerOptions *op = static_cast<vtkPVServerOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVServerOptions *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVServerOptions::NewInstance());

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
PyvtkPVServerOptions_GetClientHostName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClientHostName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerOptions *op = static_cast<vtkPVServerOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetClientHostName() :
      op->vtkPVServerOptions::GetClientHostName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVServerOptions_GetServerPort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetServerPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerOptions *op = static_cast<vtkPVServerOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetServerPort() :
      op->vtkPVServerOptions::GetServerPort());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVServerOptions_GetEyeSeparation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEyeSeparation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerOptions *op = static_cast<vtkPVServerOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEyeSeparation() :
      op->vtkPVServerOptions::GetEyeSeparation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVServerOptions_GetNumberOfMachines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfMachines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerOptions *op = static_cast<vtkPVServerOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfMachines() :
      op->vtkPVServerOptions::GetNumberOfMachines());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVServerOptions_GetMachineName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMachineName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerOptions *op = static_cast<vtkPVServerOptions *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetMachineName(temp0) :
      op->vtkPVServerOptions::GetMachineName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVServerOptions_GetDisplayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerOptions *op = static_cast<vtkPVServerOptions *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDisplayName(temp0) :
      op->vtkPVServerOptions::GetDisplayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVServerOptions_GetGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerOptions *op = static_cast<vtkPVServerOptions *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetGeometry(temp0) :
      op->vtkPVServerOptions::GetGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVServerOptions_GetFullScreen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFullScreen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerOptions *op = static_cast<vtkPVServerOptions *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetFullScreen(temp0) :
      op->vtkPVServerOptions::GetFullScreen(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVServerOptions_GetShowBorders(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowBorders");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerOptions *op = static_cast<vtkPVServerOptions *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetShowBorders(temp0) :
      op->vtkPVServerOptions::GetShowBorders(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVServerOptions_GetLowerLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLowerLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerOptions *op = static_cast<vtkPVServerOptions *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetLowerLeft(temp0) :
      op->vtkPVServerOptions::GetLowerLeft(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVServerOptions_GetLowerRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLowerRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerOptions *op = static_cast<vtkPVServerOptions *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetLowerRight(temp0) :
      op->vtkPVServerOptions::GetLowerRight(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVServerOptions_GetUpperRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpperRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerOptions *op = static_cast<vtkPVServerOptions *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetUpperRight(temp0) :
      op->vtkPVServerOptions::GetUpperRight(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVServerOptions_GetCaveBoundsSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCaveBoundsSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerOptions *op = static_cast<vtkPVServerOptions *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCaveBoundsSet(temp0) :
      op->vtkPVServerOptions::GetCaveBoundsSet(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVServerOptions_GetStereoType_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStereoType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerOptions *op = static_cast<vtkPVServerOptions *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStereoType(temp0) :
      op->vtkPVServerOptions::GetStereoType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPVServerOptions_GetStereoType_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStereoType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVServerOptions *op = static_cast<vtkPVServerOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetStereoType() :
      op->vtkPVServerOptions::GetStereoType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPVServerOptions_GetStereoType(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPVServerOptions_GetStereoType_s1(self, args);
    case 0:
      return PyvtkPVServerOptions_GetStereoType_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetStereoType");
  return nullptr;
}


static PyMethodDef PyvtkPVServerOptions_Methods[] = {
  {"IsTypeOf", PyvtkPVServerOptions_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVServerOptions_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVServerOptions_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVServerOptions\nC++: static vtkPVServerOptions *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVServerOptions_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVServerOptions\nC++: vtkPVServerOptions *NewInstance()\n\n"},
  {"GetClientHostName", PyvtkPVServerOptions_GetClientHostName, METH_VARARGS,
   "V.GetClientHostName() -> string\nC++: virtual char *GetClientHostName()\n\nName of the client-host. By default, the client are server are\nassumed to be on the same host.\n"},
  {"GetServerPort", PyvtkPVServerOptions_GetServerPort, METH_VARARGS,
   "V.GetServerPort() -> int\nC++: virtual int GetServerPort()\n\nThe configuration port for this process. The interpretation of\nthe port number depends on the configuration and process type.\n"},
  {"GetEyeSeparation", PyvtkPVServerOptions_GetEyeSeparation, METH_VARARGS,
   "V.GetEyeSeparation() -> float\nC++: double GetEyeSeparation()\n\nGet information about machines used in a data or render server.\n"},
  {"GetNumberOfMachines", PyvtkPVServerOptions_GetNumberOfMachines, METH_VARARGS,
   "V.GetNumberOfMachines() -> int\nC++: unsigned int GetNumberOfMachines()\n\nGet information about machines used in a data or render server.\n"},
  {"GetMachineName", PyvtkPVServerOptions_GetMachineName, METH_VARARGS,
   "V.GetMachineName(int) -> string\nC++: const char *GetMachineName(unsigned int idx)\n\nGet information about machines used in a data or render server.\n"},
  {"GetDisplayName", PyvtkPVServerOptions_GetDisplayName, METH_VARARGS,
   "V.GetDisplayName(int) -> string\nC++: const char *GetDisplayName(unsigned int idx)\n\nGet information about machines used in a data or render server.\n"},
  {"GetGeometry", PyvtkPVServerOptions_GetGeometry, METH_VARARGS,
   "V.GetGeometry(int) -> (int, ...)\nC++: int *GetGeometry(unsigned int idx)\n\nGet information about machines used in a data or render server.\n"},
  {"GetFullScreen", PyvtkPVServerOptions_GetFullScreen, METH_VARARGS,
   "V.GetFullScreen(int) -> bool\nC++: bool GetFullScreen(unsigned int idx)\n\nGet information about machines used in a data or render server.\n"},
  {"GetShowBorders", PyvtkPVServerOptions_GetShowBorders, METH_VARARGS,
   "V.GetShowBorders(int) -> bool\nC++: bool GetShowBorders(unsigned int idx)\n\nGet information about machines used in a data or render server.\n"},
  {"GetLowerLeft", PyvtkPVServerOptions_GetLowerLeft, METH_VARARGS,
   "V.GetLowerLeft(int) -> (float, ...)\nC++: double *GetLowerLeft(unsigned int idx)\n\nGet information about machines used in a data or render server.\n"},
  {"GetLowerRight", PyvtkPVServerOptions_GetLowerRight, METH_VARARGS,
   "V.GetLowerRight(int) -> (float, ...)\nC++: double *GetLowerRight(unsigned int idx)\n\nGet information about machines used in a data or render server.\n"},
  {"GetUpperRight", PyvtkPVServerOptions_GetUpperRight, METH_VARARGS,
   "V.GetUpperRight(int) -> (float, ...)\nC++: double *GetUpperRight(unsigned int idx)\n\nGet information about machines used in a data or render server.\n"},
  {"GetCaveBoundsSet", PyvtkPVServerOptions_GetCaveBoundsSet, METH_VARARGS,
   "V.GetCaveBoundsSet(int) -> bool\nC++: bool GetCaveBoundsSet(unsigned int idx)\n\nGet information about machines used in a data or render server.\n"},
  {"GetStereoType", PyvtkPVServerOptions_GetStereoType, METH_VARARGS,
   "V.GetStereoType(int) -> int\nC++: int GetStereoType(unsigned int idx)\nV.GetStereoType() -> string\nC++: char *GetStereoType() override;\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVServerOptions_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreCorePython.vtkPVServerOptions", // tp_name
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
  PyvtkPVServerOptions_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVServerOptions_StaticNew()
{
  return vtkPVServerOptions::New();
}

PyObject *PyvtkPVServerOptions_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVServerOptions_Type, PyvtkPVServerOptions_Methods,
    "vtkPVServerOptions",
 &PyvtkPVServerOptions_StaticNew);

  PyTypeObject *pytype = &PyvtkPVServerOptions_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPVOptions_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVServerOptions(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVServerOptions_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVServerOptions", o) != 0)
  {
    Py_DECREF(o);
  }

}

