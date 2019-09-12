// python wrapper for vtkVariant
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkStdString.h"
#include "vtkUnicodeString.h"
#include "vtkVariant.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkVariant(PyObject *); }

static const char *PyvtkVariant_Doc =
  "vtkVariant - A atomic type representing the union of many types\n\n"
  "@par Thanks: Thanks to Patricia Crossno, Ken Moreland, Andrew Wilson\n"
  "and Brian Wylie from Sandia National Laboratories for their help in\n"
  "developing this class.\n\n"
  "vtkVariant()\n"
  "vtkVariant(const vtkVariant &other)\n"
  "vtkVariant(bool value)\n"
  "vtkVariant(char value)\n"
  "vtkVariant(unsigned char value)\n"
  "vtkVariant(signed char value)\n"
  "vtkVariant(short value)\n"
  "vtkVariant(unsigned short value)\n"
  "vtkVariant(int value)\n"
  "vtkVariant(unsigned int value)\n"
  "vtkVariant(long value)\n"
  "vtkVariant(unsigned long value)\n"
  "vtkVariant(long long value)\n"
  "vtkVariant(unsigned long long value)\n"
  "vtkVariant(float value)\n"
  "vtkVariant(double value)\n"
  "vtkVariant(const char *value)\n"
  "vtkVariant(vtkStdString value)\n"
  "vtkVariant(const vtkUnicodeString &value)\n"
  "vtkVariant(vtkObjectBase *value)\n"
  "vtkVariant(const vtkVariant &other, unsigned int type)\n";


static PyObject *
PyvtkVariant_IsValid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsValid");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = op->IsValid();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVariant_IsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsString");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = op->IsString();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVariant_IsUnicodeString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsUnicodeString");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = op->IsUnicodeString();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVariant_IsNumeric(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsNumeric");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = op->IsNumeric();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVariant_IsFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsFloat");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = op->IsFloat();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVariant_IsDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDouble");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = op->IsDouble();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVariant_IsChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsChar");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = op->IsChar();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVariant_IsUnsignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsUnsignedChar");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = op->IsUnsignedChar();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVariant_IsSignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsSignedChar");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = op->IsSignedChar();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVariant_IsShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsShort");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = op->IsShort();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVariant_IsUnsignedShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsUnsignedShort");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = op->IsUnsignedShort();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVariant_IsInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInt");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = op->IsInt();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVariant_IsUnsignedInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsUnsignedInt");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = op->IsUnsignedInt();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVariant_IsLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsLong");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = op->IsLong();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVariant_IsUnsignedLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsUnsignedLong");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = op->IsUnsignedLong();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVariant_Is__Int64(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Is__Int64");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = op->Is__Int64();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVariant_IsUnsigned__Int64(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsUnsigned__Int64");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = op->IsUnsigned__Int64();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVariant_IsLongLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsLongLong");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = op->IsLongLong();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVariant_IsUnsignedLongLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsUnsignedLongLong");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = op->IsUnsignedLongLong();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVariant_IsVTKObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsVTKObject");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = op->IsVTKObject();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVariant_IsArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsArray");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = op->IsArray();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVariant_GetType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetType");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = op->GetType();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVariant_GetTypeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTypeAsString");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = op->GetTypeAsString();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVariant_ToString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToString");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStdString tempr = op->ToString();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVariant_ToUnicodeString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToUnicodeString");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnicodeString tempr = op->ToUnicodeString();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVariant_ToFloat_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToFloat");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<bool> store0(2*size0);
  bool *temp0 = store0.Data();
  bool *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    float tempr = op->ToFloat(temp0);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVariant_ToFloat_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToFloat");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = op->ToFloat();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVariant_ToFloat(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkVariant_ToFloat_s1(self, args);
    case 0:
      return PyvtkVariant_ToFloat_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ToFloat");
  return nullptr;
}



static PyObject *
PyvtkVariant_ToDouble_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToDouble");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<bool> store0(2*size0);
  bool *temp0 = store0.Data();
  bool *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    double tempr = op->ToDouble(temp0);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVariant_ToDouble_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToDouble");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = op->ToDouble();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVariant_ToDouble(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkVariant_ToDouble_s1(self, args);
    case 0:
      return PyvtkVariant_ToDouble_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ToDouble");
  return nullptr;
}



static PyObject *
PyvtkVariant_ToChar_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToChar");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<bool> store0(2*size0);
  bool *temp0 = store0.Data();
  bool *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    char tempr = op->ToChar(temp0);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVariant_ToChar_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToChar");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char tempr = op->ToChar();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVariant_ToChar(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkVariant_ToChar_s1(self, args);
    case 0:
      return PyvtkVariant_ToChar_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ToChar");
  return nullptr;
}



static PyObject *
PyvtkVariant_ToUnsignedChar_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToUnsignedChar");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<bool> store0(2*size0);
  bool *temp0 = store0.Data();
  bool *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    unsigned char tempr = op->ToUnsignedChar(temp0);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVariant_ToUnsignedChar_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToUnsignedChar");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char tempr = op->ToUnsignedChar();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVariant_ToUnsignedChar(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkVariant_ToUnsignedChar_s1(self, args);
    case 0:
      return PyvtkVariant_ToUnsignedChar_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ToUnsignedChar");
  return nullptr;
}



static PyObject *
PyvtkVariant_ToSignedChar_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToSignedChar");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<bool> store0(2*size0);
  bool *temp0 = store0.Data();
  bool *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    signed char tempr = op->ToSignedChar(temp0);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVariant_ToSignedChar_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToSignedChar");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    signed char tempr = op->ToSignedChar();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVariant_ToSignedChar(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkVariant_ToSignedChar_s1(self, args);
    case 0:
      return PyvtkVariant_ToSignedChar_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ToSignedChar");
  return nullptr;
}



