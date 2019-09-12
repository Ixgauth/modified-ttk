// python wrapper for vtkExtractHierarchicalBins
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
#include "vtkExtractHierarchicalBins.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExtractHierarchicalBins(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkExtractHierarchicalBins_ClassNew(); }

#ifndef DECLARED_PyvtkPointCloudFilter_ClassNew
extern "C" { PyObject *PyvtkPointCloudFilter_ClassNew(); }
#define DECLARED_PyvtkPointCloudFilter_ClassNew
#endif

static const char *PyvtkExtractHierarchicalBins_Doc =
  "vtkExtractHierarchicalBins - manipulate the output of\nvtkHierarchicalBinningFilter\n\n"
  "Superclass: vtkPointCloudFilter\n\n"
  "vtkExtractHierarchicalBins enables users to extract data from the\n"
  "output of vtkHierarchicalBinningFilter. Points at a particular level,\n"
  "or at a level and bin number, can be filtered to the output. To\n"
  "perform these operations, the output must contain points sorted into\n"
  "bins (the vtkPoints), with offsets pointing to the beginning of each\n"
  "bin (a vtkFieldData array named \"BinOffsets\").\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@sa\n"
  "vtkFiltersPointsFilter vtkRadiusOutlierRemoval\n"
  "vtkStatisticalOutlierRemoval vtkThresholdPoints vtkImplicitFunction\n"
  "vtkExtractGeometry vtkFitImplicitFunction\n\n";


