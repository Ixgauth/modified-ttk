// python wrapper for vtkKdTreeManager
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
#include "vtkKdTreeManager.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkKdTreeManager(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkKdTreeManager_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkKdTreeManager_Doc =
  "vtkKdTreeManager - class used to generate KdTree from unstructured or\nstructured data.\n\n"
  "Superclass: vtkObject\n\n"
  "ParaView needs to build a KdTree when ordered compositing. The KdTree\n"
  "is either built using the all data in the pipeline when on structure\n"
  "data is present, or using the partitions provided by the structure\n"
  "data's extent translator. This class manages this logic. When\n"
  "structure data's extent translator is to be used, it simply uses\n"
  "vtkKdTreeGenerator. Otherwise, it lets the vtkPKdTree build the\n"
  "optimal partitioning for the data.\n\n";


static PyObject *
PyvtkKdTreeManager_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkKdTreeManager::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdTreeManager_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeManager *op = static_cast<vtkKdTreeManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkKdTreeManager::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdTreeManager_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkKdTreeManager *tempr = vtkKdTreeManager::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdTreeManager_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeManager *op = static_cast<vtkKdTreeManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkKdTreeManager *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkKdTreeManager::NewInstance());

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
PyvtkKdTreeManager_AddDataObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeManager *op = static_cast<vtkKdTreeManager *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->AddDataObject(temp0);
    }
    else
    {
      op->vtkKdTreeManager::AddDataObject(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdTreeManager_RemoveAllDataObjects(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllDataObjects");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeManager *op = static_cast<vtkKdTreeManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllDataObjects();
    }
    else
    {
      op->vtkKdTreeManager::RemoveAllDataObjects();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdTreeManager_SetStructuredDataInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStructuredDataInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeManager *op = static_cast<vtkKdTreeManager *>(vp);

  vtkExtentTranslator *temp0 = nullptr;
  const size_t size1 = 6;
  int temp1[6];
  const size_t size2 = 3;
  double temp2[3];
  const size_t size3 = 3;
  double temp3[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkExtentTranslator") &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
  {
    if (ap.IsBound())
    {
      op->SetStructuredDataInformation(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkKdTreeManager::SetStructuredDataInformation(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdTreeManager_SetKdTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKdTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeManager *op = static_cast<vtkKdTreeManager *>(vp);

  vtkPKdTree *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPKdTree"))
  {
    if (ap.IsBound())
    {
      op->SetKdTree(temp0);
    }
    else
    {
      op->vtkKdTreeManager::SetKdTree(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdTreeManager_GetKdTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKdTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeManager *op = static_cast<vtkKdTreeManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPKdTree *tempr = (ap.IsBound() ?
      op->GetKdTree() :
      op->vtkKdTreeManager::GetKdTree());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdTreeManager_SetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeManager *op = static_cast<vtkKdTreeManager *>(vp);

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
      op->vtkKdTreeManager::SetNumberOfPieces(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdTreeManager_GetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeManager *op = static_cast<vtkKdTreeManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPieces() :
      op->vtkKdTreeManager::GetNumberOfPieces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdTreeManager_GenerateKdTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateKdTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeManager *op = static_cast<vtkKdTreeManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateKdTree();
    }
    else
    {
      op->vtkKdTreeManager::GenerateKdTree();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkKdTreeManager_Methods[] = {
  {"IsTypeOf", PyvtkKdTreeManager_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkKdTreeManager_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkKdTreeManager_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkKdTreeManager\nC++: static vtkKdTreeManager *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkKdTreeManager_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkKdTreeManager\nC++: vtkKdTreeManager *NewInstance()\n\n"},
  {"AddDataObject", PyvtkKdTreeManager_AddDataObject, METH_VARARGS,
   "V.AddDataObject(vtkDataObject)\nC++: void AddDataObject(vtkDataObject *)\n\nAdd data objects.\n"},
  {"RemoveAllDataObjects", PyvtkKdTreeManager_RemoveAllDataObjects, METH_VARARGS,
   "V.RemoveAllDataObjects()\nC++: void RemoveAllDataObjects()\n\nAdd data objects.\n"},
  {"SetStructuredDataInformation", PyvtkKdTreeManager_SetStructuredDataInformation, METH_VARARGS,
   "V.SetStructuredDataInformation(vtkExtentTranslator, (int, int,\n    int, int, int, int), (float, float, float), (float, float,\n    float))\nC++: void SetStructuredDataInformation(\n    vtkExtentTranslator *translator, const int whole_extent[6],\n    const double origin[3], const double spacing[3])\n\nSet the optional extent translator to use to get aid in building\nthe KdTree.\n"},
  {"SetKdTree", PyvtkKdTreeManager_SetKdTree, METH_VARARGS,
   "V.SetKdTree(vtkPKdTree)\nC++: void SetKdTree(vtkPKdTree *)\n\nGet/Set the KdTree managed by this manager.\n"},
  {"GetKdTree", PyvtkKdTreeManager_GetKdTree, METH_VARARGS,
   "V.GetKdTree() -> vtkPKdTree\nC++: virtual vtkPKdTree *GetKdTree()\n\nGet/Set the KdTree managed by this manager.\n"},
  {"SetNumberOfPieces", PyvtkKdTreeManager_SetNumberOfPieces, METH_VARARGS,
   "V.SetNumberOfPieces(int)\nC++: virtual void SetNumberOfPieces(int _arg)\n\nGet/Set the number of pieces. Passed to the vtkKdTreeGenerator\nwhen SetStructuredDataInformation() is used with non-empty\ntranslator.\n"},
  {"GetNumberOfPieces", PyvtkKdTreeManager_GetNumberOfPieces, METH_VARARGS,
   "V.GetNumberOfPieces() -> int\nC++: virtual int GetNumberOfPieces()\n\nGet/Set the number of pieces. Passed to the vtkKdTreeGenerator\nwhen SetStructuredDataInformation() is used with non-empty\ntranslator.\n"},
  {"GenerateKdTree", PyvtkKdTreeManager_GenerateKdTree, METH_VARARGS,
   "V.GenerateKdTree()\nC++: void GenerateKdTree()\n\nRebuilds the KdTree.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkKdTreeManager_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsRenderingPython.vtkKdTreeManager", // tp_name
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
  PyvtkKdTreeManager_Doc, // tp_doc
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

static vtkObjectBase *PyvtkKdTreeManager_StaticNew()
{
  return vtkKdTreeManager::New();
}

PyObject *PyvtkKdTreeManager_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkKdTreeManager_Type, PyvtkKdTreeManager_Methods,
    "vtkKdTreeManager",
 &PyvtkKdTreeManager_StaticNew);

  PyTypeObject *pytype = &PyvtkKdTreeManager_Type;

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

void PyVTKAddFile_vtkKdTreeManager(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkKdTreeManager_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkKdTreeManager", o) != 0)
  {
    Py_DECREF(o);
  }

}

