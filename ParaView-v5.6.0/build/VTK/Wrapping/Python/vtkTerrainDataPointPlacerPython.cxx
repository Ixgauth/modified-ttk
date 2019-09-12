// python wrapper for vtkTerrainDataPointPlacer
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
#include "vtkTerrainDataPointPlacer.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTerrainDataPointPlacer(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTerrainDataPointPlacer_ClassNew(); }

#ifndef DECLARED_PyvtkPointPlacer_ClassNew
extern "C" { PyObject *PyvtkPointPlacer_ClassNew(); }
#define DECLARED_PyvtkPointPlacer_ClassNew
#endif

static const char *PyvtkTerrainDataPointPlacer_Doc =
  "vtkTerrainDataPointPlacer - Place points on terrain data\n\n"
  "Superclass: vtkPointPlacer\n\n"
  "vtkTerrainDataPointPlacer dictates the placement of points on height\n"
  "field data. The class takes as input the list of props that represent\n"
  "the terrain in a rendered scene. A height offset can be specified to\n"
  "dicatate the placement of points at a certain height above the\n"
  "surface.\n\n"
  "@par Usage: A typical usage of this class is as\n"
  "follows:pointPlacer->AddProp(demActor);    // the actor(s) containing\n"
  "the terrain.\n"
  "rep->SetPointPlacer(pointPlacer);\n"
  "pointPlacer->SetHeightOffset( 100 );\n\n"
  "@sa\n"
  "vtkPointPlacer vtkTerrainContourLineInterpolator\n\n";


static PyObject *
PyvtkTerrainDataPointPlacer_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTerrainDataPointPlacer::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTerrainDataPointPlacer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTerrainDataPointPlacer *op = static_cast<vtkTerrainDataPointPlacer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTerrainDataPointPlacer::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTerrainDataPointPlacer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTerrainDataPointPlacer *tempr = vtkTerrainDataPointPlacer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTerrainDataPointPlacer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTerrainDataPointPlacer *op = static_cast<vtkTerrainDataPointPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTerrainDataPointPlacer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTerrainDataPointPlacer::NewInstance());

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
PyvtkTerrainDataPointPlacer_AddProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTerrainDataPointPlacer *op = static_cast<vtkTerrainDataPointPlacer *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->AddProp(temp0);
    }
    else
    {
      op->vtkTerrainDataPointPlacer::AddProp(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTerrainDataPointPlacer_RemoveAllProps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllProps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTerrainDataPointPlacer *op = static_cast<vtkTerrainDataPointPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllProps();
    }
    else
    {
      op->vtkTerrainDataPointPlacer::RemoveAllProps();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTerrainDataPointPlacer_SetHeightOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeightOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTerrainDataPointPlacer *op = static_cast<vtkTerrainDataPointPlacer *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHeightOffset(temp0);
    }
    else
    {
      op->vtkTerrainDataPointPlacer::SetHeightOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTerrainDataPointPlacer_GetHeightOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeightOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTerrainDataPointPlacer *op = static_cast<vtkTerrainDataPointPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHeightOffset() :
      op->vtkTerrainDataPointPlacer::GetHeightOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTerrainDataPointPlacer_ComputeWorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTerrainDataPointPlacer *op = static_cast<vtkTerrainDataPointPlacer *>(vp);

  vtkRenderer *temp0 = nullptr;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  const size_t size3 = 9;
  double temp3[9];
  double save3[9];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
  {
    ap.Save(temp1, save1, size1);
    ap.Save(temp2, save2, size2);
    ap.Save(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->ComputeWorldPosition(temp0, temp1, temp2, temp3) :
      op->vtkTerrainDataPointPlacer::ComputeWorldPosition(temp0, temp1, temp2, temp3));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTerrainDataPointPlacer_ComputeWorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTerrainDataPointPlacer *op = static_cast<vtkTerrainDataPointPlacer *>(vp);

  vtkRenderer *temp0 = nullptr;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  const size_t size3 = 3;
  double temp3[3];
  double save3[3];
  const size_t size4 = 9;
  double temp4[9];
  double save4[9];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
  {
    ap.Save(temp1, save1, size1);
    ap.Save(temp2, save2, size2);
    ap.Save(temp3, save3, size3);
    ap.Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->ComputeWorldPosition(temp0, temp1, temp2, temp3, temp4) :
      op->vtkTerrainDataPointPlacer::ComputeWorldPosition(temp0, temp1, temp2, temp3, temp4));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (ap.HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTerrainDataPointPlacer_ComputeWorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkTerrainDataPointPlacer_ComputeWorldPosition_s1(self, args);
    case 5:
      return PyvtkTerrainDataPointPlacer_ComputeWorldPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ComputeWorldPosition");
  return nullptr;
}



static PyObject *
PyvtkTerrainDataPointPlacer_ValidateWorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ValidateWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTerrainDataPointPlacer *op = static_cast<vtkTerrainDataPointPlacer *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->ValidateWorldPosition(temp0) :
      op->vtkTerrainDataPointPlacer::ValidateWorldPosition(temp0));

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
PyvtkTerrainDataPointPlacer_ValidateWorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ValidateWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTerrainDataPointPlacer *op = static_cast<vtkTerrainDataPointPlacer *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 9;
  double temp1[9];
  double save1[9];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->ValidateWorldPosition(temp0, temp1) :
      op->vtkTerrainDataPointPlacer::ValidateWorldPosition(temp0, temp1));

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
PyvtkTerrainDataPointPlacer_ValidateWorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkTerrainDataPointPlacer_ValidateWorldPosition_s1(self, args);
    case 2:
      return PyvtkTerrainDataPointPlacer_ValidateWorldPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ValidateWorldPosition");
  return nullptr;
}



