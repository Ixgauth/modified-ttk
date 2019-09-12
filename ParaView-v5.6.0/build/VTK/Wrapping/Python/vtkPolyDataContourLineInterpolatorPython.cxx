// python wrapper for vtkPolyDataContourLineInterpolator
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
#include "vtkPolyDataContourLineInterpolator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPolyDataContourLineInterpolator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPolyDataContourLineInterpolator_ClassNew(); }

#ifndef DECLARED_PyvtkContourLineInterpolator_ClassNew
extern "C" { PyObject *PyvtkContourLineInterpolator_ClassNew(); }
#define DECLARED_PyvtkContourLineInterpolator_ClassNew
#endif

static const char *PyvtkPolyDataContourLineInterpolator_Doc =
  "vtkPolyDataContourLineInterpolator - Contour interpolator for\npolygonal data\n\n"
  "Superclass: vtkContourLineInterpolator\n\n"
  "vtkPolyDataContourLineInterpolator is an abstract base class for\n"
  "contour line interpolators that interpolate on polygonal data.\n\n";


static PyObject *
PyvtkPolyDataContourLineInterpolator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPolyDataContourLineInterpolator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataContourLineInterpolator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataContourLineInterpolator *op = static_cast<vtkPolyDataContourLineInterpolator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPolyDataContourLineInterpolator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataContourLineInterpolator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPolyDataContourLineInterpolator *tempr = vtkPolyDataContourLineInterpolator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataContourLineInterpolator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataContourLineInterpolator *op = static_cast<vtkPolyDataContourLineInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyDataContourLineInterpolator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPolyDataContourLineInterpolator::NewInstance());

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
PyvtkPolyDataContourLineInterpolator_InterpolateLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataContourLineInterpolator *op = static_cast<vtkPolyDataContourLineInterpolator *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkContourRepresentation *temp1 = nullptr;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkContourRepresentation") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = op->InterpolateLine(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataContourLineInterpolator_UpdateNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataContourLineInterpolator *op = static_cast<vtkPolyDataContourLineInterpolator *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkContourRepresentation *temp1 = nullptr;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  int temp3;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkContourRepresentation") &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp2, save2, size2);

    int tempr = op->UpdateNode(temp0, temp1, temp2, temp3);

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataContourLineInterpolator_GetPolys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataContourLineInterpolator *op = static_cast<vtkPolyDataContourLineInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyDataCollection *tempr = (ap.IsBound() ?
      op->GetPolys() :
      op->vtkPolyDataContourLineInterpolator::GetPolys());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPolyDataContourLineInterpolator_Methods[] = {
  {"IsTypeOf", PyvtkPolyDataContourLineInterpolator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instances of this class.\n"},
  {"IsA", PyvtkPolyDataContourLineInterpolator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instances of this class.\n"},
  {"SafeDownCast", PyvtkPolyDataContourLineInterpolator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkPolyDataContourLineInterpolator\nC++: static vtkPolyDataContourLineInterpolator *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard methods for instances of this class.\n"},
  {"NewInstance", PyvtkPolyDataContourLineInterpolator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPolyDataContourLineInterpolator\nC++: vtkPolyDataContourLineInterpolator *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {"InterpolateLine", PyvtkPolyDataContourLineInterpolator_InterpolateLine, METH_VARARGS,
   "V.InterpolateLine(vtkRenderer, vtkContourRepresentation, int, int)\n     -> int\nC++: int InterpolateLine(vtkRenderer *ren,\n    vtkContourRepresentation *rep, int idx1, int idx2)\n    override = 0;\n\nSubclasses that wish to interpolate a line segment must implement\nthis. For instance vtkBezierContourLineInterpolator adds nodes\nbetween idx1 and idx2, that allow the contour to adhere to a\nbezier curve.\n"},
  {"UpdateNode", PyvtkPolyDataContourLineInterpolator_UpdateNode, METH_VARARGS,
   "V.UpdateNode(vtkRenderer, vtkContourRepresentation, [float, ...],\n    int) -> int\nC++: int UpdateNode(vtkRenderer *, vtkContourRepresentation *,\n    double *node, int idx) override = 0;\n\nThe interpolator is given a chance to update the node.\nvtkImageContourLineInterpolator updates the idx'th node in the\ncontour, so it automatically sticks to edges in the vicinity as\nthe user constructs the contour. Returns 0 if the node (world\nposition) is unchanged.\n"},
  {"GetPolys", PyvtkPolyDataContourLineInterpolator_GetPolys, METH_VARARGS,
   "V.GetPolys() -> vtkPolyDataCollection\nC++: virtual vtkPolyDataCollection *GetPolys()\n\nBe sure to add polydata on which you wish to place points to this\nlist or they will not be considered for placement.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPolyDataContourLineInterpolator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkPolyDataContourLineInterpolator", // tp_name
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
  PyvtkPolyDataContourLineInterpolator_Doc, // tp_doc
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

PyObject *PyvtkPolyDataContourLineInterpolator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPolyDataContourLineInterpolator_Type, PyvtkPolyDataContourLineInterpolator_Methods,
    "vtkPolyDataContourLineInterpolator",
 nullptr);

  PyTypeObject *pytype = &PyvtkPolyDataContourLineInterpolator_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkContourLineInterpolator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPolyDataContourLineInterpolator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPolyDataContourLineInterpolator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPolyDataContourLineInterpolator", o) != 0)
  {
    Py_DECREF(o);
  }

}

