// python wrapper for vtkTriangularTCoords
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
#include "vtkTriangularTCoords.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTriangularTCoords(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTriangularTCoords_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkTriangularTCoords_Doc =
  "vtkTriangularTCoords - 2D texture coordinates based for triangles.\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkTriangularTCoords is a filter that generates texture coordinates\n"
  "for triangles. Texture coordinates for each triangle are: (0,0),\n"
  "(1,0) and (.5,sqrt(3)/2). This filter assumes that the triangle\n"
  "texture map is symmetric about the center of the triangle. Thus the\n"
  "order Of the texture coordinates is not important. The procedural\n"
  "texture in vtkTriangularTexture is designed with this symmetry. For\n"
  "more information see the paper \"Opacity-modulating Triangular\n"
  "Textures for Irregular Surfaces,\"  by Penny Rheingans, IEEE\n"
  "Visualization '96, pp. 219-225.\n"
  "@sa\n"
  "vtkTriangularTexture vtkThresholdPoints vtkTextureMapToPlane\n"
  "vtkTextureMapToSphere vtkTextureMapToCylinder\n\n";


static PyObject *
PyvtkTriangularTCoords_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTriangularTCoords::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTriangularTCoords_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangularTCoords *op = static_cast<vtkTriangularTCoords *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTriangularTCoords::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTriangularTCoords_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTriangularTCoords *tempr = vtkTriangularTCoords::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTriangularTCoords_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangularTCoords *op = static_cast<vtkTriangularTCoords *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTriangularTCoords *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTriangularTCoords::NewInstance());

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

static PyMethodDef PyvtkTriangularTCoords_Methods[] = {
  {"IsTypeOf", PyvtkTriangularTCoords_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTriangularTCoords_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTriangularTCoords_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTriangularTCoords\nC++: static vtkTriangularTCoords *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTriangularTCoords_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTriangularTCoords\nC++: vtkTriangularTCoords *NewInstance()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTriangularTCoords_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersTexturePython.vtkTriangularTCoords", // tp_name
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
  PyvtkTriangularTCoords_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTriangularTCoords_StaticNew()
{
  return vtkTriangularTCoords::New();
}

PyObject *PyvtkTriangularTCoords_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTriangularTCoords_Type, PyvtkTriangularTCoords_Methods,
    "vtkTriangularTCoords",
 &PyvtkTriangularTCoords_StaticNew);

  PyTypeObject *pytype = &PyvtkTriangularTCoords_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPolyDataAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTriangularTCoords(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTriangularTCoords_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTriangularTCoords", o) != 0)
  {
    Py_DECREF(o);
  }

}

