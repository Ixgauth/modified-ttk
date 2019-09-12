// python wrapper for vtkSMDeserializerProtobuf
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
#include "vtkSMDeserializerProtobuf.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMDeserializerProtobuf(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMDeserializerProtobuf_ClassNew(); }

#ifndef DECLARED_PyvtkSMDeserializer_ClassNew
extern "C" { PyObject *PyvtkSMDeserializer_ClassNew(); }
#define DECLARED_PyvtkSMDeserializer_ClassNew
#endif

static const char *PyvtkSMDeserializerProtobuf_Doc =
  "vtkSMDeserializerProtobuf - deserializes proxies from their Protobuf\nstates.\n\n"
  "Superclass: vtkSMDeserializer\n\n"
  "vtkSMDeserializerProtobuf is used to deserialize proxies from their\n"
  "Protobuf states. This is the base class of deserialization classes\n"
  "that load Protobuf messagess to restore proxy/servermanager state (or\n"
  "part thereof).\n\n";


static PyObject *
PyvtkSMDeserializerProtobuf_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMDeserializerProtobuf::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDeserializerProtobuf_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDeserializerProtobuf *op = static_cast<vtkSMDeserializerProtobuf *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMDeserializerProtobuf::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDeserializerProtobuf_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMDeserializerProtobuf *tempr = vtkSMDeserializerProtobuf::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDeserializerProtobuf_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDeserializerProtobuf *op = static_cast<vtkSMDeserializerProtobuf *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMDeserializerProtobuf *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMDeserializerProtobuf::NewInstance());

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
PyvtkSMDeserializerProtobuf_GetStateLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStateLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDeserializerProtobuf *op = static_cast<vtkSMDeserializerProtobuf *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMStateLocator *tempr = (ap.IsBound() ?
      op->GetStateLocator() :
      op->vtkSMDeserializerProtobuf::GetStateLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDeserializerProtobuf_SetStateLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStateLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDeserializerProtobuf *op = static_cast<vtkSMDeserializerProtobuf *>(vp);

  vtkSMStateLocator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMStateLocator"))
  {
    if (ap.IsBound())
    {
      op->SetStateLocator(temp0);
    }
    else
    {
      op->vtkSMDeserializerProtobuf::SetStateLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMDeserializerProtobuf_Methods[] = {
  {"IsTypeOf", PyvtkSMDeserializerProtobuf_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMDeserializerProtobuf_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMDeserializerProtobuf_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMDeserializerProtobuf\nC++: static vtkSMDeserializerProtobuf *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMDeserializerProtobuf_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMDeserializerProtobuf\nC++: vtkSMDeserializerProtobuf *NewInstance()\n\n"},
  {"GetStateLocator", PyvtkSMDeserializerProtobuf_GetStateLocator, METH_VARARGS,
   "V.GetStateLocator() -> vtkSMStateLocator\nC++: virtual vtkSMStateLocator *GetStateLocator()\n\nGet/Set the session.\n"},
  {"SetStateLocator", PyvtkSMDeserializerProtobuf_SetStateLocator, METH_VARARGS,
   "V.SetStateLocator(vtkSMStateLocator)\nC++: virtual void SetStateLocator(vtkSMStateLocator *)\n\nGet/Set the session.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMDeserializerProtobuf_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMDeserializerProtobuf", // tp_name
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
  PyvtkSMDeserializerProtobuf_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMDeserializerProtobuf_StaticNew()
{
  return vtkSMDeserializerProtobuf::New();
}

PyObject *PyvtkSMDeserializerProtobuf_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMDeserializerProtobuf_Type, PyvtkSMDeserializerProtobuf_Methods,
    "vtkSMDeserializerProtobuf",
 &PyvtkSMDeserializerProtobuf_StaticNew);

  PyTypeObject *pytype = &PyvtkSMDeserializerProtobuf_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMDeserializer_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMDeserializerProtobuf(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMDeserializerProtobuf_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMDeserializerProtobuf", o) != 0)
  {
    Py_DECREF(o);
  }

}

