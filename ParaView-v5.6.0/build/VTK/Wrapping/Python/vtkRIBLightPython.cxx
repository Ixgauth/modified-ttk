// python wrapper for vtkRIBLight
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
#include "vtkRIBLight.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRIBLight(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkRIBLight_ClassNew(); }

#ifndef DECLARED_PyvtkLight_ClassNew
extern "C" { PyObject *PyvtkLight_ClassNew(); }
#define DECLARED_PyvtkLight_ClassNew
#endif

static const char *PyvtkRIBLight_Doc =
  "vtkRIBLight - RIP Light\n\n"
  "Superclass: vtkLight\n\n"
  "vtkRIBLight is a subclass of vtkLight that allows the user to specify\n"
  "light source shaders and shadow casting lights for use with\n"
  "RenderMan.\n\n"
  "@sa\n"
  "vtkRIBExporter vtkRIBProperty\n\n";


static PyObject *
PyvtkRIBLight_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRIBLight::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRIBLight_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBLight *op = static_cast<vtkRIBLight *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRIBLight::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRIBLight_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRIBLight *tempr = vtkRIBLight::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRIBLight_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBLight *op = static_cast<vtkRIBLight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRIBLight *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRIBLight::NewInstance());

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
PyvtkRIBLight_ShadowsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShadowsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBLight *op = static_cast<vtkRIBLight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShadowsOn();
    }
    else
    {
      op->vtkRIBLight::ShadowsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRIBLight_ShadowsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShadowsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBLight *op = static_cast<vtkRIBLight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShadowsOff();
    }
    else
    {
      op->vtkRIBLight::ShadowsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRIBLight_SetShadows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShadows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBLight *op = static_cast<vtkRIBLight *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShadows(temp0);
    }
    else
    {
      op->vtkRIBLight::SetShadows(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRIBLight_GetShadows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShadows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBLight *op = static_cast<vtkRIBLight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShadows() :
      op->vtkRIBLight::GetShadows());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRIBLight_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBLight *op = static_cast<vtkRIBLight *>(vp);

  vtkRenderer *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->Render(temp0, temp1);
    }
    else
    {
      op->vtkRIBLight::Render(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkRIBLight_Methods[] = {
  {"IsTypeOf", PyvtkRIBLight_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRIBLight_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRIBLight_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkRIBLight\nC++: static vtkRIBLight *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRIBLight_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkRIBLight\nC++: vtkRIBLight *NewInstance()\n\n"},
  {"ShadowsOn", PyvtkRIBLight_ShadowsOn, METH_VARARGS,
   "V.ShadowsOn()\nC++: virtual void ShadowsOn()\n\n"},
  {"ShadowsOff", PyvtkRIBLight_ShadowsOff, METH_VARARGS,
   "V.ShadowsOff()\nC++: virtual void ShadowsOff()\n\n"},
  {"SetShadows", PyvtkRIBLight_SetShadows, METH_VARARGS,
   "V.SetShadows(int)\nC++: virtual void SetShadows(vtkTypeBool _arg)\n\n"},
  {"GetShadows", PyvtkRIBLight_GetShadows, METH_VARARGS,
   "V.GetShadows() -> int\nC++: virtual vtkTypeBool GetShadows()\n\n"},
  {"Render", PyvtkRIBLight_Render, METH_VARARGS,
   "V.Render(vtkRenderer, int)\nC++: void Render(vtkRenderer *ren, int index) override;\n\nAbstract interface to renderer. Each concrete subclass of\nvtkLight will load its data into the graphics system in response\nto this method invocation. The actual loading is performed by a\nvtkLightDevice subclass, which will get created automatically.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkRIBLight_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOExportPython.vtkRIBLight", // tp_name
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
  PyvtkRIBLight_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRIBLight_StaticNew()
{
  return vtkRIBLight::New();
}

PyObject *PyvtkRIBLight_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkRIBLight_Type, PyvtkRIBLight_Methods,
    "vtkRIBLight",
 &PyvtkRIBLight_StaticNew);

  PyTypeObject *pytype = &PyvtkRIBLight_Type;

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

void PyVTKAddFile_vtkRIBLight(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRIBLight_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRIBLight", o) != 0)
  {
    Py_DECREF(o);
  }

}

