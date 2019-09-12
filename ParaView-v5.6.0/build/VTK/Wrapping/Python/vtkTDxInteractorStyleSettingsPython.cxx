// python wrapper for vtkTDxInteractorStyleSettings
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
#include "vtkTDxInteractorStyleSettings.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTDxInteractorStyleSettings(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTDxInteractorStyleSettings_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkTDxInteractorStyleSettings_Doc =
  "vtkTDxInteractorStyleSettings - 3DConnexion device settings\n\n"
  "Superclass: vtkObject\n\n"
  "vtkTDxInteractorStyleSettings defines settings for 3DConnexion device\n"
  "such as sensitivity, axis filters\n\n"
  "@sa\n"
  "vtkInteractorStyle vtkRenderWindowInteractor vtkTDxInteractorStyle\n\n";


static PyObject *
PyvtkTDxInteractorStyleSettings_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTDxInteractorStyleSettings::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleSettings_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleSettings *op = static_cast<vtkTDxInteractorStyleSettings *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTDxInteractorStyleSettings::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleSettings_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTDxInteractorStyleSettings *tempr = vtkTDxInteractorStyleSettings::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleSettings_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleSettings *op = static_cast<vtkTDxInteractorStyleSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTDxInteractorStyleSettings *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTDxInteractorStyleSettings::NewInstance());

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
PyvtkTDxInteractorStyleSettings_SetAngleSensitivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAngleSensitivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleSettings *op = static_cast<vtkTDxInteractorStyleSettings *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAngleSensitivity(temp0);
    }
    else
    {
      op->vtkTDxInteractorStyleSettings::SetAngleSensitivity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleSettings_GetAngleSensitivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngleSensitivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleSettings *op = static_cast<vtkTDxInteractorStyleSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAngleSensitivity() :
      op->vtkTDxInteractorStyleSettings::GetAngleSensitivity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleSettings_SetUseRotationX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseRotationX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleSettings *op = static_cast<vtkTDxInteractorStyleSettings *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseRotationX(temp0);
    }
    else
    {
      op->vtkTDxInteractorStyleSettings::SetUseRotationX(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleSettings_GetUseRotationX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseRotationX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleSettings *op = static_cast<vtkTDxInteractorStyleSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseRotationX() :
      op->vtkTDxInteractorStyleSettings::GetUseRotationX());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleSettings_SetUseRotationY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseRotationY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleSettings *op = static_cast<vtkTDxInteractorStyleSettings *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseRotationY(temp0);
    }
    else
    {
      op->vtkTDxInteractorStyleSettings::SetUseRotationY(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleSettings_GetUseRotationY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseRotationY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleSettings *op = static_cast<vtkTDxInteractorStyleSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseRotationY() :
      op->vtkTDxInteractorStyleSettings::GetUseRotationY());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleSettings_SetUseRotationZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseRotationZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleSettings *op = static_cast<vtkTDxInteractorStyleSettings *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseRotationZ(temp0);
    }
    else
    {
      op->vtkTDxInteractorStyleSettings::SetUseRotationZ(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleSettings_GetUseRotationZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseRotationZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleSettings *op = static_cast<vtkTDxInteractorStyleSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseRotationZ() :
      op->vtkTDxInteractorStyleSettings::GetUseRotationZ());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleSettings_SetTranslationXSensitivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslationXSensitivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleSettings *op = static_cast<vtkTDxInteractorStyleSettings *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTranslationXSensitivity(temp0);
    }
    else
    {
      op->vtkTDxInteractorStyleSettings::SetTranslationXSensitivity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleSettings_GetTranslationXSensitivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslationXSensitivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleSettings *op = static_cast<vtkTDxInteractorStyleSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTranslationXSensitivity() :
      op->vtkTDxInteractorStyleSettings::GetTranslationXSensitivity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleSettings_SetTranslationYSensitivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslationYSensitivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleSettings *op = static_cast<vtkTDxInteractorStyleSettings *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTranslationYSensitivity(temp0);
    }
    else
    {
      op->vtkTDxInteractorStyleSettings::SetTranslationYSensitivity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleSettings_GetTranslationYSensitivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslationYSensitivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleSettings *op = static_cast<vtkTDxInteractorStyleSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTranslationYSensitivity() :
      op->vtkTDxInteractorStyleSettings::GetTranslationYSensitivity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleSettings_SetTranslationZSensitivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslationZSensitivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleSettings *op = static_cast<vtkTDxInteractorStyleSettings *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTranslationZSensitivity(temp0);
    }
    else
    {
      op->vtkTDxInteractorStyleSettings::SetTranslationZSensitivity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleSettings_GetTranslationZSensitivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslationZSensitivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleSettings *op = static_cast<vtkTDxInteractorStyleSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTranslationZSensitivity() :
      op->vtkTDxInteractorStyleSettings::GetTranslationZSensitivity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTDxInteractorStyleSettings_Methods[] = {
  {"IsTypeOf", PyvtkTDxInteractorStyleSettings_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTDxInteractorStyleSettings_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTDxInteractorStyleSettings_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTDxInteractorStyleSettings\nC++: static vtkTDxInteractorStyleSettings *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTDxInteractorStyleSettings_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTDxInteractorStyleSettings\nC++: vtkTDxInteractorStyleSettings *NewInstance()\n\n"},
  {"SetAngleSensitivity", PyvtkTDxInteractorStyleSettings_SetAngleSensitivity, METH_VARARGS,
   "V.SetAngleSensitivity(float)\nC++: virtual void SetAngleSensitivity(double _arg)\n\nSensitivity of the rotation angle. This can be any value:\npositive, negative, null.\n- x<-1.0: faster reversed\n- x=-1.0: reversed neutral\n- -1.0<x<0.0:  reversed slower\n- x=0.0: no rotation\n- 0.0<x<1.0: slower\n- x=1.0: neutral\n- x>1.0: faster\n"},
  {"GetAngleSensitivity", PyvtkTDxInteractorStyleSettings_GetAngleSensitivity, METH_VARARGS,
   "V.GetAngleSensitivity() -> float\nC++: virtual double GetAngleSensitivity()\n\nSensitivity of the rotation angle. This can be any value:\npositive, negative, null.\n- x<-1.0: faster reversed\n- x=-1.0: reversed neutral\n- -1.0<x<0.0:  reversed slower\n- x=0.0: no rotation\n- 0.0<x<1.0: slower\n- x=1.0: neutral\n- x>1.0: faster\n"},
  {"SetUseRotationX", PyvtkTDxInteractorStyleSettings_SetUseRotationX, METH_VARARGS,
   "V.SetUseRotationX(bool)\nC++: virtual void SetUseRotationX(bool _arg)\n\nUse or mask the rotation component around the X-axis. Initial\nvalue is true.\n"},
  {"GetUseRotationX", PyvtkTDxInteractorStyleSettings_GetUseRotationX, METH_VARARGS,
   "V.GetUseRotationX() -> bool\nC++: virtual bool GetUseRotationX()\n\nUse or mask the rotation component around the X-axis. Initial\nvalue is true.\n"},
  {"SetUseRotationY", PyvtkTDxInteractorStyleSettings_SetUseRotationY, METH_VARARGS,
   "V.SetUseRotationY(bool)\nC++: virtual void SetUseRotationY(bool _arg)\n\nUse or mask the rotation component around the Y-axis. Initial\nvalue is true.\n"},
  {"GetUseRotationY", PyvtkTDxInteractorStyleSettings_GetUseRotationY, METH_VARARGS,
   "V.GetUseRotationY() -> bool\nC++: virtual bool GetUseRotationY()\n\nUse or mask the rotation component around the Y-axis. Initial\nvalue is true.\n"},
  {"SetUseRotationZ", PyvtkTDxInteractorStyleSettings_SetUseRotationZ, METH_VARARGS,
   "V.SetUseRotationZ(bool)\nC++: virtual void SetUseRotationZ(bool _arg)\n\nUse or mask the rotation component around the Z-axis. Initial\nvalue is true.\n"},
  {"GetUseRotationZ", PyvtkTDxInteractorStyleSettings_GetUseRotationZ, METH_VARARGS,
   "V.GetUseRotationZ() -> bool\nC++: virtual bool GetUseRotationZ()\n\nUse or mask the rotation component around the Z-axis. Initial\nvalue is true.\n"},
  {"SetTranslationXSensitivity", PyvtkTDxInteractorStyleSettings_SetTranslationXSensitivity, METH_VARARGS,
   "V.SetTranslationXSensitivity(float)\nC++: virtual void SetTranslationXSensitivity(double _arg)\n\nSensitivity of the translation along the X-axis. This can be any\nvalue: positive, negative, null.\n- x<-1.0: faster reversed\n- x=-1.0: reversed neutral\n- -1.0<x<0.0:  reversed slower\n- x=0.0: no translation\n- 0.0<x<1.0: slower\n- x=1.0: neutral\n- x>1.0: faster Initial value is 1.0\n"},
  {"GetTranslationXSensitivity", PyvtkTDxInteractorStyleSettings_GetTranslationXSensitivity, METH_VARARGS,
   "V.GetTranslationXSensitivity() -> float\nC++: virtual double GetTranslationXSensitivity()\n\nSensitivity of the translation along the X-axis. This can be any\nvalue: positive, negative, null.\n- x<-1.0: faster reversed\n- x=-1.0: reversed neutral\n- -1.0<x<0.0:  reversed slower\n- x=0.0: no translation\n- 0.0<x<1.0: slower\n- x=1.0: neutral\n- x>1.0: faster Initial value is 1.0\n"},
  {"SetTranslationYSensitivity", PyvtkTDxInteractorStyleSettings_SetTranslationYSensitivity, METH_VARARGS,
   "V.SetTranslationYSensitivity(float)\nC++: virtual void SetTranslationYSensitivity(double _arg)\n\nSensitivity of the translation along the Y-axis. See comment of\nSetTranslationXSensitivity().\n"},
  {"GetTranslationYSensitivity", PyvtkTDxInteractorStyleSettings_GetTranslationYSensitivity, METH_VARARGS,
   "V.GetTranslationYSensitivity() -> float\nC++: virtual double GetTranslationYSensitivity()\n\nSensitivity of the translation along the Y-axis. See comment of\nSetTranslationXSensitivity().\n"},
  {"SetTranslationZSensitivity", PyvtkTDxInteractorStyleSettings_SetTranslationZSensitivity, METH_VARARGS,
   "V.SetTranslationZSensitivity(float)\nC++: virtual void SetTranslationZSensitivity(double _arg)\n\nSensitivity of the translation along the Z-axis. See comment of\nSetTranslationXSensitivity().\n"},
  {"GetTranslationZSensitivity", PyvtkTDxInteractorStyleSettings_GetTranslationZSensitivity, METH_VARARGS,
   "V.GetTranslationZSensitivity() -> float\nC++: virtual double GetTranslationZSensitivity()\n\nSensitivity of the translation along the Z-axis. See comment of\nSetTranslationXSensitivity().\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTDxInteractorStyleSettings_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkTDxInteractorStyleSettings", // tp_name
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
  PyvtkTDxInteractorStyleSettings_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTDxInteractorStyleSettings_StaticNew()
{
  return vtkTDxInteractorStyleSettings::New();
}

PyObject *PyvtkTDxInteractorStyleSettings_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTDxInteractorStyleSettings_Type, PyvtkTDxInteractorStyleSettings_Methods,
    "vtkTDxInteractorStyleSettings",
 &PyvtkTDxInteractorStyleSettings_StaticNew);

  PyTypeObject *pytype = &PyvtkTDxInteractorStyleSettings_Type;

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

void PyVTKAddFile_vtkTDxInteractorStyleSettings(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTDxInteractorStyleSettings_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTDxInteractorStyleSettings", o) != 0)
  {
    Py_DECREF(o);
  }

}

