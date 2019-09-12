// python wrapper for vtkAppendCompositeDataLeaves
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
#include "vtkAppendCompositeDataLeaves.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAppendCompositeDataLeaves(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAppendCompositeDataLeaves_ClassNew(); }

#ifndef DECLARED_PyvtkCompositeDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkCompositeDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkCompositeDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkAppendCompositeDataLeaves_Doc =
  "vtkAppendCompositeDataLeaves - appends one or more composite datasets\nwith the same structure together into a single output composite\ndataset\n\n"
  "Superclass: vtkCompositeDataSetAlgorithm\n\n"
  "vtkAppendCompositeDataLeaves is a filter that takes input composite\n"
  "datasets with the same structure: (1) the same number of entries and\n"
  "-- if any children are composites -- the same constraint holds from\n"
  "them; and (2) the same type of dataset at each position. It then\n"
  "creates an output dataset with the same structure whose leaves\n"
  "contain all the cells from the datasets at the corresponding leaves\n"
  "of the input datasets.\n\n"
  "Currently, this filter only supports \"appending\" of a few types for\n"
  "the leaf nodes and the logic used for each supported data type is as\n"
  "follows:\n\n"
  "\\li vtkUnstructuredGrid - appends all unstructured grids from the\n"
  "    leaf\n"
  "    location on all inputs into a single unstructured grid for the\n"
  "    corresponding location in the output composite dataset. PointData\n"
  "and\n"
  "    CellData arrays are extracted and appended only if they are\n"
  "available in\n"
  "    all datasets.(For example, if one dataset has scalars but another\n"
  "does\n"
  "    not, scalars will not be appended.)\n\n"
  "\\li vtkPolyData - appends all polydatas from the leaf location on all\n"
  "inputs\n"
  "    into a single polydata for the corresponding location in the\n"
  "output\n"
  "    composite dataset. PointData and CellData arrays are extracted\n"
  "and\n"
  "    appended only if they are available in all datasets.(For example,\n"
  "if one\n"
  "    dataset has scalars but another does not, scalars will not be\n"
  "appended.)\n\n"
  "\\li vtkImageData/vtkUniformGrid - simply passes the first non-null\n"
  "    grid for a particular location to corresponding location in the\n"
  "output.\n\n"
  "\\li vtkTable - simply passes the first non-null vtkTable for a\n"
  "    particular\n"
  "    location to the corresponding location in the output.\n\n"
  "Other types of leaf datasets will be ignored and their positions in\n"
  "the output dataset will be nullptr pointers.\n\n"
  "@sa\n"
  "vtkAppendPolyData vtkAppendFilter\n\n";


static PyObject *
PyvtkAppendCompositeDataLeaves_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAppendCompositeDataLeaves::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendCompositeDataLeaves_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendCompositeDataLeaves *op = static_cast<vtkAppendCompositeDataLeaves *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAppendCompositeDataLeaves::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendCompositeDataLeaves_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAppendCompositeDataLeaves *tempr = vtkAppendCompositeDataLeaves::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendCompositeDataLeaves_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendCompositeDataLeaves *op = static_cast<vtkAppendCompositeDataLeaves *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAppendCompositeDataLeaves *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAppendCompositeDataLeaves::NewInstance());

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
PyvtkAppendCompositeDataLeaves_SetAppendFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAppendFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendCompositeDataLeaves *op = static_cast<vtkAppendCompositeDataLeaves *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAppendFieldData(temp0);
    }
    else
    {
      op->vtkAppendCompositeDataLeaves::SetAppendFieldData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendCompositeDataLeaves_GetAppendFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAppendFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendCompositeDataLeaves *op = static_cast<vtkAppendCompositeDataLeaves *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAppendFieldData() :
      op->vtkAppendCompositeDataLeaves::GetAppendFieldData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendCompositeDataLeaves_AppendFieldDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendFieldDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendCompositeDataLeaves *op = static_cast<vtkAppendCompositeDataLeaves *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AppendFieldDataOn();
    }
    else
    {
      op->vtkAppendCompositeDataLeaves::AppendFieldDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendCompositeDataLeaves_AppendFieldDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendFieldDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendCompositeDataLeaves *op = static_cast<vtkAppendCompositeDataLeaves *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AppendFieldDataOff();
    }
    else
    {
      op->vtkAppendCompositeDataLeaves::AppendFieldDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAppendCompositeDataLeaves_Methods[] = {
  {"IsTypeOf", PyvtkAppendCompositeDataLeaves_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAppendCompositeDataLeaves_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAppendCompositeDataLeaves_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAppendCompositeDataLeaves\nC++: static vtkAppendCompositeDataLeaves *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAppendCompositeDataLeaves_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAppendCompositeDataLeaves\nC++: vtkAppendCompositeDataLeaves *NewInstance()\n\n"},
  {"SetAppendFieldData", PyvtkAppendCompositeDataLeaves_SetAppendFieldData, METH_VARARGS,
   "V.SetAppendFieldData(int)\nC++: virtual void SetAppendFieldData(vtkTypeBool _arg)\n\nSet/get whether the field data of each dataset in the composite\ndataset is copied to the output. If AppendFieldData is non-zero,\nthen field data arrays from all the inputs are added to the\noutput. If there are duplicates, the array on the first input\nencountered is taken.\n"},
  {"GetAppendFieldData", PyvtkAppendCompositeDataLeaves_GetAppendFieldData, METH_VARARGS,
   "V.GetAppendFieldData() -> int\nC++: virtual vtkTypeBool GetAppendFieldData()\n\nSet/get whether the field data of each dataset in the composite\ndataset is copied to the output. If AppendFieldData is non-zero,\nthen field data arrays from all the inputs are added to the\noutput. If there are duplicates, the array on the first input\nencountered is taken.\n"},
  {"AppendFieldDataOn", PyvtkAppendCompositeDataLeaves_AppendFieldDataOn, METH_VARARGS,
   "V.AppendFieldDataOn()\nC++: virtual void AppendFieldDataOn()\n\nSet/get whether the field data of each dataset in the composite\ndataset is copied to the output. If AppendFieldData is non-zero,\nthen field data arrays from all the inputs are added to the\noutput. If there are duplicates, the array on the first input\nencountered is taken.\n"},
  {"AppendFieldDataOff", PyvtkAppendCompositeDataLeaves_AppendFieldDataOff, METH_VARARGS,
   "V.AppendFieldDataOff()\nC++: virtual void AppendFieldDataOff()\n\nSet/get whether the field data of each dataset in the composite\ndataset is copied to the output. If AppendFieldData is non-zero,\nthen field data arrays from all the inputs are added to the\noutput. If there are duplicates, the array on the first input\nencountered is taken.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAppendCompositeDataLeaves_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkAppendCompositeDataLeaves", // tp_name
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
  PyvtkAppendCompositeDataLeaves_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAppendCompositeDataLeaves_StaticNew()
{
  return vtkAppendCompositeDataLeaves::New();
}

PyObject *PyvtkAppendCompositeDataLeaves_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAppendCompositeDataLeaves_Type, PyvtkAppendCompositeDataLeaves_Methods,
    "vtkAppendCompositeDataLeaves",
 &PyvtkAppendCompositeDataLeaves_StaticNew);

  PyTypeObject *pytype = &PyvtkAppendCompositeDataLeaves_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkCompositeDataSetAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAppendCompositeDataLeaves(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAppendCompositeDataLeaves_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAppendCompositeDataLeaves", o) != 0)
  {
    Py_DECREF(o);
  }

}

