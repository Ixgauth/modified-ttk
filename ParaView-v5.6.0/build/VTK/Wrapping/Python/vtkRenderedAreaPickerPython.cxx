// python wrapper for vtkRenderedAreaPicker
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
#include "vtkRenderedAreaPicker.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRenderedAreaPicker(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkRenderedAreaPicker_ClassNew(); }

#ifndef DECLARED_PyvtkAreaPicker_ClassNew
extern "C" { PyObject *PyvtkAreaPicker_ClassNew(); }
#define DECLARED_PyvtkAreaPicker_ClassNew
#endif

static const char *PyvtkRenderedAreaPicker_Doc =
  "vtkRenderedAreaPicker - Uses graphics hardware to picks props behind\na selection rectangle on a viewport.\n\n"
  "Superclass: vtkAreaPicker\n\n"
  "Like vtkAreaPicker, this class picks all props within a selection\n"
  "area on the screen. The difference is in implementation. This class\n"
  "uses graphics hardware to perform the test where the other uses\n"
  "software bounding box/frustum intersection testing.\n\n"
  "This picker is more conservative than vtkAreaPicker. It will reject\n"
  "some objects that pass the bounding box test of vtkAreaPicker. This\n"
  "will happen, for instance, when picking through a corner of the\n"
  "bounding box when the data set does not have any visible geometry in\n"
  "that corner.\n\n";


static PyObject *
PyvtkRenderedAreaPicker_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRenderedAreaPicker::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedAreaPicker_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedAreaPicker *op = static_cast<vtkRenderedAreaPicker *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRenderedAreaPicker::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedAreaPicker_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRenderedAreaPicker *tempr = vtkRenderedAreaPicker::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedAreaPicker_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedAreaPicker *op = static_cast<vtkRenderedAreaPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderedAreaPicker *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRenderedAreaPicker::NewInstance());

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
PyvtkRenderedAreaPicker_AreaPick(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AreaPick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedAreaPicker *op = static_cast<vtkRenderedAreaPicker *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  vtkRenderer *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkRenderer"))
  {
    int tempr = (ap.IsBound() ?
      op->AreaPick(temp0, temp1, temp2, temp3, temp4) :
      op->vtkRenderedAreaPicker::AreaPick(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkRenderedAreaPicker_Methods[] = {
  {"IsTypeOf", PyvtkRenderedAreaPicker_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRenderedAreaPicker_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRenderedAreaPicker_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkRenderedAreaPicker\nC++: static vtkRenderedAreaPicker *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRenderedAreaPicker_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkRenderedAreaPicker\nC++: vtkRenderedAreaPicker *NewInstance()\n\n"},
  {"AreaPick", PyvtkRenderedAreaPicker_AreaPick, METH_VARARGS,
   "V.AreaPick(float, float, float, float, vtkRenderer) -> int\nC++: int AreaPick(double x0, double y0, double x1, double y1,\n    vtkRenderer *) override;\n\nPerform pick operation in volume behind the given screen\ncoordinates. Props intersecting the selection frustum will be\naccessible via GetProp3D. GetPlanes returns a vtkImplicitFunction\nsuitable for vtkExtractGeometry.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkRenderedAreaPicker_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkRenderedAreaPicker", // tp_name
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
  PyvtkRenderedAreaPicker_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRenderedAreaPicker_StaticNew()
{
  return vtkRenderedAreaPicker::New();
}

PyObject *PyvtkRenderedAreaPicker_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkRenderedAreaPicker_Type, PyvtkRenderedAreaPicker_Methods,
    "vtkRenderedAreaPicker",
 &PyvtkRenderedAreaPicker_StaticNew);

  PyTypeObject *pytype = &PyvtkRenderedAreaPicker_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAreaPicker_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRenderedAreaPicker(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRenderedAreaPicker_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRenderedAreaPicker", o) != 0)
  {
    Py_DECREF(o);
  }

}