static PyObject *
PyvtkTerrainDataPointPlacer_ValidateDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ValidateDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTerrainDataPointPlacer *op = static_cast<vtkTerrainDataPointPlacer *>(vp);

  vtkRenderer *temp0 = nullptr;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->ValidateDisplayPosition(temp0, temp1) :
      op->vtkTerrainDataPointPlacer::ValidateDisplayPosition(temp0, temp1));

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
PyvtkTerrainDataPointPlacer_GetPropPicker(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropPicker");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTerrainDataPointPlacer *op = static_cast<vtkTerrainDataPointPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPropPicker *tempr = (ap.IsBound() ?
      op->GetPropPicker() :
      op->vtkTerrainDataPointPlacer::GetPropPicker());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTerrainDataPointPlacer_Methods[] = {
  {"IsTypeOf", PyvtkTerrainDataPointPlacer_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instances of this class.\n"},
  {"IsA", PyvtkTerrainDataPointPlacer_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instances of this class.\n"},
  {"SafeDownCast", PyvtkTerrainDataPointPlacer_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTerrainDataPointPlacer\nC++: static vtkTerrainDataPointPlacer *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard methods for instances of this class.\n"},
  {"NewInstance", PyvtkTerrainDataPointPlacer_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTerrainDataPointPlacer\nC++: vtkTerrainDataPointPlacer *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {"AddProp", PyvtkTerrainDataPointPlacer_AddProp, METH_VARARGS,
   "V.AddProp(vtkProp)\nC++: virtual void AddProp(vtkProp *)\n\n"},
  {"RemoveAllProps", PyvtkTerrainDataPointPlacer_RemoveAllProps, METH_VARARGS,
   "V.RemoveAllProps()\nC++: virtual void RemoveAllProps()\n\n"},
  {"SetHeightOffset", PyvtkTerrainDataPointPlacer_SetHeightOffset, METH_VARARGS,
   "V.SetHeightOffset(float)\nC++: virtual void SetHeightOffset(double _arg)\n\nThis is the height above (or below) the terrain that the dictated\npoint should be placed. Positive values indicate distances above\nthe terrain; negative values indicate distances below the\nterrain. The default is 0.0.\n"},
  {"GetHeightOffset", PyvtkTerrainDataPointPlacer_GetHeightOffset, METH_VARARGS,
   "V.GetHeightOffset() -> float\nC++: virtual double GetHeightOffset()\n\nThis is the height above (or below) the terrain that the dictated\npoint should be placed. Positive values indicate distances above\nthe terrain; negative values indicate distances below the\nterrain. The default is 0.0.\n"},
  {"ComputeWorldPosition", PyvtkTerrainDataPointPlacer_ComputeWorldPosition, METH_VARARGS,
   "V.ComputeWorldPosition(vtkRenderer, [float, float], [float, float,\n     float], [float, float, float, float, float, float, float,\n    float, float]) -> int\nC++: int ComputeWorldPosition(vtkRenderer *ren,\n    double displayPos[2], double worldPos[3],\n    double worldOrient[9]) override;\nV.ComputeWorldPosition(vtkRenderer, [float, float], [float, float,\n     float], [float, float, float], [float, float, float, float,\n    float, float, float, float, float]) -> int\nC++: int ComputeWorldPosition(vtkRenderer *ren,\n    double displayPos[2], double refWorldPos[3],\n    double worldPos[3], double worldOrient[9]) override;\n\nGiven a renderer and a display position in pixel coordinates,\ncompute the world position and orientation where this point will\nbe placed. This method is typically used by the representation to\nplace the point initially. For the Terrain point placer this\ncomputes world points that lie at the specified height above the\nterrain.\n"},
  {"ValidateWorldPosition", PyvtkTerrainDataPointPlacer_ValidateWorldPosition, METH_VARARGS,
   "V.ValidateWorldPosition([float, float, float]) -> int\nC++: int ValidateWorldPosition(double worldPos[3]) override;\nV.ValidateWorldPosition([float, float, float], [float, float,\n    float, float, float, float, float, float, float]) -> int\nC++: int ValidateWorldPosition(double worldPos[3],\n    double worldOrient[9]) override;\n\nGiven a world position check the validity of this position\naccording to the constraints of the placer\n"},
  {"ValidateDisplayPosition", PyvtkTerrainDataPointPlacer_ValidateDisplayPosition, METH_VARARGS,
   "V.ValidateDisplayPosition(vtkRenderer, [float, float]) -> int\nC++: int ValidateDisplayPosition(vtkRenderer *,\n    double displayPos[2]) override;\n\nGiven a display position, check the validity of this position.\n"},
  {"GetPropPicker", PyvtkTerrainDataPointPlacer_GetPropPicker, METH_VARARGS,
   "V.GetPropPicker() -> vtkPropPicker\nC++: virtual vtkPropPicker *GetPropPicker()\n\nGet the Prop picker.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTerrainDataPointPlacer_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkTerrainDataPointPlacer", // tp_name
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
  PyvtkTerrainDataPointPlacer_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTerrainDataPointPlacer_StaticNew()
{
  return vtkTerrainDataPointPlacer::New();
}

PyObject *PyvtkTerrainDataPointPlacer_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTerrainDataPointPlacer_Type, PyvtkTerrainDataPointPlacer_Methods,
    "vtkTerrainDataPointPlacer",
 &PyvtkTerrainDataPointPlacer_StaticNew);

  PyTypeObject *pytype = &PyvtkTerrainDataPointPlacer_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPointPlacer_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTerrainDataPointPlacer(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTerrainDataPointPlacer_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTerrainDataPointPlacer", o) != 0)
  {
    Py_DECREF(o);
  }

}

