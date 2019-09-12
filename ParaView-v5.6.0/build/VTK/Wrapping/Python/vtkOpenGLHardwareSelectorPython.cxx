// python wrapper for vtkOpenGLHardwareSelector
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
#include "vtkOpenGLHardwareSelector.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOpenGLHardwareSelector(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkOpenGLHardwareSelector_ClassNew(); }

#ifndef DECLARED_PyvtkHardwareSelector_ClassNew
extern "C" { PyObject *PyvtkHardwareSelector_ClassNew(); }
#define DECLARED_PyvtkHardwareSelector_ClassNew
#endif

static const char *PyvtkOpenGLHardwareSelector_Doc =
  "vtkOpenGLHardwareSelector - implements the device specific code of\n vtkOpenGLHardwareSelector.\n\n"
  "Superclass: vtkHardwareSelector\n\n"
  "Implements the device specific code of vtkOpenGLHardwareSelector.\n\n"
  "@sa\n"
  "vtkHardwareSelector\n\n";


static PyObject *
PyvtkOpenGLHardwareSelector_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenGLHardwareSelector::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLHardwareSelector_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLHardwareSelector *op = static_cast<vtkOpenGLHardwareSelector *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLHardwareSelector::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLHardwareSelector_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenGLHardwareSelector *tempr = vtkOpenGLHardwareSelector::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLHardwareSelector_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLHardwareSelector *op = static_cast<vtkOpenGLHardwareSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLHardwareSelector *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLHardwareSelector::NewInstance());

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
PyvtkOpenGLHardwareSelector_BeginRenderProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BeginRenderProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLHardwareSelector *op = static_cast<vtkOpenGLHardwareSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BeginRenderProp();
    }
    else
    {
      op->vtkOpenGLHardwareSelector::BeginRenderProp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLHardwareSelector_EndRenderProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndRenderProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLHardwareSelector *op = static_cast<vtkOpenGLHardwareSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EndRenderProp();
    }
    else
    {
      op->vtkOpenGLHardwareSelector::EndRenderProp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLHardwareSelector_RenderCompositeIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderCompositeIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLHardwareSelector *op = static_cast<vtkOpenGLHardwareSelector *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RenderCompositeIndex(temp0);
    }
    else
    {
      op->vtkOpenGLHardwareSelector::RenderCompositeIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLHardwareSelector_RenderProcessId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderProcessId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLHardwareSelector *op = static_cast<vtkOpenGLHardwareSelector *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RenderProcessId(temp0);
    }
    else
    {
      op->vtkOpenGLHardwareSelector::RenderProcessId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLHardwareSelector_BeginSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BeginSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLHardwareSelector *op = static_cast<vtkOpenGLHardwareSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BeginSelection();
    }
    else
    {
      op->vtkOpenGLHardwareSelector::BeginSelection();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLHardwareSelector_EndSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLHardwareSelector *op = static_cast<vtkOpenGLHardwareSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EndSelection();
    }
    else
    {
      op->vtkOpenGLHardwareSelector::EndSelection();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLHardwareSelector_Methods[] = {
  {"IsTypeOf", PyvtkOpenGLHardwareSelector_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenGLHardwareSelector_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenGLHardwareSelector_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkOpenGLHardwareSelector\nC++: static vtkOpenGLHardwareSelector *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenGLHardwareSelector_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkOpenGLHardwareSelector\nC++: vtkOpenGLHardwareSelector *NewInstance()\n\n"},
  {"BeginRenderProp", PyvtkOpenGLHardwareSelector_BeginRenderProp, METH_VARARGS,
   "V.BeginRenderProp()\nC++: void BeginRenderProp() override;\n\nCalled by the mapper before and after rendering each prop.\n"},
  {"EndRenderProp", PyvtkOpenGLHardwareSelector_EndRenderProp, METH_VARARGS,
   "V.EndRenderProp()\nC++: void EndRenderProp() override;\n\nCalled by the mapper before and after rendering each prop.\n"},
  {"RenderCompositeIndex", PyvtkOpenGLHardwareSelector_RenderCompositeIndex, METH_VARARGS,
   "V.RenderCompositeIndex(int)\nC++: void RenderCompositeIndex(unsigned int index) override;\n\nCalled by any vtkMapper or vtkProp subclass to render a\ncomposite-index. Currently indices >= 0xffffff are not supported.\n"},
  {"RenderProcessId", PyvtkOpenGLHardwareSelector_RenderProcessId, METH_VARARGS,
   "V.RenderProcessId(int)\nC++: void RenderProcessId(unsigned int processid) override;\n\nCalled by any vtkMapper or subclass to render process id. This\nhas any effect when this->UseProcessIdFromData is true.\n"},
  {"BeginSelection", PyvtkOpenGLHardwareSelector_BeginSelection, METH_VARARGS,
   "V.BeginSelection()\nC++: void BeginSelection() override;\n\n"},
  {"EndSelection", PyvtkOpenGLHardwareSelector_EndSelection, METH_VARARGS,
   "V.EndSelection()\nC++: void EndSelection() override;\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkOpenGLHardwareSelector_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingOpenGL2Python.vtkOpenGLHardwareSelector", // tp_name
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
  PyvtkOpenGLHardwareSelector_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOpenGLHardwareSelector_StaticNew()
{
  return vtkOpenGLHardwareSelector::New();
}

PyObject *PyvtkOpenGLHardwareSelector_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkOpenGLHardwareSelector_Type, PyvtkOpenGLHardwareSelector_Methods,
    "vtkOpenGLHardwareSelector",
 &PyvtkOpenGLHardwareSelector_StaticNew);

  PyTypeObject *pytype = &PyvtkOpenGLHardwareSelector_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkHardwareSelector_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOpenGLHardwareSelector(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenGLHardwareSelector_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLHardwareSelector", o) != 0)
  {
    Py_DECREF(o);
  }

}

