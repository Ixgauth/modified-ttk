// python wrapper for vtkViewLayout
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
#include "vtkViewLayout.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkViewLayout(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkViewLayout_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkViewLayout_Doc =
  "vtkViewLayout - used by vtkSMViewLayoutProxy.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkViewLayout is the server-side object corresponding to\n"
  "vtkSMViewLayoutProxy. vtkSMViewLayoutProxy corresponds to a single\n"
  "layout of views. In ParaView UI, this corresponds to a single tab. In\n"
  "tile-display mode, the server-side only has \"1 tab\", in a manner of\n"
  "speaking. Thus, we need to ensure that the server shows the views\n"
  "laid out in the active tab. This class helps vtkSMViewLayoutProxy do\n"
  "that. `vtkSMViewLayoutProxy:ShowViewsOnTileDisplay` calls methods on\n"
  "this object on the server side to activate it.\n\n";


static PyObject *
PyvtkViewLayout_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkViewLayout::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewLayout_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewLayout *op = static_cast<vtkViewLayout *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkViewLayout::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewLayout_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkViewLayout *tempr = vtkViewLayout::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewLayout_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewLayout *op = static_cast<vtkViewLayout *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkViewLayout *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkViewLayout::NewInstance());

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
PyvtkViewLayout_ResetTileDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetTileDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewLayout *op = static_cast<vtkViewLayout *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetTileDisplay();
    }
    else
    {
      op->vtkViewLayout::ResetTileDisplay();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewLayout_ShowOnTileDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowOnTileDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewLayout *op = static_cast<vtkViewLayout *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ShowOnTileDisplay(temp0);
    }
    else
    {
      op->vtkViewLayout::ShowOnTileDisplay(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkViewLayout_Methods[] = {
  {"IsTypeOf", PyvtkViewLayout_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkViewLayout_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkViewLayout_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkViewLayout\nC++: static vtkViewLayout *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkViewLayout_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkViewLayout\nC++: vtkViewLayout *NewInstance()\n\n"},
  {"ResetTileDisplay", PyvtkViewLayout_ResetTileDisplay, METH_VARARGS,
   "V.ResetTileDisplay()\nC++: void ResetTileDisplay()\n\n"},
  {"ShowOnTileDisplay", PyvtkViewLayout_ShowOnTileDisplay, METH_VARARGS,
   "V.ShowOnTileDisplay(int)\nC++: void ShowOnTileDisplay(unsigned int)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkViewLayout_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsRenderingPython.vtkViewLayout", // tp_name
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
  PyvtkViewLayout_Doc, // tp_doc
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

static vtkObjectBase *PyvtkViewLayout_StaticNew()
{
  return vtkViewLayout::New();
}

PyObject *PyvtkViewLayout_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkViewLayout_Type, PyvtkViewLayout_Methods,
    "vtkViewLayout",
 &PyvtkViewLayout_StaticNew);

  PyTypeObject *pytype = &PyvtkViewLayout_Type;

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

void PyVTKAddFile_vtkViewLayout(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkViewLayout_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkViewLayout", o) != 0)
  {
    Py_DECREF(o);
  }

}

