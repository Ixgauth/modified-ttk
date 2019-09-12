// python wrapper for vtkImageCityBlockDistance
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkImageCityBlockDistance.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageCityBlockDistance(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageCityBlockDistance_ClassNew(); }

#ifndef DECLARED_PyvtkImageDecomposeFilter_ClassNew
extern "C" { PyObject *PyvtkImageDecomposeFilter_ClassNew(); }
#define DECLARED_PyvtkImageDecomposeFilter_ClassNew
#endif

static const char *PyvtkImageCityBlockDistance_Doc =
  "vtkImageCityBlockDistance - 1,2 or 3D distance map.\n\n"
  "Superclass: vtkImageDecomposeFilter\n\n"
  "vtkImageCityBlockDistance creates a distance map using the city block\n"
  "(Manhatten) distance measure.  The input is a mask.  Zero values are\n"
  "considered boundaries.  The output pixel is the minimum of the input\n"
  "pixel and the distance to a boundary (or neighbor value + 1 unit).\n"
  "distance values are calculated in pixels. The filter works by taking\n"
  "6 passes (for 3d distance map): 2 along each axis (forward and\n"
  "backward). Each pass keeps a running minimum distance. For some\n"
  "reason, I preserve the sign if the distance.  If the input mask is\n"
  "initially negative, the output distances will be negative. Distances\n"
  "maps can have inside (negative regions) and outsides (positive\n"
  "regions).\n\n";


static PyObject *
PyvtkImageCityBlockDistance_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageCityBlockDistance::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCityBlockDistance_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCityBlockDistance *op = static_cast<vtkImageCityBlockDistance *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageCityBlockDistance::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCityBlockDistance_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageCityBlockDistance *tempr = vtkImageCityBlockDistance::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCityBlockDistance_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCityBlockDistance *op = static_cast<vtkImageCityBlockDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageCityBlockDistance *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageCityBlockDistance::NewInstance());

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

static PyMethodDef PyvtkImageCityBlockDistance_Methods[] = {
  {"IsTypeOf", PyvtkImageCityBlockDistance_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nConstruct an instance of vtkImageDecomposeFilter filter with\ndefault dimensionality 3.\n"},
  {"IsA", PyvtkImageCityBlockDistance_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nConstruct an instance of vtkImageDecomposeFilter filter with\ndefault dimensionality 3.\n"},
  {"SafeDownCast", PyvtkImageCityBlockDistance_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageCityBlockDistance\nC++: static vtkImageCityBlockDistance *SafeDownCast(\n    vtkObjectBase *o)\n\nConstruct an instance of vtkImageDecomposeFilter filter with\ndefault dimensionality 3.\n"},
  {"NewInstance", PyvtkImageCityBlockDistance_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageCityBlockDistance\nC++: vtkImageCityBlockDistance *NewInstance()\n\nConstruct an instance of vtkImageDecomposeFilter filter with\ndefault dimensionality 3.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageCityBlockDistance_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingGeneralPython.vtkImageCityBlockDistance", // tp_name
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
  PyvtkImageCityBlockDistance_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageCityBlockDistance_StaticNew()
{
  return vtkImageCityBlockDistance::New();
}

PyObject *PyvtkImageCityBlockDistance_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageCityBlockDistance_Type, PyvtkImageCityBlockDistance_Methods,
    "vtkImageCityBlockDistance",
 &PyvtkImageCityBlockDistance_StaticNew);

  PyTypeObject *pytype = &PyvtkImageCityBlockDistance_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImageDecomposeFilter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageCityBlockDistance(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageCityBlockDistance_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageCityBlockDistance", o) != 0)
  {
    Py_DECREF(o);
  }

}

