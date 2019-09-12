// python wrapper for vtkAreaPicker
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
#include "vtkAreaPicker.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAreaPicker(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAreaPicker_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractPropPicker_ClassNew
extern "C" { PyObject *PyvtkAbstractPropPicker_ClassNew(); }
#define DECLARED_PyvtkAbstractPropPicker_ClassNew
#endif

static const char *PyvtkAreaPicker_Doc =
  "vtkAreaPicker - Picks props behind a selection rectangle on a\nviewport.\n\n"
  "Superclass: vtkAbstractPropPicker\n\n"
  "The vtkAreaPicker picks all vtkProp3Ds that lie behind the screen\n"
  "space rectangle from x0,y0 and x1,y1. The selection is based upon the\n"
  "bounding box of the prop and is thus not exact.\n\n"
  "Like vtkPicker, a pick results in a list of Prop3Ds because many\n"
  "props may lie within the pick frustum. You can also get an\n"
  "AssemblyPath, which in this case is defined to be the path to the one\n"
  "particular prop in the Prop3D list that lies nearest to the near\n"
  "plane.\n\n"
  "This picker also returns the selection frustum, defined as either a\n"
  "vtkPlanes, or a set of eight corner vertices in world space. The\n"
  "vtkPlanes version is an ImplicitFunction, which is suitable for use\n"
  "with the vtkExtractGeometry. The six frustum planes are in order:\n"
  "left, right, bottom, top, near, far\n\n"
  "Because this picker picks everything within a volume, the world pick\n"
  "point result is ill-defined. Therefore if you ask this class for the\n"
  "world pick position, you will get the centroid of the pick frustum.\n"
  "This may be outside of all props in the prop list.\n\n"
  "@sa\n"
  "vtkInteractorStyleRubberBandPick, vtkExtractSelectedFrustum.\n\n";


