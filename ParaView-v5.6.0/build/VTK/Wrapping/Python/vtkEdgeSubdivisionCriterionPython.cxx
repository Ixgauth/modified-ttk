// python wrapper for vtkEdgeSubdivisionCriterion
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
#include "vtkEdgeSubdivisionCriterion.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkEdgeSubdivisionCriterion(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkEdgeSubdivisionCriterion_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkEdgeSubdivisionCriterion_Doc =
  "vtkEdgeSubdivisionCriterion - how to decide whether a linear\napproximation to nonlinear geometry or field should be subdivided\n\n"
  "Superclass: vtkObject\n\n"
  "Descendants of this abstract class are used to decide whether a\n"
  "piecewise linear approximation (triangles, lines, ... ) to some\n"
  "nonlinear geometry should be subdivided. This decision may be based\n"
  "on an absolute error metric (chord error) or on some view-dependent\n"
  "metric (chord error compared to device resolution) or on some\n"
  "abstract metric (color error). Or anything else, really. Just so long\n"
  "as you implement the EvaluateEdge member, all will be well.\n\n"
  "@sa\n"
  "vtkDataSetSubdivisionAlgorithm vtkStreamingTessellator\n\n";


static PyObject *
PyvtkEdgeSubdivisionCriterion_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkEdgeSubdivisionCriterion::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEdgeSubdivisionCriterion_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeSubdivisionCriterion *op = static_cast<vtkEdgeSubdivisionCriterion *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkEdgeSubdivisionCriterion::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEdgeSubdivisionCriterion_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkEdgeSubdivisionCriterion *tempr = vtkEdgeSubdivisionCriterion::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEdgeSubdivisionCriterion_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeSubdivisionCriterion *op = static_cast<vtkEdgeSubdivisionCriterion *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkEdgeSubdivisionCriterion *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkEdgeSubdivisionCriterion::NewInstance());

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
PyvtkEdgeSubdivisionCriterion_EvaluateEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeSubdivisionCriterion *op = static_cast<vtkEdgeSubdivisionCriterion *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(size2);
  double *temp2 = store2.Data();
  int temp3;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp1, save1, size1);

    bool tempr = op->EvaluateEdge(temp0, temp1, temp2, temp3);

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEdgeSubdivisionCriterion_PassField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeSubdivisionCriterion *op = static_cast<vtkEdgeSubdivisionCriterion *>(vp);

  int temp0;
  int temp1;
  vtkStreamingTessellator *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkStreamingTessellator"))
  {
    int tempr = (ap.IsBound() ?
      op->PassField(temp0, temp1, temp2) :
      op->vtkEdgeSubdivisionCriterion::PassField(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEdgeSubdivisionCriterion_ResetFieldList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetFieldList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeSubdivisionCriterion *op = static_cast<vtkEdgeSubdivisionCriterion *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetFieldList();
    }
    else
    {
      op->vtkEdgeSubdivisionCriterion::ResetFieldList();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEdgeSubdivisionCriterion_DontPassField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DontPassField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeSubdivisionCriterion *op = static_cast<vtkEdgeSubdivisionCriterion *>(vp);

  int temp0;
  vtkStreamingTessellator *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkStreamingTessellator"))
  {
    bool tempr = (ap.IsBound() ?
      op->DontPassField(temp0, temp1) :
      op->vtkEdgeSubdivisionCriterion::DontPassField(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEdgeSubdivisionCriterion_GetFieldIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeSubdivisionCriterion *op = static_cast<vtkEdgeSubdivisionCriterion *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const int *tempr = (ap.IsBound() ?
      op->GetFieldIds() :
      op->vtkEdgeSubdivisionCriterion::GetFieldIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEdgeSubdivisionCriterion_GetFieldOffsets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldOffsets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeSubdivisionCriterion *op = static_cast<vtkEdgeSubdivisionCriterion *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const int *tempr = (ap.IsBound() ?
      op->GetFieldOffsets() :
      op->vtkEdgeSubdivisionCriterion::GetFieldOffsets());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEdgeSubdivisionCriterion_GetOutputField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeSubdivisionCriterion *op = static_cast<vtkEdgeSubdivisionCriterion *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputField(temp0) :
      op->vtkEdgeSubdivisionCriterion::GetOutputField(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEdgeSubdivisionCriterion_GetNumberOfFields(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFields");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeSubdivisionCriterion *op = static_cast<vtkEdgeSubdivisionCriterion *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFields() :
      op->vtkEdgeSubdivisionCriterion::GetNumberOfFields());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkEdgeSubdivisionCriterion_Methods[] = {
  {"IsTypeOf", PyvtkEdgeSubdivisionCriterion_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkEdgeSubdivisionCriterion_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkEdgeSubdivisionCriterion_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkEdgeSubdivisionCriterion\nC++: static vtkEdgeSubdivisionCriterion *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkEdgeSubdivisionCriterion_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkEdgeSubdivisionCriterion\nC++: vtkEdgeSubdivisionCriterion *NewInstance()\n\n"},
  {"EvaluateEdge", PyvtkEdgeSubdivisionCriterion_EvaluateEdge, METH_VARARGS,
   "V.EvaluateEdge((float, ...), [float, ...], (float, ...), int)\n    -> bool\nC++: virtual bool EvaluateEdge(const double *p0, double *p1,\n    const double *p2, int field_start)\n\nYou must implement this member function in a subclass. It will be\ncalled by vtkStreamingTessellator for each edge in each primitive\nthat vtkStreamingTessellator generates.\n"},
  {"PassField", PyvtkEdgeSubdivisionCriterion_PassField, METH_VARARGS,
   "V.PassField(int, int, vtkStreamingTessellator) -> int\nC++: virtual int PassField(int sourceId, int sourceSize,\n    vtkStreamingTessellator *t)\n\nThis is a helper routine called by PassFields() which you may\nalso call directly; it adds sourceSize to the size of the output\nvertex field values. The offset of the sourceId field in the\noutput vertex array is returned.\n-1 is returned if sourceSize would force the output to have more\n   than vtkStreamingTessellator::MaxFieldSize field values per\n   vertex.\n"},
  {"ResetFieldList", PyvtkEdgeSubdivisionCriterion_ResetFieldList, METH_VARARGS,
   "V.ResetFieldList()\nC++: virtual void ResetFieldList()\n\nDon't pass any field values in the vertex pointer. This is used\nto reset the list of fields to pass after a successful run of\nvtkStreamingTessellator.\n"},
  {"DontPassField", PyvtkEdgeSubdivisionCriterion_DontPassField, METH_VARARGS,
   "V.DontPassField(int, vtkStreamingTessellator) -> bool\nC++: virtual bool DontPassField(int sourceId,\n    vtkStreamingTessellator *t)\n\nThis does the opposite of PassField(); it removes a field from\nthe output (assuming the field was set to be passed). Returns\ntrue if any action was taken, false otherwise.\n"},
  {"GetFieldIds", PyvtkEdgeSubdivisionCriterion_GetFieldIds, METH_VARARGS,
   "V.GetFieldIds() -> (int, ...)\nC++: const int *GetFieldIds()\n\nReturn the map from output field id to input field ids. That is,\nfield i of any output vertex from vtkStreamingTessellator will be\nassociated with GetFieldIds()[ i] on the input mesh.\n"},
  {"GetFieldOffsets", PyvtkEdgeSubdivisionCriterion_GetFieldOffsets, METH_VARARGS,
   "V.GetFieldOffsets() -> (int, ...)\nC++: const int *GetFieldOffsets()\n\nReturn the offset into an output vertex array of all fields. That\nis, field i of any output vertex, p, from vtkStreamingTessellator\nwill have its first entry at p[ GetFieldOffsets()[ i] ] .\n"},
  {"GetOutputField", PyvtkEdgeSubdivisionCriterion_GetOutputField, METH_VARARGS,
   "V.GetOutputField(int) -> int\nC++: int GetOutputField(int fieldId)\n\nReturn the output ID of an input field. Returns -1 if fieldId is\nnot set to be passed to the output.\n"},
  {"GetNumberOfFields", PyvtkEdgeSubdivisionCriterion_GetNumberOfFields, METH_VARARGS,
   "V.GetNumberOfFields() -> int\nC++: int GetNumberOfFields()\n\nReturn the number of fields being evaluated at each output\nvertex. This is the length of the arrays returned by\nGetFieldIds() andGetFieldOffsets().\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkEdgeSubdivisionCriterion_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkEdgeSubdivisionCriterion", // tp_name
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
  PyvtkEdgeSubdivisionCriterion_Doc, // tp_doc
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

PyObject *PyvtkEdgeSubdivisionCriterion_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkEdgeSubdivisionCriterion_Type, PyvtkEdgeSubdivisionCriterion_Methods,
    "vtkEdgeSubdivisionCriterion",
 nullptr);

  PyTypeObject *pytype = &PyvtkEdgeSubdivisionCriterion_Type;

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

void PyVTKAddFile_vtkEdgeSubdivisionCriterion(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkEdgeSubdivisionCriterion_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkEdgeSubdivisionCriterion", o) != 0)
  {
    Py_DECREF(o);
  }

}

