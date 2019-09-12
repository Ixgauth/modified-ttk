// python wrapper for vtkCellLinks
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
#include "vtkCellLinks.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCellLinks(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCellLinks_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractCellLinks_ClassNew
extern "C" { PyObject *PyvtkAbstractCellLinks_ClassNew(); }
#define DECLARED_PyvtkAbstractCellLinks_ClassNew
#endif

static const char *PyvtkCellLinks_Doc =
  "vtkCellLinks - object represents upward pointers from points to list\nof cells using each point\n\n"
  "Superclass: vtkAbstractCellLinks\n\n"
  "vtkCellLinks is a supplemental object to vtkCellArray and\n"
  "vtkCellTypes, enabling access from points to the cells using the\n"
  "points. vtkCellLinks is a list of cell ids, each such link\n"
  "representing a dynamic list of cell ids using the point. The\n"
  "information provided by this object can be used to determine\n"
  "neighbors and construct other local topological information.\n\n"
  "@warning\n"
  "Note that this class is designed to support incremental link\n"
  "construction. More efficient cell links structures can be built with\n"
  "vtkStaticCellLinks (and vtkStaticCellLinksTemplate). However these\n"
  "other classes are typically meant for one-time (static) construction.\n\n"
  "@sa\n"
  "vtkCellArray vtkCellTypes vtkStaticCellLinks\n"
  "vtkStaticCellLinksTemplate\n\n";


