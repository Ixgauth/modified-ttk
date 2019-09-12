// python wrapper for vtkEllipsoidTensorProbeRepresentation
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
#include "vtkEllipsoidTensorProbeRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkEllipsoidTensorProbeRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkEllipsoidTensorProbeRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkTensorProbeRepresentation_ClassNew
extern "C" { PyObject *PyvtkTensorProbeRepresentation_ClassNew(); }
#define DECLARED_PyvtkTensorProbeRepresentation_ClassNew
#endif

static const char *PyvtkEllipsoidTensorProbeRepresentation_Doc =
  "vtkEllipsoidTensorProbeRepresentation - A concrete implementation of\nvtkTensorProbeRepresentation that renders tensors as ellipoids.\n\n"
  "Superclass: vtkTensorProbeRepresentation\n\n"
  "vtkEllipsoidTensorProbeRepresentation is a concrete implementation of\n"
  "vtkTensorProbeRepresentation. It renders tensors as ellipsoids.\n"
  "Locations between two points when probed have the tensors linearly\n"
  "interpolated from the neighboring locations on the polyline.\n\n"
  "@sa\n"
  "vtkTensorProbeWidget\n\n";


static PyObject *
PyvtkEllipsoidTensorProbeRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkEllipsoidTensorProbeRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipsoidTensorProbeRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipsoidTensorProbeRepresentation *op = static_cast<vtkEllipsoidTensorProbeRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkEllipsoidTensorProbeRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipsoidTensorProbeRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkEllipsoidTensorProbeRepresentation *tempr = vtkEllipsoidTensorProbeRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipsoidTensorProbeRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipsoidTensorProbeRepresentation *op = static_cast<vtkEllipsoidTensorProbeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkEllipsoidTensorProbeRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkEllipsoidTensorProbeRepresentation::NewInstance());

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
PyvtkEllipsoidTensorProbeRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipsoidTensorProbeRepresentation *op = static_cast<vtkEllipsoidTensorProbeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkEllipsoidTensorProbeRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEllipsoidTensorProbeRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipsoidTensorProbeRepresentation *op = static_cast<vtkEllipsoidTensorProbeRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkEllipsoidTensorProbeRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipsoidTensorProbeRepresentation_SelectProbe(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectProbe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipsoidTensorProbeRepresentation *op = static_cast<vtkEllipsoidTensorProbeRepresentation *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  int save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->SelectProbe(temp0) :
      op->vtkEllipsoidTensorProbeRepresentation::SelectProbe(temp0));

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
PyvtkEllipsoidTensorProbeRepresentation_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipsoidTensorProbeRepresentation *op = static_cast<vtkEllipsoidTensorProbeRepresentation *>(vp);

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
      op->vtkEllipsoidTensorProbeRepresentation::GetActors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEllipsoidTensorProbeRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipsoidTensorProbeRepresentation *op = static_cast<vtkEllipsoidTensorProbeRepresentation *>(vp);

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
      op->vtkEllipsoidTensorProbeRepresentation::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEllipsoidTensorProbeRepresentation_RegisterPickers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterPickers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipsoidTensorProbeRepresentation *op = static_cast<vtkEllipsoidTensorProbeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RegisterPickers();
    }
    else
    {
      op->vtkEllipsoidTensorProbeRepresentation::RegisterPickers();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkEllipsoidTensorProbeRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkEllipsoidTensorProbeRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instances of this class.\n"},
  {"IsA", PyvtkEllipsoidTensorProbeRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instances of this class.\n"},
  {"SafeDownCast", PyvtkEllipsoidTensorProbeRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkEllipsoidTensorProbeRepresentation\nC++: static vtkEllipsoidTensorProbeRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard methods for instances of this class.\n"},
  {"NewInstance", PyvtkEllipsoidTensorProbeRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkEllipsoidTensorProbeRepresentation\nC++: vtkEllipsoidTensorProbeRepresentation *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {"BuildRepresentation", PyvtkEllipsoidTensorProbeRepresentation_BuildRepresentation, METH_VARARGS,
   "V.BuildRepresentation()\nC++: void BuildRepresentation() override;\n\nSee vtkWidgetRepresentation for details.\n"},
  {"RenderOpaqueGeometry", PyvtkEllipsoidTensorProbeRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *) override;\n\nSee vtkWidgetRepresentation for details.\n"},
  {"SelectProbe", PyvtkEllipsoidTensorProbeRepresentation_SelectProbe, METH_VARARGS,
   "V.SelectProbe([int, int]) -> int\nC++: int SelectProbe(int pos[2]) override;\n\nCan we pick the tensor glyph at the current cursor pos\n"},
  {"GetActors", PyvtkEllipsoidTensorProbeRepresentation_GetActors, METH_VARARGS,
   "V.GetActors(vtkPropCollection)\nC++: void GetActors(vtkPropCollection *) override;\n\nSee vtkProp for details.\n"},
  {"ReleaseGraphicsResources", PyvtkEllipsoidTensorProbeRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nSee vtkProp for details.\n"},
  {"RegisterPickers", PyvtkEllipsoidTensorProbeRepresentation_RegisterPickers, METH_VARARGS,
   "V.RegisterPickers()\nC++: void RegisterPickers() override;\n\nRegister internal Pickers in the Picking Manager. Must be\nreimplemented by concrete widget representations to register\ntheir pickers.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkEllipsoidTensorProbeRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkEllipsoidTensorProbeRepresentation", // tp_name
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
  PyvtkEllipsoidTensorProbeRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkEllipsoidTensorProbeRepresentation_StaticNew()
{
  return vtkEllipsoidTensorProbeRepresentation::New();
}

PyObject *PyvtkEllipsoidTensorProbeRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkEllipsoidTensorProbeRepresentation_Type, PyvtkEllipsoidTensorProbeRepresentation_Methods,
    "vtkEllipsoidTensorProbeRepresentation",
 &PyvtkEllipsoidTensorProbeRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkEllipsoidTensorProbeRepresentation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkTensorProbeRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkEllipsoidTensorProbeRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkEllipsoidTensorProbeRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkEllipsoidTensorProbeRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

