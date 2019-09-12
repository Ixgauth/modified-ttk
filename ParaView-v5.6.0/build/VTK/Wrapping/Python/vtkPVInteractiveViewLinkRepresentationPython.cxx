// python wrapper for vtkPVInteractiveViewLinkRepresentation
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
#include "vtkPVInteractiveViewLinkRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVInteractiveViewLinkRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVInteractiveViewLinkRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkLogoRepresentation_ClassNew
extern "C" { PyObject *PyvtkLogoRepresentation_ClassNew(); }
#define DECLARED_PyvtkLogoRepresentation_ClassNew
#endif

static const char *PyvtkPVInteractiveViewLinkRepresentation_Doc =
  "vtkPVInteractiveViewLinkRepresentation - A Representation to\nmanipulate an interactive view link widget\n\n"
  "Superclass: vtkLogoRepresentation\n\n"
  "This Representation creates and manages a custom\n"
  "vtkLogoRepresentation which is precented to go over the edge of the\n"
  "viewport\n\n";


static PyObject *
PyvtkPVInteractiveViewLinkRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVInteractiveViewLinkRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVInteractiveViewLinkRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVInteractiveViewLinkRepresentation *op = static_cast<vtkPVInteractiveViewLinkRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVInteractiveViewLinkRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVInteractiveViewLinkRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVInteractiveViewLinkRepresentation *tempr = vtkPVInteractiveViewLinkRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVInteractiveViewLinkRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVInteractiveViewLinkRepresentation *op = static_cast<vtkPVInteractiveViewLinkRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVInteractiveViewLinkRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVInteractiveViewLinkRepresentation::NewInstance());

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
PyvtkPVInteractiveViewLinkRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVInteractiveViewLinkRepresentation *op = static_cast<vtkPVInteractiveViewLinkRepresentation *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->WidgetInteraction(temp0);
    }
    else
    {
      op->vtkPVInteractiveViewLinkRepresentation::WidgetInteraction(temp0);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVInteractiveViewLinkRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkPVInteractiveViewLinkRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard VTK class methods.\n"},
  {"IsA", PyvtkPVInteractiveViewLinkRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard VTK class methods.\n"},
  {"SafeDownCast", PyvtkPVInteractiveViewLinkRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkPVInteractiveViewLinkRepresentation\nC++: static vtkPVInteractiveViewLinkRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard VTK class methods.\n"},
  {"NewInstance", PyvtkPVInteractiveViewLinkRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVInteractiveViewLinkRepresentation\nC++: vtkPVInteractiveViewLinkRepresentation *NewInstance()\n\nStandard VTK class methods.\n"},
  {"WidgetInteraction", PyvtkPVInteractiveViewLinkRepresentation_WidgetInteraction, METH_VARARGS,
   "V.WidgetInteraction([float, float])\nC++: void WidgetInteraction(double eventPos[2]) override;\n\nConsidering an eventPosition and current interaction state, this\nmethod will adjust internal position and shape so the widget\nbehave correctly, ie: resizable, movable, but not going over the\nedges of the render window\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVInteractiveViewLinkRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsRenderingPython.vtkPVInteractiveViewLinkRepresentation", // tp_name
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
  PyvtkPVInteractiveViewLinkRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVInteractiveViewLinkRepresentation_StaticNew()
{
  return vtkPVInteractiveViewLinkRepresentation::New();
}

PyObject *PyvtkPVInteractiveViewLinkRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVInteractiveViewLinkRepresentation_Type, PyvtkPVInteractiveViewLinkRepresentation_Methods,
    "vtkPVInteractiveViewLinkRepresentation",
 &PyvtkPVInteractiveViewLinkRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkPVInteractiveViewLinkRepresentation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkLogoRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVInteractiveViewLinkRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVInteractiveViewLinkRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVInteractiveViewLinkRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

