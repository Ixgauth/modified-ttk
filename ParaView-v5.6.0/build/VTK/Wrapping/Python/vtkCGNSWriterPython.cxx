// python wrapper for vtkCGNSWriter
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
#include "vtkCGNSWriter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCGNSWriter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCGNSWriter_ClassNew(); }

#ifndef DECLARED_PyvtkWriter_ClassNew
extern "C" { PyObject *PyvtkWriter_ClassNew(); }
#define DECLARED_PyvtkWriter_ClassNew
#endif

static const char *PyvtkCGNSWriter_Doc =
  "vtkCGNSWriter - Writes CGNS files\n\n"
  "Superclass: vtkWriter\n\n"
  "This writer writes (composite) datasets that may consist of\n"
  "- vtkStructuredGrid\n"
  "- vtkUnstructuredGrid\n"
  "- vtkPolydata\n"
  "- vtkMultiBlockDataSet\n"
  "- vtkMultiPieceDataSet (currenly not implemented)\n\n";


static PyObject *
PyvtkCGNSWriter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCGNSWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSWriter *op = static_cast<vtkCGNSWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCGNSWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCGNSWriter *tempr = vtkCGNSWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSWriter *op = static_cast<vtkCGNSWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCGNSWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCGNSWriter::NewInstance());

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
PyvtkCGNSWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSWriter *op = static_cast<vtkCGNSWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileName(temp0);
    }
    else
    {
      op->vtkCGNSWriter::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSWriter *op = static_cast<vtkCGNSWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkCGNSWriter::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSWriter_UseHDF5On(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseHDF5On");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSWriter *op = static_cast<vtkCGNSWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseHDF5On();
    }
    else
    {
      op->vtkCGNSWriter::UseHDF5On();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSWriter_UseHDF5Off(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseHDF5Off");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSWriter *op = static_cast<vtkCGNSWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseHDF5Off();
    }
    else
    {
      op->vtkCGNSWriter::UseHDF5Off();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSWriter_SetUseHDF5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseHDF5");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSWriter *op = static_cast<vtkCGNSWriter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseHDF5(temp0);
    }
    else
    {
      op->vtkCGNSWriter::SetUseHDF5(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCGNSWriter_Methods[] = {
  {"IsTypeOf", PyvtkCGNSWriter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCGNSWriter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCGNSWriter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCGNSWriter\nC++: static vtkCGNSWriter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCGNSWriter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCGNSWriter\nC++: vtkCGNSWriter *NewInstance()\n\n"},
  {"SetFileName", PyvtkCGNSWriter_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *_arg)\n\nName for the output file.  If writing in parallel, the number of\nprocesses and the process rank will be appended to the name, so\neach process is writing out a separate file. If not set, this\nclass will make up a file name.\n"},
  {"GetFileName", PyvtkCGNSWriter_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\n"},
  {"UseHDF5On", PyvtkCGNSWriter_UseHDF5On, METH_VARARGS,
   "V.UseHDF5On()\nC++: virtual void UseHDF5On()\n\n"},
  {"UseHDF5Off", PyvtkCGNSWriter_UseHDF5Off, METH_VARARGS,
   "V.UseHDF5Off()\nC++: virtual void UseHDF5Off()\n\n"},
  {"SetUseHDF5", PyvtkCGNSWriter_SetUseHDF5, METH_VARARGS,
   "V.SetUseHDF5(bool)\nC++: void SetUseHDF5(bool)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCGNSWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsCGNSWriterPython.vtkCGNSWriter", // tp_name
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
  PyvtkCGNSWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCGNSWriter_StaticNew()
{
  return vtkCGNSWriter::New();
}

PyObject *PyvtkCGNSWriter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCGNSWriter_Type, PyvtkCGNSWriter_Methods,
    "vtkCGNSWriter",
 &PyvtkCGNSWriter_StaticNew);

  PyTypeObject *pytype = &PyvtkCGNSWriter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkWriter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCGNSWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCGNSWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCGNSWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

