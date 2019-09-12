// python wrapper for vtkImageLogic
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
#include "vtkImageLogic.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageLogic(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageLogic_ClassNew(); }

#ifndef DECLARED_PyvtkThreadedImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkThreadedImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkThreadedImageAlgorithm_ClassNew
#endif

static const char *PyvtkImageLogic_Doc =
  "vtkImageLogic - And, or, xor, nand, nor, not.\n\n"
  "Superclass: vtkThreadedImageAlgorithm\n\n"
  "vtkImageLogic implements basic logic operations. SetOperation is used\n"
  "to select the filter's behavior. The filter can take two or one\n"
  "input. Inputs must have the same type.\n\n";


static PyObject *
PyvtkImageLogic_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageLogic::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageLogic_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLogic *op = static_cast<vtkImageLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageLogic::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageLogic_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageLogic *tempr = vtkImageLogic::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageLogic_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLogic *op = static_cast<vtkImageLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageLogic *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageLogic::NewInstance());

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
PyvtkImageLogic_SetOperation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLogic *op = static_cast<vtkImageLogic *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOperation(temp0);
    }
    else
    {
      op->vtkImageLogic::SetOperation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageLogic_GetOperation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLogic *op = static_cast<vtkImageLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOperation() :
      op->vtkImageLogic::GetOperation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageLogic_SetOperationToAnd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToAnd");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLogic *op = static_cast<vtkImageLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToAnd();
    }
    else
    {
      op->vtkImageLogic::SetOperationToAnd();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageLogic_SetOperationToOr(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToOr");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLogic *op = static_cast<vtkImageLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToOr();
    }
    else
    {
      op->vtkImageLogic::SetOperationToOr();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageLogic_SetOperationToXor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToXor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLogic *op = static_cast<vtkImageLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToXor();
    }
    else
    {
      op->vtkImageLogic::SetOperationToXor();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageLogic_SetOperationToNand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToNand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLogic *op = static_cast<vtkImageLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToNand();
    }
    else
    {
      op->vtkImageLogic::SetOperationToNand();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageLogic_SetOperationToNor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToNor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLogic *op = static_cast<vtkImageLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToNor();
    }
    else
    {
      op->vtkImageLogic::SetOperationToNor();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageLogic_SetOperationToNot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToNot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLogic *op = static_cast<vtkImageLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToNot();
    }
    else
    {
      op->vtkImageLogic::SetOperationToNot();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageLogic_SetOutputTrueValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputTrueValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLogic *op = static_cast<vtkImageLogic *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputTrueValue(temp0);
    }
    else
    {
      op->vtkImageLogic::SetOutputTrueValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageLogic_GetOutputTrueValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputTrueValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLogic *op = static_cast<vtkImageLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOutputTrueValue() :
      op->vtkImageLogic::GetOutputTrueValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageLogic_SetInput1Data(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput1Data");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLogic *op = static_cast<vtkImageLogic *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetInput1Data(temp0);
    }
    else
    {
      op->vtkImageLogic::SetInput1Data(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageLogic_SetInput2Data(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput2Data");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLogic *op = static_cast<vtkImageLogic *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetInput2Data(temp0);
    }
    else
    {
      op->vtkImageLogic::SetInput2Data(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageLogic_Methods[] = {
  {"IsTypeOf", PyvtkImageLogic_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageLogic_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageLogic_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageLogic\nC++: static vtkImageLogic *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageLogic_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageLogic\nC++: vtkImageLogic *NewInstance()\n\n"},
  {"SetOperation", PyvtkImageLogic_SetOperation, METH_VARARGS,
   "V.SetOperation(int)\nC++: virtual void SetOperation(int _arg)\n\nSet/Get the Operation to perform.\n"},
  {"GetOperation", PyvtkImageLogic_GetOperation, METH_VARARGS,
   "V.GetOperation() -> int\nC++: virtual int GetOperation()\n\nSet/Get the Operation to perform.\n"},
  {"SetOperationToAnd", PyvtkImageLogic_SetOperationToAnd, METH_VARARGS,
   "V.SetOperationToAnd()\nC++: void SetOperationToAnd()\n\nSet/Get the Operation to perform.\n"},
  {"SetOperationToOr", PyvtkImageLogic_SetOperationToOr, METH_VARARGS,
   "V.SetOperationToOr()\nC++: void SetOperationToOr()\n\nSet/Get the Operation to perform.\n"},
  {"SetOperationToXor", PyvtkImageLogic_SetOperationToXor, METH_VARARGS,
   "V.SetOperationToXor()\nC++: void SetOperationToXor()\n\nSet/Get the Operation to perform.\n"},
  {"SetOperationToNand", PyvtkImageLogic_SetOperationToNand, METH_VARARGS,
   "V.SetOperationToNand()\nC++: void SetOperationToNand()\n\nSet/Get the Operation to perform.\n"},
  {"SetOperationToNor", PyvtkImageLogic_SetOperationToNor, METH_VARARGS,
   "V.SetOperationToNor()\nC++: void SetOperationToNor()\n\nSet/Get the Operation to perform.\n"},
  {"SetOperationToNot", PyvtkImageLogic_SetOperationToNot, METH_VARARGS,
   "V.SetOperationToNot()\nC++: void SetOperationToNot()\n\nSet/Get the Operation to perform.\n"},
  {"SetOutputTrueValue", PyvtkImageLogic_SetOutputTrueValue, METH_VARARGS,
   "V.SetOutputTrueValue(float)\nC++: virtual void SetOutputTrueValue(double _arg)\n\nSet the value to use for true in the output.\n"},
  {"GetOutputTrueValue", PyvtkImageLogic_GetOutputTrueValue, METH_VARARGS,
   "V.GetOutputTrueValue() -> float\nC++: virtual double GetOutputTrueValue()\n\nSet the value to use for true in the output.\n"},
  {"SetInput1Data", PyvtkImageLogic_SetInput1Data, METH_VARARGS,
   "V.SetInput1Data(vtkDataObject)\nC++: virtual void SetInput1Data(vtkDataObject *input)\n\nSet the Input1 of this filter.\n"},
  {"SetInput2Data", PyvtkImageLogic_SetInput2Data, METH_VARARGS,
   "V.SetInput2Data(vtkDataObject)\nC++: virtual void SetInput2Data(vtkDataObject *input)\n\nSet the Input2 of this filter.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageLogic_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingMathPython.vtkImageLogic", // tp_name
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
  PyvtkImageLogic_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageLogic_StaticNew()
{
  return vtkImageLogic::New();
}

PyObject *PyvtkImageLogic_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageLogic_Type, PyvtkImageLogic_Methods,
    "vtkImageLogic",
 &PyvtkImageLogic_StaticNew);

  PyTypeObject *pytype = &PyvtkImageLogic_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkThreadedImageAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageLogic(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageLogic_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageLogic", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 7; c++)
  {
    static const struct { const char *name; int value; }
      constants[7] = {
        { "VTK_AND", 0 },
        { "VTK_OR", 1 },
        { "VTK_XOR", 2 },
        { "VTK_NAND", 3 },
        { "VTK_NOR", 4 },
        { "VTK_NOT", 5 },
        { "VTK_NOP", 6 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

