// python wrapper for vtkASCIITextCodec
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
#include "vtkASCIITextCodec.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkASCIITextCodec(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkASCIITextCodec_ClassNew(); }

#ifndef DECLARED_PyvtkTextCodec_ClassNew
extern "C" { PyObject *PyvtkTextCodec_ClassNew(); }
#define DECLARED_PyvtkTextCodec_ClassNew
#endif

static const char *PyvtkASCIITextCodec_Doc =
  "vtkASCIITextCodec - Class to read/write ascii text.\n\n"
  "Superclass: vtkTextCodec\n\n"
  "A virtual class interface for codecs that readers/writers can rely on\n\n"
  "@par Thanks: Thanks to Tim Shed from Sandia National Laboratories for\n"
  "his work on the concepts and to Marcus Hanwell and Jeff Baumes of\n"
  "Kitware for keeping me out of the weeds\n\n"
  "@sa\n"
  "vtkASCIITextCodecFactory\n\n";


static PyObject *
PyvtkASCIITextCodec_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkASCIITextCodec::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkASCIITextCodec_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkASCIITextCodec *op = static_cast<vtkASCIITextCodec *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkASCIITextCodec::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkASCIITextCodec_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkASCIITextCodec *tempr = vtkASCIITextCodec::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkASCIITextCodec_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkASCIITextCodec *op = static_cast<vtkASCIITextCodec *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkASCIITextCodec *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkASCIITextCodec::NewInstance());

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
PyvtkASCIITextCodec_Name(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Name");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkASCIITextCodec *op = static_cast<vtkASCIITextCodec *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->Name() :
      op->vtkASCIITextCodec::Name());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkASCIITextCodec_CanHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkASCIITextCodec *op = static_cast<vtkASCIITextCodec *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->CanHandle(temp0) :
      op->vtkASCIITextCodec::CanHandle(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkASCIITextCodec_Methods[] = {
  {"IsTypeOf", PyvtkASCIITextCodec_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkASCIITextCodec_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkASCIITextCodec_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkASCIITextCodec\nC++: static vtkASCIITextCodec *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkASCIITextCodec_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkASCIITextCodec\nC++: vtkASCIITextCodec *NewInstance()\n\n"},
  {"Name", PyvtkASCIITextCodec_Name, METH_VARARGS,
   "V.Name() -> string\nC++: const char *Name() override;\n\nThe name this codec goes by - should match the string the factory\nwill take to create it\n"},
  {"CanHandle", PyvtkASCIITextCodec_CanHandle, METH_VARARGS,
   "V.CanHandle(string) -> bool\nC++: bool CanHandle(const char *NameString) override;\n\nThe name this codec goes by - should match the string the factory\nwill take to create it\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkASCIITextCodec_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOCorePython.vtkASCIITextCodec", // tp_name
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
  PyvtkASCIITextCodec_Doc, // tp_doc
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

static vtkObjectBase *PyvtkASCIITextCodec_StaticNew()
{
  return vtkASCIITextCodec::New();
}

PyObject *PyvtkASCIITextCodec_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkASCIITextCodec_Type, PyvtkASCIITextCodec_Methods,
    "vtkASCIITextCodec",
 &PyvtkASCIITextCodec_StaticNew);

  PyTypeObject *pytype = &PyvtkASCIITextCodec_Type;

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

void PyVTKAddFile_vtkASCIITextCodec(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkASCIITextCodec_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkASCIITextCodec", o) != 0)
  {
    Py_DECREF(o);
  }

}

