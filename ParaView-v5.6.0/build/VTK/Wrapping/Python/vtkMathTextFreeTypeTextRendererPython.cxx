// python wrapper for vtkMathTextFreeTypeTextRenderer
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
#include "vtkMathTextFreeTypeTextRenderer.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMathTextFreeTypeTextRenderer(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMathTextFreeTypeTextRenderer_ClassNew(); }

#ifndef DECLARED_PyvtkTextRenderer_ClassNew
extern "C" { PyObject *PyvtkTextRenderer_ClassNew(); }
#define DECLARED_PyvtkTextRenderer_ClassNew
#endif

static const char *PyvtkMathTextFreeTypeTextRenderer_Doc =
  "vtkMathTextFreeTypeTextRenderer - Default implementation of\nvtkTextRenderer.\n\n"
  "Superclass: vtkTextRenderer\n\n"
  "Default implementation of vtkTextRenderer using vtkFreeTypeTools and\n"
  "vtkMathTextUtilities.\n\n"
  "@warning\n"
  "The MathText backend does not currently support UTF16 strings, thus\n"
  "UTF16 strings passed to the MathText renderer will be converted to\n"
  "UTF8.\n\n";


static PyObject *
PyvtkMathTextFreeTypeTextRenderer_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMathTextFreeTypeTextRenderer::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMathTextFreeTypeTextRenderer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMathTextFreeTypeTextRenderer *op = static_cast<vtkMathTextFreeTypeTextRenderer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMathTextFreeTypeTextRenderer::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMathTextFreeTypeTextRenderer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMathTextFreeTypeTextRenderer *tempr = vtkMathTextFreeTypeTextRenderer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMathTextFreeTypeTextRenderer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMathTextFreeTypeTextRenderer *op = static_cast<vtkMathTextFreeTypeTextRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMathTextFreeTypeTextRenderer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMathTextFreeTypeTextRenderer::NewInstance());

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
PyvtkMathTextFreeTypeTextRenderer_FreeTypeIsSupported(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FreeTypeIsSupported");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMathTextFreeTypeTextRenderer *op = static_cast<vtkMathTextFreeTypeTextRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->FreeTypeIsSupported() :
      op->vtkMathTextFreeTypeTextRenderer::FreeTypeIsSupported());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMathTextFreeTypeTextRenderer_MathTextIsSupported(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MathTextIsSupported");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMathTextFreeTypeTextRenderer *op = static_cast<vtkMathTextFreeTypeTextRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->MathTextIsSupported() :
      op->vtkMathTextFreeTypeTextRenderer::MathTextIsSupported());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMathTextFreeTypeTextRenderer_Methods[] = {
  {"IsTypeOf", PyvtkMathTextFreeTypeTextRenderer_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMathTextFreeTypeTextRenderer_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMathTextFreeTypeTextRenderer_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkMathTextFreeTypeTextRenderer\nC++: static vtkMathTextFreeTypeTextRenderer *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMathTextFreeTypeTextRenderer_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkMathTextFreeTypeTextRenderer\nC++: vtkMathTextFreeTypeTextRenderer *NewInstance()\n\n"},
  {"FreeTypeIsSupported", PyvtkMathTextFreeTypeTextRenderer_FreeTypeIsSupported, METH_VARARGS,
   "V.FreeTypeIsSupported() -> bool\nC++: bool FreeTypeIsSupported() override;\n\nTest for availability of various backends\n"},
  {"MathTextIsSupported", PyvtkMathTextFreeTypeTextRenderer_MathTextIsSupported, METH_VARARGS,
   "V.MathTextIsSupported() -> bool\nC++: bool MathTextIsSupported() override;\n\nTest for availability of various backends\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkMathTextFreeTypeTextRenderer_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingFreeTypePython.vtkMathTextFreeTypeTextRenderer", // tp_name
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
  PyvtkMathTextFreeTypeTextRenderer_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMathTextFreeTypeTextRenderer_StaticNew()
{
  return vtkMathTextFreeTypeTextRenderer::New();
}

PyObject *PyvtkMathTextFreeTypeTextRenderer_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkMathTextFreeTypeTextRenderer_Type, PyvtkMathTextFreeTypeTextRenderer_Methods,
    "vtkMathTextFreeTypeTextRenderer",
 &PyvtkMathTextFreeTypeTextRenderer_StaticNew);

  PyTypeObject *pytype = &PyvtkMathTextFreeTypeTextRenderer_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkTextRenderer_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMathTextFreeTypeTextRenderer(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMathTextFreeTypeTextRenderer_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMathTextFreeTypeTextRenderer", o) != 0)
  {
    Py_DECREF(o);
  }

}

