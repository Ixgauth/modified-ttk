// python wrapper for vtkTreeDFSIterator
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
#include "vtkTreeDFSIterator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTreeDFSIterator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTreeDFSIterator_ClassNew(); }

#ifndef DECLARED_PyvtkTreeIterator_ClassNew
extern "C" { PyObject *PyvtkTreeIterator_ClassNew(); }
#define DECLARED_PyvtkTreeIterator_ClassNew
#endif

static const char *PyvtkTreeDFSIterator_Doc =
  "vtkTreeDFSIterator - depth first iterator through a vtkGraph\n\n"
  "Superclass: vtkTreeIterator\n\n"
  "vtkTreeDFSIterator performs a depth first search traversal of a tree.\n\n"
  "First, you must set the tree on which you are going to iterate, and\n"
  "then optionally set the starting vertex and mode. The mode is either\n"
  "DISCOVER (default), in which case vertices are visited as they are\n"
  "first reached, or FINISH, in which case vertices are visited when\n"
  "they are done, i.e. all adjacent vertices have been discovered\n"
  "already.\n\n"
  "After setting up the iterator, the normal mode of operation is to set\n"
  "up a while(iter->HasNext())loop, with the statement vtkIdType vertex\n"
  "= iter->Next()inside the loop.\n\n";

static PyTypeObject PyvtkTreeDFSIterator_ModeType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkTreeDFSIterator.ModeType", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkTreeDFSIterator_ModeType_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkTreeDFSIterator_ModeType_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkTreeDFSIterator_ModeType_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkTreeDFSIterator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTreeDFSIterator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeDFSIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeDFSIterator *op = static_cast<vtkTreeDFSIterator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTreeDFSIterator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeDFSIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTreeDFSIterator *tempr = vtkTreeDFSIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeDFSIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeDFSIterator *op = static_cast<vtkTreeDFSIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTreeDFSIterator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTreeDFSIterator::NewInstance());

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
PyvtkTreeDFSIterator_SetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeDFSIterator *op = static_cast<vtkTreeDFSIterator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMode(temp0);
    }
    else
    {
      op->vtkTreeDFSIterator::SetMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeDFSIterator_GetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeDFSIterator *op = static_cast<vtkTreeDFSIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMode() :
      op->vtkTreeDFSIterator::GetMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTreeDFSIterator_Methods[] = {
  {"IsTypeOf", PyvtkTreeDFSIterator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTreeDFSIterator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTreeDFSIterator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTreeDFSIterator\nC++: static vtkTreeDFSIterator *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTreeDFSIterator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTreeDFSIterator\nC++: vtkTreeDFSIterator *NewInstance()\n\n"},
  {"SetMode", PyvtkTreeDFSIterator_SetMode, METH_VARARGS,
   "V.SetMode(int)\nC++: void SetMode(int mode)\n\nSet the visit mode of the iterator.  Mode can be DISCOVER (0):\nOrder by discovery time FINISH   (1): Order by finish time\nDefault is DISCOVER. Use DISCOVER for top-down algorithms where\nparents need to be processed before children. Use FINISH for\nbottom-up algorithms where children need to be processed before\nparents.\n"},
  {"GetMode", PyvtkTreeDFSIterator_GetMode, METH_VARARGS,
   "V.GetMode() -> int\nC++: virtual int GetMode()\n\nSet the visit mode of the iterator.  Mode can be DISCOVER (0):\nOrder by discovery time FINISH   (1): Order by finish time\nDefault is DISCOVER. Use DISCOVER for top-down algorithms where\nparents need to be processed before children. Use FINISH for\nbottom-up algorithms where children need to be processed before\nparents.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTreeDFSIterator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkTreeDFSIterator", // tp_name
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
  PyvtkTreeDFSIterator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTreeDFSIterator_StaticNew()
{
  return vtkTreeDFSIterator::New();
}

PyObject *PyvtkTreeDFSIterator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTreeDFSIterator_Type, PyvtkTreeDFSIterator_Methods,
    "vtkTreeDFSIterator",
 &PyvtkTreeDFSIterator_StaticNew);

  PyTypeObject *pytype = &PyvtkTreeDFSIterator_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkTreeIterator_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkTreeDFSIterator_ModeType_Type);
  PyvtkTreeDFSIterator_ModeType_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkTreeDFSIterator_ModeType_Type);

  o = (PyObject *)&PyvtkTreeDFSIterator_ModeType_Type;
  if (PyDict_SetItemString(d, "ModeType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkTreeDFSIterator::ModeType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "DISCOVER", vtkTreeDFSIterator::DISCOVER },
        { "FINISH", vtkTreeDFSIterator::FINISH },
      };

    o = PyvtkTreeDFSIterator_ModeType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTreeDFSIterator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTreeDFSIterator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTreeDFSIterator", o) != 0)
  {
    Py_DECREF(o);
  }

}

