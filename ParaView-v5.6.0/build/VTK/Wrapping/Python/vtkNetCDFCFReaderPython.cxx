// python wrapper for vtkNetCDFCFReader
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
#include "vtkNetCDFCFReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkNetCDFCFReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkNetCDFCFReader_ClassNew(); }

#ifndef DECLARED_PyvtkNetCDFReader_ClassNew
extern "C" { PyObject *PyvtkNetCDFReader_ClassNew(); }
#define DECLARED_PyvtkNetCDFReader_ClassNew
#endif

static const char *PyvtkNetCDFCFReader_Doc =
  "vtkNetCDFCFReader - Reads netCDF files that follow the CF convention.\n\n"
  "Superclass: vtkNetCDFReader\n\n"
  "Details on this convention can be found at\n"
  "<http://cf-pcmdi.llnl.gov/>.\n\n";


static PyObject *
PyvtkNetCDFCFReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkNetCDFCFReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCFReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCFReader *op = static_cast<vtkNetCDFCFReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkNetCDFCFReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCFReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkNetCDFCFReader *tempr = vtkNetCDFCFReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCFReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCFReader *op = static_cast<vtkNetCDFCFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkNetCDFCFReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkNetCDFCFReader::NewInstance());

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
PyvtkNetCDFCFReader_GetSphericalCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSphericalCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCFReader *op = static_cast<vtkNetCDFCFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSphericalCoordinates() :
      op->vtkNetCDFCFReader::GetSphericalCoordinates());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCFReader_SetSphericalCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSphericalCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCFReader *op = static_cast<vtkNetCDFCFReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSphericalCoordinates(temp0);
    }
    else
    {
      op->vtkNetCDFCFReader::SetSphericalCoordinates(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCFReader_SphericalCoordinatesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SphericalCoordinatesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCFReader *op = static_cast<vtkNetCDFCFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SphericalCoordinatesOn();
    }
    else
    {
      op->vtkNetCDFCFReader::SphericalCoordinatesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCFReader_SphericalCoordinatesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SphericalCoordinatesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCFReader *op = static_cast<vtkNetCDFCFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SphericalCoordinatesOff();
    }
    else
    {
      op->vtkNetCDFCFReader::SphericalCoordinatesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCFReader_GetVerticalScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVerticalScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCFReader *op = static_cast<vtkNetCDFCFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetVerticalScale() :
      op->vtkNetCDFCFReader::GetVerticalScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCFReader_SetVerticalScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVerticalScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCFReader *op = static_cast<vtkNetCDFCFReader *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVerticalScale(temp0);
    }
    else
    {
      op->vtkNetCDFCFReader::SetVerticalScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCFReader_GetVerticalBias(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVerticalBias");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCFReader *op = static_cast<vtkNetCDFCFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetVerticalBias() :
      op->vtkNetCDFCFReader::GetVerticalBias());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCFReader_SetVerticalBias(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVerticalBias");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCFReader *op = static_cast<vtkNetCDFCFReader *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVerticalBias(temp0);
    }
    else
    {
      op->vtkNetCDFCFReader::SetVerticalBias(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCFReader_GetOutputType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCFReader *op = static_cast<vtkNetCDFCFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputType() :
      op->vtkNetCDFCFReader::GetOutputType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCFReader_SetOutputType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCFReader *op = static_cast<vtkNetCDFCFReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputType(temp0);
    }
    else
    {
      op->vtkNetCDFCFReader::SetOutputType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCFReader_SetOutputTypeToAutomatic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputTypeToAutomatic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCFReader *op = static_cast<vtkNetCDFCFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputTypeToAutomatic();
    }
    else
    {
      op->vtkNetCDFCFReader::SetOutputTypeToAutomatic();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCFReader_SetOutputTypeToImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputTypeToImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCFReader *op = static_cast<vtkNetCDFCFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputTypeToImage();
    }
    else
    {
      op->vtkNetCDFCFReader::SetOutputTypeToImage();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCFReader_SetOutputTypeToRectilinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputTypeToRectilinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCFReader *op = static_cast<vtkNetCDFCFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputTypeToRectilinear();
    }
    else
    {
      op->vtkNetCDFCFReader::SetOutputTypeToRectilinear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCFReader_SetOutputTypeToStructured(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputTypeToStructured");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCFReader *op = static_cast<vtkNetCDFCFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputTypeToStructured();
    }
    else
    {
      op->vtkNetCDFCFReader::SetOutputTypeToStructured();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCFReader_SetOutputTypeToUnstructured(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputTypeToUnstructured");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCFReader *op = static_cast<vtkNetCDFCFReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputTypeToUnstructured();
    }
    else
    {
      op->vtkNetCDFCFReader::SetOutputTypeToUnstructured();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNetCDFCFReader_CanReadFile(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CanReadFile");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkNetCDFCFReader::CanReadFile(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkNetCDFCFReader_Methods[] = {
  {"IsTypeOf", PyvtkNetCDFCFReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkNetCDFCFReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkNetCDFCFReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkNetCDFCFReader\nC++: static vtkNetCDFCFReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkNetCDFCFReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkNetCDFCFReader\nC++: vtkNetCDFCFReader *NewInstance()\n\n"},
  {"GetSphericalCoordinates", PyvtkNetCDFCFReader_GetSphericalCoordinates, METH_VARARGS,
   "V.GetSphericalCoordinates() -> int\nC++: virtual vtkTypeBool GetSphericalCoordinates()\n\nIf on (the default), then 3D data with latitude/longitude\ndimensions will be read in as curvilinear data shaped like\nspherical coordinates. If false, then the data will always be\nread in Cartesian coordinates.\n"},
  {"SetSphericalCoordinates", PyvtkNetCDFCFReader_SetSphericalCoordinates, METH_VARARGS,
   "V.SetSphericalCoordinates(int)\nC++: virtual void SetSphericalCoordinates(vtkTypeBool _arg)\n\nIf on (the default), then 3D data with latitude/longitude\ndimensions will be read in as curvilinear data shaped like\nspherical coordinates. If false, then the data will always be\nread in Cartesian coordinates.\n"},
  {"SphericalCoordinatesOn", PyvtkNetCDFCFReader_SphericalCoordinatesOn, METH_VARARGS,
   "V.SphericalCoordinatesOn()\nC++: virtual void SphericalCoordinatesOn()\n\nIf on (the default), then 3D data with latitude/longitude\ndimensions will be read in as curvilinear data shaped like\nspherical coordinates. If false, then the data will always be\nread in Cartesian coordinates.\n"},
  {"SphericalCoordinatesOff", PyvtkNetCDFCFReader_SphericalCoordinatesOff, METH_VARARGS,
   "V.SphericalCoordinatesOff()\nC++: virtual void SphericalCoordinatesOff()\n\nIf on (the default), then 3D data with latitude/longitude\ndimensions will be read in as curvilinear data shaped like\nspherical coordinates. If false, then the data will always be\nread in Cartesian coordinates.\n"},
  {"GetVerticalScale", PyvtkNetCDFCFReader_GetVerticalScale, METH_VARARGS,
   "V.GetVerticalScale() -> float\nC++: virtual double GetVerticalScale()\n\nThe scale and bias of the vertical component of spherical\ncoordinates.  It is common to write the vertical component with\nrespect to something other than the center of the sphere (for\nexample, the surface).  In this case, it might be necessary to\nscale and/or bias the vertical height.  The height will become\nheight*scale + bias.  Keep in mind that if the positive attribute\nof the vertical dimension is down, then the height is negated. By\ndefault the scale is 1 and the bias is 0 (that is, no change). \nThe scaling will be adjusted if it results in invalid (negative)\nvertical values.\n"},
  {"SetVerticalScale", PyvtkNetCDFCFReader_SetVerticalScale, METH_VARARGS,
   "V.SetVerticalScale(float)\nC++: virtual void SetVerticalScale(double _arg)\n\nThe scale and bias of the vertical component of spherical\ncoordinates.  It is common to write the vertical component with\nrespect to something other than the center of the sphere (for\nexample, the surface).  In this case, it might be necessary to\nscale and/or bias the vertical height.  The height will become\nheight*scale + bias.  Keep in mind that if the positive attribute\nof the vertical dimension is down, then the height is negated. By\ndefault the scale is 1 and the bias is 0 (that is, no change). \nThe scaling will be adjusted if it results in invalid (negative)\nvertical values.\n"},
  {"GetVerticalBias", PyvtkNetCDFCFReader_GetVerticalBias, METH_VARARGS,
   "V.GetVerticalBias() -> float\nC++: virtual double GetVerticalBias()\n\nThe scale and bias of the vertical component of spherical\ncoordinates.  It is common to write the vertical component with\nrespect to something other than the center of the sphere (for\nexample, the surface).  In this case, it might be necessary to\nscale and/or bias the vertical height.  The height will become\nheight*scale + bias.  Keep in mind that if the positive attribute\nof the vertical dimension is down, then the height is negated. By\ndefault the scale is 1 and the bias is 0 (that is, no change). \nThe scaling will be adjusted if it results in invalid (negative)\nvertical values.\n"},
  {"SetVerticalBias", PyvtkNetCDFCFReader_SetVerticalBias, METH_VARARGS,
   "V.SetVerticalBias(float)\nC++: virtual void SetVerticalBias(double _arg)\n\nThe scale and bias of the vertical component of spherical\ncoordinates.  It is common to write the vertical component with\nrespect to something other than the center of the sphere (for\nexample, the surface).  In this case, it might be necessary to\nscale and/or bias the vertical height.  The height will become\nheight*scale + bias.  Keep in mind that if the positive attribute\nof the vertical dimension is down, then the height is negated. By\ndefault the scale is 1 and the bias is 0 (that is, no change). \nThe scaling will be adjusted if it results in invalid (negative)\nvertical values.\n"},
  {"GetOutputType", PyvtkNetCDFCFReader_GetOutputType, METH_VARARGS,
   "V.GetOutputType() -> int\nC++: virtual int GetOutputType()\n\nSet/get the data type of the output.  The index used is taken\nfrom the list of VTK data types in vtkType.h.  Valid types are\nVTK_IMAGE_DATA, VTK_RECTILINEAR_GRID, VTK_STRUCTURED_GRID, and\nVTK_UNSTRUCTURED_GRID.  In addition you can set the type to -1\n(the default), and this reader will pick the data type best\nsuited for the dimensions being read.\n"},
  {"SetOutputType", PyvtkNetCDFCFReader_SetOutputType, METH_VARARGS,
   "V.SetOutputType(int)\nC++: virtual void SetOutputType(int type)\n\nSet/get the data type of the output.  The index used is taken\nfrom the list of VTK data types in vtkType.h.  Valid types are\nVTK_IMAGE_DATA, VTK_RECTILINEAR_GRID, VTK_STRUCTURED_GRID, and\nVTK_UNSTRUCTURED_GRID.  In addition you can set the type to -1\n(the default), and this reader will pick the data type best\nsuited for the dimensions being read.\n"},
  {"SetOutputTypeToAutomatic", PyvtkNetCDFCFReader_SetOutputTypeToAutomatic, METH_VARARGS,
   "V.SetOutputTypeToAutomatic()\nC++: void SetOutputTypeToAutomatic()\n\nSet/get the data type of the output.  The index used is taken\nfrom the list of VTK data types in vtkType.h.  Valid types are\nVTK_IMAGE_DATA, VTK_RECTILINEAR_GRID, VTK_STRUCTURED_GRID, and\nVTK_UNSTRUCTURED_GRID.  In addition you can set the type to -1\n(the default), and this reader will pick the data type best\nsuited for the dimensions being read.\n"},
  {"SetOutputTypeToImage", PyvtkNetCDFCFReader_SetOutputTypeToImage, METH_VARARGS,
   "V.SetOutputTypeToImage()\nC++: void SetOutputTypeToImage()\n\nSet/get the data type of the output.  The index used is taken\nfrom the list of VTK data types in vtkType.h.  Valid types are\nVTK_IMAGE_DATA, VTK_RECTILINEAR_GRID, VTK_STRUCTURED_GRID, and\nVTK_UNSTRUCTURED_GRID.  In addition you can set the type to -1\n(the default), and this reader will pick the data type best\nsuited for the dimensions being read.\n"},
  {"SetOutputTypeToRectilinear", PyvtkNetCDFCFReader_SetOutputTypeToRectilinear, METH_VARARGS,
   "V.SetOutputTypeToRectilinear()\nC++: void SetOutputTypeToRectilinear()\n\nSet/get the data type of the output.  The index used is taken\nfrom the list of VTK data types in vtkType.h.  Valid types are\nVTK_IMAGE_DATA, VTK_RECTILINEAR_GRID, VTK_STRUCTURED_GRID, and\nVTK_UNSTRUCTURED_GRID.  In addition you can set the type to -1\n(the default), and this reader will pick the data type best\nsuited for the dimensions being read.\n"},
  {"SetOutputTypeToStructured", PyvtkNetCDFCFReader_SetOutputTypeToStructured, METH_VARARGS,
   "V.SetOutputTypeToStructured()\nC++: void SetOutputTypeToStructured()\n\nSet/get the data type of the output.  The index used is taken\nfrom the list of VTK data types in vtkType.h.  Valid types are\nVTK_IMAGE_DATA, VTK_RECTILINEAR_GRID, VTK_STRUCTURED_GRID, and\nVTK_UNSTRUCTURED_GRID.  In addition you can set the type to -1\n(the default), and this reader will pick the data type best\nsuited for the dimensions being read.\n"},
  {"SetOutputTypeToUnstructured", PyvtkNetCDFCFReader_SetOutputTypeToUnstructured, METH_VARARGS,
   "V.SetOutputTypeToUnstructured()\nC++: void SetOutputTypeToUnstructured()\n\nSet/get the data type of the output.  The index used is taken\nfrom the list of VTK data types in vtkType.h.  Valid types are\nVTK_IMAGE_DATA, VTK_RECTILINEAR_GRID, VTK_STRUCTURED_GRID, and\nVTK_UNSTRUCTURED_GRID.  In addition you can set the type to -1\n(the default), and this reader will pick the data type best\nsuited for the dimensions being read.\n"},
  {"CanReadFile", PyvtkNetCDFCFReader_CanReadFile, METH_VARARGS,
   "V.CanReadFile(string) -> int\nC++: static int CanReadFile(const char *filename)\n\nReturns true if the given file can be read.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkNetCDFCFReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIONetCDFPython.vtkNetCDFCFReader", // tp_name
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
  PyvtkNetCDFCFReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkNetCDFCFReader_StaticNew()
{
  return vtkNetCDFCFReader::New();
}

PyObject *PyvtkNetCDFCFReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkNetCDFCFReader_Type, PyvtkNetCDFCFReader_Methods,
    "vtkNetCDFCFReader",
 &PyvtkNetCDFCFReader_StaticNew);

  PyTypeObject *pytype = &PyvtkNetCDFCFReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkNetCDFReader_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkNetCDFCFReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkNetCDFCFReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkNetCDFCFReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

