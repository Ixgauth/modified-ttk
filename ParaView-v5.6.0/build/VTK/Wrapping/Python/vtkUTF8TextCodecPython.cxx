// python wrapper for vtkUTF8TextCodec
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
#include "vtkUTF8TextCodec.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkUTF8TextCodec(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkUTF8TextCodec_ClassNew(); }

#ifndef DECLARED_PyvtkTextCodec_ClassNew
extern "C" { PyObject *PyvtkTextCodec_ClassNew(); }
#define DECLARED_PyvtkTextCodec_ClassNew
#endif

static const char *PyvtkUTF8TextCodec_Doc =
  "vtkUTF8TextCodec - Class to read/write UTF-8 text\n\n"
  "Superclass: vtkTextCodec\n\n"
  "A virtual class interface for codecs that readers/writers can rely on\n\n"
  "@par Thanks: Thanks to Tim Shed from Sandia National Laboratories for\n"
  "his work on the concepts and to Marcus Hanwell and Jeff Baumes of\n"
  "Kitware for keeping me out of the weeds\n\n"
  "@sa\n"
  "vtkUTF8TextCodecFactory\n\n";


static PyObject *
PyvtkUTF8TextCodec_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkUTF8TextCodec::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUTF8TextCodec_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUTF8TextCodec *op = static_cast<vtkUTF8TextCodec *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkUTF8TextCodec::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUTF8TextCodec_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkUTF8TextCodec *tempr = vtkUTF8TextCodec::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUTF8TextCodec_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUTF8TextCodec *op = static_cast<vtkUTF8TextCodec *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUTF8TextCodec *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkUTF8TextCodec::NewInstance());

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
PyvtkUTF8TextCodec_Name(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Name");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUTF8TextCodec *op = static_cast<vtkUTF8TextCodec *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->Name() :
      op->vtkUTF8TextCodec::Name());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUTF8TextCodec_CanHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUTF8TextCodec *op = static_cast<vtkUTF8TextCodec *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->CanHandle(temp0) :
      op->vtkUTF8TextCodec::CanHandle(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkUTF8TextCodec_Methods[] = {
  {"IsTypeOf", PyvtkUTF8TextCodec_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkUTF8TextCodec_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkUTF8TextCodec_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkUTF8TextCodec\nC++: static vtkUTF8TextCodec *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkUTF8TextCodec_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkUTF8TextCodec\nC++: vtkUTF8TextCodec *NewInstance()\n\n"},
  {"Name", PyvtkUTF8TextCodec_Name, METH_VARARGS,
   "V.Name() -> string\nC++: const char *Name() override;\n\nThe name this codec goes by - should match the string the factory\nwill take to create it\n"},
  {"CanHandle", PyvtkUTF8TextCodec_CanHandle, METH_VARARGS,
   "V.CanHandle(string) -> bool\nC++: bool CanHandle(const char *testStr) override;\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkUTF8TextCodec_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOCorePython.vtkUTF8TextCodec", // tp_name
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
  PyvtkUTF8TextCodec_Doc, // tp_doc
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

static vtkObjectBase *PyvtkUTF8TextCodec_StaticNew()
{
  return vtkUTF8TextCodec::New();
}

PyObject *PyvtkUTF8TextCodec_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkUTF8TextCodec_Type, PyvtkUTF8TextCodec_Methods,
    "vtkUTF8TextCodec",
 &PyvtkUTF8TextCodec_StaticNew);

  PyTypeObject *pytype = &PyvtkUTF8TextCodec_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkTextCodec_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkUTF8TextCodec(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkUTF8TextCodec_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkUTF8TextCodec", o) != 0)
  {
    Py_DECREF(o);
  }

}

