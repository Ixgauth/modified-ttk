// python wrapper for vtkCellArray
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
#include "vtkCellArray.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCellArray(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCellArray_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkCellArray_Doc =
  "vtkCellArray - object to represent cell connectivity\n\n"
  "Superclass: vtkObject\n\n"
  "vtkCellArray is a supporting object that explicitly represents cell\n"
  "connectivity. The cell array structure is a raw integer list of the\n"
  "form: (n,id1,id2,...,idn, n,id1,id2,...,idn, ...) where n is the\n"
  "number of points in the cell, and id is a zero-offset index into an\n"
  "associated point list.\n\n"
  "Advantages of this data structure are its compactness, simplicity,\n"
  "and easy interface to external data.  However, it is totally\n"
  "inadequate for random access.  This functionality (when necessary) is\n"
  "accomplished by using the vtkCellTypes and vtkCellLinks objects to\n"
  "extend the definition of the data structure.\n\n"
  "@sa\n"
  "vtkCellTypes vtkCellLinks\n\n";


static PyObject *
PyvtkCellArray_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCellArray::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCellArray::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCellArray *tempr = vtkCellArray::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellArray *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCellArray::NewInstance());

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
PyvtkCellArray_Allocate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  vtkIdType temp0;
  vtkIdType temp1 = 1000;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    int tempr = (ap.IsBound() ?
      op->Allocate(temp0, temp1) :
      op->vtkCellArray::Allocate(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkCellArray::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfCells() :
      op->vtkCellArray::GetNumberOfCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_SetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfCells(temp0);
    }
    else
    {
      op->vtkCellArray::SetNumberOfCells(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_EstimateSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EstimateSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  vtkIdType temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->EstimateSize(temp0, temp1) :
      op->vtkCellArray::EstimateSize(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_InitTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitTraversal();
    }
    else
    {
      op->vtkCellArray::InitTraversal();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_GetNextCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  vtkIdType temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<vtkIdType> store1(2*size1);
  vtkIdType *temp1 = store1.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    int tempr = (ap.IsBound() ?
      op->GetNextCell(temp0, temp1) :
      op->vtkCellArray::GetNextCell(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellArray_GetNextCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  vtkIdList *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdList"))
  {
    int tempr = (ap.IsBound() ?
      op->GetNextCell(temp0) :
      op->vtkCellArray::GetNextCell(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellArray_GetNextCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkCellArray_GetNextCell_s1(self, args);
    case 1:
      return PyvtkCellArray_GetNextCell_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetNextCell");
  return nullptr;
}



static PyObject *
PyvtkCellArray_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetSize() :
      op->vtkCellArray::GetSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_GetNumberOfConnectivityEntries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfConnectivityEntries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfConnectivityEntries() :
      op->vtkCellArray::GetNumberOfConnectivityEntries());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_GetCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<vtkIdType> store2(2*size2);
  vtkIdType *temp2 = store2.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetSize()),
                      "0 <= loc && loc < GetSize()"))
  {
    if (ap.IsBound())
    {
      op->GetCell(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCellArray::GetCell(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCellArray_GetCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  vtkIdType temp0;
  vtkIdList *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetSize()),
                      "0 <= loc && loc < GetSize()"))
  {
    if (ap.IsBound())
    {
      op->GetCell(temp0, temp1);
    }
    else
    {
      op->vtkCellArray::GetCell(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCellArray_GetCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkCellArray_GetCell_s1(self, args);
    case 2:
      return PyvtkCellArray_GetCell_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCell");
  return nullptr;
}



static PyObject *
PyvtkCellArray_InsertNextCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->InsertNextCell(temp0) :
      op->vtkCellArray::InsertNextCell(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellArray_InsertNextCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  vtkIdType temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<vtkIdType> store1(size1);
  vtkIdType *temp1 = store1.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckSizeHint(1, size1, temp0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->InsertNextCell(temp0, temp1) :
      op->vtkCellArray::InsertNextCell(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellArray_InsertNextCell_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  vtkIdList *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdList"))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->InsertNextCell(temp0) :
      op->vtkCellArray::InsertNextCell(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellArray_InsertNextCell_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->InsertNextCell(temp0) :
      op->vtkCellArray::InsertNextCell(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCellArray_InsertNextCell_Methods[] = {
  {nullptr, PyvtkCellArray_InsertNextCell_s1, METH_VARARGS,
   "@V *vtkCell"},
  {nullptr, PyvtkCellArray_InsertNextCell_s3, METH_VARARGS,
   "@V *vtkIdList"},
  {nullptr, PyvtkCellArray_InsertNextCell_s4, METH_VARARGS,
   "@i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCellArray_InsertNextCell(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCellArray_InsertNextCell_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkCellArray_InsertNextCell_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InsertNextCell");
  return nullptr;
}



static PyObject *
PyvtkCellArray_InsertCellPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertCellPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->InsertCellPoint(temp0);
    }
    else
    {
      op->vtkCellArray::InsertCellPoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_UpdateCellCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateCellCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->UpdateCellCount(temp0);
    }
    else
    {
      op->vtkCellArray::UpdateCellCount(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_GetInsertLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInsertLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetInsertLocation(temp0) :
      op->vtkCellArray::GetInsertLocation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_GetTraversalLocation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTraversalLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetTraversalLocation() :
      op->vtkCellArray::GetTraversalLocation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellArray_GetTraversalLocation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTraversalLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetTraversalLocation(temp0) :
      op->vtkCellArray::GetTraversalLocation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellArray_GetTraversalLocation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkCellArray_GetTraversalLocation_s1(self, args);
    case 1:
      return PyvtkCellArray_GetTraversalLocation_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetTraversalLocation");
  return nullptr;
}



static PyObject *
PyvtkCellArray_SetTraversalLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTraversalLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTraversalLocation(temp0);
    }
    else
    {
      op->vtkCellArray::SetTraversalLocation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_ReverseCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetSize()),
                      "0 <= loc && loc < GetSize()"))
  {
    if (ap.IsBound())
    {
      op->ReverseCell(temp0);
    }
    else
    {
      op->vtkCellArray::ReverseCell(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_ReplaceCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  vtkIdType temp0;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<vtkIdType> store2(size2);
  vtkIdType *temp2 = store2.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.CheckSizeHint(2, size2, temp1) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetSize()),
                      "0 <= loc && loc < GetSize()"))
  {
    if (ap.IsBound())
    {
      op->ReplaceCell(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCellArray::ReplaceCell(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_GetMaxCellSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxCellSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxCellSize() :
      op->vtkCellArray::GetMaxCellSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_GetPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType *tempr = (ap.IsBound() ?
      op->GetPointer() :
      op->vtkCellArray::GetPointer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_WritePointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WritePointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkIdType *tempr = (ap.IsBound() ?
      op->WritePointer(temp0, temp1) :
      op->vtkCellArray::WritePointer(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_SetCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  vtkIdType temp0;
  vtkIdTypeArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdTypeArray"))
  {
    if (ap.IsBound())
    {
      op->SetCells(temp0, temp1);
    }
    else
    {
      op->vtkCellArray::SetCells(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  vtkCellArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellArray"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkCellArray::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_GetData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdTypeArray *tempr = (ap.IsBound() ?
      op->GetData() :
      op->vtkCellArray::GetData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Reset();
    }
    else
    {
      op->vtkCellArray::Reset();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_Squeeze(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Squeeze");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Squeeze();
    }
    else
    {
      op->vtkCellArray::Squeeze();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetActualMemorySize() :
      op->vtkCellArray::GetActualMemorySize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCellArray_Methods[] = {
  {"IsTypeOf", PyvtkCellArray_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCellArray_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCellArray_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCellArray\nC++: static vtkCellArray *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCellArray_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCellArray\nC++: vtkCellArray *NewInstance()\n\n"},
  {"Allocate", PyvtkCellArray_Allocate, METH_VARARGS,
   "V.Allocate(int, int) -> int\nC++: int Allocate(vtkIdType sz, vtkIdType ext=1000)\n\nAllocate memory and set the size to extend by.\n"},
  {"Initialize", PyvtkCellArray_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: void Initialize()\n\nFree any memory and reset to an empty state.\n"},
  {"GetNumberOfCells", PyvtkCellArray_GetNumberOfCells, METH_VARARGS,
   "V.GetNumberOfCells() -> int\nC++: virtual vtkIdType GetNumberOfCells()\n\nGet the number of cells in the array.\n"},
  {"SetNumberOfCells", PyvtkCellArray_SetNumberOfCells, METH_VARARGS,
   "V.SetNumberOfCells(int)\nC++: virtual void SetNumberOfCells(vtkIdType _arg)\n\nSet the number of cells in the array. DO NOT do any kind of\nallocation, advanced use only.\n"},
  {"EstimateSize", PyvtkCellArray_EstimateSize, METH_VARARGS,
   "V.EstimateSize(int, int) -> int\nC++: vtkIdType EstimateSize(vtkIdType numCells, int maxPtsPerCell)\n\nUtility routines help manage memory of cell array. EstimateSize()\nreturns a value used to initialize and allocate memory for array\nbased on number of cells and maximum number of points making up\ncell.  If every cell is the same size (in terms of number of\npoints), then the memory estimate is guaranteed exact. (If not\nexact, use Squeeze() to reclaim any extra memory.)\n"},
  {"InitTraversal", PyvtkCellArray_InitTraversal, METH_VARARGS,
   "V.InitTraversal()\nC++: void InitTraversal()\n\nA cell traversal methods that is more efficient than vtkDataSet\ntraversal methods.  InitTraversal() initializes the traversal of\nthe list of cells.\n"},
  {"GetNextCell", PyvtkCellArray_GetNextCell, METH_VARARGS,
   "V.GetNextCell(int, [int, ...]) -> int\nC++: int GetNextCell(vtkIdType &npts, vtkIdType *&pts)\nV.GetNextCell(vtkIdList) -> int\nC++: int GetNextCell(vtkIdList *pts)\n\nA cell traversal methods that is more efficient than vtkDataSet\ntraversal methods.  GetNextCell() gets the next cell in the list.\nIf end of list is encountered, 0 is returned. A value of 1 is\nreturned whenever npts and pts have been updated without error.\n"},
  {"GetSize", PyvtkCellArray_GetSize, METH_VARARGS,
   "V.GetSize() -> int\nC++: vtkIdType GetSize()\n\nGet the size of the allocated connectivity array.\n"},
  {"GetNumberOfConnectivityEntries", PyvtkCellArray_GetNumberOfConnectivityEntries, METH_VARARGS,
   "V.GetNumberOfConnectivityEntries() -> int\nC++: vtkIdType GetNumberOfConnectivityEntries()\n\nGet the total number of entries (i.e., data values) in the\nconnectivity array. This may be much less than the allocated size\n(i.e., return value from GetSize().)\n"},
  {"GetCell", PyvtkCellArray_GetCell, METH_VARARGS,
   "V.GetCell(int, int, [int, ...])\nC++: void GetCell(vtkIdType loc, vtkIdType &npts, vtkIdType *&pts)\nV.GetCell(int, vtkIdList)\nC++: void GetCell(vtkIdType loc, vtkIdList *pts)\n\nInternal method used to retrieve a cell given an offset into the\ninternal array.\n"},
  {"InsertNextCell", PyvtkCellArray_InsertNextCell, METH_VARARGS,
   "V.InsertNextCell(vtkCell) -> int\nC++: vtkIdType InsertNextCell(vtkCell *cell)\nV.InsertNextCell(int, (int, ...)) -> int\nC++: vtkIdType InsertNextCell(vtkIdType npts,\n    const vtkIdType pts[])\nV.InsertNextCell(vtkIdList) -> int\nC++: vtkIdType InsertNextCell(vtkIdList *pts)\nV.InsertNextCell(int) -> int\nC++: vtkIdType InsertNextCell(int npts)\n\nInsert a cell object. Return the cell id of the cell.\n"},
  {"InsertCellPoint", PyvtkCellArray_InsertCellPoint, METH_VARARGS,
   "V.InsertCellPoint(int)\nC++: void InsertCellPoint(vtkIdType id)\n\nUsed in conjunction with InsertNextCell(int npts) to add another\npoint to the list of cells.\n"},
  {"UpdateCellCount", PyvtkCellArray_UpdateCellCount, METH_VARARGS,
   "V.UpdateCellCount(int)\nC++: void UpdateCellCount(int npts)\n\nUsed in conjunction with InsertNextCell(int npts) and\nInsertCellPoint() to update the number of points defining the\ncell.\n"},
  {"GetInsertLocation", PyvtkCellArray_GetInsertLocation, METH_VARARGS,
   "V.GetInsertLocation(int) -> int\nC++: vtkIdType GetInsertLocation(int npts)\n\nComputes the current insertion location within the internal\narray. Used in conjunction with GetCell(int loc,...).\n"},
  {"GetTraversalLocation", PyvtkCellArray_GetTraversalLocation, METH_VARARGS,
   "V.GetTraversalLocation() -> int\nC++: vtkIdType GetTraversalLocation()\nV.GetTraversalLocation(int) -> int\nC++: vtkIdType GetTraversalLocation(vtkIdType npts)\n\nGet/Set the current traversal location.\n"},
  {"SetTraversalLocation", PyvtkCellArray_SetTraversalLocation, METH_VARARGS,
   "V.SetTraversalLocation(int)\nC++: void SetTraversalLocation(vtkIdType loc)\n\n"},
  {"ReverseCell", PyvtkCellArray_ReverseCell, METH_VARARGS,
   "V.ReverseCell(int)\nC++: void ReverseCell(vtkIdType loc)\n\nSpecial method inverts ordering of current cell. Must be called\ncarefully or the cell topology may be corrupted.\n"},
  {"ReplaceCell", PyvtkCellArray_ReplaceCell, METH_VARARGS,
   "V.ReplaceCell(int, int, (int, ...))\nC++: void ReplaceCell(vtkIdType loc, int npts,\n    const vtkIdType pts[])\n\nReplace the point ids of the cell with a different list of point\nids. Calling this method does not mark the vtkCellArray as\nmodified.  This is the responsibility of the caller and may be\ndone after multiple calls to ReplaceCell.\n"},
  {"GetMaxCellSize", PyvtkCellArray_GetMaxCellSize, METH_VARARGS,
   "V.GetMaxCellSize() -> int\nC++: int GetMaxCellSize()\n\nReturns the size of the largest cell. The size is the number of\npoints defining the cell.\n"},
  {"GetPointer", PyvtkCellArray_GetPointer, METH_VARARGS,
   "V.GetPointer() -> (int, ...)\nC++: vtkIdType *GetPointer()\n\nGet pointer to array of cell data.\n"},
  {"WritePointer", PyvtkCellArray_WritePointer, METH_VARARGS,
   "V.WritePointer(int, int) -> (int, ...)\nC++: vtkIdType *WritePointer(const vtkIdType ncells,\n    const vtkIdType size)\n\nGet pointer to data array for purpose of direct writes of data.\nSize is the total storage consumed by the cell array. ncells is\nthe number of cells represented in the array.\n"},
  {"SetCells", PyvtkCellArray_SetCells, METH_VARARGS,
   "V.SetCells(int, vtkIdTypeArray)\nC++: void SetCells(vtkIdType ncells, vtkIdTypeArray *cells)\n\nDefine multiple cells by providing a connectivity list. The list\nis in the form (npts,p0,p1,...p(npts-1), repeated for each cell).\nBe careful using this method because it discards the old cells,\nand anything referring these cells becomes invalid (for example,\nif BuildCells() has been called see vtkPolyData).  The traversal\nlocation is reset to the beginning of the list; the insertion\nlocation is set to the end of the list.\n"},
  {"DeepCopy", PyvtkCellArray_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkCellArray)\nC++: void DeepCopy(vtkCellArray *ca)\n\nPerform a deep copy (no reference counting) of the given cell\narray.\n"},
  {"GetData", PyvtkCellArray_GetData, METH_VARARGS,
   "V.GetData() -> vtkIdTypeArray\nC++: vtkIdTypeArray *GetData()\n\nReturn the underlying data as a data array.\n"},
  {"Reset", PyvtkCellArray_Reset, METH_VARARGS,
   "V.Reset()\nC++: void Reset()\n\nReuse list. Reset to initial condition.\n"},
  {"Squeeze", PyvtkCellArray_Squeeze, METH_VARARGS,
   "V.Squeeze()\nC++: void Squeeze()\n\nReclaim any extra memory.\n"},
  {"GetActualMemorySize", PyvtkCellArray_GetActualMemorySize, METH_VARARGS,
   "V.GetActualMemorySize() -> int\nC++: unsigned long GetActualMemorySize()\n\nReturn the memory in kibibytes (1024 bytes) consumed by this cell\narray. Used to support streaming and reading/writing data. The\nvalue returned is guaranteed to be greater than or equal to the\nmemory required to actually represent the data represented by\nthis object. The information returned is valid only after the\npipeline has been updated.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCellArray_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkCellArray", // tp_name
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
  PyvtkCellArray_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCellArray_StaticNew()
{
  return vtkCellArray::New();
}

PyObject *PyvtkCellArray_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCellArray_Type, PyvtkCellArray_Methods,
    "vtkCellArray",
 &PyvtkCellArray_StaticNew);

  PyTypeObject *pytype = &PyvtkCellArray_Type;

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

void PyVTKAddFile_vtkCellArray(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCellArray_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCellArray", o) != 0)
  {
    Py_DECREF(o);
  }

}

