// python wrapper for vtkCPInputDataDescription
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
#include "vtkCPInputDataDescription.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCPInputDataDescription(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCPInputDataDescription_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkCPInputDataDescription_Doc =
  "vtkCPInputDataDescription - @ingroup CoProcessing\n\n"
  "Superclass: vtkObject\n\n"
  "This class provides the data description for each input for the\n"
  "coprocessor pipelines.\n\n";


static PyObject *
PyvtkCPInputDataDescription_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCPInputDataDescription::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPInputDataDescription_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPInputDataDescription *op = static_cast<vtkCPInputDataDescription *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCPInputDataDescription::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPInputDataDescription_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCPInputDataDescription *tempr = vtkCPInputDataDescription::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPInputDataDescription_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPInputDataDescription *op = static_cast<vtkCPInputDataDescription *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCPInputDataDescription *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCPInputDataDescription::NewInstance());

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
PyvtkCPInputDataDescription_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPInputDataDescription *op = static_cast<vtkCPInputDataDescription *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Reset();
    }
    else
    {
      op->vtkCPInputDataDescription::Reset();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCPInputDataDescription_AddField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPInputDataDescription *op = static_cast<vtkCPInputDataDescription *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddField(temp0, temp1);
    }
    else
    {
      op->vtkCPInputDataDescription::AddField(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkCPInputDataDescription_AddPointField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPointField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPInputDataDescription *op = static_cast<vtkCPInputDataDescription *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddPointField(temp0);
    }
    else
    {
      op->vtkCPInputDataDescription::AddPointField(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkCPInputDataDescription_AddCellField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCellField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPInputDataDescription *op = static_cast<vtkCPInputDataDescription *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddCellField(temp0);
    }
    else
    {
      op->vtkCPInputDataDescription::AddCellField(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}
#endif


static PyObject *
PyvtkCPInputDataDescription_GetNumberOfFields(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFields");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPInputDataDescription *op = static_cast<vtkCPInputDataDescription *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfFields() :
      op->vtkCPInputDataDescription::GetNumberOfFields());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPInputDataDescription_GetFieldName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPInputDataDescription *op = static_cast<vtkCPInputDataDescription *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFieldName(temp0) :
      op->vtkCPInputDataDescription::GetFieldName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPInputDataDescription_GetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPInputDataDescription *op = static_cast<vtkCPInputDataDescription *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFieldType(temp0) :
      op->vtkCPInputDataDescription::GetFieldType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkCPInputDataDescription_IsFieldNeeded_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsFieldNeeded");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPInputDataDescription *op = static_cast<vtkCPInputDataDescription *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsFieldNeeded(temp0) :
      op->vtkCPInputDataDescription::IsFieldNeeded(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}
#endif

static PyObject *
PyvtkCPInputDataDescription_IsFieldNeeded_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsFieldNeeded");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPInputDataDescription *op = static_cast<vtkCPInputDataDescription *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->IsFieldNeeded(temp0, temp1) :
      op->vtkCPInputDataDescription::IsFieldNeeded(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCPInputDataDescription_IsFieldNeeded(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
#if !defined(VTK_LEGACY_REMOVE)
    case 1:
      return PyvtkCPInputDataDescription_IsFieldNeeded_s1(self, args);
#endif
    case 2:
      return PyvtkCPInputDataDescription_IsFieldNeeded_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "IsFieldNeeded");
  return nullptr;
}



#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkCPInputDataDescription_IsFieldPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsFieldPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPInputDataDescription *op = static_cast<vtkCPInputDataDescription *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsFieldPointData(temp0) :
      op->vtkCPInputDataDescription::IsFieldPointData(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}
#endif


static PyObject *
PyvtkCPInputDataDescription_SetAllFields(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllFields");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPInputDataDescription *op = static_cast<vtkCPInputDataDescription *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAllFields(temp0);
    }
    else
    {
      op->vtkCPInputDataDescription::SetAllFields(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCPInputDataDescription_GetAllFields(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllFields");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPInputDataDescription *op = static_cast<vtkCPInputDataDescription *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAllFields() :
      op->vtkCPInputDataDescription::GetAllFields());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPInputDataDescription_AllFieldsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllFieldsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPInputDataDescription *op = static_cast<vtkCPInputDataDescription *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllFieldsOn();
    }
    else
    {
      op->vtkCPInputDataDescription::AllFieldsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCPInputDataDescription_AllFieldsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllFieldsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPInputDataDescription *op = static_cast<vtkCPInputDataDescription *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllFieldsOff();
    }
    else
    {
      op->vtkCPInputDataDescription::AllFieldsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCPInputDataDescription_SetGenerateMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPInputDataDescription *op = static_cast<vtkCPInputDataDescription *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateMesh(temp0);
    }
    else
    {
      op->vtkCPInputDataDescription::SetGenerateMesh(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCPInputDataDescription_GetGenerateMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPInputDataDescription *op = static_cast<vtkCPInputDataDescription *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateMesh() :
      op->vtkCPInputDataDescription::GetGenerateMesh());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPInputDataDescription_GenerateMeshOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateMeshOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPInputDataDescription *op = static_cast<vtkCPInputDataDescription *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateMeshOn();
    }
    else
    {
      op->vtkCPInputDataDescription::GenerateMeshOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCPInputDataDescription_GenerateMeshOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateMeshOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPInputDataDescription *op = static_cast<vtkCPInputDataDescription *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateMeshOff();
    }
    else
    {
      op->vtkCPInputDataDescription::GenerateMeshOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCPInputDataDescription_SetGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPInputDataDescription *op = static_cast<vtkCPInputDataDescription *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetGrid(temp0);
    }
    else
    {
      op->vtkCPInputDataDescription::SetGrid(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCPInputDataDescription_GetGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPInputDataDescription *op = static_cast<vtkCPInputDataDescription *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetGrid() :
      op->vtkCPInputDataDescription::GetGrid());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPInputDataDescription_GetIfGridIsNecessary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIfGridIsNecessary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPInputDataDescription *op = static_cast<vtkCPInputDataDescription *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIfGridIsNecessary() :
      op->vtkCPInputDataDescription::GetIfGridIsNecessary());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPInputDataDescription_SetWholeExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPInputDataDescription *op = static_cast<vtkCPInputDataDescription *>(vp);

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
      op->vtkCPInputDataDescription::SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCPInputDataDescription_SetWholeExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPInputDataDescription *op = static_cast<vtkCPInputDataDescription *>(vp);

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
      op->vtkCPInputDataDescription::SetWholeExtent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCPInputDataDescription_SetWholeExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkCPInputDataDescription_SetWholeExtent_s1(self, args);
    case 1:
      return PyvtkCPInputDataDescription_SetWholeExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetWholeExtent");
  return nullptr;
}



static PyObject *
PyvtkCPInputDataDescription_GetWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPInputDataDescription *op = static_cast<vtkCPInputDataDescription *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetWholeExtent() :
      op->vtkCPInputDataDescription::GetWholeExtent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCPInputDataDescription_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPInputDataDescription *op = static_cast<vtkCPInputDataDescription *>(vp);

  vtkCPInputDataDescription *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCPInputDataDescription"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkCPInputDataDescription::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCPInputDataDescription_Methods[] = {
  {"IsTypeOf", PyvtkCPInputDataDescription_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCPInputDataDescription_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCPInputDataDescription_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCPInputDataDescription\nC++: static vtkCPInputDataDescription *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCPInputDataDescription_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCPInputDataDescription\nC++: vtkCPInputDataDescription *NewInstance()\n\n"},
  {"Reset", PyvtkCPInputDataDescription_Reset, METH_VARARGS,
   "V.Reset()\nC++: void Reset()\n\nReset the names of the fields that are needed.\n"},
  {"AddField", PyvtkCPInputDataDescription_AddField, METH_VARARGS,
   "V.AddField(string, int)\nC++: void AddField(const char *fieldName, int type)\n\nAdd in a name of an array with name *fieldName* of type *type*\nwhere the values comes from vtkDataObject::AttributeTypes.\n"},
#if !defined(VTK_LEGACY_REMOVE)
  {"AddPointField", PyvtkCPInputDataDescription_AddPointField, METH_VARARGS,
   "V.AddPointField(string)\nC++: void AddPointField(const char *fieldName)\n\nAdd in a name of a point field .@deprecated in ParaView 5.6. Use\n*AddField()* instead.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {"AddCellField", PyvtkCPInputDataDescription_AddCellField, METH_VARARGS,
   "V.AddCellField(string)\nC++: void AddCellField(const char *fieldName)\n\nAdd in a name of a cell field.@deprecated in ParaView 5.6. Use\n*AddField()* instead.\n"},
#endif
  {"GetNumberOfFields", PyvtkCPInputDataDescription_GetNumberOfFields, METH_VARARGS,
   "V.GetNumberOfFields() -> int\nC++: unsigned int GetNumberOfFields()\n\nGet the number of fields currently specified in this object.\n"},
  {"GetFieldName", PyvtkCPInputDataDescription_GetFieldName, METH_VARARGS,
   "V.GetFieldName(int) -> string\nC++: const char *GetFieldName(unsigned int fieldIndex)\n\nGet the name of the field given its current index.\n"},
  {"GetFieldType", PyvtkCPInputDataDescription_GetFieldType, METH_VARARGS,
   "V.GetFieldType(int) -> int\nC++: int GetFieldType(unsigned int fieldIndex)\n\nGet the type of field given its current index. The types are\ndefined in vtkDataObject::AttributeTypes. A return value of -1\nindicates an invalid fieldIndex.\n"},
  {"IsFieldNeeded", PyvtkCPInputDataDescription_IsFieldNeeded, METH_VARARGS,
   "V.IsFieldNeeded(string) -> bool\nC++: bool IsFieldNeeded(const char *fieldName)\nV.IsFieldNeeded(string, int) -> bool\nC++: bool IsFieldNeeded(const char *fieldName, int type)\n\nReturn true if a field with fieldName is needed.@deprecated in\nParaView 5.6. Use *bool IsFieldNeeded(const char* fieldName, int\ntype)* instead.\n"},
#if !defined(VTK_LEGACY_REMOVE)
  {"IsFieldPointData", PyvtkCPInputDataDescription_IsFieldPointData, METH_VARARGS,
   "V.IsFieldPointData(string) -> bool\nC++: bool IsFieldPointData(const char *fieldName)\n\nReturn true if the field associated with fieldName is point data\nand false if it is cell data.@deprecated in ParaView 5.6. Use\n*GetFieldType* instead.\n"},
#endif
  {"SetAllFields", PyvtkCPInputDataDescription_SetAllFields, METH_VARARGS,
   "V.SetAllFields(bool)\nC++: virtual void SetAllFields(bool _arg)\n\nWhen set to true, all fields are requested. Off by default. Note\nthat calling Reset() resets this flag to Off as well.\n"},
  {"GetAllFields", PyvtkCPInputDataDescription_GetAllFields, METH_VARARGS,
   "V.GetAllFields() -> bool\nC++: virtual bool GetAllFields()\n\nWhen set to true, all fields are requested. Off by default. Note\nthat calling Reset() resets this flag to Off as well.\n"},
  {"AllFieldsOn", PyvtkCPInputDataDescription_AllFieldsOn, METH_VARARGS,
   "V.AllFieldsOn()\nC++: virtual void AllFieldsOn()\n\nWhen set to true, all fields are requested. Off by default. Note\nthat calling Reset() resets this flag to Off as well.\n"},
  {"AllFieldsOff", PyvtkCPInputDataDescription_AllFieldsOff, METH_VARARGS,
   "V.AllFieldsOff()\nC++: virtual void AllFieldsOff()\n\nWhen set to true, all fields are requested. Off by default. Note\nthat calling Reset() resets this flag to Off as well.\n"},
  {"SetGenerateMesh", PyvtkCPInputDataDescription_SetGenerateMesh, METH_VARARGS,
   "V.SetGenerateMesh(bool)\nC++: virtual void SetGenerateMesh(bool _arg)\n\nUse this to enable the mesh. Off by default. Note that calling\nReset() resets this flag to Off as well.\n"},
  {"GetGenerateMesh", PyvtkCPInputDataDescription_GetGenerateMesh, METH_VARARGS,
   "V.GetGenerateMesh() -> bool\nC++: virtual bool GetGenerateMesh()\n\nUse this to enable the mesh. Off by default. Note that calling\nReset() resets this flag to Off as well.\n"},
  {"GenerateMeshOn", PyvtkCPInputDataDescription_GenerateMeshOn, METH_VARARGS,
   "V.GenerateMeshOn()\nC++: virtual void GenerateMeshOn()\n\nUse this to enable the mesh. Off by default. Note that calling\nReset() resets this flag to Off as well.\n"},
  {"GenerateMeshOff", PyvtkCPInputDataDescription_GenerateMeshOff, METH_VARARGS,
   "V.GenerateMeshOff()\nC++: virtual void GenerateMeshOff()\n\nUse this to enable the mesh. Off by default. Note that calling\nReset() resets this flag to Off as well.\n"},
  {"SetGrid", PyvtkCPInputDataDescription_SetGrid, METH_VARARGS,
   "V.SetGrid(vtkDataObject)\nC++: void SetGrid(vtkDataObject *grid)\n\nSet the grid input for coprocessing.  The grid should have all of\nthe point data and cell data properly set.\n"},
  {"GetGrid", PyvtkCPInputDataDescription_GetGrid, METH_VARARGS,
   "V.GetGrid() -> vtkDataObject\nC++: virtual vtkDataObject *GetGrid()\n\nGet the grid for coprocessing.\n"},
  {"GetIfGridIsNecessary", PyvtkCPInputDataDescription_GetIfGridIsNecessary, METH_VARARGS,
   "V.GetIfGridIsNecessary() -> bool\nC++: bool GetIfGridIsNecessary()\n\nReturns true if the grid is necessary..\n"},
  {"SetWholeExtent", PyvtkCPInputDataDescription_SetWholeExtent, METH_VARARGS,
   "V.SetWholeExtent(int, int, int, int, int, int)\nC++: void SetWholeExtent(int, int, int, int, int, int)\nV.SetWholeExtent((int, int, int, int, int, int))\nC++: void SetWholeExtent(int a[6])\n\n"},
  {"GetWholeExtent", PyvtkCPInputDataDescription_GetWholeExtent, METH_VARARGS,
   "V.GetWholeExtent() -> (int, int, int, int, int, int)\nC++: int *GetWholeExtent()\n\n"},
  {"ShallowCopy", PyvtkCPInputDataDescription_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkCPInputDataDescription)\nC++: void ShallowCopy(vtkCPInputDataDescription *)\n\nShallow copy.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCPInputDataDescription_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVCatalystPython.vtkCPInputDataDescription", // tp_name
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
  PyvtkCPInputDataDescription_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCPInputDataDescription_StaticNew()
{
  return vtkCPInputDataDescription::New();
}

PyObject *PyvtkCPInputDataDescription_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCPInputDataDescription_Type, PyvtkCPInputDataDescription_Methods,
    "vtkCPInputDataDescription",
 &PyvtkCPInputDataDescription_StaticNew);

  PyTypeObject *pytype = &PyvtkCPInputDataDescription_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCPInputDataDescription(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCPInputDataDescription_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCPInputDataDescription", o) != 0)
  {
    Py_DECREF(o);
  }

}

