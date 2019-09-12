// python wrapper for vtkDataSetToDataObjectFilter
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
#include "vtkDataSetToDataObjectFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDataSetToDataObjectFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDataSetToDataObjectFilter_ClassNew(); }

#ifndef DECLARED_PyvtkDataObjectAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataObjectAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataObjectAlgorithm_ClassNew
#endif

static const char *PyvtkDataSetToDataObjectFilter_Doc =
  "vtkDataSetToDataObjectFilter - map dataset into data object (i.e., a\nfield)\n\n"
  "Superclass: vtkDataObjectAlgorithm\n\n"
  "vtkDataSetToDataObjectFilter is an class that transforms a dataset\n"
  "into data object (i.e., a field). The field will have labeled data\n"
  "arrays corresponding to the topology, geometry, field data, and point\n"
  "and cell attribute data.\n\n"
  "You can control what portions of the dataset are converted into the\n"
  "output data object's field data. The instance variables Geometry,\n"
  "Topology, FieldData, PointData, and CellData are flags that control\n"
  "whether the dataset's geometry (e.g., points, spacing, origin);\n"
  "topology (e.g., cell connectivity, dimensions); the field data\n"
  "associated with the dataset's superclass data object; the dataset's\n"
  "point data attributes; and the dataset's cell data attributes. (Note:\n"
  "the data attributes include scalars, vectors, tensors, normals,\n"
  "texture coordinates, and field data.)\n\n"
  "The names used to create the field data are as follows. For\n"
  "vtkPolyData, \"Points\", \"Verts\", \"Lines\", \"Polys\", and \"Strips\". For\n"
  "vtkUnstructuredGrid, \"Cells\" and \"CellTypes\". For\n"
  "vtkStructuredPoints, \"Dimensions\", \"Spacing\", and \"Origin\". For\n"
  "vtkStructuredGrid, \"Points\" and \"Dimensions\". For vtkRectilinearGrid,\n"
  "\"XCoordinates\", \"YCoordinates\", and \"ZCoordinates\". for point\n"
  "attribute data, \"PointScalars\", \"PointVectors\", etc. For cell\n"
  "attribute data, \"CellScalars\", \"CellVectors\", etc. Field data arrays\n"
  "retain their original name.\n\n"
  "@sa\n"
  "vtkDataObject vtkFieldData vtkDataObjectToDataSetFilter\n\n";


