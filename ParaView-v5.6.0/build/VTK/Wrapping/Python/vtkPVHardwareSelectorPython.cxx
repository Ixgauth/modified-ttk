// python wrapper for vtkPVHardwareSelector
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
#include "vtkPVHardwareSelector.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVHardwareSelector(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVHardwareSelector_ClassNew(); }

#ifndef DECLARED_PyvtkOpenGLHardwareSelector_ClassNew
extern "C" { PyObject *PyvtkOpenGLHardwareSelector_ClassNew(); }
#define DECLARED_PyvtkOpenGLHardwareSelector_ClassNew
#endif

static const char *PyvtkPVHardwareSelector_Doc =
  "vtkPVHardwareSelector - vtkHardwareSelector subclass with paraview\nsepecific logic to avoid recapturing buffers unless needed.\n\n"
  "Superclass: vtkOpenGLHardwareSelector\n\n"
  "vtkHardwareSelector is subclass of vtkHardwareSelector that adds\n"
  "logic to reuse the captured buffers as much as possible. Thus\n"
  "avoiding repeated selection-rendering of repeated selections or\n"
  "picking. This class does not know, however, when the cached buffers\n"
  "are invalid. External logic must explicitly calls\n"
  "InvalidateCachedSelection() to ensure that the cache is not reused.\n\n";


