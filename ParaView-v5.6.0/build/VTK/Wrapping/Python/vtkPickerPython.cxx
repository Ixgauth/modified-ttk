// python wrapper for vtkPicker
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
#include "vtkPicker.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPicker(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPicker_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractPropPicker_ClassNew
extern "C" { PyObject *PyvtkAbstractPropPicker_ClassNew(); }
#define DECLARED_PyvtkAbstractPropPicker_ClassNew
#endif

static const char *PyvtkPicker_Doc =
  "vtkPicker - superclass for 3D geometric pickers (uses ray cast)\n\n"
  "Superclass: vtkAbstractPropPicker\n\n"
  "vtkPicker is used to select instances of vtkProp3D by shooting a ray\n"
  "into a graphics window and intersecting with the actor's bounding\n"
  "box. The ray is defined from a point defined in window (or pixel)\n"
  "coordinates, and a point located from the camera's position.\n\n"
  "vtkPicker may return more than one vtkProp3D, since more than one\n"
  "bounding box may be intersected. vtkPicker returns an unsorted list\n"
  "of props that were hit, and a list of the corresponding world points\n"
  "of the hits. For the vtkProp3D that is closest to the camera,\n"
  "vtkPicker returns the pick coordinates in world and untransformed\n"
  "mapper space, the prop itself, the data set, and the mapper.  For\n"
  "vtkPicker the closest prop is the one whose center point (i.e.,\n"
  "center of bounding box) projected on the view ray is closest to the\n"
  "camera.  Subclasses of vtkPicker use other methods for computing the\n"
  "pick point.\n\n"
  "@sa\n"
  "vtkPicker is used for quick geometric picking. If you desire more\n"
  "precise picking of points or cells based on the geometry of any\n"
  "vtkProp3D, use the subclasses vtkPointPicker or vtkCellPicker.  For\n"
  "hardware-accelerated picking of any type of vtkProp, use\n"
  "vtkPropPicker or vtkWorldPointPicker.\n\n";