static PyObject *
PyvtkCellLinks_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCellLinks::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellLinks_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLinks *op = static_cast<vtkCellLinks *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCellLinks::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellLinks_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCellLinks *tempr = vtkCellLinks::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellLinks_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLinks *op = static_cast<vtkCellLinks *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellLinks *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCellLinks::NewInstance());

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
PyvtkCellLinks_BuildLinks_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildLinks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLinks *op = static_cast<vtkCellLinks *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
  {
    if (ap.IsBound())
    {
      op->BuildLinks(temp0);
    }
    else
    {
      op->vtkCellLinks::BuildLinks(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCellLinks_BuildLinks_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildLinks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLinks *op = static_cast<vtkCellLinks *>(vp);

  vtkDataSet *temp0 = nullptr;
  vtkCellArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetVTKObject(temp1, "vtkCellArray"))
  {
    if (ap.IsBound())
    {
      op->BuildLinks(temp0, temp1);
    }
    else
    {
      op->vtkCellLinks::BuildLinks(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCellLinks_BuildLinks(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkCellLinks_BuildLinks_s1(self, args);
    case 2:
      return PyvtkCellLinks_BuildLinks_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "BuildLinks");
  return nullptr;
}



static PyObject *
PyvtkCellLinks_Allocate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLinks *op = static_cast<vtkCellLinks *>(vp);

  vtkIdType temp0;
  vtkIdType temp1 = 1000;
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
      op->vtkCellLinks::Allocate(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellLinks_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLinks *op = static_cast<vtkCellLinks *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkCellLinks::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellLinks_GetNcells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNcells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLinks *op = static_cast<vtkCellLinks *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned short tempr = (ap.IsBound() ?
      op->GetNcells(temp0) :
      op->vtkCellLinks::GetNcells(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellLinks_GetCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLinks *op = static_cast<vtkCellLinks *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType *tempr = (ap.IsBound() ?
      op->GetCells(temp0) :
      op->vtkCellLinks::GetCells(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellLinks_InsertNextPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLinks *op = static_cast<vtkCellLinks *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->InsertNextPoint(temp0) :
      op->vtkCellLinks::InsertNextPoint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellLinks_InsertNextCellReference(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextCellReference");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLinks *op = static_cast<vtkCellLinks *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->InsertNextCellReference(temp0, temp1);
    }
    else
    {
      op->vtkCellLinks::InsertNextCellReference(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellLinks_DeletePoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeletePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLinks *op = static_cast<vtkCellLinks *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->DeletePoint(temp0);
    }
    else
    {
      op->vtkCellLinks::DeletePoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellLinks_RemoveCellReference(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveCellReference");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLinks *op = static_cast<vtkCellLinks *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->RemoveCellReference(temp0, temp1);
    }
    else
    {
      op->vtkCellLinks::RemoveCellReference(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellLinks_AddCellReference(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCellReference");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLinks *op = static_cast<vtkCellLinks *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddCellReference(temp0, temp1);
    }
    else
    {
      op->vtkCellLinks::AddCellReference(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellLinks_ResizeCellList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResizeCellList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLinks *op = static_cast<vtkCellLinks *>(vp);

  vtkIdType temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->ResizeCellList(temp0, temp1);
    }
    else
    {
      op->vtkCellLinks::ResizeCellList(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellLinks_Squeeze(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Squeeze");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLinks *op = static_cast<vtkCellLinks *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Squeeze();
    }
    else
    {
      op->vtkCellLinks::Squeeze();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellLinks_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLinks *op = static_cast<vtkCellLinks *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Reset();
    }
    else
    {
      op->vtkCellLinks::Reset();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellLinks_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLinks *op = static_cast<vtkCellLinks *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetActualMemorySize() :
      op->vtkCellLinks::GetActualMemorySize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellLinks_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLinks *op = static_cast<vtkCellLinks *>(vp);

  vtkCellLinks *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellLinks"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkCellLinks::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCellLinks_Methods[] = {
  {"IsTypeOf", PyvtkCellLinks_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods to instantiate, print, and obtain type\ninformation.\n"},
  {"IsA", PyvtkCellLinks_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods to instantiate, print, and obtain type\ninformation.\n"},
  {"SafeDownCast", PyvtkCellLinks_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCellLinks\nC++: static vtkCellLinks *SafeDownCast(vtkObjectBase *o)\n\nStandard methods to instantiate, print, and obtain type\ninformation.\n"},
  {"NewInstance", PyvtkCellLinks_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCellLinks\nC++: vtkCellLinks *NewInstance()\n\nStandard methods to instantiate, print, and obtain type\ninformation.\n"},
  {"BuildLinks", PyvtkCellLinks_BuildLinks, METH_VARARGS,
   "V.BuildLinks(vtkDataSet)\nC++: void BuildLinks(vtkDataSet *data) override;\nV.BuildLinks(vtkDataSet, vtkCellArray)\nC++: void BuildLinks(vtkDataSet *data, vtkCellArray *Connectivity)\n\nBuild the link list array. All subclasses of vtkAbstractCellLinks\nmust support this method.\n"},
  {"Allocate", PyvtkCellLinks_Allocate, METH_VARARGS,
   "V.Allocate(int, int)\nC++: void Allocate(vtkIdType numLinks, vtkIdType ext=1000)\n\nAllocate the specified number of links (i.e., number of points)\nthat will be built.\n"},
  {"Initialize", PyvtkCellLinks_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: void Initialize()\n\nClear out any previously allocated data structures\n"},
  {"GetNcells", PyvtkCellLinks_GetNcells, METH_VARARGS,
   "V.GetNcells(int) -> int\nC++: unsigned short GetNcells(vtkIdType ptId)\n\nGet the number of cells using the point specified by ptId.\n"},
  {"GetCells", PyvtkCellLinks_GetCells, METH_VARARGS,
   "V.GetCells(int) -> (int, ...)\nC++: vtkIdType *GetCells(vtkIdType ptId)\n\nReturn a list of cell ids using the point.\n"},
  {"InsertNextPoint", PyvtkCellLinks_InsertNextPoint, METH_VARARGS,
   "V.InsertNextPoint(int) -> int\nC++: vtkIdType InsertNextPoint(int numLinks)\n\nInsert a new point into the cell-links data structure. The size\nparameter is the initial size of the list.\n"},
  {"InsertNextCellReference", PyvtkCellLinks_InsertNextCellReference, METH_VARARGS,
   "V.InsertNextCellReference(int, int)\nC++: void InsertNextCellReference(vtkIdType ptId,\n    vtkIdType cellId)\n\nInsert a cell id into the list of cells (at the end) using the\ncell id provided. (Make sure to extend the link list (if\nnecessary) using the method ResizeCellList().)\n"},
  {"DeletePoint", PyvtkCellLinks_DeletePoint, METH_VARARGS,
   "V.DeletePoint(int)\nC++: void DeletePoint(vtkIdType ptId)\n\nDelete point (and storage) by destroying links to using cells.\n"},
  {"RemoveCellReference", PyvtkCellLinks_RemoveCellReference, METH_VARARGS,
   "V.RemoveCellReference(int, int)\nC++: void RemoveCellReference(vtkIdType cellId, vtkIdType ptId)\n\nDelete the reference to the cell (cellId) from the point (ptId).\nThis removes the reference to the cellId from the cell list, but\ndoes not resize the list (recover memory with ResizeCellList(),\nif necessary).\n"},
  {"AddCellReference", PyvtkCellLinks_AddCellReference, METH_VARARGS,
   "V.AddCellReference(int, int)\nC++: void AddCellReference(vtkIdType cellId, vtkIdType ptId)\n\nAdd the reference to the cell (cellId) from the point (ptId).\nThis adds a reference to the cellId from the cell list, but does\nnot resize the list (extend memory with ResizeCellList(), if\nnecessary).\n"},
  {"ResizeCellList", PyvtkCellLinks_ResizeCellList, METH_VARARGS,
   "V.ResizeCellList(int, int)\nC++: void ResizeCellList(vtkIdType ptId, int size)\n\nChange the length of a point's link list (i.e., list of cells\nusing a point) by the size specified.\n"},
  {"Squeeze", PyvtkCellLinks_Squeeze, METH_VARARGS,
   "V.Squeeze()\nC++: void Squeeze()\n\nReclaim any unused memory.\n"},
  {"Reset", PyvtkCellLinks_Reset, METH_VARARGS,
   "V.Reset()\nC++: void Reset()\n\nReset to a state of no entries without freeing the memory.\n"},
  {"GetActualMemorySize", PyvtkCellLinks_GetActualMemorySize, METH_VARARGS,
   "V.GetActualMemorySize() -> int\nC++: unsigned long GetActualMemorySize()\n\nReturn the memory in kibibytes (1024 bytes) consumed by this cell\nlinks array. Used to support streaming and reading/writing data.\nThe value returned is guaranteed to be greater than or equal to\nthe memory required to actually represent the data represented by\nthis object. The information returned is valid only after the\npipeline has been updated.\n"},
  {"DeepCopy", PyvtkCellLinks_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkCellLinks)\nC++: void DeepCopy(vtkCellLinks *src)\n\nStandard DeepCopy method.  Since this object contains no\nreference to other objects, there is no ShallowCopy.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCellLinks_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkCellLinks", // tp_name
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
  PyvtkCellLinks_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCellLinks_StaticNew()
{
  return vtkCellLinks::New();
}

PyObject *PyvtkCellLinks_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCellLinks_Type, PyvtkCellLinks_Methods,
    "vtkCellLinks",
 &PyvtkCellLinks_StaticNew);

  PyTypeObject *pytype = &PyvtkCellLinks_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractCellLinks_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCellLinks(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCellLinks_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCellLinks", o) != 0)
  {
    Py_DECREF(o);
  }

}

