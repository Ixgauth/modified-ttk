// python wrapper for vtkCPXMLPWriterPipeline
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
#include "vtkStdString.h"
#include "vtkCPXMLPWriterPipeline.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCPXMLPWriterPipeline(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCPXMLPWriterPipeline_ClassNew(); }

#ifndef DECLARED_PyvtkCPPipeline_ClassNew
extern "C" { PyObject *PyvtkCPPipeline_ClassNew(); }
#define DECLARED_PyvtkCPPipeline_ClassNew
#endif

static const char *PyvtkCPXMLPWriterPipeline_Doc =
  "vtkCPXMLPWriterPipeline - @ingroup CoProcessing\n\n"
  "Superclass: vtkCPPipeline\n\n"
  "Generic PXML writer pipeline to write out the full Catalyst input\n"
  "datasets. The filename will correspond to the input name/channel\n"
  "identifier with time step and file extension (e.g. \"input_0.pvtu\" for\n"
  "an unstructured dataset with no padding).\n\n";


static PyObject *
PyvtkCPXMLPWriterPipeline_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCPXMLPWriterPipeline::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPXMLPWriterPipeline_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPXMLPWriterPipeline *op = static_cast<vtkCPXMLPWriterPipeline *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCPXMLPWriterPipeline::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPXMLPWriterPipeline_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCPXMLPWriterPipeline *tempr = vtkCPXMLPWriterPipeline::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPXMLPWriterPipeline_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPXMLPWriterPipeline *op = static_cast<vtkCPXMLPWriterPipeline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCPXMLPWriterPipeline *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCPXMLPWriterPipeline::NewInstance());

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
PyvtkCPXMLPWriterPipeline_RequestDataDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequestDataDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPXMLPWriterPipeline *op = static_cast<vtkCPXMLPWriterPipeline *>(vp);

  vtkCPDataDescription *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCPDataDescription"))
  {
    int tempr = (ap.IsBound() ?
      op->RequestDataDescription(temp0) :
      op->vtkCPXMLPWriterPipeline::RequestDataDescription(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPXMLPWriterPipeline_CoProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CoProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPXMLPWriterPipeline *op = static_cast<vtkCPXMLPWriterPipeline *>(vp);

  vtkCPDataDescription *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCPDataDescription"))
  {
    int tempr = (ap.IsBound() ?
      op->CoProcess(temp0) :
      op->vtkCPXMLPWriterPipeline::CoProcess(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPXMLPWriterPipeline_SetOutputFrequency(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputFrequency");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPXMLPWriterPipeline *op = static_cast<vtkCPXMLPWriterPipeline *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputFrequency(temp0);
    }
    else
    {
      op->vtkCPXMLPWriterPipeline::SetOutputFrequency(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCPXMLPWriterPipeline_GetOutputFrequencyMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputFrequencyMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPXMLPWriterPipeline *op = static_cast<vtkCPXMLPWriterPipeline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputFrequencyMinValue() :
      op->vtkCPXMLPWriterPipeline::GetOutputFrequencyMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPXMLPWriterPipeline_GetOutputFrequencyMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputFrequencyMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPXMLPWriterPipeline *op = static_cast<vtkCPXMLPWriterPipeline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputFrequencyMaxValue() :
      op->vtkCPXMLPWriterPipeline::GetOutputFrequencyMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPXMLPWriterPipeline_GetOutputFrequency(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputFrequency");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPXMLPWriterPipeline *op = static_cast<vtkCPXMLPWriterPipeline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputFrequency() :
      op->vtkCPXMLPWriterPipeline::GetOutputFrequency());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPXMLPWriterPipeline_SetPaddingAmount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPaddingAmount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPXMLPWriterPipeline *op = static_cast<vtkCPXMLPWriterPipeline *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPaddingAmount(temp0);
    }
    else
    {
      op->vtkCPXMLPWriterPipeline::SetPaddingAmount(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCPXMLPWriterPipeline_GetPaddingAmountMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPaddingAmountMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPXMLPWriterPipeline *op = static_cast<vtkCPXMLPWriterPipeline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPaddingAmountMinValue() :
      op->vtkCPXMLPWriterPipeline::GetPaddingAmountMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPXMLPWriterPipeline_GetPaddingAmountMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPaddingAmountMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPXMLPWriterPipeline *op = static_cast<vtkCPXMLPWriterPipeline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPaddingAmountMaxValue() :
      op->vtkCPXMLPWriterPipeline::GetPaddingAmountMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPXMLPWriterPipeline_GetPaddingAmount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPaddingAmount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPXMLPWriterPipeline *op = static_cast<vtkCPXMLPWriterPipeline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPaddingAmount() :
      op->vtkCPXMLPWriterPipeline::GetPaddingAmount());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPXMLPWriterPipeline_SetPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPXMLPWriterPipeline *op = static_cast<vtkCPXMLPWriterPipeline *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPath(temp0);
    }
    else
    {
      op->vtkCPXMLPWriterPipeline::SetPath(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCPXMLPWriterPipeline_GetPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPXMLPWriterPipeline *op = static_cast<vtkCPXMLPWriterPipeline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetPath() :
      op->vtkCPXMLPWriterPipeline::GetPath());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCPXMLPWriterPipeline_Methods[] = {
  {"IsTypeOf", PyvtkCPXMLPWriterPipeline_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCPXMLPWriterPipeline_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCPXMLPWriterPipeline_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCPXMLPWriterPipeline\nC++: static vtkCPXMLPWriterPipeline *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCPXMLPWriterPipeline_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCPXMLPWriterPipeline\nC++: vtkCPXMLPWriterPipeline *NewInstance()\n\n"},
  {"RequestDataDescription", PyvtkCPXMLPWriterPipeline_RequestDataDescription, METH_VARARGS,
   "V.RequestDataDescription(vtkCPDataDescription) -> int\nC++: int RequestDataDescription(\n    vtkCPDataDescription *dataDescription) override;\n\nConfiguration Step: The coprocessor first determines if any\ncoprocessing needs to be done at this TimeStep/Time combination\nreturning 1 if it does and 0 otherwise.  If coprocessing does\nneed to be performed this time step it fills in the FieldNames\narray that the coprocessor requires in order to fulfill all the\ncoprocessing requests for this TimeStep/Time combination.\n"},
  {"CoProcess", PyvtkCPXMLPWriterPipeline_CoProcess, METH_VARARGS,
   "V.CoProcess(vtkCPDataDescription) -> int\nC++: int CoProcess(vtkCPDataDescription *dataDescription)\n    override;\n\nExecute the pipeline. Returns 1 for success and 0 for failure.\n"},
  {"SetOutputFrequency", PyvtkCPXMLPWriterPipeline_SetOutputFrequency, METH_VARARGS,
   "V.SetOutputFrequency(int)\nC++: virtual void SetOutputFrequency(int _arg)\n\nSet the output frequency for this pipeline. The default is 1.\n"},
  {"GetOutputFrequencyMinValue", PyvtkCPXMLPWriterPipeline_GetOutputFrequencyMinValue, METH_VARARGS,
   "V.GetOutputFrequencyMinValue() -> int\nC++: virtual int GetOutputFrequencyMinValue()\n\n"},
  {"GetOutputFrequencyMaxValue", PyvtkCPXMLPWriterPipeline_GetOutputFrequencyMaxValue, METH_VARARGS,
   "V.GetOutputFrequencyMaxValue() -> int\nC++: virtual int GetOutputFrequencyMaxValue()\n\n"},
  {"GetOutputFrequency", PyvtkCPXMLPWriterPipeline_GetOutputFrequency, METH_VARARGS,
   "V.GetOutputFrequency() -> int\nC++: virtual int GetOutputFrequency()\n\n"},
  {"SetPaddingAmount", PyvtkCPXMLPWriterPipeline_SetPaddingAmount, METH_VARARGS,
   "V.SetPaddingAmount(int)\nC++: virtual void SetPaddingAmount(int _arg)\n\nSet the padding amount for the time index portion of the\ngenerated files. The default is 0.\n"},
  {"GetPaddingAmountMinValue", PyvtkCPXMLPWriterPipeline_GetPaddingAmountMinValue, METH_VARARGS,
   "V.GetPaddingAmountMinValue() -> int\nC++: virtual int GetPaddingAmountMinValue()\n\n"},
  {"GetPaddingAmountMaxValue", PyvtkCPXMLPWriterPipeline_GetPaddingAmountMaxValue, METH_VARARGS,
   "V.GetPaddingAmountMaxValue() -> int\nC++: virtual int GetPaddingAmountMaxValue()\n\n"},
  {"GetPaddingAmount", PyvtkCPXMLPWriterPipeline_GetPaddingAmount, METH_VARARGS,
   "V.GetPaddingAmount() -> int\nC++: virtual int GetPaddingAmount()\n\n"},
  {"SetPath", PyvtkCPXMLPWriterPipeline_SetPath, METH_VARARGS,
   "V.SetPath(string)\nC++: virtual void SetPath(std::string _arg)\n\nSet the path to the generated files.\n"},
  {"GetPath", PyvtkCPXMLPWriterPipeline_GetPath, METH_VARARGS,
   "V.GetPath() -> string\nC++: virtual std::string GetPath()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCPXMLPWriterPipeline_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVCatalystPython.vtkCPXMLPWriterPipeline", // tp_name
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
  PyvtkCPXMLPWriterPipeline_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCPXMLPWriterPipeline_StaticNew()
{
  return vtkCPXMLPWriterPipeline::New();
}

PyObject *PyvtkCPXMLPWriterPipeline_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCPXMLPWriterPipeline_Type, PyvtkCPXMLPWriterPipeline_Methods,
    "vtkCPXMLPWriterPipeline",
 &PyvtkCPXMLPWriterPipeline_StaticNew);

  PyTypeObject *pytype = &PyvtkCPXMLPWriterPipeline_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkCPPipeline_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCPXMLPWriterPipeline(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCPXMLPWriterPipeline_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCPXMLPWriterPipeline", o) != 0)
  {
    Py_DECREF(o);
  }

}

