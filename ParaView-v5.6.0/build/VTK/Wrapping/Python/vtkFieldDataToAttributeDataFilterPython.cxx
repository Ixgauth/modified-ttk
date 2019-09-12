// python wrapper for vtkFieldDataToAttributeDataFilter
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
#include "vtkDataArray.h"
#include "vtkInformationVector.h"
#include "vtkFieldDataToAttributeDataFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkFieldDataToAttributeDataFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkFieldDataToAttributeDataFilter_ClassNew(); }

#ifndef DECLARED_PyvtkDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkFieldDataToAttributeDataFilter_Doc =
  "vtkFieldDataToAttributeDataFilter - map field data to dataset\nattribute data\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkFieldDataToAttributeDataFilter is a class that maps field data\n"
  "into dataset attributes. The input to this filter is any type of\n"
  "dataset and the output is the same dataset (geometry/topology) with\n"
  "new attribute data (attribute data is passed through if not replaced\n"
  "during filter execution).\n\n"
  "To use this filter you must specify which field data from the input\n"
  "dataset to use. There are three possibilities: the cell field data,\n"
  "the point field data, or the field data associated with the data\n"
  "object superclass. Then you specify which attribute data to create:\n"
  "either cell attribute data or point attribute data.  Finally, you\n"
  "must define how to construct the various attribute data types (e.g.,\n"
  "scalars, vectors, normals, etc.) from the arrays and the components\n"
  "of the arrays from the field data. This is done by associating\n"
  "components in the input field with components making up the attribute\n"
  "data. For example, you would specify a scalar with three components\n"
  "(RGB) by assigning components from the field for the R, then G, then\n"
  "B values of the scalars.  You may also have to specify component\n"
  "ranges (for each R-G-B) to make sure that the number of R, G, and B\n"
  "values is the same. Also, you may want to normalize the components\n"
  "which helps distribute the data uniformly.\n\n"
  "This filter is often used in conjunction with\n"
  "vtkDataObjectToDataSetFilter.  vtkDataObjectToDataSetFilter filter\n"
  "generates dataset topology and geometry and passes its input field\n"
  "data along to its output. Then this filter is used to generate the\n"
  "attribute data to go along with the dataset.\n\n"
  "@warning\n"
  "Make sure that the data you extract is consistent. That is, if you\n"
  "have N points, extract N point attributes (scalars, vectors, etc.).\n\n"
  "@sa\n"
  "vtkFieldData vtkDataSet vtkDataObjectToDataSetFilter\n"
  "vtkDataSetAttributes vtkDataArray\n\n";


