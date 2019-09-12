// python wrapper for vtkOBJImporter
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
#include "vtkOBJImporter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOBJImporter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkOBJImporter_ClassNew(); }

#ifndef DECLARED_PyvtkImporter_ClassNew
extern "C" { PyObject *PyvtkImporter_ClassNew(); }
#define DECLARED_PyvtkImporter_ClassNew
#endif

static const char *PyvtkOBJImporter_Doc =
  "vtkOBJImporter - import from .obj wavefront files\n\n"
  "Superclass: vtkImporter\n\n"
  "from Wavefront .obj & associated .mtl files.@par Thanks - Peter\n"
  "Karasev (Georgia Tech / Keysight Technologies Inc),:\n"
  "                  Allen Tannenbaum (SUNY Stonybrook), Patricio Vela\n"
  "(Georgia Tech)\n"
  "@sa\n"
  " vtkImporter\n\n";


static PyObject *
PyvtkOBJImporter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOBJImporter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOBJImporter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOBJImporter *op = static_cast<vtkOBJImporter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOBJImporter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOBJImporter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOBJImporter *tempr = vtkOBJImporter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOBJImporter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOBJImporter *op = static_cast<vtkOBJImporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOBJImporter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOBJImporter::NewInstance());

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
PyvtkOBJImporter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOBJImporter *op = static_cast<vtkOBJImporter *>(vp);

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
      op->vtkOBJImporter::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOBJImporter_SetFileNameMTL(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileNameMTL");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOBJImporter *op = static_cast<vtkOBJImporter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileNameMTL(temp0);
    }
    else
    {
      op->vtkOBJImporter::SetFileNameMTL(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOBJImporter_SetTexturePath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTexturePath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOBJImporter *op = static_cast<vtkOBJImporter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTexturePath(temp0);
    }
    else
    {
      op->vtkOBJImporter::SetTexturePath(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOBJImporter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOBJImporter *op = static_cast<vtkOBJImporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkOBJImporter::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOBJImporter_GetFileNameMTL(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileNameMTL");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOBJImporter *op = static_cast<vtkOBJImporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFileNameMTL() :
      op->vtkOBJImporter::GetFileNameMTL());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOBJImporter_GetTexturePath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTexturePath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOBJImporter *op = static_cast<vtkOBJImporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTexturePath() :
      op->vtkOBJImporter::GetTexturePath());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOBJImporter_GetOutputDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOBJImporter *op = static_cast<vtkOBJImporter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetOutputDescription(temp0) :
      op->vtkOBJImporter::GetOutputDescription(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkOBJImporter_Methods[] = {
  {"IsTypeOf", PyvtkOBJImporter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOBJImporter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOBJImporter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkOBJImporter\nC++: static vtkOBJImporter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOBJImporter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkOBJImporter\nC++: vtkOBJImporter *NewInstance()\n\n"},
  {"SetFileName", PyvtkOBJImporter_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: void SetFileName(const char *arg)\n\nSpecify the name of the file to read.\n"},
  {"SetFileNameMTL", PyvtkOBJImporter_SetFileNameMTL, METH_VARARGS,
   "V.SetFileNameMTL(string)\nC++: void SetFileNameMTL(const char *arg)\n\nSpecify the name of the file to read.\n"},
  {"SetTexturePath", PyvtkOBJImporter_SetTexturePath, METH_VARARGS,
   "V.SetTexturePath(string)\nC++: void SetTexturePath(const char *path)\n\nSpecify the name of the file to read.\n"},
  {"GetFileName", PyvtkOBJImporter_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: const char *GetFileName()\n\nSpecify the name of the file to read.\n"},
  {"GetFileNameMTL", PyvtkOBJImporter_GetFileNameMTL, METH_VARARGS,
   "V.GetFileNameMTL() -> string\nC++: const char *GetFileNameMTL()\n\nSpecify the name of the file to read.\n"},
  {"GetTexturePath", PyvtkOBJImporter_GetTexturePath, METH_VARARGS,
   "V.GetTexturePath() -> string\nC++: const char *GetTexturePath()\n\nSpecify the name of the file to read.\n"},
  {"GetOutputDescription", PyvtkOBJImporter_GetOutputDescription, METH_VARARGS,
   "V.GetOutputDescription(int) -> string\nC++: std::string GetOutputDescription(int idx)\n\nGet a string describing an output\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkOBJImporter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOImportPython.vtkOBJImporter", // tp_name
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
  PyvtkOBJImporter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOBJImporter_StaticNew()
{
  return vtkOBJImporter::New();
}

PyObject *PyvtkOBJImporter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkOBJImporter_Type, PyvtkOBJImporter_Methods,
    "vtkOBJImporter",
 &PyvtkOBJImporter_StaticNew);

  PyTypeObject *pytype = &PyvtkOBJImporter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImporter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOBJImporter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOBJImporter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOBJImporter", o) != 0)
  {
    Py_DECREF(o);
  }

}

