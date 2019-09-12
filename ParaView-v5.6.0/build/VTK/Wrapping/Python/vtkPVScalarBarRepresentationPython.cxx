// python wrapper for vtkPVScalarBarRepresentation
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
#include "vtkPVScalarBarRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVScalarBarRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVScalarBarRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkScalarBarRepresentation_ClassNew
extern "C" { PyObject *PyvtkScalarBarRepresentation_ClassNew(); }
#define DECLARED_PyvtkScalarBarRepresentation_ClassNew
#endif

static const char *PyvtkPVScalarBarRepresentation_Doc =
  "vtkPVScalarBarRepresentation - Represent scalar bar for\nvtkScalarBarWidget.\n\n"
  "Superclass: vtkScalarBarRepresentation\n\n"
  "Subclass of vtkScalarBarRepresentation that provides convenience\n"
  "functions for placing the scalar bar widget in the scene.\n\n";


static PyObject *
PyvtkPVScalarBarRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVScalarBarRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVScalarBarRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarRepresentation *op = static_cast<vtkPVScalarBarRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVScalarBarRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVScalarBarRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVScalarBarRepresentation *tempr = vtkPVScalarBarRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVScalarBarRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarRepresentation *op = static_cast<vtkPVScalarBarRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVScalarBarRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVScalarBarRepresentation::NewInstance());

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
PyvtkPVScalarBarRepresentation_SetWindowLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarRepresentation *op = static_cast<vtkPVScalarBarRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWindowLocation(temp0);
    }
    else
    {
      op->vtkPVScalarBarRepresentation::SetWindowLocation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVScalarBarRepresentation_GetWindowLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindowLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarRepresentation *op = static_cast<vtkPVScalarBarRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWindowLocation() :
      op->vtkPVScalarBarRepresentation::GetWindowLocation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVScalarBarRepresentation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVScalarBarRepresentation *op = static_cast<vtkPVScalarBarRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkPVScalarBarRepresentation::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVScalarBarRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkPVScalarBarRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nDefine standard methods.\n"},
  {"IsA", PyvtkPVScalarBarRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nDefine standard methods.\n"},
  {"SafeDownCast", PyvtkPVScalarBarRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVScalarBarRepresentation\nC++: static vtkPVScalarBarRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\nDefine standard methods.\n"},
  {"NewInstance", PyvtkPVScalarBarRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVScalarBarRepresentation\nC++: vtkPVScalarBarRepresentation *NewInstance()\n\nDefine standard methods.\n"},
  {"SetWindowLocation", PyvtkPVScalarBarRepresentation_SetWindowLocation, METH_VARARGS,
   "V.SetWindowLocation(int)\nC++: virtual void SetWindowLocation(int _arg)\n\nSet the scalar bar position, by enumeration ( AnyLocation = 0,\nLowerLeftCorner, LowerRightCorner, LowerCenter, UpperLeftCorner,\nUpperRightCorner, UpperCenter) related to the render window.\n"},
  {"GetWindowLocation", PyvtkPVScalarBarRepresentation_GetWindowLocation, METH_VARARGS,
   "V.GetWindowLocation() -> int\nC++: virtual int GetWindowLocation()\n\nSet the scalar bar position, by enumeration ( AnyLocation = 0,\nLowerLeftCorner, LowerRightCorner, LowerCenter, UpperLeftCorner,\nUpperRightCorner, UpperCenter) related to the render window.\n"},
  {"RenderOverlay", PyvtkPVScalarBarRepresentation_RenderOverlay, METH_VARARGS,
   "V.RenderOverlay(vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *) override;\n\nOverride to obtain viewport size and potentially adjust placement\nof the representation.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVScalarBarRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsRenderingPython.vtkPVScalarBarRepresentation", // tp_name
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
  PyvtkPVScalarBarRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVScalarBarRepresentation_StaticNew()
{
  return vtkPVScalarBarRepresentation::New();
}

PyObject *PyvtkPVScalarBarRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVScalarBarRepresentation_Type, PyvtkPVScalarBarRepresentation_Methods,
    "vtkPVScalarBarRepresentation",
 &PyvtkPVScalarBarRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkPVScalarBarRepresentation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkScalarBarRepresentation_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 7; c++)
  {
    static const struct { const char *name; int value; }
      constants[7] = {
        { "AnyLocation", vtkPVScalarBarRepresentation::AnyLocation },
        { "LowerLeftCorner", vtkPVScalarBarRepresentation::LowerLeftCorner },
        { "LowerRightCorner", vtkPVScalarBarRepresentation::LowerRightCorner },
        { "LowerCenter", vtkPVScalarBarRepresentation::LowerCenter },
        { "UpperLeftCorner", vtkPVScalarBarRepresentation::UpperLeftCorner },
        { "UpperRightCorner", vtkPVScalarBarRepresentation::UpperRightCorner },
        { "UpperCenter", vtkPVScalarBarRepresentation::UpperCenter },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVScalarBarRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVScalarBarRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVScalarBarRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

