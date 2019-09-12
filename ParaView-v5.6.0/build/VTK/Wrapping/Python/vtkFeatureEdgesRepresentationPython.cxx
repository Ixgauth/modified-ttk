// python wrapper for vtkFeatureEdgesRepresentation
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
#include "vtkFeatureEdgesRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkFeatureEdgesRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkFeatureEdgesRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkGeometryRepresentationWithFaces_ClassNew
extern "C" { PyObject *PyvtkGeometryRepresentationWithFaces_ClassNew(); }
#define DECLARED_PyvtkGeometryRepresentationWithFaces_ClassNew
#endif

static const char *PyvtkFeatureEdgesRepresentation_Doc =
  "vtkFeatureEdgesRepresentation - representation for feature edges.\n\n"
  "Superclass: vtkGeometryRepresentationWithFaces\n\n"
  "vtkFeatureEdgesRepresentation is merely a\n"
  "vtkGeometryRepresentationWithFaces that forces the geometry filter to\n"
  "produce feature edges.\n\n";


static PyObject *
PyvtkFeatureEdgesRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkFeatureEdgesRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdgesRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdgesRepresentation *op = static_cast<vtkFeatureEdgesRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFeatureEdgesRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdgesRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkFeatureEdgesRepresentation *tempr = vtkFeatureEdgesRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdgesRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdgesRepresentation *op = static_cast<vtkFeatureEdgesRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFeatureEdgesRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFeatureEdgesRepresentation::NewInstance());

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
PyvtkFeatureEdgesRepresentation_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdgesRepresentation *op = static_cast<vtkFeatureEdgesRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRepresentation(temp0);
    }
    else
    {
      op->vtkFeatureEdgesRepresentation::SetRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdgesRepresentation_SetUseOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdgesRepresentation *op = static_cast<vtkFeatureEdgesRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseOutline(temp0);
    }
    else
    {
      op->vtkFeatureEdgesRepresentation::SetUseOutline(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdgesRepresentation_SetSuppressLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSuppressLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdgesRepresentation *op = static_cast<vtkFeatureEdgesRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSuppressLOD(temp0);
    }
    else
    {
      op->vtkFeatureEdgesRepresentation::SetSuppressLOD(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdgesRepresentation_SetPickable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPickable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdgesRepresentation *op = static_cast<vtkFeatureEdgesRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPickable(temp0);
    }
    else
    {
      op->vtkFeatureEdgesRepresentation::SetPickable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdgesRepresentation_SetGenerateFeatureEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateFeatureEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdgesRepresentation *op = static_cast<vtkFeatureEdgesRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateFeatureEdges(temp0);
    }
    else
    {
      op->vtkFeatureEdgesRepresentation::SetGenerateFeatureEdges(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkFeatureEdgesRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkFeatureEdgesRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkFeatureEdgesRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkFeatureEdgesRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkFeatureEdgesRepresentation\nC++: static vtkFeatureEdgesRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkFeatureEdgesRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkFeatureEdgesRepresentation\nC++: vtkFeatureEdgesRepresentation *NewInstance()\n\n"},
  {"SetRepresentation", PyvtkFeatureEdgesRepresentation_SetRepresentation, METH_VARARGS,
   "V.SetRepresentation(string)\nC++: void SetRepresentation(const char *) override;\n\nOverload to set representation type using string. Accepted\nstrings are: \"Points\", \"Wireframe\", \"Surface\" and \"Surface With\nEdges\".\n"},
  {"SetUseOutline", PyvtkFeatureEdgesRepresentation_SetUseOutline, METH_VARARGS,
   "V.SetUseOutline(int)\nC++: void SetUseOutline(int) override;\n\n"},
  {"SetSuppressLOD", PyvtkFeatureEdgesRepresentation_SetSuppressLOD, METH_VARARGS,
   "V.SetSuppressLOD(bool)\nC++: void SetSuppressLOD(bool) override;\n\nEnable/Disable LOD;\n"},
  {"SetPickable", PyvtkFeatureEdgesRepresentation_SetPickable, METH_VARARGS,
   "V.SetPickable(int)\nC++: void SetPickable(int) override;\n\n"},
  {"SetGenerateFeatureEdges", PyvtkFeatureEdgesRepresentation_SetGenerateFeatureEdges, METH_VARARGS,
   "V.SetGenerateFeatureEdges(bool)\nC++: void SetGenerateFeatureEdges(bool) override;\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkFeatureEdgesRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkFeatureEdgesRepresentation", // tp_name
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
  PyvtkFeatureEdgesRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkFeatureEdgesRepresentation_StaticNew()
{
  return vtkFeatureEdgesRepresentation::New();
}

PyObject *PyvtkFeatureEdgesRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkFeatureEdgesRepresentation_Type, PyvtkFeatureEdgesRepresentation_Methods,
    "vtkFeatureEdgesRepresentation",
 &PyvtkFeatureEdgesRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkFeatureEdgesRepresentation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkGeometryRepresentationWithFaces_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkFeatureEdgesRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFeatureEdgesRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkFeatureEdgesRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

