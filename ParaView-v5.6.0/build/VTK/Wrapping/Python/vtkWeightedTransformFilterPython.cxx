// python wrapper for vtkWeightedTransformFilter
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
#include "vtkWeightedTransformFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkWeightedTransformFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkWeightedTransformFilter_ClassNew(); }

#ifndef DECLARED_PyvtkPointSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPointSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPointSetAlgorithm_ClassNew
#endif

static const char *PyvtkWeightedTransformFilter_Doc =
  "vtkWeightedTransformFilter - transform based on per-point or per-cell\nweighting functions.\n\n"
  "Superclass: vtkPointSetAlgorithm\n\n"
  "vtkWeightedTransformFilter is a filter that can be used to \"skin\"\n"
  "structures and to create new and complex shapes.  Unlike a\n"
  "traditional transform filter (which has one transform for a data set)\n"
  "or an assembly (which has one transform per part or group of parts),\n"
  "a weighted transform produces the weighted sum of transforms on a\n"
  "per-point or per-cell basis.\n\n"
  "Each point or cell in the filter's input has an attached DataArray\n"
  "that contains tuples of weighting functions, one per point or cell.\n"
  "The filter also has a set of fixed transforms.  When the filter\n"
  "executes, each input point/cell is transformed by each of the\n"
  "transforms.  These results are weighted by the point/cell's weighting\n"
  "factors to produce final output data.\n\n"
  "Linear transforms are performance-optimized.  Using arbitrary\n"
  "transforms will work, but performance may suffer.\n\n"
  "As an example of the utility of weighted transforms, here's how this\n"
  "filter can be used for \"skinning.\"  Skinning is the process of\n"
  "putting a mesh cover over an underlying structure, like skin over\n"
  "bone.  Joints are difficult to skin because deformation is hard to\n"
  "do.  Visualize skin over an elbow joint.  Part of the skin moves with\n"
  "one bone, part of the skin moves with the other bone, and the skin in\n"
  "the middle moves a little with each.\n\n"
  "Weighted filtering can be used for a simple and efficient kind of\n"
  "skinning.  Begin with a cylindrical mesh.  Create a FloatArray with\n"
  "two components per tuple, and one tuple for each point in the mesh.\n"
  "Assign transform weights that linear interpolate the distance along\n"
  "the cylinder (one component is the distance along the cylinder, the\n"
  "other is one minus that distance).  Set the filter up to use two\n"
  "transforms, the two used to transform the two bones.  Now, when the\n"
  "transforms change, the mesh will deform so as to, hopefully, continue\n"
  "to cover the bones.\n\n"
  "vtkWeightedTransformFilter is also useful for creating \"strange and\n"
  "complex\" shapes using pinching, bending, and blending.\n\n"
  "@warning\n"
  "Weighted combination of normals and vectors are probably not\n"
  "appropriate in many cases.  Surface normals are treated somewhat\n"
  "specially, but in many cases you may need to regenerate the surface\n"
  "normals.\n\n"
  "@warning\n"
  "Cell data can only be transformed if all transforms are linear.\n\n"
  "@sa\n"
  "vtkAbstractTransform vtkLinearTransform vtkTransformPolyDataFilter\n"
  "vtkActor\n\n";


