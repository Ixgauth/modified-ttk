// python wrapper for vtkImageImport
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
#include "vtkImageImport.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageImport(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageImport_ClassNew(); }

#ifndef DECLARED_PyvtkImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkImageAlgorithm_ClassNew
#endif

static const char *PyvtkImageImport_Doc =
  "vtkImageImport - Import data from a C array.\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "vtkImageImport provides methods needed to import image data from a\n"
  "source independent of VTK, such as a simple C array or a third-party\n"
  "pipeline. Note that the VTK convention is for the image voxel index\n"
  "(0,0,0) to be the lower-left corner of the image, while most 2D image\n"
  "formats use the upper-left corner.  You can use vtkImageFlip to\n"
  "correct the orientation after the image has been loaded into VTK.\n"
  "Note that is also possible to import the raw data from a Python\n"
  "string instead of from a C array. The array applies on scalar point\n"
  "data only, not on cell data.\n"
  "@sa\n"
  "vtkImageExport\n\n";


static PyObject *
PyvtkImageImport_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageImport::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageImport_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageImport::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageImport_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageImport *tempr = vtkImageImport::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageImport_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageImport *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageImport::NewInstance());

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
PyvtkImageImport_CopyImportVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyImportVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->CopyImportVoidPointer(temp0, temp1);
    }
    else
    {
      op->vtkImageImport::CopyImportVoidPointer(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf0.obj != 0)
  {
    PyBuffer_Release(&pbuf0);
  }
#endif
  return result;
}


static PyObject *
PyvtkImageImport_SetImportVoidPointer_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImportVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    if (ap.IsBound())
    {
      op->SetImportVoidPointer(temp0);
    }
    else
    {
      op->vtkImageImport::SetImportVoidPointer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf0.obj != 0)
  {
    PyBuffer_Release(&pbuf0);
  }
#endif
  return result;
}

static PyObject *
PyvtkImageImport_SetImportVoidPointer_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImportVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetImportVoidPointer(temp0, temp1);
    }
    else
    {
      op->vtkImageImport::SetImportVoidPointer(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf0.obj != 0)
  {
    PyBuffer_Release(&pbuf0);
  }
#endif
  return result;
}

static PyObject *
PyvtkImageImport_SetImportVoidPointer(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkImageImport_SetImportVoidPointer_s1(self, args);
    case 2:
      return PyvtkImageImport_SetImportVoidPointer_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetImportVoidPointer");
  return nullptr;
}



static PyObject *
PyvtkImageImport_GetImportVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImportVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetImportVoidPointer() :
      op->vtkImageImport::GetImportVoidPointer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageImport_SetDataScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDataScalarType(temp0);
    }
    else
    {
      op->vtkImageImport::SetDataScalarType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageImport_SetDataScalarTypeToDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarTypeToDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataScalarTypeToDouble();
    }
    else
    {
      op->vtkImageImport::SetDataScalarTypeToDouble();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageImport_SetDataScalarTypeToFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarTypeToFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataScalarTypeToFloat();
    }
    else
    {
      op->vtkImageImport::SetDataScalarTypeToFloat();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageImport_SetDataScalarTypeToInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarTypeToInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataScalarTypeToInt();
    }
    else
    {
      op->vtkImageImport::SetDataScalarTypeToInt();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageImport_SetDataScalarTypeToShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarTypeToShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataScalarTypeToShort();
    }
    else
    {
      op->vtkImageImport::SetDataScalarTypeToShort();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageImport_SetDataScalarTypeToUnsignedShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarTypeToUnsignedShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataScalarTypeToUnsignedShort();
    }
    else
    {
      op->vtkImageImport::SetDataScalarTypeToUnsignedShort();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageImport_SetDataScalarTypeToUnsignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarTypeToUnsignedChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataScalarTypeToUnsignedChar();
    }
    else
    {
      op->vtkImageImport::SetDataScalarTypeToUnsignedChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageImport_GetDataScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataScalarType() :
      op->vtkImageImport::GetDataScalarType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageImport_GetDataScalarTypeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataScalarTypeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDataScalarTypeAsString() :
      op->vtkImageImport::GetDataScalarTypeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageImport_SetNumberOfScalarComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfScalarComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfScalarComponents(temp0);
    }
    else
    {
      op->vtkImageImport::SetNumberOfScalarComponents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageImport_GetNumberOfScalarComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfScalarComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfScalarComponents() :
      op->vtkImageImport::GetNumberOfScalarComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageImport_SetDataExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  int temp0;
  int temp1;
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
      op->SetDataExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkImageImport::SetDataExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageImport_SetDataExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDataExtent(temp0);
    }
    else
    {
      op->vtkImageImport::SetDataExtent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageImport_SetDataExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkImageImport_SetDataExtent_s1(self, args);
    case 1:
      return PyvtkImageImport_SetDataExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDataExtent");
  return nullptr;
}



