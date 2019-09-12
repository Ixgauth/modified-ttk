// python wrapper for vtkPropPicker
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
#include "vtkPropPicker.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPropPicker(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPropPicker_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractPropPicker_ClassNew
extern "C" { PyObject *PyvtkAbstractPropPicker_ClassNew(); }
#define DECLARED_PyvtkAbstractPropPicker_ClassNew
#endif

static const char *PyvtkPropPicker_Doc =
  "vtkPropPicker - pick an actor/prop using graphics hardware\n\n"
  "Superclass: vtkAbstractPropPicker\n\n"
  "vtkPropPicker is used to pick an actor/prop given a selection point\n"
  "(in display coordinates) and a renderer. This class uses graphics\n"
  "hardware/rendering system to pick rapidly (as compared to using ray\n"
  "casting as does vtkCellPicker and vtkPointPicker). This class\n"
  "determines the actor/prop and pick position in world coordinates;\n"
  "point and cell ids are not determined.\n\n"
  "@sa\n"
  "vtkPicker vtkWorldPointPicker vtkCellPicker vtkPointPicker\n\n";


static PyObject *
PyvtkPropPicker_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPropPicker::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPropPicker_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropPicker *op = static_cast<vtkPropPicker *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPropPicker::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPropPicker_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPropPicker *tempr = vtkPropPicker::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPropPicker_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropPicker *op = static_cast<vtkPropPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPropPicker *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPropPicker::NewInstance());

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
PyvtkPropPicker_PickProp_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PickProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropPicker *op = static_cast<vtkPropPicker *>(vp);

  double temp0;
  double temp1;
  vtkRenderer *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkRenderer"))
  {
    int tempr = (ap.IsBound() ?
      op->PickProp(temp0, temp1, temp2) :
      op->vtkPropPicker::PickProp(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPropPicker_PickProp_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PickProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropPicker *op = static_cast<vtkPropPicker *>(vp);

  double temp0;
  double temp1;
  vtkRenderer *temp2 = nullptr;
  vtkPropCollection *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkRenderer") &&
      ap.GetVTKObject(temp3, "vtkPropCollection"))
  {
    int tempr = (ap.IsBound() ?
      op->PickProp(temp0, temp1, temp2, temp3) :
      op->vtkPropPicker::PickProp(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPropPicker_PickProp(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPropPicker_PickProp_s1(self, args);
    case 4:
      return PyvtkPropPicker_PickProp_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "PickProp");
  return nullptr;
}



static PyObject *
PyvtkPropPicker_Pick_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropPicker *op = static_cast<vtkPropPicker *>(vp);

  double temp0;
  double temp1;
  double temp2;
  vtkRenderer *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkRenderer"))
  {
    int tempr = (ap.IsBound() ?
      op->Pick(temp0, temp1, temp2, temp3) :
      op->vtkPropPicker::Pick(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPropPicker_Pick_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropPicker *op = static_cast<vtkPropPicker *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  vtkRenderer *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkRenderer"))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Pick(temp0, temp1) :
      op->vtkPropPicker::Pick(temp0, temp1));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPropPicker_Pick(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkPropPicker_Pick_s1(self, args);
    case 2:
      return PyvtkPropPicker_Pick_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Pick");
  return nullptr;
}



static PyObject *
PyvtkPropPicker_Pick3DPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pick3DPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropPicker *op = static_cast<vtkPropPicker *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  vtkRenderer *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkRenderer"))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Pick3DPoint(temp0, temp1) :
      op->vtkPropPicker::Pick3DPoint(temp0, temp1));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPropPicker_PickProp3DPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PickProp3DPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropPicker *op = static_cast<vtkPropPicker *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  vtkRenderer *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkRenderer"))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->PickProp3DPoint(temp0, temp1) :
      op->vtkPropPicker::PickProp3DPoint(temp0, temp1));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPropPicker_PickProp3DPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PickProp3DPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropPicker *op = static_cast<vtkPropPicker *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  vtkRenderer *temp1 = nullptr;
  vtkPropCollection *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkRenderer") &&
      ap.GetVTKObject(temp2, "vtkPropCollection"))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->PickProp3DPoint(temp0, temp1, temp2) :
      op->vtkPropPicker::PickProp3DPoint(temp0, temp1, temp2));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPropPicker_PickProp3DPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkPropPicker_PickProp3DPoint_s1(self, args);
    case 3:
      return PyvtkPropPicker_PickProp3DPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "PickProp3DPoint");
  return nullptr;
}



