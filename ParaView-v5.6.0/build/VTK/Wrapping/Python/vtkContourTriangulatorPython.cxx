// python wrapper for vtkContourTriangulator
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
#include "vtkContourTriangulator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkContourTriangulator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkContourTriangulator_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkContourTriangulator_Doc =
  "vtkContourTriangulator - Fill all 2D contours to create polygons\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkContourTriangulator will generate triangles to fill all of the 2D\n"
  "contours in its input.  The contours may be concave, and may even\n"
  "contain holes i.e. a contour may contain an internal contour that is\n"
  "wound in the opposite direction to indicate that it is a hole.\n"
  "@warning\n"
  "The triangulation of is done in O(n) time for simple convex inputs,\n"
  "but for non-convex inputs the worst-case time is O(n^2*m^2) where n\n"
  "is the number of points and m is the number of holes. The best\n"
  "triangulation algorithms, in contrast, are O(n log n). The resulting\n"
  "triangles may be quite narrow, the algorithm does not attempt to\n"
  "produce high-quality triangles.@par Thanks: Thanks to David Gobbi for\n"
  "contributing this class to VTK.\n\n";


static PyObject *
PyvtkContourTriangulator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkContourTriangulator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourTriangulator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourTriangulator *op = static_cast<vtkContourTriangulator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkContourTriangulator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourTriangulator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkContourTriangulator *tempr = vtkContourTriangulator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourTriangulator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourTriangulator *op = static_cast<vtkContourTriangulator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkContourTriangulator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkContourTriangulator::NewInstance());

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
PyvtkContourTriangulator_GetTriangulationError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTriangulationError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourTriangulator *op = static_cast<vtkContourTriangulator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTriangulationError() :
      op->vtkContourTriangulator::GetTriangulationError());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourTriangulator_SetTriangulationErrorDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangulationErrorDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourTriangulator *op = static_cast<vtkContourTriangulator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTriangulationErrorDisplay(temp0);
    }
    else
    {
      op->vtkContourTriangulator::SetTriangulationErrorDisplay(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourTriangulator_TriangulationErrorDisplayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TriangulationErrorDisplayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourTriangulator *op = static_cast<vtkContourTriangulator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TriangulationErrorDisplayOn();
    }
    else
    {
      op->vtkContourTriangulator::TriangulationErrorDisplayOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourTriangulator_TriangulationErrorDisplayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TriangulationErrorDisplayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourTriangulator *op = static_cast<vtkContourTriangulator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TriangulationErrorDisplayOff();
    }
    else
    {
      op->vtkContourTriangulator::TriangulationErrorDisplayOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourTriangulator_GetTriangulationErrorDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTriangulationErrorDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourTriangulator *op = static_cast<vtkContourTriangulator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTriangulationErrorDisplay() :
      op->vtkContourTriangulator::GetTriangulationErrorDisplay());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourTriangulator_TriangulatePolygon(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TriangulatePolygon");

  vtkIdList *temp0 = nullptr;
  vtkPoints *temp1 = nullptr;
  vtkCellArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkIdList") &&
      ap.GetVTKObject(temp1, "vtkPoints") &&
      ap.GetVTKObject(temp2, "vtkCellArray"))
  {
    int tempr = vtkContourTriangulator::TriangulatePolygon(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourTriangulator_TriangulateContours(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TriangulateContours");

  vtkPolyData *temp0 = nullptr;
  vtkIdType temp1;
  vtkIdType temp2;
  vtkCellArray *temp3 = nullptr;
  const size_t size4 = 3;
  double temp4[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkPolyData") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetArray(temp4, size4))
  {
    int tempr = vtkContourTriangulator::TriangulateContours(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkContourTriangulator_Methods[] = {
  {"IsTypeOf", PyvtkContourTriangulator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkContourTriangulator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkContourTriangulator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkContourTriangulator\nC++: static vtkContourTriangulator *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkContourTriangulator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkContourTriangulator\nC++: vtkContourTriangulator *NewInstance()\n\n"},
  {"GetTriangulationError", PyvtkContourTriangulator_GetTriangulationError, METH_VARARGS,
   "V.GetTriangulationError() -> int\nC++: virtual int GetTriangulationError()\n\nCheck if there was a triangulation failure in the last update.\n"},
  {"SetTriangulationErrorDisplay", PyvtkContourTriangulator_SetTriangulationErrorDisplay, METH_VARARGS,
   "V.SetTriangulationErrorDisplay(int)\nC++: virtual void SetTriangulationErrorDisplay(vtkTypeBool _arg)\n\nGenerate errors when the triangulation fails. Note that\ntriangulation failures are often minor, because they involve tiny\ntriangles that are too small to see.\n"},
  {"TriangulationErrorDisplayOn", PyvtkContourTriangulator_TriangulationErrorDisplayOn, METH_VARARGS,
   "V.TriangulationErrorDisplayOn()\nC++: virtual void TriangulationErrorDisplayOn()\n\nGenerate errors when the triangulation fails. Note that\ntriangulation failures are often minor, because they involve tiny\ntriangles that are too small to see.\n"},
  {"TriangulationErrorDisplayOff", PyvtkContourTriangulator_TriangulationErrorDisplayOff, METH_VARARGS,
   "V.TriangulationErrorDisplayOff()\nC++: virtual void TriangulationErrorDisplayOff()\n\nGenerate errors when the triangulation fails. Note that\ntriangulation failures are often minor, because they involve tiny\ntriangles that are too small to see.\n"},
  {"GetTriangulationErrorDisplay", PyvtkContourTriangulator_GetTriangulationErrorDisplay, METH_VARARGS,
   "V.GetTriangulationErrorDisplay() -> int\nC++: virtual vtkTypeBool GetTriangulationErrorDisplay()\n\nGenerate errors when the triangulation fails. Note that\ntriangulation failures are often minor, because they involve tiny\ntriangles that are too small to see.\n"},
  {"TriangulatePolygon", PyvtkContourTriangulator_TriangulatePolygon, METH_VARARGS,
   "V.TriangulatePolygon(vtkIdList, vtkPoints, vtkCellArray) -> int\nC++: static int TriangulatePolygon(vtkIdList *polygon,\n    vtkPoints *points, vtkCellArray *triangles)\n\nA robust method for triangulating a polygon. It cleans up the\npolygon and then applies the ear-cut triangulation. A zero return\nvalue indicates that triangulation failed.\n"},
  {"TriangulateContours", PyvtkContourTriangulator_TriangulateContours, METH_VARARGS,
   "V.TriangulateContours(vtkPolyData, int, int, vtkCellArray, (float,\n     float, float)) -> int\nC++: static int TriangulateContours(vtkPolyData *data,\n    vtkIdType firstLine, vtkIdType numLines,\n    vtkCellArray *outputPolys, const double normal[3])\n\nGiven some closed contour lines, create a triangle mesh that\nfills those lines.  The input lines must be single-segment lines,\nnot polylines.  The input lines do not have to be in order. Only\nnumLines starting from firstLine will be used.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkContourTriangulator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkContourTriangulator", // tp_name
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
  PyvtkContourTriangulator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkContourTriangulator_StaticNew()
{
  return vtkContourTriangulator::New();
}

PyObject *PyvtkContourTriangulator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkContourTriangulator_Type, PyvtkContourTriangulator_Methods,
    "vtkContourTriangulator",
 &PyvtkContourTriangulator_StaticNew);

  PyTypeObject *pytype = &PyvtkContourTriangulator_Type;

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

void PyVTKAddFile_vtkContourTriangulator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkContourTriangulator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkContourTriangulator", o) != 0)
  {
    Py_DECREF(o);
  }

}

