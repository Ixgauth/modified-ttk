// python wrapper for vtkTableExtentTranslator
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
#include "vtkTableExtentTranslator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTableExtentTranslator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTableExtentTranslator_ClassNew(); }

#ifndef DECLARED_PyvtkExtentTranslator_ClassNew
extern "C" { PyObject *PyvtkExtentTranslator_ClassNew(); }
#define DECLARED_PyvtkExtentTranslator_ClassNew
#endif

static const char *PyvtkTableExtentTranslator_Doc =
  "vtkTableExtentTranslator - Extent translation through lookup table.\n\n"
  "Superclass: vtkExtentTranslator\n\n"
  "vtkTableExtentTranslator provides a vtkExtentTranslator that is\n"
  "programmed with a specific extent corresponding to each piece number.\n"
  " Readers can provide this to an application to allow the pipeline to\n"
  "execute using the same piece breakdown that is provided in the input\n"
  "file.\n\n";


static PyObject *
PyvtkTableExtentTranslator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTableExtentTranslator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableExtentTranslator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableExtentTranslator *op = static_cast<vtkTableExtentTranslator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTableExtentTranslator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableExtentTranslator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTableExtentTranslator *tempr = vtkTableExtentTranslator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableExtentTranslator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableExtentTranslator *op = static_cast<vtkTableExtentTranslator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTableExtentTranslator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTableExtentTranslator::NewInstance());

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
PyvtkTableExtentTranslator_SetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableExtentTranslator *op = static_cast<vtkTableExtentTranslator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfPieces(temp0);
    }
    else
    {
      op->vtkTableExtentTranslator::SetNumberOfPieces(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableExtentTranslator_SetNumberOfPiecesInTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPiecesInTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableExtentTranslator *op = static_cast<vtkTableExtentTranslator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfPiecesInTable(temp0);
    }
    else
    {
      op->vtkTableExtentTranslator::SetNumberOfPiecesInTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableExtentTranslator_GetNumberOfPiecesInTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPiecesInTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableExtentTranslator *op = static_cast<vtkTableExtentTranslator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPiecesInTable() :
      op->vtkTableExtentTranslator::GetNumberOfPiecesInTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableExtentTranslator_PieceToExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PieceToExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableExtentTranslator *op = static_cast<vtkTableExtentTranslator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->PieceToExtent() :
      op->vtkTableExtentTranslator::PieceToExtent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableExtentTranslator_PieceToExtentByPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PieceToExtentByPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableExtentTranslator *op = static_cast<vtkTableExtentTranslator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->PieceToExtentByPoints() :
      op->vtkTableExtentTranslator::PieceToExtentByPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableExtentTranslator_PieceToExtentThreadSafe(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PieceToExtentThreadSafe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableExtentTranslator *op = static_cast<vtkTableExtentTranslator *>(vp);

  int temp0;
  int temp1;
  int temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<int> store3(2*size3);
  int *temp3 = store3.Data();
  int *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<int> store4(2*size4);
  int *temp4 = store4.Data();
  int *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  int temp5;
  int temp6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
  {
    ap.Save(temp3, save3, size3);
    ap.Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->PieceToExtentThreadSafe(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkTableExtentTranslator::PieceToExtentThreadSafe(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (ap.HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableExtentTranslator_SetExtentForPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtentForPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableExtentTranslator *op = static_cast<vtkTableExtentTranslator *>(vp);

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
      op->SetExtentForPiece(temp0, temp1);
    }
    else
    {
      op->vtkTableExtentTranslator::SetExtentForPiece(temp0, temp1);
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
PyvtkTableExtentTranslator_GetExtentForPiece_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtentForPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableExtentTranslator *op = static_cast<vtkTableExtentTranslator *>(vp);

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
      op->GetExtentForPiece(temp0, temp1);
    }
    else
    {
      op->vtkTableExtentTranslator::GetExtentForPiece(temp0, temp1);
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
PyvtkTableExtentTranslator_GetExtentForPiece_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtentForPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableExtentTranslator *op = static_cast<vtkTableExtentTranslator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetExtentForPiece(temp0) :
      op->vtkTableExtentTranslator::GetExtentForPiece(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTableExtentTranslator_GetExtentForPiece(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkTableExtentTranslator_GetExtentForPiece_s1(self, args);
    case 1:
      return PyvtkTableExtentTranslator_GetExtentForPiece_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetExtentForPiece");
  return nullptr;
}



static PyObject *
PyvtkTableExtentTranslator_SetMaximumGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableExtentTranslator *op = static_cast<vtkTableExtentTranslator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumGhostLevel(temp0);
    }
    else
    {
      op->vtkTableExtentTranslator::SetMaximumGhostLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableExtentTranslator_GetMaximumGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableExtentTranslator *op = static_cast<vtkTableExtentTranslator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumGhostLevel() :
      op->vtkTableExtentTranslator::GetMaximumGhostLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableExtentTranslator_SetPieceAvailable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPieceAvailable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableExtentTranslator *op = static_cast<vtkTableExtentTranslator *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPieceAvailable(temp0, temp1);
    }
    else
    {
      op->vtkTableExtentTranslator::SetPieceAvailable(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableExtentTranslator_GetPieceAvailable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPieceAvailable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableExtentTranslator *op = static_cast<vtkTableExtentTranslator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPieceAvailable(temp0) :
      op->vtkTableExtentTranslator::GetPieceAvailable(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTableExtentTranslator_Methods[] = {
  {"IsTypeOf", PyvtkTableExtentTranslator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTableExtentTranslator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTableExtentTranslator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTableExtentTranslator\nC++: static vtkTableExtentTranslator *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTableExtentTranslator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTableExtentTranslator\nC++: vtkTableExtentTranslator *NewInstance()\n\n"},
  {"SetNumberOfPieces", PyvtkTableExtentTranslator_SetNumberOfPieces, METH_VARARGS,
   "V.SetNumberOfPieces(int)\nC++: void SetNumberOfPieces(int pieces) override;\n\nSet the Piece/NumPieces. Set the WholeExtent and then call\nPieceToExtent. The result can be obtained from the Extent ivar.\n"},
  {"SetNumberOfPiecesInTable", PyvtkTableExtentTranslator_SetNumberOfPiecesInTable, METH_VARARGS,
   "V.SetNumberOfPiecesInTable(int)\nC++: void SetNumberOfPiecesInTable(int pieces)\n\nSet the real number of pieces in the extent table.\n"},
  {"GetNumberOfPiecesInTable", PyvtkTableExtentTranslator_GetNumberOfPiecesInTable, METH_VARARGS,
   "V.GetNumberOfPiecesInTable() -> int\nC++: virtual int GetNumberOfPiecesInTable()\n\nSet the real number of pieces in the extent table.\n"},
  {"PieceToExtent", PyvtkTableExtentTranslator_PieceToExtent, METH_VARARGS,
   "V.PieceToExtent() -> int\nC++: int PieceToExtent() override;\n\nCalled to translate the current piece into an extent.  This is\nnot thread safe.\n"},
  {"PieceToExtentByPoints", PyvtkTableExtentTranslator_PieceToExtentByPoints, METH_VARARGS,
   "V.PieceToExtentByPoints() -> int\nC++: int PieceToExtentByPoints() override;\n\nNot supported by this subclass of vtkExtentTranslator.\n"},
  {"PieceToExtentThreadSafe", PyvtkTableExtentTranslator_PieceToExtentThreadSafe, METH_VARARGS,
   "V.PieceToExtentThreadSafe(int, int, int, [int, ...], [int, ...],\n    int, int) -> int\nC++: int PieceToExtentThreadSafe(int piece, int numPieces,\n    int ghostLevel, int *wholeExtent, int *resultExtent,\n    int splitMode, int byPoints) override;\n\nNot supported by this subclass of vtkExtentTranslator.\n"},
  {"SetExtentForPiece", PyvtkTableExtentTranslator_SetExtentForPiece, METH_VARARGS,
   "V.SetExtentForPiece(int, [int, ...])\nC++: virtual void SetExtentForPiece(int piece, int *extent)\n\nSet the extent to be used for a piece.  This sets the extent\ntable entry for the piece.\n"},
  {"GetExtentForPiece", PyvtkTableExtentTranslator_GetExtentForPiece, METH_VARARGS,
   "V.GetExtentForPiece(int, [int, ...])\nC++: virtual void GetExtentForPiece(int piece, int *extent)\nV.GetExtentForPiece(int) -> (int, ...)\nC++: virtual int *GetExtentForPiece(int piece)\n\nGet the extent table entry for the given piece.  This is only for\ncode that is setting up the table.  Extent translation should\nalways be done through the PieceToExtent method.\n"},
  {"SetMaximumGhostLevel", PyvtkTableExtentTranslator_SetMaximumGhostLevel, METH_VARARGS,
   "V.SetMaximumGhostLevel(int)\nC++: virtual void SetMaximumGhostLevel(int _arg)\n\nSet the maximum ghost level that can be requested.  This can be\nused by a reader to make sure an extent request does not go\noutside the boundaries of the piece's file.\n"},
  {"GetMaximumGhostLevel", PyvtkTableExtentTranslator_GetMaximumGhostLevel, METH_VARARGS,
   "V.GetMaximumGhostLevel() -> int\nC++: virtual int GetMaximumGhostLevel()\n\nSet the maximum ghost level that can be requested.  This can be\nused by a reader to make sure an extent request does not go\noutside the boundaries of the piece's file.\n"},
  {"SetPieceAvailable", PyvtkTableExtentTranslator_SetPieceAvailable, METH_VARARGS,
   "V.SetPieceAvailable(int, int)\nC++: virtual void SetPieceAvailable(int piece, int available)\n\nGet/Set whether the given piece is available.  Requesting a piece\nthat is not available will produce errors in the pipeline.\n"},
  {"GetPieceAvailable", PyvtkTableExtentTranslator_GetPieceAvailable, METH_VARARGS,
   "V.GetPieceAvailable(int) -> int\nC++: virtual int GetPieceAvailable(int piece)\n\nGet/Set whether the given piece is available.  Requesting a piece\nthat is not available will produce errors in the pipeline.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTableExtentTranslator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkTableExtentTranslator", // tp_name
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
  PyvtkTableExtentTranslator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTableExtentTranslator_StaticNew()
{
  return vtkTableExtentTranslator::New();
}

PyObject *PyvtkTableExtentTranslator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTableExtentTranslator_Type, PyvtkTableExtentTranslator_Methods,
    "vtkTableExtentTranslator",
 &PyvtkTableExtentTranslator_StaticNew);

  PyTypeObject *pytype = &PyvtkTableExtentTranslator_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkExtentTranslator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTableExtentTranslator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTableExtentTranslator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTableExtentTranslator", o) != 0)
  {
    Py_DECREF(o);
  }

}

