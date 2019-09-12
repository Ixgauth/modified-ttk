// python wrapper for vtkWorldPointPicker
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
#include "vtkWorldPointPicker.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkWorldPointPicker(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkWorldPointPicker_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractPicker_ClassNew
extern "C" { PyObject *PyvtkAbstractPicker_ClassNew(); }
#define DECLARED_PyvtkAbstractPicker_ClassNew
#endif

static const char *PyvtkWorldPointPicker_Doc =
  "vtkWorldPointPicker - find world x,y,z corresponding to display x,y,z\n\n"
  "Superclass: vtkAbstractPicker\n\n"
  "vtkWorldPointPicker is used to find the x,y,z world coordinate of a\n"
  "screen x,y,z. This picker cannot pick actors and/or mappers, it\n"
  "simply determines an x-y-z coordinate in world space. (It will always\n"
  "return a x-y-z, even if the selection point is not over a\n"
  "prop/actor.)\n\n"
  "@warning\n"
  "The PickMethod() is not invoked, but StartPickMethod() and\n"
  "EndPickMethod() are.\n\n"
  "@sa\n"
  "vtkPropPicker vtkPicker vtkCellPicker vtkPointPicker\n\n";


static PyObject *
PyvtkWorldPointPicker_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkWorldPointPicker::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWorldPointPicker_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWorldPointPicker *op = static_cast<vtkWorldPointPicker *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkWorldPointPicker::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWorldPointPicker_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkWorldPointPicker *tempr = vtkWorldPointPicker::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWorldPointPicker_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWorldPointPicker *op = static_cast<vtkWorldPointPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkWorldPointPicker *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkWorldPointPicker::NewInstance());

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
PyvtkWorldPointPicker_Pick_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWorldPointPicker *op = static_cast<vtkWorldPointPicker *>(vp);

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
      op->vtkWorldPointPicker::Pick(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkWorldPointPicker_Pick_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWorldPointPicker *op = static_cast<vtkWorldPointPicker *>(vp);

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
      op->vtkWorldPointPicker::Pick(temp0, temp1));

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
PyvtkWorldPointPicker_Pick(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkWorldPointPicker_Pick_s1(self, args);
    case 2:
      return PyvtkWorldPointPicker_Pick_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Pick");
  return nullptr;
}


static PyMethodDef PyvtkWorldPointPicker_Methods[] = {
  {"IsTypeOf", PyvtkWorldPointPicker_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkWorldPointPicker_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkWorldPointPicker_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkWorldPointPicker\nC++: static vtkWorldPointPicker *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkWorldPointPicker_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkWorldPointPicker\nC++: vtkWorldPointPicker *NewInstance()\n\n"},
  {"Pick", PyvtkWorldPointPicker_Pick, METH_VARARGS,
   "V.Pick(float, float, float, vtkRenderer) -> int\nC++: int Pick(double selectionX, double selectionY,\n    double selectionZ, vtkRenderer *renderer) override;\nV.Pick([float, float, float], vtkRenderer) -> int\nC++: int Pick(double selectionPt[3], vtkRenderer *renderer)\n\nPerform the pick. (This method overload's the superclass.)\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkWorldPointPicker_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkWorldPointPicker", // tp_name
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
  PyvtkWorldPointPicker_Doc, // tp_doc
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

static vtkObjectBase *PyvtkWorldPointPicker_StaticNew()
{
  return vtkWorldPointPicker::New();
}

PyObject *PyvtkWorldPointPicker_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkWorldPointPicker_Type, PyvtkWorldPointPicker_Methods,
    "vtkWorldPointPicker",
 &PyvtkWorldPointPicker_StaticNew);

  PyTypeObject *pytype = &PyvtkWorldPointPicker_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractPicker_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkWorldPointPicker(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkWorldPointPicker_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkWorldPointPicker", o) != 0)
  {
    Py_DECREF(o);
  }

}

