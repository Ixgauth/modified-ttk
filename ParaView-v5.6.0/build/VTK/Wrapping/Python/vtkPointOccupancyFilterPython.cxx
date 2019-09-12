// python wrapper for vtkPointOccupancyFilter
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
#include "vtkPointOccupancyFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPointOccupancyFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPointOccupancyFilter_ClassNew(); }

#ifndef DECLARED_PyvtkImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkImageAlgorithm_ClassNew
#endif

static const char *PyvtkPointOccupancyFilter_Doc =
  "vtkPointOccupancyFilter - produce occupancy bit mask from input point\ncloud\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "vtkPointOccupancyFilter is a filter that generates an occupancy mask\n"
  "on a volume from a point cloud. The output of the filter is an\n"
  "image/volume that indicates for each pixel/voxel whether a point\n"
  "exists within the pixel/voxel.\n\n"
  "To use this filter, specify an input of type vtkPointSet (i.e., has\n"
  "an explicit representation of points). Then define the occupancy\n"
  "volume by specifying the sample dimensions and bounds. Optionally you\n"
  "can specify unsigned char values used to indicate whether a voxel is\n"
  "empty or occupied.\n\n"
  "@warning\n"
  "During processing, if a point is found to be outside of the occupancy\n"
  "volume, then it is skipped (i.e., it does not affect the occupancy\n"
  "mask).\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@sa\n"
  "vtkPointDensityFilter vtkPointMaskFilter\n\n";


static PyObject *
PyvtkPointOccupancyFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPointOccupancyFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointOccupancyFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointOccupancyFilter *op = static_cast<vtkPointOccupancyFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPointOccupancyFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointOccupancyFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPointOccupancyFilter *tempr = vtkPointOccupancyFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointOccupancyFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointOccupancyFilter *op = static_cast<vtkPointOccupancyFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPointOccupancyFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPointOccupancyFilter::NewInstance());

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
PyvtkPointOccupancyFilter_SetSampleDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointOccupancyFilter *op = static_cast<vtkPointOccupancyFilter *>(vp);

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
      op->SetSampleDimensions(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPointOccupancyFilter::SetSampleDimensions(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPointOccupancyFilter_SetSampleDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointOccupancyFilter *op = static_cast<vtkPointOccupancyFilter *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  int save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetSampleDimensions(temp0);
    }
    else
    {
      op->vtkPointOccupancyFilter::SetSampleDimensions(temp0);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPointOccupancyFilter_SetSampleDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPointOccupancyFilter_SetSampleDimensions_s1(self, args);
    case 1:
      return PyvtkPointOccupancyFilter_SetSampleDimensions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSampleDimensions");
  return nullptr;
}



static PyObject *
PyvtkPointOccupancyFilter_GetSampleDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointOccupancyFilter *op = static_cast<vtkPointOccupancyFilter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSampleDimensions() :
      op->vtkPointOccupancyFilter::GetSampleDimensions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPointOccupancyFilter_SetModelBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointOccupancyFilter *op = static_cast<vtkPointOccupancyFilter *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
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
      op->SetModelBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkPointOccupancyFilter::SetModelBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPointOccupancyFilter_SetModelBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointOccupancyFilter *op = static_cast<vtkPointOccupancyFilter *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetModelBounds(temp0);
    }
    else
    {
      op->vtkPointOccupancyFilter::SetModelBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPointOccupancyFilter_SetModelBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkPointOccupancyFilter_SetModelBounds_s1(self, args);
    case 1:
      return PyvtkPointOccupancyFilter_SetModelBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetModelBounds");
  return nullptr;
}