static PyObject *
PyvtkVariant_ToShort_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToShort");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<bool> store0(2*size0);
  bool *temp0 = store0.Data();
  bool *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    short tempr = op->ToShort(temp0);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVariant_ToShort_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToShort");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    short tempr = op->ToShort();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVariant_ToShort(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkVariant_ToShort_s1(self, args);
    case 0:
      return PyvtkVariant_ToShort_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ToShort");
  return nullptr;
}



static PyObject *
PyvtkVariant_ToUnsignedShort_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToUnsignedShort");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<bool> store0(2*size0);
  bool *temp0 = store0.Data();
  bool *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    unsigned short tempr = op->ToUnsignedShort(temp0);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVariant_ToUnsignedShort_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToUnsignedShort");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned short tempr = op->ToUnsignedShort();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVariant_ToUnsignedShort(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkVariant_ToUnsignedShort_s1(self, args);
    case 0:
      return PyvtkVariant_ToUnsignedShort_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ToUnsignedShort");
  return nullptr;
}



static PyObject *
PyvtkVariant_ToInt_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToInt");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<bool> store0(2*size0);
  bool *temp0 = store0.Data();
  bool *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    int tempr = op->ToInt(temp0);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVariant_ToInt_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToInt");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->ToInt();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVariant_ToInt(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkVariant_ToInt_s1(self, args);
    case 0:
      return PyvtkVariant_ToInt_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ToInt");
  return nullptr;
}



static PyObject *
PyvtkVariant_ToUnsignedInt_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToUnsignedInt");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<bool> store0(2*size0);
  bool *temp0 = store0.Data();
  bool *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    unsigned int tempr = op->ToUnsignedInt(temp0);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVariant_ToUnsignedInt_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToUnsignedInt");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = op->ToUnsignedInt();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVariant_ToUnsignedInt(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkVariant_ToUnsignedInt_s1(self, args);
    case 0:
      return PyvtkVariant_ToUnsignedInt_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ToUnsignedInt");
  return nullptr;
}



static PyObject *
PyvtkVariant_ToLong_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToLong");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<bool> store0(2*size0);
  bool *temp0 = store0.Data();
  bool *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    long tempr = op->ToLong(temp0);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVariant_ToLong_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToLong");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long tempr = op->ToLong();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVariant_ToLong(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkVariant_ToLong_s1(self, args);
    case 0:
      return PyvtkVariant_ToLong_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ToLong");
  return nullptr;
}



static PyObject *
PyvtkVariant_ToUnsignedLong_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToUnsignedLong");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<bool> store0(2*size0);
  bool *temp0 = store0.Data();
  bool *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    unsigned long tempr = op->ToUnsignedLong(temp0);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVariant_ToUnsignedLong_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToUnsignedLong");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = op->ToUnsignedLong();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVariant_ToUnsignedLong(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkVariant_ToUnsignedLong_s1(self, args);
    case 0:
      return PyvtkVariant_ToUnsignedLong_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ToUnsignedLong");
  return nullptr;
}



static PyObject *
PyvtkVariant_ToLongLong_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToLongLong");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<bool> store0(2*size0);
  bool *temp0 = store0.Data();
  bool *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    long long tempr = op->ToLongLong(temp0);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVariant_ToLongLong_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToLongLong");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = op->ToLongLong();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVariant_ToLongLong(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkVariant_ToLongLong_s1(self, args);
    case 0:
      return PyvtkVariant_ToLongLong_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ToLongLong");
  return nullptr;
}



static PyObject *
PyvtkVariant_ToUnsignedLongLong_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToUnsignedLongLong");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<bool> store0(2*size0);
  bool *temp0 = store0.Data();
  bool *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    unsigned long long tempr = op->ToUnsignedLongLong(temp0);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVariant_ToUnsignedLongLong_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToUnsignedLongLong");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long long tempr = op->ToUnsignedLongLong();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVariant_ToUnsignedLongLong(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkVariant_ToUnsignedLongLong_s1(self, args);
    case 0:
      return PyvtkVariant_ToUnsignedLongLong_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ToUnsignedLongLong");
  return nullptr;
}



static PyObject *
PyvtkVariant_ToTypeInt64_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToTypeInt64");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<bool> store0(2*size0);
  bool *temp0 = store0.Data();
  bool *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    long long tempr = op->ToTypeInt64(temp0);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVariant_ToTypeInt64_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToTypeInt64");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = op->ToTypeInt64();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVariant_ToTypeInt64(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkVariant_ToTypeInt64_s1(self, args);
    case 0:
      return PyvtkVariant_ToTypeInt64_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ToTypeInt64");
  return nullptr;
}



static PyObject *
PyvtkVariant_ToTypeUInt64_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToTypeUInt64");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<bool> store0(2*size0);
  bool *temp0 = store0.Data();
  bool *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    unsigned long long tempr = op->ToTypeUInt64(temp0);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVariant_ToTypeUInt64_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToTypeUInt64");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long long tempr = op->ToTypeUInt64();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVariant_ToTypeUInt64(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkVariant_ToTypeUInt64_s1(self, args);
    case 0:
      return PyvtkVariant_ToTypeUInt64_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ToTypeUInt64");
  return nullptr;
}



