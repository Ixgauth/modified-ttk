// python wrapper for vtkXMLDataParser
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
#include "vtkXMLDataParser.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkXMLDataParser(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkXMLDataParser_ClassNew(); }

#ifndef DECLARED_PyvtkXMLParser_ClassNew
extern "C" { PyObject *PyvtkXMLParser_ClassNew(); }
#define DECLARED_PyvtkXMLParser_ClassNew
#endif

static const char *PyvtkXMLDataParser_Doc =
  "vtkXMLDataParser - Used by vtkXMLReader to parse VTK XML files.\n\n"
  "Superclass: vtkXMLParser\n\n"
  "vtkXMLDataParser provides a subclass of vtkXMLParser that constructs\n"
  "a representation of an XML data format's file using vtkXMLDataElement\n"
  "to represent each XML element.  This representation is then used by\n"
  "vtkXMLReader and its subclasses to traverse the structure of the file\n"
  "and extract data.\n\n"
  "@sa\n"
  "vtkXMLDataElement\n\n";


static PyObject *
PyvtkXMLDataParser_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkXMLDataParser::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataParser_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataParser *op = static_cast<vtkXMLDataParser *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLDataParser::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataParser_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkXMLDataParser *tempr = vtkXMLDataParser::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataParser_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataParser *op = static_cast<vtkXMLDataParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXMLDataParser *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLDataParser::NewInstance());

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
PyvtkXMLDataParser_GetRootElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRootElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataParser *op = static_cast<vtkXMLDataParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXMLDataElement *tempr = (ap.IsBound() ?
      op->GetRootElement() :
      op->vtkXMLDataParser::GetRootElement());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataParser_ReadInlineData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadInlineData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataParser *op = static_cast<vtkXMLDataParser *>(vp);

  vtkXMLDataElement *temp0 = nullptr;
  int temp1;
  void  *temp2 = nullptr;
  Py_buffer pbuf2 = VTK_PYBUFFER_INITIALIZER;
  unsigned long long temp3;
  size_t temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetVTKObject(temp0, "vtkXMLDataElement") &&
      ap.GetValue(temp1) &&
      ap.GetBuffer(temp2, &pbuf2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    size_t tempr = (ap.IsBound() ?
      op->ReadInlineData(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkXMLDataParser::ReadInlineData(temp0, temp1, temp2, temp3, temp4, temp5));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf2.obj != 0)
  {
    PyBuffer_Release(&pbuf2);
  }
#endif
  return result;
}

static PyObject *
PyvtkXMLDataParser_ReadInlineData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadInlineData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataParser *op = static_cast<vtkXMLDataParser *>(vp);

  vtkXMLDataElement *temp0 = nullptr;
  int temp1;
  size_t size2 = ap.GetStringSize(2);
  vtkPythonArgs::Array<char> store2(2*size2 + 1);
  char *temp2 = store2.Data();
  char *save2 = temp2 + size2 + 1;
  unsigned long long temp3;
  size_t temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkXMLDataElement") &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    ap.Save(temp2, save2, size2);

    size_t tempr = (ap.IsBound() ?
      op->ReadInlineData(temp0, temp1, temp2, temp3, temp4) :
      op->vtkXMLDataParser::ReadInlineData(temp0, temp1, temp2, temp3, temp4));

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkXMLDataParser_ReadInlineData(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkXMLDataParser_ReadInlineData_s1(self, args);
    case 5:
      return PyvtkXMLDataParser_ReadInlineData_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ReadInlineData");
  return nullptr;
}



static PyObject *
PyvtkXMLDataParser_ReadAppendedData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAppendedData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataParser *op = static_cast<vtkXMLDataParser *>(vp);

  long long temp0;
  void  *temp1 = nullptr;
  Py_buffer pbuf1 = VTK_PYBUFFER_INITIALIZER;
  unsigned long long temp2;
  size_t temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetBuffer(temp1, &pbuf1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    size_t tempr = (ap.IsBound() ?
      op->ReadAppendedData(temp0, temp1, temp2, temp3, temp4) :
      op->vtkXMLDataParser::ReadAppendedData(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf1.obj != 0)
  {
    PyBuffer_Release(&pbuf1);
  }
#endif
  return result;
}

static PyObject *
PyvtkXMLDataParser_ReadAppendedData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAppendedData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataParser *op = static_cast<vtkXMLDataParser *>(vp);

  long long temp0;
  size_t size1 = ap.GetStringSize(1);
  vtkPythonArgs::Array<char> store1(2*size1 + 1);
  char *temp1 = store1.Data();
  char *save1 = temp1 + size1 + 1;
  unsigned long long temp2;
  size_t temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp1, save1, size1);

    size_t tempr = (ap.IsBound() ?
      op->ReadAppendedData(temp0, temp1, temp2, temp3) :
      op->vtkXMLDataParser::ReadAppendedData(temp0, temp1, temp2, temp3));

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