static PyObject *
PyvtkPVHardwareSelector_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVHardwareSelector::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVHardwareSelector_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHardwareSelector *op = static_cast<vtkPVHardwareSelector *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVHardwareSelector::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVHardwareSelector_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVHardwareSelector *tempr = vtkPVHardwareSelector::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVHardwareSelector_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHardwareSelector *op = static_cast<vtkPVHardwareSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVHardwareSelector *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVHardwareSelector::NewInstance());

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
PyvtkPVHardwareSelector_Select(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Select");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHardwareSelector *op = static_cast<vtkPVHardwareSelector *>(vp);

  const size_t size0 = 4;
  int temp0[4];
  int save0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    vtkSelection *tempr = (ap.IsBound() ?
      op->Select(temp0) :
      op->vtkPVHardwareSelector::Select(temp0));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVHardwareSelector_PolygonSelect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PolygonSelect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHardwareSelector *op = static_cast<vtkPVHardwareSelector *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    ap.Save(temp0, save0, size0);

    vtkSelection *tempr = (ap.IsBound() ?
      op->PolygonSelect(temp0, temp1) :
      op->vtkPVHardwareSelector::PolygonSelect(temp0, temp1));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVHardwareSelector_NeedToRenderForSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NeedToRenderForSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHardwareSelector *op = static_cast<vtkPVHardwareSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->NeedToRenderForSelection() :
      op->vtkPVHardwareSelector::NeedToRenderForSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVHardwareSelector_InvalidateCachedSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvalidateCachedSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHardwareSelector *op = static_cast<vtkPVHardwareSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InvalidateCachedSelection();
    }
    else
    {
      op->vtkPVHardwareSelector::InvalidateCachedSelection();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVHardwareSelector_AssignUniqueId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AssignUniqueId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHardwareSelector *op = static_cast<vtkPVHardwareSelector *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    int tempr = (ap.IsBound() ?
      op->AssignUniqueId(temp0) :
      op->vtkPVHardwareSelector::AssignUniqueId(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVHardwareSelector_SetSynchronizedWindows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSynchronizedWindows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHardwareSelector *op = static_cast<vtkPVHardwareSelector *>(vp);

  vtkPVSynchronizedRenderWindows *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVSynchronizedRenderWindows"))
  {
    if (ap.IsBound())
    {
      op->SetSynchronizedWindows(temp0);
    }
    else
    {
      op->vtkPVHardwareSelector::SetSynchronizedWindows(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVHardwareSelector_BeginRenderProp_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BeginRenderProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHardwareSelector *op = static_cast<vtkPVHardwareSelector *>(vp);

  vtkRenderWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
  {
    if (ap.IsBound())
    {
      op->BeginRenderProp(temp0);
    }
    else
    {
      op->vtkPVHardwareSelector::BeginRenderProp(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVHardwareSelector_BeginRenderProp_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BeginRenderProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHardwareSelector *op = static_cast<vtkPVHardwareSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BeginRenderProp();
    }
    else
    {
      op->vtkPVHardwareSelector::BeginRenderProp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVHardwareSelector_BeginRenderProp(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPVHardwareSelector_BeginRenderProp_s1(self, args);
    case 0:
      return PyvtkPVHardwareSelector_BeginRenderProp_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "BeginRenderProp");
  return nullptr;
}


static PyMethodDef PyvtkPVHardwareSelector_Methods[] = {
  {"IsTypeOf", PyvtkPVHardwareSelector_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVHardwareSelector_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVHardwareSelector_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVHardwareSelector\nC++: static vtkPVHardwareSelector *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVHardwareSelector_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVHardwareSelector\nC++: vtkPVHardwareSelector *NewInstance()\n\n"},
  {"Select", PyvtkPVHardwareSelector_Select, METH_VARARGS,
   "V.Select([int, int, int, int]) -> vtkSelection\nC++: vtkSelection *Select(int region[4])\n\nOverridden to avoid clearing of captured buffers.\n"},
  {"PolygonSelect", PyvtkPVHardwareSelector_PolygonSelect, METH_VARARGS,
   "V.PolygonSelect([int, ...], int) -> vtkSelection\nC++: vtkSelection *PolygonSelect(int *polygonPoints,\n    vtkIdType count)\n\nSame as Select() above, except this one use a polygon, instead of\na rectangle region, and select elements inside the polygon\n"},
  {"NeedToRenderForSelection", PyvtkPVHardwareSelector_NeedToRenderForSelection, METH_VARARGS,
   "V.NeedToRenderForSelection() -> bool\nC++: virtual bool NeedToRenderForSelection()\n\nReturns true when the next call to Select() will result in\nrenders to capture the selection-buffers.\n"},
  {"InvalidateCachedSelection", PyvtkPVHardwareSelector_InvalidateCachedSelection, METH_VARARGS,
   "V.InvalidateCachedSelection()\nC++: void InvalidateCachedSelection()\n\nCalled to invalidate the cache.\n"},
  {"AssignUniqueId", PyvtkPVHardwareSelector_AssignUniqueId, METH_VARARGS,
   "V.AssignUniqueId(vtkProp) -> int\nC++: int AssignUniqueId(vtkProp *)\n\n"},
  {"SetSynchronizedWindows", PyvtkPVHardwareSelector_SetSynchronizedWindows, METH_VARARGS,
   "V.SetSynchronizedWindows(vtkPVSynchronizedRenderWindows)\nC++: void SetSynchronizedWindows(vtkPVSynchronizedRenderWindows *)\n\nSet the vtkPVSynchronizedRenderWindows instance. This is used to\ncommunicate between all active processes.\n"},
  {"BeginRenderProp", PyvtkPVHardwareSelector_BeginRenderProp, METH_VARARGS,
   "V.BeginRenderProp(vtkRenderWindow)\nC++: void BeginRenderProp(vtkRenderWindow *) override;\nV.BeginRenderProp()\nC++: void BeginRenderProp() override;\n\nSet the local ProcessId.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVHardwareSelector_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkPVHardwareSelector", // tp_name
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
  PyvtkPVHardwareSelector_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVHardwareSelector_StaticNew()
{
  return vtkPVHardwareSelector::New();
}

PyObject *PyvtkPVHardwareSelector_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVHardwareSelector_Type, PyvtkPVHardwareSelector_Methods,
    "vtkPVHardwareSelector",
 &PyvtkPVHardwareSelector_StaticNew);

  PyTypeObject *pytype = &PyvtkPVHardwareSelector_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkOpenGLHardwareSelector_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVHardwareSelector(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVHardwareSelector_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVHardwareSelector", o) != 0)
  {
    Py_DECREF(o);
  }

}