static PyObject *
PyvtkExtractHierarchicalBins_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExtractHierarchicalBins::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHierarchicalBins_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHierarchicalBins *op = static_cast<vtkExtractHierarchicalBins *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractHierarchicalBins::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHierarchicalBins_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExtractHierarchicalBins *tempr = vtkExtractHierarchicalBins::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHierarchicalBins_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHierarchicalBins *op = static_cast<vtkExtractHierarchicalBins *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtractHierarchicalBins *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractHierarchicalBins::NewInstance());

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
PyvtkExtractHierarchicalBins_SetLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHierarchicalBins *op = static_cast<vtkExtractHierarchicalBins *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLevel(temp0);
    }
    else
    {
      op->vtkExtractHierarchicalBins::SetLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHierarchicalBins_GetLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHierarchicalBins *op = static_cast<vtkExtractHierarchicalBins *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLevel() :
      op->vtkExtractHierarchicalBins::GetLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHierarchicalBins_SetBin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHierarchicalBins *op = static_cast<vtkExtractHierarchicalBins *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBin(temp0);
    }
    else
    {
      op->vtkExtractHierarchicalBins::SetBin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHierarchicalBins_GetBin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHierarchicalBins *op = static_cast<vtkExtractHierarchicalBins *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBin() :
      op->vtkExtractHierarchicalBins::GetBin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHierarchicalBins_SetBinningFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBinningFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHierarchicalBins *op = static_cast<vtkExtractHierarchicalBins *>(vp);

  vtkHierarchicalBinningFilter *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHierarchicalBinningFilter"))
  {
    if (ap.IsBound())
    {
      op->SetBinningFilter(temp0);
    }
    else
    {
      op->vtkExtractHierarchicalBins::SetBinningFilter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHierarchicalBins_GetBinningFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinningFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHierarchicalBins *op = static_cast<vtkExtractHierarchicalBins *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHierarchicalBinningFilter *tempr = (ap.IsBound() ?
      op->GetBinningFilter() :
      op->vtkExtractHierarchicalBins::GetBinningFilter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkExtractHierarchicalBins_Methods[] = {
  {"IsTypeOf", PyvtkExtractHierarchicalBins_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instantiating, obtaining type information,\nand printing information.\n"},
  {"IsA", PyvtkExtractHierarchicalBins_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instantiating, obtaining type information,\nand printing information.\n"},
  {"SafeDownCast", PyvtkExtractHierarchicalBins_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkExtractHierarchicalBins\nC++: static vtkExtractHierarchicalBins *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard methods for instantiating, obtaining type information,\nand printing information.\n"},
  {"NewInstance", PyvtkExtractHierarchicalBins_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkExtractHierarchicalBins\nC++: vtkExtractHierarchicalBins *NewInstance()\n\nStandard methods for instantiating, obtaining type information,\nand printing information.\n"},
  {"SetLevel", PyvtkExtractHierarchicalBins_SetLevel, METH_VARARGS,
   "V.SetLevel(int)\nC++: virtual void SetLevel(int _arg)\n\nSpecify the level to extract. If non-negative, with a negative\nbin number, then all points at this level are extracted and sent\nto the output. If negative, then the points from the specified\nbin are sent to the output. If both the level and bin number are\nnegative values, then the input is sent to the output. By default\nthe 0th level is extracted. Note that requesting a level greater\nthan the associated vtkHierarchicalBinningFilter will clamp the\nlevel to the maximum possible level of the binning filter.\n"},
  {"GetLevel", PyvtkExtractHierarchicalBins_GetLevel, METH_VARARGS,
   "V.GetLevel() -> int\nC++: virtual int GetLevel()\n\nSpecify the level to extract. If non-negative, with a negative\nbin number, then all points at this level are extracted and sent\nto the output. If negative, then the points from the specified\nbin are sent to the output. If both the level and bin number are\nnegative values, then the input is sent to the output. By default\nthe 0th level is extracted. Note that requesting a level greater\nthan the associated vtkHierarchicalBinningFilter will clamp the\nlevel to the maximum possible level of the binning filter.\n"},
  {"SetBin", PyvtkExtractHierarchicalBins_SetBin, METH_VARARGS,
   "V.SetBin(int)\nC++: virtual void SetBin(int _arg)\n\nSpecify the bin number to extract. If a non-negative value, then\nthe points from the bin number specified are extracted. If\nnegative, then entire levels of points are extacted (assuming the\nLevel is non-negative). Note that the bin tree is flattened, a\nparticular bin number may refer to a bin on any level. Note that\nrequesting a bin greater than the associated\nvtkHierarchicalBinningFilter will clamp the bin to the maximum\npossible bin of the binning filter.\n"},
  {"GetBin", PyvtkExtractHierarchicalBins_GetBin, METH_VARARGS,
   "V.GetBin() -> int\nC++: virtual int GetBin()\n\nSpecify the bin number to extract. If a non-negative value, then\nthe points from the bin number specified are extracted. If\nnegative, then entire levels of points are extacted (assuming the\nLevel is non-negative). Note that the bin tree is flattened, a\nparticular bin number may refer to a bin on any level. Note that\nrequesting a bin greater than the associated\nvtkHierarchicalBinningFilter will clamp the bin to the maximum\npossible bin of the binning filter.\n"},
  {"SetBinningFilter", PyvtkExtractHierarchicalBins_SetBinningFilter, METH_VARARGS,
   "V.SetBinningFilter(vtkHierarchicalBinningFilter)\nC++: virtual void SetBinningFilter(vtkHierarchicalBinningFilter *)\n\nSpecify the vtkHierarchicalBinningFilter to query for relevant\ninformation. Make sure that this filter has executed prior to the\nexecution of this filter. (This is generally a safe bet if\nconnected in a pipeline.)\n"},
  {"GetBinningFilter", PyvtkExtractHierarchicalBins_GetBinningFilter, METH_VARARGS,
   "V.GetBinningFilter() -> vtkHierarchicalBinningFilter\nC++: virtual vtkHierarchicalBinningFilter *GetBinningFilter()\n\nSpecify the vtkHierarchicalBinningFilter to query for relevant\ninformation. Make sure that this filter has executed prior to the\nexecution of this filter. (This is generally a safe bet if\nconnected in a pipeline.)\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkExtractHierarchicalBins_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersPointsPython.vtkExtractHierarchicalBins", // tp_name
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
  PyvtkExtractHierarchicalBins_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExtractHierarchicalBins_StaticNew()
{
  return vtkExtractHierarchicalBins::New();
}

PyObject *PyvtkExtractHierarchicalBins_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkExtractHierarchicalBins_Type, PyvtkExtractHierarchicalBins_Methods,
    "vtkExtractHierarchicalBins",
 &PyvtkExtractHierarchicalBins_StaticNew);

  PyTypeObject *pytype = &PyvtkExtractHierarchicalBins_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPointCloudFilter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExtractHierarchicalBins(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExtractHierarchicalBins_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExtractHierarchicalBins", o) != 0)
  {
    Py_DECREF(o);
  }

}