static PyObject *
PyvtkPicker_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPicker::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPicker_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPicker *op = static_cast<vtkPicker *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPicker::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPicker_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPicker *tempr = vtkPicker::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPicker_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPicker *op = static_cast<vtkPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPicker *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPicker::NewInstance());

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
PyvtkPicker_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPicker *op = static_cast<vtkPicker *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTolerance(temp0);
    }
    else
    {
      op->vtkPicker::SetTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPicker_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPicker *op = static_cast<vtkPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkPicker::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPicker_GetMapperPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMapperPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPicker *op = static_cast<vtkPicker *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetMapperPosition() :
      op->vtkPicker::GetMapperPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPicker_GetMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPicker *op = static_cast<vtkPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractMapper3D *tempr = (ap.IsBound() ?
      op->GetMapper() :
      op->vtkPicker::GetMapper());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPicker_GetDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPicker *op = static_cast<vtkPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetDataSet() :
      op->vtkPicker::GetDataSet());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPicker_GetCompositeDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPicker *op = static_cast<vtkPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCompositeDataSet *tempr = (ap.IsBound() ?
      op->GetCompositeDataSet() :
      op->vtkPicker::GetCompositeDataSet());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPicker_GetFlatBlockIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlatBlockIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPicker *op = static_cast<vtkPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetFlatBlockIndex() :
      op->vtkPicker::GetFlatBlockIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPicker_GetProp3Ds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProp3Ds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPicker *op = static_cast<vtkPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProp3DCollection *tempr = (ap.IsBound() ?
      op->GetProp3Ds() :
      op->vtkPicker::GetProp3Ds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPicker_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPicker *op = static_cast<vtkPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkActorCollection *tempr = (ap.IsBound() ?
      op->GetActors() :
      op->vtkPicker::GetActors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPicker_GetPickedPositions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickedPositions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPicker *op = static_cast<vtkPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPoints *tempr = (ap.IsBound() ?
      op->GetPickedPositions() :
      op->vtkPicker::GetPickedPositions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPicker_Pick_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPicker *op = static_cast<vtkPicker *>(vp);

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
      op->vtkPicker::Pick(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPicker_Pick_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPicker *op = static_cast<vtkPicker *>(vp);

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
      op->vtkPicker::Pick(temp0, temp1));

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
PyvtkPicker_Pick(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkPicker_Pick_s1(self, args);
    case 2:
      return PyvtkPicker_Pick_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Pick");
  return nullptr;
}



static PyObject *
PyvtkPicker_Pick3DPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pick3DPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPicker *op = static_cast<vtkPicker *>(vp);

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
      op->vtkPicker::Pick3DPoint(temp0, temp1));

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
PyvtkPicker_Pick3DRay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pick3DRay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPicker *op = static_cast<vtkPicker *>(vp);

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
      op->vtkPicker::Pick3DRay(temp0, temp1, temp2));

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

static PyMethodDef PyvtkPicker_Methods[] = {
  {"IsTypeOf", PyvtkPicker_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPicker_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPicker_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPicker\nC++: static vtkPicker *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPicker_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPicker\nC++: vtkPicker *NewInstance()\n\n"},
  {"SetTolerance", PyvtkPicker_SetTolerance, METH_VARARGS,
   "V.SetTolerance(float)\nC++: virtual void SetTolerance(double _arg)\n\nSpecify tolerance for performing pick operation. Tolerance is\nspecified as fraction of rendering window size. (Rendering window\nsize is measured across diagonal.)\n"},
  {"GetTolerance", PyvtkPicker_GetTolerance, METH_VARARGS,
   "V.GetTolerance() -> float\nC++: virtual double GetTolerance()\n\nSpecify tolerance for performing pick operation. Tolerance is\nspecified as fraction of rendering window size. (Rendering window\nsize is measured across diagonal.)\n"},
  {"GetMapperPosition", PyvtkPicker_GetMapperPosition, METH_VARARGS,
   "V.GetMapperPosition() -> (float, float, float)\nC++: double *GetMapperPosition()\n\nReturn position in mapper (i.e., non-transformed) coordinates of\npick point.\n"},
  {"GetMapper", PyvtkPicker_GetMapper, METH_VARARGS,
   "V.GetMapper() -> vtkAbstractMapper3D\nC++: virtual vtkAbstractMapper3D *GetMapper()\n\nReturn mapper that was picked (if any).\n"},
  {"GetDataSet", PyvtkPicker_GetDataSet, METH_VARARGS,
   "V.GetDataSet() -> vtkDataSet\nC++: virtual vtkDataSet *GetDataSet()\n\nGet a pointer to the dataset that was picked (if any). If nothing\nwas picked then NULL is returned.\n"},
  {"GetCompositeDataSet", PyvtkPicker_GetCompositeDataSet, METH_VARARGS,
   "V.GetCompositeDataSet() -> vtkCompositeDataSet\nC++: virtual vtkCompositeDataSet *GetCompositeDataSet()\n\nGet a pointer to the composite dataset that was picked (if any).\nIf nothing was picked or a non-composite data object was picked\nthen NULL is returned.\n"},
  {"GetFlatBlockIndex", PyvtkPicker_GetFlatBlockIndex, METH_VARARGS,
   "V.GetFlatBlockIndex() -> int\nC++: virtual vtkIdType GetFlatBlockIndex()\n\nGet the flat block index of the vtkDataSet in the composite\ndataset that was picked (if any). If nothing was picked or a\nnon-composite data object was picked then -1 is returned.\n"},
  {"GetProp3Ds", PyvtkPicker_GetProp3Ds, METH_VARARGS,
   "V.GetProp3Ds() -> vtkProp3DCollection\nC++: vtkProp3DCollection *GetProp3Ds()\n\nReturn a collection of all the prop 3D's that were intersected by\nthe pick ray. This collection is not sorted.\n"},
  {"GetActors", PyvtkPicker_GetActors, METH_VARARGS,
   "V.GetActors() -> vtkActorCollection\nC++: vtkActorCollection *GetActors()\n\nReturn a collection of all the actors that were intersected. This\ncollection is not sorted. (This is a convenience method to\nmaintain backward compatibility.)\n"},
  {"GetPickedPositions", PyvtkPicker_GetPickedPositions, METH_VARARGS,
   "V.GetPickedPositions() -> vtkPoints\nC++: vtkPoints *GetPickedPositions()\n\nReturn a list of the points the actors returned by GetProp3Ds\nwere intersected at. The order of this list will match the order\nof GetProp3Ds.\n"},
  {"Pick", PyvtkPicker_Pick, METH_VARARGS,
   "V.Pick(float, float, float, vtkRenderer) -> int\nC++: int Pick(double selectionX, double selectionY,\n    double selectionZ, vtkRenderer *renderer) override;\nV.Pick([float, float, float], vtkRenderer) -> int\nC++: int Pick(double selectionPt[3], vtkRenderer *ren)\n\nPerform pick operation with selection point provided. Normally\nthe first two values for the selection point are x-y pixel\ncoordinate, and the third value is =0. Return non-zero if\nsomething was successfully picked.\n"},
  {"Pick3DPoint", PyvtkPicker_Pick3DPoint, METH_VARARGS,
   "V.Pick3DPoint([float, float, float], vtkRenderer) -> int\nC++: int Pick3DPoint(double selectionPt[3], vtkRenderer *ren)\n    override;\n\nPerform pick operation with selection point provided. The\nselectionPt is in world coordinates. Return non-zero if something\nwas successfully picked.\n"},
  {"Pick3DRay", PyvtkPicker_Pick3DRay, METH_VARARGS,
   "V.Pick3DRay([float, float, float], [float, float, float, float],\n    vtkRenderer) -> int\nC++: int Pick3DRay(double selectionPt[3], double orient[4],\n    vtkRenderer *ren) override;\n\nPerform pick operation with selection point and orientation\nprovided. The selectionPt is in world coordinates. Return\nnon-zero if something was successfully picked.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPicker_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkPicker", // tp_name
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
  PyvtkPicker_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPicker_StaticNew()
{
  return vtkPicker::New();
}

PyObject *PyvtkPicker_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPicker_Type, PyvtkPicker_Methods,
    "vtkPicker",
 &PyvtkPicker_StaticNew);

  PyTypeObject *pytype = &PyvtkPicker_Type;

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

void PyVTKAddFile_vtkPicker(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPicker_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPicker", o) != 0)
  {
    Py_DECREF(o);
  }

}

