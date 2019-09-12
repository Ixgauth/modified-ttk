// python wrapper for vtkPVRecoverGeometryWireframe
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
#include "vtkPVRecoverGeometryWireframe.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVRecoverGeometryWireframe(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVRecoverGeometryWireframe_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkPVRecoverGeometryWireframe_Doc =
  "vtkPVRecoverGeometryWireframe - Get corrected wireframe from\ntessellated facets\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "When vtkPVGeometryFilter tessellates nonlinear faces into linear\n"
  "approximations, it introduces edges in the middle of the facets of\n"
  "the original mesh (as any valid tessellation would).  To correct for\n"
  "this, vtkPVGeometryFilter also writes out some fields that allows use\n"
  "to identify the edges that are actually part of the original mesh. \n"
  "This filter works in conjunction with vtkPVGeometryFilter by taking\n"
  "its output, adding an edge flag and making the appropriate\n"
  "adjustments so that rendering with line fill mode will make the\n"
  "correct wireframe.\n\n"
  "@sa\n"
  "vtkPVGeometryFilter\n\n";


static PyObject *
PyvtkPVRecoverGeometryWireframe_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVRecoverGeometryWireframe::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRecoverGeometryWireframe_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRecoverGeometryWireframe *op = static_cast<vtkPVRecoverGeometryWireframe *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVRecoverGeometryWireframe::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRecoverGeometryWireframe_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVRecoverGeometryWireframe *tempr = vtkPVRecoverGeometryWireframe::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRecoverGeometryWireframe_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRecoverGeometryWireframe *op = static_cast<vtkPVRecoverGeometryWireframe *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVRecoverGeometryWireframe *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVRecoverGeometryWireframe::NewInstance());

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
PyvtkPVRecoverGeometryWireframe_ORIGINAL_FACE_IDS(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ORIGINAL_FACE_IDS");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkPVRecoverGeometryWireframe::ORIGINAL_FACE_IDS();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVRecoverGeometryWireframe_Methods[] = {
  {"IsTypeOf", PyvtkPVRecoverGeometryWireframe_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVRecoverGeometryWireframe_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVRecoverGeometryWireframe_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVRecoverGeometryWireframe\nC++: static vtkPVRecoverGeometryWireframe *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVRecoverGeometryWireframe_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVRecoverGeometryWireframe\nC++: vtkPVRecoverGeometryWireframe *NewInstance()\n\n"},
  {"ORIGINAL_FACE_IDS", PyvtkPVRecoverGeometryWireframe_ORIGINAL_FACE_IDS, METH_VARARGS,
   "V.ORIGINAL_FACE_IDS() -> string\nC++: static const char *ORIGINAL_FACE_IDS()\n\nIn order to determine which edges existed in the original data,\nwe need an identifier on each cell determining which face (not\ncell) it originally came from.  The ids should be put in a cell\ndata array with this name.  The existence of this field is also a\nsignal that this wireframe extraction is necessary.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVRecoverGeometryWireframe_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsRenderingPython.vtkPVRecoverGeometryWireframe", // tp_name
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
  PyvtkPVRecoverGeometryWireframe_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVRecoverGeometryWireframe_StaticNew()
{
  return vtkPVRecoverGeometryWireframe::New();
}

PyObject *PyvtkPVRecoverGeometryWireframe_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVRecoverGeometryWireframe_Type, PyvtkPVRecoverGeometryWireframe_Methods,
    "vtkPVRecoverGeometryWireframe",
 &PyvtkPVRecoverGeometryWireframe_StaticNew);

  PyTypeObject *pytype = &PyvtkPVRecoverGeometryWireframe_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPolyDataAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVRecoverGeometryWireframe(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVRecoverGeometryWireframe_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVRecoverGeometryWireframe", o) != 0)
  {
    Py_DECREF(o);
  }

}

