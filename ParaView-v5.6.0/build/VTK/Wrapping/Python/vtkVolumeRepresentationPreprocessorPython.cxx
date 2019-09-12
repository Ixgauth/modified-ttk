// python wrapper for vtkVolumeRepresentationPreprocessor
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
#include "vtkVolumeRepresentationPreprocessor.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkVolumeRepresentationPreprocessor(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkVolumeRepresentationPreprocessor_ClassNew(); }

#ifndef DECLARED_PyvtkUnstructuredGridAlgorithm_ClassNew
extern "C" { PyObject *PyvtkUnstructuredGridAlgorithm_ClassNew(); }
#define DECLARED_PyvtkUnstructuredGridAlgorithm_ClassNew
#endif

static const char *PyvtkVolumeRepresentationPreprocessor_Doc =
  "vtkVolumeRepresentationPreprocessor - prepare data object for volume\nrendering\n\n"
  "Superclass: vtkUnstructuredGridAlgorithm\n\n"
  "vtkVolumeRepresentationPreprocessor prepares data objects for volume\n"
  "rendering.  If the data object is a data set, then the set is passed\n"
  "through a vtkDataSetTriangleFilter before being output as a\n"
  "vtkUnstructuredGrid.  If the data object is a multiblock dataset with\n"
  "at least one unstructured grid leaf node, then the unstructured grid\n"
  "is extracted using vtkExtractBlock before being passed to the\n"
  "vtkDataSetTriangleFilter. If the multiblock dataset contains more\n"
  "than one unstructured grid, the ExtractedBlockIndex property may by\n"
  "set to indicate which unstructured grid to volume render.  The\n"
  "TetrahedraOnly property may be set and it will be passed to the\n"
  "vtkDataSetTriangleFilter.\n\n"
  "@sa\n"
  "vtkExtractBlock vtkTriangleFilter\n\n";


static PyObject *
PyvtkVolumeRepresentationPreprocessor_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkVolumeRepresentationPreprocessor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeRepresentationPreprocessor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRepresentationPreprocessor *op = static_cast<vtkVolumeRepresentationPreprocessor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVolumeRepresentationPreprocessor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeRepresentationPreprocessor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkVolumeRepresentationPreprocessor *tempr = vtkVolumeRepresentationPreprocessor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeRepresentationPreprocessor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRepresentationPreprocessor *op = static_cast<vtkVolumeRepresentationPreprocessor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVolumeRepresentationPreprocessor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVolumeRepresentationPreprocessor::NewInstance());

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
PyvtkVolumeRepresentationPreprocessor_SetTetrahedraOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetrahedraOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRepresentationPreprocessor *op = static_cast<vtkVolumeRepresentationPreprocessor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTetrahedraOnly(temp0);
    }
    else
    {
      op->vtkVolumeRepresentationPreprocessor::SetTetrahedraOnly(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeRepresentationPreprocessor_GetTetrahedraOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTetrahedraOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRepresentationPreprocessor *op = static_cast<vtkVolumeRepresentationPreprocessor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTetrahedraOnly() :
      op->vtkVolumeRepresentationPreprocessor::GetTetrahedraOnly());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeRepresentationPreprocessor_SetExtractedBlockIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractedBlockIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRepresentationPreprocessor *op = static_cast<vtkVolumeRepresentationPreprocessor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExtractedBlockIndex(temp0);
    }
    else
    {
      op->vtkVolumeRepresentationPreprocessor::SetExtractedBlockIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeRepresentationPreprocessor_GetExtractedBlockIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractedBlockIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRepresentationPreprocessor *op = static_cast<vtkVolumeRepresentationPreprocessor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtractedBlockIndex() :
      op->vtkVolumeRepresentationPreprocessor::GetExtractedBlockIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkVolumeRepresentationPreprocessor_Methods[] = {
  {"IsTypeOf", PyvtkVolumeRepresentationPreprocessor_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkVolumeRepresentationPreprocessor_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkVolumeRepresentationPreprocessor_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkVolumeRepresentationPreprocessor\nC++: static vtkVolumeRepresentationPreprocessor *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkVolumeRepresentationPreprocessor_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkVolumeRepresentationPreprocessor\nC++: vtkVolumeRepresentationPreprocessor *NewInstance()\n\n"},
  {"SetTetrahedraOnly", PyvtkVolumeRepresentationPreprocessor_SetTetrahedraOnly, METH_VARARGS,
   "V.SetTetrahedraOnly(int)\nC++: void SetTetrahedraOnly(int)\n\nWhen On, the internal triangle filter will cull all 1D and 2D\ncells from the output. The default is Off.\n"},
  {"GetTetrahedraOnly", PyvtkVolumeRepresentationPreprocessor_GetTetrahedraOnly, METH_VARARGS,
   "V.GetTetrahedraOnly() -> int\nC++: virtual int GetTetrahedraOnly()\n\nWhen On, the internal triangle filter will cull all 1D and 2D\ncells from the output. The default is Off.\n"},
  {"SetExtractedBlockIndex", PyvtkVolumeRepresentationPreprocessor_SetExtractedBlockIndex, METH_VARARGS,
   "V.SetExtractedBlockIndex(int)\nC++: void SetExtractedBlockIndex(int)\n\nSets which block will be extracted for volume rendering. Ignored\nif input is not multiblock.  Default is 0.\n"},
  {"GetExtractedBlockIndex", PyvtkVolumeRepresentationPreprocessor_GetExtractedBlockIndex, METH_VARARGS,
   "V.GetExtractedBlockIndex() -> int\nC++: virtual int GetExtractedBlockIndex()\n\nSets which block will be extracted for volume rendering. Ignored\nif input is not multiblock.  Default is 0.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkVolumeRepresentationPreprocessor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsRenderingPython.vtkVolumeRepresentationPreprocessor", // tp_name
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
  PyvtkVolumeRepresentationPreprocessor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkVolumeRepresentationPreprocessor_StaticNew()
{
  return vtkVolumeRepresentationPreprocessor::New();
}

PyObject *PyvtkVolumeRepresentationPreprocessor_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkVolumeRepresentationPreprocessor_Type, PyvtkVolumeRepresentationPreprocessor_Methods,
    "vtkVolumeRepresentationPreprocessor",
 &PyvtkVolumeRepresentationPreprocessor_StaticNew);

  PyTypeObject *pytype = &PyvtkVolumeRepresentationPreprocessor_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkUnstructuredGridAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkVolumeRepresentationPreprocessor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkVolumeRepresentationPreprocessor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkVolumeRepresentationPreprocessor", o) != 0)
  {
    Py_DECREF(o);
  }

}

