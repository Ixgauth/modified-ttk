// python wrapper for vtkIdList
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
#include "vtkIdList.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkIdList(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkIdList_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkIdList_Doc =
  "vtkIdList - list of point or cell ids\n\n"
  "Superclass: vtkObject\n\n"
  "vtkIdList is used to represent and pass data id's between objects.\n"
  "vtkIdList may represent any type of integer id, but usually\n"
  "represents point and cell ids.\n\n";


static PyObject *
PyvtkIdList_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkIdList::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIdList_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdList *op = static_cast<vtkIdList *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkIdList::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIdList_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkIdList *tempr = vtkIdList::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIdList_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdList *op = static_cast<vtkIdList *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdList *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkIdList::NewInstance());

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
PyvtkIdList_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdList *op = static_cast<vtkIdList *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkIdList::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIdList_Allocate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdList *op = static_cast<vtkIdList *>(vp);

  vtkIdType temp0;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    int tempr = (ap.IsBound() ?
      op->Allocate(temp0, temp1) :
      op->vtkIdList::Allocate(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIdList_GetNumberOfIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdList *op = static_cast<vtkIdList *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfIds() :
      op->vtkIdList::GetNumberOfIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIdList_GetId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdList *op = static_cast<vtkIdList *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfIds()),
                      "0 <= i && i < GetNumberOfIds()"))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetId(temp0) :
      op->vtkIdList::GetId(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIdList_SetNumberOfIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdList *op = static_cast<vtkIdList *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfIds(temp0);
    }
    else
    {
      op->vtkIdList::SetNumberOfIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIdList_SetId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdList *op = static_cast<vtkIdList *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfIds()),
                      "0 <= i && i < GetNumberOfIds()"))
  {
    if (ap.IsBound())
    {
      op->SetId(temp0, temp1);
    }
    else
    {
      op->vtkIdList::SetId(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIdList_InsertId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdList *op = static_cast<vtkIdList *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.CheckPrecond((0 <= temp0), "0 <= i"))
  {
    if (ap.IsBound())
    {
      op->InsertId(temp0, temp1);
    }
    else
    {
      op->vtkIdList::InsertId(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIdList_InsertNextId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdList *op = static_cast<vtkIdList *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->InsertNextId(temp0) :
      op->vtkIdList::InsertNextId(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIdList_InsertUniqueId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertUniqueId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdList *op = static_cast<vtkIdList *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->InsertUniqueId(temp0) :
      op->vtkIdList::InsertUniqueId(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIdList_Sort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Sort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdList *op = static_cast<vtkIdList *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Sort();
    }
    else
    {
      op->vtkIdList::Sort();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIdList_GetPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdList *op = static_cast<vtkIdList *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType *tempr = (ap.IsBound() ?
      op->GetPointer(temp0) :
      op->vtkIdList::GetPointer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIdList_WritePointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WritePointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdList *op = static_cast<vtkIdList *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkIdType *tempr = (ap.IsBound() ?
      op->WritePointer(temp0, temp1) :
      op->vtkIdList::WritePointer(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIdList_SetArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdList *op = static_cast<vtkIdList *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<vtkIdType> store0(2*size0);
  vtkIdType *temp0 = store0.Data();
  vtkIdType *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetArray(temp0, temp1);
    }
    else
    {
      op->vtkIdList::SetArray(temp0, temp1);
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
PyvtkIdList_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdList *op = static_cast<vtkIdList *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Reset();
    }
    else
    {
      op->vtkIdList::Reset();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIdList_Squeeze(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Squeeze");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdList *op = static_cast<vtkIdList *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Squeeze();
    }
    else
    {
      op->vtkIdList::Squeeze();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIdList_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdList *op = static_cast<vtkIdList *>(vp);

  vtkIdList *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkIdList::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIdList_DeleteId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdList *op = static_cast<vtkIdList *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->DeleteId(temp0);
    }
    else
    {
      op->vtkIdList::DeleteId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIdList_IsId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdList *op = static_cast<vtkIdList *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->IsId(temp0) :
      op->vtkIdList::IsId(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIdList_IntersectWith_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWith");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdList *op = static_cast<vtkIdList *>(vp);

  vtkIdList *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->IntersectWith(temp0);
    }
    else
    {
      op->vtkIdList::IntersectWith(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkIdList_IntersectWith_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWith");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdList *op = static_cast<vtkIdList *>(vp);

  vtkIdList *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->IntersectWith(*temp0);
    }
    else
    {
      op->vtkIdList::IntersectWith(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkIdList_IntersectWith_Methods[] = {
  {nullptr, PyvtkIdList_IntersectWith_s1, METH_VARARGS,
   "@V *vtkIdList"},
  {nullptr, PyvtkIdList_IntersectWith_s2, METH_VARARGS,
   "@W &vtkIdList"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkIdList_IntersectWith(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkIdList_IntersectWith_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "IntersectWith");
  return nullptr;
}



static PyObject *
PyvtkIdList_Resize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Resize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdList *op = static_cast<vtkIdList *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType *tempr = (ap.IsBound() ?
      op->Resize(temp0) :
      op->vtkIdList::Resize(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkIdList_Methods[] = {
  {"IsTypeOf", PyvtkIdList_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instantiation, type information, and\nprinting.\n"},
  {"IsA", PyvtkIdList_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instantiation, type information, and\nprinting.\n"},
  {"SafeDownCast", PyvtkIdList_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkIdList\nC++: static vtkIdList *SafeDownCast(vtkObjectBase *o)\n\nStandard methods for instantiation, type information, and\nprinting.\n"},
  {"NewInstance", PyvtkIdList_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkIdList\nC++: vtkIdList *NewInstance()\n\nStandard methods for instantiation, type information, and\nprinting.\n"},
  {"Initialize", PyvtkIdList_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: void Initialize()\n\nRelease memory and restore to unallocated state.\n"},
  {"Allocate", PyvtkIdList_Allocate, METH_VARARGS,
   "V.Allocate(int, int) -> int\nC++: int Allocate(const vtkIdType sz, const int strategy=0)\n\nAllocate a capacity for sz ids in the list and set the number of\nstored ids in the list to 0. strategy is not used.\n"},
  {"GetNumberOfIds", PyvtkIdList_GetNumberOfIds, METH_VARARGS,
   "V.GetNumberOfIds() -> int\nC++: vtkIdType GetNumberOfIds()\n\nReturn the number of id's in the list.\n"},
  {"GetId", PyvtkIdList_GetId, METH_VARARGS,
   "V.GetId(int) -> int\nC++: vtkIdType GetId(const vtkIdType i)\n\nReturn the id at location i.\n"},
  {"SetNumberOfIds", PyvtkIdList_SetNumberOfIds, METH_VARARGS,
   "V.SetNumberOfIds(int)\nC++: void SetNumberOfIds(const vtkIdType number)\n\nSpecify the number of ids for this object to hold. Does an\nallocation as well as setting the number of ids.\n"},
  {"SetId", PyvtkIdList_SetId, METH_VARARGS,
   "V.SetId(int, int)\nC++: void SetId(const vtkIdType i, const vtkIdType vtkid)\n\nSet the id at location i. Doesn't do range checking so it's a bit\nfaster than InsertId. Make sure you use SetNumberOfIds() to\nallocate memory prior to using SetId().\n"},
  {"InsertId", PyvtkIdList_InsertId, METH_VARARGS,
   "V.InsertId(int, int)\nC++: void InsertId(const vtkIdType i, const vtkIdType vtkid)\n\nSet the id at location i. Does range checking and allocates\nmemory as necessary.\n"},
  {"InsertNextId", PyvtkIdList_InsertNextId, METH_VARARGS,
   "V.InsertNextId(int) -> int\nC++: vtkIdType InsertNextId(const vtkIdType vtkid)\n\nAdd the id specified to the end of the list. Range checking is\nperformed.\n"},
  {"InsertUniqueId", PyvtkIdList_InsertUniqueId, METH_VARARGS,
   "V.InsertUniqueId(int) -> int\nC++: vtkIdType InsertUniqueId(const vtkIdType vtkid)\n\nIf id is not already in list, insert it and return location in\nlist. Otherwise return just location in list.\n"},
  {"Sort", PyvtkIdList_Sort, METH_VARARGS,
   "V.Sort()\nC++: void Sort()\n\nSort the ids in the list in ascending id order. This method uses\nvtkSMPTools::Sort() so it can be sped up if built properly.\n"},
  {"GetPointer", PyvtkIdList_GetPointer, METH_VARARGS,
   "V.GetPointer(int) -> (int, ...)\nC++: vtkIdType *GetPointer(const vtkIdType i)\n\nGet a pointer to a particular data index.\n"},
  {"WritePointer", PyvtkIdList_WritePointer, METH_VARARGS,
   "V.WritePointer(int, int) -> (int, ...)\nC++: vtkIdType *WritePointer(const vtkIdType i,\n    const vtkIdType number)\n\nGet a pointer to a particular data index. Make sure data is\nallocated for the number of items requested. Set MaxId according\nto the number of data values requested.\n"},
  {"SetArray", PyvtkIdList_SetArray, METH_VARARGS,
   "V.SetArray([int, ...], int)\nC++: void SetArray(vtkIdType *array, vtkIdType size)\n\nSpecify an array of vtkIdType to use as the id list. This\nreplaces the underlying array. This instance of vtkIdList takes\nownership of the array, meaning that it deletes it on destruction\n(using delete[]).\n"},
  {"Reset", PyvtkIdList_Reset, METH_VARARGS,
   "V.Reset()\nC++: void Reset()\n\nReset to an empty state but retain previously allocated memory.\n"},
  {"Squeeze", PyvtkIdList_Squeeze, METH_VARARGS,
   "V.Squeeze()\nC++: void Squeeze()\n\nFree any unused memory.\n"},
  {"DeepCopy", PyvtkIdList_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkIdList)\nC++: void DeepCopy(vtkIdList *ids)\n\nCopy an id list by explicitly copying the internal array.\n"},
  {"DeleteId", PyvtkIdList_DeleteId, METH_VARARGS,
   "V.DeleteId(int)\nC++: void DeleteId(vtkIdType vtkid)\n\nDelete specified id from list. Will remove all occurrences of id\nin list.\n"},
  {"IsId", PyvtkIdList_IsId, METH_VARARGS,
   "V.IsId(int) -> int\nC++: vtkIdType IsId(vtkIdType vtkid)\n\nReturn -1 if id specified is not contained in the list; otherwise\nreturn the position in the list.\n"},
  {"IntersectWith", PyvtkIdList_IntersectWith, METH_VARARGS,
   "V.IntersectWith(vtkIdList)\nC++: void IntersectWith(vtkIdList *otherIds)\nV.IntersectWith(vtkIdList)\nC++: void IntersectWith(vtkIdList &otherIds)\n\nIntersect this list with another vtkIdList. Updates current list\naccording to result of intersection operation.\n"},
  {"Resize", PyvtkIdList_Resize, METH_VARARGS,
   "V.Resize(int) -> (int, ...)\nC++: vtkIdType *Resize(const vtkIdType sz)\n\nAdjust the size of the id list while maintaining its content\n(except when being truncated).\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkIdList_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkIdList", // tp_name
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
  PyvtkIdList_Doc, // tp_doc
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

static vtkObjectBase *PyvtkIdList_StaticNew()
{
  return vtkIdList::New();
}

PyObject *PyvtkIdList_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkIdList_Type, PyvtkIdList_Methods,
    "vtkIdList",
 &PyvtkIdList_StaticNew);

  PyTypeObject *pytype = &PyvtkIdList_Type;

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

void PyVTKAddFile_vtkIdList(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkIdList_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkIdList", o) != 0)
  {
    Py_DECREF(o);
  }

}

