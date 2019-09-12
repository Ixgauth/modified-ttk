// python wrapper for vtkGenericAttributeCollection
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
#include "vtkGenericAttributeCollection.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGenericAttributeCollection(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkGenericAttributeCollection_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkGenericAttributeCollection_Doc =
  "vtkGenericAttributeCollection - a collection of attributes\n\n"
  "Superclass: vtkObject\n\n"
  "vtkGenericAttributeCollection is a class that collects attributes\n"
  "(represented by vtkGenericAttribute).\n\n";


static PyObject *
PyvtkGenericAttributeCollection_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGenericAttributeCollection::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericAttributeCollection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttributeCollection *op = static_cast<vtkGenericAttributeCollection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGenericAttributeCollection::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericAttributeCollection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGenericAttributeCollection *tempr = vtkGenericAttributeCollection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericAttributeCollection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttributeCollection *op = static_cast<vtkGenericAttributeCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGenericAttributeCollection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGenericAttributeCollection::NewInstance());

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
PyvtkGenericAttributeCollection_GetNumberOfAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttributeCollection *op = static_cast<vtkGenericAttributeCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfAttributes() :
      op->vtkGenericAttributeCollection::GetNumberOfAttributes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericAttributeCollection_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttributeCollection *op = static_cast<vtkGenericAttributeCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponents() :
      op->vtkGenericAttributeCollection::GetNumberOfComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericAttributeCollection_GetNumberOfPointCenteredComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointCenteredComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttributeCollection *op = static_cast<vtkGenericAttributeCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointCenteredComponents() :
      op->vtkGenericAttributeCollection::GetNumberOfPointCenteredComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericAttributeCollection_GetMaxNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttributeCollection *op = static_cast<vtkGenericAttributeCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxNumberOfComponents() :
      op->vtkGenericAttributeCollection::GetMaxNumberOfComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericAttributeCollection_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttributeCollection *op = static_cast<vtkGenericAttributeCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetActualMemorySize() :
      op->vtkGenericAttributeCollection::GetActualMemorySize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericAttributeCollection_IsEmpty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsEmpty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttributeCollection *op = static_cast<vtkGenericAttributeCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsEmpty() :
      op->vtkGenericAttributeCollection::IsEmpty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericAttributeCollection_GetAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttributeCollection *op = static_cast<vtkGenericAttributeCollection *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkGenericAttribute *tempr = (ap.IsBound() ?
      op->GetAttribute(temp0) :
      op->vtkGenericAttributeCollection::GetAttribute(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericAttributeCollection_FindAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttributeCollection *op = static_cast<vtkGenericAttributeCollection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->FindAttribute(temp0) :
      op->vtkGenericAttributeCollection::FindAttribute(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericAttributeCollection_GetAttributeIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttributeCollection *op = static_cast<vtkGenericAttributeCollection *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAttributeIndex(temp0) :
      op->vtkGenericAttributeCollection::GetAttributeIndex(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericAttributeCollection_InsertNextAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttributeCollection *op = static_cast<vtkGenericAttributeCollection *>(vp);

  vtkGenericAttribute *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGenericAttribute"))
  {
    if (ap.IsBound())
    {
      op->InsertNextAttribute(temp0);
    }
    else
    {
      op->vtkGenericAttributeCollection::InsertNextAttribute(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericAttributeCollection_InsertAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttributeCollection *op = static_cast<vtkGenericAttributeCollection *>(vp);

  int temp0;
  vtkGenericAttribute *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkGenericAttribute"))
  {
    if (ap.IsBound())
    {
      op->InsertAttribute(temp0, temp1);
    }
    else
    {
      op->vtkGenericAttributeCollection::InsertAttribute(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericAttributeCollection_RemoveAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttributeCollection *op = static_cast<vtkGenericAttributeCollection *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveAttribute(temp0);
    }
    else
    {
      op->vtkGenericAttributeCollection::RemoveAttribute(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericAttributeCollection_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttributeCollection *op = static_cast<vtkGenericAttributeCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Reset();
    }
    else
    {
      op->vtkGenericAttributeCollection::Reset();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericAttributeCollection_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttributeCollection *op = static_cast<vtkGenericAttributeCollection *>(vp);

  vtkGenericAttributeCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGenericAttributeCollection"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkGenericAttributeCollection::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericAttributeCollection_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttributeCollection *op = static_cast<vtkGenericAttributeCollection *>(vp);

  vtkGenericAttributeCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGenericAttributeCollection"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkGenericAttributeCollection::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericAttributeCollection_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttributeCollection *op = static_cast<vtkGenericAttributeCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkGenericAttributeCollection::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericAttributeCollection_GetActiveAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttributeCollection *op = static_cast<vtkGenericAttributeCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetActiveAttribute() :
      op->vtkGenericAttributeCollection::GetActiveAttribute());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericAttributeCollection_GetActiveComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttributeCollection *op = static_cast<vtkGenericAttributeCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetActiveComponent() :
      op->vtkGenericAttributeCollection::GetActiveComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericAttributeCollection_SetActiveAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttributeCollection *op = static_cast<vtkGenericAttributeCollection *>(vp);

  int temp0;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->SetActiveAttribute(temp0, temp1);
    }
    else
    {
      op->vtkGenericAttributeCollection::SetActiveAttribute(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericAttributeCollection_GetNumberOfAttributesToInterpolate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAttributesToInterpolate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttributeCollection *op = static_cast<vtkGenericAttributeCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfAttributesToInterpolate() :
      op->vtkGenericAttributeCollection::GetNumberOfAttributesToInterpolate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericAttributeCollection_GetAttributesToInterpolate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributesToInterpolate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttributeCollection *op = static_cast<vtkGenericAttributeCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetAttributesToInterpolate() :
      op->vtkGenericAttributeCollection::GetAttributesToInterpolate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericAttributeCollection_HasAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttributeCollection *op = static_cast<vtkGenericAttributeCollection *>(vp);

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->HasAttribute(temp0, temp1, temp2) :
      op->vtkGenericAttributeCollection::HasAttribute(temp0, temp1, temp2));

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
PyvtkGenericAttributeCollection_SetAttributesToInterpolate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributesToInterpolate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttributeCollection *op = static_cast<vtkGenericAttributeCollection *>(vp);

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->SetAttributesToInterpolate(temp0, temp1);
    }
    else
    {
      op->vtkGenericAttributeCollection::SetAttributesToInterpolate(temp0, temp1);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericAttributeCollection_SetAttributesToInterpolateToAll(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributesToInterpolateToAll");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttributeCollection *op = static_cast<vtkGenericAttributeCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAttributesToInterpolateToAll();
    }
    else
    {
      op->vtkGenericAttributeCollection::SetAttributesToInterpolateToAll();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkGenericAttributeCollection_Methods[] = {
  {"IsTypeOf", PyvtkGenericAttributeCollection_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard type definition and print methods for a VTK class.\n"},
  {"IsA", PyvtkGenericAttributeCollection_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard type definition and print methods for a VTK class.\n"},
  {"SafeDownCast", PyvtkGenericAttributeCollection_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkGenericAttributeCollection\nC++: static vtkGenericAttributeCollection *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard type definition and print methods for a VTK class.\n"},
  {"NewInstance", PyvtkGenericAttributeCollection_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkGenericAttributeCollection\nC++: vtkGenericAttributeCollection *NewInstance()\n\nStandard type definition and print methods for a VTK class.\n"},
  {"GetNumberOfAttributes", PyvtkGenericAttributeCollection_GetNumberOfAttributes, METH_VARARGS,
   "V.GetNumberOfAttributes() -> int\nC++: int GetNumberOfAttributes()\n\nReturn the number of attributes (e.g., instances of\nvtkGenericAttribute) in the collection.\n\\post positive_result: result>=0\n"},
  {"GetNumberOfComponents", PyvtkGenericAttributeCollection_GetNumberOfComponents, METH_VARARGS,
   "V.GetNumberOfComponents() -> int\nC++: int GetNumberOfComponents()\n\nReturn the number of components. This is the sum of all\ncomponents found in all attributes.\n\\post positive_result: result>=0\n"},
  {"GetNumberOfPointCenteredComponents", PyvtkGenericAttributeCollection_GetNumberOfPointCenteredComponents, METH_VARARGS,
   "V.GetNumberOfPointCenteredComponents() -> int\nC++: int GetNumberOfPointCenteredComponents()\n\nReturn the number of components. This is the sum of all\ncomponents found in all point centered attributes.\n\\post positive_result: result>=0\n"},
  {"GetMaxNumberOfComponents", PyvtkGenericAttributeCollection_GetMaxNumberOfComponents, METH_VARARGS,
   "V.GetMaxNumberOfComponents() -> int\nC++: int GetMaxNumberOfComponents()\n\nMaximum number of components encountered among all attributes.\n\\post positive_result: result>=0\n\\post valid_result: result<=GetNumberOfComponents()\n"},
  {"GetActualMemorySize", PyvtkGenericAttributeCollection_GetActualMemorySize, METH_VARARGS,
   "V.GetActualMemorySize() -> int\nC++: unsigned long GetActualMemorySize()\n\nActual size of the data in kibibytes (1024 bytes); only valid\nafter the pipeline has updated. It is guaranteed to be greater\nthan or equal to the memory required to represent the data.\n"},
  {"IsEmpty", PyvtkGenericAttributeCollection_IsEmpty, METH_VARARGS,
   "V.IsEmpty() -> int\nC++: int IsEmpty()\n\nIndicate whether the collection contains any attributes.\n\\post definition: result==(GetNumberOfAttributes()==0)\n"},
  {"GetAttribute", PyvtkGenericAttributeCollection_GetAttribute, METH_VARARGS,
   "V.GetAttribute(int) -> vtkGenericAttribute\nC++: vtkGenericAttribute *GetAttribute(int i)\n\nReturn a pointer to the ith instance of vtkGenericAttribute.\n\\pre not_empty: !IsEmpty()\n\\pre valid_i: i>=0 && i<GetNumberOfAttributes()\n\\post result_exists: result!=0\n"},
  {"FindAttribute", PyvtkGenericAttributeCollection_FindAttribute, METH_VARARGS,
   "V.FindAttribute(string) -> int\nC++: int FindAttribute(const char *name)\n\nReturn the index of the attribute named `name'. Return the\nnon-negative index if found. Return -1 otherwise.\n\\pre name_exists: name!=0\n\\post valid_result: (result==-1) || (result>=0) &&\n    (result<=GetNumberOfAttributes())\n"},
  {"GetAttributeIndex", PyvtkGenericAttributeCollection_GetAttributeIndex, METH_VARARGS,
   "V.GetAttributeIndex(int) -> int\nC++: int GetAttributeIndex(int i)\n\nReturn the index of the first component of attribute `i' in an\narray of format attrib0comp0 attrib0comp1 ... attrib4comp0 ...\n\\pre valid_i: i>=0 && i<GetNumberOfAttributes()\n\\pre is_point_centered:\n    GetAttribute(i)->GetCentering()==vtkPointCentered\n"},
  {"InsertNextAttribute", PyvtkGenericAttributeCollection_InsertNextAttribute, METH_VARARGS,
   "V.InsertNextAttribute(vtkGenericAttribute)\nC++: void InsertNextAttribute(vtkGenericAttribute *a)\n\nAdd the attribute `a' to the end of the collection.\n\\pre a_exists: a!=0\n\\post more_items: GetNumberOfAttributes()==old\n    GetNumberOfAttributes()+1\n\\post a_is_set: GetAttribute(GetNumberOfAttributes()-1)==a\n"},
  {"InsertAttribute", PyvtkGenericAttributeCollection_InsertAttribute, METH_VARARGS,
   "V.InsertAttribute(int, vtkGenericAttribute)\nC++: void InsertAttribute(int i, vtkGenericAttribute *a)\n\nReplace the attribute at index `i' by `a'.\n\\pre not_empty: !IsEmpty()\n\\pre a_exists: a!=0\n\\pre valid_i: i>=0 && i<GetNumberOfAttributes()\n\\post same_size: GetNumberOfAttributes()==old\n    GetNumberOfAttributes()\n\\post item_is_set: GetAttribute(i)==a\n"},
  {"RemoveAttribute", PyvtkGenericAttributeCollection_RemoveAttribute, METH_VARARGS,
   "V.RemoveAttribute(int)\nC++: void RemoveAttribute(int i)\n\nRemove the attribute at `i'.\n\\pre not_empty: !IsEmpty()\n\\pre valid_i: i>=0 && i<GetNumberOfAttributes()\n\\post fewer_items: GetNumberOfAttributes()==old\n    GetNumberOfAttributes()-1\n"},
  {"Reset", PyvtkGenericAttributeCollection_Reset, METH_VARARGS,
   "V.Reset()\nC++: void Reset()\n\nRemove all attributes.\n\\post is_empty: GetNumberOfAttributes()==0\n"},
  {"DeepCopy", PyvtkGenericAttributeCollection_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkGenericAttributeCollection)\nC++: void DeepCopy(vtkGenericAttributeCollection *other)\n\nCopy, without reference counting, the other attribute array.\n\\pre other_exists: other!=0\n\\pre not_self: other!=this\n\\post same_size:\n    GetNumberOfAttributes()==other->GetNumberOfAttributes()\n"},
  {"ShallowCopy", PyvtkGenericAttributeCollection_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkGenericAttributeCollection)\nC++: void ShallowCopy(vtkGenericAttributeCollection *other)\n\nCopy, via reference counting, the other attribute array.\n\\pre other_exists: other!=0\n\\pre not_self: other!=this\n\\post same_size:\n    GetNumberOfAttributes()==other->GetNumberOfAttributes()\n"},
  {"GetMTime", PyvtkGenericAttributeCollection_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nvtkAttributeCollection is a composite object and needs to check\neach member of its collection for modified time.\n"},
  {"GetActiveAttribute", PyvtkGenericAttributeCollection_GetActiveAttribute, METH_VARARGS,
   "V.GetActiveAttribute() -> int\nC++: virtual int GetActiveAttribute()\n\nIndex of the attribute to be processed (not necessarily scalar).\n\\pre not_empty: !IsEmpty()\n\\post valid_result: result>=0 && result<GetNumberOfAttributes()\n"},
  {"GetActiveComponent", PyvtkGenericAttributeCollection_GetActiveComponent, METH_VARARGS,
   "V.GetActiveComponent() -> int\nC++: virtual int GetActiveComponent()\n\nComponent of the active attribute to be processed. -1 means\nmodule.\n\\pre not_empty: GetNumberOfAttributes()>0\n\\post valid_result: result>=-1 &&\nresult<GetAttribute(GetActiveAttribute())->GetNumberOfComponents()\n"},
  {"SetActiveAttribute", PyvtkGenericAttributeCollection_SetActiveAttribute, METH_VARARGS,
   "V.SetActiveAttribute(int, int)\nC++: void SetActiveAttribute(int attribute, int component=0)\n\nSet the scalar attribute to be processed. -1 means module.\n\\pre not_empty: !IsEmpty()\n\\pre valid_attribute: attribute>=0 &&\n    attribute<GetNumberOfAttributes()\n\\pre valid_component: component>=-1 &&\ncomponent<GetAttribute(attribute)->GetNumberOfComponents()\n\\post is_set: GetActiveAttribute()==attribute &&\nGetActiveComponent()==component\n"},
  {"GetNumberOfAttributesToInterpolate", PyvtkGenericAttributeCollection_GetNumberOfAttributesToInterpolate, METH_VARARGS,
   "V.GetNumberOfAttributesToInterpolate() -> int\nC++: virtual int GetNumberOfAttributesToInterpolate()\n\nNumber of attributes to interpolate.\n\\pre not_empty: !IsEmpty()\n\\post positive_result: result>=0\n"},
  {"GetAttributesToInterpolate", PyvtkGenericAttributeCollection_GetAttributesToInterpolate, METH_VARARGS,
   "V.GetAttributesToInterpolate() -> (int, ...)\nC++: int *GetAttributesToInterpolate()\n\nIndices of attributes to interpolate.\n\\pre not_empty: !IsEmpty()\n\\post valid_result: GetNumberOfAttributesToInterpolate()>0\n"},
  {"HasAttribute", PyvtkGenericAttributeCollection_HasAttribute, METH_VARARGS,
   "V.HasAttribute(int, [int, ...], int) -> int\nC++: int HasAttribute(int size, int *attributes, int attribute)\n\nDoes the array `attributes' of size `size' have `attribute'?\n\\pre positive_size: size>=0\n\\pre valid_attributes: size>0 implies attributes!=0\n"},
  {"SetAttributesToInterpolate", PyvtkGenericAttributeCollection_SetAttributesToInterpolate, METH_VARARGS,
   "V.SetAttributesToInterpolate(int, [int, ...])\nC++: void SetAttributesToInterpolate(int size, int *attributes)\n\nSet the attributes to interpolate.\n\\pre not_empty: !IsEmpty()\n\\pre positive_size: size>=0\n\\pre valid_attributes: size>0 implies attributes!=0\n\\pre valid_attributes_contents: attributes!=0 implies\n!HasAttributes(size,attributes,GetActiveAttribute())\n\\post is_set: (GetNumberOfAttributesToInterpolate()==size)&&\n(GetAttributesToInterpolate()==attributes)\n"},
  {"SetAttributesToInterpolateToAll", PyvtkGenericAttributeCollection_SetAttributesToInterpolateToAll, METH_VARARGS,
   "V.SetAttributesToInterpolateToAll()\nC++: void SetAttributesToInterpolateToAll()\n\nSet the attributes to interpolate.\n\\pre not_empty: !IsEmpty()\n\\pre positive_size: size>=0\n\\pre valid_attributes: size>0 implies attributes!=0\n\\pre valid_attributes_contents: attributes!=0 implies\n!HasAttributes(size,attributes,GetActiveAttribute())\n\\post is_set: (GetNumberOfAttributesToInterpolate()==size)&&\n(GetAttributesToInterpolate()==attributes)\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkGenericAttributeCollection_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkGenericAttributeCollection", // tp_name
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
  PyvtkGenericAttributeCollection_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGenericAttributeCollection_StaticNew()
{
  return vtkGenericAttributeCollection::New();
}

PyObject *PyvtkGenericAttributeCollection_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkGenericAttributeCollection_Type, PyvtkGenericAttributeCollection_Methods,
    "vtkGenericAttributeCollection",
 &PyvtkGenericAttributeCollection_StaticNew);

  PyTypeObject *pytype = &PyvtkGenericAttributeCollection_Type;

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

void PyVTKAddFile_vtkGenericAttributeCollection(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGenericAttributeCollection_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGenericAttributeCollection", o) != 0)
  {
    Py_DECREF(o);
  }

}

