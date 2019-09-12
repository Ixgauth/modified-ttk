// python wrapper for vtkMergeFilter
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
#include "vtkMergeFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMergeFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMergeFilter_ClassNew(); }

#ifndef DECLARED_PyvtkDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkMergeFilter_Doc =
  "vtkMergeFilter - extract separate components of data from different\ndatasets\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkMergeFilter is a filter that extracts separate components of data\n"
  "from different datasets and merges them into a single dataset. The\n"
  "output from this filter is of the same type as the input (i.e.,\n"
  "vtkDataSet.) It treats both cell and point data set attributes.\n\n";


static PyObject *
PyvtkMergeFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMergeFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMergeFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMergeFilter *tempr = vtkMergeFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMergeFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMergeFilter::NewInstance());

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
PyvtkMergeFilter_SetGeometryInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeometryInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
  {
    if (ap.IsBound())
    {
      op->SetGeometryInputData(temp0);
    }
    else
    {
      op->vtkMergeFilter::SetGeometryInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeFilter_GetGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetGeometry() :
      op->vtkMergeFilter::GetGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeFilter_SetGeometryConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeometryConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetGeometryConnection(temp0);
    }
    else
    {
      op->vtkMergeFilter::SetGeometryConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeFilter_SetScalarsData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarsData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
  {
    if (ap.IsBound())
    {
      op->SetScalarsData(temp0);
    }
    else
    {
      op->vtkMergeFilter::SetScalarsData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeFilter_GetScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetScalars() :
      op->vtkMergeFilter::GetScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeFilter_SetScalarsConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarsConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetScalarsConnection(temp0);
    }
    else
    {
      op->vtkMergeFilter::SetScalarsConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeFilter_SetVectorsData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorsData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
  {
    if (ap.IsBound())
    {
      op->SetVectorsData(temp0);
    }
    else
    {
      op->vtkMergeFilter::SetVectorsData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeFilter_GetVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetVectors() :
      op->vtkMergeFilter::GetVectors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeFilter_SetVectorsConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorsConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetVectorsConnection(temp0);
    }
    else
    {
      op->vtkMergeFilter::SetVectorsConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeFilter_SetNormalsData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalsData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
  {
    if (ap.IsBound())
    {
      op->SetNormalsData(temp0);
    }
    else
    {
      op->vtkMergeFilter::SetNormalsData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeFilter_GetNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetNormals() :
      op->vtkMergeFilter::GetNormals());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeFilter_SetNormalsConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalsConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetNormalsConnection(temp0);
    }
    else
    {
      op->vtkMergeFilter::SetNormalsConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeFilter_SetTCoordsData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTCoordsData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
  {
    if (ap.IsBound())
    {
      op->SetTCoordsData(temp0);
    }
    else
    {
      op->vtkMergeFilter::SetTCoordsData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeFilter_GetTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetTCoords() :
      op->vtkMergeFilter::GetTCoords());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeFilter_SetTCoordsConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTCoordsConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetTCoordsConnection(temp0);
    }
    else
    {
      op->vtkMergeFilter::SetTCoordsConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeFilter_SetTensorsData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTensorsData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
  {
    if (ap.IsBound())
    {
      op->SetTensorsData(temp0);
    }
    else
    {
      op->vtkMergeFilter::SetTensorsData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeFilter_GetTensors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTensors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetTensors() :
      op->vtkMergeFilter::GetTensors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeFilter_SetTensorsConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTensorsConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetTensorsConnection(temp0);
    }
    else
    {
      op->vtkMergeFilter::SetTensorsConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeFilter_AddField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFilter *op = static_cast<vtkMergeFilter *>(vp);

  const char *temp0 = nullptr;
  vtkDataSet *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataSet"))
  {
    if (ap.IsBound())
    {
      op->AddField(temp0, temp1);
    }
    else
    {
      op->vtkMergeFilter::AddField(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMergeFilter_Methods[] = {
  {"IsTypeOf", PyvtkMergeFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMergeFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMergeFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkMergeFilter\nC++: static vtkMergeFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMergeFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkMergeFilter\nC++: vtkMergeFilter *NewInstance()\n\n"},
  {"SetGeometryInputData", PyvtkMergeFilter_SetGeometryInputData, METH_VARARGS,
   "V.SetGeometryInputData(vtkDataSet)\nC++: void SetGeometryInputData(vtkDataSet *input)\n\nSpecify object from which to extract geometry information. Note\nthat this method does not connect the pipeline. The algorithm\nwill work on the input data as it is without updating the\nproducer of the data. See SetGeometryConnection for connecting\nthe pipeline.\n"},
  {"GetGeometry", PyvtkMergeFilter_GetGeometry, METH_VARARGS,
   "V.GetGeometry() -> vtkDataSet\nC++: vtkDataSet *GetGeometry()\n\nSpecify object from which to extract geometry information. Note\nthat this method does not connect the pipeline. The algorithm\nwill work on the input data as it is without updating the\nproducer of the data. See SetGeometryConnection for connecting\nthe pipeline.\n"},
  {"SetGeometryConnection", PyvtkMergeFilter_SetGeometryConnection, METH_VARARGS,
   "V.SetGeometryConnection(vtkAlgorithmOutput)\nC++: void SetGeometryConnection(vtkAlgorithmOutput *algOutput)\n\nSpecify object from which to extract geometry information.\nEquivalent to SetInputConnection(0, algOutput)\n"},
  {"SetScalarsData", PyvtkMergeFilter_SetScalarsData, METH_VARARGS,
   "V.SetScalarsData(vtkDataSet)\nC++: void SetScalarsData(vtkDataSet *)\n\nSpecify object from which to extract scalar information. Note\nthat this method does not connect the pipeline. The algorithm\nwill work on the input data as it is without updating the\nproducer of the data. See SetScalarConnection for connecting the\npipeline.\n"},
  {"GetScalars", PyvtkMergeFilter_GetScalars, METH_VARARGS,
   "V.GetScalars() -> vtkDataSet\nC++: vtkDataSet *GetScalars()\n\nSpecify object from which to extract scalar information. Note\nthat this method does not connect the pipeline. The algorithm\nwill work on the input data as it is without updating the\nproducer of the data. See SetScalarConnection for connecting the\npipeline.\n"},
  {"SetScalarsConnection", PyvtkMergeFilter_SetScalarsConnection, METH_VARARGS,
   "V.SetScalarsConnection(vtkAlgorithmOutput)\nC++: void SetScalarsConnection(vtkAlgorithmOutput *algOutput)\n\nSpecify object from which to extract scalar information.\nEquivalent to SetInputConnection(1, algOutput)\n"},
  {"SetVectorsData", PyvtkMergeFilter_SetVectorsData, METH_VARARGS,
   "V.SetVectorsData(vtkDataSet)\nC++: void SetVectorsData(vtkDataSet *)\n\nSet / get the object from which to extract vector information.\nNote that this method does not connect the pipeline. The\nalgorithm will work on the input data as it is without updating\nthe producer of the data. See SetVectorsConnection for connecting\nthe pipeline.\n"},
  {"GetVectors", PyvtkMergeFilter_GetVectors, METH_VARARGS,
   "V.GetVectors() -> vtkDataSet\nC++: vtkDataSet *GetVectors()\n\nSet / get the object from which to extract vector information.\nNote that this method does not connect the pipeline. The\nalgorithm will work on the input data as it is without updating\nthe producer of the data. See SetVectorsConnection for connecting\nthe pipeline.\n"},
  {"SetVectorsConnection", PyvtkMergeFilter_SetVectorsConnection, METH_VARARGS,
   "V.SetVectorsConnection(vtkAlgorithmOutput)\nC++: void SetVectorsConnection(vtkAlgorithmOutput *algOutput)\n\nSet the connection from which to extract vector information.\nEquivalent to SetInputConnection(2, algOutput)\n"},
  {"SetNormalsData", PyvtkMergeFilter_SetNormalsData, METH_VARARGS,
   "V.SetNormalsData(vtkDataSet)\nC++: void SetNormalsData(vtkDataSet *)\n\nSet / get the object from which to extract normal information.\nNote that this method does not connect the pipeline. The\nalgorithm will work on the input data as it is without updating\nthe producer of the data. See SetNormalsConnection for connecting\nthe pipeline.\n"},
  {"GetNormals", PyvtkMergeFilter_GetNormals, METH_VARARGS,
   "V.GetNormals() -> vtkDataSet\nC++: vtkDataSet *GetNormals()\n\nSet / get the object from which to extract normal information.\nNote that this method does not connect the pipeline. The\nalgorithm will work on the input data as it is without updating\nthe producer of the data. See SetNormalsConnection for connecting\nthe pipeline.\n"},
  {"SetNormalsConnection", PyvtkMergeFilter_SetNormalsConnection, METH_VARARGS,
   "V.SetNormalsConnection(vtkAlgorithmOutput)\nC++: void SetNormalsConnection(vtkAlgorithmOutput *algOutput)\n\nSet  the connection from which to extract normal information.\nEquivalent to SetInputConnection(3, algOutput)\n"},
  {"SetTCoordsData", PyvtkMergeFilter_SetTCoordsData, METH_VARARGS,
   "V.SetTCoordsData(vtkDataSet)\nC++: void SetTCoordsData(vtkDataSet *)\n\nSet / get the object from which to extract texture coordinates\ninformation. Note that this method does not connect the pipeline.\nThe algorithm will work on the input data as it is without\nupdating the producer of the data. See SetTCoordsConnection for\nconnecting the pipeline.\n"},
  {"GetTCoords", PyvtkMergeFilter_GetTCoords, METH_VARARGS,
   "V.GetTCoords() -> vtkDataSet\nC++: vtkDataSet *GetTCoords()\n\nSet / get the object from which to extract texture coordinates\ninformation. Note that this method does not connect the pipeline.\nThe algorithm will work on the input data as it is without\nupdating the producer of the data. See SetTCoordsConnection for\nconnecting the pipeline.\n"},
  {"SetTCoordsConnection", PyvtkMergeFilter_SetTCoordsConnection, METH_VARARGS,
   "V.SetTCoordsConnection(vtkAlgorithmOutput)\nC++: void SetTCoordsConnection(vtkAlgorithmOutput *algOutput)\n\nSet the connection from which to extract texture coordinates\ninformation. Equivalent to SetInputConnection(4, algOutput)\n"},
  {"SetTensorsData", PyvtkMergeFilter_SetTensorsData, METH_VARARGS,
   "V.SetTensorsData(vtkDataSet)\nC++: void SetTensorsData(vtkDataSet *)\n\nSet / get the object from which to extract tensor data. Note that\nthis method does not connect the pipeline. The algorithm will\nwork on the input data as it is without updating the producer of\nthe data. See SetTensorsConnection for connecting the pipeline.\n"},
  {"GetTensors", PyvtkMergeFilter_GetTensors, METH_VARARGS,
   "V.GetTensors() -> vtkDataSet\nC++: vtkDataSet *GetTensors()\n\nSet / get the object from which to extract tensor data. Note that\nthis method does not connect the pipeline. The algorithm will\nwork on the input data as it is without updating the producer of\nthe data. See SetTensorsConnection for connecting the pipeline.\n"},
  {"SetTensorsConnection", PyvtkMergeFilter_SetTensorsConnection, METH_VARARGS,
   "V.SetTensorsConnection(vtkAlgorithmOutput)\nC++: void SetTensorsConnection(vtkAlgorithmOutput *algOutput)\n\nSet the connection from which to extract tensor data. Equivalent\nto SetInputConnection(5, algOutput)\n"},
  {"AddField", PyvtkMergeFilter_AddField, METH_VARARGS,
   "V.AddField(string, vtkDataSet)\nC++: void AddField(const char *name, vtkDataSet *input)\n\nSet the object from which to extract a field and the name of the\nfield. Note that this does not create pipeline connectivity.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkMergeFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkMergeFilter", // tp_name
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
  PyvtkMergeFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMergeFilter_StaticNew()
{
  return vtkMergeFilter::New();
}

PyObject *PyvtkMergeFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkMergeFilter_Type, PyvtkMergeFilter_Methods,
    "vtkMergeFilter",
 &PyvtkMergeFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkMergeFilter_Type;

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

void PyVTKAddFile_vtkMergeFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMergeFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMergeFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

