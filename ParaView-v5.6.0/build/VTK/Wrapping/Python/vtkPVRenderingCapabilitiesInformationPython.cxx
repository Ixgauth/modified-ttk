// python wrapper for vtkPVRenderingCapabilitiesInformation
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
#include "vtkPVRenderingCapabilitiesInformation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVRenderingCapabilitiesInformation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVRenderingCapabilitiesInformation_ClassNew(); }

#ifndef DECLARED_PyvtkPVInformation_ClassNew
extern "C" { PyObject *PyvtkPVInformation_ClassNew(); }
#define DECLARED_PyvtkPVInformation_ClassNew
#endif

static const char *PyvtkPVRenderingCapabilitiesInformation_Doc =
  "vtkPVRenderingCapabilitiesInformation - provides information about\nrendering capabilities.\n\n"
  "Superclass: vtkPVInformation\n\n"
;

static PyTypeObject PyvtkPVRenderingCapabilitiesInformation_CapabilitiesMask_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkPVRenderingCapabilitiesInformation.CapabilitiesMask", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkPVRenderingCapabilitiesInformation_CapabilitiesMask_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkPVRenderingCapabilitiesInformation_CapabilitiesMask_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkPVRenderingCapabilitiesInformation_CapabilitiesMask_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkPVRenderingCapabilitiesInformation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVRenderingCapabilitiesInformation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderingCapabilitiesInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderingCapabilitiesInformation *op = static_cast<vtkPVRenderingCapabilitiesInformation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVRenderingCapabilitiesInformation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderingCapabilitiesInformation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVRenderingCapabilitiesInformation *tempr = vtkPVRenderingCapabilitiesInformation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderingCapabilitiesInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderingCapabilitiesInformation *op = static_cast<vtkPVRenderingCapabilitiesInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVRenderingCapabilitiesInformation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVRenderingCapabilitiesInformation::NewInstance());

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
PyvtkPVRenderingCapabilitiesInformation_GetCapabilities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCapabilities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderingCapabilitiesInformation *op = static_cast<vtkPVRenderingCapabilitiesInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetCapabilities() :
      op->vtkPVRenderingCapabilitiesInformation::GetCapabilities());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderingCapabilitiesInformation_Supports_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Supports");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderingCapabilitiesInformation *op = static_cast<vtkPVRenderingCapabilitiesInformation *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->Supports(temp0) :
      op->vtkPVRenderingCapabilitiesInformation::Supports(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPVRenderingCapabilitiesInformation_Supports_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Supports");

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = vtkPVRenderingCapabilitiesInformation::Supports(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPVRenderingCapabilitiesInformation_Supports(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkPVRenderingCapabilitiesInformation_Supports_s1(self, args);
    case 2:
      return PyvtkPVRenderingCapabilitiesInformation_Supports_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Supports");
  return nullptr;
}



static PyObject *
PyvtkPVRenderingCapabilitiesInformation_GetLocalCapabilities(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetLocalCapabilities");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    unsigned int tempr = vtkPVRenderingCapabilitiesInformation::GetLocalCapabilities();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderingCapabilitiesInformation_CopyFromObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderingCapabilitiesInformation *op = static_cast<vtkPVRenderingCapabilitiesInformation *>(vp);

  vtkObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
  {
    if (ap.IsBound())
    {
      op->CopyFromObject(temp0);
    }
    else
    {
      op->vtkPVRenderingCapabilitiesInformation::CopyFromObject(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderingCapabilitiesInformation_AddInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderingCapabilitiesInformation *op = static_cast<vtkPVRenderingCapabilitiesInformation *>(vp);

  vtkPVInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVInformation"))
  {
    if (ap.IsBound())
    {
      op->AddInformation(temp0);
    }
    else
    {
      op->vtkPVRenderingCapabilitiesInformation::AddInformation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVRenderingCapabilitiesInformation_Methods[] = {
  {"IsTypeOf", PyvtkPVRenderingCapabilitiesInformation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVRenderingCapabilitiesInformation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVRenderingCapabilitiesInformation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkPVRenderingCapabilitiesInformation\nC++: static vtkPVRenderingCapabilitiesInformation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVRenderingCapabilitiesInformation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVRenderingCapabilitiesInformation\nC++: vtkPVRenderingCapabilitiesInformation *NewInstance()\n\n"},
  {"GetCapabilities", PyvtkPVRenderingCapabilitiesInformation_GetCapabilities, METH_VARARGS,
   "V.GetCapabilities() -> int\nC++: virtual vtkTypeUInt32 GetCapabilities()\n\nReturns a 32-bit unsigned integer which represents the\ncapabilities. Use CapabilitiesMask to determine which\ncapabilities are supported by all the processes from which the\ninformation was gathered.\n"},
  {"Supports", PyvtkPVRenderingCapabilitiesInformation_Supports, METH_VARARGS,
   "V.Supports(int) -> bool\nC++: bool Supports(vtkTypeUInt32 capability)\nV.Supports(int, int) -> bool\nC++: static bool Supports(vtkTypeUInt32 capabilities,\n    vtkTypeUInt32 mask)\n\nConvenience method to check is any of the requested capabilities\nare supported.\n"},
  {"GetLocalCapabilities", PyvtkPVRenderingCapabilitiesInformation_GetLocalCapabilities, METH_VARARGS,
   "V.GetLocalCapabilities() -> int\nC++: static vtkTypeUInt32 GetLocalCapabilities()\n\nReturn local process' capabilities.\n"},
  {"CopyFromObject", PyvtkPVRenderingCapabilitiesInformation_CopyFromObject, METH_VARARGS,
   "V.CopyFromObject(vtkObject)\nC++: void CopyFromObject(vtkObject *) override;\n\nTransfer information about a single object into this object.\n"},
  {"AddInformation", PyvtkPVRenderingCapabilitiesInformation_AddInformation, METH_VARARGS,
   "V.AddInformation(vtkPVInformation)\nC++: void AddInformation(vtkPVInformation *) override;\n\nMerge another information object.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVRenderingCapabilitiesInformation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkPVRenderingCapabilitiesInformation", // tp_name
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
  PyvtkPVRenderingCapabilitiesInformation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVRenderingCapabilitiesInformation_StaticNew()
{
  return vtkPVRenderingCapabilitiesInformation::New();
}

PyObject *PyvtkPVRenderingCapabilitiesInformation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVRenderingCapabilitiesInformation_Type, PyvtkPVRenderingCapabilitiesInformation_Methods,
    "vtkPVRenderingCapabilitiesInformation",
 &PyvtkPVRenderingCapabilitiesInformation_StaticNew);

  PyTypeObject *pytype = &PyvtkPVRenderingCapabilitiesInformation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPVInformation_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkPVRenderingCapabilitiesInformation_CapabilitiesMask_Type);
  PyvtkPVRenderingCapabilitiesInformation_CapabilitiesMask_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkPVRenderingCapabilitiesInformation_CapabilitiesMask_Type);

  o = (PyObject *)&PyvtkPVRenderingCapabilitiesInformation_CapabilitiesMask_Type;
  if (PyDict_SetItemString(d, "CapabilitiesMask", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 7; c++)
  {
    typedef vtkPVRenderingCapabilitiesInformation::CapabilitiesMask cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[7] = {
        { "NONE", vtkPVRenderingCapabilitiesInformation::NONE },
        { "ONSCREEN_RENDERING", vtkPVRenderingCapabilitiesInformation::ONSCREEN_RENDERING },
        { "HEADLESS_RENDERING_USES_OSMESA", vtkPVRenderingCapabilitiesInformation::HEADLESS_RENDERING_USES_OSMESA },
        { "HEADLESS_RENDERING_USES_EGL", vtkPVRenderingCapabilitiesInformation::HEADLESS_RENDERING_USES_EGL },
        { "HEADLESS_RENDERING", vtkPVRenderingCapabilitiesInformation::HEADLESS_RENDERING },
        { "RENDERING", vtkPVRenderingCapabilitiesInformation::RENDERING },
        { "OPENGL", vtkPVRenderingCapabilitiesInformation::OPENGL },
      };

    o = PyvtkPVRenderingCapabilitiesInformation_CapabilitiesMask_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVRenderingCapabilitiesInformation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVRenderingCapabilitiesInformation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVRenderingCapabilitiesInformation", o) != 0)
  {
    Py_DECREF(o);
  }

}

