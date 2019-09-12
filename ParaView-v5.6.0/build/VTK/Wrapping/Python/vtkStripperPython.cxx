// python wrapper for vtkStripper
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
#include "vtkStripper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkStripper(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkStripper_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkStripper_Doc =
  "vtkStripper - create triangle strips and/or poly-lines\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkStripper is a filter that generates triangle strips and/or\n"
  "poly-lines from input polygons, triangle strips, and lines. Input\n"
  "polygons are assembled into triangle strips only if they are\n"
  "triangles; other types of polygons are passed through to the output\n"
  "and not stripped. (Use vtkTriangleFilter to triangulate\n"
  "non-triangular polygons prior to running this filter if you need to\n"
  "strip all the data.) The filter will pass through (to the output)\n"
  "vertices if they are present in the input polydata. Also note that if\n"
  "triangle strips or polylines are defined in the input they are passed\n"
  "through and not joined nor extended. (If you wish to strip these use\n"
  "vtkTriangleFilter to fragment the input into triangles and lines\n"
  "prior to running vtkStripper.)\n\n"
  "The ivar MaximumLength can be used to control the maximum allowable\n"
  "triangle strip and poly-line length.\n\n"
  "By default, this filter discards any cell data associated with the\n"
  "input. Thus is because the cell structure changes and and the old\n"
  "cell data is no longer valid. When PassCellDataAsFieldData flag is\n"
  "set, the cell data is passed as FieldData to the output using the\n"
  "following rule:\n"
  "1) for every cell in the output that is not a triangle strip, the\n"
  "   cell data is inserted once per cell in the output field data.\n"
  "2) for every triangle strip cell in the output: ii) 1 tuple is\n"
  "   inserted for every point(j|j>=2) in the strip. This is the cell\n"
  "   data for the cell formed by (j-2, j-1, j) in the input. The field\n"
  "   data order is same as cell data i.e. (verts,line,polys,tsrips).\n\n"
  "@warning\n"
  "If triangle strips or poly-lines exist in the input data they will be\n"
  "passed through to the output data. This filter will only construct\n"
  "triangle strips if triangle polygons are available; and will only\n"
  "construct poly-lines if lines are available.\n\n"
  "@sa\n"
  "vtkTriangleFilter\n\n";


