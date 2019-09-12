// python wrapper for vtkVisibilitySort
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
#include "vtkVisibilitySort.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkVisibilitySort(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkVisibilitySort_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkVisibilitySort_Doc =
  "vtkVisibilitySort - Abstract class that can sort cell data along a\nviewpoint.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkVisibilitySort encapsulates a method for depth sorting the cells\n"
  "of a vtkDataSet for a given viewpoint.  It should be noted that\n"
  "subclasses are not required to give an absolutely correct sorting. \n"
  "Many types of unstructured grids may have sorting cycles, meaning\n"
  "that there is no possible correct sorting.  Some subclasses also only\n"
  "give an approximate sorting in the interest of speed.\n\n"
  "@attention The Input field of this class tends to causes reference\n"
  "cycles.  To help break these cycles, garbage collection is enabled on\n"
  "this object and the input parameter is traced.  For this to work,\n"
  "though, an object in the loop holding the visibility sort should also\n"
  "report that to the garbage collector.\n\n";


static PyObject *
PyvtkVisibilitySort_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkVisibilitySort::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVisibilitySort_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVisibilitySort::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVisibilitySort_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkVisibilitySort *tempr = vtkVisibilitySort::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVisibilitySort_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVisibilitySort *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVisibilitySort::NewInstance());

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
PyvtkVisibilitySort_InitTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->InitTraversal();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVisibilitySort_GetNextCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    vtkIdTypeArray *tempr = op->GetNextCells();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVisibilitySort_SetMaxCellsReturned(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxCellsReturned");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxCellsReturned(temp0);
    }
    else
    {
      op->vtkVisibilitySort::SetMaxCellsReturned(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVisibilitySort_GetMaxCellsReturnedMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxCellsReturnedMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxCellsReturnedMinValue() :
      op->vtkVisibilitySort::GetMaxCellsReturnedMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVisibilitySort_GetMaxCellsReturnedMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxCellsReturnedMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxCellsReturnedMaxValue() :
      op->vtkVisibilitySort::GetMaxCellsReturnedMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVisibilitySort_GetMaxCellsReturned(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxCellsReturned");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxCellsReturned() :
      op->vtkVisibilitySort::GetMaxCellsReturned());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVisibilitySort_SetModelTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->SetModelTransform(temp0);
    }
    else
    {
      op->vtkVisibilitySort::SetModelTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVisibilitySort_GetModelTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModelTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetModelTransform() :
      op->vtkVisibilitySort::GetModelTransform());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVisibilitySort_GetInverseModelTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInverseModelTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetInverseModelTransform() :
      op->vtkVisibilitySort::GetInverseModelTransform());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVisibilitySort_SetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

  vtkCamera *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCamera"))
  {
    if (ap.IsBound())
    {
      op->SetCamera(temp0);
    }
    else
    {
      op->vtkVisibilitySort::SetCamera(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVisibilitySort_GetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCamera *tempr = (ap.IsBound() ?
      op->GetCamera() :
      op->vtkVisibilitySort::GetCamera());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVisibilitySort_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
  {
    if (ap.IsBound())
    {
      op->SetInput(temp0);
    }
    else
    {
      op->vtkVisibilitySort::SetInput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVisibilitySort_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkVisibilitySort::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVisibilitySort_GetDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDirection() :
      op->vtkVisibilitySort::GetDirection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVisibilitySort_SetDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDirection(temp0);
    }
    else
    {
      op->vtkVisibilitySort::SetDirection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVisibilitySort_SetDirectionToBackToFront(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectionToBackToFront");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDirectionToBackToFront();
    }
    else
    {
      op->vtkVisibilitySort::SetDirectionToBackToFront();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVisibilitySort_SetDirectionToFrontToBack(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectionToFrontToBack");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDirectionToFrontToBack();
    }
    else
    {
      op->vtkVisibilitySort::SetDirectionToFrontToBack();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkVisibilitySort_Methods[] = {
  {"IsTypeOf", PyvtkVisibilitySort_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkVisibilitySort_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkVisibilitySort_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkVisibilitySort\nC++: static vtkVisibilitySort *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkVisibilitySort_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkVisibilitySort\nC++: vtkVisibilitySort *NewInstance()\n\n"},
  {"InitTraversal", PyvtkVisibilitySort_InitTraversal, METH_VARARGS,
   "V.InitTraversal()\nC++: virtual void InitTraversal()\n\nTo facilitate incremental sorting algorithms, the cells are\nretrieved in an iteration process.  That is, call InitTraversal\nto start the iteration and call GetNextCells to get the cell IDs\nin order. However, for efficiencies sake, GetNextCells returns an\nordered list of several id's in once call (but not necessarily\nall).  GetNextCells will return NULL once the entire sorted list\nis output.  The vtkIdTypeArray returned from GetNextCells is a\ncached array, so do not delete it.  At the same note, do not\nexpect the array to be valid after subsequent calls to\nGetNextCells.\n"},
  {"GetNextCells", PyvtkVisibilitySort_GetNextCells, METH_VARARGS,
   "V.GetNextCells() -> vtkIdTypeArray\nC++: virtual vtkIdTypeArray *GetNextCells()\n\nTo facilitate incremental sorting algorithms, the cells are\nretrieved in an iteration process.  That is, call InitTraversal\nto start the iteration and call GetNextCells to get the cell IDs\nin order. However, for efficiencies sake, GetNextCells returns an\nordered list of several id's in once call (but not necessarily\nall).  GetNextCells will return NULL once the entire sorted list\nis output.  The vtkIdTypeArray returned from GetNextCells is a\ncached array, so do not delete it.  At the same note, do not\nexpect the array to be valid after subsequent calls to\nGetNextCells.\n"},
  {"SetMaxCellsReturned", PyvtkVisibilitySort_SetMaxCellsReturned, METH_VARARGS,
   "V.SetMaxCellsReturned(int)\nC++: virtual void SetMaxCellsReturned(int _arg)\n\nSet/Get the maximum number of cells that GetNextCells will return\nin one invocation.\n"},
  {"GetMaxCellsReturnedMinValue", PyvtkVisibilitySort_GetMaxCellsReturnedMinValue, METH_VARARGS,
   "V.GetMaxCellsReturnedMinValue() -> int\nC++: virtual int GetMaxCellsReturnedMinValue()\n\nSet/Get the maximum number of cells that GetNextCells will return\nin one invocation.\n"},
  {"GetMaxCellsReturnedMaxValue", PyvtkVisibilitySort_GetMaxCellsReturnedMaxValue, METH_VARARGS,
   "V.GetMaxCellsReturnedMaxValue() -> int\nC++: virtual int GetMaxCellsReturnedMaxValue()\n\nSet/Get the maximum number of cells that GetNextCells will return\nin one invocation.\n"},
  {"GetMaxCellsReturned", PyvtkVisibilitySort_GetMaxCellsReturned, METH_VARARGS,
   "V.GetMaxCellsReturned() -> int\nC++: virtual int GetMaxCellsReturned()\n\nSet/Get the maximum number of cells that GetNextCells will return\nin one invocation.\n"},
  {"SetModelTransform", PyvtkVisibilitySort_SetModelTransform, METH_VARARGS,
   "V.SetModelTransform(vtkMatrix4x4)\nC++: virtual void SetModelTransform(vtkMatrix4x4 *mat)\n\nSet/Get the matrix that transforms from object space to world\nspace. Generally, you get this matrix from a call to GetMatrix of\na vtkProp3D (vtkActor).\n"},
  {"GetModelTransform", PyvtkVisibilitySort_GetModelTransform, METH_VARARGS,
   "V.GetModelTransform() -> vtkMatrix4x4\nC++: virtual vtkMatrix4x4 *GetModelTransform()\n\nSet/Get the matrix that transforms from object space to world\nspace. Generally, you get this matrix from a call to GetMatrix of\na vtkProp3D (vtkActor).\n"},
  {"GetInverseModelTransform", PyvtkVisibilitySort_GetInverseModelTransform, METH_VARARGS,
   "V.GetInverseModelTransform() -> vtkMatrix4x4\nC++: virtual vtkMatrix4x4 *GetInverseModelTransform()\n\n"},
  {"SetCamera", PyvtkVisibilitySort_SetCamera, METH_VARARGS,
   "V.SetCamera(vtkCamera)\nC++: virtual void SetCamera(vtkCamera *camera)\n\nSet/Get the camera that specifies the viewing parameters.\n"},
  {"GetCamera", PyvtkVisibilitySort_GetCamera, METH_VARARGS,
   "V.GetCamera() -> vtkCamera\nC++: virtual vtkCamera *GetCamera()\n\nSet/Get the camera that specifies the viewing parameters.\n"},
  {"SetInput", PyvtkVisibilitySort_SetInput, METH_VARARGS,
   "V.SetInput(vtkDataSet)\nC++: virtual void SetInput(vtkDataSet *data)\n\nSet/Get the data set containing the cells to sort.\n"},
  {"GetInput", PyvtkVisibilitySort_GetInput, METH_VARARGS,
   "V.GetInput() -> vtkDataSet\nC++: virtual vtkDataSet *GetInput()\n\nSet/Get the data set containing the cells to sort.\n"},
  {"GetDirection", PyvtkVisibilitySort_GetDirection, METH_VARARGS,
   "V.GetDirection() -> int\nC++: virtual int GetDirection()\n\nSet/Get the sorting direction.  Be default, the direction is set\nto back to front.\n"},
  {"SetDirection", PyvtkVisibilitySort_SetDirection, METH_VARARGS,
   "V.SetDirection(int)\nC++: virtual void SetDirection(int _arg)\n\nSet/Get the sorting direction.  Be default, the direction is set\nto back to front.\n"},
  {"SetDirectionToBackToFront", PyvtkVisibilitySort_SetDirectionToBackToFront, METH_VARARGS,
   "V.SetDirectionToBackToFront()\nC++: void SetDirectionToBackToFront()\n\nSet/Get the sorting direction.  Be default, the direction is set\nto back to front.\n"},
  {"SetDirectionToFrontToBack", PyvtkVisibilitySort_SetDirectionToFrontToBack, METH_VARARGS,
   "V.SetDirectionToFrontToBack()\nC++: void SetDirectionToFrontToBack()\n\nSet/Get the sorting direction.  Be default, the direction is set\nto back to front.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkVisibilitySort_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkVisibilitySort", // tp_name
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
  PyvtkVisibilitySort_Doc, // tp_doc
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

PyObject *PyvtkVisibilitySort_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkVisibilitySort_Type, PyvtkVisibilitySort_Methods,
    "vtkVisibilitySort",
 nullptr);

  PyTypeObject *pytype = &PyvtkVisibilitySort_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "BACK_TO_FRONT", vtkVisibilitySort::BACK_TO_FRONT },
        { "FRONT_TO_BACK", vtkVisibilitySort::FRONT_TO_BACK },
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

void PyVTKAddFile_vtkVisibilitySort(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkVisibilitySort_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkVisibilitySort", o) != 0)
  {
    Py_DECREF(o);
  }

}

