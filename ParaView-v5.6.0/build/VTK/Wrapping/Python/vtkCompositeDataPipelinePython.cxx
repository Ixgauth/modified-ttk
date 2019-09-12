// python wrapper for vtkCompositeDataPipeline
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
#include "vtkInformationVector.h"
#include "vtkCompositeDataPipeline.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCompositeDataPipeline(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCompositeDataPipeline_ClassNew(); }

#ifndef DECLARED_PyvtkStreamingDemandDrivenPipeline_ClassNew
extern "C" { PyObject *PyvtkStreamingDemandDrivenPipeline_ClassNew(); }
#define DECLARED_PyvtkStreamingDemandDrivenPipeline_ClassNew
#endif

static const char *PyvtkCompositeDataPipeline_Doc =
  "vtkCompositeDataPipeline - Executive supporting composite datasets.\n\n"
  "Superclass: vtkStreamingDemandDrivenPipeline\n\n"
  "vtkCompositeDataPipeline is an executive that supports the processing\n"
  "of composite dataset. It supports algorithms that are aware of\n"
  "composite dataset as well as those that are not. Type checking is\n"
  "performed at run time. Algorithms that are not composite\n"
  "dataset-aware have to support all dataset types contained in the\n"
  "composite dataset. The pipeline execution can be summarized as\n"
  "follows:\n\n"
  "* REQUEST_INFORMATION: The producers have to provide information\n"
  "  about the contents of the composite dataset in this pass. Sources\n"
  "  that can produce more than one piece (note that a piece is\n"
  "  different than a block; each piece consistes of 0 or more blocks)\n"
  "  should set CAN_HANDLE_PIECE_REQUEST.\n\n"
  "* REQUEST_UPDATE_EXTENT: This pass is identical to the one\n"
  "  implemented in vtkStreamingDemandDrivenPipeline\n\n"
  "* REQUEST_DATA: This is where the algorithms execute. If the\n"
  "  vtkCompositeDataPipeline is assigned to a simple filter, it will\n"
  "  invoke the  vtkStreamingDemandDrivenPipeline passes in a loop,\n"
  "  passing a different block each time and will collect the results in\n"
  "a composite dataset.\n"
  "@sa\n"
  " vtkCompositeDataSet\n\n";