static PyObject *
PyvtkDataSetToDataObjectFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDataSetToDataObjectFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataSetToDataObjectFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDataSetToDataObjectFilter *tempr = vtkDataSetToDataObjectFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSetToDataObjectFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataSetToDataObjectFilter::NewInstance());

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
PyvtkDataSetToDataObjectFilter_SetGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGeometry(temp0);
    }
    else
    {
      op->vtkDataSetToDataObjectFilter::SetGeometry(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_GetGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGeometry() :
      op->vtkDataSetToDataObjectFilter::GetGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_GeometryOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeometryOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GeometryOn();
    }
    else
    {
      op->vtkDataSetToDataObjectFilter::GeometryOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_GeometryOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeometryOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GeometryOff();
    }
    else
    {
      op->vtkDataSetToDataObjectFilter::GeometryOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_SetTopology(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTopology");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTopology(temp0);
    }
    else
    {
      op->vtkDataSetToDataObjectFilter::SetTopology(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_GetTopology(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTopology");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTopology() :
      op->vtkDataSetToDataObjectFilter::GetTopology());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_TopologyOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TopologyOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TopologyOn();
    }
    else
    {
      op->vtkDataSetToDataObjectFilter::TopologyOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_TopologyOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TopologyOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TopologyOff();
    }
    else
    {
      op->vtkDataSetToDataObjectFilter::TopologyOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_SetFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFieldData(temp0);
    }
    else
    {
      op->vtkDataSetToDataObjectFilter::SetFieldData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_GetFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFieldData() :
      op->vtkDataSetToDataObjectFilter::GetFieldData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_FieldDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FieldDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FieldDataOn();
    }
    else
    {
      op->vtkDataSetToDataObjectFilter::FieldDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_FieldDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FieldDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FieldDataOff();
    }
    else
    {
      op->vtkDataSetToDataObjectFilter::FieldDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_SetPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointData(temp0);
    }
    else
    {
      op->vtkDataSetToDataObjectFilter::SetPointData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_GetPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointData() :
      op->vtkDataSetToDataObjectFilter::GetPointData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_PointDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PointDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PointDataOn();
    }
    else
    {
      op->vtkDataSetToDataObjectFilter::PointDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_PointDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PointDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PointDataOff();
    }
    else
    {
      op->vtkDataSetToDataObjectFilter::PointDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_SetCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellData(temp0);
    }
    else
    {
      op->vtkDataSetToDataObjectFilter::SetCellData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_GetCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellData() :
      op->vtkDataSetToDataObjectFilter::GetCellData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_CellDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CellDataOn();
    }
    else
    {
      op->vtkDataSetToDataObjectFilter::CellDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_CellDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CellDataOff();
    }
    else
    {
      op->vtkDataSetToDataObjectFilter::CellDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDataSetToDataObjectFilter_Methods[] = {
  {"IsTypeOf", PyvtkDataSetToDataObjectFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDataSetToDataObjectFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDataSetToDataObjectFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDataSetToDataObjectFilter\nC++: static vtkDataSetToDataObjectFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDataSetToDataObjectFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDataSetToDataObjectFilter\nC++: vtkDataSetToDataObjectFilter *NewInstance()\n\n"},
  {"SetGeometry", PyvtkDataSetToDataObjectFilter_SetGeometry, METH_VARARGS,
   "V.SetGeometry(int)\nC++: virtual void SetGeometry(vtkTypeBool _arg)\n\nTurn on/off the conversion of dataset geometry to a data object.\n"},
  {"GetGeometry", PyvtkDataSetToDataObjectFilter_GetGeometry, METH_VARARGS,
   "V.GetGeometry() -> int\nC++: virtual vtkTypeBool GetGeometry()\n\nTurn on/off the conversion of dataset geometry to a data object.\n"},
  {"GeometryOn", PyvtkDataSetToDataObjectFilter_GeometryOn, METH_VARARGS,
   "V.GeometryOn()\nC++: virtual void GeometryOn()\n\nTurn on/off the conversion of dataset geometry to a data object.\n"},
  {"GeometryOff", PyvtkDataSetToDataObjectFilter_GeometryOff, METH_VARARGS,
   "V.GeometryOff()\nC++: virtual void GeometryOff()\n\nTurn on/off the conversion of dataset geometry to a data object.\n"},
  {"SetTopology", PyvtkDataSetToDataObjectFilter_SetTopology, METH_VARARGS,
   "V.SetTopology(int)\nC++: virtual void SetTopology(vtkTypeBool _arg)\n\nTurn on/off the conversion of dataset topology to a data object.\n"},
  {"GetTopology", PyvtkDataSetToDataObjectFilter_GetTopology, METH_VARARGS,
   "V.GetTopology() -> int\nC++: virtual vtkTypeBool GetTopology()\n\nTurn on/off the conversion of dataset topology to a data object.\n"},
  {"TopologyOn", PyvtkDataSetToDataObjectFilter_TopologyOn, METH_VARARGS,
   "V.TopologyOn()\nC++: virtual void TopologyOn()\n\nTurn on/off the conversion of dataset topology to a data object.\n"},
  {"TopologyOff", PyvtkDataSetToDataObjectFilter_TopologyOff, METH_VARARGS,
   "V.TopologyOff()\nC++: virtual void TopologyOff()\n\nTurn on/off the conversion of dataset topology to a data object.\n"},
  {"SetFieldData", PyvtkDataSetToDataObjectFilter_SetFieldData, METH_VARARGS,
   "V.SetFieldData(int)\nC++: virtual void SetFieldData(vtkTypeBool _arg)\n\nTurn on/off the conversion of dataset field data to a data\nobject.\n"},
  {"GetFieldData", PyvtkDataSetToDataObjectFilter_GetFieldData, METH_VARARGS,
   "V.GetFieldData() -> int\nC++: virtual vtkTypeBool GetFieldData()\n\nTurn on/off the conversion of dataset field data to a data\nobject.\n"},
  {"FieldDataOn", PyvtkDataSetToDataObjectFilter_FieldDataOn, METH_VARARGS,
   "V.FieldDataOn()\nC++: virtual void FieldDataOn()\n\nTurn on/off the conversion of dataset field data to a data\nobject.\n"},
  {"FieldDataOff", PyvtkDataSetToDataObjectFilter_FieldDataOff, METH_VARARGS,
   "V.FieldDataOff()\nC++: virtual void FieldDataOff()\n\nTurn on/off the conversion of dataset field data to a data\nobject.\n"},
  {"SetPointData", PyvtkDataSetToDataObjectFilter_SetPointData, METH_VARARGS,
   "V.SetPointData(int)\nC++: virtual void SetPointData(vtkTypeBool _arg)\n\nTurn on/off the conversion of dataset point data to a data\nobject.\n"},
  {"GetPointData", PyvtkDataSetToDataObjectFilter_GetPointData, METH_VARARGS,
   "V.GetPointData() -> int\nC++: virtual vtkTypeBool GetPointData()\n\nTurn on/off the conversion of dataset point data to a data\nobject.\n"},
  {"PointDataOn", PyvtkDataSetToDataObjectFilter_PointDataOn, METH_VARARGS,
   "V.PointDataOn()\nC++: virtual void PointDataOn()\n\nTurn on/off the conversion of dataset point data to a data\nobject.\n"},
  {"PointDataOff", PyvtkDataSetToDataObjectFilter_PointDataOff, METH_VARARGS,
   "V.PointDataOff()\nC++: virtual void PointDataOff()\n\nTurn on/off the conversion of dataset point data to a data\nobject.\n"},
  {"SetCellData", PyvtkDataSetToDataObjectFilter_SetCellData, METH_VARARGS,
   "V.SetCellData(int)\nC++: virtual void SetCellData(vtkTypeBool _arg)\n\nTurn on/off the conversion of dataset cell data to a data object.\n"},
  {"GetCellData", PyvtkDataSetToDataObjectFilter_GetCellData, METH_VARARGS,
   "V.GetCellData() -> int\nC++: virtual vtkTypeBool GetCellData()\n\nTurn on/off the conversion of dataset cell data to a data object.\n"},
  {"CellDataOn", PyvtkDataSetToDataObjectFilter_CellDataOn, METH_VARARGS,
   "V.CellDataOn()\nC++: virtual void CellDataOn()\n\nTurn on/off the conversion of dataset cell data to a data object.\n"},
  {"CellDataOff", PyvtkDataSetToDataObjectFilter_CellDataOff, METH_VARARGS,
   "V.CellDataOff()\nC++: virtual void CellDataOff()\n\nTurn on/off the conversion of dataset cell data to a data object.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDataSetToDataObjectFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkDataSetToDataObjectFilter", // tp_name
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
  PyvtkDataSetToDataObjectFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDataSetToDataObjectFilter_StaticNew()
{
  return vtkDataSetToDataObjectFilter::New();
}

PyObject *PyvtkDataSetToDataObjectFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDataSetToDataObjectFilter_Type, PyvtkDataSetToDataObjectFilter_Methods,
    "vtkDataSetToDataObjectFilter",
 &PyvtkDataSetToDataObjectFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkDataSetToDataObjectFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataObjectAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDataSetToDataObjectFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDataSetToDataObjectFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDataSetToDataObjectFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

