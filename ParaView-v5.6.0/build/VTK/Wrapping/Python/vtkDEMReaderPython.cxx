// python wrapper for vtkDEMReader
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
#include "vtkInformationVector.h"
#include "vtkDEMReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDEMReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDEMReader_ClassNew(); }

#ifndef DECLARED_PyvtkImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkImageAlgorithm_ClassNew
#endif

static const char *PyvtkDEMReader_Doc =
  "vtkDEMReader - read a digital elevation model (DEM) file\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "vtkDEMReader reads digital elevation files and creates image data.\n"
  "Digital elevation files are produced by the <A\n"
  "HREF=\"http://www.usgs.gov\">US Geological Survey. A complete\n"
  "description of the DEM file is located at the USGS site. The reader\n"
  "reads the entire dem file and create a vtkImageData that contains a\n"
  "single scalar component that is the elevation in meters. The spacing\n"
  "is also expressed in meters. A number of get methods provide access\n"
  "to fields on the header.\n\n";


static PyObject *
PyvtkDEMReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDEMReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDEMReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDEMReader *op = static_cast<vtkDEMReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDEMReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDEMReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDEMReader *tempr = vtkDEMReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDEMReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDEMReader *op = static_cast<vtkDEMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDEMReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDEMReader::NewInstance());

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
PyvtkDEMReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDEMReader *op = static_cast<vtkDEMReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileName(temp0);
    }
    else
    {
      op->vtkDEMReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDEMReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDEMReader *op = static_cast<vtkDEMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkDEMReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDEMReader_SetElevationReference(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElevationReference");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDEMReader *op = static_cast<vtkDEMReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetElevationReference(temp0);
    }
    else
    {
      op->vtkDEMReader::SetElevationReference(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDEMReader_GetElevationReferenceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElevationReferenceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDEMReader *op = static_cast<vtkDEMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetElevationReferenceMinValue() :
      op->vtkDEMReader::GetElevationReferenceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDEMReader_GetElevationReferenceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElevationReferenceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDEMReader *op = static_cast<vtkDEMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetElevationReferenceMaxValue() :
      op->vtkDEMReader::GetElevationReferenceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDEMReader_GetElevationReference(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElevationReference");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDEMReader *op = static_cast<vtkDEMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetElevationReference() :
      op->vtkDEMReader::GetElevationReference());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDEMReader_SetElevationReferenceToSeaLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElevationReferenceToSeaLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDEMReader *op = static_cast<vtkDEMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetElevationReferenceToSeaLevel();
    }
    else
    {
      op->vtkDEMReader::SetElevationReferenceToSeaLevel();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDEMReader_SetElevationReferenceToElevationBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElevationReferenceToElevationBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDEMReader *op = static_cast<vtkDEMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetElevationReferenceToElevationBounds();
    }
    else
    {
      op->vtkDEMReader::SetElevationReferenceToElevationBounds();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDEMReader_GetElevationReferenceAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElevationReferenceAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDEMReader *op = static_cast<vtkDEMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetElevationReferenceAsString() :
      op->vtkDEMReader::GetElevationReferenceAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDEMReader_GetMapLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMapLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDEMReader *op = static_cast<vtkDEMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetMapLabel() :
      op->vtkDEMReader::GetMapLabel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDEMReader_GetDEMLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDEMLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDEMReader *op = static_cast<vtkDEMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDEMLevel() :
      op->vtkDEMReader::GetDEMLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDEMReader_GetElevationPattern(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElevationPattern");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDEMReader *op = static_cast<vtkDEMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetElevationPattern() :
      op->vtkDEMReader::GetElevationPattern());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDEMReader_GetGroundSystem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGroundSystem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDEMReader *op = static_cast<vtkDEMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGroundSystem() :
      op->vtkDEMReader::GetGroundSystem());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDEMReader_GetGroundZone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGroundZone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDEMReader *op = static_cast<vtkDEMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGroundZone() :
      op->vtkDEMReader::GetGroundZone());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDEMReader_GetProjectionParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDEMReader *op = static_cast<vtkDEMReader *>(vp);

  size_t sizer = 15;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetProjectionParameters() :
      op->vtkDEMReader::GetProjectionParameters());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkDEMReader_GetPlaneUnitOfMeasure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaneUnitOfMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDEMReader *op = static_cast<vtkDEMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPlaneUnitOfMeasure() :
      op->vtkDEMReader::GetPlaneUnitOfMeasure());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDEMReader_GetElevationUnitOfMeasure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElevationUnitOfMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDEMReader *op = static_cast<vtkDEMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetElevationUnitOfMeasure() :
      op->vtkDEMReader::GetElevationUnitOfMeasure());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDEMReader_GetPolygonSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolygonSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDEMReader *op = static_cast<vtkDEMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPolygonSize() :
      op->vtkDEMReader::GetPolygonSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDEMReader_GetElevationBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElevationBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDEMReader *op = static_cast<vtkDEMReader *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetElevationBounds() :
      op->vtkDEMReader::GetElevationBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkDEMReader_GetLocalRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocalRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDEMReader *op = static_cast<vtkDEMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetLocalRotation() :
      op->vtkDEMReader::GetLocalRotation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDEMReader_GetAccuracyCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAccuracyCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDEMReader *op = static_cast<vtkDEMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAccuracyCode() :
      op->vtkDEMReader::GetAccuracyCode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDEMReader_GetSpatialResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpatialResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDEMReader *op = static_cast<vtkDEMReader *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetSpatialResolution() :
      op->vtkDEMReader::GetSpatialResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkDEMReader_GetProfileDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProfileDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDEMReader *op = static_cast<vtkDEMReader *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetProfileDimension() :
      op->vtkDEMReader::GetProfileDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkDEMReader_Methods[] = {
  {"IsTypeOf", PyvtkDEMReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDEMReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDEMReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDEMReader\nC++: static vtkDEMReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDEMReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDEMReader\nC++: vtkDEMReader *NewInstance()\n\n"},
  {"SetFileName", PyvtkDEMReader_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *_arg)\n\nSpecify file name of Digital Elevation Model (DEM) file\n"},
  {"GetFileName", PyvtkDEMReader_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nSpecify file name of Digital Elevation Model (DEM) file\n"},
  {"SetElevationReference", PyvtkDEMReader_SetElevationReference, METH_VARARGS,
   "V.SetElevationReference(int)\nC++: virtual void SetElevationReference(int _arg)\n\nSpecify the elevation origin to use. By default, the elevation\norigin is equal to ElevationBounds[0]. A more convenient origin\nis to use sea level (i.e., a value of 0.0).\n"},
  {"GetElevationReferenceMinValue", PyvtkDEMReader_GetElevationReferenceMinValue, METH_VARARGS,
   "V.GetElevationReferenceMinValue() -> int\nC++: virtual int GetElevationReferenceMinValue()\n\nSpecify the elevation origin to use. By default, the elevation\norigin is equal to ElevationBounds[0]. A more convenient origin\nis to use sea level (i.e., a value of 0.0).\n"},
  {"GetElevationReferenceMaxValue", PyvtkDEMReader_GetElevationReferenceMaxValue, METH_VARARGS,
   "V.GetElevationReferenceMaxValue() -> int\nC++: virtual int GetElevationReferenceMaxValue()\n\nSpecify the elevation origin to use. By default, the elevation\norigin is equal to ElevationBounds[0]. A more convenient origin\nis to use sea level (i.e., a value of 0.0).\n"},
  {"GetElevationReference", PyvtkDEMReader_GetElevationReference, METH_VARARGS,
   "V.GetElevationReference() -> int\nC++: virtual int GetElevationReference()\n\nSpecify the elevation origin to use. By default, the elevation\norigin is equal to ElevationBounds[0]. A more convenient origin\nis to use sea level (i.e., a value of 0.0).\n"},
  {"SetElevationReferenceToSeaLevel", PyvtkDEMReader_SetElevationReferenceToSeaLevel, METH_VARARGS,
   "V.SetElevationReferenceToSeaLevel()\nC++: void SetElevationReferenceToSeaLevel()\n\nSpecify the elevation origin to use. By default, the elevation\norigin is equal to ElevationBounds[0]. A more convenient origin\nis to use sea level (i.e., a value of 0.0).\n"},
  {"SetElevationReferenceToElevationBounds", PyvtkDEMReader_SetElevationReferenceToElevationBounds, METH_VARARGS,
   "V.SetElevationReferenceToElevationBounds()\nC++: void SetElevationReferenceToElevationBounds()\n\nSpecify the elevation origin to use. By default, the elevation\norigin is equal to ElevationBounds[0]. A more convenient origin\nis to use sea level (i.e., a value of 0.0).\n"},
  {"GetElevationReferenceAsString", PyvtkDEMReader_GetElevationReferenceAsString, METH_VARARGS,
   "V.GetElevationReferenceAsString() -> string\nC++: const char *GetElevationReferenceAsString(void)\n\nSpecify the elevation origin to use. By default, the elevation\norigin is equal to ElevationBounds[0]. A more convenient origin\nis to use sea level (i.e., a value of 0.0).\n"},
  {"GetMapLabel", PyvtkDEMReader_GetMapLabel, METH_VARARGS,
   "V.GetMapLabel() -> string\nC++: virtual char *GetMapLabel()\n\nAn ASCII description of the map\n"},
  {"GetDEMLevel", PyvtkDEMReader_GetDEMLevel, METH_VARARGS,
   "V.GetDEMLevel() -> int\nC++: virtual int GetDEMLevel()\n\nCode 1=DEM-1, 2=DEM_2, ...\n"},
  {"GetElevationPattern", PyvtkDEMReader_GetElevationPattern, METH_VARARGS,
   "V.GetElevationPattern() -> int\nC++: virtual int GetElevationPattern()\n\nCode 1=regular, 2=random, reserved for future use\n"},
  {"GetGroundSystem", PyvtkDEMReader_GetGroundSystem, METH_VARARGS,
   "V.GetGroundSystem() -> int\nC++: virtual int GetGroundSystem()\n\nGround planimetric reference system\n"},
  {"GetGroundZone", PyvtkDEMReader_GetGroundZone, METH_VARARGS,
   "V.GetGroundZone() -> int\nC++: virtual int GetGroundZone()\n\nZone in ground planimetric reference system\n"},
  {"GetProjectionParameters", PyvtkDEMReader_GetProjectionParameters, METH_VARARGS,
   "V.GetProjectionParameters() -> (float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float)\nC++: float *GetProjectionParameters()\n\nMap Projection parameters. All are zero.\n"},
  {"GetPlaneUnitOfMeasure", PyvtkDEMReader_GetPlaneUnitOfMeasure, METH_VARARGS,
   "V.GetPlaneUnitOfMeasure() -> int\nC++: virtual int GetPlaneUnitOfMeasure()\n\nDefining unit of measure for ground planimetric coordinates\nthroughout the file. 0 = radians, 1 = feet, 2 = meters, 3 =\narc-seconds.\n"},
  {"GetElevationUnitOfMeasure", PyvtkDEMReader_GetElevationUnitOfMeasure, METH_VARARGS,
   "V.GetElevationUnitOfMeasure() -> int\nC++: virtual int GetElevationUnitOfMeasure()\n\nDefining unit of measure for elevation coordinates throughout the\nfile. 1 = feet, 2 = meters\n"},
  {"GetPolygonSize", PyvtkDEMReader_GetPolygonSize, METH_VARARGS,
   "V.GetPolygonSize() -> int\nC++: virtual int GetPolygonSize()\n\nNumber of sides in the polygon which defines the coverage of the\nDEM file. Set to 4.\n"},
  {"GetElevationBounds", PyvtkDEMReader_GetElevationBounds, METH_VARARGS,
   "V.GetElevationBounds() -> (float, float)\nC++: float *GetElevationBounds()\n\nMinimum and maximum elevation for the DEM. The units in the file\nare in ElevationUnitOfMeasure. This class converts them to\nmeters.\n"},
  {"GetLocalRotation", PyvtkDEMReader_GetLocalRotation, METH_VARARGS,
   "V.GetLocalRotation() -> float\nC++: virtual float GetLocalRotation()\n\nCounterclockwise angle (in radians) from the primary axis of the\nplanimetric reference to the primary axis of the DEM local\nreference system. IGNORED BY THIS IMPLEMENTATION.\n"},
  {"GetAccuracyCode", PyvtkDEMReader_GetAccuracyCode, METH_VARARGS,
   "V.GetAccuracyCode() -> int\nC++: virtual int GetAccuracyCode()\n\nAccuracy code for elevations. 0=unknown accuracy\n"},
  {"GetSpatialResolution", PyvtkDEMReader_GetSpatialResolution, METH_VARARGS,
   "V.GetSpatialResolution() -> (float, float, float)\nC++: float *GetSpatialResolution()\n\nDEM spatial resolution for x,y,z. Values are expressed in units\nof resolution. Since elevations are read as integers, this\npermits fractional elevations.\n"},
  {"GetProfileDimension", PyvtkDEMReader_GetProfileDimension, METH_VARARGS,
   "V.GetProfileDimension() -> (int, int)\nC++: int *GetProfileDimension()\n\nThe number of rows and columns in the DEM.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDEMReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOImagePython.vtkDEMReader", // tp_name
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
  PyvtkDEMReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDEMReader_StaticNew()
{
  return vtkDEMReader::New();
}

PyObject *PyvtkDEMReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDEMReader_Type, PyvtkDEMReader_Methods,
    "vtkDEMReader",
 &PyvtkDEMReader_StaticNew);

  PyTypeObject *pytype = &PyvtkDEMReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImageAlgorithm_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "REFERENCE_SEA_LEVEL", vtkDEMReader::REFERENCE_SEA_LEVEL },
        { "REFERENCE_ELEVATION_BOUNDS", vtkDEMReader::REFERENCE_ELEVATION_BOUNDS },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDEMReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDEMReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDEMReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

