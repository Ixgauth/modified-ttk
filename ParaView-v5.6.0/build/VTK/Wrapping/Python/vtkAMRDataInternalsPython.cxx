// python wrapper for vtkAMRDataInternals
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
#include "vtkAMRDataInternals.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAMRDataInternals(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAMRDataInternals_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkAMRDataInternals_Doc =
  "vtkAMRDataInternals - container of vtkUniformGrid for an AMR data set\n\n"
  "Superclass: vtkObject\n\n"
  "vtkAMRDataInternals stores a list of non-empty blocks of an AMR data\n"
  "set\n\n"
  "@sa\n"
  "vtkOverlappingAMR, vtkAMRBox\n\n";


static PyObject *
PyvtkAMRDataInternals_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAMRDataInternals::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDataInternals_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDataInternals *op = static_cast<vtkAMRDataInternals *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAMRDataInternals::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDataInternals_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAMRDataInternals *tempr = vtkAMRDataInternals::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDataInternals_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDataInternals *op = static_cast<vtkAMRDataInternals *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAMRDataInternals *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAMRDataInternals::NewInstance());

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
PyvtkAMRDataInternals_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDataInternals *op = static_cast<vtkAMRDataInternals *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkAMRDataInternals::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDataInternals_Insert(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Insert");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDataInternals *op = static_cast<vtkAMRDataInternals *>(vp);

  unsigned int temp0;
  vtkUniformGrid *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkUniformGrid"))
  {
    if (ap.IsBound())
    {
      op->Insert(temp0, temp1);
    }
    else
    {
      op->vtkAMRDataInternals::Insert(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDataInternals_GetDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDataInternals *op = static_cast<vtkAMRDataInternals *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkUniformGrid *tempr = (ap.IsBound() ?
      op->GetDataSet(temp0) :
      op->vtkAMRDataInternals::GetDataSet(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDataInternals_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDataInternals *op = static_cast<vtkAMRDataInternals *>(vp);

  vtkObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkAMRDataInternals::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDataInternals_Empty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Empty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDataInternals *op = static_cast<vtkAMRDataInternals *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->Empty() :
      op->vtkAMRDataInternals::Empty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDataInternals_GetNumberOfBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDataInternals *op = static_cast<vtkAMRDataInternals *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfBlocks() :
      op->vtkAMRDataInternals::GetNumberOfBlocks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAMRDataInternals_Methods[] = {
  {"IsTypeOf", PyvtkAMRDataInternals_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAMRDataInternals_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAMRDataInternals_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAMRDataInternals\nC++: static vtkAMRDataInternals *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAMRDataInternals_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAMRDataInternals\nC++: vtkAMRDataInternals *NewInstance()\n\n"},
  {"Initialize", PyvtkAMRDataInternals_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: void Initialize()\n\n"},
  {"Insert", PyvtkAMRDataInternals_Insert, METH_VARARGS,
   "V.Insert(int, vtkUniformGrid)\nC++: void Insert(unsigned int index, vtkUniformGrid *grid)\n\n"},
  {"GetDataSet", PyvtkAMRDataInternals_GetDataSet, METH_VARARGS,
   "V.GetDataSet(int) -> vtkUniformGrid\nC++: vtkUniformGrid *GetDataSet(unsigned int compositeIndex)\n\n"},
  {"ShallowCopy", PyvtkAMRDataInternals_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkObject)\nC++: virtual void ShallowCopy(vtkObject *src)\n\n"},
  {"Empty", PyvtkAMRDataInternals_Empty, METH_VARARGS,
   "V.Empty() -> bool\nC++: bool Empty()\n\n"},
  {"GetNumberOfBlocks", PyvtkAMRDataInternals_GetNumberOfBlocks, METH_VARARGS,
   "V.GetNumberOfBlocks() -> int\nC++: unsigned int GetNumberOfBlocks()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAMRDataInternals_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkAMRDataInternals", // tp_name
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
  PyvtkAMRDataInternals_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAMRDataInternals_StaticNew()
{
  return vtkAMRDataInternals::New();
}

PyObject *PyvtkAMRDataInternals_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAMRDataInternals_Type, PyvtkAMRDataInternals_Methods,
    "vtkAMRDataInternals",
 &PyvtkAMRDataInternals_StaticNew);

  PyTypeObject *pytype = &PyvtkAMRDataInternals_Type;

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

void PyVTKAddFile_vtkAMRDataInternals(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAMRDataInternals_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAMRDataInternals", o) != 0)
  {
    Py_DECREF(o);
  }

}

