// python wrapper for vtkAbstractPicker
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
#include "vtkAbstractPicker.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAbstractPicker(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAbstractPicker_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkAbstractPicker_Doc =
  "vtkAbstractPicker - define API for picking subclasses\n\n"
  "Superclass: vtkObject\n\n"
  "vtkAbstractPicker is an abstract superclass that defines a minimal\n"
  "API for its concrete subclasses. The minimum functionality of a\n"
  "picker is to return the x-y-z global coordinate position of a pick\n"
  "(the pick itself is defined in display coordinates).\n\n"
  "The API to this class is to invoke the Pick() method with a selection\n"
  "point (in display coordinates - pixels) and a renderer. Then get the\n"
  "resulting pick position in global coordinates with the\n"
  "GetPickPosition() method.\n\n"
  "vtkPicker fires events during the picking process.  These events are\n"
  "StartPickEvent, PickEvent, and EndPickEvent which are invoked prior\n"
  "to picking, when something is picked, and after all picking\n"
  "candidates have been tested. Note that during the pick process the\n"
  "PickEvent of vtkProp (and its subclasses such as vtkActor) is fired\n"
  "prior to the PickEvent of vtkPicker.\n\n"
  "@warning\n"
  "vtkAbstractPicker and its subclasses will not pick props that are\n"
  "\"unpickable\" (see vtkProp) or are fully transparent (if transparency\n"
  "is a property of the vtkProp).\n\n"
  "@warning\n"
  "There are two classes of pickers: those that pick using geometric\n"
  "methods (typically a ray cast); and those that use rendering\n"
  "hardware. Geometric methods return more information but are slower.\n"
  "Hardware methods are much faster and return minimal information.\n"
  "Examples of geometric pickers include vtkPicker, vtkCellPicker, and\n"
  "vtkPointPicker. Examples of hardware pickers include\n"
  "vtkWorldPointPicker and vtkPropPicker.\n\n"
  "@sa\n"
  "vtkPropPicker uses hardware acceleration to pick an instance of\n"
  "vtkProp. (This means that 2D and 3D props can be picked, and it's\n"
  "relatively fast.) If you need to pick cells or points, you might wish\n"
  "to use vtkCellPicker or vtkPointPicker. vtkWorldPointPicker is the\n"
  "fastest picker, returning an x-y-z coordinate value using the\n"
  "hardware z-buffer. vtkPicker can be used to pick the bounding box of\n"
  "3D props.\n\n";


