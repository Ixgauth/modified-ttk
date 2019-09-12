// python wrapper for vtkXMLHierarchicalBoxDataReader
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
#include "vtkXMLHierarchicalBoxDataReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkXMLHierarchicalBoxDataReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkXMLHierarchicalBoxDataReader_ClassNew(); }

#ifndef DECLARED_PyvtkXMLUniformGridAMRReader_ClassNew
extern "C" { PyObject *PyvtkXMLUniformGridAMRReader_ClassNew(); }
#define DECLARED_PyvtkXMLUniformGridAMRReader_ClassNew
#endif

static const char *PyvtkXMLHierarchicalBoxDataReader_Doc =
  "vtkXMLHierarchicalBoxDataReader - Reader for hierarchical datasets\n(for backwards compatibility).\n\n"
  "Superclass: vtkXMLUniformGridAMRReader\n\n"
  "vtkXMLHierarchicalBoxDataReader is an empty subclass of\n"
  "vtkXMLUniformGridAMRReader. This is only for backwards compatibility.\n"
  "Newer code should simply use vtkXMLUniformGridAMRReader.\n\n"
  "@warning\n"
  "The reader supports reading v1.1 and above. For older versions, use\n"
  "vtkXMLHierarchicalBoxDataFileConverter.\n\n";


static PyObject *
PyvtkXMLHierarchicalBoxDataReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkXMLHierarchicalBoxDataReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLHierarchicalBoxDataReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHierarchicalBoxDataReader *op = static_cast<vtkXMLHierarchicalBoxDataReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLHierarchicalBoxDataReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLHierarchicalBoxDataReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkXMLHierarchicalBoxDataReader *tempr = vtkXMLHierarchicalBoxDataReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLHierarchicalBoxDataReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHierarchicalBoxDataReader *op = static_cast<vtkXMLHierarchicalBoxDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXMLHierarchicalBoxDataReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLHierarchicalBoxDataReader::NewInstance());

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

static PyMethodDef PyvtkXMLHierarchicalBoxDataReader_Methods[] = {
  {"IsTypeOf", PyvtkXMLHierarchicalBoxDataReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkXMLHierarchicalBoxDataReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkXMLHierarchicalBoxDataReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkXMLHierarchicalBoxDataReader\nC++: static vtkXMLHierarchicalBoxDataReader *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkXMLHierarchicalBoxDataReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkXMLHierarchicalBoxDataReader\nC++: vtkXMLHierarchicalBoxDataReader *NewInstance()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkXMLHierarchicalBoxDataReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOXMLPython.vtkXMLHierarchicalBoxDataReader", // tp_name
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
  PyvtkXMLHierarchicalBoxDataReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkXMLHierarchicalBoxDataReader_StaticNew()
{
  return vtkXMLHierarchicalBoxDataReader::New();
}

PyObject *PyvtkXMLHierarchicalBoxDataReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkXMLHierarchicalBoxDataReader_Type, PyvtkXMLHierarchicalBoxDataReader_Methods,
    "vtkXMLHierarchicalBoxDataReader",
 &PyvtkXMLHierarchicalBoxDataReader_StaticNew);

  PyTypeObject *pytype = &PyvtkXMLHierarchicalBoxDataReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkXMLUniformGridAMRReader_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkXMLHierarchicalBoxDataReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkXMLHierarchicalBoxDataReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkXMLHierarchicalBoxDataReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

