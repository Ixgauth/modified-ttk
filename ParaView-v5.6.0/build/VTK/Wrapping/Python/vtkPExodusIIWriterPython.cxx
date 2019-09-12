// python wrapper for vtkPExodusIIWriter
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
#include "vtkPExodusIIWriter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPExodusIIWriter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPExodusIIWriter_ClassNew(); }

#ifndef DECLARED_PyvtkExodusIIWriter_ClassNew
extern "C" { PyObject *PyvtkExodusIIWriter_ClassNew(); }
#define DECLARED_PyvtkExodusIIWriter_ClassNew
#endif

static const char *PyvtkPExodusIIWriter_Doc =
  "vtkPExodusIIWriter - Write Exodus II files\n\n"
  "Superclass: vtkExodusIIWriter\n\n"
  "This is a vtkWriter that writes it's vtkUnstructuredGrid\n"
  "    input out to an Exodus II file.  Go to\n"
  "http://endo.sandia.gov/SEACAS/\n"
  "    for more information about the Exodus II format.\n\n\n"
  "    Exodus files contain much information that is not captured\n"
  "    in a vtkUnstructuredGrid, such as time steps, information\n"
  "    lines, node sets, and side sets.  This information can be\n"
  "    stored in a vtkModelMetadata object.\n\n\n"
  "    The vtkExodusReader and vtkPExodusReader can create\n"
  "    a vtkModelMetadata object and embed it in a vtkUnstructuredGrid\n"
  "    in a series of field arrays.  This writer searches for these\n"
  "    field arrays and will use the metadata contained in them\n"
  "    when creating the new Exodus II file.\n\n\n"
  "    You can also explicitly give the vtkExodusIIWriter a\n"
  "    vtkModelMetadata object to use when writing the file.\n\n\n"
  "    In the absence of the information provided by vtkModelMetadata,\n"
  "    if this writer is not part of a parallel application, we will use\n"
  "    reasonable defaults for all the values in the output Exodus file.\n"
  "    If you don't provide a block ID element array, we'll create a\n"
  "    block for each cell type that appears in the unstructured grid.\n\n\n"
  "    However if this writer is part of a parallel application (hence\n"
  "    writing out a distributed Exodus file), then we need at the very\n"
  "    least a list of all the block IDs that appear in the file.  And\n"
  "    we need the element array of block IDs for the input unstructured\n"
  "grid.\n\n\n"
  "    In the absence of a vtkModelMetadata object, you can also provide\n"
  "    time step information which we will include in the output Exodus\n"
  "    file.\n\n"
  "@warning\n"
  "    If the input floating point field arrays and point locations are\n"
  "all\n"
  "    floats or all doubles, this class will operate more efficiently.\n"
  "    Mixing floats and doubles will slow you down, because Exodus II\n"
  "    requires that we write only floats or only doubles.\n\n"
  "@warning\n"
  "    We use the terms \"point\" and \"node\" interchangeably.\n"
  "    Also, we use the terms \"element\" and \"cell\" interchangeably.\n\n";


static PyObject *
PyvtkPExodusIIWriter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPExodusIIWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPExodusIIWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIWriter *op = static_cast<vtkPExodusIIWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPExodusIIWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPExodusIIWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPExodusIIWriter *tempr = vtkPExodusIIWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPExodusIIWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusIIWriter *op = static_cast<vtkPExodusIIWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPExodusIIWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPExodusIIWriter::NewInstance());

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

static PyMethodDef PyvtkPExodusIIWriter_Methods[] = {
  {"IsTypeOf", PyvtkPExodusIIWriter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPExodusIIWriter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPExodusIIWriter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPExodusIIWriter\nC++: static vtkPExodusIIWriter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPExodusIIWriter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPExodusIIWriter\nC++: vtkPExodusIIWriter *NewInstance()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPExodusIIWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOParallelExodusPython.vtkPExodusIIWriter", // tp_name
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
  PyvtkPExodusIIWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPExodusIIWriter_StaticNew()
{
  return vtkPExodusIIWriter::New();
}

PyObject *PyvtkPExodusIIWriter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPExodusIIWriter_Type, PyvtkPExodusIIWriter_Methods,
    "vtkPExodusIIWriter",
 &PyvtkPExodusIIWriter_StaticNew);

  PyTypeObject *pytype = &PyvtkPExodusIIWriter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkExodusIIWriter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPExodusIIWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPExodusIIWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPExodusIIWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