static PyObject *
PyvtkVariant_ToVTKObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToVTKObject");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkObjectBase *tempr = op->ToVTKObject();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVariant_ToArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToArray");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractArray *tempr = op->ToArray();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVariant_IsEqual(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsEqual");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVariant *op = static_cast<vtkVariant *>(vp);

  vtkVariant *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant"))
  {
    bool tempr = op->IsEqual(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVariant_Methods[] = {
  {"IsValid", PyvtkVariant_IsValid, METH_VARARGS,
   "V.IsValid() -> bool\nC++: bool IsValid()\n\nGet whether the variant value is valid.\n"},
  {"IsString", PyvtkVariant_IsString, METH_VARARGS,
   "V.IsString() -> bool\nC++: bool IsString()\n\nGet whether the variant is a string.\n"},
  {"IsUnicodeString", PyvtkVariant_IsUnicodeString, METH_VARARGS,
   "V.IsUnicodeString() -> bool\nC++: bool IsUnicodeString()\n\nGet whether the variant is a Unicode string.\n"},
  {"IsNumeric", PyvtkVariant_IsNumeric, METH_VARARGS,
   "V.IsNumeric() -> bool\nC++: bool IsNumeric()\n\nGet whether the variant is any numeric type.\n"},
  {"IsFloat", PyvtkVariant_IsFloat, METH_VARARGS,
   "V.IsFloat() -> bool\nC++: bool IsFloat()\n\nGet whether the variant is a float.\n"},
  {"IsDouble", PyvtkVariant_IsDouble, METH_VARARGS,
   "V.IsDouble() -> bool\nC++: bool IsDouble()\n\nGet whether the variant is a double.\n"},
  {"IsChar", PyvtkVariant_IsChar, METH_VARARGS,
   "V.IsChar() -> bool\nC++: bool IsChar()\n\nGet whether the variant is an char.\n"},
  {"IsUnsignedChar", PyvtkVariant_IsUnsignedChar, METH_VARARGS,
   "V.IsUnsignedChar() -> bool\nC++: bool IsUnsignedChar()\n\nGet whether the variant is an unsigned char.\n"},
  {"IsSignedChar", PyvtkVariant_IsSignedChar, METH_VARARGS,
   "V.IsSignedChar() -> bool\nC++: bool IsSignedChar()\n\nGet whether the variant is an signed char.\n"},
  {"IsShort", PyvtkVariant_IsShort, METH_VARARGS,
   "V.IsShort() -> bool\nC++: bool IsShort()\n\nGet whether the variant is an short.\n"},
  {"IsUnsignedShort", PyvtkVariant_IsUnsignedShort, METH_VARARGS,
   "V.IsUnsignedShort() -> bool\nC++: bool IsUnsignedShort()\n\nGet whether the variant is an unsigned short.\n"},
  {"IsInt", PyvtkVariant_IsInt, METH_VARARGS,
   "V.IsInt() -> bool\nC++: bool IsInt()\n\nGet whether the variant is an int.\n"},
  {"IsUnsignedInt", PyvtkVariant_IsUnsignedInt, METH_VARARGS,
   "V.IsUnsignedInt() -> bool\nC++: bool IsUnsignedInt()\n\nGet whether the variant is an unsigned int.\n"},
  {"IsLong", PyvtkVariant_IsLong, METH_VARARGS,
   "V.IsLong() -> bool\nC++: bool IsLong()\n\nGet whether the variant is an long.\n"},
  {"IsUnsignedLong", PyvtkVariant_IsUnsignedLong, METH_VARARGS,
   "V.IsUnsignedLong() -> bool\nC++: bool IsUnsignedLong()\n\nGet whether the variant is an unsigned long.\n"},
  {"Is__Int64", PyvtkVariant_Is__Int64, METH_VARARGS,
   "V.Is__Int64() -> bool\nC++: bool Is__Int64()\n\nLegacy.  Returns false.  The variant is never an __int64.\n"},
  {"IsUnsigned__Int64", PyvtkVariant_IsUnsigned__Int64, METH_VARARGS,
   "V.IsUnsigned__Int64() -> bool\nC++: bool IsUnsigned__Int64()\n\nLegacy.  Returns false.  The variant is never an unsigned\n__int64.\n"},
  {"IsLongLong", PyvtkVariant_IsLongLong, METH_VARARGS,
   "V.IsLongLong() -> bool\nC++: bool IsLongLong()\n\nGet whether the variant is long long.\n"},
  {"IsUnsignedLongLong", PyvtkVariant_IsUnsignedLongLong, METH_VARARGS,
   "V.IsUnsignedLongLong() -> bool\nC++: bool IsUnsignedLongLong()\n\nGet whether the variant is unsigned long long.\n"},
  {"IsVTKObject", PyvtkVariant_IsVTKObject, METH_VARARGS,
   "V.IsVTKObject() -> bool\nC++: bool IsVTKObject()\n\nGet whether the variant is a VTK object pointer.\n"},
  {"IsArray", PyvtkVariant_IsArray, METH_VARARGS,
   "V.IsArray() -> bool\nC++: bool IsArray()\n\nGet whether the variant is a VTK array (i.e. a subclass of\nvtkAbstractArray).\n"},
  {"GetType", PyvtkVariant_GetType, METH_VARARGS,
   "V.GetType() -> int\nC++: unsigned int GetType()\n\nGet the type of the variant.\n"},
  {"GetTypeAsString", PyvtkVariant_GetTypeAsString, METH_VARARGS,
   "V.GetTypeAsString() -> string\nC++: const char *GetTypeAsString()\n\nGet the type of the variant as a string.\n"},
  {"ToString", PyvtkVariant_ToString, METH_VARARGS,
   "V.ToString() -> string\nC++: vtkStdString ToString()\n\nConvert the variant to a string.\n"},
  {"ToUnicodeString", PyvtkVariant_ToUnicodeString, METH_VARARGS,
   "V.ToUnicodeString() -> unicode\nC++: vtkUnicodeString ToUnicodeString()\n\nconvert the variant to a Unicode string.\n"},
  {"ToFloat", PyvtkVariant_ToFloat, METH_VARARGS,
   "V.ToFloat([bool, ...]) -> float\nC++: float ToFloat(bool *valid)\nV.ToFloat() -> float\nC++: float ToFloat()\n\nConvert the variant to a numeric type: If it holds a numeric,\ncast to the appropriate type. If it holds a string, attempt to\nconvert the string to the appropriate type; set the valid flag to\nfalse when the conversion fails. If it holds an array type, cast\nthe first value of the array to the appropriate type. Fail if it\nholds a VTK object which is not an array.\n"},
  {"ToDouble", PyvtkVariant_ToDouble, METH_VARARGS,
   "V.ToDouble([bool, ...]) -> float\nC++: double ToDouble(bool *valid)\nV.ToDouble() -> float\nC++: double ToDouble()\n\nConvert the variant to a numeric type: If it holds a numeric,\ncast to the appropriate type. If it holds a string, attempt to\nconvert the string to the appropriate type; set the valid flag to\nfalse when the conversion fails. If it holds an array type, cast\nthe first value of the array to the appropriate type. Fail if it\nholds a VTK object which is not an array.\n"},
  {"ToChar", PyvtkVariant_ToChar, METH_VARARGS,
   "V.ToChar([bool, ...]) -> char\nC++: char ToChar(bool *valid)\nV.ToChar() -> char\nC++: char ToChar()\n\nConvert the variant to a numeric type: If it holds a numeric,\ncast to the appropriate type. If it holds a string, attempt to\nconvert the string to the appropriate type; set the valid flag to\nfalse when the conversion fails. If it holds an array type, cast\nthe first value of the array to the appropriate type. Fail if it\nholds a VTK object which is not an array.\n"},
  {"ToUnsignedChar", PyvtkVariant_ToUnsignedChar, METH_VARARGS,
   "V.ToUnsignedChar([bool, ...]) -> int\nC++: unsigned char ToUnsignedChar(bool *valid)\nV.ToUnsignedChar() -> int\nC++: unsigned char ToUnsignedChar()\n\nConvert the variant to a numeric type: If it holds a numeric,\ncast to the appropriate type. If it holds a string, attempt to\nconvert the string to the appropriate type; set the valid flag to\nfalse when the conversion fails. If it holds an array type, cast\nthe first value of the array to the appropriate type. Fail if it\nholds a VTK object which is not an array.\n"},
  {"ToSignedChar", PyvtkVariant_ToSignedChar, METH_VARARGS,
   "V.ToSignedChar([bool, ...]) -> int\nC++: signed char ToSignedChar(bool *valid)\nV.ToSignedChar() -> int\nC++: signed char ToSignedChar()\n\nConvert the variant to a numeric type: If it holds a numeric,\ncast to the appropriate type. If it holds a string, attempt to\nconvert the string to the appropriate type; set the valid flag to\nfalse when the conversion fails. If it holds an array type, cast\nthe first value of the array to the appropriate type. Fail if it\nholds a VTK object which is not an array.\n"},
  {"ToShort", PyvtkVariant_ToShort, METH_VARARGS,
   "V.ToShort([bool, ...]) -> int\nC++: short ToShort(bool *valid)\nV.ToShort() -> int\nC++: short ToShort()\n\nConvert the variant to a numeric type: If it holds a numeric,\ncast to the appropriate type. If it holds a string, attempt to\nconvert the string to the appropriate type; set the valid flag to\nfalse when the conversion fails. If it holds an array type, cast\nthe first value of the array to the appropriate type. Fail if it\nholds a VTK object which is not an array.\n"},
  {"ToUnsignedShort", PyvtkVariant_ToUnsignedShort, METH_VARARGS,
   "V.ToUnsignedShort([bool, ...]) -> int\nC++: unsigned short ToUnsignedShort(bool *valid)\nV.ToUnsignedShort() -> int\nC++: unsigned short ToUnsignedShort()\n\nConvert the variant to a numeric type: If it holds a numeric,\ncast to the appropriate type. If it holds a string, attempt to\nconvert the string to the appropriate type; set the valid flag to\nfalse when the conversion fails. If it holds an array type, cast\nthe first value of the array to the appropriate type. Fail if it\nholds a VTK object which is not an array.\n"},
  {"ToInt", PyvtkVariant_ToInt, METH_VARARGS,
   "V.ToInt([bool, ...]) -> int\nC++: int ToInt(bool *valid)\nV.ToInt() -> int\nC++: int ToInt()\n\nConvert the variant to a numeric type: If it holds a numeric,\ncast to the appropriate type. If it holds a string, attempt to\nconvert the string to the appropriate type; set the valid flag to\nfalse when the conversion fails. If it holds an array type, cast\nthe first value of the array to the appropriate type. Fail if it\nholds a VTK object which is not an array.\n"},
  {"ToUnsignedInt", PyvtkVariant_ToUnsignedInt, METH_VARARGS,
   "V.ToUnsignedInt([bool, ...]) -> int\nC++: unsigned int ToUnsignedInt(bool *valid)\nV.ToUnsignedInt() -> int\nC++: unsigned int ToUnsignedInt()\n\nConvert the variant to a numeric type: If it holds a numeric,\ncast to the appropriate type. If it holds a string, attempt to\nconvert the string to the appropriate type; set the valid flag to\nfalse when the conversion fails. If it holds an array type, cast\nthe first value of the array to the appropriate type. Fail if it\nholds a VTK object which is not an array.\n"},
  {"ToLong", PyvtkVariant_ToLong, METH_VARARGS,
   "V.ToLong([bool, ...]) -> int\nC++: long ToLong(bool *valid)\nV.ToLong() -> int\nC++: long ToLong()\n\nConvert the variant to a numeric type: If it holds a numeric,\ncast to the appropriate type. If it holds a string, attempt to\nconvert the string to the appropriate type; set the valid flag to\nfalse when the conversion fails. If it holds an array type, cast\nthe first value of the array to the appropriate type. Fail if it\nholds a VTK object which is not an array.\n"},
  {"ToUnsignedLong", PyvtkVariant_ToUnsignedLong, METH_VARARGS,
   "V.ToUnsignedLong([bool, ...]) -> int\nC++: unsigned long ToUnsignedLong(bool *valid)\nV.ToUnsignedLong() -> int\nC++: unsigned long ToUnsignedLong()\n\nConvert the variant to a numeric type: If it holds a numeric,\ncast to the appropriate type. If it holds a string, attempt to\nconvert the string to the appropriate type; set the valid flag to\nfalse when the conversion fails. If it holds an array type, cast\nthe first value of the array to the appropriate type. Fail if it\nholds a VTK object which is not an array.\n"},
  {"ToLongLong", PyvtkVariant_ToLongLong, METH_VARARGS,
   "V.ToLongLong([bool, ...]) -> int\nC++: long long ToLongLong(bool *valid)\nV.ToLongLong() -> int\nC++: long long ToLongLong()\n\nConvert the variant to a numeric type: If it holds a numeric,\ncast to the appropriate type. If it holds a string, attempt to\nconvert the string to the appropriate type; set the valid flag to\nfalse when the conversion fails. If it holds an array type, cast\nthe first value of the array to the appropriate type. Fail if it\nholds a VTK object which is not an array.\n"},
  {"ToUnsignedLongLong", PyvtkVariant_ToUnsignedLongLong, METH_VARARGS,
   "V.ToUnsignedLongLong([bool, ...]) -> int\nC++: unsigned long long ToUnsignedLongLong(bool *valid)\nV.ToUnsignedLongLong() -> int\nC++: unsigned long long ToUnsignedLongLong()\n\nConvert the variant to a numeric type: If it holds a numeric,\ncast to the appropriate type. If it holds a string, attempt to\nconvert the string to the appropriate type; set the valid flag to\nfalse when the conversion fails. If it holds an array type, cast\nthe first value of the array to the appropriate type. Fail if it\nholds a VTK object which is not an array.\n"},
  {"ToTypeInt64", PyvtkVariant_ToTypeInt64, METH_VARARGS,
   "V.ToTypeInt64([bool, ...]) -> int\nC++: vtkTypeInt64 ToTypeInt64(bool *valid)\nV.ToTypeInt64() -> int\nC++: vtkTypeInt64 ToTypeInt64()\n\nConvert the variant to a numeric type: If it holds a numeric,\ncast to the appropriate type. If it holds a string, attempt to\nconvert the string to the appropriate type; set the valid flag to\nfalse when the conversion fails. If it holds an array type, cast\nthe first value of the array to the appropriate type. Fail if it\nholds a VTK object which is not an array.\n"},
  {"ToTypeUInt64", PyvtkVariant_ToTypeUInt64, METH_VARARGS,
   "V.ToTypeUInt64([bool, ...]) -> int\nC++: vtkTypeUInt64 ToTypeUInt64(bool *valid)\nV.ToTypeUInt64() -> int\nC++: vtkTypeUInt64 ToTypeUInt64()\n\nConvert the variant to a numeric type: If it holds a numeric,\ncast to the appropriate type. If it holds a string, attempt to\nconvert the string to the appropriate type; set the valid flag to\nfalse when the conversion fails. If it holds an array type, cast\nthe first value of the array to the appropriate type. Fail if it\nholds a VTK object which is not an array.\n"},
  {"ToVTKObject", PyvtkVariant_ToVTKObject, METH_VARARGS,
   "V.ToVTKObject() -> vtkObjectBase\nC++: vtkObjectBase *ToVTKObject()\n\nReturn the VTK object, or nullptr if not of that type.\n"},
  {"ToArray", PyvtkVariant_ToArray, METH_VARARGS,
   "V.ToArray() -> vtkAbstractArray\nC++: vtkAbstractArray *ToArray()\n\nReturn the array, or nullptr if not of that type.\n"},
  {"IsEqual", PyvtkVariant_IsEqual, METH_VARARGS,
   "V.IsEqual(vtkVariant) -> bool\nC++: bool IsEqual(const vtkVariant &other)\n\nDetermines whether two variants have the same value. They do not\nneed to be storing exactly the same type to have the same value. \nIn practice you don't need to use this method: just use\noperator== instead.  If you want precise equality down to the bit\nlevel use the following idiom:\n\n* vtkVariantStrictEquality comparator;\n* bool variantsEqual = comparator(firstVariant, secondVariant);\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkVariant_vtkVariant_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVariant");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkVariant *op = new vtkVariant();

    result = PyVTKSpecialObject_New("vtkVariant", op);
  }

  return result;
}

static PyObject *
PyvtkVariant_vtkVariant_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVariant");

  vtkVariant *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant"))
  {
    vtkVariant *op = new vtkVariant(*temp0);

    result = PyVTKSpecialObject_New("vtkVariant", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkVariant_vtkVariant_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVariant");

  bool temp0 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVariant *op = new vtkVariant(temp0);

    result = PyVTKSpecialObject_New("vtkVariant", op);
  }

  return result;
}

static PyObject *
PyvtkVariant_vtkVariant_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVariant");

  char temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVariant *op = new vtkVariant(temp0);

    result = PyVTKSpecialObject_New("vtkVariant", op);
  }

  return result;
}

