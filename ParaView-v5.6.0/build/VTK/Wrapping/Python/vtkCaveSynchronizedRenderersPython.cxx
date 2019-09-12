// python wrapper for vtkCaveSynchronizedRenderers
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
#include "vtkCaveSynchronizedRenderers.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCaveSynchronizedRenderers(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCaveSynchronizedRenderers_ClassNew(); }

#ifndef DECLARED_PyvtkSynchronizedRenderers_ClassNew
extern "C" { PyObject *PyvtkSynchronizedRenderers_ClassNew(); }
#define DECLARED_PyvtkSynchronizedRenderers_ClassNew
#endif

static const char *PyvtkCaveSynchronizedRenderers_Doc =
  "vtkCaveSynchronizedRenderers - vtkSynchronizedRenderers subclass that\nhandles adjusting of camera for cave configurations.\n\n"
  "Superclass: vtkSynchronizedRenderers\n\n"
  "vtkCaveSynchronizedRenderers is vtkSynchronizedRenderers used for in\n"
  "CAVE configuration. It is used on the render-server side. It ensures\n"
  "that the camera is transformed based on the orientations specified in\n"
  " the pvx configuration file. This code was previously in class\n"
  "vtkCaveRenderManager.\n\n"
  "In case of a single display, if the cave bounds are not set, we\n"
  "compute these values from vtkPVServerOptions::Geometry and the client\n"
  "camera view angle.\n\n";


static PyObject *
PyvtkCaveSynchronizedRenderers_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCaveSynchronizedRenderers::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCaveSynchronizedRenderers_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaveSynchronizedRenderers *op = static_cast<vtkCaveSynchronizedRenderers *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCaveSynchronizedRenderers::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCaveSynchronizedRenderers_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCaveSynchronizedRenderers *tempr = vtkCaveSynchronizedRenderers::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCaveSynchronizedRenderers_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaveSynchronizedRenderers *op = static_cast<vtkCaveSynchronizedRenderers *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCaveSynchronizedRenderers *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCaveSynchronizedRenderers::NewInstance());

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

static PyMethodDef PyvtkCaveSynchronizedRenderers_Methods[] = {
  {"IsTypeOf", PyvtkCaveSynchronizedRenderers_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCaveSynchronizedRenderers_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCaveSynchronizedRenderers_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCaveSynchronizedRenderers\nC++: static vtkCaveSynchronizedRenderers *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCaveSynchronizedRenderers_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCaveSynchronizedRenderers\nC++: vtkCaveSynchronizedRenderers *NewInstance()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCaveSynchronizedRenderers_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkCaveSynchronizedRenderers", // tp_name
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
  PyvtkCaveSynchronizedRenderers_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCaveSynchronizedRenderers_StaticNew()
{
  return vtkCaveSynchronizedRenderers::New();
}

PyObject *PyvtkCaveSynchronizedRenderers_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCaveSynchronizedRenderers_Type, PyvtkCaveSynchronizedRenderers_Methods,
    "vtkCaveSynchronizedRenderers",
 &PyvtkCaveSynchronizedRenderers_StaticNew);

  PyTypeObject *pytype = &PyvtkCaveSynchronizedRenderers_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSynchronizedRenderers_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCaveSynchronizedRenderers(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCaveSynchronizedRenderers_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCaveSynchronizedRenderers", o) != 0)
  {
    Py_DECREF(o);
  }

}

