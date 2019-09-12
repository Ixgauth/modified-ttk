// python wrapper for vtkImageExport
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
#include "vtkImageExport.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageExport(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageExport_ClassNew(); }

#ifndef DECLARED_PyvtkImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkImageAlgorithm_ClassNew
#endif

static const char *PyvtkImageExport_Doc =
  "vtkImageExport - Export VTK images to third-party systems.\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "vtkImageExport provides a way of exporting image data at the end of a\n"
  "pipeline to a third-party system or to a simple C array. Applications\n"
  "can use this to get direct access to the image data in memory.  A\n"
  "callback interface is provided to allow connection of the VTK\n"
  "pipeline to a third-party pipeline.  This interface conforms to the\n"
  "interface of vtkImageImport. In Python it is possible to use this\n"
  "class to write the image data into a python string that has been\n"
  "pre-allocated to be the correct size.\n"
  "@sa\n"
  "vtkImageImport\n\n";


static PyObject *
PyvtkImageExport_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageExport::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageExport_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageExport::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageExport_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageExport *tempr = vtkImageExport::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageExport_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageExport *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageExport::NewInstance());

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
PyvtkImageExport_GetDataMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetDataMemorySize() :
      op->vtkImageExport::GetDataMemorySize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageExport_GetDataDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetDataDimensions(temp0);
    }
    else
    {
      op->vtkImageExport::GetDataDimensions(temp0);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageExport_GetDataDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetDataDimensions() :
      op->vtkImageExport::GetDataDimensions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImageExport_GetDataDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkImageExport_GetDataDimensions_s1(self, args);
    case 0:
      return PyvtkImageExport_GetDataDimensions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetDataDimensions");
  return nullptr;
}



static PyObject *
PyvtkImageExport_GetDataNumberOfScalarComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataNumberOfScalarComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataNumberOfScalarComponents() :
      op->vtkImageExport::GetDataNumberOfScalarComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageExport_GetDataScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataScalarType() :
      op->vtkImageExport::GetDataScalarType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageExport_GetDataScalarTypeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataScalarTypeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDataScalarTypeAsString() :
      op->vtkImageExport::GetDataScalarTypeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageExport_GetDataExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetDataExtent() :
      op->vtkImageExport::GetDataExtent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImageExport_GetDataExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetDataExtent(temp0);
    }
    else
    {
      op->vtkImageExport::GetDataExtent(temp0);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageExport_GetDataExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImageExport_GetDataExtent_s1(self, args);
    case 1:
      return PyvtkImageExport_GetDataExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetDataExtent");
  return nullptr;
}



static PyObject *
PyvtkImageExport_GetDataSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDataSpacing() :
      op->vtkImageExport::GetDataSpacing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImageExport_GetDataSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetDataSpacing(temp0);
    }
    else
    {
      op->vtkImageExport::GetDataSpacing(temp0);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageExport_GetDataSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImageExport_GetDataSpacing_s1(self, args);
    case 1:
      return PyvtkImageExport_GetDataSpacing_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetDataSpacing");
  return nullptr;
}



static PyObject *
PyvtkImageExport_GetDataOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDataOrigin() :
      op->vtkImageExport::GetDataOrigin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImageExport_GetDataOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetDataOrigin(temp0);
    }
    else
    {
      op->vtkImageExport::GetDataOrigin(temp0);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageExport_GetDataOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImageExport_GetDataOrigin_s1(self, args);
    case 1:
      return PyvtkImageExport_GetDataOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetDataOrigin");
  return nullptr;
}



