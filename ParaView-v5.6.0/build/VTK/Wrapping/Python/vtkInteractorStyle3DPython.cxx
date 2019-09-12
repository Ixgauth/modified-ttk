// python wrapper for vtkInteractorStyle3D
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
#include "vtkInteractorStyle3D.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkInteractorStyle3D(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkInteractorStyle3D_ClassNew(); }

#ifndef DECLARED_PyvtkInteractorStyle_ClassNew
extern "C" { PyObject *PyvtkInteractorStyle_ClassNew(); }
#define DECLARED_PyvtkInteractorStyle_ClassNew
#endif

static const char *PyvtkInteractorStyle3D_Doc =
  "vtkInteractorStyle3D - extends interaction to support 3D input\n\n"
  "Superclass: vtkInteractorStyle\n\n"
  "vtkInteractorStyle3D allows the user to interact with (rotate, pan,\n"
  "etc.) objects in the scene indendent of each other. It is designed to\n"
  "use 3d positions and orientations instead of 2D.\n\n"
  "The following interactions are specified by default.\n\n"
  "A click and hold in 3D within the bounding box of a prop will pick up\n"
  "that prop allowing you to translate and orient that prop as desired\n"
  "with the 3D controller.\n\n"
  "Click/dragging two controllers and pulling them apart or pushing them\n"
  "together will initial a scale gesture that will scale the world\n"
  "larger or smaller.\n\n"
  "Click/dragging two controllers and translating them in the same\n"
  "direction will translate the camera/world pushing them together will\n"
  "initial a scale gesture that will scale the world larger or smaller.\n\n"
  "If a controller is right clicked (push touchpad on Vive) then it\n"
  "starts a fly motion where the camer moves in the direction the\n"
  "controller is pointing. It moves at a speed scaled by the position of\n"
  "your thumb on the trackpad. Higher moves faster forward. Lower moves\n"
  "faster backwards.\n\n"
  "For the Vive left click is mapped to the trigger and right click is\n"
  "mapped to pushing the trackpad down.\n\n"
  "@sa\n"
  "vtkRenderWindowInteractor3D\n\n";


static PyObject *
PyvtkInteractorStyle3D_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkInteractorStyle3D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyle3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle3D *op = static_cast<vtkInteractorStyle3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInteractorStyle3D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyle3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkInteractorStyle3D *tempr = vtkInteractorStyle3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyle3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle3D *op = static_cast<vtkInteractorStyle3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInteractorStyle3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInteractorStyle3D::NewInstance());

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
PyvtkInteractorStyle3D_PositionProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PositionProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle3D *op = static_cast<vtkInteractorStyle3D *>(vp);

  vtkEventData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkEventData"))
  {
    if (ap.IsBound())
    {
      op->PositionProp(temp0);
    }
    else
    {
      op->vtkInteractorStyle3D::PositionProp(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyle3D_Dolly3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Dolly3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle3D *op = static_cast<vtkInteractorStyle3D *>(vp);

  vtkEventData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkEventData"))
  {
    if (ap.IsBound())
    {
      op->Dolly3D(temp0);
    }
    else
    {
      op->vtkInteractorStyle3D::Dolly3D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyle3D_SetDollyMotionFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDollyMotionFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle3D *op = static_cast<vtkInteractorStyle3D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDollyMotionFactor(temp0);
    }
    else
    {
      op->vtkInteractorStyle3D::SetDollyMotionFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyle3D_GetDollyMotionFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDollyMotionFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle3D *op = static_cast<vtkInteractorStyle3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDollyMotionFactor() :
      op->vtkInteractorStyle3D::GetDollyMotionFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyle3D_SetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle3D *op = static_cast<vtkInteractorStyle3D *>(vp);

  vtkCamera *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkCamera") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetScale(temp0, temp1);
    }
    else
    {
      op->vtkInteractorStyle3D::SetScale(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyle3D_GetInteractionPicker(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionPicker");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle3D *op = static_cast<vtkInteractorStyle3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPropPicker *tempr = (ap.IsBound() ?
      op->GetInteractionPicker() :
      op->vtkInteractorStyle3D::GetInteractionPicker());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkInteractorStyle3D_Methods[] = {
  {"IsTypeOf", PyvtkInteractorStyle3D_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkInteractorStyle3D_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkInteractorStyle3D_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkInteractorStyle3D\nC++: static vtkInteractorStyle3D *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkInteractorStyle3D_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkInteractorStyle3D\nC++: vtkInteractorStyle3D *NewInstance()\n\n"},
  {"PositionProp", PyvtkInteractorStyle3D_PositionProp, METH_VARARGS,
   "V.PositionProp(vtkEventData)\nC++: virtual void PositionProp(vtkEventData *)\n\n"},
  {"Dolly3D", PyvtkInteractorStyle3D_Dolly3D, METH_VARARGS,
   "V.Dolly3D(vtkEventData)\nC++: virtual void Dolly3D(vtkEventData *)\n\n"},
  {"SetDollyMotionFactor", PyvtkInteractorStyle3D_SetDollyMotionFactor, METH_VARARGS,
   "V.SetDollyMotionFactor(float)\nC++: virtual void SetDollyMotionFactor(double _arg)\n\nSet/Get the dolly motion factor used when flying in 3D. Defaults\nto 2.0 to simulate 2 meters per second of movement in physical\nspace. The dolly speed is adjusted by the touchpad position as\nwell. The maximum rate is twice this setting.\n"},
  {"GetDollyMotionFactor", PyvtkInteractorStyle3D_GetDollyMotionFactor, METH_VARARGS,
   "V.GetDollyMotionFactor() -> float\nC++: virtual double GetDollyMotionFactor()\n\nSet/Get the dolly motion factor used when flying in 3D. Defaults\nto 2.0 to simulate 2 meters per second of movement in physical\nspace. The dolly speed is adjusted by the touchpad position as\nwell. The maximum rate is twice this setting.\n"},
  {"SetScale", PyvtkInteractorStyle3D_SetScale, METH_VARARGS,
   "V.SetScale(vtkCamera, float)\nC++: void SetScale(vtkCamera *cam, double distance)\n\nSet the distance for the camera. The distance in VR represents\nthe scaling from world to physical space. So when we set it to a\nnew value we also adjust the HMD position to maintain the same\nrelative position.\n"},
  {"GetInteractionPicker", PyvtkInteractorStyle3D_GetInteractionPicker, METH_VARARGS,
   "V.GetInteractionPicker() -> vtkPropPicker\nC++: vtkPropPicker *GetInteractionPicker()\n\nGet the interaction picker\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkInteractorStyle3D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkInteractorStyle3D", // tp_name
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
  PyvtkInteractorStyle3D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkInteractorStyle3D_StaticNew()
{
  return vtkInteractorStyle3D::New();
}

PyObject *PyvtkInteractorStyle3D_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkInteractorStyle3D_Type, PyvtkInteractorStyle3D_Methods,
    "vtkInteractorStyle3D",
 &PyvtkInteractorStyle3D_StaticNew);

  PyTypeObject *pytype = &PyvtkInteractorStyle3D_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkInteractorStyle_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkInteractorStyle3D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkInteractorStyle3D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkInteractorStyle3D", o) != 0)
  {
    Py_DECREF(o);
  }

}