static PyObject *
PyvtkCompositeDataPipeline_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCompositeDataPipeline::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataPipeline_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataPipeline *op = static_cast<vtkCompositeDataPipeline *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCompositeDataPipeline::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataPipeline_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCompositeDataPipeline *tempr = vtkCompositeDataPipeline::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataPipeline_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataPipeline *op = static_cast<vtkCompositeDataPipeline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCompositeDataPipeline *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCompositeDataPipeline::NewInstance());

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
PyvtkCompositeDataPipeline_GetCompositeOutputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeOutputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataPipeline *op = static_cast<vtkCompositeDataPipeline *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetCompositeOutputData(temp0) :
      op->vtkCompositeDataPipeline::GetCompositeOutputData(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataPipeline_LOAD_REQUESTED_BLOCKS(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "LOAD_REQUESTED_BLOCKS");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkCompositeDataPipeline::LOAD_REQUESTED_BLOCKS();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataPipeline_COMPOSITE_DATA_META_DATA(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "COMPOSITE_DATA_META_DATA");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationObjectBaseKey *tempr = vtkCompositeDataPipeline::COMPOSITE_DATA_META_DATA();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataPipeline_UPDATE_COMPOSITE_INDICES(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "UPDATE_COMPOSITE_INDICES");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerVectorKey *tempr = vtkCompositeDataPipeline::UPDATE_COMPOSITE_INDICES();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataPipeline_BLOCK_AMOUNT_OF_DETAIL(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "BLOCK_AMOUNT_OF_DETAIL");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationDoubleKey *tempr = vtkCompositeDataPipeline::BLOCK_AMOUNT_OF_DETAIL();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCompositeDataPipeline_Methods[] = {
  {"IsTypeOf", PyvtkCompositeDataPipeline_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCompositeDataPipeline_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCompositeDataPipeline_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCompositeDataPipeline\nC++: static vtkCompositeDataPipeline *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCompositeDataPipeline_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCompositeDataPipeline\nC++: vtkCompositeDataPipeline *NewInstance()\n\n"},
  {"GetCompositeOutputData", PyvtkCompositeDataPipeline_GetCompositeOutputData, METH_VARARGS,
   "V.GetCompositeOutputData(int) -> vtkDataObject\nC++: vtkDataObject *GetCompositeOutputData(int port)\n\nReturns the data object stored with the DATA_OBJECT() in the\noutput port\n"},
  {"LOAD_REQUESTED_BLOCKS", PyvtkCompositeDataPipeline_LOAD_REQUESTED_BLOCKS, METH_VARARGS,
   "V.LOAD_REQUESTED_BLOCKS() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *LOAD_REQUESTED_BLOCKS()\n\nAn integer key that indicates to the source to load all requested\nblocks specified in UPDATE_COMPOSITE_INDICES.\n"},
  {"COMPOSITE_DATA_META_DATA", PyvtkCompositeDataPipeline_COMPOSITE_DATA_META_DATA, METH_VARARGS,
   "V.COMPOSITE_DATA_META_DATA() -> vtkInformationObjectBaseKey\nC++: static vtkInformationObjectBaseKey *COMPOSITE_DATA_META_DATA(\n    )\n\nCOMPOSITE_DATA_META_DATA is a key placed in the output-port\ninformation by readers/sources producing composite datasets. This\nmeta-data provides information about the structure of the\ncomposite dataset and things like data-bounds etc.\n*** THIS IS AN EXPERIMENTAL FEATURE. IT MAY CHANGE WITHOUT NOTICE\n***\n"},
  {"UPDATE_COMPOSITE_INDICES", PyvtkCompositeDataPipeline_UPDATE_COMPOSITE_INDICES, METH_VARARGS,
   "V.UPDATE_COMPOSITE_INDICES() -> vtkInformationIntegerVectorKey\nC++: static vtkInformationIntegerVectorKey *UPDATE_COMPOSITE_INDICES(\n    )\n\nUPDATE_COMPOSITE_INDICES is a key placed in the request to\nrequest a set of composite indices from a reader/source producing\ncomposite dataset. Typically, the reader publishes its structure\nusing COMPOSITE_DATA_META_DATA() and then the sink requests\nblocks of interest using UPDATE_COMPOSITE_INDICES(). Note that\nUPDATE_COMPOSITE_INDICES has to be sorted vector with increasing\nindices.\n*** THIS IS AN EXPERIMENTAL FEATURE. IT MAY CHANGE WITHOUT NOTICE\n***\n"},
  {"BLOCK_AMOUNT_OF_DETAIL", PyvtkCompositeDataPipeline_BLOCK_AMOUNT_OF_DETAIL, METH_VARARGS,
   "V.BLOCK_AMOUNT_OF_DETAIL() -> vtkInformationDoubleKey\nC++: static vtkInformationDoubleKey *BLOCK_AMOUNT_OF_DETAIL()\n\nBLOCK_AMOUNT_OF_DETAIL is a key placed in the information about a\nmulti-block dataset that indicates how complex the block is.  It\nis intended to work with multi-resolution streaming code.  For\nexample in a multi-resolution dataset of points, this key might\nstore the number of points.\n*** THIS IS AN EXPERIMENTAL FEATURE. IT MAY CHANGE WITHOUT NOTICE\n***\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCompositeDataPipeline_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonExecutionModelPython.vtkCompositeDataPipeline", // tp_name
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
  PyvtkCompositeDataPipeline_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCompositeDataPipeline_StaticNew()
{
  return vtkCompositeDataPipeline::New();
}

PyObject *PyvtkCompositeDataPipeline_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCompositeDataPipeline_Type, PyvtkCompositeDataPipeline_Methods,
    "vtkCompositeDataPipeline",
 &PyvtkCompositeDataPipeline_StaticNew);

  PyTypeObject *pytype = &PyvtkCompositeDataPipeline_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkStreamingDemandDrivenPipeline_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCompositeDataPipeline(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCompositeDataPipeline_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCompositeDataPipeline", o) != 0)
  {
    Py_DECREF(o);
  }

}

