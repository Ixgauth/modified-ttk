// python wrapper for vtkTextCodecFactory
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
#include "vtkTextCodecFactory.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTextCodecFactory(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTextCodecFactory_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkTextCodecFactory_Doc =
  "vtkTextCodecFactory - maintain a list of text codecs and return\ninstances\n\n"
  "Superclass: vtkObject\n\n"
  "A single class to hold registered codecs and return instances of them\n"
  "based on either a decriptive name (UTF16 or latin-1) or by asking who\n"
  "can handle a given std::vector<unsigned char>\n\n"
  "@par Thanks: Thanks to Tim Shed from Sandia National Laboratories for\n"
  "his work on the concepts and to Marcus Hanwell and Jeff Baumes of\n"
  "Kitware for keeping me out of the weeds\n\n"
  "@sa\n"
  "vtkTextCodec\n\n";


static PyObject *
PyvtkTextCodecFactory_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTextCodecFactory::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextCodecFactory_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextCodecFactory *op = static_cast<vtkTextCodecFactory *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTextCodecFactory::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextCodecFactory_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTextCodecFactory *tempr = vtkTextCodecFactory::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextCodecFactory_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextCodecFactory *op = static_cast<vtkTextCodecFactory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextCodecFactory *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTextCodecFactory::NewInstance());

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
PyvtkTextCodecFactory_UnRegisterAllCreateCallbacks(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "UnRegisterAllCreateCallbacks");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkTextCodecFactory::UnRegisterAllCreateCallbacks();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextCodecFactory_CodecForName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CodecForName");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkTextCodec *tempr = vtkTextCodecFactory::CodecForName(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextCodecFactory_Initialize(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Initialize");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkTextCodecFactory::Initialize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTextCodecFactory_Methods[] = {
  {"IsTypeOf", PyvtkTextCodecFactory_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTextCodecFactory_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTextCodecFactory_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTextCodecFactory\nC++: static vtkTextCodecFactory *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTextCodecFactory_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTextCodecFactory\nC++: vtkTextCodecFactory *NewInstance()\n\n"},
  {"UnRegisterAllCreateCallbacks", PyvtkTextCodecFactory_UnRegisterAllCreateCallbacks, METH_VARARGS,
   "V.UnRegisterAllCreateCallbacks()\nC++: static void UnRegisterAllCreateCallbacks()\n\nProvides mechanism to register/unregister additional callbacks to\ncreate concrete subclasses of vtkTextCodecFactory to handle\ndifferent protocols. The registered callbacks are tried in the\norder they are registered.\n"},
  {"CodecForName", PyvtkTextCodecFactory_CodecForName, METH_VARARGS,
   "V.CodecForName(string) -> vtkTextCodec\nC++: static vtkTextCodec *CodecForName(const char *CodecName)\n\nGiven a codec/storage name try to find one of our registered\ncodecs that can handle it.  This is non-deterministic, very messy\nand should not be your first thing to try. The registered\ncallbacks are tried in the order they are registered.\n"},
  {"Initialize", PyvtkTextCodecFactory_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: static void Initialize()\n\nInitialize core text codecs - needed for the static compilation\ncase.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTextCodecFactory_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOCorePython.vtkTextCodecFactory", // tp_name
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
  PyvtkTextCodecFactory_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTextCodecFactory_StaticNew()
{
  return vtkTextCodecFactory::New();
}

PyObject *PyvtkTextCodecFactory_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTextCodecFactory_Type, PyvtkTextCodecFactory_Methods,
    "vtkTextCodecFactory",
 &PyvtkTextCodecFactory_StaticNew);

  PyTypeObject *pytype = &PyvtkTextCodecFactory_Type;

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

void PyVTKAddFile_vtkTextCodecFactory(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTextCodecFactory_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTextCodecFactory", o) != 0)
  {
    Py_DECREF(o);
  }

}

