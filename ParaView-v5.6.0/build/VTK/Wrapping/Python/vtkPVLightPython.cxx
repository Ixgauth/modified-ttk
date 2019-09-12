// python wrapper for vtkPVLight
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
#include "vtkPVLight.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVLight(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVLight_ClassNew(); }

#ifndef DECLARED_PyvtkLight_ClassNew
extern "C" { PyObject *PyvtkLight_ClassNew(); }
#define DECLARED_PyvtkLight_ClassNew
#endif

static const char *PyvtkPVLight_Doc =
  "vtkPVLight - vtkPVLight extends vtkLight with controls that are\nspecific to\n\n"
  "Superclass: vtkLight\n\n"
  "OSPRay. When OSPRay is not enabled, at compile or runtime, they do\n"
  "nothing.\n\n";


static PyObject *
PyvtkPVLight_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVLight::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVLight_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLight *op = static_cast<vtkPVLight *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVLight::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVLight_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVLight *tempr = vtkPVLight::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVLight_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLight *op = static_cast<vtkPVLight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVLight *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVLight::NewInstance());

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
PyvtkPVLight_SetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLight *op = static_cast<vtkPVLight *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRadius(temp0);
    }
    else
    {
      op->vtkPVLight::SetRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVLight_LIGHT_NAME(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "LIGHT_NAME");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationStringKey *tempr = vtkPVLight::LIGHT_NAME();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVLight_SetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLight *op = static_cast<vtkPVLight *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetName(temp0);
    }
    else
    {
      op->vtkPVLight::SetName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVLight_GetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLight *op = static_cast<vtkPVLight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetName() :
      op->vtkPVLight::GetName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVLight_SetLightType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLightType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLight *op = static_cast<vtkPVLight *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLightType(temp0);
    }
    else
    {
      op->vtkPVLight::SetLightType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVLight_Methods[] = {
  {"IsTypeOf", PyvtkPVLight_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVLight_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVLight_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVLight\nC++: static vtkPVLight *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVLight_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVLight\nC++: vtkPVLight *NewInstance()\n\n"},
  {"SetRadius", PyvtkPVLight_SetRadius, METH_VARARGS,
   "V.SetRadius(float)\nC++: void SetRadius(double r)\n\nWhen not, 0.0, the light will produce soft shadows.\n"},
  {"LIGHT_NAME", PyvtkPVLight_LIGHT_NAME, METH_VARARGS,
   "V.LIGHT_NAME() -> vtkInformationStringKey\nC++: static vtkInformationStringKey *LIGHT_NAME()\n\n"},
  {"SetName", PyvtkPVLight_SetName, METH_VARARGS,
   "V.SetName(string)\nC++: void SetName(const std::string &name)\n\nName to identify this light to the user.\n"},
  {"GetName", PyvtkPVLight_GetName, METH_VARARGS,
   "V.GetName() -> string\nC++: std::string GetName()\n\n"},
  {"SetLightType", PyvtkPVLight_SetLightType, METH_VARARGS,
   "V.SetLightType(int)\nC++: virtual void SetLightType(int t) override;\n\nOverridden for special treatment of OSPRay specific ambient light\ntype.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVLight_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkPVLight", // tp_name
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
  PyvtkPVLight_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVLight_StaticNew()
{
  return vtkPVLight::New();
}

PyObject *PyvtkPVLight_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVLight_Type, PyvtkPVLight_Methods,
    "vtkPVLight",
 &PyvtkPVLight_StaticNew);

  PyTypeObject *pytype = &PyvtkPVLight_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkLight_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVLight(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVLight_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVLight", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyInt_FromLong(4);
  if (o)
  {
    PyDict_SetItemString(dict, "VTK_LIGHT_TYPE_AMBIENT_LIGHT", o);
    Py_DECREF(o);
  }
}

