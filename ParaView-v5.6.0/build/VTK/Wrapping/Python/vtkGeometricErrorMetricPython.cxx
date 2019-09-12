// python wrapper for vtkGeometricErrorMetric
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
#include "vtkGeometricErrorMetric.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGeometricErrorMetric(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkGeometricErrorMetric_ClassNew(); }

#ifndef DECLARED_PyvtkGenericSubdivisionErrorMetric_ClassNew
extern "C" { PyObject *PyvtkGenericSubdivisionErrorMetric_ClassNew(); }
#define DECLARED_PyvtkGenericSubdivisionErrorMetric_ClassNew
#endif

static const char *PyvtkGeometricErrorMetric_Doc =
  "vtkGeometricErrorMetric - Objects that compute geometry-based error\nduring cell tessellation.\n\n"
  "Superclass: vtkGenericSubdivisionErrorMetric\n\n"
  "It is a concrete error metric, based on a geometric criterium: the\n"
  "variation of the edge from a straight line.\n\n"
  "@sa\n"
  "vtkGenericCellTessellator vtkGenericSubdivisionErrorMetric\n\n";


static PyObject *
PyvtkGeometricErrorMetric_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGeometricErrorMetric::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometricErrorMetric_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometricErrorMetric *op = static_cast<vtkGeometricErrorMetric *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGeometricErrorMetric::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometricErrorMetric_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGeometricErrorMetric *tempr = vtkGeometricErrorMetric::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometricErrorMetric_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometricErrorMetric *op = static_cast<vtkGeometricErrorMetric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGeometricErrorMetric *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGeometricErrorMetric::NewInstance());

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
PyvtkGeometricErrorMetric_GetAbsoluteGeometricTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbsoluteGeometricTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometricErrorMetric *op = static_cast<vtkGeometricErrorMetric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAbsoluteGeometricTolerance() :
      op->vtkGeometricErrorMetric::GetAbsoluteGeometricTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometricErrorMetric_SetAbsoluteGeometricTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAbsoluteGeometricTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometricErrorMetric *op = static_cast<vtkGeometricErrorMetric *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAbsoluteGeometricTolerance(temp0);
    }
    else
    {
      op->vtkGeometricErrorMetric::SetAbsoluteGeometricTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometricErrorMetric_SetRelativeGeometricTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRelativeGeometricTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometricErrorMetric *op = static_cast<vtkGeometricErrorMetric *>(vp);

  double temp0;
  vtkGenericDataSet *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkGenericDataSet"))
  {
    if (ap.IsBound())
    {
      op->SetRelativeGeometricTolerance(temp0, temp1);
    }
    else
    {
      op->vtkGeometricErrorMetric::SetRelativeGeometricTolerance(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometricErrorMetric_RequiresEdgeSubdivision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequiresEdgeSubdivision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometricErrorMetric *op = static_cast<vtkGeometricErrorMetric *>(vp);

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
      op->vtkGeometricErrorMetric::RequiresEdgeSubdivision(temp0, temp1, temp2, temp3));

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
PyvtkGeometricErrorMetric_GetError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometricErrorMetric *op = static_cast<vtkGeometricErrorMetric *>(vp);

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
      op->vtkGeometricErrorMetric::GetError(temp0, temp1, temp2, temp3));

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
PyvtkGeometricErrorMetric_GetRelative(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRelative");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometricErrorMetric *op = static_cast<vtkGeometricErrorMetric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRelative() :
      op->vtkGeometricErrorMetric::GetRelative());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGeometricErrorMetric_Methods[] = {
  {"IsTypeOf", PyvtkGeometricErrorMetric_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard VTK type and error macros.\n"},
  {"IsA", PyvtkGeometricErrorMetric_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard VTK type and error macros.\n"},
  {"SafeDownCast", PyvtkGeometricErrorMetric_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkGeometricErrorMetric\nC++: static vtkGeometricErrorMetric *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard VTK type and error macros.\n"},
  {"NewInstance", PyvtkGeometricErrorMetric_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkGeometricErrorMetric\nC++: vtkGeometricErrorMetric *NewInstance()\n\nStandard VTK type and error macros.\n"},
  {"GetAbsoluteGeometricTolerance", PyvtkGeometricErrorMetric_GetAbsoluteGeometricTolerance, METH_VARARGS,
   "V.GetAbsoluteGeometricTolerance() -> float\nC++: virtual double GetAbsoluteGeometricTolerance()\n\nReturn the squared absolute geometric accuracy. See\nSetAbsoluteGeometricTolerance() for details.\n\\post positive_result: result>0\n"},
  {"SetAbsoluteGeometricTolerance", PyvtkGeometricErrorMetric_SetAbsoluteGeometricTolerance, METH_VARARGS,
   "V.SetAbsoluteGeometricTolerance(float)\nC++: void SetAbsoluteGeometricTolerance(double value)\n\nSet the geometric accuracy with a squared absolute value. This is\nthe geometric object-based accuracy. Subdivision will be required\nif the square distance between the real point and the straight\nline passing through the vertices of the edge is greater than\n`value'. For instance 0.01 will give better result than 0.1.\n\\pre positive_value: value>0\n"},
  {"SetRelativeGeometricTolerance", PyvtkGeometricErrorMetric_SetRelativeGeometricTolerance, METH_VARARGS,
   "V.SetRelativeGeometricTolerance(float, vtkGenericDataSet)\nC++: void SetRelativeGeometricTolerance(double value,\n    vtkGenericDataSet *ds)\n\nSet the geometric accuracy with a value relative to the length of\nthe bounding box of the dataset. Internally compute the absolute\ntolerance. For instance 0.01 will give better result than 0.1.\n\\pre valid_range_value: value>0 && value<1\n\\pre ds_exists: ds!=0\n"},
  {"RequiresEdgeSubdivision", PyvtkGeometricErrorMetric_RequiresEdgeSubdivision, METH_VARARGS,
   "V.RequiresEdgeSubdivision([float, ...], [float, ...], [float,\n    ...], float) -> int\nC++: int RequiresEdgeSubdivision(double *leftPoint,\n    double *midPoint, double *rightPoint, double alpha) override;\n\nDoes the edge need to be subdivided according to the distance\nbetween the line passing through its endpoints and the mid point?\nThe edge is defined by its `leftPoint' and its `rightPoint'.\n`leftPoint', `midPoint' and `rightPoint' have to be initialized\nbefore calling RequiresEdgeSubdivision(). Their format is global\ncoordinates, parametric coordinates and point centered\nattributes: xyx rst abc de... `alpha' is the normalized abscissa\nof the midpoint along the edge. (close to 0 means close to the\nleft point, close to 1 means close to the right point)\n\\pre leftPoint_exists: leftPoint!=0\n\\pre midPoint_exists: midPoint!=0\n\\pre rightPoint_exists: rightPoint!=0\n\\pre clamped_alpha: alpha>0 && alpha<1\n\\pre valid_size:\n    sizeof(leftPoint)=sizeof(midPoint)=sizeof(rightPoint)\n=GetAttributeCollection()->GetNumberOfPointCenteredComponents()+6\n"},
  {"GetError", PyvtkGeometricErrorMetric_GetError, METH_VARARGS,
   "V.GetError([float, ...], [float, ...], [float, ...], float)\n    -> float\nC++: double GetError(double *leftPoint, double *midPoint,\n    double *rightPoint, double alpha) override;\n\nReturn the error at the mid-point. It will return an error\nrelative to the bounding box size if GetRelative() is true, a\nsquare absolute error otherwise. See RequiresEdgeSubdivision()\nfor a description of the arguments.\n\\pre leftPoint_exists: leftPoint!=0\n\\pre midPoint_exists: midPoint!=0\n\\pre rightPoint_exists: rightPoint!=0\n\\pre clamped_alpha: alpha>0 && alpha<1\n\\pre valid_size:\n    sizeof(leftPoint)=sizeof(midPoint)=sizeof(rightPoint)\n=GetAttributeCollection()->GetNumberOfPointCenteredComponents()+6\n\\post positive_result: result>=0\n"},
  {"GetRelative", PyvtkGeometricErrorMetric_GetRelative, METH_VARARGS,
   "V.GetRelative() -> int\nC++: int GetRelative()\n\nReturn the type of output of GetError()\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkGeometricErrorMetric_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkGeometricErrorMetric", // tp_name
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
  PyvtkGeometricErrorMetric_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGeometricErrorMetric_StaticNew()
{
  return vtkGeometricErrorMetric::New();
}

PyObject *PyvtkGeometricErrorMetric_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkGeometricErrorMetric_Type, PyvtkGeometricErrorMetric_Methods,
    "vtkGeometricErrorMetric",
 &PyvtkGeometricErrorMetric_StaticNew);

  PyTypeObject *pytype = &PyvtkGeometricErrorMetric_Type;

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

void PyVTKAddFile_vtkGeometricErrorMetric(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGeometricErrorMetric_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGeometricErrorMetric", o) != 0)
  {
    Py_DECREF(o);
  }

}

