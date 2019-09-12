// python wrapper for vtkUnstructuredGridBunykRayCastFunction
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
#include "vtkUnstructuredGridBunykRayCastFunction.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkUnstructuredGridBunykRayCastFunction(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkUnstructuredGridBunykRayCastFunction_ClassNew(); }

#ifndef DECLARED_PyvtkUnstructuredGridVolumeRayCastFunction_ClassNew
extern "C" { PyObject *PyvtkUnstructuredGridVolumeRayCastFunction_ClassNew(); }
#define DECLARED_PyvtkUnstructuredGridVolumeRayCastFunction_ClassNew
#endif

static const char *PyvtkUnstructuredGridBunykRayCastFunction_Doc =
  "vtkUnstructuredGridBunykRayCastFunction - a superclass for ray\ncasting functions\n\n"
  "Superclass: vtkUnstructuredGridVolumeRayCastFunction\n\n"
  "vtkUnstructuredGridBunykRayCastFunction is a concrete implementation\n"
  "of a ray cast function for unstructured grid data. This class was\n"
  "based on the paper \"Simple, Fast, Robust Ray Casting of Irregular\n"
  "Grids\" by Paul Bunyk, Arie Kaufmna, and Claudio Silva. This method is\n"
  "quite memory intensive (with extra explicit copies of the data) and\n"
  "therefore should not be used for very large data. This method assumes\n"
  "that the input data is composed entirely of tetras - use\n"
  "vtkDataSetTriangleFilter before setting the input on the mapper.\n\n"
  "The basic idea of this method is as follows:\n\n"
  "1) Enumerate the triangles. At each triangle have space for some\n"
  "   information that will be used during rendering. This includes\n"
  "   which tetra the triangles belong to, the plane equation and the\n"
  "   Barycentric coefficients.\n\n"
  "2) Keep a reference to all four triangles for each tetra.\n\n"
  "3) At the beginning of each render, do the precomputation. This\n"
  "   includes creating an array of transformed points (in view\n"
  "   coordinates) and computing the view dependent info per triangle\n"
  "   (plane equations and barycentric coords in view space)\n\n"
  "4) Find all front facing boundary triangles (a triangle is on the\n"
  "   boundary if it belongs to only one tetra). For each triangle, find\n"
  "all pixels in the image that intersect the triangle, and add this to\n"
  "   the sorted (by depth) intersection list at each pixel.\n\n"
  "5) For each ray cast, traverse the intersection list. At each\n"
  "   intersection, accumulate opacity and color contribution per tetra\n"
  "   along the ray until you reach an exiting triangle (on the\n"
  "   boundary).\n\n"
  "@sa\n"
  "vtkUnstructuredGridVolumeRayCastMapper\n\n";


