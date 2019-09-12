// python wrapper for vtkBackgroundColorMonitor
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
#include "vtkBackgroundColorMonitor.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBackgroundColorMonitor(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkBackgroundColorMonitor_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkBackgroundColorMonitor_Doc =
  "vtkBackgroundColorMonitor - tracks state of background color(s).\n\n"
  "Superclass: vtkObject\n\n"
  "vtkBackgroundColorMonitor -- A helper for painters that tracks state\n"
  "of background color(s). A Painter could use this to skip expensive\n"
  "processing that is only needed when background color changes. This\n"
  "class queries VTK renderer rather than OpenGL state in order to\n"
  "support VTK's gradient background.\n\n"
  "this is not intended to be shared. each object should use it's own\n"
  "instance of this class. it's intended to be called once per render.\n\n";


static PyObject *
PyvtkBackgroundColorMonitor_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBackgroundColorMonitor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBackgroundColorMonitor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBackgroundColorMonitor *op = static_cast<vtkBackgroundColorMonitor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBackgroundColorMonitor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBackgroundColorMonitor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBackgroundColorMonitor *tempr = vtkBackgroundColorMonitor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBackgroundColorMonitor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBackgroundColorMonitor *op = static_cast<vtkBackgroundColorMonitor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBackgroundColorMonitor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBackgroundColorMonitor::NewInstance());

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
PyvtkBackgroundColorMonitor_StateChanged(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StateChanged");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBackgroundColorMonitor *op = static_cast<vtkBackgroundColorMonitor *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    bool tempr = (ap.IsBound() ?
      op->StateChanged(temp0) :
      op->vtkBackgroundColorMonitor::StateChanged(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBackgroundColorMonitor_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBackgroundColorMonitor *op = static_cast<vtkBackgroundColorMonitor *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->Update(temp0);
    }
    else
    {
      op->vtkBackgroundColorMonitor::Update(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkBackgroundColorMonitor_Methods[] = {
  {"IsTypeOf", PyvtkBackgroundColorMonitor_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkBackgroundColorMonitor_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkBackgroundColorMonitor_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkBackgroundColorMonitor\nC++: static vtkBackgroundColorMonitor *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkBackgroundColorMonitor_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkBackgroundColorMonitor\nC++: vtkBackgroundColorMonitor *NewInstance()\n\n"},
  {"StateChanged", PyvtkBackgroundColorMonitor_StateChanged, METH_VARARGS,
   "V.StateChanged(vtkRenderer) -> bool\nC++: bool StateChanged(vtkRenderer *ren)\n\nFetches the current background color state and updates the\ninternal copies of the data. returns true if any of the tracked\ncolors or modes have changed. Typically this is the only function\na user needs to call.\n"},
  {"Update", PyvtkBackgroundColorMonitor_Update, METH_VARARGS,
   "V.Update(vtkRenderer)\nC++: void Update(vtkRenderer *ren)\n\nUpdate the internal state if anything changed. Note, this is done\nautomatically in SateChanged.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkBackgroundColorMonitor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkBackgroundColorMonitor", // tp_name
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
  PyvtkBackgroundColorMonitor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBackgroundColorMonitor_StaticNew()
{
  return vtkBackgroundColorMonitor::New();
}

PyObject *PyvtkBackgroundColorMonitor_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkBackgroundColorMonitor_Type, PyvtkBackgroundColorMonitor_Methods,
    "vtkBackgroundColorMonitor",
 &PyvtkBackgroundColorMonitor_StaticNew);

  PyTypeObject *pytype = &PyvtkBackgroundColorMonitor_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkBackgroundColorMonitor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBackgroundColorMonitor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBackgroundColorMonitor", o) != 0)
  {
    Py_DECREF(o);
  }

}

