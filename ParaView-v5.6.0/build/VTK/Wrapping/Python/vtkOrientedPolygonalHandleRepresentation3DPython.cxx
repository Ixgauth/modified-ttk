// python wrapper for vtkOrientedPolygonalHandleRepresentation3D
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
#include "vtkOrientedPolygonalHandleRepresentation3D.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOrientedPolygonalHandleRepresentation3D(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkOrientedPolygonalHandleRepresentation3D_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractPolygonalHandleRepresentation3D_ClassNew
extern "C" { PyObject *PyvtkAbstractPolygonalHandleRepresentation3D_ClassNew(); }
#define DECLARED_PyvtkAbstractPolygonalHandleRepresentation3D_ClassNew
#endif

static const char *PyvtkOrientedPolygonalHandleRepresentation3D_Doc =
  "vtkOrientedPolygonalHandleRepresentation3D - represent a user defined\nhandle geometry in 3D while maintaining a fixed orientation w.r.t the\ncamera.\n\n"
  "Superclass: vtkAbstractPolygonalHandleRepresentation3D\n\n"
  "This class serves as the geometrical representation of a\n"
  "vtkHandleWidget. The handle can be represented by an arbitrary\n"
  "polygonal data (vtkPolyData), set via SetHandle(vtkPolyData *). The\n"
  "actual position of the handle will be initially assumed to be\n"
  "(0,0,0). You can specify an offset from this position if desired.\n"
  "This class differs from vtkPolygonalHandleRepresentation3D in that\n"
  "the handle will always remain front facing, ie it maintains a fixed\n"
  "orientation with respect to the camera. This is done by using\n"
  "vtkFollowers internally to render the actors.\n"
  "@sa\n"
  "vtkPolygonalHandleRepresentation3D vtkHandleRepresentation\n"
  "vtkHandleWidget\n\n";


static PyObject *
PyvtkOrientedPolygonalHandleRepresentation3D_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOrientedPolygonalHandleRepresentation3D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedPolygonalHandleRepresentation3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedPolygonalHandleRepresentation3D *op = static_cast<vtkOrientedPolygonalHandleRepresentation3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOrientedPolygonalHandleRepresentation3D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedPolygonalHandleRepresentation3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOrientedPolygonalHandleRepresentation3D *tempr = vtkOrientedPolygonalHandleRepresentation3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedPolygonalHandleRepresentation3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedPolygonalHandleRepresentation3D *op = static_cast<vtkOrientedPolygonalHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOrientedPolygonalHandleRepresentation3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOrientedPolygonalHandleRepresentation3D::NewInstance());

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

static PyMethodDef PyvtkOrientedPolygonalHandleRepresentation3D_Methods[] = {
  {"IsTypeOf", PyvtkOrientedPolygonalHandleRepresentation3D_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instances of this class.\n"},
  {"IsA", PyvtkOrientedPolygonalHandleRepresentation3D_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instances of this class.\n"},
  {"SafeDownCast", PyvtkOrientedPolygonalHandleRepresentation3D_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkOrientedPolygonalHandleRepresentation3D\nC++: static vtkOrientedPolygonalHandleRepresentation3D *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard methods for instances of this class.\n"},
  {"NewInstance", PyvtkOrientedPolygonalHandleRepresentation3D_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkOrientedPolygonalHandleRepresentation3D\nC++: vtkOrientedPolygonalHandleRepresentation3D *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkOrientedPolygonalHandleRepresentation3D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkOrientedPolygonalHandleRepresentation3D", // tp_name
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
  PyvtkOrientedPolygonalHandleRepresentation3D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOrientedPolygonalHandleRepresentation3D_StaticNew()
{
  return vtkOrientedPolygonalHandleRepresentation3D::New();
}

PyObject *PyvtkOrientedPolygonalHandleRepresentation3D_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkOrientedPolygonalHandleRepresentation3D_Type, PyvtkOrientedPolygonalHandleRepresentation3D_Methods,
    "vtkOrientedPolygonalHandleRepresentation3D",
 &PyvtkOrientedPolygonalHandleRepresentation3D_StaticNew);

  PyTypeObject *pytype = &PyvtkOrientedPolygonalHandleRepresentation3D_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractPolygonalHandleRepresentation3D_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOrientedPolygonalHandleRepresentation3D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOrientedPolygonalHandleRepresentation3D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOrientedPolygonalHandleRepresentation3D", o) != 0)
  {
    Py_DECREF(o);
  }

}