static PyObject *
PyvtkImageImport_GetDataExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetDataExtent() :
      op->vtkImageImport::GetDataExtent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageImport_SetDataExtentToWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataExtentToWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataExtentToWholeExtent();
    }
    else
    {
      op->vtkImageImport::SetDataExtentToWholeExtent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageImport_SetDataSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetDataSpacing(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageImport::SetDataSpacing(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageImport_SetDataSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDataSpacing(temp0);
    }
    else
    {
      op->vtkImageImport::SetDataSpacing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageImport_SetDataSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageImport_SetDataSpacing_s1(self, args);
    case 1:
      return PyvtkImageImport_SetDataSpacing_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDataSpacing");
  return nullptr;
}



static PyObject *
PyvtkImageImport_GetDataSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDataSpacing() :
      op->vtkImageImport::GetDataSpacing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageImport_SetDataOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetDataOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageImport::SetDataOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageImport_SetDataOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDataOrigin(temp0);
    }
    else
    {
      op->vtkImageImport::SetDataOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageImport_SetDataOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageImport_SetDataOrigin_s1(self, args);
    case 1:
      return PyvtkImageImport_SetDataOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDataOrigin");
  return nullptr;
}



static PyObject *
PyvtkImageImport_GetDataOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDataOrigin() :
      op->vtkImageImport::GetDataOrigin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageImport_SetWholeExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  int temp0;
  int temp1;
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
      op->SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkImageImport::SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageImport_SetWholeExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetWholeExtent(temp0);
    }
    else
    {
      op->vtkImageImport::SetWholeExtent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageImport_SetWholeExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkImageImport_SetWholeExtent_s1(self, args);
    case 1:
      return PyvtkImageImport_SetWholeExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetWholeExtent");
  return nullptr;
}



static PyObject *
PyvtkImageImport_GetWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetWholeExtent() :
      op->vtkImageImport::GetWholeExtent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageImport_SetScalarArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarArrayName(temp0);
    }
    else
    {
      op->vtkImageImport::SetScalarArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageImport_GetScalarArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetScalarArrayName() :
      op->vtkImageImport::GetScalarArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageImport_SetCallbackUserData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCallbackUserData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    if (ap.IsBound())
    {
      op->SetCallbackUserData(temp0);
    }
    else
    {
      op->vtkImageImport::SetCallbackUserData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf0.obj != 0)
  {
    PyBuffer_Release(&pbuf0);
  }
#endif
  return result;
}


