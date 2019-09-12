// python wrapper for vtkDataSetEdgeSubdivisionCriterion
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
#include "vtkDataSetEdgeSubdivisionCriterion.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDataSetEdgeSubdivisionCriterion(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDataSetEdgeSubdivisionCriterion_ClassNew(); }

#ifndef DECLARED_PyvtkEdgeSubdivisionCriterion_ClassNew
extern "C" { PyObject *PyvtkEdgeSubdivisionCriterion_ClassNew(); }
#define DECLARED_PyvtkEdgeSubdivisionCriterion_ClassNew
#endif

static const char *PyvtkDataSetEdgeSubdivisionCriterion_Doc =
  "vtkDataSetEdgeSubdivisionCriterion - a subclass of\nvtkEdgeSubdivisionCriterion for vtkDataSet objects.\n\n"
  "Superclass: vtkEdgeSubdivisionCriterion\n\n"
  "This is a subclass of vtkEdgeSubdivisionCriterion that is used for\n"
  "tessellating cells of a vtkDataSet, particularly nonlinear cells.\n\n"
  "It provides functions for setting the current cell being tessellated\n"
  "and a convenience routine, EvaluateFields() to evaluate field values\n"
  "at a point. You should call EvaluateFields() from inside\n"
  "EvaluateEdge() whenever the result of EvaluateEdge() will be true.\n"
  "Otherwise, do not call EvaluateFields() as the midpoint is about to\n"
  "be discarded. (Implementor's note</i>: This isn't true if\n"
  "UGLY_ASPECT_RATIO_HACK has been defined. But in that case, we don't\n"
  "want the exact field values; we need the linearly interpolated ones\n"
  "at the midpoint for continuity.)\n\n"
  "@sa\n"
  "vtkEdgeSubdivisionCriterion\n\n";


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDataSetEdgeSubdivisionCriterion::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataSetEdgeSubdivisionCriterion::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDataSetEdgeSubdivisionCriterion *tempr = vtkDataSetEdgeSubdivisionCriterion::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSetEdgeSubdivisionCriterion *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataSetEdgeSubdivisionCriterion::NewInstance());

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
PyvtkDataSetEdgeSubdivisionCriterion_SetMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
  {
    if (ap.IsBound())
    {
      op->SetMesh(temp0);
    }
    else
    {
      op->vtkDataSetEdgeSubdivisionCriterion::SetMesh(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_GetMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetMesh() :
      op->vtkDataSetEdgeSubdivisionCriterion::GetMesh());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_SetCellId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellId(temp0);
    }
    else
    {
      op->vtkDataSetEdgeSubdivisionCriterion::SetCellId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_GetCellId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType *tempr = (ap.IsBound() ?
      &op->GetCellId() :
      &op->vtkDataSetEdgeSubdivisionCriterion::GetCellId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_GetCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetCell() :
      op->vtkDataSetEdgeSubdivisionCriterion::GetCell());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_EvaluateEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

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

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp1, save1, size1);

    bool tempr = (ap.IsBound() ?
      op->EvaluateEdge(temp0, temp1, temp2, temp3) :
      op->vtkDataSetEdgeSubdivisionCriterion::EvaluateEdge(temp0, temp1, temp2, temp3));

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
PyvtkDataSetEdgeSubdivisionCriterion_EvaluateFields(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFields");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    double *tempr = (ap.IsBound() ?
      op->EvaluateFields(temp0, temp1, temp2) :
      op->vtkDataSetEdgeSubdivisionCriterion::EvaluateFields(temp0, temp1, temp2));

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

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_EvaluatePointDataField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluatePointDataField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->EvaluatePointDataField(temp0, temp1, temp2);
    }
    else
    {
      op->vtkDataSetEdgeSubdivisionCriterion::EvaluatePointDataField(temp0, temp1, temp2);
    }

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

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_EvaluateCellDataField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateCellDataField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->EvaluateCellDataField(temp0, temp1, temp2);
    }
    else
    {
      op->vtkDataSetEdgeSubdivisionCriterion::EvaluateCellDataField(temp0, temp1, temp2);
    }

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

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_SetChordError2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChordError2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetChordError2(temp0);
    }
    else
    {
      op->vtkDataSetEdgeSubdivisionCriterion::SetChordError2(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_GetChordError2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChordError2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetChordError2() :
      op->vtkDataSetEdgeSubdivisionCriterion::GetChordError2());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_SetFieldError2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldError2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetFieldError2(temp0, temp1);
    }
    else
    {
      op->vtkDataSetEdgeSubdivisionCriterion::SetFieldError2(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_GetFieldError2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldError2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFieldError2(temp0) :
      op->vtkDataSetEdgeSubdivisionCriterion::GetFieldError2(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_ResetFieldError2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetFieldError2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetFieldError2();
    }
    else
    {
      op->vtkDataSetEdgeSubdivisionCriterion::ResetFieldError2();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_GetActiveFieldCriteria(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveFieldCriteria");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetActiveFieldCriteria() :
      op->vtkDataSetEdgeSubdivisionCriterion::GetActiveFieldCriteria());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDataSetEdgeSubdivisionCriterion_Methods[] = {
  {"IsTypeOf", PyvtkDataSetEdgeSubdivisionCriterion_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDataSetEdgeSubdivisionCriterion_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDataSetEdgeSubdivisionCriterion_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkDataSetEdgeSubdivisionCriterion\nC++: static vtkDataSetEdgeSubdivisionCriterion *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDataSetEdgeSubdivisionCriterion_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDataSetEdgeSubdivisionCriterion\nC++: vtkDataSetEdgeSubdivisionCriterion *NewInstance()\n\n"},
  {"SetMesh", PyvtkDataSetEdgeSubdivisionCriterion_SetMesh, METH_VARARGS,
   "V.SetMesh(vtkDataSet)\nC++: virtual void SetMesh(vtkDataSet *)\n\n"},
  {"GetMesh", PyvtkDataSetEdgeSubdivisionCriterion_GetMesh, METH_VARARGS,
   "V.GetMesh() -> vtkDataSet\nC++: vtkDataSet *GetMesh()\n\n"},
  {"SetCellId", PyvtkDataSetEdgeSubdivisionCriterion_SetCellId, METH_VARARGS,
   "V.SetCellId(int)\nC++: virtual void SetCellId(vtkIdType cell)\n\n"},
  {"GetCellId", PyvtkDataSetEdgeSubdivisionCriterion_GetCellId, METH_VARARGS,
   "V.GetCellId() -> int\nC++: vtkIdType &GetCellId()\n\n"},
  {"GetCell", PyvtkDataSetEdgeSubdivisionCriterion_GetCell, METH_VARARGS,
   "V.GetCell() -> vtkCell\nC++: vtkCell *GetCell()\n\n"},
  {"EvaluateEdge", PyvtkDataSetEdgeSubdivisionCriterion_EvaluateEdge, METH_VARARGS,
   "V.EvaluateEdge((float, ...), [float, ...], (float, ...), int)\n    -> bool\nC++: bool EvaluateEdge(const double *p0, double *midpt,\n    const double *p1, int field_start) override;\n\nYou must implement this member function in a subclass. It will be\ncalled by vtkStreamingTessellator for each edge in each primitive\nthat vtkStreamingTessellator generates.\n"},
  {"EvaluateFields", PyvtkDataSetEdgeSubdivisionCriterion_EvaluateFields, METH_VARARGS,
   "V.EvaluateFields([float, ...], [float, ...], int) -> (float, ...)\nC++: double *EvaluateFields(double *vertex, double *weights,\n    int field_start)\n\nEvaluate all of the fields that should be output with the given\nvertex and store them just past the parametric coordinates of\nvertex, at the offsets given\nbyvtkEdgeSubdivisionCriterion::GetFieldOffsets() plus\nfield_start.field_start contains the number of world-space\ncoordinates (always 3) plus the embedding dimension (the size of\nthe parameter-space in which the cell is embedded). It will range\nbetween 3 and 6, inclusive.\n\n* You must have called SetCellId() before calling this routine or\nthere\n* will not be a mesh over which to evaluate the fields.\n\n* You must have called\n  vtkEdgeSubdivisionCriterion::PassDefaultFields()\n* or vtkEdgeSubdivisionCriterion::PassField() or there will be no\nfields\n* defined for the output vertex.\n\n* This routine is public and returns its input argument so that\n  it\n* may be used as an argument to\n* vtkStreamingTessellator::AdaptivelySamplekFacet():\n* \n * vtkStreamingTessellator* t = vtkStreamingTessellator::New();\n * vtkEdgeSubdivisionCriterion* s;\n * ...\n * t->AdaptivelySample1Facet( s->EvaluateFields( p0 ), s->EvaluateFields( p1 ) );\n * ...\n * \n* Although this will work, using EvaluateFields() in this manner\n* should be avoided. It's much more efficient to fetch the corner\nvalues\n* for each attribute and copy them into p0, p1, ... as opposed to\n* performing shape function evaluations. The only case where you\n  wouldn't\n* want to do this is when the field you are interpolating is\n  discontinuous\n* at cell borders, such as with a discontinuous galerkin method\n  or when\n* all the Gauss points for quadrature are interior to the cell.\n\n* The final argument, weights, is the array of weights to apply\n  to each\n* point's data when interpolating the field. This is returned by\n* vtkCell::EvaluateLocation() when evaluating the geometry.\n"},
  {"EvaluatePointDataField", PyvtkDataSetEdgeSubdivisionCriterion_EvaluatePointDataField, METH_VARARGS,
   "V.EvaluatePointDataField([float, ...], [float, ...], int)\nC++: void EvaluatePointDataField(double *result, double *weights,\n    int field)\n\nEvaluate either a cell or nodal field. This exists because of the\nfunky way that Exodus data will be handled. Sure, it's a hack,\nbut what are ya gonna do?\n"},
  {"EvaluateCellDataField", PyvtkDataSetEdgeSubdivisionCriterion_EvaluateCellDataField, METH_VARARGS,
   "V.EvaluateCellDataField([float, ...], [float, ...], int)\nC++: void EvaluateCellDataField(double *result, double *weights,\n    int field)\n\nEvaluate either a cell or nodal field. This exists because of the\nfunky way that Exodus data will be handled. Sure, it's a hack,\nbut what are ya gonna do?\n"},
  {"SetChordError2", PyvtkDataSetEdgeSubdivisionCriterion_SetChordError2, METH_VARARGS,
   "V.SetChordError2(float)\nC++: virtual void SetChordError2(double _arg)\n\nGet/Set the square of the allowable chord error at any edge's\nmidpoint. This value is used by EvaluateEdge.\n"},
  {"GetChordError2", PyvtkDataSetEdgeSubdivisionCriterion_GetChordError2, METH_VARARGS,
   "V.GetChordError2() -> float\nC++: virtual double GetChordError2()\n\nGet/Set the square of the allowable chord error at any edge's\nmidpoint. This value is used by EvaluateEdge.\n"},
  {"SetFieldError2", PyvtkDataSetEdgeSubdivisionCriterion_SetFieldError2, METH_VARARGS,
   "V.SetFieldError2(int, float)\nC++: virtual void SetFieldError2(int s, double err)\n\nGet/Set the square of the allowable error magnitude for the\nscalar field s at any edge's midpoint. A value less than or equal\nto 0 indicates that the field should not be used as a criterion\nfor subdivision.\n"},
  {"GetFieldError2", PyvtkDataSetEdgeSubdivisionCriterion_GetFieldError2, METH_VARARGS,
   "V.GetFieldError2(int) -> float\nC++: double GetFieldError2(int s)\n\nGet/Set the square of the allowable error magnitude for the\nscalar field s at any edge's midpoint. A value less than or equal\nto 0 indicates that the field should not be used as a criterion\nfor subdivision.\n"},
  {"ResetFieldError2", PyvtkDataSetEdgeSubdivisionCriterion_ResetFieldError2, METH_VARARGS,
   "V.ResetFieldError2()\nC++: virtual void ResetFieldError2()\n\nTell the subdivider not to use any field values as subdivision\ncriteria. Effectively calls SetFieldError2( a, -1. ) for all\nfields.\n"},
  {"GetActiveFieldCriteria", PyvtkDataSetEdgeSubdivisionCriterion_GetActiveFieldCriteria, METH_VARARGS,
   "V.GetActiveFieldCriteria() -> int\nC++: virtual int GetActiveFieldCriteria()\n\nReturn a bitfield specifying which FieldError2 criteria are\npositive (i.e., actively used to decide edge subdivisions). This\nis stored as separate state to make subdivisions go faster.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDataSetEdgeSubdivisionCriterion_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkDataSetEdgeSubdivisionCriterion", // tp_name
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
  PyvtkDataSetEdgeSubdivisionCriterion_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDataSetEdgeSubdivisionCriterion_StaticNew()
{
  return vtkDataSetEdgeSubdivisionCriterion::New();
}

PyObject *PyvtkDataSetEdgeSubdivisionCriterion_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDataSetEdgeSubdivisionCriterion_Type, PyvtkDataSetEdgeSubdivisionCriterion_Methods,
    "vtkDataSetEdgeSubdivisionCriterion",
 &PyvtkDataSetEdgeSubdivisionCriterion_StaticNew);

  PyTypeObject *pytype = &PyvtkDataSetEdgeSubdivisionCriterion_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkEdgeSubdivisionCriterion_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDataSetEdgeSubdivisionCriterion(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDataSetEdgeSubdivisionCriterion_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDataSetEdgeSubdivisionCriterion", o) != 0)
  {
    Py_DECREF(o);
  }

}

