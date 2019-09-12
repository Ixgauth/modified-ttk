// python wrapper for vtkPointPicker
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
#include "vtkPointPicker.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPointPicker(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPointPicker_ClassNew(); }

#ifndef DECLARED_PyvtkPicker_ClassNew
extern "C" { PyObject *PyvtkPicker_ClassNew(); }
#define DECLARED_PyvtkPicker_ClassNew
#endif

static const char *PyvtkPointPicker_Doc =
  "vtkPointPicker - select a point by shooting a ray into a graphics\nwindow\n\n"
  "Superclass: vtkPicker\n\n"
  "vtkPointPicker is used to select a point by shooting a ray into a\n"
  "graphics window and intersecting with actor's defining geometry -\n"
  "specifically its points. Beside returning coordinates, actor, and\n"
  "mapper, vtkPointPicker returns the id of the point projecting closest\n"
  "onto the ray (within the specified tolerance).  Ties are broken\n"
  "(i.e., multiple points all projecting within the tolerance along the\n"
  "pick ray) by choosing the point closest to the ray.\n\n"
  "@sa\n"
  "vtkPicker vtkCellPicker.\n\n";


static PyObject *
PyvtkPointPicker_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPointPicker::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointPicker_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPicker *op = static_cast<vtkPointPicker *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPointPicker::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointPicker_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPointPicker *tempr = vtkPointPicker::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointPicker_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPicker *op = static_cast<vtkPointPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPointPicker *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPointPicker::NewInstance());

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
PyvtkPointPicker_GetPointId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPicker *op = static_cast<vtkPointPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetPointId() :
      op->vtkPointPicker::GetPointId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointPicker_SetUseCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPicker *op = static_cast<vtkPointPicker *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseCells(temp0);
    }
    else
    {
      op->vtkPointPicker::SetUseCells(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointPicker_GetUseCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPicker *op = static_cast<vtkPointPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseCells() :
      op->vtkPointPicker::GetUseCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointPicker_UseCellsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseCellsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPicker *op = static_cast<vtkPointPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseCellsOn();
    }
    else
    {
      op->vtkPointPicker::UseCellsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointPicker_UseCellsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseCellsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPicker *op = static_cast<vtkPointPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseCellsOff();
    }
    else
    {
      op->vtkPointPicker::UseCellsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPointPicker_Methods[] = {
  {"IsTypeOf", PyvtkPointPicker_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPointPicker_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPointPicker_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPointPicker\nC++: static vtkPointPicker *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPointPicker_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPointPicker\nC++: vtkPointPicker *NewInstance()\n\n"},
  {"GetPointId", PyvtkPointPicker_GetPointId, METH_VARARGS,
   "V.GetPointId() -> int\nC++: virtual vtkIdType GetPointId()\n\nGet the id of the picked point. If PointId = -1, nothing was\npicked.\n"},
  {"SetUseCells", PyvtkPointPicker_SetUseCells, METH_VARARGS,
   "V.SetUseCells(int)\nC++: virtual void SetUseCells(vtkTypeBool _arg)\n\nSpecify whether the point search should be based on cell points\nor directly on the point list.\n"},
  {"GetUseCells", PyvtkPointPicker_GetUseCells, METH_VARARGS,
   "V.GetUseCells() -> int\nC++: virtual vtkTypeBool GetUseCells()\n\nSpecify whether the point search should be based on cell points\nor directly on the point list.\n"},
  {"UseCellsOn", PyvtkPointPicker_UseCellsOn, METH_VARARGS,
   "V.UseCellsOn()\nC++: virtual void UseCellsOn()\n\nSpecify whether the point search should be based on cell points\nor directly on the point list.\n"},
  {"UseCellsOff", PyvtkPointPicker_UseCellsOff, METH_VARARGS,
   "V.UseCellsOff()\nC++: virtual void UseCellsOff()\n\nSpecify whether the point search should be based on cell points\nor directly on the point list.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPointPicker_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkPointPicker", // tp_name
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
  PyvtkPointPicker_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPointPicker_StaticNew()
{
  return vtkPointPicker::New();
}

PyObject *PyvtkPointPicker_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPointPicker_Type, PyvtkPointPicker_Methods,
    "vtkPointPicker",
 &PyvtkPointPicker_StaticNew);

  PyTypeObject *pytype = &PyvtkPointPicker_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPicker_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPointPicker(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPointPicker_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPointPicker", o) != 0)
  {
    Py_DECREF(o);
  }

}

