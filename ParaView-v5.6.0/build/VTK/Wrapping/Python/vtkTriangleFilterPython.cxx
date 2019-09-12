// python wrapper for vtkTriangleFilter
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
#include "vtkTriangleFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTriangleFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTriangleFilter_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkTriangleFilter_Doc =
  "vtkTriangleFilter - convert input polygons and strips to triangles\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkTriangleFilter generates triangles from input polygons and\n"
  "triangle strips.  It also generates line segments from polylines\n"
  "unless PassLines is off, and generates individual vertex cells from\n"
  "vtkVertex point lists unless PassVerts is off.\n\n";


static PyObject *
PyvtkTriangleFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTriangleFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTriangleFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangleFilter *op = static_cast<vtkTriangleFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTriangleFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTriangleFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTriangleFilter *tempr = vtkTriangleFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTriangleFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangleFilter *op = static_cast<vtkTriangleFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTriangleFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTriangleFilter::NewInstance());

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
PyvtkTriangleFilter_PassVertsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassVertsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangleFilter *op = static_cast<vtkTriangleFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassVertsOn();
    }
    else
    {
      op->vtkTriangleFilter::PassVertsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTriangleFilter_PassVertsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassVertsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangleFilter *op = static_cast<vtkTriangleFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassVertsOff();
    }
    else
    {
      op->vtkTriangleFilter::PassVertsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTriangleFilter_SetPassVerts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassVerts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangleFilter *op = static_cast<vtkTriangleFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassVerts(temp0);
    }
    else
    {
      op->vtkTriangleFilter::SetPassVerts(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTriangleFilter_GetPassVerts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassVerts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangleFilter *op = static_cast<vtkTriangleFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPassVerts() :
      op->vtkTriangleFilter::GetPassVerts());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTriangleFilter_PassLinesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassLinesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangleFilter *op = static_cast<vtkTriangleFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassLinesOn();
    }
    else
    {
      op->vtkTriangleFilter::PassLinesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTriangleFilter_PassLinesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassLinesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangleFilter *op = static_cast<vtkTriangleFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassLinesOff();
    }
    else
    {
      op->vtkTriangleFilter::PassLinesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTriangleFilter_SetPassLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangleFilter *op = static_cast<vtkTriangleFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassLines(temp0);
    }
    else
    {
      op->vtkTriangleFilter::SetPassLines(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTriangleFilter_GetPassLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangleFilter *op = static_cast<vtkTriangleFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPassLines() :
      op->vtkTriangleFilter::GetPassLines());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTriangleFilter_Methods[] = {
  {"IsTypeOf", PyvtkTriangleFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTriangleFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTriangleFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTriangleFilter\nC++: static vtkTriangleFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTriangleFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTriangleFilter\nC++: vtkTriangleFilter *NewInstance()\n\n"},
  {"PassVertsOn", PyvtkTriangleFilter_PassVertsOn, METH_VARARGS,
   "V.PassVertsOn()\nC++: virtual void PassVertsOn()\n\nTurn on/off passing vertices through filter (default: on). If\nthis is on, then the input vertex cells will be broken into\nindividual vertex cells (one point per cell).  If it is off, the\ninput vertex cells will be ignored.\n"},
  {"PassVertsOff", PyvtkTriangleFilter_PassVertsOff, METH_VARARGS,
   "V.PassVertsOff()\nC++: virtual void PassVertsOff()\n\nTurn on/off passing vertices through filter (default: on). If\nthis is on, then the input vertex cells will be broken into\nindividual vertex cells (one point per cell).  If it is off, the\ninput vertex cells will be ignored.\n"},
  {"SetPassVerts", PyvtkTriangleFilter_SetPassVerts, METH_VARARGS,
   "V.SetPassVerts(int)\nC++: virtual void SetPassVerts(vtkTypeBool _arg)\n\nTurn on/off passing vertices through filter (default: on). If\nthis is on, then the input vertex cells will be broken into\nindividual vertex cells (one point per cell).  If it is off, the\ninput vertex cells will be ignored.\n"},
  {"GetPassVerts", PyvtkTriangleFilter_GetPassVerts, METH_VARARGS,
   "V.GetPassVerts() -> int\nC++: virtual vtkTypeBool GetPassVerts()\n\nTurn on/off passing vertices through filter (default: on). If\nthis is on, then the input vertex cells will be broken into\nindividual vertex cells (one point per cell).  If it is off, the\ninput vertex cells will be ignored.\n"},
  {"PassLinesOn", PyvtkTriangleFilter_PassLinesOn, METH_VARARGS,
   "V.PassLinesOn()\nC++: virtual void PassLinesOn()\n\nTurn on/off passing lines through filter (default: on). If this\nis on, then the input polylines will be broken into line\nsegments.  If it is off, then the input lines will be ignored and\nthe output will have no lines.\n"},
  {"PassLinesOff", PyvtkTriangleFilter_PassLinesOff, METH_VARARGS,
   "V.PassLinesOff()\nC++: virtual void PassLinesOff()\n\nTurn on/off passing lines through filter (default: on). If this\nis on, then the input polylines will be broken into line\nsegments.  If it is off, then the input lines will be ignored and\nthe output will have no lines.\n"},
  {"SetPassLines", PyvtkTriangleFilter_SetPassLines, METH_VARARGS,
   "V.SetPassLines(int)\nC++: virtual void SetPassLines(vtkTypeBool _arg)\n\nTurn on/off passing lines through filter (default: on). If this\nis on, then the input polylines will be broken into line\nsegments.  If it is off, then the input lines will be ignored and\nthe output will have no lines.\n"},
  {"GetPassLines", PyvtkTriangleFilter_GetPassLines, METH_VARARGS,
   "V.GetPassLines() -> int\nC++: virtual vtkTypeBool GetPassLines()\n\nTurn on/off passing lines through filter (default: on). If this\nis on, then the input polylines will be broken into line\nsegments.  If it is off, then the input lines will be ignored and\nthe output will have no lines.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTriangleFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkTriangleFilter", // tp_name
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
  PyvtkTriangleFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTriangleFilter_StaticNew()
{
  return vtkTriangleFilter::New();
}

PyObject *PyvtkTriangleFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTriangleFilter_Type, PyvtkTriangleFilter_Methods,
    "vtkTriangleFilter",
 &PyvtkTriangleFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkTriangleFilter_Type;

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

void PyVTKAddFile_vtkTriangleFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTriangleFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTriangleFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

