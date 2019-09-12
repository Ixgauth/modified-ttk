// python wrapper for vtkDelimitedTextReader
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
#include "vtkStdString.h"
#include "vtkUnicodeString.h"
#include "vtkDelimitedTextReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDelimitedTextReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDelimitedTextReader_ClassNew(); }

#ifndef DECLARED_PyvtkTableAlgorithm_ClassNew
extern "C" { PyObject *PyvtkTableAlgorithm_ClassNew(); }
#define DECLARED_PyvtkTableAlgorithm_ClassNew
#endif

static const char *PyvtkDelimitedTextReader_Doc =
  "vtkDelimitedTextReader - reads in delimited ascii or unicode text\nfiles and outputs a vtkTable data structure.\n\n"
  "Superclass: vtkTableAlgorithm\n\n"
  "vtkDelimitedTextReader is an interface for pulling in data from a\n"
  "flat, delimited ascii or unicode text file (delimiter can be any\n"
  "character).\n\n"
  "The behavior of the reader with respect to ascii or unicode input is\n"
  "controlled by the SetUnicodeCharacterSet() method.  By default\n"
  "(without calling SetUnicodeCharacterSet()), the reader will expect to\n"
  "read ascii text and will output vtkStdString columns.  Use the Set\n"
  "and Get methods to set delimiters that do not contain UTF8 in the\n"
  "name when operating the reader in default ascii mode.  If the\n"
  "SetUnicodeCharacterSet() method is called, the reader will output\n"
  "vtkUnicodeString columns in the output table.  In addition, it is\n"
  "necessary to use the Set and Get methods that contain UTF8 in the\n"
  "name to specify delimiters when operating in unicode mode.\n\n"
  "There is also a special character set US-ASCII-WITH-FALLBACK that\n"
  "will treat the input text as ASCII no matter what.  If and when it\n"
  "encounters a character with its 8th bit set it will replace that\n"
  "character with the code point ReplacementCharacter.  You may use this\n"
  "if you have text that belongs to a code page like LATIN9 or\n"
  "ISO-8859-1 or friends: mostly ASCII but not entirely.  Eventually\n"
  "this class will acquire the ability to read gracefully text from any\n"
  "code page, making this option obsolete.\n\n"
  "This class emits ProgressEvent for every 100 lines it reads.\n\n"
  "@par Thanks: Thanks to Andy Wilson, Brian Wylie, Tim Shead, and\n"
  "Thomas Otahal from Sandia National Laboratories for implementing this\n"
  "class.\n\n"
  "@warning\n"
  "This reader assumes that the first line in the file (whether that's\n"
  "headers or the first document) contains at least as many fields as\n"
  "any other line in the file.\n\n";


