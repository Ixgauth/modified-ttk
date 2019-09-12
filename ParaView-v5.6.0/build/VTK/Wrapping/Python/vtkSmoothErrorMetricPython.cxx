// python wrapper for vtkSmoothErrorMetric
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
#include "vtkSmoothErrorMetric.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSmoothErrorMetric(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSmoothErrorMetric_ClassNew(); }

#ifndef DECLARED_PyvtkGenericSubdivisionErrorMetric_ClassNew
extern "C" { PyObject *PyvtkGenericSubdivisionErrorMetric_ClassNew(); }
#define DECLARED_PyvtkGenericSubdivisionErrorMetric_ClassNew
#endif

static const char *PyvtkSmoothErrorMetric_Doc =
  "vtkSmoothErrorMetric - Objects that compute geometry-based error\nduring cell tessellation according to some max angle.\n\n"
  "Superclass: vtkGenericSubdivisionErrorMetric\n\n"
  "It is a concrete error metric, based on a geometric criterium: a max\n"
  "angle between the chord passing through the midpoint and one of the\n"
  "endpoints and the other chord passing through the midpoint and the\n"
  "other endpoint of the edge. It is related to the flatness of an edge.\n\n"
  "@sa\n"
  "vtkGenericCellTessellator vtkGenericSubdivisionErrorMetric\n\n";


static PyObject *
PyvtkSmoothErrorMetric_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSmoothErrorMetric::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothErrorMetric_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothErrorMetric *op = static_cast<vtkSmoothErrorMetric *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSmoothErrorMetric::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothErrorMetric_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSmoothErrorMetric *tempr = vtkSmoothErrorMetric::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothErrorMetric_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothErrorMetric *op = static_cast<vtkSmoothErrorMetric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSmoothErrorMetric *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSmoothErrorMetric::NewInstance());

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
PyvtkSmoothErrorMetric_GetAngleTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngleTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothErrorMetric *op = static_cast<vtkSmoothErrorMetric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAngleTolerance() :
      op->vtkSmoothErrorMetric::GetAngleTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothErrorMetric_SetAngleTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAngleTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothErrorMetric *op = static_cast<vtkSmoothErrorMetric *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAngleTolerance(temp0);
    }
    else
    {
      op->vtkSmoothErrorMetric::SetAngleTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothErrorMetric_RequiresEdgeSubdivision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequiresEdgeSubdivision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothErrorMetric *op = static_cast<vtkSmoothErrorMetric *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);
    ap.Save(temp2, save2, size2);

    int tempr = (ap.IsBound() ?
      op->RequiresEdgeSubdivision(temp0, temp1, temp2, temp3) :
      op->vtkSmoothErrorMetric::RequiresEdgeSubdivision(temp0, temp1, temp2, temp3));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

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
PyvtkSmoothErrorMetric_GetError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothErrorMetric *op = static_cast<vtkSmoothErrorMetric *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);
    ap.Save(temp2, save2, size2);

    double tempr = (ap.IsBound() ?
      op->GetError(temp0, temp1, temp2, temp3) :
      op->vtkSmoothErrorMetric::GetError(temp0, temp1, temp2, temp3));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

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