static PyObject *
PyvtkXMLDataParser_ReadAppendedData(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 5:
      return PyvtkXMLDataParser_ReadAppendedData_s1(self, args);
    case 4:
      return PyvtkXMLDataParser_ReadAppendedData_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ReadAppendedData");
  return nullptr;
}



static PyObject *
PyvtkXMLDataParser_ReadAsciiData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAsciiData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataParser *op = static_cast<vtkXMLDataParser *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  unsigned long long temp1;
  size_t temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    size_t tempr = (ap.IsBound() ?
      op->ReadAsciiData(temp0, temp1, temp2, temp3) :
      op->vtkXMLDataParser::ReadAsciiData(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
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
PyvtkXMLDataParser_ReadBinaryData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadBinaryData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataParser *op = static_cast<vtkXMLDataParser *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  unsigned long long temp1;
  size_t temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    size_t tempr = (ap.IsBound() ?
      op->ReadBinaryData(temp0, temp1, temp2, temp3) :
      op->vtkXMLDataParser::ReadBinaryData(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
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
PyvtkXMLDataParser_SetCompressor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompressor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataParser *op = static_cast<vtkXMLDataParser *>(vp);

  vtkDataCompressor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataCompressor"))
  {
    if (ap.IsBound())
    {
      op->SetCompressor(temp0);
    }
    else
    {
      op->vtkXMLDataParser::SetCompressor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataParser_GetCompressor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompressor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataParser *op = static_cast<vtkXMLDataParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataCompressor *tempr = (ap.IsBound() ?
      op->GetCompressor() :
      op->vtkXMLDataParser::GetCompressor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataParser_GetWordTypeSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWordTypeSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataParser *op = static_cast<vtkXMLDataParser *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    size_t tempr = (ap.IsBound() ?
      op->GetWordTypeSize(temp0) :
      op->vtkXMLDataParser::GetWordTypeSize(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataParser_Parse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Parse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataParser *op = static_cast<vtkXMLDataParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->Parse() :
      op->vtkXMLDataParser::Parse());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataParser_GetAbort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataParser *op = static_cast<vtkXMLDataParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAbort() :
      op->vtkXMLDataParser::GetAbort());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataParser_SetAbort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAbort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataParser *op = static_cast<vtkXMLDataParser *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAbort(temp0);
    }
    else
    {
      op->vtkXMLDataParser::SetAbort(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataParser_GetProgress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProgress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataParser *op = static_cast<vtkXMLDataParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetProgress() :
      op->vtkXMLDataParser::GetProgress());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataParser_SetProgress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProgress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataParser *op = static_cast<vtkXMLDataParser *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProgress(temp0);
    }
    else
    {
      op->vtkXMLDataParser::SetProgress(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataParser_SetAttributesEncoding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributesEncoding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataParser *op = static_cast<vtkXMLDataParser *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAttributesEncoding(temp0);
    }
    else
    {
      op->vtkXMLDataParser::SetAttributesEncoding(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataParser_GetAttributesEncodingMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributesEncodingMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataParser *op = static_cast<vtkXMLDataParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAttributesEncodingMinValue() :
      op->vtkXMLDataParser::GetAttributesEncodingMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataParser_GetAttributesEncodingMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributesEncodingMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataParser *op = static_cast<vtkXMLDataParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAttributesEncodingMaxValue() :
      op->vtkXMLDataParser::GetAttributesEncodingMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataParser_GetAttributesEncoding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributesEncoding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataParser *op = static_cast<vtkXMLDataParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAttributesEncoding() :
      op->vtkXMLDataParser::GetAttributesEncoding());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataParser_CharacterDataHandler(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CharacterDataHandler");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataParser *op = static_cast<vtkXMLDataParser *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->CharacterDataHandler(temp0, temp1);
    }
    else
    {
      op->vtkXMLDataParser::CharacterDataHandler(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataParser_GetAppendedDataPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAppendedDataPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataParser *op = static_cast<vtkXMLDataParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetAppendedDataPosition() :
      op->vtkXMLDataParser::GetAppendedDataPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkXMLDataParser_Methods[] = {
  {"IsTypeOf", PyvtkXMLDataParser_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkXMLDataParser_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkXMLDataParser_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkXMLDataParser\nC++: static vtkXMLDataParser *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkXMLDataParser_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkXMLDataParser\nC++: vtkXMLDataParser *NewInstance()\n\n"},
  {"GetRootElement", PyvtkXMLDataParser_GetRootElement, METH_VARARGS,
   "V.GetRootElement() -> vtkXMLDataElement\nC++: vtkXMLDataElement *GetRootElement()\n\nGet the root element from the XML document.\n"},
  {"ReadInlineData", PyvtkXMLDataParser_ReadInlineData, METH_VARARGS,
   "V.ReadInlineData(vtkXMLDataElement, int, void, int, int, int)\n    -> int\nC++: size_t ReadInlineData(vtkXMLDataElement *element,\n    int isAscii, void *buffer, vtkTypeUInt64 startWord,\n    size_t numWords, int wordType)\nV.ReadInlineData(vtkXMLDataElement, int, string, int, int) -> int\nC++: size_t ReadInlineData(vtkXMLDataElement *element,\n    int isAscii, char *buffer, vtkTypeUInt64 startWord,\n    size_t numWords)\n\nRead inline data from inside the given element.  Returns the\nnumber of words read.\n"},
  {"ReadAppendedData", PyvtkXMLDataParser_ReadAppendedData, METH_VARARGS,
   "V.ReadAppendedData(int, void, int, int, int) -> int\nC++: size_t ReadAppendedData(vtkTypeInt64 offset, void *buffer,\n    vtkTypeUInt64 startWord, size_t numWords, int wordType)\nV.ReadAppendedData(int, string, int, int) -> int\nC++: size_t ReadAppendedData(vtkTypeInt64 offset, char *buffer,\n    vtkTypeUInt64 startWord, size_t numWords)\n\nRead from an appended data section starting at the given appended\ndata offset.  Returns the number of words read.\n"},
  {"ReadAsciiData", PyvtkXMLDataParser_ReadAsciiData, METH_VARARGS,
   "V.ReadAsciiData(void, int, int, int) -> int\nC++: size_t ReadAsciiData(void *buffer, vtkTypeUInt64 startWord,\n    size_t numWords, int wordType)\n\nRead from an ascii data section starting at the current position\nin the stream.  Returns the number of words read.\n"},
  {"ReadBinaryData", PyvtkXMLDataParser_ReadBinaryData, METH_VARARGS,
   "V.ReadBinaryData(void, int, int, int) -> int\nC++: size_t ReadBinaryData(void *buffer, vtkTypeUInt64 startWord,\n    size_t maxWords, int wordType)\n\nRead from a data section starting at the current position in the\nstream.  Returns the number of words read.\n"},
  {"SetCompressor", PyvtkXMLDataParser_SetCompressor, METH_VARARGS,
   "V.SetCompressor(vtkDataCompressor)\nC++: virtual void SetCompressor(vtkDataCompressor *)\n\nGet/Set the compressor used to decompress binary and appended\ndata after reading from the file.\n"},
  {"GetCompressor", PyvtkXMLDataParser_GetCompressor, METH_VARARGS,
   "V.GetCompressor() -> vtkDataCompressor\nC++: virtual vtkDataCompressor *GetCompressor()\n\nGet/Set the compressor used to decompress binary and appended\ndata after reading from the file.\n"},
  {"GetWordTypeSize", PyvtkXMLDataParser_GetWordTypeSize, METH_VARARGS,
   "V.GetWordTypeSize(int) -> int\nC++: size_t GetWordTypeSize(int wordType)\n\nGet the size of a word of the given type.\n"},
  {"Parse", PyvtkXMLDataParser_Parse, METH_VARARGS,
   "V.Parse() -> int\nC++: int Parse() override;\n\nParse the XML input and check that the file is safe to read.\nReturns 1 for okay, 0 for error.\n"},
  {"GetAbort", PyvtkXMLDataParser_GetAbort, METH_VARARGS,
   "V.GetAbort() -> int\nC++: virtual int GetAbort()\n\nGet/Set flag to abort reading of data.  This may be set by a\nprogress event observer.\n"},
  {"SetAbort", PyvtkXMLDataParser_SetAbort, METH_VARARGS,
   "V.SetAbort(int)\nC++: virtual void SetAbort(int _arg)\n\nGet/Set flag to abort reading of data.  This may be set by a\nprogress event observer.\n"},
  {"GetProgress", PyvtkXMLDataParser_GetProgress, METH_VARARGS,
   "V.GetProgress() -> float\nC++: virtual float GetProgress()\n\nGet/Set progress of reading data.  This may be checked by a\nprogress event observer.\n"},
  {"SetProgress", PyvtkXMLDataParser_SetProgress, METH_VARARGS,
   "V.SetProgress(float)\nC++: virtual void SetProgress(float _arg)\n\nGet/Set progress of reading data.  This may be checked by a\nprogress event observer.\n"},
  {"SetAttributesEncoding", PyvtkXMLDataParser_SetAttributesEncoding, METH_VARARGS,
   "V.SetAttributesEncoding(int)\nC++: virtual void SetAttributesEncoding(int _arg)\n\nGet/Set the character encoding that will be used to set the\nattributes's encoding type of each vtkXMLDataElement created by\nthis parser (i.e., the data element attributes will use that\nencoding internally). If set to VTK_ENCODING_NONE (default), the\nattribute encoding type will not be changed and will default to\nthe vtkXMLDataElement default encoding type (see\nvtkXMLDataElement::AttributeEncoding).\n"},
  {"GetAttributesEncodingMinValue", PyvtkXMLDataParser_GetAttributesEncodingMinValue, METH_VARARGS,
   "V.GetAttributesEncodingMinValue() -> int\nC++: virtual int GetAttributesEncodingMinValue()\n\nGet/Set the character encoding that will be used to set the\nattributes's encoding type of each vtkXMLDataElement created by\nthis parser (i.e., the data element attributes will use that\nencoding internally). If set to VTK_ENCODING_NONE (default), the\nattribute encoding type will not be changed and will default to\nthe vtkXMLDataElement default encoding type (see\nvtkXMLDataElement::AttributeEncoding).\n"},
  {"GetAttributesEncodingMaxValue", PyvtkXMLDataParser_GetAttributesEncodingMaxValue, METH_VARARGS,
   "V.GetAttributesEncodingMaxValue() -> int\nC++: virtual int GetAttributesEncodingMaxValue()\n\nGet/Set the character encoding that will be used to set the\nattributes's encoding type of each vtkXMLDataElement created by\nthis parser (i.e., the data element attributes will use that\nencoding internally). If set to VTK_ENCODING_NONE (default), the\nattribute encoding type will not be changed and will default to\nthe vtkXMLDataElement default encoding type (see\nvtkXMLDataElement::AttributeEncoding).\n"},
  {"GetAttributesEncoding", PyvtkXMLDataParser_GetAttributesEncoding, METH_VARARGS,
   "V.GetAttributesEncoding() -> int\nC++: virtual int GetAttributesEncoding()\n\nGet/Set the character encoding that will be used to set the\nattributes's encoding type of each vtkXMLDataElement created by\nthis parser (i.e., the data element attributes will use that\nencoding internally). If set to VTK_ENCODING_NONE (default), the\nattribute encoding type will not be changed and will default to\nthe vtkXMLDataElement default encoding type (see\nvtkXMLDataElement::AttributeEncoding).\n"},
  {"CharacterDataHandler", PyvtkXMLDataParser_CharacterDataHandler, METH_VARARGS,
   "V.CharacterDataHandler(string, int)\nC++: void CharacterDataHandler(const char *data, int length)\n    override;\n\nIf you need the text inside XMLElements, turn IgnoreCharacterData\noff. This method will then be called when the file is parsed, and\nthe text will be stored in each XMLDataElement. VTK XML Readers\nstore the information elsewhere, so the default is to ignore it.\n"},
  {"GetAppendedDataPosition", PyvtkXMLDataParser_GetAppendedDataPosition, METH_VARARGS,
   "V.GetAppendedDataPosition() -> int\nC++: vtkTypeInt64 GetAppendedDataPosition()\n\nReturns the byte index of where appended data starts (if the file\nis using appended data). Valid after the XML is parsed.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkXMLDataParser_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOXMLParserPython.vtkXMLDataParser", // tp_name
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
  PyvtkXMLDataParser_Doc, // tp_doc
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

static vtkObjectBase *PyvtkXMLDataParser_StaticNew()
{
  return vtkXMLDataParser::New();
}

PyObject *PyvtkXMLDataParser_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkXMLDataParser_Type, PyvtkXMLDataParser_Methods,
    "vtkXMLDataParser",
 &PyvtkXMLDataParser_StaticNew);

  PyTypeObject *pytype = &PyvtkXMLDataParser_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkXMLParser_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "BigEndian", vtkXMLDataParser::BigEndian },
        { "LittleEndian", vtkXMLDataParser::LittleEndian },
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

void PyVTKAddFile_vtkXMLDataParser(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkXMLDataParser_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkXMLDataParser", o) != 0)
  {
    Py_DECREF(o);
  }

}