static PyObject *
PyvtkVariant_vtkVariant_s5(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVariant");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVariant *op = new vtkVariant(temp0);

    result = PyVTKSpecialObject_New("vtkVariant", op);
  }

  return result;
}

static PyObject *
PyvtkVariant_vtkVariant_s6(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVariant");

  long temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVariant *op = new vtkVariant(temp0);

    result = PyVTKSpecialObject_New("vtkVariant", op);
  }

  return result;
}

static PyObject *
PyvtkVariant_vtkVariant_s7(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVariant");

  long long temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVariant *op = new vtkVariant(temp0);

    result = PyVTKSpecialObject_New("vtkVariant", op);
  }

  return result;
}

static PyObject *
PyvtkVariant_vtkVariant_s8(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVariant");

  double temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVariant *op = new vtkVariant(temp0);

    result = PyVTKSpecialObject_New("vtkVariant", op);
  }

  return result;
}

static PyObject *
PyvtkVariant_vtkVariant_s9(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVariant");

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVariant *op = new vtkVariant(temp0);

    result = PyVTKSpecialObject_New("vtkVariant", op);
  }

  return result;
}

static PyObject *
PyvtkVariant_vtkVariant_s10(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVariant");

  vtkUnicodeString temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVariant *op = new vtkVariant(temp0);

    result = PyVTKSpecialObject_New("vtkVariant", op);
  }

  return result;
}

