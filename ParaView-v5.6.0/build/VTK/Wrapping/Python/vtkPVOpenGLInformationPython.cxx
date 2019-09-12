// python wrapper for vtkPVOpenGLInformation
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
#include "vtkPVOpenGLInformation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVOpenGLInformation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVOpenGLInformation_ClassNew(); }

#ifndef DECLARED_PyvtkPVInformation_ClassNew
extern "C" { PyObject *PyvtkPVInformation_ClassNew(); }
#define DECLARED_PyvtkPVInformation_ClassNew
#endif

static const char *PyvtkPVOpenGLInformation_Doc =
  "vtkPVOpenGLInformation - Gets OpenGL information.\n\n"
  "Superclass: vtkPVInformation\n\n"
  "Get details of OpenGL from the render server.\n\n";


static PyObject *
PyvtkPVOpenGLInformation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVOpenGLInformation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVOpenGLInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOpenGLInformation *op = static_cast<vtkPVOpenGLInformation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVOpenGLInformation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVOpenGLInformation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVOpenGLInformation *tempr = vtkPVOpenGLInformation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVOpenGLInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOpenGLInformation *op = static_cast<vtkPVOpenGLInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVOpenGLInformation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVOpenGLInformation::NewInstance());

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
PyvtkPVOpenGLInformation_CopyFromObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOpenGLInformation *op = static_cast<vtkPVOpenGLInformation *>(vp);

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
      op->vtkPVOpenGLInformation::CopyFromObject(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVOpenGLInformation_AddInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOpenGLInformation *op = static_cast<vtkPVOpenGLInformation *>(vp);

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
      op->vtkPVOpenGLInformation::AddInformation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVOpenGLInformation_GetVendor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVendor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOpenGLInformation *op = static_cast<vtkPVOpenGLInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const std::string *tempr = (ap.IsBound() ?
      &op->GetVendor() :
      &op->vtkPVOpenGLInformation::GetVendor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVOpenGLInformation_GetVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOpenGLInformation *op = static_cast<vtkPVOpenGLInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const std::string *tempr = (ap.IsBound() ?
      &op->GetVersion() :
      &op->vtkPVOpenGLInformation::GetVersion());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVOpenGLInformation_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOpenGLInformation *op = static_cast<vtkPVOpenGLInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const std::string *tempr = (ap.IsBound() ?
      &op->GetRenderer() :
      &op->vtkPVOpenGLInformation::GetRenderer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVOpenGLInformation_GetCapabilities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCapabilities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOpenGLInformation *op = static_cast<vtkPVOpenGLInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const std::string *tempr = (ap.IsBound() ?
      &op->GetCapabilities() :
      &op->vtkPVOpenGLInformation::GetCapabilities());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVOpenGLInformation_Methods[] = {
  {"IsTypeOf", PyvtkPVOpenGLInformation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVOpenGLInformation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVOpenGLInformation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVOpenGLInformation\nC++: static vtkPVOpenGLInformation *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVOpenGLInformation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVOpenGLInformation\nC++: vtkPVOpenGLInformation *NewInstance()\n\n"},
  {"CopyFromObject", PyvtkPVOpenGLInformation_CopyFromObject, METH_VARARGS,
   "V.CopyFromObject(vtkObject)\nC++: void CopyFromObject(vtkObject *object) override;\n\nCollects OpenGL information from the object. object must be\neither a vtkPVView or a vtkRenderWindow. If not, this call will\ncreate a vtkRenderWindow temporarily and use it to obtain OpenGL\ncapabilities information (see\nvtkPVRenderingCapabilitiesInformation::NewOffscreenRenderWindow())\n.\n"},
  {"AddInformation", PyvtkPVOpenGLInformation_AddInformation, METH_VARARGS,
   "V.AddInformation(vtkPVInformation)\nC++: void AddInformation(vtkPVInformation *) override;\n\nMerge another information object.\n"},
  {"GetVendor", PyvtkPVOpenGLInformation_GetVendor, METH_VARARGS,
   "V.GetVendor() -> string\nC++: const std::string &GetVendor()\n\nMethods provide access to OpenGL information.\n"},
  {"GetVersion", PyvtkPVOpenGLInformation_GetVersion, METH_VARARGS,
   "V.GetVersion() -> string\nC++: const std::string &GetVersion()\n\nMethods provide access to OpenGL information.\n"},
  {"GetRenderer", PyvtkPVOpenGLInformation_GetRenderer, METH_VARARGS,
   "V.GetRenderer() -> string\nC++: const std::string &GetRenderer()\n\nMethods provide access to OpenGL information.\n"},
  {"GetCapabilities", PyvtkPVOpenGLInformation_GetCapabilities, METH_VARARGS,
   "V.GetCapabilities() -> string\nC++: const std::string &GetCapabilities()\n\nMethods provide access to OpenGL information.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVOpenGLInformation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkPVOpenGLInformation", // tp_name
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
  PyvtkPVOpenGLInformation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVOpenGLInformation_StaticNew()
{
  return vtkPVOpenGLInformation::New();
}

PyObject *PyvtkPVOpenGLInformation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVOpenGLInformation_Type, PyvtkPVOpenGLInformation_Methods,
    "vtkPVOpenGLInformation",
 &PyvtkPVOpenGLInformation_StaticNew);

  PyTypeObject *pytype = &PyvtkPVOpenGLInformation_Type;

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

void PyVTKAddFile_vtkPVOpenGLInformation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVOpenGLInformation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVOpenGLInformation", o) != 0)
  {
    Py_DECREF(o);
  }

}

