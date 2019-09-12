// python wrapper for vtkGESignaReader
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
#include "vtkGESignaReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGESignaReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkGESignaReader_ClassNew(); }

#ifndef DECLARED_PyvtkMedicalImageReader2_ClassNew
extern "C" { PyObject *PyvtkMedicalImageReader2_ClassNew(); }
#define DECLARED_PyvtkMedicalImageReader2_ClassNew
#endif

static const char *PyvtkGESignaReader_Doc =
  "vtkGESignaReader - read GE Signa ximg files\n\n"
  "Superclass: vtkMedicalImageReader2\n\n"
  "vtkGESignaReader is a source object that reads some GE Signa ximg\n"
  "files It does support reading in pixel spacing, slice spacing and it\n"
  "computes an origin for the image in millimeters. It always produces\n"
  "greyscale unsigned short data and it supports reading in rectangular,\n"
  "packed, compressed, and packed&compressed. It does not read in slice\n"
  "orientation, or position right now. To use it you just need to\n"
  "specify a filename or a file prefix and pattern.\n\n"
  "@sa\n"
  "vtkImageReader2\n\n";


static PyObject *
PyvtkGESignaReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGESignaReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGESignaReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGESignaReader *op = static_cast<vtkGESignaReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGESignaReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGESignaReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGESignaReader *tempr = vtkGESignaReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGESignaReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGESignaReader *op = static_cast<vtkGESignaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGESignaReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGESignaReader::NewInstance());

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
PyvtkGESignaReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGESignaReader *op = static_cast<vtkGESignaReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->CanReadFile(temp0) :
      op->vtkGESignaReader::CanReadFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGESignaReader_GetFileExtensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileExtensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGESignaReader *op = static_cast<vtkGESignaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFileExtensions() :
      op->vtkGESignaReader::GetFileExtensions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGESignaReader_GetDescriptiveName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescriptiveName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGESignaReader *op = static_cast<vtkGESignaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDescriptiveName() :
      op->vtkGESignaReader::GetDescriptiveName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGESignaReader_Methods[] = {
  {"IsTypeOf", PyvtkGESignaReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGESignaReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGESignaReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkGESignaReader\nC++: static vtkGESignaReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGESignaReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkGESignaReader\nC++: vtkGESignaReader *NewInstance()\n\n"},
  {"CanReadFile", PyvtkGESignaReader_CanReadFile, METH_VARARGS,
   "V.CanReadFile(string) -> int\nC++: int CanReadFile(const char *fname) override;\n\nIs the given file a GESigna file?\n"},
  {"GetFileExtensions", PyvtkGESignaReader_GetFileExtensions, METH_VARARGS,
   "V.GetFileExtensions() -> string\nC++: const char *GetFileExtensions() override;\n\nValid extentsions\n"},
  {"GetDescriptiveName", PyvtkGESignaReader_GetDescriptiveName, METH_VARARGS,
   "V.GetDescriptiveName() -> string\nC++: const char *GetDescriptiveName() override;\n\nA descriptive name for this format\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkGESignaReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOImagePython.vtkGESignaReader", // tp_name
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
  PyvtkGESignaReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGESignaReader_StaticNew()
{
  return vtkGESignaReader::New();
}

PyObject *PyvtkGESignaReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkGESignaReader_Type, PyvtkGESignaReader_Methods,
    "vtkGESignaReader",
 &PyvtkGESignaReader_StaticNew);

  PyTypeObject *pytype = &PyvtkGESignaReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkMedicalImageReader2_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGESignaReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGESignaReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGESignaReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