static PyObject *
PyvtkVariant_vtkVariant_s11(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVariant");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkVariant *op = new vtkVariant(temp0);

    result = PyVTKSpecialObject_New("vtkVariant", op);
  }

  return result;
}

static PyObject *
PyvtkVariant_vtkVariant_s12(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVariant");

  vtkVariant *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant") &&
      ap.GetValue(temp1))
  {
    vtkVariant *op = new vtkVariant(*temp0, temp1);

    result = PyVTKSpecialObject_New("vtkVariant", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVariant_vtkVariant_Methods[] = {
  {nullptr, PyvtkVariant_vtkVariant_s2, METH_VARARGS,
   "@W vtkVariant"},
  {nullptr, PyvtkVariant_vtkVariant_s3, METH_VARARGS,
   "@q"},
  {nullptr, PyvtkVariant_vtkVariant_s4, METH_VARARGS,
   "@c"},
  {nullptr, PyvtkVariant_vtkVariant_s5, METH_VARARGS,
   "@i"},
  {nullptr, PyvtkVariant_vtkVariant_s6, METH_VARARGS,
   "@l"},
  {nullptr, PyvtkVariant_vtkVariant_s7, METH_VARARGS,
   "@k"},
  {nullptr, PyvtkVariant_vtkVariant_s8, METH_VARARGS,
   "@d"},
  {nullptr, PyvtkVariant_vtkVariant_s9, METH_VARARGS,
   "@s"},
  {nullptr, PyvtkVariant_vtkVariant_s10, METH_VARARGS,
   "@u"},
  {nullptr, PyvtkVariant_vtkVariant_s11, METH_VARARGS,
   "@V *vtkObjectBase"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkVariant_vtkVariant(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkVariant_vtkVariant_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkVariant_vtkVariant_s1(self, args);
    case 2:
      return PyvtkVariant_vtkVariant_s12(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkVariant");
  return nullptr;
}


static PyObject *
PyvtkVariant_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkVariant_vtkVariant(nullptr, args);
}

static void PyvtkVariant_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkVariant *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static PyObject *PyvtkVariant_String(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  std::ostringstream os;
  if (obj->vtk_ptr)
  {
    os << *static_cast<const vtkVariant *>(obj->vtk_ptr);
  }
  const std::string &s = os.str();
  return PyString_FromStringAndSize(s.data(), s.size());
}

static int PyvtkVariant_CheckExact(PyObject *ob);

static PyObject *PyvtkVariant_RichCompare(
  PyObject *o1, PyObject *o2, int opid)
{
  PyObject *n1 = nullptr;
  PyObject *n2 = nullptr;
  const vtkVariant *so1 = nullptr;
  const vtkVariant *so2 = nullptr;
  int result = -1;

  if (PyvtkVariant_CheckExact(o1))
  {
    PyVTKSpecialObject *s1 = (PyVTKSpecialObject *)o1;
    so1 = static_cast<const vtkVariant *>(s1->vtk_ptr);
  }
  else
  {
    so1 = static_cast<const vtkVariant *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o1, "vtkVariant", &n1));
    if (so1 == nullptr)
    {
      PyErr_Clear();
      Py_INCREF(Py_NotImplemented);
      return Py_NotImplemented;
    }
  }

  if (PyvtkVariant_CheckExact(o2))
  {
    PyVTKSpecialObject *s2 = (PyVTKSpecialObject *)o2;
    so2 = static_cast<const vtkVariant *>(s2->vtk_ptr);
  }
  else
  {
    so2 = static_cast<const vtkVariant *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o2, "vtkVariant", &n2));
    if (so2 == nullptr)
    {
      PyErr_Clear();
      Py_INCREF(Py_NotImplemented);
      return Py_NotImplemented;
    }
  }

  switch (opid)
  {
    case Py_LT:
      result = ((*so1) < (*so2));
      break;
    case Py_LE:
      result = ((*so1) <= (*so2));
      break;
    case Py_EQ:
      result = ((*so1) == (*so2));
      break;
    case Py_NE:
      result = ((*so1) != (*so2));
      break;
    case Py_GT:
      result = ((*so1) > (*so2));
      break;
    case Py_GE:
      result = ((*so1) >= (*so2));
      break;
  }

  if (n1)
  {
    Py_DECREF(n1);
  }
  else if (n2)
  {
    Py_DECREF(n2);
  }

  if (result == -1)
  {
    PyErr_SetString(PyExc_TypeError, "operation not available");
    return nullptr;
  }

  // avoids aliasing issues with Py_INCREF(Py_False)
  return PyBool_FromLong((long)result);
}