static PyObject *
PyvtkPropPicker_PickProp3DRay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PickProp3DRay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropPicker *op = static_cast<vtkPropPicker *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 4;
  double temp1[4];
  double save1[4];
  vtkRenderer *temp2 = nullptr;
  vtkPropCollection *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkRenderer") &&
      ap.GetVTKObject(temp3, "vtkPropCollection"))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->PickProp3DRay(temp0, temp1, temp2, temp3) :
      op->vtkPropPicker::PickProp3DRay(temp0, temp1, temp2, temp3));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPropPicker_Pick3DRay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pick3DRay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPropPicker *op = static_cast<vtkPropPicker *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 4;
  double temp1[4];
  double save1[4];
  vtkRenderer *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkRenderer"))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Pick3DRay(temp0, temp1, temp2) :
      op->vtkPropPicker::Pick3DRay(temp0, temp1, temp2));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPropPicker_Methods[] = {
  {"IsTypeOf", PyvtkPropPicker_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPropPicker_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPropPicker_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPropPicker\nC++: static vtkPropPicker *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPropPicker_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPropPicker\nC++: vtkPropPicker *NewInstance()\n\n"},
  {"PickProp", PyvtkPropPicker_PickProp, METH_VARARGS,
   "V.PickProp(float, float, vtkRenderer) -> int\nC++: int PickProp(double selectionX, double selectionY,\n    vtkRenderer *renderer)\nV.PickProp(float, float, vtkRenderer, vtkPropCollection) -> int\nC++: int PickProp(double selectionX, double selectionY,\n    vtkRenderer *renderer, vtkPropCollection *pickfrom)\n\nPerform the pick and set the PickedProp ivar. If something is\npicked, a 1 is returned, otherwise 0 is returned.  Use the\nGetViewProp() method to get the instance of vtkProp that was\npicked.  Props are picked from the renderers list of pickable\nProps.\n"},
  {"Pick", PyvtkPropPicker_Pick, METH_VARARGS,
   "V.Pick(float, float, float, vtkRenderer) -> int\nC++: int Pick(double selectionX, double selectionY,\n    double selectionZ, vtkRenderer *renderer) override;\nV.Pick([float, float, float], vtkRenderer) -> int\nC++: int Pick(double selectionPt[3], vtkRenderer *renderer)\n\noverride superclasses' Pick() method.\n"},
  {"Pick3DPoint", PyvtkPropPicker_Pick3DPoint, METH_VARARGS,
   "V.Pick3DPoint([float, float, float], vtkRenderer) -> int\nC++: int Pick3DPoint(double selectionPt[3], vtkRenderer *ren)\n    override;\n\nPerform pick operation with selection point provided. The\nselectionPt is in world coordinates. Return non-zero if something\nwas successfully picked.\n"},
  {"PickProp3DPoint", PyvtkPropPicker_PickProp3DPoint, METH_VARARGS,
   "V.PickProp3DPoint([float, float, float], vtkRenderer) -> int\nC++: int PickProp3DPoint(double pos[3], vtkRenderer *renderer)\nV.PickProp3DPoint([float, float, float], vtkRenderer,\n    vtkPropCollection) -> int\nC++: int PickProp3DPoint(double pos[3], vtkRenderer *renderer,\n    vtkPropCollection *pickfrom)\n\nPerform the pick and set the PickedProp ivar. If something is\npicked, a 1 is returned, otherwise 0 is returned.  Use the\nGetViewProp() method to get the instance of vtkProp that was\npicked.  Props are picked from the renderers list of pickable\nProps.\n"},
  {"PickProp3DRay", PyvtkPropPicker_PickProp3DRay, METH_VARARGS,
   "V.PickProp3DRay([float, float, float], [float, float, float,\n    float], vtkRenderer, vtkPropCollection) -> int\nC++: virtual int PickProp3DRay(double selectionPt[3],\n    double eventWorldOrientation[4], vtkRenderer *renderer,\n    vtkPropCollection *pickfrom)\n\nPerform a pick from the user-provided list of vtkProps.\n"},
  {"Pick3DRay", PyvtkPropPicker_Pick3DRay, METH_VARARGS,
   "V.Pick3DRay([float, float, float], [float, float, float, float],\n    vtkRenderer) -> int\nC++: int Pick3DRay(double selectionPt[3], double orient[4],\n    vtkRenderer *ren) override;\n\nPerform pick operation with selection point provided. The\nselectionPt is in world coordinates. Return non-zero if something\nwas successfully picked.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPropPicker_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkPropPicker", // tp_name
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
  PyvtkPropPicker_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPropPicker_StaticNew()
{
  return vtkPropPicker::New();
}

PyObject *PyvtkPropPicker_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPropPicker_Type, PyvtkPropPicker_Methods,
    "vtkPropPicker",
 &PyvtkPropPicker_StaticNew);

  PyTypeObject *pytype = &PyvtkPropPicker_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractPropPicker_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPropPicker(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPropPicker_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPropPicker", o) != 0)
  {
    Py_DECREF(o);
  }

}

