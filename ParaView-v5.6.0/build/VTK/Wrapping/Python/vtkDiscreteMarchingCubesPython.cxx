// python wrapper for vtkDiscreteMarchingCubes
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkDiscreteMarchingCubes.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDiscreteMarchingCubes(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDiscreteMarchingCubes_ClassNew(); }

#ifndef DECLARED_PyvtkMarchingCubes_ClassNew
extern "C" { PyObject *PyvtkMarchingCubes_ClassNew(); }
#define DECLARED_PyvtkMarchingCubes_ClassNew
#endif

static const char *PyvtkDiscreteMarchingCubes_Doc =
  "vtkDiscreteMarchingCubes - generate object boundaries from labelled\nvolumes\n\n"
  "Superclass: vtkMarchingCubes\n\n"
  "takes as input a volume (e.g., 3D structured point set) of\n"
  "segmentation labels and generates on output one or more models\n"
  "representing the boundaries between the specified label and the\n"
  "adjacent structures.  One or more label values must be specified to\n"
  "generate the models.  The boundary positions are always defined to be\n"
  "half-way between adjacent voxels. This filter works best with\n"
  "integral scalar values. If ComputeScalars is on (the default), each\n"
  "output cell will have cell data that corresponds to the scalar value\n"
  "(segmentation label) of the corresponding cube. Note that this\n"
  "differs from vtkMarchingCubes, which stores the scalar value as point\n"
  "data. The rationale for this difference is that cell vertices may be\n"
  "shared between multiple cells. This also means that the resultant\n"
  "polydata may be non-manifold (cell faces may be coincident). To\n"
  "further process the polydata, users should either: 1) extract cells\n"
  "that have a common scalar value using vtkThreshold, or 2) process the\n"
  "data with filters that can handle non-manifold polydata (e.g.\n"
  "vtkWindowedSincPolyDataFilter). Also note, Normals and Gradients are\n"
  "not computed. If ComputeAdjacentScalars is on (default is off), each\n"
  "output point will have point data that contains the label value of\n"
  "the neighbouring voxel. This allows to remove regions of the\n"
  "resulting vtkPolyData that are adjacent to specific label meshes. For\n"
  "example, if the input is a label image that was created by running a\n"
  "watershed transformation on a distance map followed by masking with\n"
  "the original binary segmentation. For further details and images see\n"
  "the VTK Journal paper \"Providing values of adjacent voxel with\n"
  "vtkDiscreteMarchingCubes\" by Roman Grothausmann:\n"
  "http://hdl.handle.net/10380/3559\n"
  "http://www.vtkjournal.org/browse/publication/975\n"
  "@warning\n"
  "This filter is specialized to volumes. If you are interested in\n"
  "contouring other types of data, use the general vtkContourFilter. If\n"
  "you want to contour an image (i.e., a volume slice), use\n"
  "vtkMarchingSquares.\n"
  "@sa\n"
  "vtkContourFilter vtkSliceCubes vtkMarchingSquares vtkDividingCubes\n\n";


static PyObject *
PyvtkDiscreteMarchingCubes_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDiscreteMarchingCubes::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteMarchingCubes_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteMarchingCubes *op = static_cast<vtkDiscreteMarchingCubes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDiscreteMarchingCubes::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteMarchingCubes_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDiscreteMarchingCubes *tempr = vtkDiscreteMarchingCubes::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteMarchingCubes_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteMarchingCubes *op = static_cast<vtkDiscreteMarchingCubes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDiscreteMarchingCubes *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDiscreteMarchingCubes::NewInstance());

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
PyvtkDiscreteMarchingCubes_SetComputeAdjacentScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeAdjacentScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteMarchingCubes *op = static_cast<vtkDiscreteMarchingCubes *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeAdjacentScalars(temp0);
    }
    else
    {
      op->vtkDiscreteMarchingCubes::SetComputeAdjacentScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteMarchingCubes_GetComputeAdjacentScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeAdjacentScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteMarchingCubes *op = static_cast<vtkDiscreteMarchingCubes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComputeAdjacentScalars() :
      op->vtkDiscreteMarchingCubes::GetComputeAdjacentScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteMarchingCubes_ComputeAdjacentScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeAdjacentScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteMarchingCubes *op = static_cast<vtkDiscreteMarchingCubes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeAdjacentScalarsOn();
    }
    else
    {
      op->vtkDiscreteMarchingCubes::ComputeAdjacentScalarsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteMarchingCubes_ComputeAdjacentScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeAdjacentScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteMarchingCubes *op = static_cast<vtkDiscreteMarchingCubes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeAdjacentScalarsOff();
    }
    else
    {
      op->vtkDiscreteMarchingCubes::ComputeAdjacentScalarsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDiscreteMarchingCubes_Methods[] = {
  {"IsTypeOf", PyvtkDiscreteMarchingCubes_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDiscreteMarchingCubes_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDiscreteMarchingCubes_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDiscreteMarchingCubes\nC++: static vtkDiscreteMarchingCubes *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDiscreteMarchingCubes_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDiscreteMarchingCubes\nC++: vtkDiscreteMarchingCubes *NewInstance()\n\n"},
  {"SetComputeAdjacentScalars", PyvtkDiscreteMarchingCubes_SetComputeAdjacentScalars, METH_VARARGS,
   "V.SetComputeAdjacentScalars(int)\nC++: virtual void SetComputeAdjacentScalars(vtkTypeBool _arg)\n\nSet/Get the computation of neighbouring voxel values.\n"},
  {"GetComputeAdjacentScalars", PyvtkDiscreteMarchingCubes_GetComputeAdjacentScalars, METH_VARARGS,
   "V.GetComputeAdjacentScalars() -> int\nC++: virtual vtkTypeBool GetComputeAdjacentScalars()\n\nSet/Get the computation of neighbouring voxel values.\n"},
  {"ComputeAdjacentScalarsOn", PyvtkDiscreteMarchingCubes_ComputeAdjacentScalarsOn, METH_VARARGS,
   "V.ComputeAdjacentScalarsOn()\nC++: virtual void ComputeAdjacentScalarsOn()\n\nSet/Get the computation of neighbouring voxel values.\n"},
  {"ComputeAdjacentScalarsOff", PyvtkDiscreteMarchingCubes_ComputeAdjacentScalarsOff, METH_VARARGS,
   "V.ComputeAdjacentScalarsOff()\nC++: virtual void ComputeAdjacentScalarsOff()\n\nSet/Get the computation of neighbouring voxel values.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDiscreteMarchingCubes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkDiscreteMarchingCubes", // tp_name
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
  PyvtkDiscreteMarchingCubes_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDiscreteMarchingCubes_StaticNew()
{
  return vtkDiscreteMarchingCubes::New();
}

PyObject *PyvtkDiscreteMarchingCubes_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDiscreteMarchingCubes_Type, PyvtkDiscreteMarchingCubes_Methods,
    "vtkDiscreteMarchingCubes",
 &PyvtkDiscreteMarchingCubes_StaticNew);

  PyTypeObject *pytype = &PyvtkDiscreteMarchingCubes_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkMarchingCubes_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDiscreteMarchingCubes(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDiscreteMarchingCubes_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDiscreteMarchingCubes", o) != 0)
  {
    Py_DECREF(o);
  }

}

