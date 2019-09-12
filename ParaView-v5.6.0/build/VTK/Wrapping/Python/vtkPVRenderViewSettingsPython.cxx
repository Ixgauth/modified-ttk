// python wrapper for vtkPVRenderViewSettings
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
#include "vtkPVRenderViewSettings.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVRenderViewSettings(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVRenderViewSettings_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkPVRenderViewSettings_Doc =
  "vtkPVRenderViewSettings - singleton used to keep track of options for\nvtkPVRenderView.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkPVRenderViewSettings is a singleton used to keep track of\n"
  "selections for various configurable parameters used by\n"
  "vtkPVRenderView. All class to vtkPVRenderViewSettings::New() returns\n"
  "a reference to the singleton instance.\n\n";


static PyObject *
PyvtkPVRenderViewSettings_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVRenderViewSettings::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderViewSettings_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderViewSettings *op = static_cast<vtkPVRenderViewSettings *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVRenderViewSettings::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderViewSettings_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVRenderViewSettings *tempr = vtkPVRenderViewSettings::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderViewSettings_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderViewSettings *op = static_cast<vtkPVRenderViewSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVRenderViewSettings *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVRenderViewSettings::NewInstance());

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
PyvtkPVRenderViewSettings_GetInstance(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetInstance");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkPVRenderViewSettings *tempr = vtkPVRenderViewSettings::GetInstance();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderViewSettings_SetResolveCoincidentTopology(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolveCoincidentTopology");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderViewSettings *op = static_cast<vtkPVRenderViewSettings *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetResolveCoincidentTopology(temp0);
    }
    else
    {
      op->vtkPVRenderViewSettings::SetResolveCoincidentTopology(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderViewSettings_SetPolygonOffsetParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolygonOffsetParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderViewSettings *op = static_cast<vtkPVRenderViewSettings *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPolygonOffsetParameters(temp0, temp1);
    }
    else
    {
      op->vtkPVRenderViewSettings::SetPolygonOffsetParameters(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderViewSettings_SetZShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderViewSettings *op = static_cast<vtkPVRenderViewSettings *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZShift(temp0);
    }
    else
    {
      op->vtkPVRenderViewSettings::SetZShift(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderViewSettings_SetOutlineThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutlineThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderViewSettings *op = static_cast<vtkPVRenderViewSettings *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutlineThreshold(temp0);
    }
    else
    {
      op->vtkPVRenderViewSettings::SetOutlineThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderViewSettings_GetOutlineThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutlineThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderViewSettings *op = static_cast<vtkPVRenderViewSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetOutlineThreshold() :
      op->vtkPVRenderViewSettings::GetOutlineThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderViewSettings_SetDefaultInteractionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultInteractionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderViewSettings *op = static_cast<vtkPVRenderViewSettings *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDefaultInteractionMode(temp0);
    }
    else
    {
      op->vtkPVRenderViewSettings::SetDefaultInteractionMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderViewSettings_GetDefaultInteractionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultInteractionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderViewSettings *op = static_cast<vtkPVRenderViewSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDefaultInteractionMode() :
      op->vtkPVRenderViewSettings::GetDefaultInteractionMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderViewSettings_SetPointPickingRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointPickingRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderViewSettings *op = static_cast<vtkPVRenderViewSettings *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointPickingRadius(temp0);
    }
    else
    {
      op->vtkPVRenderViewSettings::SetPointPickingRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderViewSettings_GetPointPickingRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointPickingRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderViewSettings *op = static_cast<vtkPVRenderViewSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointPickingRadius() :
      op->vtkPVRenderViewSettings::GetPointPickingRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderViewSettings_SetDisableIceT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisableIceT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderViewSettings *op = static_cast<vtkPVRenderViewSettings *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDisableIceT(temp0);
    }
    else
    {
      op->vtkPVRenderViewSettings::SetDisableIceT(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRenderViewSettings_GetDisableIceT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisableIceT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderViewSettings *op = static_cast<vtkPVRenderViewSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDisableIceT() :
      op->vtkPVRenderViewSettings::GetDisableIceT());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVRenderViewSettings_Methods[] = {
  {"IsTypeOf", PyvtkPVRenderViewSettings_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVRenderViewSettings_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVRenderViewSettings_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVRenderViewSettings\nC++: static vtkPVRenderViewSettings *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVRenderViewSettings_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVRenderViewSettings\nC++: vtkPVRenderViewSettings *NewInstance()\n\n"},
  {"GetInstance", PyvtkPVRenderViewSettings_GetInstance, METH_VARARGS,
   "V.GetInstance() -> vtkPVRenderViewSettings\nC++: static vtkPVRenderViewSettings *GetInstance()\n\nAccess the singleton.\n"},
  {"SetResolveCoincidentTopology", PyvtkPVRenderViewSettings_SetResolveCoincidentTopology, METH_VARARGS,
   "V.SetResolveCoincidentTopology(int)\nC++: void SetResolveCoincidentTopology(int mode)\n\nvtkMapper settings.\n"},
  {"SetPolygonOffsetParameters", PyvtkPVRenderViewSettings_SetPolygonOffsetParameters, METH_VARARGS,
   "V.SetPolygonOffsetParameters(float, float)\nC++: void SetPolygonOffsetParameters(double factor, double units)\n\nvtkMapper settings.\n"},
  {"SetZShift", PyvtkPVRenderViewSettings_SetZShift, METH_VARARGS,
   "V.SetZShift(float)\nC++: void SetZShift(double a)\n\nvtkMapper settings.\n"},
  {"SetOutlineThreshold", PyvtkPVRenderViewSettings_SetOutlineThreshold, METH_VARARGS,
   "V.SetOutlineThreshold(int)\nC++: virtual void SetOutlineThreshold(vtkIdType _arg)\n\nSet the number of cells (in millions) when the representations\nshow try to use outline by default.\n"},
  {"GetOutlineThreshold", PyvtkPVRenderViewSettings_GetOutlineThreshold, METH_VARARGS,
   "V.GetOutlineThreshold() -> int\nC++: virtual vtkIdType GetOutlineThreshold()\n\nSet the number of cells (in millions) when the representations\nshow try to use outline by default.\n"},
  {"SetDefaultInteractionMode", PyvtkPVRenderViewSettings_SetDefaultInteractionMode, METH_VARARGS,
   "V.SetDefaultInteractionMode(int)\nC++: virtual void SetDefaultInteractionMode(int _arg)\n\nSet the default interaction mode.\n"},
  {"GetDefaultInteractionMode", PyvtkPVRenderViewSettings_GetDefaultInteractionMode, METH_VARARGS,
   "V.GetDefaultInteractionMode() -> int\nC++: virtual int GetDefaultInteractionMode()\n\nSet the default interaction mode.\n"},
  {"SetPointPickingRadius", PyvtkPVRenderViewSettings_SetPointPickingRadius, METH_VARARGS,
   "V.SetPointPickingRadius(int)\nC++: virtual void SetPointPickingRadius(int _arg)\n\nSet the radius in pixels to include for finding the closet point\nwhen selecting a point on render view. This only after single\npoint selections i.e. when selecting a regions this radius is not\nrespected.\n"},
  {"GetPointPickingRadius", PyvtkPVRenderViewSettings_GetPointPickingRadius, METH_VARARGS,
   "V.GetPointPickingRadius() -> int\nC++: virtual int GetPointPickingRadius()\n\nSet the radius in pixels to include for finding the closet point\nwhen selecting a point on render view. This only after single\npoint selections i.e. when selecting a regions this radius is not\nrespected.\n"},
  {"SetDisableIceT", PyvtkPVRenderViewSettings_SetDisableIceT, METH_VARARGS,
   "V.SetDisableIceT(bool)\nC++: virtual void SetDisableIceT(bool _arg)\n\nEXPERIMENTAL: Add ability to disable IceT.\n"},
  {"GetDisableIceT", PyvtkPVRenderViewSettings_GetDisableIceT, METH_VARARGS,
   "V.GetDisableIceT() -> bool\nC++: virtual bool GetDisableIceT()\n\nEXPERIMENTAL: Add ability to disable IceT.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVRenderViewSettings_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkPVRenderViewSettings", // tp_name
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
  PyvtkPVRenderViewSettings_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVRenderViewSettings_StaticNew()
{
  return vtkPVRenderViewSettings::New();
}

PyObject *PyvtkPVRenderViewSettings_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVRenderViewSettings_Type, PyvtkPVRenderViewSettings_Methods,
    "vtkPVRenderViewSettings",
 &PyvtkPVRenderViewSettings_StaticNew);

  PyTypeObject *pytype = &PyvtkPVRenderViewSettings_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 7; c++)
  {
    static const struct { const char *name; int value; }
      constants[7] = {
        { "DO_NOTHING", vtkPVRenderViewSettings::DO_NOTHING },
        { "OFFSET_FACES", vtkPVRenderViewSettings::OFFSET_FACES },
        { "OFFSET_LINES_AND_VERTS", vtkPVRenderViewSettings::OFFSET_LINES_AND_VERTS },
        { "ZSHIFT", vtkPVRenderViewSettings::ZSHIFT },
        { "AUTOMATIC", vtkPVRenderViewSettings::AUTOMATIC },
        { "ALWAYS_2D", vtkPVRenderViewSettings::ALWAYS_2D },
        { "ALWAYS_3D", vtkPVRenderViewSettings::ALWAYS_3D },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVRenderViewSettings(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVRenderViewSettings_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVRenderViewSettings", o) != 0)
  {
    Py_DECREF(o);
  }

}

