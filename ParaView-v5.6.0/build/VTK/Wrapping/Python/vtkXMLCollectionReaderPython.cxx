// python wrapper for vtkXMLCollectionReader
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
#include "vtkXMLCollectionReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkXMLCollectionReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkXMLCollectionReader_ClassNew(); }

#ifndef DECLARED_PyvtkXMLReader_ClassNew
extern "C" { PyObject *PyvtkXMLReader_ClassNew(); }
#define DECLARED_PyvtkXMLReader_ClassNew
#endif

static const char *PyvtkXMLCollectionReader_Doc =
  "vtkXMLCollectionReader - Read a file wrapping many other XML files.\n\n"
  "Superclass: vtkXMLReader\n\n"
  "vtkXMLCollectionReader will read a \"Collection\" VTKData XML file.\n"
  "This file format references an arbitrary number of other XML data\n"
  "sets.  Each referenced data set has a list of associated\n"
  "attribute/value pairs.  One may use the SetRestriction method to set\n"
  "requirements on attribute's values.  Only those data sets in the file\n"
  "matching the restrictions will be read.  Each matching data set\n"
  "becomes an output of this reader in the order in which they appear in\n"
  "the file.\n\n";


static PyObject *
PyvtkXMLCollectionReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkXMLCollectionReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLCollectionReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCollectionReader *op = static_cast<vtkXMLCollectionReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLCollectionReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLCollectionReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkXMLCollectionReader *tempr = vtkXMLCollectionReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLCollectionReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCollectionReader *op = static_cast<vtkXMLCollectionReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXMLCollectionReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLCollectionReader::NewInstance());

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
PyvtkXMLCollectionReader_SetRestriction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRestriction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCollectionReader *op = static_cast<vtkXMLCollectionReader *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetRestriction(temp0, temp1);
    }
    else
    {
      op->vtkXMLCollectionReader::SetRestriction(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLCollectionReader_GetRestriction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRestriction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCollectionReader *op = static_cast<vtkXMLCollectionReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetRestriction(temp0) :
      op->vtkXMLCollectionReader::GetRestriction(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLCollectionReader_SetRestrictionAsIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRestrictionAsIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCollectionReader *op = static_cast<vtkXMLCollectionReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetRestrictionAsIndex(temp0, temp1);
    }
    else
    {
      op->vtkXMLCollectionReader::SetRestrictionAsIndex(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLCollectionReader_GetRestrictionAsIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRestrictionAsIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCollectionReader *op = static_cast<vtkXMLCollectionReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRestrictionAsIndex(temp0) :
      op->vtkXMLCollectionReader::GetRestrictionAsIndex(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLCollectionReader_GetNumberOfAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCollectionReader *op = static_cast<vtkXMLCollectionReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfAttributes() :
      op->vtkXMLCollectionReader::GetNumberOfAttributes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLCollectionReader_GetAttributeName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCollectionReader *op = static_cast<vtkXMLCollectionReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetAttributeName(temp0) :
      op->vtkXMLCollectionReader::GetAttributeName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLCollectionReader_GetAttributeIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCollectionReader *op = static_cast<vtkXMLCollectionReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAttributeIndex(temp0) :
      op->vtkXMLCollectionReader::GetAttributeIndex(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLCollectionReader_GetNumberOfAttributeValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAttributeValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCollectionReader *op = static_cast<vtkXMLCollectionReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfAttributeValues(temp0) :
      op->vtkXMLCollectionReader::GetNumberOfAttributeValues(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLCollectionReader_GetAttributeValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCollectionReader *op = static_cast<vtkXMLCollectionReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetAttributeValue(temp0, temp1) :
      op->vtkXMLCollectionReader::GetAttributeValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkXMLCollectionReader_GetAttributeValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCollectionReader *op = static_cast<vtkXMLCollectionReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetAttributeValue(temp0, temp1) :
      op->vtkXMLCollectionReader::GetAttributeValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkXMLCollectionReader_GetAttributeValue_Methods[] = {
  {nullptr, PyvtkXMLCollectionReader_GetAttributeValue_s1, METH_VARARGS,
   "@ii"},
  {nullptr, PyvtkXMLCollectionReader_GetAttributeValue_s2, METH_VARARGS,
   "@zi"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkXMLCollectionReader_GetAttributeValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkXMLCollectionReader_GetAttributeValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetAttributeValue");
  return nullptr;
}



static PyObject *
PyvtkXMLCollectionReader_GetAttributeValueIndex_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeValueIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCollectionReader *op = static_cast<vtkXMLCollectionReader *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetAttributeValueIndex(temp0, temp1) :
      op->vtkXMLCollectionReader::GetAttributeValueIndex(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkXMLCollectionReader_GetAttributeValueIndex_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeValueIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCollectionReader *op = static_cast<vtkXMLCollectionReader *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetAttributeValueIndex(temp0, temp1) :
      op->vtkXMLCollectionReader::GetAttributeValueIndex(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkXMLCollectionReader_GetAttributeValueIndex_Methods[] = {
  {nullptr, PyvtkXMLCollectionReader_GetAttributeValueIndex_s1, METH_VARARGS,
   "@iz"},
  {nullptr, PyvtkXMLCollectionReader_GetAttributeValueIndex_s2, METH_VARARGS,
   "@zz"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkXMLCollectionReader_GetAttributeValueIndex(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkXMLCollectionReader_GetAttributeValueIndex_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetAttributeValueIndex");
  return nullptr;
}



static PyObject *
PyvtkXMLCollectionReader_GetOutputXMLDataElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputXMLDataElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCollectionReader *op = static_cast<vtkXMLCollectionReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkXMLDataElement *tempr = (ap.IsBound() ?
      op->GetOutputXMLDataElement(temp0) :
      op->vtkXMLCollectionReader::GetOutputXMLDataElement(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLCollectionReader_SetForceOutputTypeToMultiBlock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceOutputTypeToMultiBlock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCollectionReader *op = static_cast<vtkXMLCollectionReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetForceOutputTypeToMultiBlock(temp0);
    }
    else
    {
      op->vtkXMLCollectionReader::SetForceOutputTypeToMultiBlock(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLCollectionReader_GetForceOutputTypeToMultiBlock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceOutputTypeToMultiBlock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCollectionReader *op = static_cast<vtkXMLCollectionReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetForceOutputTypeToMultiBlock() :
      op->vtkXMLCollectionReader::GetForceOutputTypeToMultiBlock());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLCollectionReader_ForceOutputTypeToMultiBlockOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceOutputTypeToMultiBlockOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCollectionReader *op = static_cast<vtkXMLCollectionReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceOutputTypeToMultiBlockOn();
    }
    else
    {
      op->vtkXMLCollectionReader::ForceOutputTypeToMultiBlockOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLCollectionReader_ForceOutputTypeToMultiBlockOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceOutputTypeToMultiBlockOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCollectionReader *op = static_cast<vtkXMLCollectionReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceOutputTypeToMultiBlockOff();
    }
    else
    {
      op->vtkXMLCollectionReader::ForceOutputTypeToMultiBlockOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkXMLCollectionReader_Methods[] = {
  {"IsTypeOf", PyvtkXMLCollectionReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkXMLCollectionReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkXMLCollectionReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkXMLCollectionReader\nC++: static vtkXMLCollectionReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkXMLCollectionReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkXMLCollectionReader\nC++: vtkXMLCollectionReader *NewInstance()\n\n"},
  {"SetRestriction", PyvtkXMLCollectionReader_SetRestriction, METH_VARARGS,
   "V.SetRestriction(string, string)\nC++: virtual void SetRestriction(const char *name,\n    const char *value)\n\nGet/Set the required value for a particular named attribute. Only\ndata sets matching this value will be read.  A NULL value or\nempty string will disable any restriction from the given\nattribute.\n"},
  {"GetRestriction", PyvtkXMLCollectionReader_GetRestriction, METH_VARARGS,
   "V.GetRestriction(string) -> string\nC++: virtual const char *GetRestriction(const char *name)\n\nGet/Set the required value for a particular named attribute. Only\ndata sets matching this value will be read.  A NULL value or\nempty string will disable any restriction from the given\nattribute.\n"},
  {"SetRestrictionAsIndex", PyvtkXMLCollectionReader_SetRestrictionAsIndex, METH_VARARGS,
   "V.SetRestrictionAsIndex(string, int)\nC++: virtual void SetRestrictionAsIndex(const char *name,\n    int index)\n\nGet/set the required value for a particular named attribute.  The\nvalue should be referenced by its index.  Only data sets matching\nthis value will be read.  An out-of-range index will remove the\nrestriction. Make sure to call UpdateInformation() before using\nthese methods.\n"},
  {"GetRestrictionAsIndex", PyvtkXMLCollectionReader_GetRestrictionAsIndex, METH_VARARGS,
   "V.GetRestrictionAsIndex(string) -> int\nC++: virtual int GetRestrictionAsIndex(const char *name)\n\nGet/set the required value for a particular named attribute.  The\nvalue should be referenced by its index.  Only data sets matching\nthis value will be read.  An out-of-range index will remove the\nrestriction. Make sure to call UpdateInformation() before using\nthese methods.\n"},
  {"GetNumberOfAttributes", PyvtkXMLCollectionReader_GetNumberOfAttributes, METH_VARARGS,
   "V.GetNumberOfAttributes() -> int\nC++: int GetNumberOfAttributes()\n\nGet the number of distinct attribute values present in the file.\nValid after UpdateInformation.\n"},
  {"GetAttributeName", PyvtkXMLCollectionReader_GetAttributeName, METH_VARARGS,
   "V.GetAttributeName(int) -> string\nC++: const char *GetAttributeName(int attribute)\n\nGet the name of an attribute.  The order of attributes with\nrespect to the index is not specified, but will be the same every\ntime the same instance of the reader reads the same input file.\n"},
  {"GetAttributeIndex", PyvtkXMLCollectionReader_GetAttributeIndex, METH_VARARGS,
   "V.GetAttributeIndex(string) -> int\nC++: int GetAttributeIndex(const char *name)\n\nGet the index of the attribute with the given name.  Returns -1\nif no such attribute exists.\n"},
  {"GetNumberOfAttributeValues", PyvtkXMLCollectionReader_GetNumberOfAttributeValues, METH_VARARGS,
   "V.GetNumberOfAttributeValues(int) -> int\nC++: int GetNumberOfAttributeValues(int attribute)\n\nGet the number of distinct values for the given attribute.\n"},
  {"GetAttributeValue", PyvtkXMLCollectionReader_GetAttributeValue, METH_VARARGS,
   "V.GetAttributeValue(int, int) -> string\nC++: const char *GetAttributeValue(int attribute, int index)\nV.GetAttributeValue(string, int) -> string\nC++: const char *GetAttributeValue(const char *name, int index)\n\nGet one of the possible values for a given attribute.  The order\nof values for the attribute with respect to the index is not\nspecified, but will be the same every time the same instance of\nthe reader reads the same input file.\n"},
  {"GetAttributeValueIndex", PyvtkXMLCollectionReader_GetAttributeValueIndex, METH_VARARGS,
   "V.GetAttributeValueIndex(int, string) -> int\nC++: int GetAttributeValueIndex(int attribute, const char *value)\nV.GetAttributeValueIndex(string, string) -> int\nC++: int GetAttributeValueIndex(const char *name,\n    const char *value)\n\nGet the index of the attribute value with the given name. \nReturns -1 if no such attribute or value exists.\n"},
  {"GetOutputXMLDataElement", PyvtkXMLCollectionReader_GetOutputXMLDataElement, METH_VARARGS,
   "V.GetOutputXMLDataElement(int) -> vtkXMLDataElement\nC++: vtkXMLDataElement *GetOutputXMLDataElement(int index)\n\nGet the vtkXMLDataElement representing the collection element\ncorresponding to the output with the given index.  Valid when a\nFileName has been set.  May change when Restriction settings are\nchanged.\n"},
  {"SetForceOutputTypeToMultiBlock", PyvtkXMLCollectionReader_SetForceOutputTypeToMultiBlock, METH_VARARGS,
   "V.SetForceOutputTypeToMultiBlock(int)\nC++: virtual void SetForceOutputTypeToMultiBlock(int _arg)\n\nIf ForceOutputTypeToMultiBlock is set to 1, the output of this\nreader will always be a multi-block dataset, even if there is 1\nsimple output.\n"},
  {"GetForceOutputTypeToMultiBlock", PyvtkXMLCollectionReader_GetForceOutputTypeToMultiBlock, METH_VARARGS,
   "V.GetForceOutputTypeToMultiBlock() -> int\nC++: virtual int GetForceOutputTypeToMultiBlock()\n\nIf ForceOutputTypeToMultiBlock is set to 1, the output of this\nreader will always be a multi-block dataset, even if there is 1\nsimple output.\n"},
  {"ForceOutputTypeToMultiBlockOn", PyvtkXMLCollectionReader_ForceOutputTypeToMultiBlockOn, METH_VARARGS,
   "V.ForceOutputTypeToMultiBlockOn()\nC++: virtual void ForceOutputTypeToMultiBlockOn()\n\nIf ForceOutputTypeToMultiBlock is set to 1, the output of this\nreader will always be a multi-block dataset, even if there is 1\nsimple output.\n"},
  {"ForceOutputTypeToMultiBlockOff", PyvtkXMLCollectionReader_ForceOutputTypeToMultiBlockOff, METH_VARARGS,
   "V.ForceOutputTypeToMultiBlockOff()\nC++: virtual void ForceOutputTypeToMultiBlockOff()\n\nIf ForceOutputTypeToMultiBlock is set to 1, the output of this\nreader will always be a multi-block dataset, even if there is 1\nsimple output.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkXMLCollectionReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkXMLCollectionReader", // tp_name
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
  PyvtkXMLCollectionReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkXMLCollectionReader_StaticNew()
{
  return vtkXMLCollectionReader::New();
}

PyObject *PyvtkXMLCollectionReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkXMLCollectionReader_Type, PyvtkXMLCollectionReader_Methods,
    "vtkXMLCollectionReader",
 &PyvtkXMLCollectionReader_StaticNew);

  PyTypeObject *pytype = &PyvtkXMLCollectionReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkXMLReader_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkXMLCollectionReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkXMLCollectionReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkXMLCollectionReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

