// python wrapper for vtkCPProcessor
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
#include "vtkCPProcessor.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCPProcessor(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCPProcessor_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkCPProcessor_Doc =
  "vtkCPProcessor - @ingroup CoProcessing\n\n"
  "Superclass: vtkObject\n\n"
  "There are 3 distinct phases for the operation of a co-processor.\n\n"
  "1) Initialization -- set up for the run.\n\n"
  "2) Processing -- the run.\n\n"
  "3) Finalization -- clean up before exit.\n\n"
  "The processing phase occurs repeatedly and is composed of two\n"
  "distinct steps, namely 1) Configuration (see\n"
  "vtkCPProcessor::ProcessDataDescription) and\n"
  "2) Processing (see vtkCPProcessor::ProcessData).\n\n"
  "Configuration step:\n\n"
  "In the first step the Co-Processor implementation is called with a\n"
  "vtkDataDescription describing the data that the simulation can\n"
  "provide This gives the Co-Processor implementation a chance to\n"
  "identify what (if any) of the available data it will process during\n"
  "this pass. By default all of the available data is selected, so that\n"
  "if the Co-Processor implementation does nothing it will receive all\n"
  "data during the Processing step. The Co-Processor implementation\n"
  "should extract what ever meta-data it will need (or alternatively can\n"
  "save a reference to the DataDescription), during the Processing step.\n\n"
  "Processing step:\n\n"
  "In the second step the Co-Processor implementation is called with the\n"
  "actual data that it has been asked to provide, if any. If no data was\n"
  "selected during the Configuration Step than the priovided\n"
  "vtkDataObject may be NULL.\n\n";


