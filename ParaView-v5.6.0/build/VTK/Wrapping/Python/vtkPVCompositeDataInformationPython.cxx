// python wrapper for vtkPVCompositeDataInformation
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
#include "vtkPVCompositeDataInformation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVCompositeDataInformation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVCompositeDataInformation_ClassNew(); }

#ifndef DECLARED_PyvtkPVInformation_ClassNew
extern "C" { PyObject *PyvtkPVInformation_ClassNew(); }
#define DECLARED_PyvtkPVInformation_ClassNew
#endif

static const char *PyvtkPVCompositeDataInformation_Doc =
  "vtkPVCompositeDataInformation - Light object for holding composite\ndata information.\n\n"
  "Superclass: vtkPVInformation\n\n"
  "vtkPVCompositeDataInformation is used to copy the meta information of\n"
  "a composite dataset from server to client. It holds a\n"
  "vtkPVDataInformation for each block of the composite dataset.\n"
  "@sa\n"
  "vtkHierarchicalBoxDataSet vtkPVDataInformation\n\n";


static PyObject *
PyvtkPVCompositeDataInformation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVCompositeDataInformation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCompositeDataInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeDataInformation *op = static_cast<vtkPVCompositeDataInformation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVCompositeDataInformation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCompositeDataInformation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVCompositeDataInformation *tempr = vtkPVCompositeDataInformation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCompositeDataInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeDataInformation *op = static_cast<vtkPVCompositeDataInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVCompositeDataInformation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVCompositeDataInformation::NewInstance());

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
PyvtkPVCompositeDataInformation_CopyFromObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeDataInformation *op = static_cast<vtkPVCompositeDataInformation *>(vp);

  vtkObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
  {
    if (ap.IsBound())
    {
      op->CopyFromObject(temp0);
    }
    else
    {
      op->vtkPVCompositeDataInformation::CopyFromObject(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCompositeDataInformation_AddInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeDataInformation *op = static_cast<vtkPVCompositeDataInformation *>(vp);

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
      op->vtkPVCompositeDataInformation::AddInformation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCompositeDataInformation_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeDataInformation *op = static_cast<vtkPVCompositeDataInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkPVCompositeDataInformation::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCompositeDataInformation_GetNumberOfChildren(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfChildren");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeDataInformation *op = static_cast<vtkPVCompositeDataInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfChildren() :
      op->vtkPVCompositeDataInformation::GetNumberOfChildren());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCompositeDataInformation_GetDataInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeDataInformation *op = static_cast<vtkPVCompositeDataInformation *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPVDataInformation *tempr = (ap.IsBound() ?
      op->GetDataInformation(temp0) :
      op->vtkPVCompositeDataInformation::GetDataInformation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCompositeDataInformation_GetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeDataInformation *op = static_cast<vtkPVCompositeDataInformation *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetName(temp0) :
      op->vtkPVCompositeDataInformation::GetName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCompositeDataInformation_GetDataIsMultiPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataIsMultiPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeDataInformation *op = static_cast<vtkPVCompositeDataInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataIsMultiPiece() :
      op->vtkPVCompositeDataInformation::GetDataIsMultiPiece());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCompositeDataInformation_GetDataIsComposite(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataIsComposite");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeDataInformation *op = static_cast<vtkPVCompositeDataInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataIsComposite() :
      op->vtkPVCompositeDataInformation::GetDataIsComposite());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCompositeDataInformation_GetNumberOfAMRLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAMRLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeDataInformation *op = static_cast<vtkPVCompositeDataInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfAMRLevels() :
      op->vtkPVCompositeDataInformation::GetNumberOfAMRLevels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVCompositeDataInformation_Methods[] = {
  {"IsTypeOf", PyvtkPVCompositeDataInformation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVCompositeDataInformation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVCompositeDataInformation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVCompositeDataInformation\nC++: static vtkPVCompositeDataInformation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVCompositeDataInformation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVCompositeDataInformation\nC++: vtkPVCompositeDataInformation *NewInstance()\n\n"},
  {"CopyFromObject", PyvtkPVCompositeDataInformation_CopyFromObject, METH_VARARGS,
   "V.CopyFromObject(vtkObject)\nC++: void CopyFromObject(vtkObject *) override;\n\nTransfer information about a single object into this object.\n"},
  {"AddInformation", PyvtkPVCompositeDataInformation_AddInformation, METH_VARARGS,
   "V.AddInformation(vtkPVInformation)\nC++: void AddInformation(vtkPVInformation *) override;\n\nMerge another information object.\n"},
  {"Initialize", PyvtkPVCompositeDataInformation_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: virtual void Initialize()\n\nClears all internal data structures.\n"},
  {"GetNumberOfChildren", PyvtkPVCompositeDataInformation_GetNumberOfChildren, METH_VARARGS,
   "V.GetNumberOfChildren() -> int\nC++: unsigned int GetNumberOfChildren()\n\nReturns the number of children.\n"},
  {"GetDataInformation", PyvtkPVCompositeDataInformation_GetDataInformation, METH_VARARGS,
   "V.GetDataInformation(int) -> vtkPVDataInformation\nC++: vtkPVDataInformation *GetDataInformation(unsigned int idx)\n\nReturns the information for the data object at the given index.\nIf the child is a composite dataset itself, then the return\nvtkPVDataInformation will have the CompositeDataInformation set\nappropriately.\n"},
  {"GetName", PyvtkPVCompositeDataInformation_GetName, METH_VARARGS,
   "V.GetName(int) -> string\nC++: const char *GetName(unsigned int idx)\n\nReturn the name of the child node at the given index, if any.\nThis is the value for the key vtkCompositeDataSet::NAME() in the\nmeta-data associated with the node.\n"},
  {"GetDataIsMultiPiece", PyvtkPVCompositeDataInformation_GetDataIsMultiPiece, METH_VARARGS,
   "V.GetDataIsMultiPiece() -> int\nC++: virtual int GetDataIsMultiPiece()\n\nGet/Set if the data is multipiece. If so, then\nGetDataInformation() will always return NULL. For\nvtkMultiblockDataSet, we don't collect information about\nindividual pieces. One can however, query the number of pieces by\nusing GetNumberOfChildren().\n"},
  {"GetDataIsComposite", PyvtkPVCompositeDataInformation_GetDataIsComposite, METH_VARARGS,
   "V.GetDataIsComposite() -> int\nC++: virtual int GetDataIsComposite()\n\nReturns if the dataset is a composite dataset.\n"},
  {"GetNumberOfAMRLevels", PyvtkPVCompositeDataInformation_GetNumberOfAMRLevels, METH_VARARGS,
   "V.GetNumberOfAMRLevels() -> int\nC++: virtual unsigned int GetNumberOfAMRLevels()\n\nReturns the number of levels in the AMR dataset. Only valid for\nvtkUniformGridAMR datasets.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVCompositeDataInformation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreCorePython.vtkPVCompositeDataInformation", // tp_name
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
  PyvtkPVCompositeDataInformation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVCompositeDataInformation_StaticNew()
{
  return vtkPVCompositeDataInformation::New();
}

PyObject *PyvtkPVCompositeDataInformation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVCompositeDataInformation_Type, PyvtkPVCompositeDataInformation_Methods,
    "vtkPVCompositeDataInformation",
 &PyvtkPVCompositeDataInformation_StaticNew);

  PyTypeObject *pytype = &PyvtkPVCompositeDataInformation_Type;

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

void PyVTKAddFile_vtkPVCompositeDataInformation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVCompositeDataInformation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVCompositeDataInformation", o) != 0)
  {
    Py_DECREF(o);
  }

}

