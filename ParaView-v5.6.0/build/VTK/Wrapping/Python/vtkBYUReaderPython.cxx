// python wrapper for vtkBYUReader
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
#include "vtkBYUReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBYUReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkBYUReader_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkBYUReader_Doc =
  "vtkBYUReader - read MOVIE.BYU polygon files\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkBYUReader is a source object that reads MOVIE.BYU polygon files.\n"
  "These files consist of a geometry file (.g), a scalar file (.s), a\n"
  "displacement or vector file (.d), and a 2D texture coordinate file\n"
  "(.t).\n\n";


static PyObject *
PyvtkBYUReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBYUReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBYUReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBYUReader *tempr = vtkBYUReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBYUReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBYUReader::NewInstance());

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
PyvtkBYUReader_SetGeometryFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeometryFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGeometryFileName(temp0);
    }
    else
    {
      op->vtkBYUReader::SetGeometryFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_GetGeometryFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeometryFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetGeometryFileName() :
      op->vtkBYUReader::GetGeometryFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

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
      op->vtkBYUReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkBYUReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_SetDisplacementFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplacementFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDisplacementFileName(temp0);
    }
    else
    {
      op->vtkBYUReader::SetDisplacementFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_GetDisplacementFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplacementFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetDisplacementFileName() :
      op->vtkBYUReader::GetDisplacementFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_SetScalarFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarFileName(temp0);
    }
    else
    {
      op->vtkBYUReader::SetScalarFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_GetScalarFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetScalarFileName() :
      op->vtkBYUReader::GetScalarFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_SetTextureFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTextureFileName(temp0);
    }
    else
    {
      op->vtkBYUReader::SetTextureFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_GetTextureFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetTextureFileName() :
      op->vtkBYUReader::GetTextureFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_SetReadDisplacement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadDisplacement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReadDisplacement(temp0);
    }
    else
    {
      op->vtkBYUReader::SetReadDisplacement(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_GetReadDisplacement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadDisplacement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReadDisplacement() :
      op->vtkBYUReader::GetReadDisplacement());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_ReadDisplacementOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadDisplacementOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadDisplacementOn();
    }
    else
    {
      op->vtkBYUReader::ReadDisplacementOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_ReadDisplacementOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadDisplacementOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadDisplacementOff();
    }
    else
    {
      op->vtkBYUReader::ReadDisplacementOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_SetReadScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReadScalar(temp0);
    }
    else
    {
      op->vtkBYUReader::SetReadScalar(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_GetReadScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReadScalar() :
      op->vtkBYUReader::GetReadScalar());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_ReadScalarOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadScalarOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadScalarOn();
    }
    else
    {
      op->vtkBYUReader::ReadScalarOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_ReadScalarOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadScalarOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadScalarOff();
    }
    else
    {
      op->vtkBYUReader::ReadScalarOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_SetReadTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReadTexture(temp0);
    }
    else
    {
      op->vtkBYUReader::SetReadTexture(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_GetReadTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReadTexture() :
      op->vtkBYUReader::GetReadTexture());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_ReadTextureOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadTextureOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadTextureOn();
    }
    else
    {
      op->vtkBYUReader::ReadTextureOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_ReadTextureOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadTextureOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadTextureOff();
    }
    else
    {
      op->vtkBYUReader::ReadTextureOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_SetPartNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPartNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPartNumber(temp0);
    }
    else
    {
      op->vtkBYUReader::SetPartNumber(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_GetPartNumberMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPartNumberMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPartNumberMinValue() :
      op->vtkBYUReader::GetPartNumberMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_GetPartNumberMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPartNumberMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPartNumberMaxValue() :
      op->vtkBYUReader::GetPartNumberMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_GetPartNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPartNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPartNumber() :
      op->vtkBYUReader::GetPartNumber());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBYUReader_CanReadFile(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CanReadFile");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBYUReader::CanReadFile(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkBYUReader_Methods[] = {
  {"IsTypeOf", PyvtkBYUReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkBYUReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkBYUReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkBYUReader\nC++: static vtkBYUReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkBYUReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkBYUReader\nC++: vtkBYUReader *NewInstance()\n\n"},
  {"SetGeometryFileName", PyvtkBYUReader_SetGeometryFileName, METH_VARARGS,
   "V.SetGeometryFileName(string)\nC++: virtual void SetGeometryFileName(const char *_arg)\n\nSpecify name of geometry FileName.\n"},
  {"GetGeometryFileName", PyvtkBYUReader_GetGeometryFileName, METH_VARARGS,
   "V.GetGeometryFileName() -> string\nC++: virtual char *GetGeometryFileName()\n\nSpecify name of geometry FileName.\n"},
  {"SetFileName", PyvtkBYUReader_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *f)\n\nSpecify name of geometry FileName (alias).\n"},
  {"GetFileName", PyvtkBYUReader_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\n"},
  {"SetDisplacementFileName", PyvtkBYUReader_SetDisplacementFileName, METH_VARARGS,
   "V.SetDisplacementFileName(string)\nC++: virtual void SetDisplacementFileName(const char *_arg)\n\nSpecify name of displacement FileName.\n"},
  {"GetDisplacementFileName", PyvtkBYUReader_GetDisplacementFileName, METH_VARARGS,
   "V.GetDisplacementFileName() -> string\nC++: virtual char *GetDisplacementFileName()\n\nSpecify name of displacement FileName.\n"},
  {"SetScalarFileName", PyvtkBYUReader_SetScalarFileName, METH_VARARGS,
   "V.SetScalarFileName(string)\nC++: virtual void SetScalarFileName(const char *_arg)\n\nSpecify name of scalar FileName.\n"},
  {"GetScalarFileName", PyvtkBYUReader_GetScalarFileName, METH_VARARGS,
   "V.GetScalarFileName() -> string\nC++: virtual char *GetScalarFileName()\n\nSpecify name of scalar FileName.\n"},
  {"SetTextureFileName", PyvtkBYUReader_SetTextureFileName, METH_VARARGS,
   "V.SetTextureFileName(string)\nC++: virtual void SetTextureFileName(const char *_arg)\n\nSpecify name of texture coordinates FileName.\n"},
  {"GetTextureFileName", PyvtkBYUReader_GetTextureFileName, METH_VARARGS,
   "V.GetTextureFileName() -> string\nC++: virtual char *GetTextureFileName()\n\nSpecify name of texture coordinates FileName.\n"},
  {"SetReadDisplacement", PyvtkBYUReader_SetReadDisplacement, METH_VARARGS,
   "V.SetReadDisplacement(int)\nC++: virtual void SetReadDisplacement(vtkTypeBool _arg)\n\nTurn on/off the reading of the displacement file.\n"},
  {"GetReadDisplacement", PyvtkBYUReader_GetReadDisplacement, METH_VARARGS,
   "V.GetReadDisplacement() -> int\nC++: virtual vtkTypeBool GetReadDisplacement()\n\nTurn on/off the reading of the displacement file.\n"},
  {"ReadDisplacementOn", PyvtkBYUReader_ReadDisplacementOn, METH_VARARGS,
   "V.ReadDisplacementOn()\nC++: virtual void ReadDisplacementOn()\n\nTurn on/off the reading of the displacement file.\n"},
  {"ReadDisplacementOff", PyvtkBYUReader_ReadDisplacementOff, METH_VARARGS,
   "V.ReadDisplacementOff()\nC++: virtual void ReadDisplacementOff()\n\nTurn on/off the reading of the displacement file.\n"},
  {"SetReadScalar", PyvtkBYUReader_SetReadScalar, METH_VARARGS,
   "V.SetReadScalar(int)\nC++: virtual void SetReadScalar(vtkTypeBool _arg)\n\nTurn on/off the reading of the scalar file.\n"},
  {"GetReadScalar", PyvtkBYUReader_GetReadScalar, METH_VARARGS,
   "V.GetReadScalar() -> int\nC++: virtual vtkTypeBool GetReadScalar()\n\nTurn on/off the reading of the scalar file.\n"},
  {"ReadScalarOn", PyvtkBYUReader_ReadScalarOn, METH_VARARGS,
   "V.ReadScalarOn()\nC++: virtual void ReadScalarOn()\n\nTurn on/off the reading of the scalar file.\n"},
  {"ReadScalarOff", PyvtkBYUReader_ReadScalarOff, METH_VARARGS,
   "V.ReadScalarOff()\nC++: virtual void ReadScalarOff()\n\nTurn on/off the reading of the scalar file.\n"},
  {"SetReadTexture", PyvtkBYUReader_SetReadTexture, METH_VARARGS,
   "V.SetReadTexture(int)\nC++: virtual void SetReadTexture(vtkTypeBool _arg)\n\nTurn on/off the reading of the texture coordinate file. Specify\nname of geometry FileName.\n"},
  {"GetReadTexture", PyvtkBYUReader_GetReadTexture, METH_VARARGS,
   "V.GetReadTexture() -> int\nC++: virtual vtkTypeBool GetReadTexture()\n\nTurn on/off the reading of the texture coordinate file. Specify\nname of geometry FileName.\n"},
  {"ReadTextureOn", PyvtkBYUReader_ReadTextureOn, METH_VARARGS,
   "V.ReadTextureOn()\nC++: virtual void ReadTextureOn()\n\nTurn on/off the reading of the texture coordinate file. Specify\nname of geometry FileName.\n"},
  {"ReadTextureOff", PyvtkBYUReader_ReadTextureOff, METH_VARARGS,
   "V.ReadTextureOff()\nC++: virtual void ReadTextureOff()\n\nTurn on/off the reading of the texture coordinate file. Specify\nname of geometry FileName.\n"},
  {"SetPartNumber", PyvtkBYUReader_SetPartNumber, METH_VARARGS,
   "V.SetPartNumber(int)\nC++: virtual void SetPartNumber(int _arg)\n\nSet/Get the part number to be read.\n"},
  {"GetPartNumberMinValue", PyvtkBYUReader_GetPartNumberMinValue, METH_VARARGS,
   "V.GetPartNumberMinValue() -> int\nC++: virtual int GetPartNumberMinValue()\n\nSet/Get the part number to be read.\n"},
  {"GetPartNumberMaxValue", PyvtkBYUReader_GetPartNumberMaxValue, METH_VARARGS,
   "V.GetPartNumberMaxValue() -> int\nC++: virtual int GetPartNumberMaxValue()\n\nSet/Get the part number to be read.\n"},
  {"GetPartNumber", PyvtkBYUReader_GetPartNumber, METH_VARARGS,
   "V.GetPartNumber() -> int\nC++: virtual int GetPartNumber()\n\nSet/Get the part number to be read.\n"},
  {"CanReadFile", PyvtkBYUReader_CanReadFile, METH_VARARGS,
   "V.CanReadFile(string) -> int\nC++: static int CanReadFile(const char *filename)\n\nReturns 1 if this file can be read and 0 if the file cannot be\nread. Because BYU files do not have anything in the header\nspecifying the file type, the result is not definitive.  Invalid\nfiles may still return 1 although a valid file will never return\n0.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkBYUReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOGeometryPython.vtkBYUReader", // tp_name
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
  PyvtkBYUReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBYUReader_StaticNew()
{
  return vtkBYUReader::New();
}

PyObject *PyvtkBYUReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkBYUReader_Type, PyvtkBYUReader_Methods,
    "vtkBYUReader",
 &PyvtkBYUReader_StaticNew);

  PyTypeObject *pytype = &PyvtkBYUReader_Type;

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

void PyVTKAddFile_vtkBYUReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBYUReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBYUReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

