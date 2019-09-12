// python wrapper for vtkGenericProbeFilter
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
#include "vtkGenericProbeFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGenericProbeFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkGenericProbeFilter_ClassNew(); }

#ifndef DECLARED_PyvtkDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkGenericProbeFilter_Doc =
  "vtkGenericProbeFilter - sample data values at specified point\nlocations\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkGenericProbeFilter is a filter that computes point attributes\n"
  "(e.g., scalars, vectors, etc.) at specified point positions. The\n"
  "filter has two inputs: the Input and Source. The Input geometric\n"
  "structure is passed through the filter. The point attributes are\n"
  "computed at the Input point positions by interpolating into the\n"
  "source data. For example, we can compute data values on a plane\n"
  "(plane specified as Input) from a volume (Source).\n\n"
  "This filter can be used to resample data, or convert one dataset form\n"
  "into another. For example, a generic dataset can be probed with a\n"
  "volume (three-dimensional vtkImageData), and then volume rendering\n"
  "techniques can be used to visualize the results. Another example: a\n"
  "line or curve can be used to probe data to produce x-y plots along\n"
  "that line or curve.\n\n"
  "This filter has been implemented to operate on generic datasets,\n"
  "rather than the typical vtkDataSet (and subclasses).\n"
  "vtkGenericDataSet is a more complex cousin of vtkDataSet, typically\n"
  "consisting of nonlinear, higher-order cells. To process this type of\n"
  "data, generic cells are automatically tessellated into linear cells\n"
  "prior to isocontouring.\n\n"
  "@sa\n"
  "vtkGenericProbeFilter vtkProbeFilter vtkGenericDataSet\n\n";


static PyObject *
PyvtkGenericProbeFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGenericProbeFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericProbeFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericProbeFilter *op = static_cast<vtkGenericProbeFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGenericProbeFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericProbeFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGenericProbeFilter *tempr = vtkGenericProbeFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericProbeFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericProbeFilter *op = static_cast<vtkGenericProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGenericProbeFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGenericProbeFilter::NewInstance());

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
PyvtkGenericProbeFilter_SetSourceData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericProbeFilter *op = static_cast<vtkGenericProbeFilter *>(vp);

  vtkGenericDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGenericDataSet"))
  {
    if (ap.IsBound())
    {
      op->SetSourceData(temp0);
    }
    else
    {
      op->vtkGenericProbeFilter::SetSourceData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericProbeFilter_GetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericProbeFilter *op = static_cast<vtkGenericProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGenericDataSet *tempr = (ap.IsBound() ?
      op->GetSource() :
      op->vtkGenericProbeFilter::GetSource());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericProbeFilter_GetValidPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValidPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericProbeFilter *op = static_cast<vtkGenericProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdTypeArray *tempr = (ap.IsBound() ?
      op->GetValidPoints() :
      op->vtkGenericProbeFilter::GetValidPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGenericProbeFilter_Methods[] = {
  {"IsTypeOf", PyvtkGenericProbeFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGenericProbeFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGenericProbeFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkGenericProbeFilter\nC++: static vtkGenericProbeFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGenericProbeFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkGenericProbeFilter\nC++: vtkGenericProbeFilter *NewInstance()\n\n"},
  {"SetSourceData", PyvtkGenericProbeFilter_SetSourceData, METH_VARARGS,
   "V.SetSourceData(vtkGenericDataSet)\nC++: void SetSourceData(vtkGenericDataSet *source)\n\nSpecify the point locations used to probe input. A generic\ndataset type is assumed.\n"},
  {"GetSource", PyvtkGenericProbeFilter_GetSource, METH_VARARGS,
   "V.GetSource() -> vtkGenericDataSet\nC++: vtkGenericDataSet *GetSource()\n\nSpecify the point locations used to probe input. A generic\ndataset type is assumed.\n"},
  {"GetValidPoints", PyvtkGenericProbeFilter_GetValidPoints, METH_VARARGS,
   "V.GetValidPoints() -> vtkIdTypeArray\nC++: virtual vtkIdTypeArray *GetValidPoints()\n\nGet the list of point ids in the output that contain attribute\ndata interpolated from the source.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkGenericProbeFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGenericPython.vtkGenericProbeFilter", // tp_name
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
  PyvtkGenericProbeFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGenericProbeFilter_StaticNew()
{
  return vtkGenericProbeFilter::New();
}

PyObject *PyvtkGenericProbeFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkGenericProbeFilter_Type, PyvtkGenericProbeFilter_Methods,
    "vtkGenericProbeFilter",
 &PyvtkGenericProbeFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkGenericProbeFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataSetAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGenericProbeFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGenericProbeFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGenericProbeFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