static PyObject *
PyvtkStripper_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkStripper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStripper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStripper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStripper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkStripper *tempr = vtkStripper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStripper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStripper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStripper::NewInstance());

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
PyvtkStripper_SetMaximumLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumLength(temp0);
    }
    else
    {
      op->vtkStripper::SetMaximumLength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStripper_GetMaximumLengthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLengthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumLengthMinValue() :
      op->vtkStripper::GetMaximumLengthMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStripper_GetMaximumLengthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLengthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumLengthMaxValue() :
      op->vtkStripper::GetMaximumLengthMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStripper_GetMaximumLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumLength() :
      op->vtkStripper::GetMaximumLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStripper_PassCellDataAsFieldDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassCellDataAsFieldDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassCellDataAsFieldDataOn();
    }
    else
    {
      op->vtkStripper::PassCellDataAsFieldDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStripper_PassCellDataAsFieldDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassCellDataAsFieldDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassCellDataAsFieldDataOff();
    }
    else
    {
      op->vtkStripper::PassCellDataAsFieldDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStripper_SetPassCellDataAsFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassCellDataAsFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassCellDataAsFieldData(temp0);
    }
    else
    {
      op->vtkStripper::SetPassCellDataAsFieldData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStripper_GetPassCellDataAsFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassCellDataAsFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPassCellDataAsFieldData() :
      op->vtkStripper::GetPassCellDataAsFieldData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStripper_SetPassThroughCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassThroughCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassThroughCellIds(temp0);
    }
    else
    {
      op->vtkStripper::SetPassThroughCellIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStripper_GetPassThroughCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassThroughCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPassThroughCellIds() :
      op->vtkStripper::GetPassThroughCellIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStripper_PassThroughCellIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughCellIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassThroughCellIdsOn();
    }
    else
    {
      op->vtkStripper::PassThroughCellIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStripper_PassThroughCellIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughCellIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassThroughCellIdsOff();
    }
    else
    {
      op->vtkStripper::PassThroughCellIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStripper_SetPassThroughPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassThroughPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassThroughPointIds(temp0);
    }
    else
    {
      op->vtkStripper::SetPassThroughPointIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStripper_GetPassThroughPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassThroughPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPassThroughPointIds() :
      op->vtkStripper::GetPassThroughPointIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStripper_PassThroughPointIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughPointIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassThroughPointIdsOn();
    }
    else
    {
      op->vtkStripper::PassThroughPointIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStripper_PassThroughPointIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughPointIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassThroughPointIdsOff();
    }
    else
    {
      op->vtkStripper::PassThroughPointIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStripper_SetJoinContiguousSegments(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetJoinContiguousSegments");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetJoinContiguousSegments(temp0);
    }
    else
    {
      op->vtkStripper::SetJoinContiguousSegments(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStripper_GetJoinContiguousSegments(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetJoinContiguousSegments");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetJoinContiguousSegments() :
      op->vtkStripper::GetJoinContiguousSegments());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStripper_JoinContiguousSegmentsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "JoinContiguousSegmentsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->JoinContiguousSegmentsOn();
    }
    else
    {
      op->vtkStripper::JoinContiguousSegmentsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStripper_JoinContiguousSegmentsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "JoinContiguousSegmentsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStripper *op = static_cast<vtkStripper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->JoinContiguousSegmentsOff();
    }
    else
    {
      op->vtkStripper::JoinContiguousSegmentsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkStripper_Methods[] = {
  {"IsTypeOf", PyvtkStripper_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkStripper_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkStripper_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkStripper\nC++: static vtkStripper *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkStripper_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkStripper\nC++: vtkStripper *NewInstance()\n\n"},
  {"SetMaximumLength", PyvtkStripper_SetMaximumLength, METH_VARARGS,
   "V.SetMaximumLength(int)\nC++: virtual void SetMaximumLength(int _arg)\n\nSpecify the maximum number of triangles in a triangle strip,\nand/or the maximum number of lines in a poly-line.\n"},
  {"GetMaximumLengthMinValue", PyvtkStripper_GetMaximumLengthMinValue, METH_VARARGS,
   "V.GetMaximumLengthMinValue() -> int\nC++: virtual int GetMaximumLengthMinValue()\n\nSpecify the maximum number of triangles in a triangle strip,\nand/or the maximum number of lines in a poly-line.\n"},
  {"GetMaximumLengthMaxValue", PyvtkStripper_GetMaximumLengthMaxValue, METH_VARARGS,
   "V.GetMaximumLengthMaxValue() -> int\nC++: virtual int GetMaximumLengthMaxValue()\n\nSpecify the maximum number of triangles in a triangle strip,\nand/or the maximum number of lines in a poly-line.\n"},
  {"GetMaximumLength", PyvtkStripper_GetMaximumLength, METH_VARARGS,
   "V.GetMaximumLength() -> int\nC++: virtual int GetMaximumLength()\n\nSpecify the maximum number of triangles in a triangle strip,\nand/or the maximum number of lines in a poly-line.\n"},
  {"PassCellDataAsFieldDataOn", PyvtkStripper_PassCellDataAsFieldDataOn, METH_VARARGS,
   "V.PassCellDataAsFieldDataOn()\nC++: virtual void PassCellDataAsFieldDataOn()\n\nEnable/Disable passing of the CellData in the input to the output\nas FieldData. Note the field data is transformed.\n"},
  {"PassCellDataAsFieldDataOff", PyvtkStripper_PassCellDataAsFieldDataOff, METH_VARARGS,
   "V.PassCellDataAsFieldDataOff()\nC++: virtual void PassCellDataAsFieldDataOff()\n\nEnable/Disable passing of the CellData in the input to the output\nas FieldData. Note the field data is transformed.\n"},
  {"SetPassCellDataAsFieldData", PyvtkStripper_SetPassCellDataAsFieldData, METH_VARARGS,
   "V.SetPassCellDataAsFieldData(int)\nC++: virtual void SetPassCellDataAsFieldData(vtkTypeBool _arg)\n\nEnable/Disable passing of the CellData in the input to the output\nas FieldData. Note the field data is transformed.\n"},
  {"GetPassCellDataAsFieldData", PyvtkStripper_GetPassCellDataAsFieldData, METH_VARARGS,
   "V.GetPassCellDataAsFieldData() -> int\nC++: virtual vtkTypeBool GetPassCellDataAsFieldData()\n\nEnable/Disable passing of the CellData in the input to the output\nas FieldData. Note the field data is transformed.\n"},
  {"SetPassThroughCellIds", PyvtkStripper_SetPassThroughCellIds, METH_VARARGS,
   "V.SetPassThroughCellIds(int)\nC++: virtual void SetPassThroughCellIds(vtkTypeBool _arg)\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for picking. The default is off\nto conserve memory.\n"},
  {"GetPassThroughCellIds", PyvtkStripper_GetPassThroughCellIds, METH_VARARGS,
   "V.GetPassThroughCellIds() -> int\nC++: virtual vtkTypeBool GetPassThroughCellIds()\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for picking. The default is off\nto conserve memory.\n"},
  {"PassThroughCellIdsOn", PyvtkStripper_PassThroughCellIdsOn, METH_VARARGS,
   "V.PassThroughCellIdsOn()\nC++: virtual void PassThroughCellIdsOn()\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for picking. The default is off\nto conserve memory.\n"},
  {"PassThroughCellIdsOff", PyvtkStripper_PassThroughCellIdsOff, METH_VARARGS,
   "V.PassThroughCellIdsOff()\nC++: virtual void PassThroughCellIdsOff()\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for picking. The default is off\nto conserve memory.\n"},
  {"SetPassThroughPointIds", PyvtkStripper_SetPassThroughPointIds, METH_VARARGS,
   "V.SetPassThroughPointIds(int)\nC++: virtual void SetPassThroughPointIds(vtkTypeBool _arg)\n\nIf on, the output polygonal dataset will have a pointdata array\nthat holds the point index of the original vertex that produced\neach output vertex. This is useful for picking. The default is\noff to conserve memory.\n"},
  {"GetPassThroughPointIds", PyvtkStripper_GetPassThroughPointIds, METH_VARARGS,
   "V.GetPassThroughPointIds() -> int\nC++: virtual vtkTypeBool GetPassThroughPointIds()\n\nIf on, the output polygonal dataset will have a pointdata array\nthat holds the point index of the original vertex that produced\neach output vertex. This is useful for picking. The default is\noff to conserve memory.\n"},
  {"PassThroughPointIdsOn", PyvtkStripper_PassThroughPointIdsOn, METH_VARARGS,
   "V.PassThroughPointIdsOn()\nC++: virtual void PassThroughPointIdsOn()\n\nIf on, the output polygonal dataset will have a pointdata array\nthat holds the point index of the original vertex that produced\neach output vertex. This is useful for picking. The default is\noff to conserve memory.\n"},
  {"PassThroughPointIdsOff", PyvtkStripper_PassThroughPointIdsOff, METH_VARARGS,
   "V.PassThroughPointIdsOff()\nC++: virtual void PassThroughPointIdsOff()\n\nIf on, the output polygonal dataset will have a pointdata array\nthat holds the point index of the original vertex that produced\neach output vertex. This is useful for picking. The default is\noff to conserve memory.\n"},
  {"SetJoinContiguousSegments", PyvtkStripper_SetJoinContiguousSegments, METH_VARARGS,
   "V.SetJoinContiguousSegments(int)\nC++: virtual void SetJoinContiguousSegments(vtkTypeBool _arg)\n\nIf on, the output polygonal segments will be joined if they are\ncontiguous. This is useful after slicing a surface. The default\nis off.\n"},
  {"GetJoinContiguousSegments", PyvtkStripper_GetJoinContiguousSegments, METH_VARARGS,
   "V.GetJoinContiguousSegments() -> int\nC++: virtual vtkTypeBool GetJoinContiguousSegments()\n\nIf on, the output polygonal segments will be joined if they are\ncontiguous. This is useful after slicing a surface. The default\nis off.\n"},
  {"JoinContiguousSegmentsOn", PyvtkStripper_JoinContiguousSegmentsOn, METH_VARARGS,
   "V.JoinContiguousSegmentsOn()\nC++: virtual void JoinContiguousSegmentsOn()\n\nIf on, the output polygonal segments will be joined if they are\ncontiguous. This is useful after slicing a surface. The default\nis off.\n"},
  {"JoinContiguousSegmentsOff", PyvtkStripper_JoinContiguousSegmentsOff, METH_VARARGS,
   "V.JoinContiguousSegmentsOff()\nC++: virtual void JoinContiguousSegmentsOff()\n\nIf on, the output polygonal segments will be joined if they are\ncontiguous. This is useful after slicing a surface. The default\nis off.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkStripper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkStripper", // tp_name
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
  PyvtkStripper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkStripper_StaticNew()
{
  return vtkStripper::New();
}

PyObject *PyvtkStripper_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkStripper_Type, PyvtkStripper_Methods,
    "vtkStripper",
 &PyvtkStripper_StaticNew);

  PyTypeObject *pytype = &PyvtkStripper_Type;

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

void PyVTKAddFile_vtkStripper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkStripper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkStripper", o) != 0)
  {
    Py_DECREF(o);
  }

}

