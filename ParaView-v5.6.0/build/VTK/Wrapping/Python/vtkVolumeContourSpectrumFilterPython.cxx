// python wrapper for vtkVolumeContourSpectrumFilter
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
#include "vtkVolumeContourSpectrumFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkVolumeContourSpectrumFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkVolumeContourSpectrumFilter_ClassNew(); }

#ifndef DECLARED_PyvtkDataObjectAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataObjectAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataObjectAlgorithm_ClassNew
#endif

static const char *PyvtkVolumeContourSpectrumFilter_Doc =
  "vtkVolumeContourSpectrumFilter - compute an approximation of the\nvolume contour signature (evolution of the volume of the input\ntet-mesh along an arc of the Reeb graph).\n\n"
  "Superclass: vtkDataObjectAlgorithm\n\n"
  "The filter takes a vtkUnstructuredGrid as an input (port 0), along\n"
  "with a vtkReebGraph (port 1). The Reeb graph arc to consider can be\n"
  "specified with SetArcId() (default: 0). The number of (evenly\n"
  "distributed) samples of the signature can be defined with\n"
  "SetNumberOfSamples() (default value: 100). The filter will first try\n"
  "to pull as a scalar field the vtkDataArray with Id 'FieldId' of the\n"
  "vtkUnstructuredGrid, see SetFieldId (default: 0). The filter will\n"
  "abort if this field does not exist.\n\n"
  "The filter outputs a vtkTable with the volume contour signature\n"
  "approximation, each sample being evenly distributed in the function\n"
  "span of the arc.\n\n"
  "This filter is a typical example for designing your own contour\n"
  "signature filter (with customized metrics). It also shows typical\n"
  "vtkReebGraph traversals.\n\n"
  "Reference: C. Bajaj, V. Pascucci, D. Schikore, \"The contour\n"
  "spectrum\", IEEE Visualization, 167-174, 1997.\n\n";


static PyObject *
PyvtkVolumeContourSpectrumFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkVolumeContourSpectrumFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeContourSpectrumFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeContourSpectrumFilter *op = static_cast<vtkVolumeContourSpectrumFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVolumeContourSpectrumFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeContourSpectrumFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkVolumeContourSpectrumFilter *tempr = vtkVolumeContourSpectrumFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeContourSpectrumFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeContourSpectrumFilter *op = static_cast<vtkVolumeContourSpectrumFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVolumeContourSpectrumFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVolumeContourSpectrumFilter::NewInstance());

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
PyvtkVolumeContourSpectrumFilter_SetArcId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArcId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeContourSpectrumFilter *op = static_cast<vtkVolumeContourSpectrumFilter *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArcId(temp0);
    }
    else
    {
      op->vtkVolumeContourSpectrumFilter::SetArcId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeContourSpectrumFilter_GetArcId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArcId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeContourSpectrumFilter *op = static_cast<vtkVolumeContourSpectrumFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetArcId() :
      op->vtkVolumeContourSpectrumFilter::GetArcId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeContourSpectrumFilter_SetNumberOfSamples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSamples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeContourSpectrumFilter *op = static_cast<vtkVolumeContourSpectrumFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfSamples(temp0);
    }
    else
    {
      op->vtkVolumeContourSpectrumFilter::SetNumberOfSamples(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeContourSpectrumFilter_GetNumberOfSamples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSamples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeContourSpectrumFilter *op = static_cast<vtkVolumeContourSpectrumFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSamples() :
      op->vtkVolumeContourSpectrumFilter::GetNumberOfSamples());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeContourSpectrumFilter_SetFieldId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeContourSpectrumFilter *op = static_cast<vtkVolumeContourSpectrumFilter *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFieldId(temp0);
    }
    else
    {
      op->vtkVolumeContourSpectrumFilter::SetFieldId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeContourSpectrumFilter_GetFieldId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeContourSpectrumFilter *op = static_cast<vtkVolumeContourSpectrumFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetFieldId() :
      op->vtkVolumeContourSpectrumFilter::GetFieldId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeContourSpectrumFilter_GetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeContourSpectrumFilter *op = static_cast<vtkVolumeContourSpectrumFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTable *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkVolumeContourSpectrumFilter::GetOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkVolumeContourSpectrumFilter_Methods[] = {
  {"IsTypeOf", PyvtkVolumeContourSpectrumFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkVolumeContourSpectrumFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkVolumeContourSpectrumFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkVolumeContourSpectrumFilter\nC++: static vtkVolumeContourSpectrumFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkVolumeContourSpectrumFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkVolumeContourSpectrumFilter\nC++: vtkVolumeContourSpectrumFilter *NewInstance()\n\n"},
  {"SetArcId", PyvtkVolumeContourSpectrumFilter_SetArcId, METH_VARARGS,
   "V.SetArcId(int)\nC++: virtual void SetArcId(vtkIdType _arg)\n\nSet the arc Id for which the contour signature has to be\ncomputed. Default value: 0\n"},
  {"GetArcId", PyvtkVolumeContourSpectrumFilter_GetArcId, METH_VARARGS,
   "V.GetArcId() -> int\nC++: virtual vtkIdType GetArcId()\n\nSet the arc Id for which the contour signature has to be\ncomputed. Default value: 0\n"},
  {"SetNumberOfSamples", PyvtkVolumeContourSpectrumFilter_SetNumberOfSamples, METH_VARARGS,
   "V.SetNumberOfSamples(int)\nC++: virtual void SetNumberOfSamples(int _arg)\n\nSet the number of samples in the output signature Default value:\n100\n"},
  {"GetNumberOfSamples", PyvtkVolumeContourSpectrumFilter_GetNumberOfSamples, METH_VARARGS,
   "V.GetNumberOfSamples() -> int\nC++: virtual int GetNumberOfSamples()\n\nSet the number of samples in the output signature Default value:\n100\n"},
  {"SetFieldId", PyvtkVolumeContourSpectrumFilter_SetFieldId, METH_VARARGS,
   "V.SetFieldId(int)\nC++: virtual void SetFieldId(vtkIdType _arg)\n\nSet the scalar field Id Default value: 0\n"},
  {"GetFieldId", PyvtkVolumeContourSpectrumFilter_GetFieldId, METH_VARARGS,
   "V.GetFieldId() -> int\nC++: virtual vtkIdType GetFieldId()\n\nSet the scalar field Id Default value: 0\n"},
  {"GetOutput", PyvtkVolumeContourSpectrumFilter_GetOutput, METH_VARARGS,
   "V.GetOutput() -> vtkTable\nC++: vtkTable *GetOutput()\n\nGet the output data object for a port on this algorithm.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkVolumeContourSpectrumFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkVolumeContourSpectrumFilter", // tp_name
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
  PyvtkVolumeContourSpectrumFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkVolumeContourSpectrumFilter_StaticNew()
{
  return vtkVolumeContourSpectrumFilter::New();
}

PyObject *PyvtkVolumeContourSpectrumFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkVolumeContourSpectrumFilter_Type, PyvtkVolumeContourSpectrumFilter_Methods,
    "vtkVolumeContourSpectrumFilter",
 &PyvtkVolumeContourSpectrumFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkVolumeContourSpectrumFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataObjectAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkVolumeContourSpectrumFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkVolumeContourSpectrumFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkVolumeContourSpectrumFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