static PyObject *
PyvtkFieldDataToAttributeDataFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkFieldDataToAttributeDataFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFieldDataToAttributeDataFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkFieldDataToAttributeDataFilter *tempr = vtkFieldDataToAttributeDataFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFieldDataToAttributeDataFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFieldDataToAttributeDataFilter::NewInstance());

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
PyvtkFieldDataToAttributeDataFilter_SetInputField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInputField(temp0);
    }
    else
    {
      op->vtkFieldDataToAttributeDataFilter::SetInputField(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetInputField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInputField() :
      op->vtkFieldDataToAttributeDataFilter::GetInputField());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetInputFieldToDataObjectField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputFieldToDataObjectField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInputFieldToDataObjectField();
    }
    else
    {
      op->vtkFieldDataToAttributeDataFilter::SetInputFieldToDataObjectField();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetInputFieldToPointDataField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputFieldToPointDataField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInputFieldToPointDataField();
    }
    else
    {
      op->vtkFieldDataToAttributeDataFilter::SetInputFieldToPointDataField();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetInputFieldToCellDataField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputFieldToCellDataField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInputFieldToCellDataField();
    }
    else
    {
      op->vtkFieldDataToAttributeDataFilter::SetInputFieldToCellDataField();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetOutputAttributeData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputAttributeData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputAttributeData(temp0);
    }
    else
    {
      op->vtkFieldDataToAttributeDataFilter::SetOutputAttributeData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetOutputAttributeData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputAttributeData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputAttributeData() :
      op->vtkFieldDataToAttributeDataFilter::GetOutputAttributeData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetOutputAttributeDataToCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputAttributeDataToCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputAttributeDataToCellData();
    }
    else
    {
      op->vtkFieldDataToAttributeDataFilter::SetOutputAttributeDataToCellData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetOutputAttributeDataToPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputAttributeDataToPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputAttributeDataToPointData();
    }
    else
    {
      op->vtkFieldDataToAttributeDataFilter::SetOutputAttributeDataToPointData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetScalarComponent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetScalarComponent(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkFieldDataToAttributeDataFilter::SetScalarComponent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetScalarComponent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetScalarComponent(temp0, temp1, temp2);
    }
    else
    {
      op->vtkFieldDataToAttributeDataFilter::SetScalarComponent(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetScalarComponent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkFieldDataToAttributeDataFilter_SetScalarComponent_s1(self, args);
    case 3:
      return PyvtkFieldDataToAttributeDataFilter_SetScalarComponent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetScalarComponent");
  return nullptr;
}



static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetScalarComponentArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarComponentArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetScalarComponentArrayName(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetScalarComponentArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetScalarComponentArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarComponentArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarComponentArrayComponent(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetScalarComponentArrayComponent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetScalarComponentMinRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarComponentMinRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarComponentMinRange(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetScalarComponentMinRange(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetScalarComponentMaxRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarComponentMaxRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarComponentMaxRange(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetScalarComponentMaxRange(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetScalarComponentNormalizeFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarComponentNormalizeFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarComponentNormalizeFlag(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetScalarComponentNormalizeFlag(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetVectorComponent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetVectorComponent(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkFieldDataToAttributeDataFilter::SetVectorComponent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetVectorComponent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetVectorComponent(temp0, temp1, temp2);
    }
    else
    {
      op->vtkFieldDataToAttributeDataFilter::SetVectorComponent(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetVectorComponent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkFieldDataToAttributeDataFilter_SetVectorComponent_s1(self, args);
    case 3:
      return PyvtkFieldDataToAttributeDataFilter_SetVectorComponent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetVectorComponent");
  return nullptr;
}



static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetVectorComponentArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorComponentArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetVectorComponentArrayName(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetVectorComponentArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetVectorComponentArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorComponentArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVectorComponentArrayComponent(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetVectorComponentArrayComponent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetVectorComponentMinRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorComponentMinRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVectorComponentMinRange(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetVectorComponentMinRange(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetVectorComponentMaxRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorComponentMaxRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVectorComponentMaxRange(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetVectorComponentMaxRange(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetVectorComponentNormalizeFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorComponentNormalizeFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVectorComponentNormalizeFlag(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetVectorComponentNormalizeFlag(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetNormalComponent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetNormalComponent(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkFieldDataToAttributeDataFilter::SetNormalComponent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetNormalComponent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetNormalComponent(temp0, temp1, temp2);
    }
    else
    {
      op->vtkFieldDataToAttributeDataFilter::SetNormalComponent(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetNormalComponent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkFieldDataToAttributeDataFilter_SetNormalComponent_s1(self, args);
    case 3:
      return PyvtkFieldDataToAttributeDataFilter_SetNormalComponent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNormalComponent");
  return nullptr;
}



static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetNormalComponentArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalComponentArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNormalComponentArrayName(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetNormalComponentArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetNormalComponentArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalComponentArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNormalComponentArrayComponent(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetNormalComponentArrayComponent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetNormalComponentMinRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalComponentMinRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNormalComponentMinRange(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetNormalComponentMinRange(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetNormalComponentMaxRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalComponentMaxRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNormalComponentMaxRange(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetNormalComponentMaxRange(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetNormalComponentNormalizeFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalComponentNormalizeFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNormalComponentNormalizeFlag(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetNormalComponentNormalizeFlag(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetTensorComponent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTensorComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetTensorComponent(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkFieldDataToAttributeDataFilter::SetTensorComponent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetTensorComponent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTensorComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetTensorComponent(temp0, temp1, temp2);
    }
    else
    {
      op->vtkFieldDataToAttributeDataFilter::SetTensorComponent(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetTensorComponent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkFieldDataToAttributeDataFilter_SetTensorComponent_s1(self, args);
    case 3:
      return PyvtkFieldDataToAttributeDataFilter_SetTensorComponent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetTensorComponent");
  return nullptr;
}



static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetTensorComponentArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTensorComponentArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTensorComponentArrayName(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetTensorComponentArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetTensorComponentArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTensorComponentArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTensorComponentArrayComponent(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetTensorComponentArrayComponent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetTensorComponentMinRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTensorComponentMinRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTensorComponentMinRange(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetTensorComponentMinRange(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetTensorComponentMaxRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTensorComponentMaxRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTensorComponentMaxRange(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetTensorComponentMaxRange(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetTensorComponentNormalizeFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTensorComponentNormalizeFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTensorComponentNormalizeFlag(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetTensorComponentNormalizeFlag(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetTCoordComponent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTCoordComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetTCoordComponent(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkFieldDataToAttributeDataFilter::SetTCoordComponent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetTCoordComponent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTCoordComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetTCoordComponent(temp0, temp1, temp2);
    }
    else
    {
      op->vtkFieldDataToAttributeDataFilter::SetTCoordComponent(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetTCoordComponent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkFieldDataToAttributeDataFilter_SetTCoordComponent_s1(self, args);
    case 3:
      return PyvtkFieldDataToAttributeDataFilter_SetTCoordComponent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetTCoordComponent");
  return nullptr;
}



static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetTCoordComponentArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTCoordComponentArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTCoordComponentArrayName(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetTCoordComponentArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetTCoordComponentArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTCoordComponentArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTCoordComponentArrayComponent(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetTCoordComponentArrayComponent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetTCoordComponentMinRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTCoordComponentMinRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTCoordComponentMinRange(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetTCoordComponentMinRange(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetTCoordComponentMaxRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTCoordComponentMaxRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTCoordComponentMaxRange(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetTCoordComponentMaxRange(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetTCoordComponentNormalizeFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTCoordComponentNormalizeFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTCoordComponentNormalizeFlag(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetTCoordComponentNormalizeFlag(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetDefaultNormalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultNormalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDefaultNormalize(temp0);
    }
    else
    {
      op->vtkFieldDataToAttributeDataFilter::SetDefaultNormalize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetDefaultNormalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultNormalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDefaultNormalize() :
      op->vtkFieldDataToAttributeDataFilter::GetDefaultNormalize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_DefaultNormalizeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DefaultNormalizeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DefaultNormalizeOn();
    }
    else
    {
      op->vtkFieldDataToAttributeDataFilter::DefaultNormalizeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_DefaultNormalizeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DefaultNormalizeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DefaultNormalizeOff();
    }
    else
    {
      op->vtkFieldDataToAttributeDataFilter::DefaultNormalizeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_ConstructArray(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ConstructArray");

  vtkDataArray *temp0 = nullptr;
  int temp1;
  vtkDataArray *temp2 = nullptr;
  int temp3;
  vtkIdType temp4;
  vtkIdType temp5;
  int temp6;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(7) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkDataArray") &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
  {
    int tempr = vtkFieldDataToAttributeDataFilter::ConstructArray(temp0, temp1, temp2, temp3, temp4, temp5, temp6);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetFieldArray(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetFieldArray");

  vtkFieldData *temp0 = nullptr;
  const char *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkFieldData") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkDataArray *tempr = vtkFieldDataToAttributeDataFilter::GetFieldArray(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_UpdateComponentRange(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "UpdateComponentRange");

  vtkDataArray *temp0 = nullptr;
  const size_t size1 = 2;
  vtkIdType temp1[2];
  vtkIdType save1[2];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    int tempr = vtkFieldDataToAttributeDataFilter::UpdateComponentRange(temp0, temp1);

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

static PyMethodDef PyvtkFieldDataToAttributeDataFilter_Methods[] = {
  {"IsTypeOf", PyvtkFieldDataToAttributeDataFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkFieldDataToAttributeDataFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkFieldDataToAttributeDataFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkFieldDataToAttributeDataFilter\nC++: static vtkFieldDataToAttributeDataFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkFieldDataToAttributeDataFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkFieldDataToAttributeDataFilter\nC++: vtkFieldDataToAttributeDataFilter *NewInstance()\n\n"},
  {"SetInputField", PyvtkFieldDataToAttributeDataFilter_SetInputField, METH_VARARGS,
   "V.SetInputField(int)\nC++: virtual void SetInputField(int _arg)\n\nSpecify which field data to use to generate the output attribute\ndata. There are three choices: the field data associated with the\nvtkDataObject superclass; the point field attribute data; and the\ncell field attribute data.\n"},
  {"GetInputField", PyvtkFieldDataToAttributeDataFilter_GetInputField, METH_VARARGS,
   "V.GetInputField() -> int\nC++: virtual int GetInputField()\n\nSpecify which field data to use to generate the output attribute\ndata. There are three choices: the field data associated with the\nvtkDataObject superclass; the point field attribute data; and the\ncell field attribute data.\n"},
  {"SetInputFieldToDataObjectField", PyvtkFieldDataToAttributeDataFilter_SetInputFieldToDataObjectField, METH_VARARGS,
   "V.SetInputFieldToDataObjectField()\nC++: void SetInputFieldToDataObjectField()\n\nSpecify which field data to use to generate the output attribute\ndata. There are three choices: the field data associated with the\nvtkDataObject superclass; the point field attribute data; and the\ncell field attribute data.\n"},
  {"SetInputFieldToPointDataField", PyvtkFieldDataToAttributeDataFilter_SetInputFieldToPointDataField, METH_VARARGS,
   "V.SetInputFieldToPointDataField()\nC++: void SetInputFieldToPointDataField()\n\nSpecify which field data to use to generate the output attribute\ndata. There are three choices: the field data associated with the\nvtkDataObject superclass; the point field attribute data; and the\ncell field attribute data.\n"},
  {"SetInputFieldToCellDataField", PyvtkFieldDataToAttributeDataFilter_SetInputFieldToCellDataField, METH_VARARGS,
   "V.SetInputFieldToCellDataField()\nC++: void SetInputFieldToCellDataField()\n\nSpecify which field data to use to generate the output attribute\ndata. There are three choices: the field data associated with the\nvtkDataObject superclass; the point field attribute data; and the\ncell field attribute data.\n"},
  {"SetOutputAttributeData", PyvtkFieldDataToAttributeDataFilter_SetOutputAttributeData, METH_VARARGS,
   "V.SetOutputAttributeData(int)\nC++: virtual void SetOutputAttributeData(int _arg)\n\nSpecify which attribute data to output: point or cell data\nattributes.\n"},
  {"GetOutputAttributeData", PyvtkFieldDataToAttributeDataFilter_GetOutputAttributeData, METH_VARARGS,
   "V.GetOutputAttributeData() -> int\nC++: virtual int GetOutputAttributeData()\n\nSpecify which attribute data to output: point or cell data\nattributes.\n"},
  {"SetOutputAttributeDataToCellData", PyvtkFieldDataToAttributeDataFilter_SetOutputAttributeDataToCellData, METH_VARARGS,
   "V.SetOutputAttributeDataToCellData()\nC++: void SetOutputAttributeDataToCellData()\n\nSpecify which attribute data to output: point or cell data\nattributes.\n"},
  {"SetOutputAttributeDataToPointData", PyvtkFieldDataToAttributeDataFilter_SetOutputAttributeDataToPointData, METH_VARARGS,
   "V.SetOutputAttributeDataToPointData()\nC++: void SetOutputAttributeDataToPointData()\n\nSpecify which attribute data to output: point or cell data\nattributes.\n"},
  {"SetScalarComponent", PyvtkFieldDataToAttributeDataFilter_SetScalarComponent, METH_VARARGS,
   "V.SetScalarComponent(int, string, int, int, int, int)\nC++: void SetScalarComponent(int comp, const char *arrayName,\n    int arrayComp, int min, int max, int normalize)\nV.SetScalarComponent(int, string, int)\nC++: void SetScalarComponent(int comp, const char *arrayName,\n    int arrayComp)\n\nDefine the component(s) of the field to be used for the scalar\ncomponents.  Note that the parameter comp must lie between (0,4).\nTo define the field component to use you specify an array name\nand the component in that array. The (min,max) values are the\nrange of data in the component you wish to extract.\n"},
  {"GetScalarComponentArrayName", PyvtkFieldDataToAttributeDataFilter_GetScalarComponentArrayName, METH_VARARGS,
   "V.GetScalarComponentArrayName(int) -> string\nC++: const char *GetScalarComponentArrayName(int comp)\n\nDefine the component(s) of the field to be used for the scalar\ncomponents.  Note that the parameter comp must lie between (0,4).\nTo define the field component to use you specify an array name\nand the component in that array. The (min,max) values are the\nrange of data in the component you wish to extract.\n"},
  {"GetScalarComponentArrayComponent", PyvtkFieldDataToAttributeDataFilter_GetScalarComponentArrayComponent, METH_VARARGS,
   "V.GetScalarComponentArrayComponent(int) -> int\nC++: int GetScalarComponentArrayComponent(int comp)\n\nDefine the component(s) of the field to be used for the scalar\ncomponents.  Note that the parameter comp must lie between (0,4).\nTo define the field component to use you specify an array name\nand the component in that array. The (min,max) values are the\nrange of data in the component you wish to extract.\n"},
  {"GetScalarComponentMinRange", PyvtkFieldDataToAttributeDataFilter_GetScalarComponentMinRange, METH_VARARGS,
   "V.GetScalarComponentMinRange(int) -> int\nC++: int GetScalarComponentMinRange(int comp)\n\nDefine the component(s) of the field to be used for the scalar\ncomponents.  Note that the parameter comp must lie between (0,4).\nTo define the field component to use you specify an array name\nand the component in that array. The (min,max) values are the\nrange of data in the component you wish to extract.\n"},
  {"GetScalarComponentMaxRange", PyvtkFieldDataToAttributeDataFilter_GetScalarComponentMaxRange, METH_VARARGS,
   "V.GetScalarComponentMaxRange(int) -> int\nC++: int GetScalarComponentMaxRange(int comp)\n\nDefine the component(s) of the field to be used for the scalar\ncomponents.  Note that the parameter comp must lie between (0,4).\nTo define the field component to use you specify an array name\nand the component in that array. The (min,max) values are the\nrange of data in the component you wish to extract.\n"},
  {"GetScalarComponentNormalizeFlag", PyvtkFieldDataToAttributeDataFilter_GetScalarComponentNormalizeFlag, METH_VARARGS,
   "V.GetScalarComponentNormalizeFlag(int) -> int\nC++: int GetScalarComponentNormalizeFlag(int comp)\n\nDefine the component(s) of the field to be used for the scalar\ncomponents.  Note that the parameter comp must lie between (0,4).\nTo define the field component to use you specify an array name\nand the component in that array. The (min,max) values are the\nrange of data in the component you wish to extract.\n"},
  {"SetVectorComponent", PyvtkFieldDataToAttributeDataFilter_SetVectorComponent, METH_VARARGS,
   "V.SetVectorComponent(int, string, int, int, int, int)\nC++: void SetVectorComponent(int comp, const char *arrayName,\n    int arrayComp, int min, int max, int normalize)\nV.SetVectorComponent(int, string, int)\nC++: void SetVectorComponent(int comp, const char *arrayName,\n    int arrayComp)\n\nDefine the component(s) of the field to be used for the vector\ncomponents.  Note that the parameter comp must lie between (0,3).\nTo define the field component to use you specify an array name\nand the component in that array. The (min,max) values are the\nrange of data in the component you wish to extract.\n"},
  {"GetVectorComponentArrayName", PyvtkFieldDataToAttributeDataFilter_GetVectorComponentArrayName, METH_VARARGS,
   "V.GetVectorComponentArrayName(int) -> string\nC++: const char *GetVectorComponentArrayName(int comp)\n\nDefine the component(s) of the field to be used for the vector\ncomponents.  Note that the parameter comp must lie between (0,3).\nTo define the field component to use you specify an array name\nand the component in that array. The (min,max) values are the\nrange of data in the component you wish to extract.\n"},
  {"GetVectorComponentArrayComponent", PyvtkFieldDataToAttributeDataFilter_GetVectorComponentArrayComponent, METH_VARARGS,
   "V.GetVectorComponentArrayComponent(int) -> int\nC++: int GetVectorComponentArrayComponent(int comp)\n\nDefine the component(s) of the field to be used for the vector\ncomponents.  Note that the parameter comp must lie between (0,3).\nTo define the field component to use you specify an array name\nand the component in that array. The (min,max) values are the\nrange of data in the component you wish to extract.\n"},
  {"GetVectorComponentMinRange", PyvtkFieldDataToAttributeDataFilter_GetVectorComponentMinRange, METH_VARARGS,
   "V.GetVectorComponentMinRange(int) -> int\nC++: int GetVectorComponentMinRange(int comp)\n\nDefine the component(s) of the field to be used for the vector\ncomponents.  Note that the parameter comp must lie between (0,3).\nTo define the field component to use you specify an array name\nand the component in that array. The (min,max) values are the\nrange of data in the component you wish to extract.\n"},
  {"GetVectorComponentMaxRange", PyvtkFieldDataToAttributeDataFilter_GetVectorComponentMaxRange, METH_VARARGS,
   "V.GetVectorComponentMaxRange(int) -> int\nC++: int GetVectorComponentMaxRange(int comp)\n\nDefine the component(s) of the field to be used for the vector\ncomponents.  Note that the parameter comp must lie between (0,3).\nTo define the field component to use you specify an array name\nand the component in that array. The (min,max) values are the\nrange of data in the component you wish to extract.\n"},
  {"GetVectorComponentNormalizeFlag", PyvtkFieldDataToAttributeDataFilter_GetVectorComponentNormalizeFlag, METH_VARARGS,
   "V.GetVectorComponentNormalizeFlag(int) -> int\nC++: int GetVectorComponentNormalizeFlag(int comp)\n\nDefine the component(s) of the field to be used for the vector\ncomponents.  Note that the parameter comp must lie between (0,3).\nTo define the field component to use you specify an array name\nand the component in that array. The (min,max) values are the\nrange of data in the component you wish to extract.\n"},
  {"SetNormalComponent", PyvtkFieldDataToAttributeDataFilter_SetNormalComponent, METH_VARARGS,
   "V.SetNormalComponent(int, string, int, int, int, int)\nC++: void SetNormalComponent(int comp, const char *arrayName,\n    int arrayComp, int min, int max, int normalize)\nV.SetNormalComponent(int, string, int)\nC++: void SetNormalComponent(int comp, const char *arrayName,\n    int arrayComp)\n\nDefine the component(s) of the field to be used for the normal\ncomponents.  Note that the parameter comp must lie between (0,3).\nTo define the field component to use you specify an array name\nand the component in that array. The (min,max) values are the\nrange of data in the component you wish to extract.\n"},
  {"GetNormalComponentArrayName", PyvtkFieldDataToAttributeDataFilter_GetNormalComponentArrayName, METH_VARARGS,
   "V.GetNormalComponentArrayName(int) -> string\nC++: const char *GetNormalComponentArrayName(int comp)\n\nDefine the component(s) of the field to be used for the normal\ncomponents.  Note that the parameter comp must lie between (0,3).\nTo define the field component to use you specify an array name\nand the component in that array. The (min,max) values are the\nrange of data in the component you wish to extract.\n"},
  {"GetNormalComponentArrayComponent", PyvtkFieldDataToAttributeDataFilter_GetNormalComponentArrayComponent, METH_VARARGS,
   "V.GetNormalComponentArrayComponent(int) -> int\nC++: int GetNormalComponentArrayComponent(int comp)\n\nDefine the component(s) of the field to be used for the normal\ncomponents.  Note that the parameter comp must lie between (0,3).\nTo define the field component to use you specify an array name\nand the component in that array. The (min,max) values are the\nrange of data in the component you wish to extract.\n"},
  {"GetNormalComponentMinRange", PyvtkFieldDataToAttributeDataFilter_GetNormalComponentMinRange, METH_VARARGS,
   "V.GetNormalComponentMinRange(int) -> int\nC++: int GetNormalComponentMinRange(int comp)\n\nDefine the component(s) of the field to be used for the normal\ncomponents.  Note that the parameter comp must lie between (0,3).\nTo define the field component to use you specify an array name\nand the component in that array. The (min,max) values are the\nrange of data in the component you wish to extract.\n"},
  {"GetNormalComponentMaxRange", PyvtkFieldDataToAttributeDataFilter_GetNormalComponentMaxRange, METH_VARARGS,
   "V.GetNormalComponentMaxRange(int) -> int\nC++: int GetNormalComponentMaxRange(int comp)\n\nDefine the component(s) of the field to be used for the normal\ncomponents.  Note that the parameter comp must lie between (0,3).\nTo define the field component to use you specify an array name\nand the component in that array. The (min,max) values are the\nrange of data in the component you wish to extract.\n"},
  {"GetNormalComponentNormalizeFlag", PyvtkFieldDataToAttributeDataFilter_GetNormalComponentNormalizeFlag, METH_VARARGS,
   "V.GetNormalComponentNormalizeFlag(int) -> int\nC++: int GetNormalComponentNormalizeFlag(int comp)\n\nDefine the component(s) of the field to be used for the normal\ncomponents.  Note that the parameter comp must lie between (0,3).\nTo define the field component to use you specify an array name\nand the component in that array. The (min,max) values are the\nrange of data in the component you wish to extract.\n"},
  {"SetTensorComponent", PyvtkFieldDataToAttributeDataFilter_SetTensorComponent, METH_VARARGS,
   "V.SetTensorComponent(int, string, int, int, int, int)\nC++: void SetTensorComponent(int comp, const char *arrayName,\n    int arrayComp, int min, int max, int normalize)\nV.SetTensorComponent(int, string, int)\nC++: void SetTensorComponent(int comp, const char *arrayName,\n    int arrayComp)\n\nDefine the components of the field to be used for the tensor\ncomponents.  Note that the parameter comp must lie between (0,9).\nTo define the field component to use you specify an array name\nand the component in that array. The (min,max) values are the\nrange of data in the component you wish to extract.\n"},
  {"GetTensorComponentArrayName", PyvtkFieldDataToAttributeDataFilter_GetTensorComponentArrayName, METH_VARARGS,
   "V.GetTensorComponentArrayName(int) -> string\nC++: const char *GetTensorComponentArrayName(int comp)\n\nDefine the components of the field to be used for the tensor\ncomponents.  Note that the parameter comp must lie between (0,9).\nTo define the field component to use you specify an array name\nand the component in that array. The (min,max) values are the\nrange of data in the component you wish to extract.\n"},
  {"GetTensorComponentArrayComponent", PyvtkFieldDataToAttributeDataFilter_GetTensorComponentArrayComponent, METH_VARARGS,
   "V.GetTensorComponentArrayComponent(int) -> int\nC++: int GetTensorComponentArrayComponent(int comp)\n\nDefine the components of the field to be used for the tensor\ncomponents.  Note that the parameter comp must lie between (0,9).\nTo define the field component to use you specify an array name\nand the component in that array. The (min,max) values are the\nrange of data in the component you wish to extract.\n"},
  {"GetTensorComponentMinRange", PyvtkFieldDataToAttributeDataFilter_GetTensorComponentMinRange, METH_VARARGS,
   "V.GetTensorComponentMinRange(int) -> int\nC++: int GetTensorComponentMinRange(int comp)\n\nDefine the components of the field to be used for the tensor\ncomponents.  Note that the parameter comp must lie between (0,9).\nTo define the field component to use you specify an array name\nand the component in that array. The (min,max) values are the\nrange of data in the component you wish to extract.\n"},
  {"GetTensorComponentMaxRange", PyvtkFieldDataToAttributeDataFilter_GetTensorComponentMaxRange, METH_VARARGS,
   "V.GetTensorComponentMaxRange(int) -> int\nC++: int GetTensorComponentMaxRange(int comp)\n\nDefine the components of the field to be used for the tensor\ncomponents.  Note that the parameter comp must lie between (0,9).\nTo define the field component to use you specify an array name\nand the component in that array. The (min,max) values are the\nrange of data in the component you wish to extract.\n"},
  {"GetTensorComponentNormalizeFlag", PyvtkFieldDataToAttributeDataFilter_GetTensorComponentNormalizeFlag, METH_VARARGS,
   "V.GetTensorComponentNormalizeFlag(int) -> int\nC++: int GetTensorComponentNormalizeFlag(int comp)\n\nDefine the components of the field to be used for the tensor\ncomponents.  Note that the parameter comp must lie between (0,9).\nTo define the field component to use you specify an array name\nand the component in that array. The (min,max) values are the\nrange of data in the component you wish to extract.\n"},
  {"SetTCoordComponent", PyvtkFieldDataToAttributeDataFilter_SetTCoordComponent, METH_VARARGS,
   "V.SetTCoordComponent(int, string, int, int, int, int)\nC++: void SetTCoordComponent(int comp, const char *arrayName,\n    int arrayComp, int min, int max, int normalize)\nV.SetTCoordComponent(int, string, int)\nC++: void SetTCoordComponent(int comp, const char *arrayName,\n    int arrayComp)\n\nDefine the components of the field to be used for the cell\ntexture coord components.  Note that the parameter comp must lie\nbetween (0,9). To define the field component to use you specify\nan array name and the component in that array. The (min,max)\nvalues are the range of data in the component you wish to\nextract.\n"},
  {"GetTCoordComponentArrayName", PyvtkFieldDataToAttributeDataFilter_GetTCoordComponentArrayName, METH_VARARGS,
   "V.GetTCoordComponentArrayName(int) -> string\nC++: const char *GetTCoordComponentArrayName(int comp)\n\nDefine the components of the field to be used for the cell\ntexture coord components.  Note that the parameter comp must lie\nbetween (0,9). To define the field component to use you specify\nan array name and the component in that array. The (min,max)\nvalues are the range of data in the component you wish to\nextract.\n"},
  {"GetTCoordComponentArrayComponent", PyvtkFieldDataToAttributeDataFilter_GetTCoordComponentArrayComponent, METH_VARARGS,
   "V.GetTCoordComponentArrayComponent(int) -> int\nC++: int GetTCoordComponentArrayComponent(int comp)\n\nDefine the components of the field to be used for the cell\ntexture coord components.  Note that the parameter comp must lie\nbetween (0,9). To define the field component to use you specify\nan array name and the component in that array. The (min,max)\nvalues are the range of data in the component you wish to\nextract.\n"},
  {"GetTCoordComponentMinRange", PyvtkFieldDataToAttributeDataFilter_GetTCoordComponentMinRange, METH_VARARGS,
   "V.GetTCoordComponentMinRange(int) -> int\nC++: int GetTCoordComponentMinRange(int comp)\n\nDefine the components of the field to be used for the cell\ntexture coord components.  Note that the parameter comp must lie\nbetween (0,9). To define the field component to use you specify\nan array name and the component in that array. The (min,max)\nvalues are the range of data in the component you wish to\nextract.\n"},
  {"GetTCoordComponentMaxRange", PyvtkFieldDataToAttributeDataFilter_GetTCoordComponentMaxRange, METH_VARARGS,
   "V.GetTCoordComponentMaxRange(int) -> int\nC++: int GetTCoordComponentMaxRange(int comp)\n\nDefine the components of the field to be used for the cell\ntexture coord components.  Note that the parameter comp must lie\nbetween (0,9). To define the field component to use you specify\nan array name and the component in that array. The (min,max)\nvalues are the range of data in the component you wish to\nextract.\n"},
  {"GetTCoordComponentNormalizeFlag", PyvtkFieldDataToAttributeDataFilter_GetTCoordComponentNormalizeFlag, METH_VARARGS,
   "V.GetTCoordComponentNormalizeFlag(int) -> int\nC++: int GetTCoordComponentNormalizeFlag(int comp)\n\nDefine the components of the field to be used for the cell\ntexture coord components.  Note that the parameter comp must lie\nbetween (0,9). To define the field component to use you specify\nan array name and the component in that array. The (min,max)\nvalues are the range of data in the component you wish to\nextract.\n"},
  {"SetDefaultNormalize", PyvtkFieldDataToAttributeDataFilter_SetDefaultNormalize, METH_VARARGS,
   "V.SetDefaultNormalize(int)\nC++: virtual void SetDefaultNormalize(vtkTypeBool _arg)\n\nSet the default Normalize() flag for those methods setting a\ndefault Normalize value (e.g., SetScalarComponents).\n"},
  {"GetDefaultNormalize", PyvtkFieldDataToAttributeDataFilter_GetDefaultNormalize, METH_VARARGS,
   "V.GetDefaultNormalize() -> int\nC++: virtual vtkTypeBool GetDefaultNormalize()\n\nSet the default Normalize() flag for those methods setting a\ndefault Normalize value (e.g., SetScalarComponents).\n"},
  {"DefaultNormalizeOn", PyvtkFieldDataToAttributeDataFilter_DefaultNormalizeOn, METH_VARARGS,
   "V.DefaultNormalizeOn()\nC++: virtual void DefaultNormalizeOn()\n\nSet the default Normalize() flag for those methods setting a\ndefault Normalize value (e.g., SetScalarComponents).\n"},
  {"DefaultNormalizeOff", PyvtkFieldDataToAttributeDataFilter_DefaultNormalizeOff, METH_VARARGS,
   "V.DefaultNormalizeOff()\nC++: virtual void DefaultNormalizeOff()\n\nSet the default Normalize() flag for those methods setting a\ndefault Normalize value (e.g., SetScalarComponents).\n"},
  {"ConstructArray", PyvtkFieldDataToAttributeDataFilter_ConstructArray, METH_VARARGS,
   "V.ConstructArray(vtkDataArray, int, vtkDataArray, int, int, int,\n    int) -> int\nC++: static int ConstructArray(vtkDataArray *da, int comp,\n    vtkDataArray *frray, int fieldComp, vtkIdType min,\n    vtkIdType max, int normalize)\n\nConstruct a portion of a data array (the comp portion) from\nanother data array and its component. The variables min and max\ncontrol the range of the data to use from the other data array;\nnormalize is a flag that when set will normalize the data between\n(0,1).\n"},
  {"GetFieldArray", PyvtkFieldDataToAttributeDataFilter_GetFieldArray, METH_VARARGS,
   "V.GetFieldArray(vtkFieldData, string, int) -> vtkDataArray\nC++: static vtkDataArray *GetFieldArray(vtkFieldData *fd,\n    const char *name, int comp)\n\nReturn an array of a particular name from field data and do error\nchecking.\n"},
  {"UpdateComponentRange", PyvtkFieldDataToAttributeDataFilter_UpdateComponentRange, METH_VARARGS,
   "V.UpdateComponentRange(vtkDataArray, [int, int]) -> int\nC++: static int UpdateComponentRange(vtkDataArray *da,\n    vtkIdType compRange[2])\n\nUpdate the maximum and minimum component range values. Returns a\nflag indicating whether the range was updated.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkFieldDataToAttributeDataFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkFieldDataToAttributeDataFilter", // tp_name
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
  PyvtkFieldDataToAttributeDataFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkFieldDataToAttributeDataFilter_StaticNew()
{
  return vtkFieldDataToAttributeDataFilter::New();
}

PyObject *PyvtkFieldDataToAttributeDataFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkFieldDataToAttributeDataFilter_Type, PyvtkFieldDataToAttributeDataFilter_Methods,
    "vtkFieldDataToAttributeDataFilter",
 &PyvtkFieldDataToAttributeDataFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkFieldDataToAttributeDataFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataSetAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkFieldDataToAttributeDataFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFieldDataToAttributeDataFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkFieldDataToAttributeDataFilter", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 5; c++)
  {
    static const struct { const char *name; int value; }
      constants[5] = {
        { "VTK_DATA_OBJECT_FIELD", 0 },
        { "VTK_POINT_DATA_FIELD", 1 },
        { "VTK_CELL_DATA_FIELD", 2 },
        { "VTK_CELL_DATA", 0 },
        { "VTK_POINT_DATA", 1 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