static PyObject *
PyvtkPointOccupancyFilter_GetModelBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointOccupancyFilter *op = static_cast<vtkPointOccupancyFilter *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetModelBounds() :
      op->vtkPointOccupancyFilter::GetModelBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPointOccupancyFilter_SetEmptyValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEmptyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointOccupancyFilter *op = static_cast<vtkPointOccupancyFilter *>(vp);

  unsigned char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEmptyValue(temp0);
    }
    else
    {
      op->vtkPointOccupancyFilter::SetEmptyValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointOccupancyFilter_GetEmptyValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEmptyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointOccupancyFilter *op = static_cast<vtkPointOccupancyFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char tempr = (ap.IsBound() ?
      op->GetEmptyValue() :
      op->vtkPointOccupancyFilter::GetEmptyValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointOccupancyFilter_SetOccupiedValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOccupiedValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointOccupancyFilter *op = static_cast<vtkPointOccupancyFilter *>(vp);

  unsigned char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOccupiedValue(temp0);
    }
    else
    {
      op->vtkPointOccupancyFilter::SetOccupiedValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointOccupancyFilter_GetOccupiedValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOccupiedValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointOccupancyFilter *op = static_cast<vtkPointOccupancyFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char tempr = (ap.IsBound() ?
      op->GetOccupiedValue() :
      op->vtkPointOccupancyFilter::GetOccupiedValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPointOccupancyFilter_Methods[] = {
  {"IsTypeOf", PyvtkPointOccupancyFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instantiating, obtaining type information,\nand printing information.\n"},
  {"IsA", PyvtkPointOccupancyFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instantiating, obtaining type information,\nand printing information.\n"},
  {"SafeDownCast", PyvtkPointOccupancyFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPointOccupancyFilter\nC++: static vtkPointOccupancyFilter *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard methods for instantiating, obtaining type information,\nand printing information.\n"},
  {"NewInstance", PyvtkPointOccupancyFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPointOccupancyFilter\nC++: vtkPointOccupancyFilter *NewInstance()\n\nStandard methods for instantiating, obtaining type information,\nand printing information.\n"},
  {"SetSampleDimensions", PyvtkPointOccupancyFilter_SetSampleDimensions, METH_VARARGS,
   "V.SetSampleDimensions(int, int, int)\nC++: void SetSampleDimensions(int i, int j, int k)\nV.SetSampleDimensions([int, int, int])\nC++: void SetSampleDimensions(int dim[3])\n\nSet / get the dimensions of the occupancy volume. Higher values\ngenerally produce better results but may be much slower.\n"},
  {"GetSampleDimensions", PyvtkPointOccupancyFilter_GetSampleDimensions, METH_VARARGS,
   "V.GetSampleDimensions() -> (int, int, int)\nC++: int *GetSampleDimensions()\n\nSet / get the dimensions of the occupancy volume. Higher values\ngenerally produce better results but may be much slower.\n"},
  {"SetModelBounds", PyvtkPointOccupancyFilter_SetModelBounds, METH_VARARGS,
   "V.SetModelBounds(float, float, float, float, float, float)\nC++: void SetModelBounds(double, double, double, double, double,\n    double)\nV.SetModelBounds((float, float, float, float, float, float))\nC++: void SetModelBounds(double a[6])\n\n"},
  {"GetModelBounds", PyvtkPointOccupancyFilter_GetModelBounds, METH_VARARGS,
   "V.GetModelBounds() -> (float, float, float, float, float, float)\nC++: double *GetModelBounds()\n\nSet / get the (xmin,xmax, ymin,ymax, zmin,zmax) bounding box in\nwhich the sampling is performed. If any of the (min,max) bounds\nvalues are min >= max, then the bounds will be computed\nautomatically from the input data. Otherwise, the user-specified\nbounds will be used.\n"},
  {"SetEmptyValue", PyvtkPointOccupancyFilter_SetEmptyValue, METH_VARARGS,
   "V.SetEmptyValue(int)\nC++: virtual void SetEmptyValue(unsigned char _arg)\n\nSet / get the values indicating whether a voxel is empty (i.e.,\ndoes not contain any points) or occupied. By default, an empty\nvoxel has a zero value; an occupied voxel has a value of one.\n"},
  {"GetEmptyValue", PyvtkPointOccupancyFilter_GetEmptyValue, METH_VARARGS,
   "V.GetEmptyValue() -> int\nC++: virtual unsigned char GetEmptyValue()\n\nSet / get the values indicating whether a voxel is empty (i.e.,\ndoes not contain any points) or occupied. By default, an empty\nvoxel has a zero value; an occupied voxel has a value of one.\n"},
  {"SetOccupiedValue", PyvtkPointOccupancyFilter_SetOccupiedValue, METH_VARARGS,
   "V.SetOccupiedValue(int)\nC++: virtual void SetOccupiedValue(unsigned char _arg)\n\nSet / get the values indicating whether a voxel is empty (i.e.,\ndoes not contain any points) or occupied. By default, an empty\nvoxel has a zero value; an occupied voxel has a value of one.\n"},
  {"GetOccupiedValue", PyvtkPointOccupancyFilter_GetOccupiedValue, METH_VARARGS,
   "V.GetOccupiedValue() -> int\nC++: virtual unsigned char GetOccupiedValue()\n\nSet / get the values indicating whether a voxel is empty (i.e.,\ndoes not contain any points) or occupied. By default, an empty\nvoxel has a zero value; an occupied voxel has a value of one.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPointOccupancyFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersPointsPython.vtkPointOccupancyFilter", // tp_name
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
  PyvtkPointOccupancyFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPointOccupancyFilter_StaticNew()
{
  return vtkPointOccupancyFilter::New();
}

PyObject *PyvtkPointOccupancyFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPointOccupancyFilter_Type, PyvtkPointOccupancyFilter_Methods,
    "vtkPointOccupancyFilter",
 &PyvtkPointOccupancyFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkPointOccupancyFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImageAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPointOccupancyFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPointOccupancyFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPointOccupancyFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