static PyObject *
PyvtkWeightedTransformFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkWeightedTransformFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWeightedTransformFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWeightedTransformFilter *op = static_cast<vtkWeightedTransformFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkWeightedTransformFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWeightedTransformFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkWeightedTransformFilter *tempr = vtkWeightedTransformFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWeightedTransformFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWeightedTransformFilter *op = static_cast<vtkWeightedTransformFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkWeightedTransformFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkWeightedTransformFilter::NewInstance());

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
PyvtkWeightedTransformFilter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWeightedTransformFilter *op = static_cast<vtkWeightedTransformFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkWeightedTransformFilter::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWeightedTransformFilter_SetWeightArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWeightArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWeightedTransformFilter *op = static_cast<vtkWeightedTransformFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWeightArray(temp0);
    }
    else
    {
      op->vtkWeightedTransformFilter::SetWeightArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWeightedTransformFilter_GetWeightArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWeightArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWeightedTransformFilter *op = static_cast<vtkWeightedTransformFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetWeightArray() :
      op->vtkWeightedTransformFilter::GetWeightArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWeightedTransformFilter_SetTransformIndexArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransformIndexArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWeightedTransformFilter *op = static_cast<vtkWeightedTransformFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTransformIndexArray(temp0);
    }
    else
    {
      op->vtkWeightedTransformFilter::SetTransformIndexArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWeightedTransformFilter_GetTransformIndexArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransformIndexArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWeightedTransformFilter *op = static_cast<vtkWeightedTransformFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetTransformIndexArray() :
      op->vtkWeightedTransformFilter::GetTransformIndexArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWeightedTransformFilter_SetCellDataWeightArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellDataWeightArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWeightedTransformFilter *op = static_cast<vtkWeightedTransformFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellDataWeightArray(temp0);
    }
    else
    {
      op->vtkWeightedTransformFilter::SetCellDataWeightArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWeightedTransformFilter_GetCellDataWeightArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellDataWeightArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWeightedTransformFilter *op = static_cast<vtkWeightedTransformFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetCellDataWeightArray() :
      op->vtkWeightedTransformFilter::GetCellDataWeightArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWeightedTransformFilter_SetCellDataTransformIndexArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellDataTransformIndexArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWeightedTransformFilter *op = static_cast<vtkWeightedTransformFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellDataTransformIndexArray(temp0);
    }
    else
    {
      op->vtkWeightedTransformFilter::SetCellDataTransformIndexArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWeightedTransformFilter_GetCellDataTransformIndexArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellDataTransformIndexArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWeightedTransformFilter *op = static_cast<vtkWeightedTransformFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetCellDataTransformIndexArray() :
      op->vtkWeightedTransformFilter::GetCellDataTransformIndexArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWeightedTransformFilter_SetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWeightedTransformFilter *op = static_cast<vtkWeightedTransformFilter *>(vp);

  vtkAbstractTransform *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkAbstractTransform") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetTransform(temp0, temp1);
    }
    else
    {
      op->vtkWeightedTransformFilter::SetTransform(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWeightedTransformFilter_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWeightedTransformFilter *op = static_cast<vtkWeightedTransformFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkAbstractTransform *tempr = (ap.IsBound() ?
      op->GetTransform(temp0) :
      op->vtkWeightedTransformFilter::GetTransform(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWeightedTransformFilter_SetNumberOfTransforms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfTransforms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWeightedTransformFilter *op = static_cast<vtkWeightedTransformFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfTransforms(temp0);
    }
    else
    {
      op->vtkWeightedTransformFilter::SetNumberOfTransforms(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWeightedTransformFilter_GetNumberOfTransforms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTransforms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWeightedTransformFilter *op = static_cast<vtkWeightedTransformFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTransforms() :
      op->vtkWeightedTransformFilter::GetNumberOfTransforms());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWeightedTransformFilter_AddInputValuesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputValuesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWeightedTransformFilter *op = static_cast<vtkWeightedTransformFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AddInputValuesOn();
    }
    else
    {
      op->vtkWeightedTransformFilter::AddInputValuesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWeightedTransformFilter_AddInputValuesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputValuesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWeightedTransformFilter *op = static_cast<vtkWeightedTransformFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AddInputValuesOff();
    }
    else
    {
      op->vtkWeightedTransformFilter::AddInputValuesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWeightedTransformFilter_SetAddInputValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAddInputValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWeightedTransformFilter *op = static_cast<vtkWeightedTransformFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAddInputValues(temp0);
    }
    else
    {
      op->vtkWeightedTransformFilter::SetAddInputValues(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWeightedTransformFilter_GetAddInputValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAddInputValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWeightedTransformFilter *op = static_cast<vtkWeightedTransformFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAddInputValues() :
      op->vtkWeightedTransformFilter::GetAddInputValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkWeightedTransformFilter_Methods[] = {
  {"IsTypeOf", PyvtkWeightedTransformFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkWeightedTransformFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkWeightedTransformFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkWeightedTransformFilter\nC++: static vtkWeightedTransformFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkWeightedTransformFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkWeightedTransformFilter\nC++: vtkWeightedTransformFilter *NewInstance()\n\n"},
  {"GetMTime", PyvtkWeightedTransformFilter_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn the MTime also considering the filter's transforms.\n"},
  {"SetWeightArray", PyvtkWeightedTransformFilter_SetWeightArray, METH_VARARGS,
   "V.SetWeightArray(string)\nC++: virtual void SetWeightArray(const char *_arg)\n\nWeightArray is the string name of the DataArray in the input's\nFieldData that holds the weighting coefficients for each point.\nThe filter will first look for the array in the input's PointData\nFieldData.  If the array isn't there, the filter looks in the\ninput's FieldData.  The WeightArray can have tuples of any\nlength, but must have a tuple for every point in the input data\nset. This array transforms points, normals, and vectors.\n"},
  {"GetWeightArray", PyvtkWeightedTransformFilter_GetWeightArray, METH_VARARGS,
   "V.GetWeightArray() -> string\nC++: virtual char *GetWeightArray()\n\nWeightArray is the string name of the DataArray in the input's\nFieldData that holds the weighting coefficients for each point.\nThe filter will first look for the array in the input's PointData\nFieldData.  If the array isn't there, the filter looks in the\ninput's FieldData.  The WeightArray can have tuples of any\nlength, but must have a tuple for every point in the input data\nset. This array transforms points, normals, and vectors.\n"},
  {"SetTransformIndexArray", PyvtkWeightedTransformFilter_SetTransformIndexArray, METH_VARARGS,
   "V.SetTransformIndexArray(string)\nC++: virtual void SetTransformIndexArray(const char *_arg)\n\nTransformIndexArray is the string name of the DataArray in the\ninput's FieldData that holds the indices for the transforms for\neach point. These indices are used to select which transforms\neach weight of the DataArray refers.  If the TransformIndexArray\nis not specified, the weights of each point are assumed to map\ndirectly to a transform. This DataArray must be of type\nUnsignedShort, which effectively limits the number of transforms\nto 65536 if a transform index array is used.\n\n* The filter will first look for the array in the input's\n  PointData\n* FieldData.  If the array isn't there, the filter looks in the\n* input's FieldData.  The TransformIndexArray can have tuples of\n  any\n* length, but must have a tuple for every point in the input data\nset.\n* This array transforms points, normals, and vectors.\n"},
  {"GetTransformIndexArray", PyvtkWeightedTransformFilter_GetTransformIndexArray, METH_VARARGS,
   "V.GetTransformIndexArray() -> string\nC++: virtual char *GetTransformIndexArray()\n\nTransformIndexArray is the string name of the DataArray in the\ninput's FieldData that holds the indices for the transforms for\neach point. These indices are used to select which transforms\neach weight of the DataArray refers.  If the TransformIndexArray\nis not specified, the weights of each point are assumed to map\ndirectly to a transform. This DataArray must be of type\nUnsignedShort, which effectively limits the number of transforms\nto 65536 if a transform index array is used.\n\n* The filter will first look for the array in the input's\n  PointData\n* FieldData.  If the array isn't there, the filter looks in the\n* input's FieldData.  The TransformIndexArray can have tuples of\n  any\n* length, but must have a tuple for every point in the input data\nset.\n* This array transforms points, normals, and vectors.\n"},
  {"SetCellDataWeightArray", PyvtkWeightedTransformFilter_SetCellDataWeightArray, METH_VARARGS,
   "V.SetCellDataWeightArray(string)\nC++: virtual void SetCellDataWeightArray(const char *_arg)\n\nThe CellDataWeightArray is analogous to the WeightArray, except\nfor CellData.  The array is searched for first in the CellData\nFieldData, then in the input's FieldData.  The data array must\nhave a tuple for each cell.  This array is used to transform only\nnormals and vectors.\n"},
  {"GetCellDataWeightArray", PyvtkWeightedTransformFilter_GetCellDataWeightArray, METH_VARARGS,
   "V.GetCellDataWeightArray() -> string\nC++: virtual char *GetCellDataWeightArray()\n\nThe CellDataWeightArray is analogous to the WeightArray, except\nfor CellData.  The array is searched for first in the CellData\nFieldData, then in the input's FieldData.  The data array must\nhave a tuple for each cell.  This array is used to transform only\nnormals and vectors.\n"},
  {"SetCellDataTransformIndexArray", PyvtkWeightedTransformFilter_SetCellDataTransformIndexArray, METH_VARARGS,
   "V.SetCellDataTransformIndexArray(string)\nC++: virtual void SetCellDataTransformIndexArray(const char *_arg)\n\nThe CellDataTransformIndexArray is like a TransformIndexArray,\nexcept for cell data.  The array must have type UnsignedShort.\n"},
  {"GetCellDataTransformIndexArray", PyvtkWeightedTransformFilter_GetCellDataTransformIndexArray, METH_VARARGS,
   "V.GetCellDataTransformIndexArray() -> string\nC++: virtual char *GetCellDataTransformIndexArray()\n\nThe CellDataTransformIndexArray is like a TransformIndexArray,\nexcept for cell data.  The array must have type UnsignedShort.\n"},
  {"SetTransform", PyvtkWeightedTransformFilter_SetTransform, METH_VARARGS,
   "V.SetTransform(vtkAbstractTransform, int)\nC++: virtual void SetTransform(vtkAbstractTransform *transform,\n    int num)\n\nSet or Get one of the filter's transforms. The transform number\nmust be less than the number of transforms allocated for the\nobject.  Setting a transform slot to nullptr is equivalent to\nassigning an overriding weight of zero to that filter slot.\n"},
  {"GetTransform", PyvtkWeightedTransformFilter_GetTransform, METH_VARARGS,
   "V.GetTransform(int) -> vtkAbstractTransform\nC++: virtual vtkAbstractTransform *GetTransform(int num)\n\nSet or Get one of the filter's transforms. The transform number\nmust be less than the number of transforms allocated for the\nobject.  Setting a transform slot to nullptr is equivalent to\nassigning an overriding weight of zero to that filter slot.\n"},
  {"SetNumberOfTransforms", PyvtkWeightedTransformFilter_SetNumberOfTransforms, METH_VARARGS,
   "V.SetNumberOfTransforms(int)\nC++: virtual void SetNumberOfTransforms(int num)\n\nSet the number of transforms for the filter.  References to\nnon-existent filter numbers in the data array is equivalent to a\nweight of zero (i.e., no contribution of that filter or weight). \nThe maximum number of transforms is limited to 65536 if transform\nindex arrays are used.\n"},
  {"GetNumberOfTransforms", PyvtkWeightedTransformFilter_GetNumberOfTransforms, METH_VARARGS,
   "V.GetNumberOfTransforms() -> int\nC++: virtual int GetNumberOfTransforms()\n\nSet the number of transforms for the filter.  References to\nnon-existent filter numbers in the data array is equivalent to a\nweight of zero (i.e., no contribution of that filter or weight). \nThe maximum number of transforms is limited to 65536 if transform\nindex arrays are used.\n"},
  {"AddInputValuesOn", PyvtkWeightedTransformFilter_AddInputValuesOn, METH_VARARGS,
   "V.AddInputValuesOn()\nC++: virtual void AddInputValuesOn()\n\nIf AddInputValues is true, the output values of this filter will\nbe offset from the input values.  The effect is exactly\nequivalent to having an identity transform of weight 1 added into\neach output point.\n"},
  {"AddInputValuesOff", PyvtkWeightedTransformFilter_AddInputValuesOff, METH_VARARGS,
   "V.AddInputValuesOff()\nC++: virtual void AddInputValuesOff()\n\nIf AddInputValues is true, the output values of this filter will\nbe offset from the input values.  The effect is exactly\nequivalent to having an identity transform of weight 1 added into\neach output point.\n"},
  {"SetAddInputValues", PyvtkWeightedTransformFilter_SetAddInputValues, METH_VARARGS,
   "V.SetAddInputValues(int)\nC++: virtual void SetAddInputValues(vtkTypeBool _arg)\n\nIf AddInputValues is true, the output values of this filter will\nbe offset from the input values.  The effect is exactly\nequivalent to having an identity transform of weight 1 added into\neach output point.\n"},
  {"GetAddInputValues", PyvtkWeightedTransformFilter_GetAddInputValues, METH_VARARGS,
   "V.GetAddInputValues() -> int\nC++: virtual vtkTypeBool GetAddInputValues()\n\nIf AddInputValues is true, the output values of this filter will\nbe offset from the input values.  The effect is exactly\nequivalent to having an identity transform of weight 1 added into\neach output point.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkWeightedTransformFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersHybridPython.vtkWeightedTransformFilter", // tp_name
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
  PyvtkWeightedTransformFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkWeightedTransformFilter_StaticNew()
{
  return vtkWeightedTransformFilter::New();
}

PyObject *PyvtkWeightedTransformFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkWeightedTransformFilter_Type, PyvtkWeightedTransformFilter_Methods,
    "vtkWeightedTransformFilter",
 &PyvtkWeightedTransformFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkWeightedTransformFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPointSetAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkWeightedTransformFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkWeightedTransformFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkWeightedTransformFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

