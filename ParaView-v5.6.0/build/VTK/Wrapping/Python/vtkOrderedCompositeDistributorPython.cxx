// python wrapper for vtkOrderedCompositeDistributor
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
#include "vtkOrderedCompositeDistributor.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOrderedCompositeDistributor(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkOrderedCompositeDistributor_ClassNew(); }

#ifndef DECLARED_PyvtkPointSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPointSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPointSetAlgorithm_ClassNew
#endif

static const char *PyvtkOrderedCompositeDistributor_Doc =
  "vtkOrderedCompositeDistributor - This class distributes data for use\nwith ordered compositing (i.e.\n\n"
  "Superclass: vtkPointSetAlgorithm\n\n"
  "with IceT).  The composite distributor takes the same vtkPKdTree that\n"
  "IceT and will use that to distribute the data.\n\n"
  "Input poly data will be converted back to poly data on the output.\n\n"
  "This class also has an optional pass through mode to make it easy to\n"
  "turn ordered compositing on and off.\n\n";

static PyTypeObject PyvtkOrderedCompositeDistributor_BoundaryModes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsRenderingPython.vtkOrderedCompositeDistributor.BoundaryModes", // tp_name
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

PyObject *PyvtkOrderedCompositeDistributor_BoundaryModes_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkOrderedCompositeDistributor_BoundaryModes_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkOrderedCompositeDistributor_BoundaryModes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkOrderedCompositeDistributor_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOrderedCompositeDistributor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrderedCompositeDistributor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedCompositeDistributor *op = static_cast<vtkOrderedCompositeDistributor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOrderedCompositeDistributor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrderedCompositeDistributor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOrderedCompositeDistributor *tempr = vtkOrderedCompositeDistributor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrderedCompositeDistributor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedCompositeDistributor *op = static_cast<vtkOrderedCompositeDistributor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOrderedCompositeDistributor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOrderedCompositeDistributor::NewInstance());

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
PyvtkOrderedCompositeDistributor_SetPKdTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPKdTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedCompositeDistributor *op = static_cast<vtkOrderedCompositeDistributor *>(vp);

  vtkPKdTree *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPKdTree"))
  {
    if (ap.IsBound())
    {
      op->SetPKdTree(temp0);
    }
    else
    {
      op->vtkOrderedCompositeDistributor::SetPKdTree(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrderedCompositeDistributor_GetPKdTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPKdTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedCompositeDistributor *op = static_cast<vtkOrderedCompositeDistributor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPKdTree *tempr = (ap.IsBound() ?
      op->GetPKdTree() :
      op->vtkOrderedCompositeDistributor::GetPKdTree());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrderedCompositeDistributor_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedCompositeDistributor *op = static_cast<vtkOrderedCompositeDistributor *>(vp);

  vtkMultiProcessController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
  {
    if (ap.IsBound())
    {
      op->SetController(temp0);
    }
    else
    {
      op->vtkOrderedCompositeDistributor::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrderedCompositeDistributor_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedCompositeDistributor *op = static_cast<vtkOrderedCompositeDistributor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkOrderedCompositeDistributor::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrderedCompositeDistributor_SetPassThrough(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassThrough");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedCompositeDistributor *op = static_cast<vtkOrderedCompositeDistributor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassThrough(temp0);
    }
    else
    {
      op->vtkOrderedCompositeDistributor::SetPassThrough(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrderedCompositeDistributor_GetPassThrough(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassThrough");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedCompositeDistributor *op = static_cast<vtkOrderedCompositeDistributor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPassThrough() :
      op->vtkOrderedCompositeDistributor::GetPassThrough());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrderedCompositeDistributor_PassThroughOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedCompositeDistributor *op = static_cast<vtkOrderedCompositeDistributor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassThroughOn();
    }
    else
    {
      op->vtkOrderedCompositeDistributor::PassThroughOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrderedCompositeDistributor_PassThroughOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedCompositeDistributor *op = static_cast<vtkOrderedCompositeDistributor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassThroughOff();
    }
    else
    {
      op->vtkOrderedCompositeDistributor::PassThroughOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrderedCompositeDistributor_SetOutputType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedCompositeDistributor *op = static_cast<vtkOrderedCompositeDistributor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputType(temp0);
    }
    else
    {
      op->vtkOrderedCompositeDistributor::SetOutputType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrderedCompositeDistributor_GetOutputType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedCompositeDistributor *op = static_cast<vtkOrderedCompositeDistributor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetOutputType() :
      op->vtkOrderedCompositeDistributor::GetOutputType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrderedCompositeDistributor_SetBoundaryMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoundaryMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedCompositeDistributor *op = static_cast<vtkOrderedCompositeDistributor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBoundaryMode(temp0);
    }
    else
    {
      op->vtkOrderedCompositeDistributor::SetBoundaryMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrderedCompositeDistributor_GetBoundaryModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundaryModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedCompositeDistributor *op = static_cast<vtkOrderedCompositeDistributor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBoundaryModeMinValue() :
      op->vtkOrderedCompositeDistributor::GetBoundaryModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrderedCompositeDistributor_GetBoundaryModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundaryModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedCompositeDistributor *op = static_cast<vtkOrderedCompositeDistributor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBoundaryModeMaxValue() :
      op->vtkOrderedCompositeDistributor::GetBoundaryModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrderedCompositeDistributor_GetBoundaryMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundaryMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedCompositeDistributor *op = static_cast<vtkOrderedCompositeDistributor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBoundaryMode() :
      op->vtkOrderedCompositeDistributor::GetBoundaryMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkOrderedCompositeDistributor_Methods[] = {
  {"IsTypeOf", PyvtkOrderedCompositeDistributor_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOrderedCompositeDistributor_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOrderedCompositeDistributor_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkOrderedCompositeDistributor\nC++: static vtkOrderedCompositeDistributor *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOrderedCompositeDistributor_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkOrderedCompositeDistributor\nC++: vtkOrderedCompositeDistributor *NewInstance()\n\n"},
  {"SetPKdTree", PyvtkOrderedCompositeDistributor_SetPKdTree, METH_VARARGS,
   "V.SetPKdTree(vtkPKdTree)\nC++: virtual void SetPKdTree(vtkPKdTree *)\n\nSet the vtkPKdTree to distribute with.\n"},
  {"GetPKdTree", PyvtkOrderedCompositeDistributor_GetPKdTree, METH_VARARGS,
   "V.GetPKdTree() -> vtkPKdTree\nC++: virtual vtkPKdTree *GetPKdTree()\n\nSet the vtkPKdTree to distribute with.\n"},
  {"SetController", PyvtkOrderedCompositeDistributor_SetController, METH_VARARGS,
   "V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nSet/get the controller to distribute with.\n"},
  {"GetController", PyvtkOrderedCompositeDistributor_GetController, METH_VARARGS,
   "V.GetController() -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\nSet/get the controller to distribute with.\n"},
  {"SetPassThrough", PyvtkOrderedCompositeDistributor_SetPassThrough, METH_VARARGS,
   "V.SetPassThrough(bool)\nC++: virtual void SetPassThrough(bool _arg)\n\nWhen on, data is passed through without compositing.\n"},
  {"GetPassThrough", PyvtkOrderedCompositeDistributor_GetPassThrough, METH_VARARGS,
   "V.GetPassThrough() -> bool\nC++: virtual bool GetPassThrough()\n\nWhen on, data is passed through without compositing.\n"},
  {"PassThroughOn", PyvtkOrderedCompositeDistributor_PassThroughOn, METH_VARARGS,
   "V.PassThroughOn()\nC++: virtual void PassThroughOn()\n\nWhen on, data is passed through without compositing.\n"},
  {"PassThroughOff", PyvtkOrderedCompositeDistributor_PassThroughOff, METH_VARARGS,
   "V.PassThroughOff()\nC++: virtual void PassThroughOff()\n\nWhen on, data is passed through without compositing.\n"},
  {"SetOutputType", PyvtkOrderedCompositeDistributor_SetOutputType, METH_VARARGS,
   "V.SetOutputType(string)\nC++: virtual void SetOutputType(const char *_arg)\n\nWhen non-null, the output will be converted to the given type.\n"},
  {"GetOutputType", PyvtkOrderedCompositeDistributor_GetOutputType, METH_VARARGS,
   "V.GetOutputType() -> string\nC++: virtual char *GetOutputType()\n\nWhen non-null, the output will be converted to the given type.\n"},
  {"SetBoundaryMode", PyvtkOrderedCompositeDistributor_SetBoundaryMode, METH_VARARGS,
   "V.SetBoundaryMode(int)\nC++: virtual void SetBoundaryMode(int _arg)\n\nGet/Set the mode to use to handle cells on the boundary of the\nKdTree. Default is SPLIT_BOUNDARY_CELLS.\n"},
  {"GetBoundaryModeMinValue", PyvtkOrderedCompositeDistributor_GetBoundaryModeMinValue, METH_VARARGS,
   "V.GetBoundaryModeMinValue() -> int\nC++: virtual int GetBoundaryModeMinValue()\n\nGet/Set the mode to use to handle cells on the boundary of the\nKdTree. Default is SPLIT_BOUNDARY_CELLS.\n"},
  {"GetBoundaryModeMaxValue", PyvtkOrderedCompositeDistributor_GetBoundaryModeMaxValue, METH_VARARGS,
   "V.GetBoundaryModeMaxValue() -> int\nC++: virtual int GetBoundaryModeMaxValue()\n\nGet/Set the mode to use to handle cells on the boundary of the\nKdTree. Default is SPLIT_BOUNDARY_CELLS.\n"},
  {"GetBoundaryMode", PyvtkOrderedCompositeDistributor_GetBoundaryMode, METH_VARARGS,
   "V.GetBoundaryMode() -> int\nC++: virtual int GetBoundaryMode()\n\nGet/Set the mode to use to handle cells on the boundary of the\nKdTree. Default is SPLIT_BOUNDARY_CELLS.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkOrderedCompositeDistributor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsRenderingPython.vtkOrderedCompositeDistributor", // tp_name
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
  PyvtkOrderedCompositeDistributor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOrderedCompositeDistributor_StaticNew()
{
  return vtkOrderedCompositeDistributor::New();
}

PyObject *PyvtkOrderedCompositeDistributor_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkOrderedCompositeDistributor_Type, PyvtkOrderedCompositeDistributor_Methods,
    "vtkOrderedCompositeDistributor",
 &PyvtkOrderedCompositeDistributor_StaticNew);

  PyTypeObject *pytype = &PyvtkOrderedCompositeDistributor_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPointSetAlgorithm_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkOrderedCompositeDistributor_BoundaryModes_Type);
  PyvtkOrderedCompositeDistributor_BoundaryModes_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkOrderedCompositeDistributor_BoundaryModes_Type);

  o = (PyObject *)&PyvtkOrderedCompositeDistributor_BoundaryModes_Type;
  if (PyDict_SetItemString(d, "BoundaryModes", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkOrderedCompositeDistributor::BoundaryModes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "ASSIGN_TO_ONE_REGION", vtkOrderedCompositeDistributor::ASSIGN_TO_ONE_REGION },
        { "ASSIGN_TO_ALL_INTERSECTING_REGIONS", vtkOrderedCompositeDistributor::ASSIGN_TO_ALL_INTERSECTING_REGIONS },
        { "SPLIT_BOUNDARY_CELLS", vtkOrderedCompositeDistributor::SPLIT_BOUNDARY_CELLS },
      };

    o = PyvtkOrderedCompositeDistributor_BoundaryModes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOrderedCompositeDistributor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOrderedCompositeDistributor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOrderedCompositeDistributor", o) != 0)
  {
    Py_DECREF(o);
  }

}