static PyMethodDef PyvtkSmoothErrorMetric_Methods[] = {
  {"IsTypeOf", PyvtkSmoothErrorMetric_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard VTK type and error macros.\n"},
  {"IsA", PyvtkSmoothErrorMetric_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard VTK type and error macros.\n"},
  {"SafeDownCast", PyvtkSmoothErrorMetric_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSmoothErrorMetric\nC++: static vtkSmoothErrorMetric *SafeDownCast(vtkObjectBase *o)\n\nStandard VTK type and error macros.\n"},
  {"NewInstance", PyvtkSmoothErrorMetric_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSmoothErrorMetric\nC++: vtkSmoothErrorMetric *NewInstance()\n\nStandard VTK type and error macros.\n"},
  {"GetAngleTolerance", PyvtkSmoothErrorMetric_GetAngleTolerance, METH_VARARGS,
   "V.GetAngleTolerance() -> float\nC++: double GetAngleTolerance()\n\nReturn the flatness threshold.\n\\post positive_result: result>90 && result<180\n"},
  {"SetAngleTolerance", PyvtkSmoothErrorMetric_SetAngleTolerance, METH_VARARGS,
   "V.SetAngleTolerance(float)\nC++: void SetAngleTolerance(double value)\n\nSet the flatness threshold with an angle in degrees. Internally\ncompute the cosine. value is supposed to be in ]90,180[, if not\nit is clamped in [90.1,179.9]. For instance 178 will give better\nresult than 150.\n"},
  {"RequiresEdgeSubdivision", PyvtkSmoothErrorMetric_RequiresEdgeSubdivision, METH_VARARGS,
   "V.RequiresEdgeSubdivision([float, ...], [float, ...], [float,\n    ...], float) -> int\nC++: int RequiresEdgeSubdivision(double *leftPoint,\n    double *midPoint, double *rightPoint, double alpha) override;\n\nDoes the edge need to be subdivided according to the cosine\nbetween the two chords passing through the mid-point and the\nendpoints? The edge is defined by its `leftPoint' and its\n`rightPoint'. `leftPoint', `midPoint' and `rightPoint' have to be\ninitialized before calling RequiresEdgeSubdivision(). Their\nformat is global coordinates, parametric coordinates and point\ncentered attributes: xyx rst abc de... `alpha' is the normalized\nabscissa of the midpoint along the edge. (close to 0 means close\nto the left point, close to 1 means close to the right point)\n\\pre leftPoint_exists: leftPoint!=0\n\\pre midPoint_exists: midPoint!=0\n\\pre rightPoint_exists: rightPoint!=0\n\\pre clamped_alpha: alpha>0 && alpha<1\n\\pre valid_size:\n    sizeof(leftPoint)=sizeof(midPoint)=sizeof(rightPoint)\n=GetAttributeCollection()->GetNumberOfPointCenteredComponents()+6\n"},
  {"GetError", PyvtkSmoothErrorMetric_GetError, METH_VARARGS,
   "V.GetError([float, ...], [float, ...], [float, ...], float)\n    -> float\nC++: double GetError(double *leftPoint, double *midPoint,\n    double *rightPoint, double alpha) override;\n\nReturn the error at the mid-point. It will return an error\nrelative to the bounding box size if GetRelative() is true, a\nsquare absolute error otherwise. See RequiresEdgeSubdivision()\nfor a description of the arguments.\n\\pre leftPoint_exists: leftPoint!=0\n\\pre midPoint_exists: midPoint!=0\n\\pre rightPoint_exists: rightPoint!=0\n\\pre clamped_alpha: alpha>0 && alpha<1\n\\pre valid_size:\n    sizeof(leftPoint)=sizeof(midPoint)=sizeof(rightPoint)\n=GetAttributeCollection()->GetNumberOfPointCenteredComponents()+6\n\\post positive_result: result>=0\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSmoothErrorMetric_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkSmoothErrorMetric", // tp_name
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
  PyvtkSmoothErrorMetric_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSmoothErrorMetric_StaticNew()
{
  return vtkSmoothErrorMetric::New();
}

PyObject *PyvtkSmoothErrorMetric_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSmoothErrorMetric_Type, PyvtkSmoothErrorMetric_Methods,
    "vtkSmoothErrorMetric",
 &PyvtkSmoothErrorMetric_StaticNew);

  PyTypeObject *pytype = &PyvtkSmoothErrorMetric_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkGenericSubdivisionErrorMetric_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSmoothErrorMetric(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSmoothErrorMetric_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSmoothErrorMetric", o) != 0)
  {
    Py_DECREF(o);
  }

}

