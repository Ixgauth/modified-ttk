// python wrapper for vtkProjectedTetrahedraMapper
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
#include "vtkProjectedTetrahedraMapper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkProjectedTetrahedraMapper(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkProjectedTetrahedraMapper_ClassNew(); }

#ifndef DECLARED_PyvtkUnstructuredGridVolumeMapper_ClassNew
extern "C" { PyObject *PyvtkUnstructuredGridVolumeMapper_ClassNew(); }
#define DECLARED_PyvtkUnstructuredGridVolumeMapper_ClassNew
#endif

static const char *PyvtkProjectedTetrahedraMapper_Doc =
  "vtkProjectedTetrahedraMapper - Unstructured grid volume renderer.\n\n"
  "Superclass: vtkUnstructuredGridVolumeMapper\n\n"
  "vtkProjectedTetrahedraMapper is an implementation of the classic\n"
  "Projected Tetrahedra algorithm presented by Shirley and Tuchman in \"A\n"
  "Polygonal Approximation to Direct Scalar Volume Rendering\" in\n"
  "Computer Graphics, December 1990.\n\n"
  "@bug This mapper relies highly on the implementation of the OpenGL\n"
  "pipeline. A typical hardware driver has lots of options and some\n"
  "settings can cause this mapper to produce artifacts.\n\n";


static PyObject *
PyvtkProjectedTetrahedraMapper_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkProjectedTetrahedraMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTetrahedraMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTetrahedraMapper *op = static_cast<vtkProjectedTetrahedraMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkProjectedTetrahedraMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTetrahedraMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkProjectedTetrahedraMapper *tempr = vtkProjectedTetrahedraMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTetrahedraMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTetrahedraMapper *op = static_cast<vtkProjectedTetrahedraMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProjectedTetrahedraMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkProjectedTetrahedraMapper::NewInstance());

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
PyvtkProjectedTetrahedraMapper_SetVisibilitySort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibilitySort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTetrahedraMapper *op = static_cast<vtkProjectedTetrahedraMapper *>(vp);

  vtkVisibilitySort *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVisibilitySort"))
  {
    if (ap.IsBound())
    {
      op->SetVisibilitySort(temp0);
    }
    else
    {
      op->vtkProjectedTetrahedraMapper::SetVisibilitySort(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTetrahedraMapper_GetVisibilitySort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisibilitySort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTetrahedraMapper *op = static_cast<vtkProjectedTetrahedraMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVisibilitySort *tempr = (ap.IsBound() ?
      op->GetVisibilitySort() :
      op->vtkProjectedTetrahedraMapper::GetVisibilitySort());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTetrahedraMapper_MapScalarsToColors(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "MapScalarsToColors");

  vtkDataArray *temp0 = nullptr;
  vtkVolumeProperty *temp1 = nullptr;
  vtkDataArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkVolumeProperty") &&
      ap.GetVTKObject(temp2, "vtkDataArray"))
  {
    vtkProjectedTetrahedraMapper::MapScalarsToColors(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTetrahedraMapper_TransformPoints(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TransformPoints");

  vtkPoints *temp0 = nullptr;
  const size_t size1 = 16;
  float temp1[16];
  const size_t size2 = 16;
  float temp2[16];
  vtkFloatArray *temp3 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetVTKObject(temp3, "vtkFloatArray"))
  {
    vtkProjectedTetrahedraMapper::TransformPoints(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTetrahedraMapper_IsSupported(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsSupported");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTetrahedraMapper *op = static_cast<vtkProjectedTetrahedraMapper *>(vp);

  vtkRenderWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
  {
    bool tempr = (ap.IsBound() ?
      op->IsSupported(temp0) :
      op->vtkProjectedTetrahedraMapper::IsSupported(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkProjectedTetrahedraMapper_Methods[] = {
  {"IsTypeOf", PyvtkProjectedTetrahedraMapper_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkProjectedTetrahedraMapper_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkProjectedTetrahedraMapper_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkProjectedTetrahedraMapper\nC++: static vtkProjectedTetrahedraMapper *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkProjectedTetrahedraMapper_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkProjectedTetrahedraMapper\nC++: vtkProjectedTetrahedraMapper *NewInstance()\n\n"},
  {"SetVisibilitySort", PyvtkProjectedTetrahedraMapper_SetVisibilitySort, METH_VARARGS,
   "V.SetVisibilitySort(vtkVisibilitySort)\nC++: virtual void SetVisibilitySort(vtkVisibilitySort *sort)\n\n"},
  {"GetVisibilitySort", PyvtkProjectedTetrahedraMapper_GetVisibilitySort, METH_VARARGS,
   "V.GetVisibilitySort() -> vtkVisibilitySort\nC++: virtual vtkVisibilitySort *GetVisibilitySort()\n\n"},
  {"MapScalarsToColors", PyvtkProjectedTetrahedraMapper_MapScalarsToColors, METH_VARARGS,
   "V.MapScalarsToColors(vtkDataArray, vtkVolumeProperty,\n    vtkDataArray)\nC++: static void MapScalarsToColors(vtkDataArray *colors,\n    vtkVolumeProperty *property, vtkDataArray *scalars)\n\n"},
  {"TransformPoints", PyvtkProjectedTetrahedraMapper_TransformPoints, METH_VARARGS,
   "V.TransformPoints(vtkPoints, (float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float), (float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float), vtkFloatArray)\nC++: static void TransformPoints(vtkPoints *inPoints,\n    const float projection_mat[16], const float modelview_mat[16],\n     vtkFloatArray *outPoints)\n\n"},
  {"IsSupported", PyvtkProjectedTetrahedraMapper_IsSupported, METH_VARARGS,
   "V.IsSupported(vtkRenderWindow) -> bool\nC++: virtual bool IsSupported(vtkRenderWindow *)\n\nReturn true if the rendering context provides the nececessary\nfunctionality to use this class.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkProjectedTetrahedraMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingVolumePython.vtkProjectedTetrahedraMapper", // tp_name
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
  PyvtkProjectedTetrahedraMapper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkProjectedTetrahedraMapper_StaticNew()
{
  return vtkProjectedTetrahedraMapper::New();
}

PyObject *PyvtkProjectedTetrahedraMapper_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkProjectedTetrahedraMapper_Type, PyvtkProjectedTetrahedraMapper_Methods,
    "vtkProjectedTetrahedraMapper",
 &PyvtkProjectedTetrahedraMapper_StaticNew);

  PyTypeObject *pytype = &PyvtkProjectedTetrahedraMapper_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkUnstructuredGridVolumeMapper_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkProjectedTetrahedraMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkProjectedTetrahedraMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkProjectedTetrahedraMapper", o) != 0)
  {
    Py_DECREF(o);
  }

}