static PyObject *
PyvtkAreaPicker_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAreaPicker::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAreaPicker_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaPicker *op = static_cast<vtkAreaPicker *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAreaPicker::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAreaPicker_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAreaPicker *tempr = vtkAreaPicker::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAreaPicker_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaPicker *op = static_cast<vtkAreaPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAreaPicker *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAreaPicker::NewInstance());

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
PyvtkAreaPicker_SetPickCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPickCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaPicker *op = static_cast<vtkAreaPicker *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetPickCoords(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkAreaPicker::SetPickCoords(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAreaPicker_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaPicker *op = static_cast<vtkAreaPicker *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->SetRenderer(temp0);
    }
    else
    {
      op->vtkAreaPicker::SetRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAreaPicker_Pick_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaPicker *op = static_cast<vtkAreaPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->Pick() :
      op->vtkAreaPicker::Pick());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAreaPicker_Pick_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaPicker *op = static_cast<vtkAreaPicker *>(vp);

  double temp0;
  double temp1;
  double temp2;
  vtkRenderer *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp3, "vtkRenderer")))
  {
    int tempr = (ap.IsBound() ?
      op->Pick(temp0, temp1, temp2, temp3) :
      op->vtkAreaPicker::Pick(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAreaPicker_Pick(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkAreaPicker_Pick_s1(self, args);
    case 3:
    case 4:
      return PyvtkAreaPicker_Pick_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Pick");
  return nullptr;
}



static PyObject *
PyvtkAreaPicker_AreaPick(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AreaPick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaPicker *op = static_cast<vtkAreaPicker *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  vtkRenderer *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4, 5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp4, "vtkRenderer")))
  {
    int tempr = (ap.IsBound() ?
      op->AreaPick(temp0, temp1, temp2, temp3, temp4) :
      op->vtkAreaPicker::AreaPick(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAreaPicker_GetMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaPicker *op = static_cast<vtkAreaPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractMapper3D *tempr = (ap.IsBound() ?
      op->GetMapper() :
      op->vtkAreaPicker::GetMapper());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAreaPicker_GetDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaPicker *op = static_cast<vtkAreaPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetDataSet() :
      op->vtkAreaPicker::GetDataSet());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAreaPicker_GetProp3Ds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProp3Ds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaPicker *op = static_cast<vtkAreaPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProp3DCollection *tempr = (ap.IsBound() ?
      op->GetProp3Ds() :
      op->vtkAreaPicker::GetProp3Ds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAreaPicker_GetFrustum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrustum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaPicker *op = static_cast<vtkAreaPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlanes *tempr = (ap.IsBound() ?
      op->GetFrustum() :
      op->vtkAreaPicker::GetFrustum());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAreaPicker_GetClipPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClipPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaPicker *op = static_cast<vtkAreaPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPoints *tempr = (ap.IsBound() ?
      op->GetClipPoints() :
      op->vtkAreaPicker::GetClipPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAreaPicker_Methods[] = {
  {"IsTypeOf", PyvtkAreaPicker_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAreaPicker_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAreaPicker_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAreaPicker\nC++: static vtkAreaPicker *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAreaPicker_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAreaPicker\nC++: vtkAreaPicker *NewInstance()\n\n"},
  {"SetPickCoords", PyvtkAreaPicker_SetPickCoords, METH_VARARGS,
   "V.SetPickCoords(float, float, float, float)\nC++: void SetPickCoords(double x0, double y0, double x1,\n    double y1)\n\nSet the default screen rectangle to pick in.\n"},
  {"SetRenderer", PyvtkAreaPicker_SetRenderer, METH_VARARGS,
   "V.SetRenderer(vtkRenderer)\nC++: void SetRenderer(vtkRenderer *)\n\nSet the default renderer to pick on.\n"},
  {"Pick", PyvtkAreaPicker_Pick, METH_VARARGS,
   "V.Pick() -> int\nC++: virtual int Pick()\nV.Pick(float, float, float, vtkRenderer) -> int\nC++: int Pick(double x0, double y0, double z0,\n    vtkRenderer *renderer=nullptr) override;\n\nPerform an AreaPick within the default screen rectangle and\nrenderer.\n"},
  {"AreaPick", PyvtkAreaPicker_AreaPick, METH_VARARGS,
   "V.AreaPick(float, float, float, float, vtkRenderer) -> int\nC++: virtual int AreaPick(double x0, double y0, double x1,\n    double y1, vtkRenderer *renderer=nullptr)\n\nPerform pick operation in volume behind the given screen\ncoordinates. Props intersecting the selection frustum will be\naccessible via GetProp3D. GetPlanes returns a vtkImplicitFunction\nsuitable for vtkExtractGeometry.\n"},
  {"GetMapper", PyvtkAreaPicker_GetMapper, METH_VARARGS,
   "V.GetMapper() -> vtkAbstractMapper3D\nC++: virtual vtkAbstractMapper3D *GetMapper()\n\nReturn mapper that was picked (if any).\n"},
  {"GetDataSet", PyvtkAreaPicker_GetDataSet, METH_VARARGS,
   "V.GetDataSet() -> vtkDataSet\nC++: virtual vtkDataSet *GetDataSet()\n\nGet a pointer to the dataset that was picked (if any). If nothing\nwas picked then NULL is returned.\n"},
  {"GetProp3Ds", PyvtkAreaPicker_GetProp3Ds, METH_VARARGS,
   "V.GetProp3Ds() -> vtkProp3DCollection\nC++: vtkProp3DCollection *GetProp3Ds()\n\nReturn a collection of all the prop 3D's that were intersected by\nthe pick ray. This collection is not sorted.\n"},
  {"GetFrustum", PyvtkAreaPicker_GetFrustum, METH_VARARGS,
   "V.GetFrustum() -> vtkPlanes\nC++: virtual vtkPlanes *GetFrustum()\n\nReturn the six planes that define the selection frustum. The\nimplicit function defined by the planes evaluates to negative\ninside and positive outside.\n"},
  {"GetClipPoints", PyvtkAreaPicker_GetClipPoints, METH_VARARGS,
   "V.GetClipPoints() -> vtkPoints\nC++: virtual vtkPoints *GetClipPoints()\n\nReturn eight points that define the selection frustum.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAreaPicker_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkAreaPicker", // tp_name
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
  PyvtkAreaPicker_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAreaPicker_StaticNew()
{
  return vtkAreaPicker::New();
}

PyObject *PyvtkAreaPicker_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAreaPicker_Type, PyvtkAreaPicker_Methods,
    "vtkAreaPicker",
 &PyvtkAreaPicker_StaticNew);

  PyTypeObject *pytype = &PyvtkAreaPicker_Type;

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

void PyVTKAddFile_vtkAreaPicker(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAreaPicker_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAreaPicker", o) != 0)
  {
    Py_DECREF(o);
  }

}

