// python wrapper for vtkTensorProbeRepresentation
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
#include "vtkTensorProbeRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTensorProbeRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTensorProbeRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkWidgetRepresentation_ClassNew
extern "C" { PyObject *PyvtkWidgetRepresentation_ClassNew(); }
#define DECLARED_PyvtkWidgetRepresentation_ClassNew
#endif

static const char *PyvtkTensorProbeRepresentation_Doc =
  "vtkTensorProbeRepresentation - Abstract class that serves as a\nrepresentation for vtkTensorProbeWidget\n\n"
  "Superclass: vtkWidgetRepresentation\n\n"
  "The class serves as an abstract geometrical representation for the\n"
  "vtkTensorProbeWidget. It is left to the concrete implementation to\n"
  "render the tensors as it desires. For instance,\n"
  "vtkEllipsoidTensorProbeRepresentation renders the tensors as\n"
  "ellipsoids.\n\n"
  "@sa\n"
  "vtkTensorProbeWidget\n\n";


static PyObject *
PyvtkTensorProbeRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTensorProbeRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorProbeRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeRepresentation *op = static_cast<vtkTensorProbeRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTensorProbeRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorProbeRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTensorProbeRepresentation *tempr = vtkTensorProbeRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorProbeRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeRepresentation *op = static_cast<vtkTensorProbeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTensorProbeRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTensorProbeRepresentation::NewInstance());

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
PyvtkTensorProbeRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeRepresentation *op = static_cast<vtkTensorProbeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkTensorProbeRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorProbeRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeRepresentation *op = static_cast<vtkTensorProbeRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkTensorProbeRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorProbeRepresentation_SetProbePosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProbePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeRepresentation *op = static_cast<vtkTensorProbeRepresentation *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetProbePosition(temp0, temp1, temp2);
    }
    else
    {
      op->vtkTensorProbeRepresentation::SetProbePosition(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTensorProbeRepresentation_SetProbePosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProbePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeRepresentation *op = static_cast<vtkTensorProbeRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetProbePosition(temp0);
    }
    else
    {
      op->vtkTensorProbeRepresentation::SetProbePosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTensorProbeRepresentation_SetProbePosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTensorProbeRepresentation_SetProbePosition_s1(self, args);
    case 1:
      return PyvtkTensorProbeRepresentation_SetProbePosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetProbePosition");
  return nullptr;
}



static PyObject *
PyvtkTensorProbeRepresentation_GetProbePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProbePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeRepresentation *op = static_cast<vtkTensorProbeRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetProbePosition() :
      op->vtkTensorProbeRepresentation::GetProbePosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorProbeRepresentation_SetProbeCellId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProbeCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeRepresentation *op = static_cast<vtkTensorProbeRepresentation *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProbeCellId(temp0);
    }
    else
    {
      op->vtkTensorProbeRepresentation::SetProbeCellId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorProbeRepresentation_GetProbeCellId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProbeCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeRepresentation *op = static_cast<vtkTensorProbeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetProbeCellId() :
      op->vtkTensorProbeRepresentation::GetProbeCellId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorProbeRepresentation_SetTrajectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTrajectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeRepresentation *op = static_cast<vtkTensorProbeRepresentation *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->SetTrajectory(temp0);
    }
    else
    {
      op->vtkTensorProbeRepresentation::SetTrajectory(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorProbeRepresentation_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeRepresentation *op = static_cast<vtkTensorProbeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkTensorProbeRepresentation::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorProbeRepresentation_SelectProbe(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectProbe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeRepresentation *op = static_cast<vtkTensorProbeRepresentation *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  int save0[2];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    int tempr = op->SelectProbe(temp0);

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
PyvtkTensorProbeRepresentation_Move(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Move");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeRepresentation *op = static_cast<vtkTensorProbeRepresentation *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Move(temp0) :
      op->vtkTensorProbeRepresentation::Move(temp0));

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
PyvtkTensorProbeRepresentation_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeRepresentation *op = static_cast<vtkTensorProbeRepresentation *>(vp);

  vtkPropCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
  {
    if (ap.IsBound())
    {
      op->GetActors(temp0);
    }
    else
    {
      op->vtkTensorProbeRepresentation::GetActors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorProbeRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeRepresentation *op = static_cast<vtkTensorProbeRepresentation *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources(temp0);
    }
    else
    {
      op->vtkTensorProbeRepresentation::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTensorProbeRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkTensorProbeRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instances of this class.\n"},
  {"IsA", PyvtkTensorProbeRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instances of this class.\n"},
  {"SafeDownCast", PyvtkTensorProbeRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTensorProbeRepresentation\nC++: static vtkTensorProbeRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard methods for instances of this class.\n"},
  {"NewInstance", PyvtkTensorProbeRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTensorProbeRepresentation\nC++: vtkTensorProbeRepresentation *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {"BuildRepresentation", PyvtkTensorProbeRepresentation_BuildRepresentation, METH_VARARGS,
   "V.BuildRepresentation()\nC++: void BuildRepresentation() override;\n\nSee vtkWidgetRepresentation for details.\n"},
  {"RenderOpaqueGeometry", PyvtkTensorProbeRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *) override;\n\nSee vtkWidgetRepresentation for details.\n"},
  {"SetProbePosition", PyvtkTensorProbeRepresentation_SetProbePosition, METH_VARARGS,
   "V.SetProbePosition(float, float, float)\nC++: void SetProbePosition(double, double, double)\nV.SetProbePosition((float, float, float))\nC++: void SetProbePosition(double a[3])\n\n"},
  {"GetProbePosition", PyvtkTensorProbeRepresentation_GetProbePosition, METH_VARARGS,
   "V.GetProbePosition() -> (float, float, float)\nC++: double *GetProbePosition()\n\n"},
  {"SetProbeCellId", PyvtkTensorProbeRepresentation_SetProbeCellId, METH_VARARGS,
   "V.SetProbeCellId(int)\nC++: virtual void SetProbeCellId(vtkIdType _arg)\n\nSet the position of the Tensor probe.\n"},
  {"GetProbeCellId", PyvtkTensorProbeRepresentation_GetProbeCellId, METH_VARARGS,
   "V.GetProbeCellId() -> int\nC++: virtual vtkIdType GetProbeCellId()\n\nSet the position of the Tensor probe.\n"},
  {"SetTrajectory", PyvtkTensorProbeRepresentation_SetTrajectory, METH_VARARGS,
   "V.SetTrajectory(vtkPolyData)\nC++: virtual void SetTrajectory(vtkPolyData *)\n\nSet the trajectory that we are trying to probe tensors on\n"},
  {"Initialize", PyvtkTensorProbeRepresentation_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: void Initialize()\n\nSet the probe position to a reasonable location on the\ntrajectory.\n"},
  {"SelectProbe", PyvtkTensorProbeRepresentation_SelectProbe, METH_VARARGS,
   "V.SelectProbe([int, int]) -> int\nC++: virtual int SelectProbe(int pos[2])\n\nThis method is invoked by the widget during user interaction. Can\nwe pick the tensor glyph at the current cursor pos\n"},
  {"Move", PyvtkTensorProbeRepresentation_Move, METH_VARARGS,
   "V.Move([float, float]) -> int\nC++: virtual int Move(double motionVector[2])\n\nINTERNAL - Do not use This method is invoked by the widget during\nuser interaction. Move probe based on the position and the motion\nvector.\n"},
  {"GetActors", PyvtkTensorProbeRepresentation_GetActors, METH_VARARGS,
   "V.GetActors(vtkPropCollection)\nC++: void GetActors(vtkPropCollection *) override;\n\nSee vtkProp for details.\n"},
  {"ReleaseGraphicsResources", PyvtkTensorProbeRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nSee vtkProp for details.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTensorProbeRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkTensorProbeRepresentation", // tp_name
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
  PyvtkTensorProbeRepresentation_Doc, // tp_doc
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

PyObject *PyvtkTensorProbeRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTensorProbeRepresentation_Type, PyvtkTensorProbeRepresentation_Methods,
    "vtkTensorProbeRepresentation",
 nullptr);

  PyTypeObject *pytype = &PyvtkTensorProbeRepresentation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkWidgetRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTensorProbeRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTensorProbeRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTensorProbeRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