static Py_hash_t PyvtkVariant_Hash(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  const vtkVariant *op = static_cast<const vtkVariant *>(obj->vtk_ptr);
  long h = obj->vtk_hash;
  if (h != -1)
  {
    return h;
  }
  h = vtkPythonUtil::VariantHash(op);
  obj->vtk_hash = h;
  return h;
}

static PyTypeObject PyvtkVariant_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkVariant", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVariant_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkVariant_Hash, // tp_hash
  nullptr, // tp_call
  PyvtkVariant_String, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkVariant_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  PyvtkVariant_RichCompare, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkVariant_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static int PyvtkVariant_CheckExact(PyObject *ob)
{
  return (Py_TYPE(ob) == &PyvtkVariant_Type);
}

static void *PyvtkVariant_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkVariant(*static_cast<const vtkVariant*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkVariant_TypeNew(); }

PyObject *PyvtkVariant_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkVariant_Type,
    PyvtkVariant_Methods,
    PyvtkVariant_vtkVariant_Methods,
    &PyvtkVariant_CCopy);

  PyTypeObject *pytype = &PyvtkVariant_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static const char *PyvtkVariantLessThan_Doc =
  "vtkVariantLessThan - no description provided.\n\n"

  "vtkVariantLessThan()\n"
  "vtkVariantLessThan(const &vtkVariantLessThan)\n";