static PyObject *
PyvtkImageImport_GetCallbackUserData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCallbackUserData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetCallbackUserData() :
      op->vtkImageImport::GetCallbackUserData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageImport_InvokePipelineModifiedCallbacks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvokePipelineModifiedCallbacks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->InvokePipelineModifiedCallbacks() :
      op->vtkImageImport::InvokePipelineModifiedCallbacks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageImport_InvokeUpdateInformationCallbacks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvokeUpdateInformationCallbacks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InvokeUpdateInformationCallbacks();
    }
    else
    {
      op->vtkImageImport::InvokeUpdateInformationCallbacks();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageImport_InvokeExecuteInformationCallbacks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvokeExecuteInformationCallbacks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InvokeExecuteInformationCallbacks();
    }
    else
    {
      op->vtkImageImport::InvokeExecuteInformationCallbacks();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageImport_InvokeExecuteDataCallbacks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvokeExecuteDataCallbacks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InvokeExecuteDataCallbacks();
    }
    else
    {
      op->vtkImageImport::InvokeExecuteDataCallbacks();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageImport_LegacyCheckWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LegacyCheckWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LegacyCheckWholeExtent();
    }
    else
    {
      op->vtkImageImport::LegacyCheckWholeExtent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageImport_Methods[] = {
  {"IsTypeOf", PyvtkImageImport_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageImport_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageImport_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageImport\nC++: static vtkImageImport *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageImport_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageImport\nC++: vtkImageImport *NewInstance()\n\n"},
  {"CopyImportVoidPointer", PyvtkImageImport_CopyImportVoidPointer, METH_VARARGS,
   "V.CopyImportVoidPointer(void, int)\nC++: void CopyImportVoidPointer(void *ptr, vtkIdType size)\n\nImport data and make an internal copy of it.  If you do not want\nVTK to copy the data, then use SetImportVoidPointer instead (do\nnot use both).  Give the size of the data array in bytes.\n"},
  {"SetImportVoidPointer", PyvtkImageImport_SetImportVoidPointer, METH_VARARGS,
   "V.SetImportVoidPointer(void)\nC++: void SetImportVoidPointer(void *ptr)\nV.SetImportVoidPointer(void, int)\nC++: void SetImportVoidPointer(void *ptr, int save)\n\nSet the pointer from which the image data is imported.  VTK will\nnot make its own copy of the data, it will access the data\ndirectly from the supplied array.  VTK will not attempt to delete\nthe data nor modify the data.\n"},
  {"GetImportVoidPointer", PyvtkImageImport_GetImportVoidPointer, METH_VARARGS,
   "V.GetImportVoidPointer() -> void\nC++: void *GetImportVoidPointer()\n\nSet the pointer from which the image data is imported.  VTK will\nnot make its own copy of the data, it will access the data\ndirectly from the supplied array.  VTK will not attempt to delete\nthe data nor modify the data.\n"},
  {"SetDataScalarType", PyvtkImageImport_SetDataScalarType, METH_VARARGS,
   "V.SetDataScalarType(int)\nC++: virtual void SetDataScalarType(int _arg)\n\nSet/Get the data type of pixels in the imported data.  This is\nused as the scalar type of the Output.  Default: Short.\n"},
  {"SetDataScalarTypeToDouble", PyvtkImageImport_SetDataScalarTypeToDouble, METH_VARARGS,
   "V.SetDataScalarTypeToDouble()\nC++: void SetDataScalarTypeToDouble()\n\nSet/Get the data type of pixels in the imported data.  This is\nused as the scalar type of the Output.  Default: Short.\n"},
  {"SetDataScalarTypeToFloat", PyvtkImageImport_SetDataScalarTypeToFloat, METH_VARARGS,
   "V.SetDataScalarTypeToFloat()\nC++: void SetDataScalarTypeToFloat()\n\nSet/Get the data type of pixels in the imported data.  This is\nused as the scalar type of the Output.  Default: Short.\n"},
  {"SetDataScalarTypeToInt", PyvtkImageImport_SetDataScalarTypeToInt, METH_VARARGS,
   "V.SetDataScalarTypeToInt()\nC++: void SetDataScalarTypeToInt()\n\nSet/Get the data type of pixels in the imported data.  This is\nused as the scalar type of the Output.  Default: Short.\n"},
  {"SetDataScalarTypeToShort", PyvtkImageImport_SetDataScalarTypeToShort, METH_VARARGS,
   "V.SetDataScalarTypeToShort()\nC++: void SetDataScalarTypeToShort()\n\nSet/Get the data type of pixels in the imported data.  This is\nused as the scalar type of the Output.  Default: Short.\n"},
  {"SetDataScalarTypeToUnsignedShort", PyvtkImageImport_SetDataScalarTypeToUnsignedShort, METH_VARARGS,
   "V.SetDataScalarTypeToUnsignedShort()\nC++: void SetDataScalarTypeToUnsignedShort()\n\nSet/Get the data type of pixels in the imported data.  This is\nused as the scalar type of the Output.  Default: Short.\n"},
  {"SetDataScalarTypeToUnsignedChar", PyvtkImageImport_SetDataScalarTypeToUnsignedChar, METH_VARARGS,
   "V.SetDataScalarTypeToUnsignedChar()\nC++: void SetDataScalarTypeToUnsignedChar()\n\nSet/Get the data type of pixels in the imported data.  This is\nused as the scalar type of the Output.  Default: Short.\n"},
  {"GetDataScalarType", PyvtkImageImport_GetDataScalarType, METH_VARARGS,
   "V.GetDataScalarType() -> int\nC++: virtual int GetDataScalarType()\n\nSet/Get the data type of pixels in the imported data.  This is\nused as the scalar type of the Output.  Default: Short.\n"},
  {"GetDataScalarTypeAsString", PyvtkImageImport_GetDataScalarTypeAsString, METH_VARARGS,
   "V.GetDataScalarTypeAsString() -> string\nC++: const char *GetDataScalarTypeAsString()\n\nSet/Get the data type of pixels in the imported data.  This is\nused as the scalar type of the Output.  Default: Short.\n"},
  {"SetNumberOfScalarComponents", PyvtkImageImport_SetNumberOfScalarComponents, METH_VARARGS,
   "V.SetNumberOfScalarComponents(int)\nC++: virtual void SetNumberOfScalarComponents(int _arg)\n\nSet/Get the number of scalar components, for RGB images this must\nbe 3. Default: 1.\n"},
  {"GetNumberOfScalarComponents", PyvtkImageImport_GetNumberOfScalarComponents, METH_VARARGS,
   "V.GetNumberOfScalarComponents() -> int\nC++: virtual int GetNumberOfScalarComponents()\n\nSet/Get the number of scalar components, for RGB images this must\nbe 3. Default: 1.\n"},
  {"SetDataExtent", PyvtkImageImport_SetDataExtent, METH_VARARGS,
   "V.SetDataExtent(int, int, int, int, int, int)\nC++: void SetDataExtent(int, int, int, int, int, int)\nV.SetDataExtent((int, int, int, int, int, int))\nC++: void SetDataExtent(int a[6])\n\n"},
  {"GetDataExtent", PyvtkImageImport_GetDataExtent, METH_VARARGS,
   "V.GetDataExtent() -> (int, int, int, int, int, int)\nC++: int *GetDataExtent()\n\n"},
  {"SetDataExtentToWholeExtent", PyvtkImageImport_SetDataExtentToWholeExtent, METH_VARARGS,
   "V.SetDataExtentToWholeExtent()\nC++: void SetDataExtentToWholeExtent()\n\nGet/Set the extent of the data buffer.  The dimensions of your\ndata must be equal to (extent[1]-extent[0]+1) *\n(extent[3]-extent[2]+1) * (extent[5]-DataExtent[4]+1).  For\nexample, for a 2D image use (0,width-1, 0,height-1, 0,0).\n"},
  {"SetDataSpacing", PyvtkImageImport_SetDataSpacing, METH_VARARGS,
   "V.SetDataSpacing(float, float, float)\nC++: void SetDataSpacing(double, double, double)\nV.SetDataSpacing((float, float, float))\nC++: void SetDataSpacing(double a[3])\n\n"},
  {"GetDataSpacing", PyvtkImageImport_GetDataSpacing, METH_VARARGS,
   "V.GetDataSpacing() -> (float, float, float)\nC++: double *GetDataSpacing()\n\n"},
  {"SetDataOrigin", PyvtkImageImport_SetDataOrigin, METH_VARARGS,
   "V.SetDataOrigin(float, float, float)\nC++: void SetDataOrigin(double, double, double)\nV.SetDataOrigin((float, float, float))\nC++: void SetDataOrigin(double a[3])\n\n"},
  {"GetDataOrigin", PyvtkImageImport_GetDataOrigin, METH_VARARGS,
   "V.GetDataOrigin() -> (float, float, float)\nC++: double *GetDataOrigin()\n\n"},
  {"SetWholeExtent", PyvtkImageImport_SetWholeExtent, METH_VARARGS,
   "V.SetWholeExtent(int, int, int, int, int, int)\nC++: void SetWholeExtent(int, int, int, int, int, int)\nV.SetWholeExtent((int, int, int, int, int, int))\nC++: void SetWholeExtent(int a[6])\n\n"},
  {"GetWholeExtent", PyvtkImageImport_GetWholeExtent, METH_VARARGS,
   "V.GetWholeExtent() -> (int, int, int, int, int, int)\nC++: int *GetWholeExtent()\n\n"},
  {"SetScalarArrayName", PyvtkImageImport_SetScalarArrayName, METH_VARARGS,
   "V.SetScalarArrayName(string)\nC++: virtual void SetScalarArrayName(const char *_arg)\n\nSet/get the scalar array name for this data set. Initial value is\n\"scalars\".\n"},
  {"GetScalarArrayName", PyvtkImageImport_GetScalarArrayName, METH_VARARGS,
   "V.GetScalarArrayName() -> string\nC++: virtual char *GetScalarArrayName()\n\nSet/get the scalar array name for this data set. Initial value is\n\"scalars\".\n"},
  {"SetCallbackUserData", PyvtkImageImport_SetCallbackUserData, METH_VARARGS,
   "V.SetCallbackUserData(void)\nC++: virtual void SetCallbackUserData(void *_arg)\n\nSet/Get the user data which will be passed as the first argument\nto all of the third-party pipeline callbacks.\n"},
  {"GetCallbackUserData", PyvtkImageImport_GetCallbackUserData, METH_VARARGS,
   "V.GetCallbackUserData() -> void\nC++: virtual void *GetCallbackUserData()\n\nSet/Get the user data which will be passed as the first argument\nto all of the third-party pipeline callbacks.\n"},
  {"InvokePipelineModifiedCallbacks", PyvtkImageImport_InvokePipelineModifiedCallbacks, METH_VARARGS,
   "V.InvokePipelineModifiedCallbacks() -> int\nC++: int InvokePipelineModifiedCallbacks()\n\nInvoke the appropriate callbacks\n"},
  {"InvokeUpdateInformationCallbacks", PyvtkImageImport_InvokeUpdateInformationCallbacks, METH_VARARGS,
   "V.InvokeUpdateInformationCallbacks()\nC++: void InvokeUpdateInformationCallbacks()\n\nInvoke the appropriate callbacks\n"},
  {"InvokeExecuteInformationCallbacks", PyvtkImageImport_InvokeExecuteInformationCallbacks, METH_VARARGS,
   "V.InvokeExecuteInformationCallbacks()\nC++: void InvokeExecuteInformationCallbacks()\n\nInvoke the appropriate callbacks\n"},
  {"InvokeExecuteDataCallbacks", PyvtkImageImport_InvokeExecuteDataCallbacks, METH_VARARGS,
   "V.InvokeExecuteDataCallbacks()\nC++: void InvokeExecuteDataCallbacks()\n\nInvoke the appropriate callbacks\n"},
  {"LegacyCheckWholeExtent", PyvtkImageImport_LegacyCheckWholeExtent, METH_VARARGS,
   "V.LegacyCheckWholeExtent()\nC++: void LegacyCheckWholeExtent()\n\nInvoke the appropriate callbacks\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageImport_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOImagePython.vtkImageImport", // tp_name
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
  PyvtkImageImport_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageImport_StaticNew()
{
  return vtkImageImport::New();
}

PyObject *PyvtkImageImport_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageImport_Type, PyvtkImageImport_Methods,
    "vtkImageImport",
 &PyvtkImageImport_StaticNew);

  PyTypeObject *pytype = &PyvtkImageImport_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImageAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageImport(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageImport_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageImport", o) != 0)
  {
    Py_DECREF(o);
  }

}