static PyObject *
PyvtkAbstractPicker_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAbstractPicker::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPicker_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPicker *op = static_cast<vtkAbstractPicker *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAbstractPicker::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPicker_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAbstractPicker *tempr = vtkAbstractPicker::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPicker_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPicker *op = static_cast<vtkAbstractPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractPicker *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAbstractPicker::NewInstance());

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
PyvtkAbstractPicker_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPicker *op = static_cast<vtkAbstractPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetRenderer() :
      op->vtkAbstractPicker::GetRenderer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPicker_GetSelectionPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPicker *op = static_cast<vtkAbstractPicker *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSelectionPoint() :
      op->vtkAbstractPicker::GetSelectionPoint());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPicker_GetPickPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPicker *op = static_cast<vtkAbstractPicker *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPickPosition() :
      op->vtkAbstractPicker::GetPickPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPicker_Pick_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPicker *op = static_cast<vtkAbstractPicker *>(vp);

  double temp0;
  double temp1;
  double temp2;
  vtkRenderer *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkRenderer"))
  {
    int tempr = op->Pick(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractPicker_Pick_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPicker *op = static_cast<vtkAbstractPicker *>(vp);

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
      op->vtkAbstractPicker::Pick(temp0, temp1));

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
PyvtkAbstractPicker_Pick(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkAbstractPicker_Pick_s1(self, args);
    case 2:
      return PyvtkAbstractPicker_Pick_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Pick");
  return nullptr;
}



static PyObject *
PyvtkAbstractPicker_Pick3DPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pick3DPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPicker *op = static_cast<vtkAbstractPicker *>(vp);

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
      op->vtkAbstractPicker::Pick3DPoint(temp0, temp1));

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
PyvtkAbstractPicker_Pick3DRay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pick3DRay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPicker *op = static_cast<vtkAbstractPicker *>(vp);

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
      op->vtkAbstractPicker::Pick3DRay(temp0, temp1, temp2));

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
PyvtkAbstractPicker_SetPickFromList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPickFromList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPicker *op = static_cast<vtkAbstractPicker *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPickFromList(temp0);
    }
    else
    {
      op->vtkAbstractPicker::SetPickFromList(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPicker_GetPickFromList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickFromList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPicker *op = static_cast<vtkAbstractPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPickFromList() :
      op->vtkAbstractPicker::GetPickFromList());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPicker_PickFromListOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PickFromListOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPicker *op = static_cast<vtkAbstractPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PickFromListOn();
    }
    else
    {
      op->vtkAbstractPicker::PickFromListOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPicker_PickFromListOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PickFromListOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPicker *op = static_cast<vtkAbstractPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PickFromListOff();
    }
    else
    {
      op->vtkAbstractPicker::PickFromListOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPicker_InitializePickList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializePickList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPicker *op = static_cast<vtkAbstractPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitializePickList();
    }
    else
    {
      op->vtkAbstractPicker::InitializePickList();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPicker_AddPickList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPickList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPicker *op = static_cast<vtkAbstractPicker *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->AddPickList(temp0);
    }
    else
    {
      op->vtkAbstractPicker::AddPickList(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPicker_DeletePickList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeletePickList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPicker *op = static_cast<vtkAbstractPicker *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->DeletePickList(temp0);
    }
    else
    {
      op->vtkAbstractPicker::DeletePickList(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPicker_GetPickList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPicker *op = static_cast<vtkAbstractPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPropCollection *tempr = (ap.IsBound() ?
      op->GetPickList() :
      op->vtkAbstractPicker::GetPickList());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAbstractPicker_Methods[] = {
  {"IsTypeOf", PyvtkAbstractPicker_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAbstractPicker_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAbstractPicker_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAbstractPicker\nC++: static vtkAbstractPicker *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAbstractPicker_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAbstractPicker\nC++: vtkAbstractPicker *NewInstance()\n\n"},
  {"GetRenderer", PyvtkAbstractPicker_GetRenderer, METH_VARARGS,
   "V.GetRenderer() -> vtkRenderer\nC++: virtual vtkRenderer *GetRenderer()\n\nGet the renderer in which pick event occurred.\n"},
  {"GetSelectionPoint", PyvtkAbstractPicker_GetSelectionPoint, METH_VARARGS,
   "V.GetSelectionPoint() -> (float, float, float)\nC++: double *GetSelectionPoint()\n\nGet the selection point in screen (pixel) coordinates. The third\nvalue is related to z-buffer depth. (Normally should be =0.)\n"},
  {"GetPickPosition", PyvtkAbstractPicker_GetPickPosition, METH_VARARGS,
   "V.GetPickPosition() -> (float, float, float)\nC++: double *GetPickPosition()\n\nReturn position in global coordinates of pick point.\n"},
  {"Pick", PyvtkAbstractPicker_Pick, METH_VARARGS,
   "V.Pick(float, float, float, vtkRenderer) -> int\nC++: virtual int Pick(double selectionX, double selectionY,\n    double selectionZ, vtkRenderer *renderer)\nV.Pick([float, float, float], vtkRenderer) -> int\nC++: int Pick(double selectionPt[3], vtkRenderer *ren)\n\nPerform pick operation with selection point provided. Normally\nthe first two values for the selection point are x-y pixel\ncoordinate, and the third value is =0. Return non-zero if\nsomething was successfully picked.\n"},
  {"Pick3DPoint", PyvtkAbstractPicker_Pick3DPoint, METH_VARARGS,
   "V.Pick3DPoint([float, float, float], vtkRenderer) -> int\nC++: virtual int Pick3DPoint(double[3], vtkRenderer *)\n\nPerform pick operation with selection point provided. The\nselectionPt is in world coordinates. Return non-zero if something\nwas successfully picked.\n"},
  {"Pick3DRay", PyvtkAbstractPicker_Pick3DRay, METH_VARARGS,
   "V.Pick3DRay([float, float, float], [float, float, float, float],\n    vtkRenderer) -> int\nC++: virtual int Pick3DRay(double[3], double[4], vtkRenderer *)\n\nPerform pick operation with selection point and orientation\nprovided. The selectionPt is in world coordinates. Return\nnon-zero if something was successfully picked.\n"},
  {"SetPickFromList", PyvtkAbstractPicker_SetPickFromList, METH_VARARGS,
   "V.SetPickFromList(int)\nC++: virtual void SetPickFromList(vtkTypeBool _arg)\n\nUse these methods to control whether to limit the picking to this\nlist (rather than renderer's actors). Make sure that the pick\nlist contains actors that referred to by the picker's renderer.\n"},
  {"GetPickFromList", PyvtkAbstractPicker_GetPickFromList, METH_VARARGS,
   "V.GetPickFromList() -> int\nC++: virtual vtkTypeBool GetPickFromList()\n\nUse these methods to control whether to limit the picking to this\nlist (rather than renderer's actors). Make sure that the pick\nlist contains actors that referred to by the picker's renderer.\n"},
  {"PickFromListOn", PyvtkAbstractPicker_PickFromListOn, METH_VARARGS,
   "V.PickFromListOn()\nC++: virtual void PickFromListOn()\n\nUse these methods to control whether to limit the picking to this\nlist (rather than renderer's actors). Make sure that the pick\nlist contains actors that referred to by the picker's renderer.\n"},
  {"PickFromListOff", PyvtkAbstractPicker_PickFromListOff, METH_VARARGS,
   "V.PickFromListOff()\nC++: virtual void PickFromListOff()\n\nUse these methods to control whether to limit the picking to this\nlist (rather than renderer's actors). Make sure that the pick\nlist contains actors that referred to by the picker's renderer.\n"},
  {"InitializePickList", PyvtkAbstractPicker_InitializePickList, METH_VARARGS,
   "V.InitializePickList()\nC++: void InitializePickList()\n\nInitialize list of actors in pick list.\n"},
  {"AddPickList", PyvtkAbstractPicker_AddPickList, METH_VARARGS,
   "V.AddPickList(vtkProp)\nC++: void AddPickList(vtkProp *)\n\nAdd an actor to the pick list.\n"},
  {"DeletePickList", PyvtkAbstractPicker_DeletePickList, METH_VARARGS,
   "V.DeletePickList(vtkProp)\nC++: void DeletePickList(vtkProp *)\n\nDelete an actor from the pick list.\n"},
  {"GetPickList", PyvtkAbstractPicker_GetPickList, METH_VARARGS,
   "V.GetPickList() -> vtkPropCollection\nC++: vtkPropCollection *GetPickList()\n\nReturn the list of actors in the PickList.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAbstractPicker_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkAbstractPicker", // tp_name
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
  PyvtkAbstractPicker_Doc, // tp_doc
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

PyObject *PyvtkAbstractPicker_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAbstractPicker_Type, PyvtkAbstractPicker_Methods,
    "vtkAbstractPicker",
 nullptr);

  PyTypeObject *pytype = &PyvtkAbstractPicker_Type;

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

void PyVTKAddFile_vtkAbstractPicker(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAbstractPicker_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAbstractPicker", o) != 0)
  {
    Py_DECREF(o);
  }

}