static PyObject *
PyvtkCPProcessor_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCPProcessor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPProcessor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPProcessor *op = static_cast<vtkCPProcessor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCPProcessor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPProcessor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCPProcessor *tempr = vtkCPProcessor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPProcessor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPProcessor *op = static_cast<vtkCPProcessor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCPProcessor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCPProcessor::NewInstance());

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
PyvtkCPProcessor_AddPipeline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPipeline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPProcessor *op = static_cast<vtkCPProcessor *>(vp);

  vtkCPPipeline *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCPPipeline"))
  {
    int tempr = (ap.IsBound() ?
      op->AddPipeline(temp0) :
      op->vtkCPProcessor::AddPipeline(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPProcessor_GetNumberOfPipelines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPipelines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPProcessor *op = static_cast<vtkCPProcessor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPipelines() :
      op->vtkCPProcessor::GetNumberOfPipelines());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPProcessor_GetPipeline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPipeline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPProcessor *op = static_cast<vtkCPProcessor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCPPipeline *tempr = (ap.IsBound() ?
      op->GetPipeline(temp0) :
      op->vtkCPProcessor::GetPipeline(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPProcessor_RemovePipeline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePipeline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPProcessor *op = static_cast<vtkCPProcessor *>(vp);

  vtkCPPipeline *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCPPipeline"))
  {
    if (ap.IsBound())
    {
      op->RemovePipeline(temp0);
    }
    else
    {
      op->vtkCPProcessor::RemovePipeline(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCPProcessor_RemoveAllPipelines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllPipelines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPProcessor *op = static_cast<vtkCPProcessor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllPipelines();
    }
    else
    {
      op->vtkCPProcessor::RemoveAllPipelines();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCPProcessor_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPProcessor *op = static_cast<vtkCPProcessor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    int tempr = (ap.IsBound() ?
      op->Initialize(temp0) :
      op->vtkCPProcessor::Initialize(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPProcessor_GetInputArrayName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetInputArrayName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkCPProcessor::GetInputArrayName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPProcessor_RequestDataDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequestDataDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPProcessor *op = static_cast<vtkCPProcessor *>(vp);

  vtkCPDataDescription *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCPDataDescription"))
  {
    int tempr = (ap.IsBound() ?
      op->RequestDataDescription(temp0) :
      op->vtkCPProcessor::RequestDataDescription(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPProcessor_CoProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CoProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPProcessor *op = static_cast<vtkCPProcessor *>(vp);

  vtkCPDataDescription *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCPDataDescription"))
  {
    int tempr = (ap.IsBound() ?
      op->CoProcess(temp0) :
      op->vtkCPProcessor::CoProcess(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPProcessor_Finalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPProcessor *op = static_cast<vtkCPProcessor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->Finalize() :
      op->vtkCPProcessor::Finalize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPProcessor_GetWorkingDirectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWorkingDirectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPProcessor *op = static_cast<vtkCPProcessor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetWorkingDirectory() :
      op->vtkCPProcessor::GetWorkingDirectory());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCPProcessor_Methods[] = {
  {"IsTypeOf", PyvtkCPProcessor_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCPProcessor_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCPProcessor_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCPProcessor\nC++: static vtkCPProcessor *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCPProcessor_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCPProcessor\nC++: vtkCPProcessor *NewInstance()\n\n"},
  {"AddPipeline", PyvtkCPProcessor_AddPipeline, METH_VARARGS,
   "V.AddPipeline(vtkCPPipeline) -> int\nC++: virtual int AddPipeline(vtkCPPipeline *pipeline)\n\nAdd in a pipeline that is externally configured. Returns 1 if\nsuccessful and 0 otherwise.\n"},
  {"GetNumberOfPipelines", PyvtkCPProcessor_GetNumberOfPipelines, METH_VARARGS,
   "V.GetNumberOfPipelines() -> int\nC++: virtual int GetNumberOfPipelines()\n\nGet the number of pipelines.\n"},
  {"GetPipeline", PyvtkCPProcessor_GetPipeline, METH_VARARGS,
   "V.GetPipeline(int) -> vtkCPPipeline\nC++: virtual vtkCPPipeline *GetPipeline(int which)\n\nReturn a specific pipeline.\n"},
  {"RemovePipeline", PyvtkCPProcessor_RemovePipeline, METH_VARARGS,
   "V.RemovePipeline(vtkCPPipeline)\nC++: virtual void RemovePipeline(vtkCPPipeline *pipeline)\n\nRemove pipelines.\n"},
  {"RemoveAllPipelines", PyvtkCPProcessor_RemoveAllPipelines, METH_VARARGS,
   "V.RemoveAllPipelines()\nC++: virtual void RemoveAllPipelines()\n\n"},
  {"Initialize", PyvtkCPProcessor_Initialize, METH_VARARGS,
   "V.Initialize(string) -> int\nC++: virtual int Initialize(const char *workingDirectory=nullptr)\n\nInitialize the co-processor. Returns 1 if successful and 0\notherwise. If Catalyst is built with MPI then Initialize() can\nalso be called with a specific MPI communicator if MPI_COMM_WORLD\nisn't the proper one. Catalyst is initialized to use\nMPI_COMM_WORLD by default. Both methods have an optional\nworkingDirectory argument which will set *WorkingDirectory* so\nthat files will be put relative to this directory.\n"},
  {"GetInputArrayName", PyvtkCPProcessor_GetInputArrayName, METH_VARARGS,
   "V.GetInputArrayName() -> string\nC++: static const char *GetInputArrayName()\n\nThe Catalyst input field data string array name. This array will\nbe generated automatically by Catalyst and have a single entry\nthat has the input name for identifying the associated\nvtkCPInputDataDescription. This will allow automatically mapping\n"},
  {"RequestDataDescription", PyvtkCPProcessor_RequestDataDescription, METH_VARARGS,
   "V.RequestDataDescription(vtkCPDataDescription) -> int\nC++: virtual int RequestDataDescription(\n    vtkCPDataDescription *dataDescription)\n\nConfiguration Step: The coprocessor first determines if any\ncoprocessing needs to be done at this TimeStep/Time combination\nreturning 1 if it does and 0 otherwise.  If coprocessing does\nneed to be performed this time step it fills in the FieldNames\narray that the coprocessor requires in order to fulfill all the\ncoprocessing requests for this TimeStep/Time combination.\n"},
  {"CoProcess", PyvtkCPProcessor_CoProcess, METH_VARARGS,
   "V.CoProcess(vtkCPDataDescription) -> int\nC++: virtual int CoProcess(vtkCPDataDescription *dataDescription)\n\nProcessing Step: Provides the grid and the field data for the\nco-procesor to process. Return value is 1 for success and 0 for\nfailure.\n"},
  {"Finalize", PyvtkCPProcessor_Finalize, METH_VARARGS,
   "V.Finalize() -> int\nC++: virtual int Finalize()\n\nCalled after all co-processing is complete giving the\nCo-Processor implementation an opportunity to clean up, before it\nis destroyed.\n"},
  {"GetWorkingDirectory", PyvtkCPProcessor_GetWorkingDirectory, METH_VARARGS,
   "V.GetWorkingDirectory() -> string\nC++: virtual char *GetWorkingDirectory()\n\nGet the current working directory for outputting Catalyst files.\nIf not set then Catalyst output files will be relative to the\ncurrent working directory. This will not affect where Catalyst\nlooks for Python scripts. *WorkingDirectory* gets set through the\n*Initialize()* methods.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCPProcessor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVCatalystPython.vtkCPProcessor", // tp_name
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
  PyvtkCPProcessor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCPProcessor_StaticNew()
{
  return vtkCPProcessor::New();
}

PyObject *PyvtkCPProcessor_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCPProcessor_Type, PyvtkCPProcessor_Methods,
    "vtkCPProcessor",
 &PyvtkCPProcessor_StaticNew);

  PyTypeObject *pytype = &PyvtkCPProcessor_Type;

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

void PyVTKAddFile_vtkCPProcessor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCPProcessor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCPProcessor", o) != 0)
  {
    Py_DECREF(o);
  }

}