static PyMethodDef PyvtkVariantLessThan_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkVariantLessThan_vtkVariantLessThan_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVariantLessThan");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkVariantLessThan *op = new vtkVariantLessThan();

    result = PyVTKSpecialObject_New("vtkVariantLessThan", op);
  }

  return result;
}

static PyObject *
PyvtkVariantLessThan_vtkVariantLessThan_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVariantLessThan");

  vtkVariantLessThan *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariantLessThan"))
  {
    vtkVariantLessThan *op = new vtkVariantLessThan(*temp0);

    result = PyVTKSpecialObject_New("vtkVariantLessThan", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVariantLessThan_vtkVariantLessThan_Methods[] = {
  {nullptr, PyvtkVariantLessThan_vtkVariantLessThan_s2, METH_VARARGS,
   "@W vtkVariantLessThan"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkVariantLessThan_vtkVariantLessThan(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkVariantLessThan_vtkVariantLessThan_s1(self, args);
    case 1:
      return PyvtkVariantLessThan_vtkVariantLessThan_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkVariantLessThan");
  return nullptr;
}


static PyObject *
PyvtkVariantLessThan_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkVariantLessThan_vtkVariantLessThan(nullptr, args);
}

static void PyvtkVariantLessThan_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkVariantLessThan *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkVariantLessThan_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", Py_TYPE(self)->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

static PyTypeObject PyvtkVariantLessThan_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkVariantLessThan", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVariantLessThan_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkVariantLessThan_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkVariantLessThan_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkVariantLessThan_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkVariantLessThan_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkVariantLessThan(*static_cast<const vtkVariantLessThan*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkVariantLessThan_TypeNew(); }

PyObject *PyvtkVariantLessThan_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkVariantLessThan_Type,
    PyvtkVariantLessThan_Methods,
    PyvtkVariantLessThan_vtkVariantLessThan_Methods,
    &PyvtkVariantLessThan_CCopy);

  PyTypeObject *pytype = &PyvtkVariantLessThan_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static const char *PyvtkVariantEqual_Doc =
  "vtkVariantEqual - no description provided.\n\n"

  "vtkVariantEqual()\n"
  "vtkVariantEqual(const &vtkVariantEqual)\n";

static PyMethodDef PyvtkVariantEqual_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkVariantEqual_vtkVariantEqual_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVariantEqual");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkVariantEqual *op = new vtkVariantEqual();

    result = PyVTKSpecialObject_New("vtkVariantEqual", op);
  }

  return result;
}

static PyObject *
PyvtkVariantEqual_vtkVariantEqual_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVariantEqual");

  vtkVariantEqual *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariantEqual"))
  {
    vtkVariantEqual *op = new vtkVariantEqual(*temp0);

    result = PyVTKSpecialObject_New("vtkVariantEqual", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVariantEqual_vtkVariantEqual_Methods[] = {
  {nullptr, PyvtkVariantEqual_vtkVariantEqual_s2, METH_VARARGS,
   "@W vtkVariantEqual"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkVariantEqual_vtkVariantEqual(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkVariantEqual_vtkVariantEqual_s1(self, args);
    case 1:
      return PyvtkVariantEqual_vtkVariantEqual_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkVariantEqual");
  return nullptr;
}


static PyObject *
PyvtkVariantEqual_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkVariantEqual_vtkVariantEqual(nullptr, args);
}

static void PyvtkVariantEqual_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkVariantEqual *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkVariantEqual_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", Py_TYPE(self)->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

static PyTypeObject PyvtkVariantEqual_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkVariantEqual", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVariantEqual_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkVariantEqual_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkVariantEqual_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkVariantEqual_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkVariantEqual_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkVariantEqual(*static_cast<const vtkVariantEqual*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkVariantEqual_TypeNew(); }

PyObject *PyvtkVariantEqual_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkVariantEqual_Type,
    PyvtkVariantEqual_Methods,
    PyvtkVariantEqual_vtkVariantEqual_Methods,
    &PyvtkVariantEqual_CCopy);

  PyTypeObject *pytype = &PyvtkVariantEqual_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static const char *PyvtkVariantStrictWeakOrder_Doc =
  "vtkVariantStrictWeakOrder - no description provided.\n\n"

  "vtkVariantStrictWeakOrder()\n"
  "vtkVariantStrictWeakOrder(const &vtkVariantStrictWeakOrder)\n";

static PyMethodDef PyvtkVariantStrictWeakOrder_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkVariantStrictWeakOrder_vtkVariantStrictWeakOrder_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVariantStrictWeakOrder");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkVariantStrictWeakOrder *op = new vtkVariantStrictWeakOrder();

    result = PyVTKSpecialObject_New("vtkVariantStrictWeakOrder", op);
  }

  return result;
}

