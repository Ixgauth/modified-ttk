// python wrapper for vtkSequencePass
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
#include "vtkSequencePass.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSequencePass(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSequencePass_ClassNew(); }

#ifndef DECLARED_PyvtkRenderPass_ClassNew
extern "C" { PyObject *PyvtkRenderPass_ClassNew(); }
#define DECLARED_PyvtkRenderPass_ClassNew
#endif

static const char *PyvtkSequencePass_Doc =
  "vtkSequencePass - Execute render passes sequentially.\n\n"
  "Superclass: vtkRenderPass\n\n"
  "vtkSequencePass executes a list of render passes sequentially. This\n"
  "class allows to define a sequence of render passes at run time. The\n"
  "other solution to write a sequence of render passes is to write an\n"
  "effective subclass of vtkRenderPass.\n\n"
  "As vtkSequencePass is a vtkRenderPass itself, it is possible to have\n"
  "a hierarchy of render passes built at runtime.\n"
  "@sa\n"
  "vtkRenderPass\n\n";


static PyObject *
PyvtkSequencePass_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSequencePass::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSequencePass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSequencePass *op = static_cast<vtkSequencePass *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSequencePass::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSequencePass_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSequencePass *tempr = vtkSequencePass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSequencePass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSequencePass *op = static_cast<vtkSequencePass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSequencePass *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSequencePass::NewInstance());

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
PyvtkSequencePass_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSequencePass *op = static_cast<vtkSequencePass *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources(temp0);
    }
    else
    {
      op->vtkSequencePass::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSequencePass_GetPasses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPasses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSequencePass *op = static_cast<vtkSequencePass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderPassCollection *tempr = (ap.IsBound() ?
      op->GetPasses() :
      op->vtkSequencePass::GetPasses());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSequencePass_SetPasses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPasses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSequencePass *op = static_cast<vtkSequencePass *>(vp);

  vtkRenderPassCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderPassCollection"))
  {
    if (ap.IsBound())
    {
      op->SetPasses(temp0);
    }
    else
    {
      op->vtkSequencePass::SetPasses(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSequencePass_Methods[] = {
  {"IsTypeOf", PyvtkSequencePass_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSequencePass_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSequencePass_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSequencePass\nC++: static vtkSequencePass *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSequencePass_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSequencePass\nC++: vtkSequencePass *NewInstance()\n\n"},
  {"ReleaseGraphicsResources", PyvtkSequencePass_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *w) override;\n\nRelease graphics resources and ask components to release their\nown resources.\n\\pre w_exists: w!=0\n"},
  {"GetPasses", PyvtkSequencePass_GetPasses, METH_VARARGS,
   "V.GetPasses() -> vtkRenderPassCollection\nC++: virtual vtkRenderPassCollection *GetPasses()\n\nThe ordered list of render passes to execute sequentially. If the\npointer is NULL or the list is empty, it is silently ignored.\nThere is no warning. Initial value is a NULL pointer.\n"},
  {"SetPasses", PyvtkSequencePass_SetPasses, METH_VARARGS,
   "V.SetPasses(vtkRenderPassCollection)\nC++: virtual void SetPasses(vtkRenderPassCollection *passes)\n\nThe ordered list of render passes to execute sequentially. If the\npointer is NULL or the list is empty, it is silently ignored.\nThere is no warning. Initial value is a NULL pointer.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSequencePass_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingOpenGL2Python.vtkSequencePass", // tp_name
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
  PyvtkSequencePass_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSequencePass_StaticNew()
{
  return vtkSequencePass::New();
}

PyObject *PyvtkSequencePass_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSequencePass_Type, PyvtkSequencePass_Methods,
    "vtkSequencePass",
 &PyvtkSequencePass_StaticNew);

  PyTypeObject *pytype = &PyvtkSequencePass_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkRenderPass_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSequencePass(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSequencePass_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSequencePass", o) != 0)
  {
    Py_DECREF(o);
  }

}

