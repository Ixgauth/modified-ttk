// python wrapper for vtkPVMaterialLibrary
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
#include "vtkPVMaterialLibrary.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVMaterialLibrary(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVMaterialLibrary_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkPVMaterialLibrary_Doc =
  "vtkPVMaterialLibrary - manages visual material definitions\n\n"
  "Superclass: vtkObject\n\n"
  "vtkPVMaterialLibrary helps ParaView to load visual material\n"
  "definition files from known, generally process relative, locations on\n"
  "the sever.\n\n";


static PyObject *
PyvtkPVMaterialLibrary_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVMaterialLibrary::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVMaterialLibrary_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMaterialLibrary *op = static_cast<vtkPVMaterialLibrary *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVMaterialLibrary::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVMaterialLibrary_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVMaterialLibrary *tempr = vtkPVMaterialLibrary::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVMaterialLibrary_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMaterialLibrary *op = static_cast<vtkPVMaterialLibrary *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVMaterialLibrary *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVMaterialLibrary::NewInstance());

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
PyvtkPVMaterialLibrary_ReadRelativeFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadRelativeFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMaterialLibrary *op = static_cast<vtkPVMaterialLibrary *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ReadRelativeFile(temp0);
    }
    else
    {
      op->vtkPVMaterialLibrary::ReadRelativeFile(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVMaterialLibrary_GetSearchPaths(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSearchPaths");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMaterialLibrary *op = static_cast<vtkPVMaterialLibrary *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetSearchPaths() :
      op->vtkPVMaterialLibrary::GetSearchPaths());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVMaterialLibrary_GetMaterialLibrary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaterialLibrary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMaterialLibrary *op = static_cast<vtkPVMaterialLibrary *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkObject *tempr = (ap.IsBound() ?
      op->GetMaterialLibrary() :
      op->vtkPVMaterialLibrary::GetMaterialLibrary());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVMaterialLibrary_ReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMaterialLibrary *op = static_cast<vtkPVMaterialLibrary *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->ReadFile(temp0) :
      op->vtkPVMaterialLibrary::ReadFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVMaterialLibrary_WriteBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMaterialLibrary *op = static_cast<vtkPVMaterialLibrary *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->WriteBuffer() :
      op->vtkPVMaterialLibrary::WriteBuffer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVMaterialLibrary_ReadBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMaterialLibrary *op = static_cast<vtkPVMaterialLibrary *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->ReadBuffer(temp0) :
      op->vtkPVMaterialLibrary::ReadBuffer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVMaterialLibrary_Methods[] = {
  {"IsTypeOf", PyvtkPVMaterialLibrary_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVMaterialLibrary_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVMaterialLibrary_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVMaterialLibrary\nC++: static vtkPVMaterialLibrary *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVMaterialLibrary_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVMaterialLibrary\nC++: vtkPVMaterialLibrary *NewInstance()\n\n"},
  {"ReadRelativeFile", PyvtkPVMaterialLibrary_ReadRelativeFile, METH_VARARGS,
   "V.ReadRelativeFile(string)\nC++: void ReadRelativeFile(const char *FileName)\n\nUnlike vtkOSPRayMaterial::ReadFile, this searches in a number of\nrelative and environmental paths specified by the SearchPaths\nmember variable.\n"},
  {"GetSearchPaths", PyvtkPVMaterialLibrary_GetSearchPaths, METH_VARARGS,
   "V.GetSearchPaths() -> string\nC++: virtual char *GetSearchPaths()\n\nGet a string of standard search paths (path1;path2;path3) search\npaths are based on PV_PLUGIN_PATH, plugin dir relative to\nexecutable.\n"},
  {"GetMaterialLibrary", PyvtkPVMaterialLibrary_GetMaterialLibrary, METH_VARARGS,
   "V.GetMaterialLibrary() -> vtkObject\nC++: vtkObject *GetMaterialLibrary()\n\nReturns the underlying material library. When compiled withouth\nOSPRAY, will return nullptr\n"},
  {"ReadFile", PyvtkPVMaterialLibrary_ReadFile, METH_VARARGS,
   "V.ReadFile(string) -> bool\nC++: bool ReadFile(const char *FileName)\n\nDefer to contained MaterialLibrary\n"},
  {"WriteBuffer", PyvtkPVMaterialLibrary_WriteBuffer, METH_VARARGS,
   "V.WriteBuffer() -> string\nC++: const char *WriteBuffer()\n\nDefer to contained MaterialLibrary\n"},
  {"ReadBuffer", PyvtkPVMaterialLibrary_ReadBuffer, METH_VARARGS,
   "V.ReadBuffer(string) -> bool\nC++: bool ReadBuffer(const char *)\n\nDefer to contained MaterialLibrary\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVMaterialLibrary_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkPVMaterialLibrary", // tp_name
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
  PyvtkPVMaterialLibrary_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVMaterialLibrary_StaticNew()
{
  return vtkPVMaterialLibrary::New();
}

PyObject *PyvtkPVMaterialLibrary_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVMaterialLibrary_Type, PyvtkPVMaterialLibrary_Methods,
    "vtkPVMaterialLibrary",
 &PyvtkPVMaterialLibrary_StaticNew);

  PyTypeObject *pytype = &PyvtkPVMaterialLibrary_Type;

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

void PyVTKAddFile_vtkPVMaterialLibrary(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVMaterialLibrary_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVMaterialLibrary", o) != 0)
  {
    Py_DECREF(o);
  }

}

