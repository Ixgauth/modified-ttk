// python wrapper for vtkPythonAlgorithm
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
#include "vtkPythonAlgorithm.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPythonAlgorithm(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPythonAlgorithm_ClassNew(); }

#ifndef DECLARED_PyvtkAlgorithm_ClassNew
extern "C" { PyObject *PyvtkAlgorithm_ClassNew(); }
#define DECLARED_PyvtkAlgorithm_ClassNew
#endif

static const char *PyvtkPythonAlgorithm_Doc =
  "vtkPythonAlgorithm - algorithm that can be implemented in Python\n\n"
  "Superclass: vtkAlgorithm\n\n"
  "vtkPythonAlgorithm is an algorithm that calls a Python object to do\n"
  "the actual work. It defers the following methods to Python:\n"
  "- ProcessRequest()\n"
  "- FillInputPortInformation()\n"
  "- FillOutputPortInformation()\n\n"
  "Python signature of these methods is as follows:\n"
  "- ProcessRequest(self, vtkself, request, inInfo, outInfo) : vtkself\n"
  "  is the vtk object, inInfo is a tuple of information objects\n"
  "- FillInputPortInformation(self, vtkself, port, info)\n"
  "- FillOutputPortInformation(self, vtkself, port, info)\n"
  "- Initialize(self, vtkself)\n\n"
  "In addition, it calls an Initialize() method when setting the Python\n"
  "object, which allows the initialization of number of input and output\n"
  "ports etc.\n\n"
  "@sa\n"
  "vtkProgrammableFilter\n\n";


static PyObject *
PyvtkPythonAlgorithm_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPythonAlgorithm::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonAlgorithm_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAlgorithm *op = static_cast<vtkPythonAlgorithm *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPythonAlgorithm::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonAlgorithm_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPythonAlgorithm *tempr = vtkPythonAlgorithm::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonAlgorithm_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAlgorithm *op = static_cast<vtkPythonAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPythonAlgorithm *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPythonAlgorithm::NewInstance());

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
PyvtkPythonAlgorithm_SetPythonObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPythonObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAlgorithm *op = static_cast<vtkPythonAlgorithm *>(vp);

  PyObject *temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetPythonObject(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPythonObject(temp0);
    }
    else
    {
      op->vtkPythonAlgorithm::SetPythonObject(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPythonAlgorithm_SetNumberOfInputPorts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfInputPorts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAlgorithm *op = static_cast<vtkPythonAlgorithm *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfInputPorts(temp0);
    }
    else
    {
      op->vtkPythonAlgorithm::SetNumberOfInputPorts(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPythonAlgorithm_SetNumberOfOutputPorts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfOutputPorts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAlgorithm *op = static_cast<vtkPythonAlgorithm *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfOutputPorts(temp0);
    }
    else
    {
      op->vtkPythonAlgorithm::SetNumberOfOutputPorts(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPythonAlgorithm_Methods[] = {
  {"IsTypeOf", PyvtkPythonAlgorithm_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPythonAlgorithm_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPythonAlgorithm_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPythonAlgorithm\nC++: static vtkPythonAlgorithm *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPythonAlgorithm_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPythonAlgorithm\nC++: vtkPythonAlgorithm *NewInstance()\n\n"},
  {"SetPythonObject", PyvtkPythonAlgorithm_SetPythonObject, METH_VARARGS,
   "V.SetPythonObject(PyObject)\nC++: void SetPythonObject(PyObject *obj)\n\nSpecify the Python object to use to operate on the data. A\nreference will be taken on the object. This will also invoke\nInitialize() on the Python object, which is commonly used to set\nthe number of input and output ports as well as perform tasks\ncommonly performed in the constructor of C++ algorithm subclass.\n"},
  {"SetNumberOfInputPorts", PyvtkPythonAlgorithm_SetNumberOfInputPorts, METH_VARARGS,
   "V.SetNumberOfInputPorts(int)\nC++: void SetNumberOfInputPorts(int n) override;\n\nSet the number of input ports used by the algorithm. This is made\npublic so that it can be called from Python.\n"},
  {"SetNumberOfOutputPorts", PyvtkPythonAlgorithm_SetNumberOfOutputPorts, METH_VARARGS,
   "V.SetNumberOfOutputPorts(int)\nC++: void SetNumberOfOutputPorts(int n) override;\n\nSet the number of output ports provided by the algorithm. This is\nmade public so that it can be called from Python.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPythonAlgorithm_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersPythonPython.vtkPythonAlgorithm", // tp_name
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
  PyvtkPythonAlgorithm_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPythonAlgorithm_StaticNew()
{
  return vtkPythonAlgorithm::New();
}

PyObject *PyvtkPythonAlgorithm_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPythonAlgorithm_Type, PyvtkPythonAlgorithm_Methods,
    "vtkPythonAlgorithm",
 &PyvtkPythonAlgorithm_StaticNew);

  PyTypeObject *pytype = &PyvtkPythonAlgorithm_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPythonAlgorithm(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPythonAlgorithm_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPythonAlgorithm", o) != 0)
  {
    Py_DECREF(o);
  }

}