static PyObject *
PyvtkVariantStrictWeakOrder_vtkVariantStrictWeakOrder_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVariantStrictWeakOrder");

  vtkVariantStrictWeakOrder *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariantStrictWeakOrder"))
  {
    vtkVariantStrictWeakOrder *op = new vtkVariantStrictWeakOrder(*temp0);

    result = PyVTKSpecialObject_New("vtkVariantStrictWeakOrder", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVariantStrictWeakOrder_vtkVariantStrictWeakOrder_Methods[] = {
  {nullptr, PyvtkVariantStrictWeakOrder_vtkVariantStrictWeakOrder_s2, METH_VARARGS,
   "@W vtkVariantStrictWeakOrder"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkVariantStrictWeakOrder_vtkVariantStrictWeakOrder(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkVariantStrictWeakOrder_vtkVariantStrictWeakOrder_s1(self, args);
    case 1:
      return PyvtkVariantStrictWeakOrder_vtkVariantStrictWeakOrder_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkVariantStrictWeakOrder");
  return nullptr;
}


static PyObject *
PyvtkVariantStrictWeakOrder_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkVariantStrictWeakOrder_vtkVariantStrictWeakOrder(nullptr, args);
}

static void PyvtkVariantStrictWeakOrder_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkVariantStrictWeakOrder *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkVariantStrictWeakOrder_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", Py_TYPE(self)->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

static PyTypeObject PyvtkVariantStrictWeakOrder_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkVariantStrictWeakOrder", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVariantStrictWeakOrder_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkVariantStrictWeakOrder_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkVariantStrictWeakOrder_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkVariantStrictWeakOrder_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkVariantStrictWeakOrder_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkVariantStrictWeakOrder(*static_cast<const vtkVariantStrictWeakOrder*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkVariantStrictWeakOrder_TypeNew(); }

PyObject *PyvtkVariantStrictWeakOrder_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkVariantStrictWeakOrder_Type,
    PyvtkVariantStrictWeakOrder_Methods,
    PyvtkVariantStrictWeakOrder_vtkVariantStrictWeakOrder_Methods,
    &PyvtkVariantStrictWeakOrder_CCopy);

  PyTypeObject *pytype = &PyvtkVariantStrictWeakOrder_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static const char *PyvtkVariantStrictEquality_Doc =
  "vtkVariantStrictEquality - no description provided.\n\n"

  "vtkVariantStrictEquality()\n"
  "vtkVariantStrictEquality(const &vtkVariantStrictEquality)\n";

static PyMethodDef PyvtkVariantStrictEquality_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkVariantStrictEquality_vtkVariantStrictEquality_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVariantStrictEquality");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkVariantStrictEquality *op = new vtkVariantStrictEquality();

    result = PyVTKSpecialObject_New("vtkVariantStrictEquality", op);
  }

  return result;
}

static PyObject *
PyvtkVariantStrictEquality_vtkVariantStrictEquality_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVariantStrictEquality");

  vtkVariantStrictEquality *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariantStrictEquality"))
  {
    vtkVariantStrictEquality *op = new vtkVariantStrictEquality(*temp0);

    result = PyVTKSpecialObject_New("vtkVariantStrictEquality", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVariantStrictEquality_vtkVariantStrictEquality_Methods[] = {
  {nullptr, PyvtkVariantStrictEquality_vtkVariantStrictEquality_s2, METH_VARARGS,
   "@W vtkVariantStrictEquality"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkVariantStrictEquality_vtkVariantStrictEquality(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkVariantStrictEquality_vtkVariantStrictEquality_s1(self, args);
    case 1:
      return PyvtkVariantStrictEquality_vtkVariantStrictEquality_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkVariantStrictEquality");
  return nullptr;
}


static PyObject *
PyvtkVariantStrictEquality_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkVariantStrictEquality_vtkVariantStrictEquality(nullptr, args);
}

static void PyvtkVariantStrictEquality_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkVariantStrictEquality *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkVariantStrictEquality_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", Py_TYPE(self)->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

static PyTypeObject PyvtkVariantStrictEquality_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkVariantStrictEquality", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVariantStrictEquality_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkVariantStrictEquality_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkVariantStrictEquality_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkVariantStrictEquality_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkVariantStrictEquality_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkVariantStrictEquality(*static_cast<const vtkVariantStrictEquality*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkVariantStrictEquality_TypeNew(); }

PyObject *PyvtkVariantStrictEquality_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkVariantStrictEquality_Type,
    PyvtkVariantStrictEquality_Methods,
    PyvtkVariantStrictEquality_vtkVariantStrictEquality_Methods,
    &PyvtkVariantStrictEquality_CCopy);

  PyTypeObject *pytype = &PyvtkVariantStrictEquality_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkVariant(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkVariant_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkVariant", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkVariantLessThan_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkVariantLessThan", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkVariantEqual_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkVariantEqual", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkVariantStrictWeakOrder_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkVariantStrictWeakOrder", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkVariantStrictEquality_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkVariantStrictEquality", o) != 0)
  {
    Py_DECREF(o);
  }

}

