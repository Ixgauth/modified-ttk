// python wrapper for vtkDemandDrivenPipeline
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
#include "vtkDemandDrivenPipeline.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDemandDrivenPipeline(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDemandDrivenPipeline_ClassNew(); }

#ifndef DECLARED_PyvtkExecutive_ClassNew
extern "C" { PyObject *PyvtkExecutive_ClassNew(); }
#define DECLARED_PyvtkExecutive_ClassNew
#endif

static const char *PyvtkDemandDrivenPipeline_Doc =
  "vtkDemandDrivenPipeline - Executive supporting on-demand execution.\n\n"
  "Superclass: vtkExecutive\n\n"
  "vtkDemandDrivenPipeline is an executive that will execute an\n"
  "algorithm only when its outputs are out-of-date with respect to its\n"
  "inputs.\n\n";


static PyObject *
PyvtkDemandDrivenPipeline_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDemandDrivenPipeline::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDemandDrivenPipeline_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDemandDrivenPipeline *op = static_cast<vtkDemandDrivenPipeline *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDemandDrivenPipeline::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDemandDrivenPipeline_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDemandDrivenPipeline *tempr = vtkDemandDrivenPipeline::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDemandDrivenPipeline_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDemandDrivenPipeline *op = static_cast<vtkDemandDrivenPipeline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDemandDrivenPipeline *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDemandDrivenPipeline::NewInstance());

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
PyvtkDemandDrivenPipeline_Update_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDemandDrivenPipeline *op = static_cast<vtkDemandDrivenPipeline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->Update() :
      op->vtkDemandDrivenPipeline::Update());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDemandDrivenPipeline_Update_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDemandDrivenPipeline *op = static_cast<vtkDemandDrivenPipeline *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->Update(temp0) :
      op->vtkDemandDrivenPipeline::Update(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDemandDrivenPipeline_Update(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkDemandDrivenPipeline_Update_s1(self, args);
    case 1:
      return PyvtkDemandDrivenPipeline_Update_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Update");
  return nullptr;
}



static PyObject *
PyvtkDemandDrivenPipeline_GetPipelineMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPipelineMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDemandDrivenPipeline *op = static_cast<vtkDemandDrivenPipeline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetPipelineMTime() :
      op->vtkDemandDrivenPipeline::GetPipelineMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDemandDrivenPipeline_SetReleaseDataFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReleaseDataFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDemandDrivenPipeline *op = static_cast<vtkDemandDrivenPipeline *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->SetReleaseDataFlag(temp0, temp1) :
      op->vtkDemandDrivenPipeline::SetReleaseDataFlag(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDemandDrivenPipeline_GetReleaseDataFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReleaseDataFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDemandDrivenPipeline *op = static_cast<vtkDemandDrivenPipeline *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReleaseDataFlag(temp0) :
      op->vtkDemandDrivenPipeline::GetReleaseDataFlag(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDemandDrivenPipeline_UpdatePipelineMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePipelineMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDemandDrivenPipeline *op = static_cast<vtkDemandDrivenPipeline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->UpdatePipelineMTime() :
      op->vtkDemandDrivenPipeline::UpdatePipelineMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDemandDrivenPipeline_UpdateDataObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDemandDrivenPipeline *op = static_cast<vtkDemandDrivenPipeline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->UpdateDataObject() :
      op->vtkDemandDrivenPipeline::UpdateDataObject());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDemandDrivenPipeline_UpdateInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDemandDrivenPipeline *op = static_cast<vtkDemandDrivenPipeline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->UpdateInformation() :
      op->vtkDemandDrivenPipeline::UpdateInformation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDemandDrivenPipeline_UpdateData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDemandDrivenPipeline *op = static_cast<vtkDemandDrivenPipeline *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->UpdateData(temp0) :
      op->vtkDemandDrivenPipeline::UpdateData(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDemandDrivenPipeline_REQUEST_DATA_OBJECT(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "REQUEST_DATA_OBJECT");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationRequestKey *tempr = vtkDemandDrivenPipeline::REQUEST_DATA_OBJECT();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDemandDrivenPipeline_REQUEST_INFORMATION(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "REQUEST_INFORMATION");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationRequestKey *tempr = vtkDemandDrivenPipeline::REQUEST_INFORMATION();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDemandDrivenPipeline_REQUEST_DATA(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "REQUEST_DATA");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationRequestKey *tempr = vtkDemandDrivenPipeline::REQUEST_DATA();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDemandDrivenPipeline_REQUEST_DATA_NOT_GENERATED(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "REQUEST_DATA_NOT_GENERATED");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationRequestKey *tempr = vtkDemandDrivenPipeline::REQUEST_DATA_NOT_GENERATED();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDemandDrivenPipeline_RELEASE_DATA(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "RELEASE_DATA");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkDemandDrivenPipeline::RELEASE_DATA();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDemandDrivenPipeline_DATA_NOT_GENERATED(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DATA_NOT_GENERATED");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkDemandDrivenPipeline::DATA_NOT_GENERATED();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDemandDrivenPipeline_NewDataObject(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "NewDataObject");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataObject *tempr = vtkDemandDrivenPipeline::NewDataObject(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDemandDrivenPipeline_Methods[] = {
  {"IsTypeOf", PyvtkDemandDrivenPipeline_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDemandDrivenPipeline_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDemandDrivenPipeline_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDemandDrivenPipeline\nC++: static vtkDemandDrivenPipeline *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDemandDrivenPipeline_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDemandDrivenPipeline\nC++: vtkDemandDrivenPipeline *NewInstance()\n\n"},
  {"Update", PyvtkDemandDrivenPipeline_Update, METH_VARARGS,
   "V.Update() -> int\nC++: int Update() override;\nV.Update(int) -> int\nC++: int Update(int port) override;\n\nBring the algorithm's outputs up-to-date.  Returns 1 for success\nand 0 for failure.\n"},
  {"GetPipelineMTime", PyvtkDemandDrivenPipeline_GetPipelineMTime, METH_VARARGS,
   "V.GetPipelineMTime() -> int\nC++: virtual vtkMTimeType GetPipelineMTime()\n\nGet the PipelineMTime for this exective.\n"},
  {"SetReleaseDataFlag", PyvtkDemandDrivenPipeline_SetReleaseDataFlag, METH_VARARGS,
   "V.SetReleaseDataFlag(int, int) -> int\nC++: virtual int SetReleaseDataFlag(int port, int n)\n\nSet whether the given output port releases data when it is\nconsumed.  Returns 1 if the value changes and 0 otherwise.\n"},
  {"GetReleaseDataFlag", PyvtkDemandDrivenPipeline_GetReleaseDataFlag, METH_VARARGS,
   "V.GetReleaseDataFlag(int) -> int\nC++: virtual int GetReleaseDataFlag(int port)\n\nGet whether the given output port releases data when it is\nconsumed.\n"},
  {"UpdatePipelineMTime", PyvtkDemandDrivenPipeline_UpdatePipelineMTime, METH_VARARGS,
   "V.UpdatePipelineMTime() -> int\nC++: virtual int UpdatePipelineMTime()\n\nBring the PipelineMTime up to date.\n"},
  {"UpdateDataObject", PyvtkDemandDrivenPipeline_UpdateDataObject, METH_VARARGS,
   "V.UpdateDataObject() -> int\nC++: int UpdateDataObject() override;\n\nBring the output data object's existence up to date.  This does\nnot actually produce data, but does create the data object that\nwill store data produced during the UpdateData step.\n"},
  {"UpdateInformation", PyvtkDemandDrivenPipeline_UpdateInformation, METH_VARARGS,
   "V.UpdateInformation() -> int\nC++: int UpdateInformation() override;\n\nBring the output information up to date.\n"},
  {"UpdateData", PyvtkDemandDrivenPipeline_UpdateData, METH_VARARGS,
   "V.UpdateData(int) -> int\nC++: virtual int UpdateData(int outputPort)\n\nBring the output data up to date.  This should be called only\nwhen information is up to date.  Use the Update method if it is\nnot known that the information is up to date.\n"},
  {"REQUEST_DATA_OBJECT", PyvtkDemandDrivenPipeline_REQUEST_DATA_OBJECT, METH_VARARGS,
   "V.REQUEST_DATA_OBJECT() -> vtkInformationRequestKey\nC++: static vtkInformationRequestKey *REQUEST_DATA_OBJECT()\n\nKey defining a request to make sure the output data objects\nexist.@ingroup InformationKeys\n"},
  {"REQUEST_INFORMATION", PyvtkDemandDrivenPipeline_REQUEST_INFORMATION, METH_VARARGS,
   "V.REQUEST_INFORMATION() -> vtkInformationRequestKey\nC++: static vtkInformationRequestKey *REQUEST_INFORMATION()\n\nKey defining a request to make sure the output information is up\nto date.@ingroup InformationKeys\n"},
  {"REQUEST_DATA", PyvtkDemandDrivenPipeline_REQUEST_DATA, METH_VARARGS,
   "V.REQUEST_DATA() -> vtkInformationRequestKey\nC++: static vtkInformationRequestKey *REQUEST_DATA()\n\nKey defining a request to make sure the output data are up to\ndate.@ingroup InformationKeys\n"},
  {"REQUEST_DATA_NOT_GENERATED", PyvtkDemandDrivenPipeline_REQUEST_DATA_NOT_GENERATED, METH_VARARGS,
   "V.REQUEST_DATA_NOT_GENERATED() -> vtkInformationRequestKey\nC++: static vtkInformationRequestKey *REQUEST_DATA_NOT_GENERATED()\n\nKey defining a request to mark outputs that will NOT be generated\nduring a REQUEST_DATA.@ingroup InformationKeys\n"},
  {"RELEASE_DATA", PyvtkDemandDrivenPipeline_RELEASE_DATA, METH_VARARGS,
   "V.RELEASE_DATA() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *RELEASE_DATA()\n\nKey to specify in pipeline information the request that data be\nreleased after it is used.@ingroup InformationKeys\n"},
  {"DATA_NOT_GENERATED", PyvtkDemandDrivenPipeline_DATA_NOT_GENERATED, METH_VARARGS,
   "V.DATA_NOT_GENERATED() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *DATA_NOT_GENERATED()\n\nKey to store a mark for an output that will not be generated.\nAlgorithms use this to tell the executive that they will not\ngenerate certain outputs for a REQUEST_DATA.@ingroup\nInformationKeys\n"},
  {"NewDataObject", PyvtkDemandDrivenPipeline_NewDataObject, METH_VARARGS,
   "V.NewDataObject(string) -> vtkDataObject\nC++: static vtkDataObject *NewDataObject(const char *type)\n\nCreate (New) and return a data object of the given type. This is\nhere for backwards compatibility. Use\nvtkDataObjectTypes::NewDataObject() instead.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDemandDrivenPipeline_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonExecutionModelPython.vtkDemandDrivenPipeline", // tp_name
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
  PyvtkDemandDrivenPipeline_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDemandDrivenPipeline_StaticNew()
{
  return vtkDemandDrivenPipeline::New();
}

PyObject *PyvtkDemandDrivenPipeline_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDemandDrivenPipeline_Type, PyvtkDemandDrivenPipeline_Methods,
    "vtkDemandDrivenPipeline",
 &PyvtkDemandDrivenPipeline_StaticNew);

  PyTypeObject *pytype = &PyvtkDemandDrivenPipeline_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkExecutive_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDemandDrivenPipeline(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDemandDrivenPipeline_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDemandDrivenPipeline", o) != 0)
  {
    Py_DECREF(o);
  }

}

