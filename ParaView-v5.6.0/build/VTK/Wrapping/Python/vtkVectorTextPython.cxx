// python wrapper for vtkVectorText
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
#include "vtkVectorText.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkVectorText(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkVectorText_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkVectorText_Doc =
  "vtkVectorText - create polygonal text\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkVectorText generates vtkPolyData from an input text string.\n"
  "Besides the ASCII alphanumeric characters a-z, A-Z, 0-9,\n"
  "vtkVectorText also supports ASCII punctuation marks. (The supported\n"
  "ASCII character set are the codes (33-126) inclusive.) The only\n"
  "control character supported is the line feed character \"\\n\", which\n"
  "advances to a new line.\n\n"
  "To use this class, you normally couple it with a vtkPolyDataMapper\n"
  "and a vtkActor. In this case you would use the vtkActor's\n"
  "transformation methods to position, orient, and scale the text. You\n"
  "may also wish to use a vtkFollower to orient the text so that it\n"
  "always faces the camera.\n\n"
  "@sa\n"
  "vtkTextMapper vtkCaptionActor2D\n\n";


static PyObject *
PyvtkVectorText_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkVectorText::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVectorText_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorText *op = static_cast<vtkVectorText *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVectorText::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVectorText_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkVectorText *tempr = vtkVectorText::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVectorText_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorText *op = static_cast<vtkVectorText *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVectorText *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVectorText::NewInstance());

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
PyvtkVectorText_SetText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorText *op = static_cast<vtkVectorText *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetText(temp0);
    }
    else
    {
      op->vtkVectorText::SetText(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVectorText_GetText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorText *op = static_cast<vtkVectorText *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetText() :
      op->vtkVectorText::GetText());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkVectorText_Methods[] = {
  {"IsTypeOf", PyvtkVectorText_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkVectorText_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkVectorText_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkVectorText\nC++: static vtkVectorText *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkVectorText_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkVectorText\nC++: vtkVectorText *NewInstance()\n\n"},
  {"SetText", PyvtkVectorText_SetText, METH_VARARGS,
   "V.SetText(string)\nC++: virtual void SetText(const char *_arg)\n\nSet/Get the text to be drawn.\n"},
  {"GetText", PyvtkVectorText_GetText, METH_VARARGS,
   "V.GetText() -> string\nC++: virtual char *GetText()\n\nSet/Get the text to be drawn.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkVectorText_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingFreeTypePython.vtkVectorText", // tp_name
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
  PyvtkVectorText_Doc, // tp_doc
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

static vtkObjectBase *PyvtkVectorText_StaticNew()
{
  return vtkVectorText::New();
}

PyObject *PyvtkVectorText_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkVectorText_Type, PyvtkVectorText_Methods,
    "vtkVectorText",
 &PyvtkVectorText_StaticNew);

  PyTypeObject *pytype = &PyvtkVectorText_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPolyDataAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkVectorText(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkVectorText_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkVectorText", o) != 0)
  {
    Py_DECREF(o);
  }

}

