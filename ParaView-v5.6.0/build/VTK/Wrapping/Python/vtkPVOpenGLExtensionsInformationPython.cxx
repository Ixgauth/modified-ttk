// python wrapper for vtkPVOpenGLExtensionsInformation
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
#include "vtkPVOpenGLExtensionsInformation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVOpenGLExtensionsInformation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVOpenGLExtensionsInformation_ClassNew(); }

#ifndef DECLARED_PyvtkPVInformation_ClassNew
extern "C" { PyObject *PyvtkPVInformation_ClassNew(); }
#define DECLARED_PyvtkPVInformation_ClassNew
#endif

static const char *PyvtkPVOpenGLExtensionsInformation_Doc =
  "vtkPVOpenGLExtensionsInformation - Information object to obtain\ninformation about OpenGL extensions.\n\n"
  "Superclass: vtkPVInformation\n\n"
  "Information object that can be used to obtain OpenGL extension\n"
  "information. The object from which the information is obtained should\n"
  "be a render window.\n\n"
  "@deprecated in ParaView 5.5. The information is now indirectly\n"
  "available via vtkPVOpenGLInformation. See\n"
  "`vtkPVOpenGLInformation::GetCapabilities`.\n\n";


static PyObject *
PyvtkPVOpenGLExtensionsInformation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVOpenGLExtensionsInformation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVOpenGLExtensionsInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOpenGLExtensionsInformation *op = static_cast<vtkPVOpenGLExtensionsInformation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVOpenGLExtensionsInformation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVOpenGLExtensionsInformation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVOpenGLExtensionsInformation *tempr = vtkPVOpenGLExtensionsInformation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVOpenGLExtensionsInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOpenGLExtensionsInformation *op = static_cast<vtkPVOpenGLExtensionsInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVOpenGLExtensionsInformation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVOpenGLExtensionsInformation::NewInstance());

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
PyvtkPVOpenGLExtensionsInformation_CopyFromObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOpenGLExtensionsInformation *op = static_cast<vtkPVOpenGLExtensionsInformation *>(vp);

  vtkObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
  {
    if (ap.IsBound())
    {
      op->CopyFromObject(temp0);
    }
    else
    {
      op->vtkPVOpenGLExtensionsInformation::CopyFromObject(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVOpenGLExtensionsInformation_ExtensionSupported(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtensionSupported");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOpenGLExtensionsInformation *op = static_cast<vtkPVOpenGLExtensionsInformation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->ExtensionSupported(temp0) :
      op->vtkPVOpenGLExtensionsInformation::ExtensionSupported(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVOpenGLExtensionsInformation_AddInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOpenGLExtensionsInformation *op = static_cast<vtkPVOpenGLExtensionsInformation *>(vp);

  vtkPVInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVInformation"))
  {
    if (ap.IsBound())
    {
      op->AddInformation(temp0);
    }
    else
    {
      op->vtkPVOpenGLExtensionsInformation::AddInformation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVOpenGLExtensionsInformation_Methods[] = {
  {"IsTypeOf", PyvtkPVOpenGLExtensionsInformation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVOpenGLExtensionsInformation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVOpenGLExtensionsInformation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVOpenGLExtensionsInformation\nC++: static vtkPVOpenGLExtensionsInformation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVOpenGLExtensionsInformation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVOpenGLExtensionsInformation\nC++: vtkPVOpenGLExtensionsInformation *NewInstance()\n\n"},
  {"CopyFromObject", PyvtkPVOpenGLExtensionsInformation_CopyFromObject, METH_VARARGS,
   "V.CopyFromObject(vtkObject)\nC++: void CopyFromObject(vtkObject *) override;\n\nTransfer information about a single object into this object.\n"},
  {"ExtensionSupported", PyvtkPVOpenGLExtensionsInformation_ExtensionSupported, METH_VARARGS,
   "V.ExtensionSupported(string) -> bool\nC++: bool ExtensionSupported(const char *ext)\n\nReturns if the given extension is supported.\n"},
  {"AddInformation", PyvtkPVOpenGLExtensionsInformation_AddInformation, METH_VARARGS,
   "V.AddInformation(vtkPVInformation)\nC++: void AddInformation(vtkPVInformation *) override;\n\nMerge another information object.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVOpenGLExtensionsInformation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkPVOpenGLExtensionsInformation", // tp_name
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
  PyvtkPVOpenGLExtensionsInformation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVOpenGLExtensionsInformation_StaticNew()
{
  return vtkPVOpenGLExtensionsInformation::New();
}

PyObject *PyvtkPVOpenGLExtensionsInformation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVOpenGLExtensionsInformation_Type, PyvtkPVOpenGLExtensionsInformation_Methods,
    "vtkPVOpenGLExtensionsInformation",
 &PyvtkPVOpenGLExtensionsInformation_StaticNew);

  PyTypeObject *pytype = &PyvtkPVOpenGLExtensionsInformation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPVInformation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVOpenGLExtensionsInformation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVOpenGLExtensionsInformation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVOpenGLExtensionsInformation", o) != 0)
  {
    Py_DECREF(o);
  }

}

