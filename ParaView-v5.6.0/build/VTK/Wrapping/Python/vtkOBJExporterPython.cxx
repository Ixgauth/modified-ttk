// python wrapper for vtkOBJExporter
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
#include "vtkOBJExporter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOBJExporter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkOBJExporter_ClassNew(); }

#ifndef DECLARED_PyvtkExporter_ClassNew
extern "C" { PyObject *PyvtkExporter_ClassNew(); }
#define DECLARED_PyvtkExporter_ClassNew
#endif

static const char *PyvtkOBJExporter_Doc =
  "vtkOBJExporter - export a scene into Wavefront format.\n\n"
  "Superclass: vtkExporter\n\n"
  "vtkOBJExporter is a concrete subclass of vtkExporter that writes\n"
  "wavefront .OBJ files in ASCII form. It also writes out a mtl file\n"
  "that contains the material properties. The filenames are derived by\n"
  "appending the .obj and .mtl suffix onto the user specified\n"
  "FilePrefix.\n\n"
  "@sa\n"
  "vtkExporter\n\n";


static PyObject *
PyvtkOBJExporter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOBJExporter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOBJExporter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOBJExporter *op = static_cast<vtkOBJExporter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOBJExporter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOBJExporter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOBJExporter *tempr = vtkOBJExporter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOBJExporter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOBJExporter *op = static_cast<vtkOBJExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOBJExporter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOBJExporter::NewInstance());

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
PyvtkOBJExporter_SetFilePrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFilePrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOBJExporter *op = static_cast<vtkOBJExporter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFilePrefix(temp0);
    }
    else
    {
      op->vtkOBJExporter::SetFilePrefix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOBJExporter_GetFilePrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilePrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOBJExporter *op = static_cast<vtkOBJExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFilePrefix() :
      op->vtkOBJExporter::GetFilePrefix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOBJExporter_SetOBJFileComment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOBJFileComment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOBJExporter *op = static_cast<vtkOBJExporter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOBJFileComment(temp0);
    }
    else
    {
      op->vtkOBJExporter::SetOBJFileComment(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOBJExporter_GetOBJFileComment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOBJFileComment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOBJExporter *op = static_cast<vtkOBJExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetOBJFileComment() :
      op->vtkOBJExporter::GetOBJFileComment());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOBJExporter_SetMTLFileComment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMTLFileComment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOBJExporter *op = static_cast<vtkOBJExporter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMTLFileComment(temp0);
    }
    else
    {
      op->vtkOBJExporter::SetMTLFileComment(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOBJExporter_GetMTLFileComment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTLFileComment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOBJExporter *op = static_cast<vtkOBJExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetMTLFileComment() :
      op->vtkOBJExporter::GetMTLFileComment());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkOBJExporter_Methods[] = {
  {"IsTypeOf", PyvtkOBJExporter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOBJExporter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOBJExporter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkOBJExporter\nC++: static vtkOBJExporter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOBJExporter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkOBJExporter\nC++: vtkOBJExporter *NewInstance()\n\n"},
  {"SetFilePrefix", PyvtkOBJExporter_SetFilePrefix, METH_VARARGS,
   "V.SetFilePrefix(string)\nC++: virtual void SetFilePrefix(const char *_arg)\n\nSpecify the prefix of the files to write out. The resulting\nfilenames will have .obj and .mtl appended to them.\n"},
  {"GetFilePrefix", PyvtkOBJExporter_GetFilePrefix, METH_VARARGS,
   "V.GetFilePrefix() -> string\nC++: virtual char *GetFilePrefix()\n\nSpecify the prefix of the files to write out. The resulting\nfilenames will have .obj and .mtl appended to them.\n"},
  {"SetOBJFileComment", PyvtkOBJExporter_SetOBJFileComment, METH_VARARGS,
   "V.SetOBJFileComment(string)\nC++: virtual void SetOBJFileComment(const char *_arg)\n\nSpecify comment string that will be written to the obj file\nheader.\n"},
  {"GetOBJFileComment", PyvtkOBJExporter_GetOBJFileComment, METH_VARARGS,
   "V.GetOBJFileComment() -> string\nC++: virtual char *GetOBJFileComment()\n\nSpecify comment string that will be written to the obj file\nheader.\n"},
  {"SetMTLFileComment", PyvtkOBJExporter_SetMTLFileComment, METH_VARARGS,
   "V.SetMTLFileComment(string)\nC++: virtual void SetMTLFileComment(const char *_arg)\n\nSpecify comment string that will be written to the mtl file\nheader.\n"},
  {"GetMTLFileComment", PyvtkOBJExporter_GetMTLFileComment, METH_VARARGS,
   "V.GetMTLFileComment() -> string\nC++: virtual char *GetMTLFileComment()\n\nSpecify comment string that will be written to the mtl file\nheader.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkOBJExporter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOExportPython.vtkOBJExporter", // tp_name
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
  PyvtkOBJExporter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOBJExporter_StaticNew()
{
  return vtkOBJExporter::New();
}

PyObject *PyvtkOBJExporter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkOBJExporter_Type, PyvtkOBJExporter_Methods,
    "vtkOBJExporter",
 &PyvtkOBJExporter_StaticNew);

  PyTypeObject *pytype = &PyvtkOBJExporter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkExporter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOBJExporter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOBJExporter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOBJExporter", o) != 0)
  {
    Py_DECREF(o);
  }

}