static PyObject *
PyvtkDelimitedTextReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDelimitedTextReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDelimitedTextReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDelimitedTextReader *tempr = vtkDelimitedTextReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDelimitedTextReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDelimitedTextReader::NewInstance());

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
PyvtkDelimitedTextReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkDelimitedTextReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

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
      op->vtkDelimitedTextReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetInputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetInputString() :
      op->vtkDelimitedTextReader::GetInputString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetInputString_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetInputString(temp0, temp1);
    }
    else
    {
      op->vtkDelimitedTextReader::SetInputString(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDelimitedTextReader_SetInputString_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInputString(temp0);
    }
    else
    {
      op->vtkDelimitedTextReader::SetInputString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDelimitedTextReader_SetInputString(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkDelimitedTextReader_SetInputString_s1(self, args);
    case 1:
      return PyvtkDelimitedTextReader_SetInputString_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInputString");
  return nullptr;
}



static PyObject *
PyvtkDelimitedTextReader_GetInputStringLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputStringLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInputStringLength() :
      op->vtkDelimitedTextReader::GetInputStringLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetReadFromInputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadFromInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReadFromInputString(temp0);
    }
    else
    {
      op->vtkDelimitedTextReader::SetReadFromInputString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetReadFromInputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadFromInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReadFromInputString() :
      op->vtkDelimitedTextReader::GetReadFromInputString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_ReadFromInputStringOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadFromInputStringOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadFromInputStringOn();
    }
    else
    {
      op->vtkDelimitedTextReader::ReadFromInputStringOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_ReadFromInputStringOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadFromInputStringOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadFromInputStringOff();
    }
    else
    {
      op->vtkDelimitedTextReader::ReadFromInputStringOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetUnicodeCharacterSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnicodeCharacterSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetUnicodeCharacterSet() :
      op->vtkDelimitedTextReader::GetUnicodeCharacterSet());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetUnicodeCharacterSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUnicodeCharacterSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUnicodeCharacterSet(temp0);
    }
    else
    {
      op->vtkDelimitedTextReader::SetUnicodeCharacterSet(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetUTF8RecordDelimiters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUTF8RecordDelimiters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUTF8RecordDelimiters(temp0);
    }
    else
    {
      op->vtkDelimitedTextReader::SetUTF8RecordDelimiters(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetUTF8RecordDelimiters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUTF8RecordDelimiters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetUTF8RecordDelimiters() :
      op->vtkDelimitedTextReader::GetUTF8RecordDelimiters());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetUnicodeRecordDelimiters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUnicodeRecordDelimiters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  vtkUnicodeString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUnicodeRecordDelimiters(temp0);
    }
    else
    {
      op->vtkDelimitedTextReader::SetUnicodeRecordDelimiters(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetUnicodeRecordDelimiters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnicodeRecordDelimiters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnicodeString tempr = (ap.IsBound() ?
      op->GetUnicodeRecordDelimiters() :
      op->vtkDelimitedTextReader::GetUnicodeRecordDelimiters());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetFieldDelimiterCharacters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldDelimiterCharacters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFieldDelimiterCharacters(temp0);
    }
    else
    {
      op->vtkDelimitedTextReader::SetFieldDelimiterCharacters(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetFieldDelimiterCharacters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldDelimiterCharacters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFieldDelimiterCharacters() :
      op->vtkDelimitedTextReader::GetFieldDelimiterCharacters());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetUTF8FieldDelimiters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUTF8FieldDelimiters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUTF8FieldDelimiters(temp0);
    }
    else
    {
      op->vtkDelimitedTextReader::SetUTF8FieldDelimiters(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetUTF8FieldDelimiters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUTF8FieldDelimiters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetUTF8FieldDelimiters() :
      op->vtkDelimitedTextReader::GetUTF8FieldDelimiters());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetUnicodeFieldDelimiters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUnicodeFieldDelimiters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  vtkUnicodeString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUnicodeFieldDelimiters(temp0);
    }
    else
    {
      op->vtkDelimitedTextReader::SetUnicodeFieldDelimiters(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetUnicodeFieldDelimiters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnicodeFieldDelimiters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnicodeString tempr = (ap.IsBound() ?
      op->GetUnicodeFieldDelimiters() :
      op->vtkDelimitedTextReader::GetUnicodeFieldDelimiters());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetStringDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStringDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char tempr = (ap.IsBound() ?
      op->GetStringDelimiter() :
      op->vtkDelimitedTextReader::GetStringDelimiter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetStringDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStringDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStringDelimiter(temp0);
    }
    else
    {
      op->vtkDelimitedTextReader::SetStringDelimiter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetUTF8StringDelimiters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUTF8StringDelimiters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUTF8StringDelimiters(temp0);
    }
    else
    {
      op->vtkDelimitedTextReader::SetUTF8StringDelimiters(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetUTF8StringDelimiters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUTF8StringDelimiters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetUTF8StringDelimiters() :
      op->vtkDelimitedTextReader::GetUTF8StringDelimiters());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetUnicodeStringDelimiters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUnicodeStringDelimiters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  vtkUnicodeString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUnicodeStringDelimiters(temp0);
    }
    else
    {
      op->vtkDelimitedTextReader::SetUnicodeStringDelimiters(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetUnicodeStringDelimiters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnicodeStringDelimiters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnicodeString tempr = (ap.IsBound() ?
      op->GetUnicodeStringDelimiters() :
      op->vtkDelimitedTextReader::GetUnicodeStringDelimiters());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetUseStringDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseStringDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseStringDelimiter(temp0);
    }
    else
    {
      op->vtkDelimitedTextReader::SetUseStringDelimiter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetUseStringDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseStringDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseStringDelimiter() :
      op->vtkDelimitedTextReader::GetUseStringDelimiter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_UseStringDelimiterOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseStringDelimiterOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseStringDelimiterOn();
    }
    else
    {
      op->vtkDelimitedTextReader::UseStringDelimiterOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_UseStringDelimiterOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseStringDelimiterOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseStringDelimiterOff();
    }
    else
    {
      op->vtkDelimitedTextReader::UseStringDelimiterOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetHaveHeaders(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHaveHeaders");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetHaveHeaders() :
      op->vtkDelimitedTextReader::GetHaveHeaders());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetHaveHeaders(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHaveHeaders");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHaveHeaders(temp0);
    }
    else
    {
      op->vtkDelimitedTextReader::SetHaveHeaders(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetMergeConsecutiveDelimiters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMergeConsecutiveDelimiters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMergeConsecutiveDelimiters(temp0);
    }
    else
    {
      op->vtkDelimitedTextReader::SetMergeConsecutiveDelimiters(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetMergeConsecutiveDelimiters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergeConsecutiveDelimiters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetMergeConsecutiveDelimiters() :
      op->vtkDelimitedTextReader::GetMergeConsecutiveDelimiters());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_MergeConsecutiveDelimitersOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergeConsecutiveDelimitersOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MergeConsecutiveDelimitersOn();
    }
    else
    {
      op->vtkDelimitedTextReader::MergeConsecutiveDelimitersOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_MergeConsecutiveDelimitersOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergeConsecutiveDelimitersOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MergeConsecutiveDelimitersOff();
    }
    else
    {
      op->vtkDelimitedTextReader::MergeConsecutiveDelimitersOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetMaxRecords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxRecords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetMaxRecords() :
      op->vtkDelimitedTextReader::GetMaxRecords());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetMaxRecords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxRecords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxRecords(temp0);
    }
    else
    {
      op->vtkDelimitedTextReader::SetMaxRecords(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetDetectNumericColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDetectNumericColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDetectNumericColumns(temp0);
    }
    else
    {
      op->vtkDelimitedTextReader::SetDetectNumericColumns(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetDetectNumericColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDetectNumericColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDetectNumericColumns() :
      op->vtkDelimitedTextReader::GetDetectNumericColumns());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_DetectNumericColumnsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DetectNumericColumnsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DetectNumericColumnsOn();
    }
    else
    {
      op->vtkDelimitedTextReader::DetectNumericColumnsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_DetectNumericColumnsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DetectNumericColumnsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DetectNumericColumnsOff();
    }
    else
    {
      op->vtkDelimitedTextReader::DetectNumericColumnsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetForceDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetForceDouble(temp0);
    }
    else
    {
      op->vtkDelimitedTextReader::SetForceDouble(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetForceDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetForceDouble() :
      op->vtkDelimitedTextReader::GetForceDouble());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_ForceDoubleOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceDoubleOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceDoubleOn();
    }
    else
    {
      op->vtkDelimitedTextReader::ForceDoubleOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_ForceDoubleOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceDoubleOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceDoubleOff();
    }
    else
    {
      op->vtkDelimitedTextReader::ForceDoubleOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetTrimWhitespacePriorToNumericConversion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTrimWhitespacePriorToNumericConversion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTrimWhitespacePriorToNumericConversion(temp0);
    }
    else
    {
      op->vtkDelimitedTextReader::SetTrimWhitespacePriorToNumericConversion(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetTrimWhitespacePriorToNumericConversion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTrimWhitespacePriorToNumericConversion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetTrimWhitespacePriorToNumericConversion() :
      op->vtkDelimitedTextReader::GetTrimWhitespacePriorToNumericConversion());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_TrimWhitespacePriorToNumericConversionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TrimWhitespacePriorToNumericConversionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TrimWhitespacePriorToNumericConversionOn();
    }
    else
    {
      op->vtkDelimitedTextReader::TrimWhitespacePriorToNumericConversionOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_TrimWhitespacePriorToNumericConversionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TrimWhitespacePriorToNumericConversionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TrimWhitespacePriorToNumericConversionOff();
    }
    else
    {
      op->vtkDelimitedTextReader::TrimWhitespacePriorToNumericConversionOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetDefaultIntegerValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultIntegerValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDefaultIntegerValue(temp0);
    }
    else
    {
      op->vtkDelimitedTextReader::SetDefaultIntegerValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetDefaultIntegerValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultIntegerValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDefaultIntegerValue() :
      op->vtkDelimitedTextReader::GetDefaultIntegerValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetDefaultDoubleValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultDoubleValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDefaultDoubleValue(temp0);
    }
    else
    {
      op->vtkDelimitedTextReader::SetDefaultDoubleValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetDefaultDoubleValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultDoubleValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDefaultDoubleValue() :
      op->vtkDelimitedTextReader::GetDefaultDoubleValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetPedigreeIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPedigreeIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPedigreeIdArrayName(temp0);
    }
    else
    {
      op->vtkDelimitedTextReader::SetPedigreeIdArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetPedigreeIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPedigreeIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetPedigreeIdArrayName() :
      op->vtkDelimitedTextReader::GetPedigreeIdArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetGeneratePedigreeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeneratePedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGeneratePedigreeIds(temp0);
    }
    else
    {
      op->vtkDelimitedTextReader::SetGeneratePedigreeIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetGeneratePedigreeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeneratePedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGeneratePedigreeIds() :
      op->vtkDelimitedTextReader::GetGeneratePedigreeIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GeneratePedigreeIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePedigreeIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GeneratePedigreeIdsOn();
    }
    else
    {
      op->vtkDelimitedTextReader::GeneratePedigreeIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GeneratePedigreeIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePedigreeIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GeneratePedigreeIdsOff();
    }
    else
    {
      op->vtkDelimitedTextReader::GeneratePedigreeIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetOutputPedigreeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputPedigreeIds(temp0);
    }
    else
    {
      op->vtkDelimitedTextReader::SetOutputPedigreeIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetOutputPedigreeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetOutputPedigreeIds() :
      op->vtkDelimitedTextReader::GetOutputPedigreeIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_OutputPedigreeIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutputPedigreeIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutputPedigreeIdsOn();
    }
    else
    {
      op->vtkDelimitedTextReader::OutputPedigreeIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_OutputPedigreeIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutputPedigreeIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutputPedigreeIdsOff();
    }
    else
    {
      op->vtkDelimitedTextReader::OutputPedigreeIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetAddTabFieldDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAddTabFieldDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAddTabFieldDelimiter(temp0);
    }
    else
    {
      op->vtkDelimitedTextReader::SetAddTabFieldDelimiter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetAddTabFieldDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAddTabFieldDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAddTabFieldDelimiter() :
      op->vtkDelimitedTextReader::GetAddTabFieldDelimiter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_AddTabFieldDelimiterOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddTabFieldDelimiterOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AddTabFieldDelimiterOn();
    }
    else
    {
      op->vtkDelimitedTextReader::AddTabFieldDelimiterOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_AddTabFieldDelimiterOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddTabFieldDelimiterOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AddTabFieldDelimiterOff();
    }
    else
    {
      op->vtkDelimitedTextReader::AddTabFieldDelimiterOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetLastError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetLastError() :
      op->vtkDelimitedTextReader::GetLastError());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetReplacementCharacter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReplacementCharacter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReplacementCharacter(temp0);
    }
    else
    {
      op->vtkDelimitedTextReader::SetReplacementCharacter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetReplacementCharacter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReplacementCharacter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetReplacementCharacter() :
      op->vtkDelimitedTextReader::GetReplacementCharacter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDelimitedTextReader_Methods[] = {
  {"IsTypeOf", PyvtkDelimitedTextReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDelimitedTextReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDelimitedTextReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDelimitedTextReader\nC++: static vtkDelimitedTextReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDelimitedTextReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDelimitedTextReader\nC++: vtkDelimitedTextReader *NewInstance()\n\n"},
  {"GetFileName", PyvtkDelimitedTextReader_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nSpecifies the delimited text file to be loaded.\n"},
  {"SetFileName", PyvtkDelimitedTextReader_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *_arg)\n\nSpecifies the delimited text file to be loaded.\n"},
  {"GetInputString", PyvtkDelimitedTextReader_GetInputString, METH_VARARGS,
   "V.GetInputString() -> string\nC++: virtual char *GetInputString()\n\nSpecify the InputString for use when reading from a character\narray. Optionally include the length for binary strings. Note\nthat a copy of the string is made and stored. If this causes\nexceedingly large memory consumption, consider using InputArray\ninstead.\n"},
  {"SetInputString", PyvtkDelimitedTextReader_SetInputString, METH_VARARGS,
   "V.SetInputString(string, int)\nC++: void SetInputString(const char *in, int len)\nV.SetInputString(string)\nC++: void SetInputString(const vtkStdString &input)\n\nSpecify the InputString for use when reading from a character\narray. Optionally include the length for binary strings. Note\nthat a copy of the string is made and stored. If this causes\nexceedingly large memory consumption, consider using InputArray\ninstead.\n"},
  {"GetInputStringLength", PyvtkDelimitedTextReader_GetInputStringLength, METH_VARARGS,
   "V.GetInputStringLength() -> int\nC++: virtual int GetInputStringLength()\n\nSpecify the InputString for use when reading from a character\narray. Optionally include the length for binary strings. Note\nthat a copy of the string is made and stored. If this causes\nexceedingly large memory consumption, consider using InputArray\ninstead.\n"},
  {"SetReadFromInputString", PyvtkDelimitedTextReader_SetReadFromInputString, METH_VARARGS,
   "V.SetReadFromInputString(int)\nC++: virtual void SetReadFromInputString(vtkTypeBool _arg)\n\nEnable reading from an InputString or InputArray instead of the\ndefault, a file.\n"},
  {"GetReadFromInputString", PyvtkDelimitedTextReader_GetReadFromInputString, METH_VARARGS,
   "V.GetReadFromInputString() -> int\nC++: virtual vtkTypeBool GetReadFromInputString()\n\nEnable reading from an InputString or InputArray instead of the\ndefault, a file.\n"},
  {"ReadFromInputStringOn", PyvtkDelimitedTextReader_ReadFromInputStringOn, METH_VARARGS,
   "V.ReadFromInputStringOn()\nC++: virtual void ReadFromInputStringOn()\n\nEnable reading from an InputString or InputArray instead of the\ndefault, a file.\n"},
  {"ReadFromInputStringOff", PyvtkDelimitedTextReader_ReadFromInputStringOff, METH_VARARGS,
   "V.ReadFromInputStringOff()\nC++: virtual void ReadFromInputStringOff()\n\nEnable reading from an InputString or InputArray instead of the\ndefault, a file.\n"},
  {"GetUnicodeCharacterSet", PyvtkDelimitedTextReader_GetUnicodeCharacterSet, METH_VARARGS,
   "V.GetUnicodeCharacterSet() -> string\nC++: virtual char *GetUnicodeCharacterSet()\n\nSpecifies the character set used in the input file.  Valid\ncharacter set names will be drawn from the list maintained by the\nInternet Assigned Name Authority at\n\n* http://www.iana.org/assignments/character-sets\n\n* Where multiple aliases are provided for a character set, the\n  preferred MIME name\n* will be used.  vtkUnicodeDelimitedTextReader currently supports\n\"US-ASCII\", \"UTF-8\",\n* \"UTF-16\", \"UTF-16BE\", and \"UTF-16LE\" character sets.\n"},
  {"SetUnicodeCharacterSet", PyvtkDelimitedTextReader_SetUnicodeCharacterSet, METH_VARARGS,
   "V.SetUnicodeCharacterSet(string)\nC++: virtual void SetUnicodeCharacterSet(const char *_arg)\n\nSpecifies the character set used in the input file.  Valid\ncharacter set names will be drawn from the list maintained by the\nInternet Assigned Name Authority at\n\n* http://www.iana.org/assignments/character-sets\n\n* Where multiple aliases are provided for a character set, the\n  preferred MIME name\n* will be used.  vtkUnicodeDelimitedTextReader currently supports\n\"US-ASCII\", \"UTF-8\",\n* \"UTF-16\", \"UTF-16BE\", and \"UTF-16LE\" character sets.\n"},
  {"SetUTF8RecordDelimiters", PyvtkDelimitedTextReader_SetUTF8RecordDelimiters, METH_VARARGS,
   "V.SetUTF8RecordDelimiters(string)\nC++: void SetUTF8RecordDelimiters(const char *delimiters)\n\nSpecify the character(s) that will be used to separate records.\nThe order of characters in the string does not matter.  Defaults\nto \"\\r\\n\".\n"},
  {"GetUTF8RecordDelimiters", PyvtkDelimitedTextReader_GetUTF8RecordDelimiters, METH_VARARGS,
   "V.GetUTF8RecordDelimiters() -> string\nC++: const char *GetUTF8RecordDelimiters()\n\nSpecify the character(s) that will be used to separate records.\nThe order of characters in the string does not matter.  Defaults\nto \"\\r\\n\".\n"},
  {"SetUnicodeRecordDelimiters", PyvtkDelimitedTextReader_SetUnicodeRecordDelimiters, METH_VARARGS,
   "V.SetUnicodeRecordDelimiters(unicode)\nC++: void SetUnicodeRecordDelimiters(\n    const vtkUnicodeString &delimiters)\n\nSpecify the character(s) that will be used to separate records.\nThe order of characters in the string does not matter.  Defaults\nto \"\\r\\n\".\n"},
  {"GetUnicodeRecordDelimiters", PyvtkDelimitedTextReader_GetUnicodeRecordDelimiters, METH_VARARGS,
   "V.GetUnicodeRecordDelimiters() -> unicode\nC++: vtkUnicodeString GetUnicodeRecordDelimiters()\n\nSpecify the character(s) that will be used to separate records.\nThe order of characters in the string does not matter.  Defaults\nto \"\\r\\n\".\n"},
  {"SetFieldDelimiterCharacters", PyvtkDelimitedTextReader_SetFieldDelimiterCharacters, METH_VARARGS,
   "V.SetFieldDelimiterCharacters(string)\nC++: virtual void SetFieldDelimiterCharacters(const char *_arg)\n\nSpecify the character(s) that will be used to separate fields. \nFor example, set this to \",\" for a comma-separated value file. \nSet it to \".:;\" for a file where columns can be separated by a\nperiod, colon or semicolon.  The order of the characters in the\nstring does not matter.  Defaults to a comma.\n"},
  {"GetFieldDelimiterCharacters", PyvtkDelimitedTextReader_GetFieldDelimiterCharacters, METH_VARARGS,
   "V.GetFieldDelimiterCharacters() -> string\nC++: virtual char *GetFieldDelimiterCharacters()\n\nSpecify the character(s) that will be used to separate fields. \nFor example, set this to \",\" for a comma-separated value file. \nSet it to \".:;\" for a file where columns can be separated by a\nperiod, colon or semicolon.  The order of the characters in the\nstring does not matter.  Defaults to a comma.\n"},
  {"SetUTF8FieldDelimiters", PyvtkDelimitedTextReader_SetUTF8FieldDelimiters, METH_VARARGS,
   "V.SetUTF8FieldDelimiters(string)\nC++: void SetUTF8FieldDelimiters(const char *delimiters)\n\n"},
  {"GetUTF8FieldDelimiters", PyvtkDelimitedTextReader_GetUTF8FieldDelimiters, METH_VARARGS,
   "V.GetUTF8FieldDelimiters() -> string\nC++: const char *GetUTF8FieldDelimiters()\n\n"},
  {"SetUnicodeFieldDelimiters", PyvtkDelimitedTextReader_SetUnicodeFieldDelimiters, METH_VARARGS,
   "V.SetUnicodeFieldDelimiters(unicode)\nC++: void SetUnicodeFieldDelimiters(\n    const vtkUnicodeString &delimiters)\n\n"},
  {"GetUnicodeFieldDelimiters", PyvtkDelimitedTextReader_GetUnicodeFieldDelimiters, METH_VARARGS,
   "V.GetUnicodeFieldDelimiters() -> unicode\nC++: vtkUnicodeString GetUnicodeFieldDelimiters()\n\n"},
  {"GetStringDelimiter", PyvtkDelimitedTextReader_GetStringDelimiter, METH_VARARGS,
   "V.GetStringDelimiter() -> char\nC++: virtual char GetStringDelimiter()\n\nGet/set the character that will begin and end strings.  Microsoft\nExcel, for example, will export the following format:\n\n* \"First Field\",\"Second Field\",\"Field, With, Commas\",\"Fourth\n  Field\"\n\n* The third field has a comma in it.  By using a string\n  delimiter,\n* this will be correctly read.  The delimiter defaults to '\"'.\n"},
  {"SetStringDelimiter", PyvtkDelimitedTextReader_SetStringDelimiter, METH_VARARGS,
   "V.SetStringDelimiter(char)\nC++: virtual void SetStringDelimiter(char _arg)\n\nGet/set the character that will begin and end strings.  Microsoft\nExcel, for example, will export the following format:\n\n* \"First Field\",\"Second Field\",\"Field, With, Commas\",\"Fourth\n  Field\"\n\n* The third field has a comma in it.  By using a string\n  delimiter,\n* this will be correctly read.  The delimiter defaults to '\"'.\n"},
  {"SetUTF8StringDelimiters", PyvtkDelimitedTextReader_SetUTF8StringDelimiters, METH_VARARGS,
   "V.SetUTF8StringDelimiters(string)\nC++: void SetUTF8StringDelimiters(const char *delimiters)\n\n"},
  {"GetUTF8StringDelimiters", PyvtkDelimitedTextReader_GetUTF8StringDelimiters, METH_VARARGS,
   "V.GetUTF8StringDelimiters() -> string\nC++: const char *GetUTF8StringDelimiters()\n\n"},
  {"SetUnicodeStringDelimiters", PyvtkDelimitedTextReader_SetUnicodeStringDelimiters, METH_VARARGS,
   "V.SetUnicodeStringDelimiters(unicode)\nC++: void SetUnicodeStringDelimiters(\n    const vtkUnicodeString &delimiters)\n\n"},
  {"GetUnicodeStringDelimiters", PyvtkDelimitedTextReader_GetUnicodeStringDelimiters, METH_VARARGS,
   "V.GetUnicodeStringDelimiters() -> unicode\nC++: vtkUnicodeString GetUnicodeStringDelimiters()\n\n"},
  {"SetUseStringDelimiter", PyvtkDelimitedTextReader_SetUseStringDelimiter, METH_VARARGS,
   "V.SetUseStringDelimiter(bool)\nC++: virtual void SetUseStringDelimiter(bool _arg)\n\nSet/get whether to use the string delimiter.  Defaults to on.\n"},
  {"GetUseStringDelimiter", PyvtkDelimitedTextReader_GetUseStringDelimiter, METH_VARARGS,
   "V.GetUseStringDelimiter() -> bool\nC++: virtual bool GetUseStringDelimiter()\n\nSet/get whether to use the string delimiter.  Defaults to on.\n"},
  {"UseStringDelimiterOn", PyvtkDelimitedTextReader_UseStringDelimiterOn, METH_VARARGS,
   "V.UseStringDelimiterOn()\nC++: virtual void UseStringDelimiterOn()\n\nSet/get whether to use the string delimiter.  Defaults to on.\n"},
  {"UseStringDelimiterOff", PyvtkDelimitedTextReader_UseStringDelimiterOff, METH_VARARGS,
   "V.UseStringDelimiterOff()\nC++: virtual void UseStringDelimiterOff()\n\nSet/get whether to use the string delimiter.  Defaults to on.\n"},
  {"GetHaveHeaders", PyvtkDelimitedTextReader_GetHaveHeaders, METH_VARARGS,
   "V.GetHaveHeaders() -> bool\nC++: virtual bool GetHaveHeaders()\n\nSet/get whether to treat the first line of the file as headers.\nThe default is false (no headers).\n"},
  {"SetHaveHeaders", PyvtkDelimitedTextReader_SetHaveHeaders, METH_VARARGS,
   "V.SetHaveHeaders(bool)\nC++: virtual void SetHaveHeaders(bool _arg)\n\nSet/get whether to treat the first line of the file as headers.\nThe default is false (no headers).\n"},
  {"SetMergeConsecutiveDelimiters", PyvtkDelimitedTextReader_SetMergeConsecutiveDelimiters, METH_VARARGS,
   "V.SetMergeConsecutiveDelimiters(bool)\nC++: virtual void SetMergeConsecutiveDelimiters(bool _arg)\n\nSet/get whether to merge successive delimiters.  Use this if (for\nexample) your fields are separated by spaces but you don't know\nexactly how many.\n"},
  {"GetMergeConsecutiveDelimiters", PyvtkDelimitedTextReader_GetMergeConsecutiveDelimiters, METH_VARARGS,
   "V.GetMergeConsecutiveDelimiters() -> bool\nC++: virtual bool GetMergeConsecutiveDelimiters()\n\nSet/get whether to merge successive delimiters.  Use this if (for\nexample) your fields are separated by spaces but you don't know\nexactly how many.\n"},
  {"MergeConsecutiveDelimitersOn", PyvtkDelimitedTextReader_MergeConsecutiveDelimitersOn, METH_VARARGS,
   "V.MergeConsecutiveDelimitersOn()\nC++: virtual void MergeConsecutiveDelimitersOn()\n\nSet/get whether to merge successive delimiters.  Use this if (for\nexample) your fields are separated by spaces but you don't know\nexactly how many.\n"},
  {"MergeConsecutiveDelimitersOff", PyvtkDelimitedTextReader_MergeConsecutiveDelimitersOff, METH_VARARGS,
   "V.MergeConsecutiveDelimitersOff()\nC++: virtual void MergeConsecutiveDelimitersOff()\n\nSet/get whether to merge successive delimiters.  Use this if (for\nexample) your fields are separated by spaces but you don't know\nexactly how many.\n"},
  {"GetMaxRecords", PyvtkDelimitedTextReader_GetMaxRecords, METH_VARARGS,
   "V.GetMaxRecords() -> int\nC++: virtual vtkIdType GetMaxRecords()\n\nSpecifies the maximum number of records to read from the file. \nLimiting the number of records to read is useful for previewing\nthe contents of a file.\n"},
  {"SetMaxRecords", PyvtkDelimitedTextReader_SetMaxRecords, METH_VARARGS,
   "V.SetMaxRecords(int)\nC++: virtual void SetMaxRecords(vtkIdType _arg)\n\nSpecifies the maximum number of records to read from the file. \nLimiting the number of records to read is useful for previewing\nthe contents of a file.\n"},
  {"SetDetectNumericColumns", PyvtkDelimitedTextReader_SetDetectNumericColumns, METH_VARARGS,
   "V.SetDetectNumericColumns(bool)\nC++: virtual void SetDetectNumericColumns(bool _arg)\n\nWhen set to true, the reader will detect numeric columns and\ncreate vtkDoubleArray or vtkIntArray for those instead of\nvtkStringArray. Default is off.\n"},
  {"GetDetectNumericColumns", PyvtkDelimitedTextReader_GetDetectNumericColumns, METH_VARARGS,
   "V.GetDetectNumericColumns() -> bool\nC++: virtual bool GetDetectNumericColumns()\n\nWhen set to true, the reader will detect numeric columns and\ncreate vtkDoubleArray or vtkIntArray for those instead of\nvtkStringArray. Default is off.\n"},
  {"DetectNumericColumnsOn", PyvtkDelimitedTextReader_DetectNumericColumnsOn, METH_VARARGS,
   "V.DetectNumericColumnsOn()\nC++: virtual void DetectNumericColumnsOn()\n\nWhen set to true, the reader will detect numeric columns and\ncreate vtkDoubleArray or vtkIntArray for those instead of\nvtkStringArray. Default is off.\n"},
  {"DetectNumericColumnsOff", PyvtkDelimitedTextReader_DetectNumericColumnsOff, METH_VARARGS,
   "V.DetectNumericColumnsOff()\nC++: virtual void DetectNumericColumnsOff()\n\nWhen set to true, the reader will detect numeric columns and\ncreate vtkDoubleArray or vtkIntArray for those instead of\nvtkStringArray. Default is off.\n"},
  {"SetForceDouble", PyvtkDelimitedTextReader_SetForceDouble, METH_VARARGS,
   "V.SetForceDouble(bool)\nC++: virtual void SetForceDouble(bool _arg)\n\nWhen set to true and DetectNumericColumns is also true, forces\nall numeric columns to vtkDoubleArray even if they contain only\ninteger values. Default is off.\n"},
  {"GetForceDouble", PyvtkDelimitedTextReader_GetForceDouble, METH_VARARGS,
   "V.GetForceDouble() -> bool\nC++: virtual bool GetForceDouble()\n\nWhen set to true and DetectNumericColumns is also true, forces\nall numeric columns to vtkDoubleArray even if they contain only\ninteger values. Default is off.\n"},
  {"ForceDoubleOn", PyvtkDelimitedTextReader_ForceDoubleOn, METH_VARARGS,
   "V.ForceDoubleOn()\nC++: virtual void ForceDoubleOn()\n\nWhen set to true and DetectNumericColumns is also true, forces\nall numeric columns to vtkDoubleArray even if they contain only\ninteger values. Default is off.\n"},
  {"ForceDoubleOff", PyvtkDelimitedTextReader_ForceDoubleOff, METH_VARARGS,
   "V.ForceDoubleOff()\nC++: virtual void ForceDoubleOff()\n\nWhen set to true and DetectNumericColumns is also true, forces\nall numeric columns to vtkDoubleArray even if they contain only\ninteger values. Default is off.\n"},
  {"SetTrimWhitespacePriorToNumericConversion", PyvtkDelimitedTextReader_SetTrimWhitespacePriorToNumericConversion, METH_VARARGS,
   "V.SetTrimWhitespacePriorToNumericConversion(bool)\nC++: virtual void SetTrimWhitespacePriorToNumericConversion(\n    bool _arg)\n\nWhen DetectNumericColumns is set to true, whether to trim\nwhitespace from strings prior to conversion to a numeric. Default\nis false to preserve backward compatibility.\n\n* vtkVariant handles whitespace inconsistently, so trim it before\nwe try to\n* convert it.  For example:\n\n* vtkVariant(\"  2.0\").ToDouble() == 2.0 <-- leading whitespace is\nnot a problem\n* vtkVariant(\"  2.0  \").ToDouble() == NaN <-- trailing whitespace\nis a problem\n* vtkVariant(\"  infinity  \").ToDouble() == NaN <-- any whitespace\nis a problem\n\n* In these cases, trimming the whitespace gives us the result we\n  expect:\n* 2.0 and INF respectively.\n"},
  {"GetTrimWhitespacePriorToNumericConversion", PyvtkDelimitedTextReader_GetTrimWhitespacePriorToNumericConversion, METH_VARARGS,
   "V.GetTrimWhitespacePriorToNumericConversion() -> bool\nC++: virtual bool GetTrimWhitespacePriorToNumericConversion()\n\nWhen DetectNumericColumns is set to true, whether to trim\nwhitespace from strings prior to conversion to a numeric. Default\nis false to preserve backward compatibility.\n\n* vtkVariant handles whitespace inconsistently, so trim it before\nwe try to\n* convert it.  For example:\n\n* vtkVariant(\"  2.0\").ToDouble() == 2.0 <-- leading whitespace is\nnot a problem\n* vtkVariant(\"  2.0  \").ToDouble() == NaN <-- trailing whitespace\nis a problem\n* vtkVariant(\"  infinity  \").ToDouble() == NaN <-- any whitespace\nis a problem\n\n* In these cases, trimming the whitespace gives us the result we\n  expect:\n* 2.0 and INF respectively.\n"},
  {"TrimWhitespacePriorToNumericConversionOn", PyvtkDelimitedTextReader_TrimWhitespacePriorToNumericConversionOn, METH_VARARGS,
   "V.TrimWhitespacePriorToNumericConversionOn()\nC++: virtual void TrimWhitespacePriorToNumericConversionOn()\n\nWhen DetectNumericColumns is set to true, whether to trim\nwhitespace from strings prior to conversion to a numeric. Default\nis false to preserve backward compatibility.\n\n* vtkVariant handles whitespace inconsistently, so trim it before\nwe try to\n* convert it.  For example:\n\n* vtkVariant(\"  2.0\").ToDouble() == 2.0 <-- leading whitespace is\nnot a problem\n* vtkVariant(\"  2.0  \").ToDouble() == NaN <-- trailing whitespace\nis a problem\n* vtkVariant(\"  infinity  \").ToDouble() == NaN <-- any whitespace\nis a problem\n\n* In these cases, trimming the whitespace gives us the result we\n  expect:\n* 2.0 and INF respectively.\n"},
  {"TrimWhitespacePriorToNumericConversionOff", PyvtkDelimitedTextReader_TrimWhitespacePriorToNumericConversionOff, METH_VARARGS,
   "V.TrimWhitespacePriorToNumericConversionOff()\nC++: virtual void TrimWhitespacePriorToNumericConversionOff()\n\nWhen DetectNumericColumns is set to true, whether to trim\nwhitespace from strings prior to conversion to a numeric. Default\nis false to preserve backward compatibility.\n\n* vtkVariant handles whitespace inconsistently, so trim it before\nwe try to\n* convert it.  For example:\n\n* vtkVariant(\"  2.0\").ToDouble() == 2.0 <-- leading whitespace is\nnot a problem\n* vtkVariant(\"  2.0  \").ToDouble() == NaN <-- trailing whitespace\nis a problem\n* vtkVariant(\"  infinity  \").ToDouble() == NaN <-- any whitespace\nis a problem\n\n* In these cases, trimming the whitespace gives us the result we\n  expect:\n* 2.0 and INF respectively.\n"},
  {"SetDefaultIntegerValue", PyvtkDelimitedTextReader_SetDefaultIntegerValue, METH_VARARGS,
   "V.SetDefaultIntegerValue(int)\nC++: virtual void SetDefaultIntegerValue(int _arg)\n\nWhen DetectNumericColumns is set to true, the reader use this\nvalue to populate the vtkIntArray where empty strings are found.\nDefault is 0.\n"},
  {"GetDefaultIntegerValue", PyvtkDelimitedTextReader_GetDefaultIntegerValue, METH_VARARGS,
   "V.GetDefaultIntegerValue() -> int\nC++: virtual int GetDefaultIntegerValue()\n\nWhen DetectNumericColumns is set to true, the reader use this\nvalue to populate the vtkIntArray where empty strings are found.\nDefault is 0.\n"},
  {"SetDefaultDoubleValue", PyvtkDelimitedTextReader_SetDefaultDoubleValue, METH_VARARGS,
   "V.SetDefaultDoubleValue(float)\nC++: virtual void SetDefaultDoubleValue(double _arg)\n\nWhen DetectNumericColumns is set to true, the reader use this\nvalue to populate the vtkDoubleArray where empty strings are\nfound. Default is 0.0\n"},
  {"GetDefaultDoubleValue", PyvtkDelimitedTextReader_GetDefaultDoubleValue, METH_VARARGS,
   "V.GetDefaultDoubleValue() -> float\nC++: virtual double GetDefaultDoubleValue()\n\nWhen DetectNumericColumns is set to true, the reader use this\nvalue to populate the vtkDoubleArray where empty strings are\nfound. Default is 0.0\n"},
  {"SetPedigreeIdArrayName", PyvtkDelimitedTextReader_SetPedigreeIdArrayName, METH_VARARGS,
   "V.SetPedigreeIdArrayName(string)\nC++: virtual void SetPedigreeIdArrayName(const char *_arg)\n\nThe name of the array for generating or assigning pedigree ids\n(default \"id\").\n"},
  {"GetPedigreeIdArrayName", PyvtkDelimitedTextReader_GetPedigreeIdArrayName, METH_VARARGS,
   "V.GetPedigreeIdArrayName() -> string\nC++: virtual char *GetPedigreeIdArrayName()\n\nThe name of the array for generating or assigning pedigree ids\n(default \"id\").\n"},
  {"SetGeneratePedigreeIds", PyvtkDelimitedTextReader_SetGeneratePedigreeIds, METH_VARARGS,
   "V.SetGeneratePedigreeIds(bool)\nC++: virtual void SetGeneratePedigreeIds(bool _arg)\n\nIf on (default), generates pedigree ids automatically. If off,\nassign one of the arrays to be the pedigree id.\n"},
  {"GetGeneratePedigreeIds", PyvtkDelimitedTextReader_GetGeneratePedigreeIds, METH_VARARGS,
   "V.GetGeneratePedigreeIds() -> bool\nC++: virtual bool GetGeneratePedigreeIds()\n\nIf on (default), generates pedigree ids automatically. If off,\nassign one of the arrays to be the pedigree id.\n"},
  {"GeneratePedigreeIdsOn", PyvtkDelimitedTextReader_GeneratePedigreeIdsOn, METH_VARARGS,
   "V.GeneratePedigreeIdsOn()\nC++: virtual void GeneratePedigreeIdsOn()\n\nIf on (default), generates pedigree ids automatically. If off,\nassign one of the arrays to be the pedigree id.\n"},
  {"GeneratePedigreeIdsOff", PyvtkDelimitedTextReader_GeneratePedigreeIdsOff, METH_VARARGS,
   "V.GeneratePedigreeIdsOff()\nC++: virtual void GeneratePedigreeIdsOff()\n\nIf on (default), generates pedigree ids automatically. If off,\nassign one of the arrays to be the pedigree id.\n"},
  {"SetOutputPedigreeIds", PyvtkDelimitedTextReader_SetOutputPedigreeIds, METH_VARARGS,
   "V.SetOutputPedigreeIds(bool)\nC++: virtual void SetOutputPedigreeIds(bool _arg)\n\nIf on, assigns pedigree ids to output. Defaults to off.\n"},
  {"GetOutputPedigreeIds", PyvtkDelimitedTextReader_GetOutputPedigreeIds, METH_VARARGS,
   "V.GetOutputPedigreeIds() -> bool\nC++: virtual bool GetOutputPedigreeIds()\n\nIf on, assigns pedigree ids to output. Defaults to off.\n"},
  {"OutputPedigreeIdsOn", PyvtkDelimitedTextReader_OutputPedigreeIdsOn, METH_VARARGS,
   "V.OutputPedigreeIdsOn()\nC++: virtual void OutputPedigreeIdsOn()\n\nIf on, assigns pedigree ids to output. Defaults to off.\n"},
  {"OutputPedigreeIdsOff", PyvtkDelimitedTextReader_OutputPedigreeIdsOff, METH_VARARGS,
   "V.OutputPedigreeIdsOff()\nC++: virtual void OutputPedigreeIdsOff()\n\nIf on, assigns pedigree ids to output. Defaults to off.\n"},
  {"SetAddTabFieldDelimiter", PyvtkDelimitedTextReader_SetAddTabFieldDelimiter, METH_VARARGS,
   "V.SetAddTabFieldDelimiter(bool)\nC++: virtual void SetAddTabFieldDelimiter(bool _arg)\n\nIf on, also add in the tab (i.e. '\\t') character as a field\ndelimiter. We add this specially since applications may have a\nmore difficult time doing this. Defaults to off.\n"},
  {"GetAddTabFieldDelimiter", PyvtkDelimitedTextReader_GetAddTabFieldDelimiter, METH_VARARGS,
   "V.GetAddTabFieldDelimiter() -> bool\nC++: virtual bool GetAddTabFieldDelimiter()\n\nIf on, also add in the tab (i.e. '\\t') character as a field\ndelimiter. We add this specially since applications may have a\nmore difficult time doing this. Defaults to off.\n"},
  {"AddTabFieldDelimiterOn", PyvtkDelimitedTextReader_AddTabFieldDelimiterOn, METH_VARARGS,
   "V.AddTabFieldDelimiterOn()\nC++: virtual void AddTabFieldDelimiterOn()\n\nIf on, also add in the tab (i.e. '\\t') character as a field\ndelimiter. We add this specially since applications may have a\nmore difficult time doing this. Defaults to off.\n"},
  {"AddTabFieldDelimiterOff", PyvtkDelimitedTextReader_AddTabFieldDelimiterOff, METH_VARARGS,
   "V.AddTabFieldDelimiterOff()\nC++: virtual void AddTabFieldDelimiterOff()\n\nIf on, also add in the tab (i.e. '\\t') character as a field\ndelimiter. We add this specially since applications may have a\nmore difficult time doing this. Defaults to off.\n"},
  {"GetLastError", PyvtkDelimitedTextReader_GetLastError, METH_VARARGS,
   "V.GetLastError() -> string\nC++: vtkStdString GetLastError()\n\nReturns a human-readable description of the most recent error, if\nany. Otherwise, returns an empty string.  Note that the result is\nonly valid after calling Update().\n"},
  {"SetReplacementCharacter", PyvtkDelimitedTextReader_SetReplacementCharacter, METH_VARARGS,
   "V.SetReplacementCharacter(int)\nC++: virtual void SetReplacementCharacter(vtkTypeUInt32 _arg)\n\nFallback character for use in the US-ASCII-WITH-FALLBACK\ncharacter set.  Any characters that have their 8th bit set will\nbe replaced with this code point.  Defaults to 'x'.\n"},
  {"GetReplacementCharacter", PyvtkDelimitedTextReader_GetReplacementCharacter, METH_VARARGS,
   "V.GetReplacementCharacter() -> int\nC++: virtual vtkTypeUInt32 GetReplacementCharacter()\n\nFallback character for use in the US-ASCII-WITH-FALLBACK\ncharacter set.  Any characters that have their 8th bit set will\nbe replaced with this code point.  Defaults to 'x'.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDelimitedTextReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOInfovisPython.vtkDelimitedTextReader", // tp_name
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
  PyvtkDelimitedTextReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDelimitedTextReader_StaticNew()
{
  return vtkDelimitedTextReader::New();
}

PyObject *PyvtkDelimitedTextReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDelimitedTextReader_Type, PyvtkDelimitedTextReader_Methods,
    "vtkDelimitedTextReader",
 &PyvtkDelimitedTextReader_StaticNew);

  PyTypeObject *pytype = &PyvtkDelimitedTextReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkTableAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDelimitedTextReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDelimitedTextReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDelimitedTextReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

