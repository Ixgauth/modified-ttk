// python wrapper for vtkTecplotTableReader
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
#include "vtkTecplotTableReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTecplotTableReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTecplotTableReader_ClassNew(); }

#ifndef DECLARED_PyvtkTableAlgorithm_ClassNew
extern "C" { PyObject *PyvtkTableAlgorithm_ClassNew(); }
#define DECLARED_PyvtkTableAlgorithm_ClassNew
#endif

static const char *PyvtkTecplotTableReader_Doc =
  "vtkTecplotTableReader - reads in Tecplot tabular data and outputs a\nvtkTable data structure.\n\n"
  "Superclass: vtkTableAlgorithm\n\n"
  "vtkTecplotTableReader is an interface for reading tabulat data in\n"
  "Tecplot ascii format.\n\n"
  "@par Thanks: Thanks to vtkDelimitedTextReader authors.\n\n";


static PyObject *
PyvtkTecplotTableReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTecplotTableReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTecplotTableReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTecplotTableReader *op = static_cast<vtkTecplotTableReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTecplotTableReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTecplotTableReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTecplotTableReader *tempr = vtkTecplotTableReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTecplotTableReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTecplotTableReader *op = static_cast<vtkTecplotTableReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTecplotTableReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTecplotTableReader::NewInstance());

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
PyvtkTecplotTableReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTecplotTableReader *op = static_cast<vtkTecplotTableReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkTecplotTableReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTecplotTableReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTecplotTableReader *op = static_cast<vtkTecplotTableReader *>(vp);

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
      op->vtkTecplotTableReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTecplotTableReader_GetMaxRecords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxRecords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTecplotTableReader *op = static_cast<vtkTecplotTableReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetMaxRecords() :
      op->vtkTecplotTableReader::GetMaxRecords());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTecplotTableReader_SetMaxRecords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxRecords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTecplotTableReader *op = static_cast<vtkTecplotTableReader *>(vp);

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
      op->vtkTecplotTableReader::SetMaxRecords(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTecplotTableReader_GetHeaderLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeaderLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTecplotTableReader *op = static_cast<vtkTecplotTableReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetHeaderLines() :
      op->vtkTecplotTableReader::GetHeaderLines());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTecplotTableReader_SetHeaderLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeaderLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTecplotTableReader *op = static_cast<vtkTecplotTableReader *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHeaderLines(temp0);
    }
    else
    {
      op->vtkTecplotTableReader::SetHeaderLines(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTecplotTableReader_GetColumnNamesOnLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnNamesOnLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTecplotTableReader *op = static_cast<vtkTecplotTableReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetColumnNamesOnLine() :
      op->vtkTecplotTableReader::GetColumnNamesOnLine());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTecplotTableReader_SetColumnNamesOnLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColumnNamesOnLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTecplotTableReader *op = static_cast<vtkTecplotTableReader *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColumnNamesOnLine(temp0);
    }
    else
    {
      op->vtkTecplotTableReader::SetColumnNamesOnLine(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTecplotTableReader_GetSkipColumnNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSkipColumnNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTecplotTableReader *op = static_cast<vtkTecplotTableReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetSkipColumnNames() :
      op->vtkTecplotTableReader::GetSkipColumnNames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTecplotTableReader_SetSkipColumnNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSkipColumnNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTecplotTableReader *op = static_cast<vtkTecplotTableReader *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSkipColumnNames(temp0);
    }
    else
    {
      op->vtkTecplotTableReader::SetSkipColumnNames(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTecplotTableReader_SetPedigreeIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPedigreeIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTecplotTableReader *op = static_cast<vtkTecplotTableReader *>(vp);

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
      op->vtkTecplotTableReader::SetPedigreeIdArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTecplotTableReader_GetPedigreeIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPedigreeIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTecplotTableReader *op = static_cast<vtkTecplotTableReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetPedigreeIdArrayName() :
      op->vtkTecplotTableReader::GetPedigreeIdArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTecplotTableReader_SetGeneratePedigreeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeneratePedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTecplotTableReader *op = static_cast<vtkTecplotTableReader *>(vp);

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
      op->vtkTecplotTableReader::SetGeneratePedigreeIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTecplotTableReader_GetGeneratePedigreeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeneratePedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTecplotTableReader *op = static_cast<vtkTecplotTableReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGeneratePedigreeIds() :
      op->vtkTecplotTableReader::GetGeneratePedigreeIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTecplotTableReader_GeneratePedigreeIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePedigreeIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTecplotTableReader *op = static_cast<vtkTecplotTableReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GeneratePedigreeIdsOn();
    }
    else
    {
      op->vtkTecplotTableReader::GeneratePedigreeIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTecplotTableReader_GeneratePedigreeIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePedigreeIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTecplotTableReader *op = static_cast<vtkTecplotTableReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GeneratePedigreeIdsOff();
    }
    else
    {
      op->vtkTecplotTableReader::GeneratePedigreeIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTecplotTableReader_SetOutputPedigreeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTecplotTableReader *op = static_cast<vtkTecplotTableReader *>(vp);

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
      op->vtkTecplotTableReader::SetOutputPedigreeIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTecplotTableReader_GetOutputPedigreeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTecplotTableReader *op = static_cast<vtkTecplotTableReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetOutputPedigreeIds() :
      op->vtkTecplotTableReader::GetOutputPedigreeIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTecplotTableReader_OutputPedigreeIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutputPedigreeIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTecplotTableReader *op = static_cast<vtkTecplotTableReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutputPedigreeIdsOn();
    }
    else
    {
      op->vtkTecplotTableReader::OutputPedigreeIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTecplotTableReader_OutputPedigreeIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutputPedigreeIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTecplotTableReader *op = static_cast<vtkTecplotTableReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutputPedigreeIdsOff();
    }
    else
    {
      op->vtkTecplotTableReader::OutputPedigreeIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTecplotTableReader_GetLastError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTecplotTableReader *op = static_cast<vtkTecplotTableReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetLastError() :
      op->vtkTecplotTableReader::GetLastError());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTecplotTableReader_Methods[] = {
  {"IsTypeOf", PyvtkTecplotTableReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTecplotTableReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTecplotTableReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTecplotTableReader\nC++: static vtkTecplotTableReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTecplotTableReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTecplotTableReader\nC++: vtkTecplotTableReader *NewInstance()\n\n"},
  {"GetFileName", PyvtkTecplotTableReader_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nSpecifies the delimited text file to be loaded.\n"},
  {"SetFileName", PyvtkTecplotTableReader_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *_arg)\n\nSpecifies the delimited text file to be loaded.\n"},
  {"GetMaxRecords", PyvtkTecplotTableReader_GetMaxRecords, METH_VARARGS,
   "V.GetMaxRecords() -> int\nC++: virtual vtkIdType GetMaxRecords()\n\nSpecifies the maximum number of records to read from the file. \nLimiting the number of records to read is useful for previewing\nthe contents of a file.\n"},
  {"SetMaxRecords", PyvtkTecplotTableReader_SetMaxRecords, METH_VARARGS,
   "V.SetMaxRecords(int)\nC++: virtual void SetMaxRecords(vtkIdType _arg)\n\nSpecifies the maximum number of records to read from the file. \nLimiting the number of records to read is useful for previewing\nthe contents of a file.\n"},
  {"GetHeaderLines", PyvtkTecplotTableReader_GetHeaderLines, METH_VARARGS,
   "V.GetHeaderLines() -> int\nC++: virtual vtkIdType GetHeaderLines()\n\nSpecifies the number of lines that form the header of the file.\nDefault is 2.\n"},
  {"SetHeaderLines", PyvtkTecplotTableReader_SetHeaderLines, METH_VARARGS,
   "V.SetHeaderLines(int)\nC++: virtual void SetHeaderLines(vtkIdType _arg)\n\nSpecifies the number of lines that form the header of the file.\nDefault is 2.\n"},
  {"GetColumnNamesOnLine", PyvtkTecplotTableReader_GetColumnNamesOnLine, METH_VARARGS,
   "V.GetColumnNamesOnLine() -> int\nC++: virtual vtkIdType GetColumnNamesOnLine()\n\nSpecifies the line number that holds the column names. Default is\n1.\n"},
  {"SetColumnNamesOnLine", PyvtkTecplotTableReader_SetColumnNamesOnLine, METH_VARARGS,
   "V.SetColumnNamesOnLine(int)\nC++: virtual void SetColumnNamesOnLine(vtkIdType _arg)\n\nSpecifies the line number that holds the column names. Default is\n1.\n"},
  {"GetSkipColumnNames", PyvtkTecplotTableReader_GetSkipColumnNames, METH_VARARGS,
   "V.GetSkipColumnNames() -> int\nC++: virtual vtkIdType GetSkipColumnNames()\n\nSpecifies the number of fields to skip while reading the column\nnames. Default is 1.\n"},
  {"SetSkipColumnNames", PyvtkTecplotTableReader_SetSkipColumnNames, METH_VARARGS,
   "V.SetSkipColumnNames(int)\nC++: virtual void SetSkipColumnNames(vtkIdType _arg)\n\nSpecifies the number of fields to skip while reading the column\nnames. Default is 1.\n"},
  {"SetPedigreeIdArrayName", PyvtkTecplotTableReader_SetPedigreeIdArrayName, METH_VARARGS,
   "V.SetPedigreeIdArrayName(string)\nC++: virtual void SetPedigreeIdArrayName(const char *_arg)\n\nThe name of the array for generating or assigning pedigree ids\n(default \"id\").\n"},
  {"GetPedigreeIdArrayName", PyvtkTecplotTableReader_GetPedigreeIdArrayName, METH_VARARGS,
   "V.GetPedigreeIdArrayName() -> string\nC++: virtual char *GetPedigreeIdArrayName()\n\nThe name of the array for generating or assigning pedigree ids\n(default \"id\").\n"},
  {"SetGeneratePedigreeIds", PyvtkTecplotTableReader_SetGeneratePedigreeIds, METH_VARARGS,
   "V.SetGeneratePedigreeIds(bool)\nC++: virtual void SetGeneratePedigreeIds(bool _arg)\n\nIf on (default), generates pedigree ids automatically. If off,\nassign one of the arrays to be the pedigree id.\n"},
  {"GetGeneratePedigreeIds", PyvtkTecplotTableReader_GetGeneratePedigreeIds, METH_VARARGS,
   "V.GetGeneratePedigreeIds() -> bool\nC++: virtual bool GetGeneratePedigreeIds()\n\nIf on (default), generates pedigree ids automatically. If off,\nassign one of the arrays to be the pedigree id.\n"},
  {"GeneratePedigreeIdsOn", PyvtkTecplotTableReader_GeneratePedigreeIdsOn, METH_VARARGS,
   "V.GeneratePedigreeIdsOn()\nC++: virtual void GeneratePedigreeIdsOn()\n\nIf on (default), generates pedigree ids automatically. If off,\nassign one of the arrays to be the pedigree id.\n"},
  {"GeneratePedigreeIdsOff", PyvtkTecplotTableReader_GeneratePedigreeIdsOff, METH_VARARGS,
   "V.GeneratePedigreeIdsOff()\nC++: virtual void GeneratePedigreeIdsOff()\n\nIf on (default), generates pedigree ids automatically. If off,\nassign one of the arrays to be the pedigree id.\n"},
  {"SetOutputPedigreeIds", PyvtkTecplotTableReader_SetOutputPedigreeIds, METH_VARARGS,
   "V.SetOutputPedigreeIds(bool)\nC++: virtual void SetOutputPedigreeIds(bool _arg)\n\nIf on, assigns pedigree ids to output. Defaults to off.\n"},
  {"GetOutputPedigreeIds", PyvtkTecplotTableReader_GetOutputPedigreeIds, METH_VARARGS,
   "V.GetOutputPedigreeIds() -> bool\nC++: virtual bool GetOutputPedigreeIds()\n\nIf on, assigns pedigree ids to output. Defaults to off.\n"},
  {"OutputPedigreeIdsOn", PyvtkTecplotTableReader_OutputPedigreeIdsOn, METH_VARARGS,
   "V.OutputPedigreeIdsOn()\nC++: virtual void OutputPedigreeIdsOn()\n\nIf on, assigns pedigree ids to output. Defaults to off.\n"},
  {"OutputPedigreeIdsOff", PyvtkTecplotTableReader_OutputPedigreeIdsOff, METH_VARARGS,
   "V.OutputPedigreeIdsOff()\nC++: virtual void OutputPedigreeIdsOff()\n\nIf on, assigns pedigree ids to output. Defaults to off.\n"},
  {"GetLastError", PyvtkTecplotTableReader_GetLastError, METH_VARARGS,
   "V.GetLastError() -> string\nC++: vtkStdString GetLastError()\n\nReturns a human-readable description of the most recent error, if\nany. Otherwise, returns an empty string.  Note that the result is\nonly valid after calling Update().\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTecplotTableReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOTecplotTablePython.vtkTecplotTableReader", // tp_name
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
  PyvtkTecplotTableReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTecplotTableReader_StaticNew()
{
  return vtkTecplotTableReader::New();
}

PyObject *PyvtkTecplotTableReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTecplotTableReader_Type, PyvtkTecplotTableReader_Methods,
    "vtkTecplotTableReader",
 &PyvtkTecplotTableReader_StaticNew);

  PyTypeObject *pytype = &PyvtkTecplotTableReader_Type;

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

void PyVTKAddFile_vtkTecplotTableReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTecplotTableReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTecplotTableReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

