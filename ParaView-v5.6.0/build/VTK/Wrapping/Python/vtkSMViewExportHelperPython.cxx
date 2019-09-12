// python wrapper for vtkSMViewExportHelper
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
#include "vtkStdString.h"
#include "vtkSMViewExportHelper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMViewExportHelper(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMViewExportHelper_ClassNew(); }

#ifndef DECLARED_PyvtkSMObject_ClassNew
extern "C" { PyObject *PyvtkSMObject_ClassNew(); }
#define DECLARED_PyvtkSMObject_ClassNew
#endif

static const char *PyvtkSMViewExportHelper_Doc =
  "vtkSMViewExportHelper - helper class to export views.\n\n"
  "Superclass: vtkSMObject\n\n"
  "vtkSMViewExportHelper is a helper class to aid in exporting views.\n"
  "You can create instances of this helper on-demand to query available\n"
  "exporters and create and exporter proxy (in same spirit as\n"
  "vtkSMWriterFactory, except that there's no globally existing\n"
  "instance).\n\n";


static PyObject *
PyvtkSMViewExportHelper_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMViewExportHelper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewExportHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewExportHelper *op = static_cast<vtkSMViewExportHelper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMViewExportHelper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewExportHelper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMViewExportHelper *tempr = vtkSMViewExportHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewExportHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewExportHelper *op = static_cast<vtkSMViewExportHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMViewExportHelper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMViewExportHelper::NewInstance());

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
PyvtkSMViewExportHelper_GetSupportedFileTypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSupportedFileTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewExportHelper *op = static_cast<vtkSMViewExportHelper *>(vp);

  vtkSMViewProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMViewProxy"))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetSupportedFileTypes(temp0) :
      op->vtkSMViewExportHelper::GetSupportedFileTypes(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewExportHelper_CreateExporter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateExporter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewExportHelper *op = static_cast<vtkSMViewExportHelper *>(vp);

  const char *temp0 = nullptr;
  vtkSMViewProxy *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMViewProxy"))
  {
    vtkSMExporterProxy *tempr = (ap.IsBound() ?
      op->CreateExporter(temp0, temp1) :
      op->vtkSMViewExportHelper::CreateExporter(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMViewExportHelper_Methods[] = {
  {"IsTypeOf", PyvtkSMViewExportHelper_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMViewExportHelper_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMViewExportHelper_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMViewExportHelper\nC++: static vtkSMViewExportHelper *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMViewExportHelper_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMViewExportHelper\nC++: vtkSMViewExportHelper *NewInstance()\n\n"},
  {"GetSupportedFileTypes", PyvtkSMViewExportHelper_GetSupportedFileTypes, METH_VARARGS,
   "V.GetSupportedFileTypes(vtkSMViewProxy) -> string\nC++: virtual vtkStdString GetSupportedFileTypes(\n    vtkSMViewProxy *view)\n\nReturns a formatted string with all supported file types for the\ngiven view. An example returned string would look like:\n \"PVD Files (*.pvd);;VTK Files (*.vtk)\"\n \n"},
  {"CreateExporter", PyvtkSMViewExportHelper_CreateExporter, METH_VARARGS,
   "V.CreateExporter(string, vtkSMViewProxy) -> vtkSMExporterProxy\nC++: virtual vtkSMExporterProxy *CreateExporter(\n    const char *filename, vtkSMViewProxy *)\n\nExports the view to the given output file. Returns a new exporter\ninstance (or NULL). Caller must release the returned object\nexplicitly.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMViewExportHelper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerDefaultPython.vtkSMViewExportHelper", // tp_name
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
  PyvtkSMViewExportHelper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMViewExportHelper_StaticNew()
{
  return vtkSMViewExportHelper::New();
}

PyObject *PyvtkSMViewExportHelper_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMViewExportHelper_Type, PyvtkSMViewExportHelper_Methods,
    "vtkSMViewExportHelper",
 &PyvtkSMViewExportHelper_StaticNew);

  PyTypeObject *pytype = &PyvtkSMViewExportHelper_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMViewExportHelper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMViewExportHelper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMViewExportHelper", o) != 0)
  {
    Py_DECREF(o);
  }

}

