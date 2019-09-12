// python wrapper for vtkGlyph2D
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
#include "vtkGlyph2D.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGlyph2D(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkGlyph2D_ClassNew(); }

#ifndef DECLARED_PyvtkGlyph3D_ClassNew
extern "C" { PyObject *PyvtkGlyph3D_ClassNew(); }
#define DECLARED_PyvtkGlyph3D_ClassNew
#endif

static const char *PyvtkGlyph2D_Doc =
  "vtkGlyph2D - copy oriented and scaled glyph geometry to every input\npoint (2D specialization)\n\n"
  "Superclass: vtkGlyph3D\n\n"
  "This subclass of vtkGlyph3D is a specialization to 2D.\n"
  "Transformations (i.e., translation, scaling, and rotation) are\n"
  "constrained to the plane. For example, rotations due to a vector are\n"
  "computed from the x-y coordinates of the vector only, and are assumed\n"
  "to occur around the z-axis. (See vtkGlyph3D for documentation on the\n"
  "interface to this class.)\n\n"
  "@sa\n"
  "vtkTensorGlyph vtkGlyph3D vtkProgrammableGlyphFilter\n\n";


static PyObject *
PyvtkGlyph2D_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGlyph2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph2D *op = static_cast<vtkGlyph2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGlyph2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGlyph2D *tempr = vtkGlyph2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyph2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph2D *op = static_cast<vtkGlyph2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGlyph2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGlyph2D::NewInstance());

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

static PyMethodDef PyvtkGlyph2D_Methods[] = {
  {"IsTypeOf", PyvtkGlyph2D_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGlyph2D_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGlyph2D_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkGlyph2D\nC++: static vtkGlyph2D *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGlyph2D_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkGlyph2D\nC++: vtkGlyph2D *NewInstance()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkGlyph2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkGlyph2D", // tp_name
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
  PyvtkGlyph2D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGlyph2D_StaticNew()
{
  return vtkGlyph2D::New();
}

PyObject *PyvtkGlyph2D_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkGlyph2D_Type, PyvtkGlyph2D_Methods,
    "vtkGlyph2D",
 &PyvtkGlyph2D_StaticNew);

  PyTypeObject *pytype = &PyvtkGlyph2D_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkGlyph3D_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGlyph2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGlyph2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGlyph2D", o) != 0)
  {
    Py_DECREF(o);
  }

}

