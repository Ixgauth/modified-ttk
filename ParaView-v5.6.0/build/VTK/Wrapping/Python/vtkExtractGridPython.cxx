// python wrapper for vtkExtractGrid
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
#include "vtkExtractGrid.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExtractGrid(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkExtractGrid_ClassNew(); }

#ifndef DECLARED_PyvtkStructuredGridAlgorithm_ClassNew
extern "C" { PyObject *PyvtkStructuredGridAlgorithm_ClassNew(); }
#define DECLARED_PyvtkStructuredGridAlgorithm_ClassNew
#endif

static const char *PyvtkExtractGrid_Doc =
  "vtkExtractGrid - select piece (e.g., volume of interest) and/or\nsubsample structured grid dataset\n\n"
  "Superclass: vtkStructuredGridAlgorithm\n\n"
  "vtkExtractGrid is a filter that selects a portion of an input\n"
  "structured grid dataset, or subsamples an input dataset. (The\n"
  "selected portion of interested is referred to as the Volume Of\n"
  "Interest, or VOI.) The output of this filter is a structured grid\n"
  "dataset. The filter treats input data of any topological dimension\n"
  "(i.e., point, line, image, or volume) and can generate output data of\n"
  "any topological dimension.\n\n"
  "To use this filter set the VOI ivar which are i-j-k min/max indices\n"
  "that specify a rectangular region in the data. (Note that these are\n"
  "0-offset.) You can also specify a sampling rate to subsample the\n"
  "data.\n\n"
  "Typical applications of this filter are to extract a plane from a\n"
  "grid for contouring, subsampling large grids to reduce data size, or\n"
  "extracting regions of a grid with interesting data.\n\n"
  "@sa\n"
  "vtkGeometryFilter vtkExtractGeometry vtkExtractVOI\n"
  "vtkStructuredGridGeometryFilter\n\n";


