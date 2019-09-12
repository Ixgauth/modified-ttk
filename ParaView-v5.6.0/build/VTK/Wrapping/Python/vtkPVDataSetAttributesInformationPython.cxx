// python wrapper for vtkPVDataSetAttributesInformation
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
#include "vtkPVDataSetAttributesInformation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVDataSetAttributesInformation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVDataSetAttributesInformation_ClassNew(); }

#ifndef DECLARED_PyvtkPVInformation_ClassNew
extern "C" { PyObject *PyvtkPVInformation_ClassNew(); }
#define DECLARED_PyvtkPVInformation_ClassNew
#endif

static const char *PyvtkPVDataSetAttributesInformation_Doc =
  "vtkPVDataSetAttributesInformation - List of array info\n\n"
  "Superclass: vtkPVInformation\n\n"
  "Information associated with vtkDataSetAttributes object (i.e point\n"
  "data). This object does not have any user interface.  It is created\n"
  "and destroyed on the fly as needed.  It may be possible to add\n"
  "features of this object to vtkDataSetAttributes.  That would\n"
  "eliminate all of the \"Information\" in ParaView.\n\n";


static PyObject *
PyvtkPVDataSetAttributesInformation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVDataSetAttributesInformation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataSetAttributesInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAttributesInformation *op = static_cast<vtkPVDataSetAttributesInformation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVDataSetAttributesInformation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataSetAttributesInformation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVDataSetAttributesInformation *tempr = vtkPVDataSetAttributesInformation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataSetAttributesInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAttributesInformation *op = static_cast<vtkPVDataSetAttributesInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVDataSetAttributesInformation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVDataSetAttributesInformation::NewInstance());

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
PyvtkPVDataSetAttributesInformation_GetFieldAssociation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldAssociation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAttributesInformation *op = static_cast<vtkPVDataSetAttributesInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFieldAssociation() :
      op->vtkPVDataSetAttributesInformation::GetFieldAssociation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataSetAttributesInformation_SetFieldAssociation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldAssociation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAttributesInformation *op = static_cast<vtkPVDataSetAttributesInformation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFieldAssociation(temp0);
    }
    else
    {
      op->vtkPVDataSetAttributesInformation::SetFieldAssociation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataSetAttributesInformation_CopyFromDataSetAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromDataSetAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAttributesInformation *op = static_cast<vtkPVDataSetAttributesInformation *>(vp);

  vtkDataSetAttributes *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSetAttributes"))
  {
    if (ap.IsBound())
    {
      op->CopyFromDataSetAttributes(temp0);
    }
    else
    {
      op->vtkPVDataSetAttributesInformation::CopyFromDataSetAttributes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataSetAttributesInformation_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAttributesInformation *op = static_cast<vtkPVDataSetAttributesInformation *>(vp);

  vtkPVDataSetAttributesInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVDataSetAttributesInformation"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkPVDataSetAttributesInformation::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataSetAttributesInformation_CopyFromFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAttributesInformation *op = static_cast<vtkPVDataSetAttributesInformation *>(vp);

  vtkFieldData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFieldData"))
  {
    if (ap.IsBound())
    {
      op->CopyFromFieldData(temp0);
    }
    else
    {
      op->vtkPVDataSetAttributesInformation::CopyFromFieldData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataSetAttributesInformation_CopyFromGenericAttributesOnPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromGenericAttributesOnPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAttributesInformation *op = static_cast<vtkPVDataSetAttributesInformation *>(vp);

  vtkGenericAttributeCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGenericAttributeCollection"))
  {
    if (ap.IsBound())
    {
      op->CopyFromGenericAttributesOnPoints(temp0);
    }
    else
    {
      op->vtkPVDataSetAttributesInformation::CopyFromGenericAttributesOnPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataSetAttributesInformation_CopyFromGenericAttributesOnCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromGenericAttributesOnCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAttributesInformation *op = static_cast<vtkPVDataSetAttributesInformation *>(vp);

  vtkGenericAttributeCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGenericAttributeCollection"))
  {
    if (ap.IsBound())
    {
      op->CopyFromGenericAttributesOnCells(temp0);
    }
    else
    {
      op->vtkPVDataSetAttributesInformation::CopyFromGenericAttributesOnCells(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataSetAttributesInformation_CopyFromGenericAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromGenericAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAttributesInformation *op = static_cast<vtkPVDataSetAttributesInformation *>(vp);

  vtkGenericAttributeCollection *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkGenericAttributeCollection") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->CopyFromGenericAttributes(temp0, temp1);
    }
    else
    {
      op->vtkPVDataSetAttributesInformation::CopyFromGenericAttributes(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataSetAttributesInformation_AddInformation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAttributesInformation *op = static_cast<vtkPVDataSetAttributesInformation *>(vp);

  vtkPVDataSetAttributesInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVDataSetAttributesInformation"))
  {
    if (ap.IsBound())
    {
      op->AddInformation(temp0);
    }
    else
    {
      op->vtkPVDataSetAttributesInformation::AddInformation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVDataSetAttributesInformation_AddInformation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAttributesInformation *op = static_cast<vtkPVDataSetAttributesInformation *>(vp);

  vtkPVInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVInformation"))
  {
    if (ap.IsBound())
    {
      op->AddInformation(temp0);
    }
    else
    {
      op->vtkPVDataSetAttributesInformation::AddInformation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVDataSetAttributesInformation_AddInformation_Methods[] = {
  {nullptr, PyvtkPVDataSetAttributesInformation_AddInformation_s1, METH_VARARGS,
   "@V *vtkPVDataSetAttributesInformation"},
  {nullptr, PyvtkPVDataSetAttributesInformation_AddInformation_s2, METH_VARARGS,
   "@V *vtkPVInformation"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPVDataSetAttributesInformation_AddInformation(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPVDataSetAttributesInformation_AddInformation_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddInformation");
  return nullptr;
}



static PyObject *
PyvtkPVDataSetAttributesInformation_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAttributesInformation *op = static_cast<vtkPVDataSetAttributesInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkPVDataSetAttributesInformation::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataSetAttributesInformation_GetNumberOfArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAttributesInformation *op = static_cast<vtkPVDataSetAttributesInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfArrays() :
      op->vtkPVDataSetAttributesInformation::GetNumberOfArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataSetAttributesInformation_GetMaximumNumberOfTuples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAttributesInformation *op = static_cast<vtkPVDataSetAttributesInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfTuples() :
      op->vtkPVDataSetAttributesInformation::GetMaximumNumberOfTuples());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataSetAttributesInformation_GetArrayInformation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAttributesInformation *op = static_cast<vtkPVDataSetAttributesInformation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPVArrayInformation *tempr = (ap.IsBound() ?
      op->GetArrayInformation(temp0) :
      op->vtkPVDataSetAttributesInformation::GetArrayInformation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPVDataSetAttributesInformation_GetArrayInformation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAttributesInformation *op = static_cast<vtkPVDataSetAttributesInformation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPVArrayInformation *tempr = (ap.IsBound() ?
      op->GetArrayInformation(temp0) :
      op->vtkPVDataSetAttributesInformation::GetArrayInformation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVDataSetAttributesInformation_GetArrayInformation_Methods[] = {
  {nullptr, PyvtkPVDataSetAttributesInformation_GetArrayInformation_s1, METH_VARARGS,
   "@i"},
  {nullptr, PyvtkPVDataSetAttributesInformation_GetArrayInformation_s2, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPVDataSetAttributesInformation_GetArrayInformation(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPVDataSetAttributesInformation_GetArrayInformation_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetArrayInformation");
  return nullptr;
}



static PyObject *
PyvtkPVDataSetAttributesInformation_GetAttributeInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAttributesInformation *op = static_cast<vtkPVDataSetAttributesInformation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPVArrayInformation *tempr = (ap.IsBound() ?
      op->GetAttributeInformation(temp0) :
      op->vtkPVDataSetAttributesInformation::GetAttributeInformation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataSetAttributesInformation_IsArrayAnAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsArrayAnAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAttributesInformation *op = static_cast<vtkPVDataSetAttributesInformation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsArrayAnAttribute(temp0) :
      op->vtkPVDataSetAttributesInformation::IsArrayAnAttribute(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVDataSetAttributesInformation_Methods[] = {
  {"IsTypeOf", PyvtkPVDataSetAttributesInformation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVDataSetAttributesInformation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVDataSetAttributesInformation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVDataSetAttributesInformation\nC++: static vtkPVDataSetAttributesInformation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVDataSetAttributesInformation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVDataSetAttributesInformation\nC++: vtkPVDataSetAttributesInformation *NewInstance()\n\n"},
  {"GetFieldAssociation", PyvtkPVDataSetAttributesInformation_GetFieldAssociation, METH_VARARGS,
   "V.GetFieldAssociation() -> int\nC++: virtual int GetFieldAssociation()\n\nReturns the field association to which the instance corresponds\nto. Returned value can be vtkDataObject::POINT,\nvtkDataObject::CELL, vtkDataObject::FIELD, etc i.e.\nvtkDataObject::FieldAssociations or\nvtkDataObject::AttributeTypes.\n"},
  {"SetFieldAssociation", PyvtkPVDataSetAttributesInformation_SetFieldAssociation, METH_VARARGS,
   "V.SetFieldAssociation(int)\nC++: virtual void SetFieldAssociation(int _arg)\n\nReturns the field association to which the instance corresponds\nto. Returned value can be vtkDataObject::POINT,\nvtkDataObject::CELL, vtkDataObject::FIELD, etc i.e.\nvtkDataObject::FieldAssociations or\nvtkDataObject::AttributeTypes.\n"},
  {"CopyFromDataSetAttributes", PyvtkPVDataSetAttributesInformation_CopyFromDataSetAttributes, METH_VARARGS,
   "V.CopyFromDataSetAttributes(vtkDataSetAttributes)\nC++: void CopyFromDataSetAttributes(vtkDataSetAttributes *data)\n\nTransfer information about a single vtk data object into this\nobject.\n"},
  {"DeepCopy", PyvtkPVDataSetAttributesInformation_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkPVDataSetAttributesInformation)\nC++: void DeepCopy(vtkPVDataSetAttributesInformation *info)\n\nTransfer information about a single vtk data object into this\nobject.\n"},
  {"CopyFromFieldData", PyvtkPVDataSetAttributesInformation_CopyFromFieldData, METH_VARARGS,
   "V.CopyFromFieldData(vtkFieldData)\nC++: void CopyFromFieldData(vtkFieldData *data)\n\n"},
  {"CopyFromGenericAttributesOnPoints", PyvtkPVDataSetAttributesInformation_CopyFromGenericAttributesOnPoints, METH_VARARGS,
   "V.CopyFromGenericAttributesOnPoints(vtkGenericAttributeCollection)\nC++: void CopyFromGenericAttributesOnPoints(\n    vtkGenericAttributeCollection *data)\n\n"},
  {"CopyFromGenericAttributesOnCells", PyvtkPVDataSetAttributesInformation_CopyFromGenericAttributesOnCells, METH_VARARGS,
   "V.CopyFromGenericAttributesOnCells(vtkGenericAttributeCollection)\nC++: void CopyFromGenericAttributesOnCells(\n    vtkGenericAttributeCollection *data)\n\n"},
  {"CopyFromGenericAttributes", PyvtkPVDataSetAttributesInformation_CopyFromGenericAttributes, METH_VARARGS,
   "V.CopyFromGenericAttributes(vtkGenericAttributeCollection, int)\nC++: void CopyFromGenericAttributes(\n    vtkGenericAttributeCollection *data, int centering)\n\n"},
  {"AddInformation", PyvtkPVDataSetAttributesInformation_AddInformation, METH_VARARGS,
   "V.AddInformation(vtkPVDataSetAttributesInformation)\nC++: void AddInformation(vtkPVDataSetAttributesInformation *info)\nV.AddInformation(vtkPVInformation)\nC++: void AddInformation(vtkPVInformation *info) override;\n\nIntersect information of argument with information currently in\nthis object.  Arrays must be in both (same name and number of\ncomponents)to be in final.\n"},
  {"Initialize", PyvtkPVDataSetAttributesInformation_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: void Initialize()\n\nRemove all infommation. next add will be like a copy.\n"},
  {"GetNumberOfArrays", PyvtkPVDataSetAttributesInformation_GetNumberOfArrays, METH_VARARGS,
   "V.GetNumberOfArrays() -> int\nC++: int GetNumberOfArrays()\n\nAccess to information.\n"},
  {"GetMaximumNumberOfTuples", PyvtkPVDataSetAttributesInformation_GetMaximumNumberOfTuples, METH_VARARGS,
   "V.GetMaximumNumberOfTuples() -> int\nC++: int GetMaximumNumberOfTuples()\n\n"},
  {"GetArrayInformation", PyvtkPVDataSetAttributesInformation_GetArrayInformation, METH_VARARGS,
   "V.GetArrayInformation(int) -> vtkPVArrayInformation\nC++: vtkPVArrayInformation *GetArrayInformation(int idx)\nV.GetArrayInformation(string) -> vtkPVArrayInformation\nC++: vtkPVArrayInformation *GetArrayInformation(const char *name)\n\n"},
  {"GetAttributeInformation", PyvtkPVDataSetAttributesInformation_GetAttributeInformation, METH_VARARGS,
   "V.GetAttributeInformation(int) -> vtkPVArrayInformation\nC++: vtkPVArrayInformation *GetAttributeInformation(\n    int attributeType)\n\nFor getting default scalars ... (vtkDataSetAttributes::SCALARS).\n"},
  {"IsArrayAnAttribute", PyvtkPVDataSetAttributesInformation_IsArrayAnAttribute, METH_VARARGS,
   "V.IsArrayAnAttribute(int) -> int\nC++: int IsArrayAnAttribute(int arrayIndex)\n\nMimics data set attribute call.  Returns -1 if array (of index)\nis not a standard attribute.  Returns attribute type otherwise.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVDataSetAttributesInformation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreCorePython.vtkPVDataSetAttributesInformation", // tp_name
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
  PyvtkPVDataSetAttributesInformation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVDataSetAttributesInformation_StaticNew()
{
  return vtkPVDataSetAttributesInformation::New();
}

PyObject *PyvtkPVDataSetAttributesInformation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVDataSetAttributesInformation_Type, PyvtkPVDataSetAttributesInformation_Methods,
    "vtkPVDataSetAttributesInformation",
 &PyvtkPVDataSetAttributesInformation_StaticNew);

  PyTypeObject *pytype = &PyvtkPVDataSetAttributesInformation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPVInformation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVDataSetAttributesInformation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVDataSetAttributesInformation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVDataSetAttributesInformation", o) != 0)
  {
    Py_DECREF(o);
  }

}

