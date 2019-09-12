// python wrapper for vtkCPExodusIIElementBlock
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
#include "vtkCPExodusIIElementBlock.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCPExodusIIElementBlock(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCPExodusIIElementBlockImpl_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkCPExodusIIElementBlockImpl_Doc =
  "vtkCPExodusIIElementBlockImpl - no description provided.\n\n"
  "Superclass: vtkObject\n\n"
;


static PyObject *
PyvtkCPExodusIIElementBlockImpl_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCPExodusIIElementBlockImpl::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPExodusIIElementBlockImpl_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIElementBlockImpl *op = static_cast<vtkCPExodusIIElementBlockImpl *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCPExodusIIElementBlockImpl::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPExodusIIElementBlockImpl_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCPExodusIIElementBlockImpl *tempr = vtkCPExodusIIElementBlockImpl::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPExodusIIElementBlockImpl_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIElementBlockImpl *op = static_cast<vtkCPExodusIIElementBlockImpl *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCPExodusIIElementBlockImpl *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCPExodusIIElementBlockImpl::NewInstance());

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
PyvtkCPExodusIIElementBlockImpl_SetExodusConnectivityArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExodusConnectivityArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIElementBlockImpl *op = static_cast<vtkCPExodusIIElementBlockImpl *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  std::string temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->SetExodusConnectivityArray(temp0, temp1, temp2, temp3) :
      op->vtkCPExodusIIElementBlockImpl::SetExodusConnectivityArray(temp0, temp1, temp2, temp3));

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
PyvtkCPExodusIIElementBlockImpl_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIElementBlockImpl *op = static_cast<vtkCPExodusIIElementBlockImpl *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfCells() :
      op->vtkCPExodusIIElementBlockImpl::GetNumberOfCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPExodusIIElementBlockImpl_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIElementBlockImpl *op = static_cast<vtkCPExodusIIElementBlockImpl *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellType(temp0) :
      op->vtkCPExodusIIElementBlockImpl::GetCellType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPExodusIIElementBlockImpl_GetCellPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIElementBlockImpl *op = static_cast<vtkCPExodusIIElementBlockImpl *>(vp);

  vtkIdType temp0;
  vtkIdList *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->GetCellPoints(temp0, temp1);
    }
    else
    {
      op->vtkCPExodusIIElementBlockImpl::GetCellPoints(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCPExodusIIElementBlockImpl_GetPointCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIElementBlockImpl *op = static_cast<vtkCPExodusIIElementBlockImpl *>(vp);

  vtkIdType temp0;
  vtkIdList *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->GetPointCells(temp0, temp1);
    }
    else
    {
      op->vtkCPExodusIIElementBlockImpl::GetPointCells(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCPExodusIIElementBlockImpl_GetMaxCellSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxCellSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIElementBlockImpl *op = static_cast<vtkCPExodusIIElementBlockImpl *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxCellSize() :
      op->vtkCPExodusIIElementBlockImpl::GetMaxCellSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPExodusIIElementBlockImpl_GetIdsOfCellsOfType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIdsOfCellsOfType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIElementBlockImpl *op = static_cast<vtkCPExodusIIElementBlockImpl *>(vp);

  int temp0;
  vtkIdTypeArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdTypeArray"))
  {
    if (ap.IsBound())
    {
      op->GetIdsOfCellsOfType(temp0, temp1);
    }
    else
    {
      op->vtkCPExodusIIElementBlockImpl::GetIdsOfCellsOfType(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCPExodusIIElementBlockImpl_IsHomogeneous(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsHomogeneous");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIElementBlockImpl *op = static_cast<vtkCPExodusIIElementBlockImpl *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsHomogeneous() :
      op->vtkCPExodusIIElementBlockImpl::IsHomogeneous());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPExodusIIElementBlockImpl_Allocate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIElementBlockImpl *op = static_cast<vtkCPExodusIIElementBlockImpl *>(vp);

  vtkIdType temp0;
  int temp1 = 1000;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->Allocate(temp0, temp1);
    }
    else
    {
      op->vtkCPExodusIIElementBlockImpl::Allocate(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCPExodusIIElementBlockImpl_InsertNextCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIElementBlockImpl *op = static_cast<vtkCPExodusIIElementBlockImpl *>(vp);

  int temp0;
  vtkIdList *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->InsertNextCell(temp0, temp1) :
      op->vtkCPExodusIIElementBlockImpl::InsertNextCell(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCPExodusIIElementBlockImpl_InsertNextCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIElementBlockImpl *op = static_cast<vtkCPExodusIIElementBlockImpl *>(vp);

  int temp0;
  vtkIdType temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<vtkIdType> store2(size2);
  vtkIdType *temp2 = store2.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.CheckSizeHint(2, size2, temp1))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->InsertNextCell(temp0, temp1, temp2) :
      op->vtkCPExodusIIElementBlockImpl::InsertNextCell(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCPExodusIIElementBlockImpl_InsertNextCell_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIElementBlockImpl *op = static_cast<vtkCPExodusIIElementBlockImpl *>(vp);

  int temp0;
  vtkIdType temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<vtkIdType> store2(size2);
  vtkIdType *temp2 = store2.Data();
  vtkIdType temp3;
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<vtkIdType> store4(size4);
  vtkIdType *temp4 = store4.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.CheckSizeHint(2, size2, temp1) &&
      ap.CheckSizeHint(4, size4, temp3))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->InsertNextCell(temp0, temp1, temp2, temp3, temp4) :
      op->vtkCPExodusIIElementBlockImpl::InsertNextCell(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCPExodusIIElementBlockImpl_InsertNextCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkCPExodusIIElementBlockImpl_InsertNextCell_s1(self, args);
    case 3:
      return PyvtkCPExodusIIElementBlockImpl_InsertNextCell_s2(self, args);
    case 5:
      return PyvtkCPExodusIIElementBlockImpl_InsertNextCell_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InsertNextCell");
  return nullptr;
}



static PyObject *
PyvtkCPExodusIIElementBlockImpl_ReplaceCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIElementBlockImpl *op = static_cast<vtkCPExodusIIElementBlockImpl *>(vp);

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
      ap.CheckSizeHint(2, size2, temp1))
  {
    if (ap.IsBound())
    {
      op->ReplaceCell(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCPExodusIIElementBlockImpl::ReplaceCell(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCPExodusIIElementBlockImpl_Methods[] = {
  {"IsTypeOf", PyvtkCPExodusIIElementBlockImpl_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCPExodusIIElementBlockImpl_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCPExodusIIElementBlockImpl_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCPExodusIIElementBlockImpl\nC++: static vtkCPExodusIIElementBlockImpl *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCPExodusIIElementBlockImpl_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCPExodusIIElementBlockImpl\nC++: vtkCPExodusIIElementBlockImpl *NewInstance()\n\n"},
  {"SetExodusConnectivityArray", PyvtkCPExodusIIElementBlockImpl_SetExodusConnectivityArray, METH_VARARGS,
   "V.SetExodusConnectivityArray([int, ...], string, int, int) -> bool\nC++: bool SetExodusConnectivityArray(int *elements,\n    const std::string &type, int numElements, int nodesPerElement)\n\nSet the Exodus element block data. 'elements' is the array\nreturned from ex_get_elem_conn. 'type', 'numElements', and\n'nodesPerElement' are obtained from ex_get_elem_block. Returns\ntrue or false depending on whether or not the element type can be\ntranslated into a VTK cell type. This object takes ownership of\nthe elements array unless this function returns false.\n"},
  {"GetNumberOfCells", PyvtkCPExodusIIElementBlockImpl_GetNumberOfCells, METH_VARARGS,
   "V.GetNumberOfCells() -> int\nC++: vtkIdType GetNumberOfCells()\n\n"},
  {"GetCellType", PyvtkCPExodusIIElementBlockImpl_GetCellType, METH_VARARGS,
   "V.GetCellType(int) -> int\nC++: int GetCellType(vtkIdType cellId)\n\n"},
  {"GetCellPoints", PyvtkCPExodusIIElementBlockImpl_GetCellPoints, METH_VARARGS,
   "V.GetCellPoints(int, vtkIdList)\nC++: void GetCellPoints(vtkIdType cellId, vtkIdList *ptIds)\n\n"},
  {"GetPointCells", PyvtkCPExodusIIElementBlockImpl_GetPointCells, METH_VARARGS,
   "V.GetPointCells(int, vtkIdList)\nC++: void GetPointCells(vtkIdType ptId, vtkIdList *cellIds)\n\n"},
  {"GetMaxCellSize", PyvtkCPExodusIIElementBlockImpl_GetMaxCellSize, METH_VARARGS,
   "V.GetMaxCellSize() -> int\nC++: int GetMaxCellSize()\n\n"},
  {"GetIdsOfCellsOfType", PyvtkCPExodusIIElementBlockImpl_GetIdsOfCellsOfType, METH_VARARGS,
   "V.GetIdsOfCellsOfType(int, vtkIdTypeArray)\nC++: void GetIdsOfCellsOfType(int type, vtkIdTypeArray *array)\n\n"},
  {"IsHomogeneous", PyvtkCPExodusIIElementBlockImpl_IsHomogeneous, METH_VARARGS,
   "V.IsHomogeneous() -> int\nC++: int IsHomogeneous()\n\n"},
  {"Allocate", PyvtkCPExodusIIElementBlockImpl_Allocate, METH_VARARGS,
   "V.Allocate(int, int)\nC++: void Allocate(vtkIdType numCells, int extSize=1000)\n\n"},
  {"InsertNextCell", PyvtkCPExodusIIElementBlockImpl_InsertNextCell, METH_VARARGS,
   "V.InsertNextCell(int, vtkIdList) -> int\nC++: vtkIdType InsertNextCell(int type, vtkIdList *ptIds)\nV.InsertNextCell(int, int, (int, ...)) -> int\nC++: vtkIdType InsertNextCell(int type, vtkIdType npts,\n    const vtkIdType ptIds[])\nV.InsertNextCell(int, int, (int, ...), int, (int, ...)) -> int\nC++: vtkIdType InsertNextCell(int type, vtkIdType npts,\n    const vtkIdType ptIds[], vtkIdType nfaces,\n    const vtkIdType faces[])\n\n"},
  {"ReplaceCell", PyvtkCPExodusIIElementBlockImpl_ReplaceCell, METH_VARARGS,
   "V.ReplaceCell(int, int, (int, ...))\nC++: void ReplaceCell(vtkIdType cellId, int npts,\n    const vtkIdType pts[])\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCPExodusIIElementBlockImpl_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOExodusPython.vtkCPExodusIIElementBlockImpl", // tp_name
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
  PyvtkCPExodusIIElementBlockImpl_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCPExodusIIElementBlockImpl_StaticNew()
{
  return vtkCPExodusIIElementBlockImpl::New();
}

PyObject *PyvtkCPExodusIIElementBlockImpl_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCPExodusIIElementBlockImpl_Type, PyvtkCPExodusIIElementBlockImpl_Methods,
    "vtkCPExodusIIElementBlockImpl",
 &PyvtkCPExodusIIElementBlockImpl_StaticNew);

  PyTypeObject *pytype = &PyvtkCPExodusIIElementBlockImpl_Type;

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

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCPExodusIIElementBlock_ClassNew(); }

#ifndef DECLARED_PyvtkUnstructuredGridBase_ClassNew
extern "C" { PyObject *PyvtkUnstructuredGridBase_ClassNew(); }
#define DECLARED_PyvtkUnstructuredGridBase_ClassNew
#endif

static const char *PyvtkCPExodusIIElementBlock_Doc =
  "vtkCPExodusIIElementBlock - Uses an Exodus II element block as a\n vtkMappedUnstructuredGrid's implementation.\n\n"
  "Superclass: vtkUnstructuredGridBase\n\n"
  "This class allows raw data arrays returned by the Exodus II library\n"
  "to be used directly in VTK without repacking the data into the\n"
  "vtkUnstructuredGrid memory layout. Use the vtkCPExodusIIInSituReader\n"
  "to read an Exodus II file's data into this structure.\n\n";


static PyObject *
PyvtkCPExodusIIElementBlock_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCPExodusIIElementBlock::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPExodusIIElementBlock_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIElementBlock *op = static_cast<vtkCPExodusIIElementBlock *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCPExodusIIElementBlock::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPExodusIIElementBlock_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCPExodusIIElementBlock *tempr = vtkCPExodusIIElementBlock::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPExodusIIElementBlock_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIElementBlock *op = static_cast<vtkCPExodusIIElementBlock *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCPExodusIIElementBlock *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCPExodusIIElementBlock::NewInstance());

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

static PyMethodDef PyvtkCPExodusIIElementBlock_Methods[] = {
  {"IsTypeOf", PyvtkCPExodusIIElementBlock_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCPExodusIIElementBlock_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCPExodusIIElementBlock_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCPExodusIIElementBlock\nC++: static vtkCPExodusIIElementBlock *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCPExodusIIElementBlock_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCPExodusIIElementBlock\nC++: vtkCPExodusIIElementBlock *NewInstance()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCPExodusIIElementBlock_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOExodusPython.vtkCPExodusIIElementBlock", // tp_name
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
  PyvtkCPExodusIIElementBlock_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCPExodusIIElementBlock_StaticNew()
{
  return vtkCPExodusIIElementBlock::New();
}

PyObject *PyvtkCPExodusIIElementBlock_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCPExodusIIElementBlock_Type, PyvtkCPExodusIIElementBlock_Methods,
    "vtkCPExodusIIElementBlock",
 &PyvtkCPExodusIIElementBlock_StaticNew);

  PyTypeObject *pytype = &PyvtkCPExodusIIElementBlock_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkUnstructuredGridBase_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCPExodusIIElementBlock(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCPExodusIIElementBlockImpl_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCPExodusIIElementBlockImpl", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkCPExodusIIElementBlock_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCPExodusIIElementBlock", o) != 0)
  {
    Py_DECREF(o);
  }

}