static PyObject *
PyvtkExtractGrid_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExtractGrid::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractGrid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractGrid *op = static_cast<vtkExtractGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractGrid::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractGrid_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExtractGrid *tempr = vtkExtractGrid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractGrid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractGrid *op = static_cast<vtkExtractGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtractGrid *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractGrid::NewInstance());

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
PyvtkExtractGrid_SetVOI_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVOI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractGrid *op = static_cast<vtkExtractGrid *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetVOI(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkExtractGrid::SetVOI(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExtractGrid_SetVOI_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVOI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractGrid *op = static_cast<vtkExtractGrid *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetVOI(temp0);
    }
    else
    {
      op->vtkExtractGrid::SetVOI(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExtractGrid_SetVOI(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkExtractGrid_SetVOI_s1(self, args);
    case 1:
      return PyvtkExtractGrid_SetVOI_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetVOI");
  return nullptr;
}



static PyObject *
PyvtkExtractGrid_GetVOI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVOI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractGrid *op = static_cast<vtkExtractGrid *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetVOI() :
      op->vtkExtractGrid::GetVOI());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractGrid_SetSampleRate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractGrid *op = static_cast<vtkExtractGrid *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetSampleRate(temp0, temp1, temp2);
    }
    else
    {
      op->vtkExtractGrid::SetSampleRate(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExtractGrid_SetSampleRate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractGrid *op = static_cast<vtkExtractGrid *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSampleRate(temp0);
    }
    else
    {
      op->vtkExtractGrid::SetSampleRate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExtractGrid_SetSampleRate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkExtractGrid_SetSampleRate_s1(self, args);
    case 1:
      return PyvtkExtractGrid_SetSampleRate_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSampleRate");
  return nullptr;
}



static PyObject *
PyvtkExtractGrid_GetSampleRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractGrid *op = static_cast<vtkExtractGrid *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSampleRate() :
      op->vtkExtractGrid::GetSampleRate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractGrid_SetIncludeBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIncludeBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractGrid *op = static_cast<vtkExtractGrid *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIncludeBoundary(temp0);
    }
    else
    {
      op->vtkExtractGrid::SetIncludeBoundary(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractGrid_GetIncludeBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIncludeBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractGrid *op = static_cast<vtkExtractGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIncludeBoundary() :
      op->vtkExtractGrid::GetIncludeBoundary());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractGrid_IncludeBoundaryOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncludeBoundaryOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractGrid *op = static_cast<vtkExtractGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IncludeBoundaryOn();
    }
    else
    {
      op->vtkExtractGrid::IncludeBoundaryOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractGrid_IncludeBoundaryOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncludeBoundaryOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractGrid *op = static_cast<vtkExtractGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IncludeBoundaryOff();
    }
    else
    {
      op->vtkExtractGrid::IncludeBoundaryOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkExtractGrid_Methods[] = {
  {"IsTypeOf", PyvtkExtractGrid_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExtractGrid_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExtractGrid_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkExtractGrid\nC++: static vtkExtractGrid *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExtractGrid_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkExtractGrid\nC++: vtkExtractGrid *NewInstance()\n\n"},
  {"SetVOI", PyvtkExtractGrid_SetVOI, METH_VARARGS,
   "V.SetVOI(int, int, int, int, int, int)\nC++: void SetVOI(int, int, int, int, int, int)\nV.SetVOI((int, int, int, int, int, int))\nC++: void SetVOI(int a[6])\n\n"},
  {"GetVOI", PyvtkExtractGrid_GetVOI, METH_VARARGS,
   "V.GetVOI() -> (int, int, int, int, int, int)\nC++: int *GetVOI()\n\nSpecify i-j-k (min,max) pairs to extract. The resulting\nstructured grid dataset can be of any topological dimension\n(i.e., point, line, plane, or 3D grid).\n"},
  {"SetSampleRate", PyvtkExtractGrid_SetSampleRate, METH_VARARGS,
   "V.SetSampleRate(int, int, int)\nC++: void SetSampleRate(int, int, int)\nV.SetSampleRate((int, int, int))\nC++: void SetSampleRate(int a[3])\n\n"},
  {"GetSampleRate", PyvtkExtractGrid_GetSampleRate, METH_VARARGS,
   "V.GetSampleRate() -> (int, int, int)\nC++: int *GetSampleRate()\n\nSet the sampling rate in the i, j, and k directions. If the rate\nis > 1, then the resulting VOI will be subsampled representation\nof the input. For example, if the SampleRate=(2,2,2), every other\npoint will be selected, resulting in a volume 1/8th the original\nsize. Initial value is (1,1,1).\n"},
  {"SetIncludeBoundary", PyvtkExtractGrid_SetIncludeBoundary, METH_VARARGS,
   "V.SetIncludeBoundary(int)\nC++: virtual void SetIncludeBoundary(vtkTypeBool _arg)\n\nControl whether to enforce that the \"boundary\" of the grid is\noutput in the subsampling process. (This ivar only has effect\nwhen the SampleRate in any direction is not equal to 1.) When\nthis ivar IncludeBoundary is on, the subsampling will always\ninclude the boundary of the grid even though the sample rate is\nnot an even multiple of the grid dimensions. (By default\nIncludeBoundary is off.)\n"},
  {"GetIncludeBoundary", PyvtkExtractGrid_GetIncludeBoundary, METH_VARARGS,
   "V.GetIncludeBoundary() -> int\nC++: virtual vtkTypeBool GetIncludeBoundary()\n\nControl whether to enforce that the \"boundary\" of the grid is\noutput in the subsampling process. (This ivar only has effect\nwhen the SampleRate in any direction is not equal to 1.) When\nthis ivar IncludeBoundary is on, the subsampling will always\ninclude the boundary of the grid even though the sample rate is\nnot an even multiple of the grid dimensions. (By default\nIncludeBoundary is off.)\n"},
  {"IncludeBoundaryOn", PyvtkExtractGrid_IncludeBoundaryOn, METH_VARARGS,
   "V.IncludeBoundaryOn()\nC++: virtual void IncludeBoundaryOn()\n\nControl whether to enforce that the \"boundary\" of the grid is\noutput in the subsampling process. (This ivar only has effect\nwhen the SampleRate in any direction is not equal to 1.) When\nthis ivar IncludeBoundary is on, the subsampling will always\ninclude the boundary of the grid even though the sample rate is\nnot an even multiple of the grid dimensions. (By default\nIncludeBoundary is off.)\n"},
  {"IncludeBoundaryOff", PyvtkExtractGrid_IncludeBoundaryOff, METH_VARARGS,
   "V.IncludeBoundaryOff()\nC++: virtual void IncludeBoundaryOff()\n\nControl whether to enforce that the \"boundary\" of the grid is\noutput in the subsampling process. (This ivar only has effect\nwhen the SampleRate in any direction is not equal to 1.) When\nthis ivar IncludeBoundary is on, the subsampling will always\ninclude the boundary of the grid even though the sample rate is\nnot an even multiple of the grid dimensions. (By default\nIncludeBoundary is off.)\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkExtractGrid_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersExtractionPython.vtkExtractGrid", // tp_name
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
  PyvtkExtractGrid_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExtractGrid_StaticNew()
{
  return vtkExtractGrid::New();
}

PyObject *PyvtkExtractGrid_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkExtractGrid_Type, PyvtkExtractGrid_Methods,
    "vtkExtractGrid",
 &PyvtkExtractGrid_StaticNew);

  PyTypeObject *pytype = &PyvtkExtractGrid_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkStructuredGridAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExtractGrid(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExtractGrid_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExtractGrid", o) != 0)
  {
    Py_DECREF(o);
  }

}