static PyObject *
PyvtkImageExport_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkImageExport::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageExport_ImageLowerLeftOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ImageLowerLeftOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ImageLowerLeftOn();
    }
    else
    {
      op->vtkImageExport::ImageLowerLeftOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageExport_ImageLowerLeftOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ImageLowerLeftOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ImageLowerLeftOff();
    }
    else
    {
      op->vtkImageExport::ImageLowerLeftOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageExport_GetImageLowerLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageLowerLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetImageLowerLeft() :
      op->vtkImageExport::GetImageLowerLeft());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageExport_SetImageLowerLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageLowerLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetImageLowerLeft(temp0);
    }
    else
    {
      op->vtkImageExport::SetImageLowerLeft(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageExport_SetExportVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExportVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    if (ap.IsBound())
    {
      op->SetExportVoidPointer(temp0);
    }
    else
    {
      op->vtkImageExport::SetExportVoidPointer(temp0);
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
PyvtkImageExport_GetExportVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExportVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetExportVoidPointer() :
      op->vtkImageExport::GetExportVoidPointer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageExport_Export_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Export");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Export();
    }
    else
    {
      op->vtkImageExport::Export();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageExport_Export_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Export");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    if (ap.IsBound())
    {
      op->Export(temp0);
    }
    else
    {
      op->vtkImageExport::Export(temp0);
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
PyvtkImageExport_Export(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImageExport_Export_s1(self, args);
    case 1:
      return PyvtkImageExport_Export_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Export");
  return nullptr;
}



static PyObject *
PyvtkImageExport_GetPointerToData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointerToData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetPointerToData() :
      op->vtkImageExport::GetPointerToData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageExport_GetCallbackUserData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCallbackUserData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetCallbackUserData() :
      op->vtkImageExport::GetCallbackUserData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageExport_Methods[] = {
  {"IsTypeOf", PyvtkImageExport_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageExport_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageExport_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageExport\nC++: static vtkImageExport *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageExport_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageExport\nC++: vtkImageExport *NewInstance()\n\n"},
  {"GetDataMemorySize", PyvtkImageExport_GetDataMemorySize, METH_VARARGS,
   "V.GetDataMemorySize() -> int\nC++: vtkIdType GetDataMemorySize()\n\nGet the number of bytes required for the output C array.\n"},
  {"GetDataDimensions", PyvtkImageExport_GetDataDimensions, METH_VARARGS,
   "V.GetDataDimensions([int, ...])\nC++: void GetDataDimensions(int *ptr)\nV.GetDataDimensions() -> (int, int, int)\nC++: int *GetDataDimensions()\n\nGet the (x,y,z) index dimensions of the data.  Please note that C\narrays are indexed in decreasing order, i.e. array[z][y][x].\n"},
  {"GetDataNumberOfScalarComponents", PyvtkImageExport_GetDataNumberOfScalarComponents, METH_VARARGS,
   "V.GetDataNumberOfScalarComponents() -> int\nC++: int GetDataNumberOfScalarComponents()\n\nGet the number of scalar components of the data.  Please note\nthat when you index into a C array, the scalar component index\ncomes last, i.e. array[z][y][x][c].\n"},
  {"GetDataScalarType", PyvtkImageExport_GetDataScalarType, METH_VARARGS,
   "V.GetDataScalarType() -> int\nC++: int GetDataScalarType()\n\nGet the scalar type of the data.  The scalar type of the C array\nmust match the scalar type of the data.\n"},
  {"GetDataScalarTypeAsString", PyvtkImageExport_GetDataScalarTypeAsString, METH_VARARGS,
   "V.GetDataScalarTypeAsString() -> string\nC++: const char *GetDataScalarTypeAsString()\n\n"},
  {"GetDataExtent", PyvtkImageExport_GetDataExtent, METH_VARARGS,
   "V.GetDataExtent() -> (int, int, int, int, int, int)\nC++: int *GetDataExtent()\nV.GetDataExtent([int, ...])\nC++: void GetDataExtent(int *ptr)\n\nGet miscellaneous additional information about the data.\n"},
  {"GetDataSpacing", PyvtkImageExport_GetDataSpacing, METH_VARARGS,
   "V.GetDataSpacing() -> (float, float, float)\nC++: double *GetDataSpacing()\nV.GetDataSpacing([float, ...])\nC++: void GetDataSpacing(double *ptr)\n\nGet miscellaneous additional information about the data.\n"},
  {"GetDataOrigin", PyvtkImageExport_GetDataOrigin, METH_VARARGS,
   "V.GetDataOrigin() -> (float, float, float)\nC++: double *GetDataOrigin()\nV.GetDataOrigin([float, ...])\nC++: void GetDataOrigin(double *ptr)\n\nGet miscellaneous additional information about the data.\n"},
  {"GetInput", PyvtkImageExport_GetInput, METH_VARARGS,
   "V.GetInput() -> vtkImageData\nC++: vtkImageData *GetInput()\n\nGet the input object from the image pipeline.\n"},
  {"ImageLowerLeftOn", PyvtkImageExport_ImageLowerLeftOn, METH_VARARGS,
   "V.ImageLowerLeftOn()\nC++: virtual void ImageLowerLeftOn()\n\nSet/Get whether the data goes to the exported memory starting in\nthe lower left corner or upper left corner.  Default: On. When\nthis flag is Off, the image will be flipped vertically before it\nis exported. WARNING: this flag is used only with the Export()\nmethod, it is ignored by GetPointerToData().\n"},
  {"ImageLowerLeftOff", PyvtkImageExport_ImageLowerLeftOff, METH_VARARGS,
   "V.ImageLowerLeftOff()\nC++: virtual void ImageLowerLeftOff()\n\nSet/Get whether the data goes to the exported memory starting in\nthe lower left corner or upper left corner.  Default: On. When\nthis flag is Off, the image will be flipped vertically before it\nis exported. WARNING: this flag is used only with the Export()\nmethod, it is ignored by GetPointerToData().\n"},
  {"GetImageLowerLeft", PyvtkImageExport_GetImageLowerLeft, METH_VARARGS,
   "V.GetImageLowerLeft() -> int\nC++: virtual vtkTypeBool GetImageLowerLeft()\n\nSet/Get whether the data goes to the exported memory starting in\nthe lower left corner or upper left corner.  Default: On. When\nthis flag is Off, the image will be flipped vertically before it\nis exported. WARNING: this flag is used only with the Export()\nmethod, it is ignored by GetPointerToData().\n"},
  {"SetImageLowerLeft", PyvtkImageExport_SetImageLowerLeft, METH_VARARGS,
   "V.SetImageLowerLeft(int)\nC++: virtual void SetImageLowerLeft(vtkTypeBool _arg)\n\nSet/Get whether the data goes to the exported memory starting in\nthe lower left corner or upper left corner.  Default: On. When\nthis flag is Off, the image will be flipped vertically before it\nis exported. WARNING: this flag is used only with the Export()\nmethod, it is ignored by GetPointerToData().\n"},
  {"SetExportVoidPointer", PyvtkImageExport_SetExportVoidPointer, METH_VARARGS,
   "V.SetExportVoidPointer(void)\nC++: void SetExportVoidPointer(void *)\n\nSet the void pointer of the C array to export the data to. From\npython, you can specify a pointer to a string that is large\nenough to hold the data.\n"},
  {"GetExportVoidPointer", PyvtkImageExport_GetExportVoidPointer, METH_VARARGS,
   "V.GetExportVoidPointer() -> void\nC++: void *GetExportVoidPointer()\n\nSet the void pointer of the C array to export the data to. From\npython, you can specify a pointer to a string that is large\nenough to hold the data.\n"},
  {"Export", PyvtkImageExport_Export, METH_VARARGS,
   "V.Export()\nC++: void Export()\nV.Export(void)\nC++: virtual void Export(void *)\n\nThe main interface: update the pipeline and export the image to\nthe memory pointed to by SetExportVoidPointer().  You can also\nspecify a void pointer when you call Export().\n"},
  {"GetPointerToData", PyvtkImageExport_GetPointerToData, METH_VARARGS,
   "V.GetPointerToData() -> void\nC++: void *GetPointerToData()\n\nAn alternative to Export(): Use with caution.   Update the\npipeline and return a pointer to the image memory.  The pointer\nis only valid until the next time that the pipeline is updated.\nWARNING: This method ignores the ImageLowerLeft flag.\n"},
  {"GetCallbackUserData", PyvtkImageExport_GetCallbackUserData, METH_VARARGS,
   "V.GetCallbackUserData() -> void\nC++: void *GetCallbackUserData()\n\nGet the user data that should be passed to the callback\nfunctions.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageExport_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOImagePython.vtkImageExport", // tp_name
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
  PyvtkImageExport_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageExport_StaticNew()
{
  return vtkImageExport::New();
}

PyObject *PyvtkImageExport_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageExport_Type, PyvtkImageExport_Methods,
    "vtkImageExport",
 &PyvtkImageExport_StaticNew);

  PyTypeObject *pytype = &PyvtkImageExport_Type;

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

void PyVTKAddFile_vtkImageExport(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageExport_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageExport", o) != 0)
  {
    Py_DECREF(o);
  }

}