static PyObject *
PyvtkUnstructuredGridBunykRayCastFunction_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkUnstructuredGridBunykRayCastFunction::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridBunykRayCastFunction_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridBunykRayCastFunction *op = static_cast<vtkUnstructuredGridBunykRayCastFunction *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkUnstructuredGridBunykRayCastFunction::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridBunykRayCastFunction_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkUnstructuredGridBunykRayCastFunction *tempr = vtkUnstructuredGridBunykRayCastFunction::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridBunykRayCastFunction_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridBunykRayCastFunction *op = static_cast<vtkUnstructuredGridBunykRayCastFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnstructuredGridBunykRayCastFunction *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkUnstructuredGridBunykRayCastFunction::NewInstance());

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
PyvtkUnstructuredGridBunykRayCastFunction_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridBunykRayCastFunction *op = static_cast<vtkUnstructuredGridBunykRayCastFunction *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkVolume *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume"))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0, temp1);
    }
    else
    {
      op->vtkUnstructuredGridBunykRayCastFunction::Initialize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridBunykRayCastFunction_Finalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridBunykRayCastFunction *op = static_cast<vtkUnstructuredGridBunykRayCastFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Finalize();
    }
    else
    {
      op->vtkUnstructuredGridBunykRayCastFunction::Finalize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridBunykRayCastFunction_NewIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridBunykRayCastFunction *op = static_cast<vtkUnstructuredGridBunykRayCastFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnstructuredGridVolumeRayCastIterator *tempr = (ap.IsBound() ?
      op->NewIterator() :
      op->vtkUnstructuredGridBunykRayCastFunction::NewIterator());

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
PyvtkUnstructuredGridBunykRayCastFunction_GetPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridBunykRayCastFunction *op = static_cast<vtkUnstructuredGridBunykRayCastFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPoints() :
      op->vtkUnstructuredGridBunykRayCastFunction::GetPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridBunykRayCastFunction_GetViewToWorldMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewToWorldMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridBunykRayCastFunction *op = static_cast<vtkUnstructuredGridBunykRayCastFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetViewToWorldMatrix() :
      op->vtkUnstructuredGridBunykRayCastFunction::GetViewToWorldMatrix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridBunykRayCastFunction_GetImageOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridBunykRayCastFunction *op = static_cast<vtkUnstructuredGridBunykRayCastFunction *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetImageOrigin() :
      op->vtkUnstructuredGridBunykRayCastFunction::GetImageOrigin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridBunykRayCastFunction_GetImageViewportSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageViewportSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridBunykRayCastFunction *op = static_cast<vtkUnstructuredGridBunykRayCastFunction *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetImageViewportSize() :
      op->vtkUnstructuredGridBunykRayCastFunction::GetImageViewportSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkUnstructuredGridBunykRayCastFunction_Methods[] = {
  {"IsTypeOf", PyvtkUnstructuredGridBunykRayCastFunction_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkUnstructuredGridBunykRayCastFunction_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkUnstructuredGridBunykRayCastFunction_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkUnstructuredGridBunykRayCastFunction\nC++: static vtkUnstructuredGridBunykRayCastFunction *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkUnstructuredGridBunykRayCastFunction_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkUnstructuredGridBunykRayCastFunction\nC++: vtkUnstructuredGridBunykRayCastFunction *NewInstance()\n\n"},
  {"Initialize", PyvtkUnstructuredGridBunykRayCastFunction_Initialize, METH_VARARGS,
   "V.Initialize(vtkRenderer, vtkVolume)\nC++: void Initialize(vtkRenderer *ren, vtkVolume *vol) override;\n\nCalled by the ray cast mapper at the start of rendering\n"},
  {"Finalize", PyvtkUnstructuredGridBunykRayCastFunction_Finalize, METH_VARARGS,
   "V.Finalize()\nC++: void Finalize() override;\n\nCalled by the ray cast mapper at the end of rendering\n"},
  {"NewIterator", PyvtkUnstructuredGridBunykRayCastFunction_NewIterator, METH_VARARGS,
   "V.NewIterator() -> vtkUnstructuredGridVolumeRayCastIterator\nC++: vtkUnstructuredGridVolumeRayCastIterator *NewIterator()\n    override;\n\nReturns a new object that will iterate over all the intersections\nof a ray with the cells of the input.  The calling code is\nresponsible for deleting the returned object.\n"},
  {"GetPoints", PyvtkUnstructuredGridBunykRayCastFunction_GetPoints, METH_VARARGS,
   "V.GetPoints() -> (float, ...)\nC++: double *GetPoints()\n\nAccess to an internal structure for the templated method.\n"},
  {"GetViewToWorldMatrix", PyvtkUnstructuredGridBunykRayCastFunction_GetViewToWorldMatrix, METH_VARARGS,
   "V.GetViewToWorldMatrix() -> vtkMatrix4x4\nC++: virtual vtkMatrix4x4 *GetViewToWorldMatrix()\n\nAccess to an internal structure for the templated method.\n"},
  {"GetImageOrigin", PyvtkUnstructuredGridBunykRayCastFunction_GetImageOrigin, METH_VARARGS,
   "V.GetImageOrigin() -> (int, int)\nC++: int *GetImageOrigin()\n\nAccess to an internal structure for the templated method.\n"},
  {"GetImageViewportSize", PyvtkUnstructuredGridBunykRayCastFunction_GetImageViewportSize, METH_VARARGS,
   "V.GetImageViewportSize() -> (int, int)\nC++: int *GetImageViewportSize()\n\nAccess to an internal structure for the templated method.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkUnstructuredGridBunykRayCastFunction_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingVolumePython.vtkUnstructuredGridBunykRayCastFunction", // tp_name
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
  PyvtkUnstructuredGridBunykRayCastFunction_Doc, // tp_doc
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

static vtkObjectBase *PyvtkUnstructuredGridBunykRayCastFunction_StaticNew()
{
  return vtkUnstructuredGridBunykRayCastFunction::New();
}

PyObject *PyvtkUnstructuredGridBunykRayCastFunction_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkUnstructuredGridBunykRayCastFunction_Type, PyvtkUnstructuredGridBunykRayCastFunction_Methods,
    "vtkUnstructuredGridBunykRayCastFunction",
 &PyvtkUnstructuredGridBunykRayCastFunction_StaticNew);

  PyTypeObject *pytype = &PyvtkUnstructuredGridBunykRayCastFunction_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkUnstructuredGridVolumeRayCastFunction_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkUnstructuredGridBunykRayCastFunction(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkUnstructuredGridBunykRayCastFunction_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkUnstructuredGridBunykRayCastFunction", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_BUNYKRCF_MAX_ARRAYS", 10000 },
        { "VTK_BUNYKRCF_ARRAY_SIZE", 10000 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

