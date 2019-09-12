// python wrapper for vtkGenericSubdivisionErrorMetric
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
#include "vtkGenericSubdivisionErrorMetric.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGenericSubdivisionErrorMetric(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkGenericSubdivisionErrorMetric_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkGenericSubdivisionErrorMetric_Doc =
  "vtkGenericSubdivisionErrorMetric - Objects that compute error during\ncell tessellation.\n\n"
  "Superclass: vtkObject\n\n"
  "Objects of that class answer the following question during the cell\n"
  "subdivision: \"does the edge need to be subdivided?\" through\n"
  "RequiresEdgeSubdivision(). The answer depends on the criterium\n"
  "actually used in the subclass of this abstract class: a\n"
  "geometric-based error metric (variation of edge from a straight\n"
  "line), an attribute-based error metric (variation of the active\n"
  "attribute/component value from a linear ramp) , a view-depend error\n"
  "metric, ... Cell subdivision is performed in the context of the\n"
  "adaptor framework: higher-order, or complex cells, are automatically\n"
  "tessellated into simplices so that they can be processed with\n"
  "conventional visualization algorithms.\n\n"
  "@sa\n"
  "vtkGenericCellTessellator\n\n";


static PyObject *
PyvtkGenericSubdivisionErrorMetric_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGenericSubdivisionErrorMetric::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericSubdivisionErrorMetric_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericSubdivisionErrorMetric *op = static_cast<vtkGenericSubdivisionErrorMetric *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGenericSubdivisionErrorMetric::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericSubdivisionErrorMetric_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGenericSubdivisionErrorMetric *tempr = vtkGenericSubdivisionErrorMetric::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericSubdivisionErrorMetric_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericSubdivisionErrorMetric *op = static_cast<vtkGenericSubdivisionErrorMetric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGenericSubdivisionErrorMetric *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGenericSubdivisionErrorMetric::NewInstance());

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
PyvtkGenericSubdivisionErrorMetric_RequiresEdgeSubdivision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequiresEdgeSubdivision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericSubdivisionErrorMetric *op = static_cast<vtkGenericSubdivisionErrorMetric *>(vp);

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

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);
    ap.Save(temp2, save2, size2);

    int tempr = op->RequiresEdgeSubdivision(temp0, temp1, temp2, temp3);

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
PyvtkGenericSubdivisionErrorMetric_GetError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericSubdivisionErrorMetric *op = static_cast<vtkGenericSubdivisionErrorMetric *>(vp);

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

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);
    ap.Save(temp2, save2, size2);

    double tempr = op->GetError(temp0, temp1, temp2, temp3);

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
PyvtkGenericSubdivisionErrorMetric_SetGenericCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenericCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericSubdivisionErrorMetric *op = static_cast<vtkGenericSubdivisionErrorMetric *>(vp);

  vtkGenericAdaptorCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGenericAdaptorCell"))
  {
    if (ap.IsBound())
    {
      op->SetGenericCell(temp0);
    }
    else
    {
      op->vtkGenericSubdivisionErrorMetric::SetGenericCell(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericSubdivisionErrorMetric_GetGenericCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericSubdivisionErrorMetric *op = static_cast<vtkGenericSubdivisionErrorMetric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGenericAdaptorCell *tempr = (ap.IsBound() ?
      op->GetGenericCell() :
      op->vtkGenericSubdivisionErrorMetric::GetGenericCell());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericSubdivisionErrorMetric_SetDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericSubdivisionErrorMetric *op = static_cast<vtkGenericSubdivisionErrorMetric *>(vp);

  vtkGenericDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGenericDataSet"))
  {
    if (ap.IsBound())
    {
      op->SetDataSet(temp0);
    }
    else
    {
      op->vtkGenericSubdivisionErrorMetric::SetDataSet(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericSubdivisionErrorMetric_GetDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericSubdivisionErrorMetric *op = static_cast<vtkGenericSubdivisionErrorMetric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGenericDataSet *tempr = (ap.IsBound() ?
      op->GetDataSet() :
      op->vtkGenericSubdivisionErrorMetric::GetDataSet());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGenericSubdivisionErrorMetric_Methods[] = {
  {"IsTypeOf", PyvtkGenericSubdivisionErrorMetric_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard VTK type and error macros.\n"},
  {"IsA", PyvtkGenericSubdivisionErrorMetric_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard VTK type and error macros.\n"},
  {"SafeDownCast", PyvtkGenericSubdivisionErrorMetric_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkGenericSubdivisionErrorMetric\nC++: static vtkGenericSubdivisionErrorMetric *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard VTK type and error macros.\n"},
  {"NewInstance", PyvtkGenericSubdivisionErrorMetric_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkGenericSubdivisionErrorMetric\nC++: vtkGenericSubdivisionErrorMetric *NewInstance()\n\nStandard VTK type and error macros.\n"},
  {"RequiresEdgeSubdivision", PyvtkGenericSubdivisionErrorMetric_RequiresEdgeSubdivision, METH_VARARGS,
   "V.RequiresEdgeSubdivision([float, ...], [float, ...], [float,\n    ...], float) -> int\nC++: virtual int RequiresEdgeSubdivision(double *leftPoint,\n    double *midPoint, double *rightPoint, double alpha)\n\nDoes the edge need to be subdivided according to the implemented\ncomputation? The edge is defined by its `leftPoint' and its\n`rightPoint'. `leftPoint', `midPoint' and `rightPoint' have to be\ninitialized before calling RequiresEdgeSubdivision(). Their\nformat is global coordinates, parametric coordinates and point\ncentered attributes: xyx rst abc de... `alpha' is the normalized\nabscissa of the midpoint along the edge. (close to 0 means close\nto the left point, close to 1 means close to the right point)\n\\pre leftPoint_exists: leftPoint!=0\n\\pre midPoint_exists: midPoint!=0\n\\pre rightPoint_exists: rightPoint!=0\n\\pre clamped_alpha: alpha>0 && alpha<1\n\\pre valid_size:\n    sizeof(leftPoint)=sizeof(midPoint)=sizeof(rightPoint)\n=GetAttributeCollection()->GetNumberOfPointCenteredComponents()+6\n"},
  {"GetError", PyvtkGenericSubdivisionErrorMetric_GetError, METH_VARARGS,
   "V.GetError([float, ...], [float, ...], [float, ...], float)\n    -> float\nC++: virtual double GetError(double *leftPoint, double *midPoint,\n    double *rightPoint, double alpha)\n\nReturn the error at the mid-point. The type of error depends on\nthe state of the concrete error metric. For instance, it can\nreturn an absolute or relative error metric. See\nRequiresEdgeSubdivision() for a description of the arguments.\n\\pre leftPoint_exists: leftPoint!=0\n\\pre midPoint_exists: midPoint!=0\n\\pre rightPoint_exists: rightPoint!=0\n\\pre clamped_alpha: alpha>0 && alpha<1\n\\pre valid_size:\n    sizeof(leftPoint)=sizeof(midPoint)=sizeof(rightPoint)\n=GetAttributeCollection()->GetNumberOfPointCenteredComponents()+6\n\\post positive_result: result>=0\n"},
  {"SetGenericCell", PyvtkGenericSubdivisionErrorMetric_SetGenericCell, METH_VARARGS,
   "V.SetGenericCell(vtkGenericAdaptorCell)\nC++: void SetGenericCell(vtkGenericAdaptorCell *cell)\n\nThe cell that the edge belongs to.\n"},
  {"GetGenericCell", PyvtkGenericSubdivisionErrorMetric_GetGenericCell, METH_VARARGS,
   "V.GetGenericCell() -> vtkGenericAdaptorCell\nC++: virtual vtkGenericAdaptorCell *GetGenericCell()\n\nThe cell that the edge belongs to.\n"},
  {"SetDataSet", PyvtkGenericSubdivisionErrorMetric_SetDataSet, METH_VARARGS,
   "V.SetDataSet(vtkGenericDataSet)\nC++: void SetDataSet(vtkGenericDataSet *ds)\n\nSet/Get the dataset to be tessellated.\n"},
  {"GetDataSet", PyvtkGenericSubdivisionErrorMetric_GetDataSet, METH_VARARGS,
   "V.GetDataSet() -> vtkGenericDataSet\nC++: virtual vtkGenericDataSet *GetDataSet()\n\nSet/Get the dataset to be tessellated.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkGenericSubdivisionErrorMetric_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkGenericSubdivisionErrorMetric", // tp_name
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
  PyvtkGenericSubdivisionErrorMetric_Doc, // tp_doc
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

PyObject *PyvtkGenericSubdivisionErrorMetric_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkGenericSubdivisionErrorMetric_Type, PyvtkGenericSubdivisionErrorMetric_Methods,
    "vtkGenericSubdivisionErrorMetric",
 nullptr);

  PyTypeObject *pytype = &PyvtkGenericSubdivisionErrorMetric_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGenericSubdivisionErrorMetric(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGenericSubdivisionErrorMetric_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGenericSubdivisionErrorMetric", o) != 0)
  {
    Py_DECREF(o);
  }

}

