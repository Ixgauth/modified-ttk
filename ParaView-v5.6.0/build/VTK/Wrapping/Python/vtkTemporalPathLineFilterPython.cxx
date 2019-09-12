// python wrapper for vtkTemporalPathLineFilter
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
#include "vtkTemporalPathLineFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTemporalPathLineFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTemporalPathLineFilter_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkTemporalPathLineFilter_Doc =
  "vtkTemporalPathLineFilter - Generate a Polydata Pointset from any\nDataset.\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkTemporalPathLineFilter takes any dataset as input, it extracts the\n"
  "point locations of all cells over time to build up a polyline trail.\n"
  "The point number (index) is used as the 'key' if the points are\n"
  "randomly changing their respective order in the points list, then you\n"
  "should specify a scalar that represents the unique ID. This is\n"
  "intended to handle the output of a filter such as the\n"
  "TemporalStreamTracer.\n\n"
  "@sa\n"
  "vtkTemporalStreamTracer\n\n"
  "@par Thanks: John Bidiscombe of CSCS - Swiss National Supercomputing\n"
  "Centre for creating and contributing this class.\n\n";


static PyObject *
PyvtkTemporalPathLineFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTemporalPathLineFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalPathLineFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalPathLineFilter *op = static_cast<vtkTemporalPathLineFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTemporalPathLineFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalPathLineFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTemporalPathLineFilter *tempr = vtkTemporalPathLineFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalPathLineFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalPathLineFilter *op = static_cast<vtkTemporalPathLineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTemporalPathLineFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTemporalPathLineFilter::NewInstance());

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
PyvtkTemporalPathLineFilter_SetMaskPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalPathLineFilter *op = static_cast<vtkTemporalPathLineFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaskPoints(temp0);
    }
    else
    {
      op->vtkTemporalPathLineFilter::SetMaskPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalPathLineFilter_GetMaskPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalPathLineFilter *op = static_cast<vtkTemporalPathLineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaskPoints() :
      op->vtkTemporalPathLineFilter::GetMaskPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalPathLineFilter_SetMaxTrackLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxTrackLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalPathLineFilter *op = static_cast<vtkTemporalPathLineFilter *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxTrackLength(temp0);
    }
    else
    {
      op->vtkTemporalPathLineFilter::SetMaxTrackLength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalPathLineFilter_GetMaxTrackLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxTrackLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalPathLineFilter *op = static_cast<vtkTemporalPathLineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetMaxTrackLength() :
      op->vtkTemporalPathLineFilter::GetMaxTrackLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalPathLineFilter_SetIdChannelArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIdChannelArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalPathLineFilter *op = static_cast<vtkTemporalPathLineFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIdChannelArray(temp0);
    }
    else
    {
      op->vtkTemporalPathLineFilter::SetIdChannelArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalPathLineFilter_GetIdChannelArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIdChannelArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalPathLineFilter *op = static_cast<vtkTemporalPathLineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetIdChannelArray() :
      op->vtkTemporalPathLineFilter::GetIdChannelArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalPathLineFilter_SetMaxStepDistance_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxStepDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalPathLineFilter *op = static_cast<vtkTemporalPathLineFilter *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetMaxStepDistance(temp0, temp1, temp2);
    }
    else
    {
      op->vtkTemporalPathLineFilter::SetMaxStepDistance(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTemporalPathLineFilter_SetMaxStepDistance_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxStepDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalPathLineFilter *op = static_cast<vtkTemporalPathLineFilter *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetMaxStepDistance(temp0);
    }
    else
    {
      op->vtkTemporalPathLineFilter::SetMaxStepDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTemporalPathLineFilter_SetMaxStepDistance(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTemporalPathLineFilter_SetMaxStepDistance_s1(self, args);
    case 1:
      return PyvtkTemporalPathLineFilter_SetMaxStepDistance_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMaxStepDistance");
  return nullptr;
}



static PyObject *
PyvtkTemporalPathLineFilter_GetMaxStepDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxStepDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalPathLineFilter *op = static_cast<vtkTemporalPathLineFilter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetMaxStepDistance() :
      op->vtkTemporalPathLineFilter::GetMaxStepDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalPathLineFilter_SetKeepDeadTrails(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeepDeadTrails");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalPathLineFilter *op = static_cast<vtkTemporalPathLineFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetKeepDeadTrails(temp0);
    }
    else
    {
      op->vtkTemporalPathLineFilter::SetKeepDeadTrails(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalPathLineFilter_GetKeepDeadTrails(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeepDeadTrails");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalPathLineFilter *op = static_cast<vtkTemporalPathLineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetKeepDeadTrails() :
      op->vtkTemporalPathLineFilter::GetKeepDeadTrails());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalPathLineFilter_Flush(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Flush");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalPathLineFilter *op = static_cast<vtkTemporalPathLineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Flush();
    }
    else
    {
      op->vtkTemporalPathLineFilter::Flush();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalPathLineFilter_SetSelectionConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalPathLineFilter *op = static_cast<vtkTemporalPathLineFilter *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetSelectionConnection(temp0);
    }
    else
    {
      op->vtkTemporalPathLineFilter::SetSelectionConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalPathLineFilter_SetSelectionData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalPathLineFilter *op = static_cast<vtkTemporalPathLineFilter *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
  {
    if (ap.IsBound())
    {
      op->SetSelectionData(temp0);
    }
    else
    {
      op->vtkTemporalPathLineFilter::SetSelectionData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTemporalPathLineFilter_Methods[] = {
  {"IsTypeOf", PyvtkTemporalPathLineFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard Type-Macro\n"},
  {"IsA", PyvtkTemporalPathLineFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard Type-Macro\n"},
  {"SafeDownCast", PyvtkTemporalPathLineFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTemporalPathLineFilter\nC++: static vtkTemporalPathLineFilter *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard Type-Macro\n"},
  {"NewInstance", PyvtkTemporalPathLineFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTemporalPathLineFilter\nC++: vtkTemporalPathLineFilter *NewInstance()\n\nStandard Type-Macro\n"},
  {"SetMaskPoints", PyvtkTemporalPathLineFilter_SetMaskPoints, METH_VARARGS,
   "V.SetMaskPoints(int)\nC++: virtual void SetMaskPoints(int _arg)\n\nSet the number of particles to track as a ratio of the input\nexample: setting MaskPoints to 10 will track every 10th point\n"},
  {"GetMaskPoints", PyvtkTemporalPathLineFilter_GetMaskPoints, METH_VARARGS,
   "V.GetMaskPoints() -> int\nC++: virtual int GetMaskPoints()\n\nSet the number of particles to track as a ratio of the input\nexample: setting MaskPoints to 10 will track every 10th point\n"},
  {"SetMaxTrackLength", PyvtkTemporalPathLineFilter_SetMaxTrackLength, METH_VARARGS,
   "V.SetMaxTrackLength(int)\nC++: virtual void SetMaxTrackLength(unsigned int _arg)\n\nIf the Particles being traced animate for a long time, the trails\nor traces will become long and stringy. Setting the\nMaxTraceTimeLength will limit how much of the trace is displayed.\nTracks longer then the Max will disappear and the trace will\nappear like a snake of fixed length which progresses as the\nparticle moves\n"},
  {"GetMaxTrackLength", PyvtkTemporalPathLineFilter_GetMaxTrackLength, METH_VARARGS,
   "V.GetMaxTrackLength() -> int\nC++: virtual unsigned int GetMaxTrackLength()\n\nIf the Particles being traced animate for a long time, the trails\nor traces will become long and stringy. Setting the\nMaxTraceTimeLength will limit how much of the trace is displayed.\nTracks longer then the Max will disappear and the trace will\nappear like a snake of fixed length which progresses as the\nparticle moves\n"},
  {"SetIdChannelArray", PyvtkTemporalPathLineFilter_SetIdChannelArray, METH_VARARGS,
   "V.SetIdChannelArray(string)\nC++: virtual void SetIdChannelArray(const char *_arg)\n\nSpecify the name of a scalar array which will be used to fetch\nthe index of each point. This is necessary only if the particles\nchange position (Id order) on each time step. The Id can be used\nto identify particles at each step and hence track them properly.\nIf this array is nullptr, the global point ids are used.  If an\nId array cannot otherwise be found, the point index is used as\nthe ID.\n"},
  {"GetIdChannelArray", PyvtkTemporalPathLineFilter_GetIdChannelArray, METH_VARARGS,
   "V.GetIdChannelArray() -> string\nC++: virtual char *GetIdChannelArray()\n\nSpecify the name of a scalar array which will be used to fetch\nthe index of each point. This is necessary only if the particles\nchange position (Id order) on each time step. The Id can be used\nto identify particles at each step and hence track them properly.\nIf this array is nullptr, the global point ids are used.  If an\nId array cannot otherwise be found, the point index is used as\nthe ID.\n"},
  {"SetMaxStepDistance", PyvtkTemporalPathLineFilter_SetMaxStepDistance, METH_VARARGS,
   "V.SetMaxStepDistance(float, float, float)\nC++: void SetMaxStepDistance(double, double, double)\nV.SetMaxStepDistance((float, float, float))\nC++: void SetMaxStepDistance(double a[3])\n\n"},
  {"GetMaxStepDistance", PyvtkTemporalPathLineFilter_GetMaxStepDistance, METH_VARARGS,
   "V.GetMaxStepDistance() -> (float, float, float)\nC++: double *GetMaxStepDistance()\n\n"},
  {"SetKeepDeadTrails", PyvtkTemporalPathLineFilter_SetKeepDeadTrails, METH_VARARGS,
   "V.SetKeepDeadTrails(int)\nC++: virtual void SetKeepDeadTrails(int _arg)\n\nWhen a particle 'disappears', the trail belonging to it is\nremoved from the list. When this flag is enabled, dead trails\nwill persist until the next time the list is cleared. Use\ncarefully as it may cause excessive memory consumption if left on\nby mistake.\n"},
  {"GetKeepDeadTrails", PyvtkTemporalPathLineFilter_GetKeepDeadTrails, METH_VARARGS,
   "V.GetKeepDeadTrails() -> int\nC++: virtual int GetKeepDeadTrails()\n\nWhen a particle 'disappears', the trail belonging to it is\nremoved from the list. When this flag is enabled, dead trails\nwill persist until the next time the list is cleared. Use\ncarefully as it may cause excessive memory consumption if left on\nby mistake.\n"},
  {"Flush", PyvtkTemporalPathLineFilter_Flush, METH_VARARGS,
   "V.Flush()\nC++: void Flush()\n\nFlush will wipe any existing data so that traces can be restarted\nfrom whatever time step is next supplied.\n"},
  {"SetSelectionConnection", PyvtkTemporalPathLineFilter_SetSelectionConnection, METH_VARARGS,
   "V.SetSelectionConnection(vtkAlgorithmOutput)\nC++: void SetSelectionConnection(vtkAlgorithmOutput *algOutput)\n\nSet a second input which is a selection. Particles with the same\nId in the selection as the primary input will be chosen for\npathlines Note that you must have the same IdChannelArray in the\nselection as the input\n"},
  {"SetSelectionData", PyvtkTemporalPathLineFilter_SetSelectionData, METH_VARARGS,
   "V.SetSelectionData(vtkDataSet)\nC++: void SetSelectionData(vtkDataSet *input)\n\nSet a second input which is a selection. Particles with the same\nId in the selection as the primary input will be chosen for\npathlines Note that you must have the same IdChannelArray in the\nselection as the input\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTemporalPathLineFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkTemporalPathLineFilter", // tp_name
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
  PyvtkTemporalPathLineFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTemporalPathLineFilter_StaticNew()
{
  return vtkTemporalPathLineFilter::New();
}

PyObject *PyvtkTemporalPathLineFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTemporalPathLineFilter_Type, PyvtkTemporalPathLineFilter_Methods,
    "vtkTemporalPathLineFilter",
 &PyvtkTemporalPathLineFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkTemporalPathLineFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPolyDataAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTemporalPathLineFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTemporalPathLineFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTemporalPathLineFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

