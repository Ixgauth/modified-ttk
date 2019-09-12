// python wrapper for vtkPVDisplayInformation
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
#include "vtkPVDisplayInformation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVDisplayInformation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVDisplayInformation_ClassNew(); }

#ifndef DECLARED_PyvtkPVInformation_ClassNew
extern "C" { PyObject *PyvtkPVInformation_ClassNew(); }
#define DECLARED_PyvtkPVInformation_ClassNew
#endif

static const char *PyvtkPVDisplayInformation_Doc =
  "vtkPVDisplayInformation - provides information about the rendering\ndisplay and OpenGL context.\n\n"
  "Superclass: vtkPVInformation\n\n"
  "@deprecated in ParaView 5.5. Please use\n"
  "vtkPVRenderingCapabilitiesInformation instead.\n\n";


static PyObject *
PyvtkPVDisplayInformation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVDisplayInformation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDisplayInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDisplayInformation *op = static_cast<vtkPVDisplayInformation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVDisplayInformation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDisplayInformation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVDisplayInformation *tempr = vtkPVDisplayInformation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDisplayInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDisplayInformation *op = static_cast<vtkPVDisplayInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVDisplayInformation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVDisplayInformation::NewInstance());

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


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkPVDisplayInformation_CanOpenDisplayLocally(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CanOpenDisplayLocally");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    bool tempr = vtkPVDisplayInformation::CanOpenDisplayLocally();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkPVDisplayInformation_SupportsOpenGLLocally(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SupportsOpenGLLocally");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    bool tempr = vtkPVDisplayInformation::SupportsOpenGLLocally();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}
#endif


static PyObject *
PyvtkPVDisplayInformation_CopyFromObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDisplayInformation *op = static_cast<vtkPVDisplayInformation *>(vp);

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
      op->vtkPVDisplayInformation::CopyFromObject(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVDisplayInformation_AddInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDisplayInformation *op = static_cast<vtkPVDisplayInformation *>(vp);

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
      op->vtkPVDisplayInformation::AddInformation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVDisplayInformation_GetCanOpenDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCanOpenDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDisplayInformation *op = static_cast<vtkPVDisplayInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCanOpenDisplay() :
      op->vtkPVDisplayInformation::GetCanOpenDisplay());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDisplayInformation_GetSupportsOpenGL(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSupportsOpenGL");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDisplayInformation *op = static_cast<vtkPVDisplayInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSupportsOpenGL() :
      op->vtkPVDisplayInformation::GetSupportsOpenGL());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVDisplayInformation_Methods[] = {
  {"IsTypeOf", PyvtkPVDisplayInformation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVDisplayInformation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVDisplayInformation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVDisplayInformation\nC++: static vtkPVDisplayInformation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVDisplayInformation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVDisplayInformation\nC++: vtkPVDisplayInformation *NewInstance()\n\n"},
#if !defined(VTK_LEGACY_REMOVE)
  {"CanOpenDisplayLocally", PyvtkPVDisplayInformation_CanOpenDisplayLocally, METH_VARARGS,
   "V.CanOpenDisplayLocally() -> bool\nC++: static bool CanOpenDisplayLocally()\n\nReturns if the display can be opened up on the current processes.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {"SupportsOpenGLLocally", PyvtkPVDisplayInformation_SupportsOpenGLLocally, METH_VARARGS,
   "V.SupportsOpenGLLocally() -> bool\nC++: static bool SupportsOpenGLLocally()\n\nReturns true if OpenGL context supports core features required\nfor rendering.\n"},
#endif
  {"CopyFromObject", PyvtkPVDisplayInformation_CopyFromObject, METH_VARARGS,
   "V.CopyFromObject(vtkObject)\nC++: void CopyFromObject(vtkObject *) override;\n\nTransfer information about a single object into this object.\n"},
  {"AddInformation", PyvtkPVDisplayInformation_AddInformation, METH_VARARGS,
   "V.AddInformation(vtkPVInformation)\nC++: void AddInformation(vtkPVInformation *info) override;\n\nMerge another information object. Calls AddInformation(info, 0).\n"},
  {"GetCanOpenDisplay", PyvtkPVDisplayInformation_GetCanOpenDisplay, METH_VARARGS,
   "V.GetCanOpenDisplay() -> int\nC++: virtual int GetCanOpenDisplay()\n\nCanOpenDisplay is set to 1 if a window can be opened on the\ndisplay.\n"},
  {"GetSupportsOpenGL", PyvtkPVDisplayInformation_GetSupportsOpenGL, METH_VARARGS,
   "V.GetSupportsOpenGL() -> int\nC++: virtual int GetSupportsOpenGL()\n\nSupportsOpenGL is set to 1 if the OpenGL context available\nsupports core features needed for rendering.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVDisplayInformation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkPVDisplayInformation", // tp_name
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
  PyvtkPVDisplayInformation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVDisplayInformation_StaticNew()
{
  return vtkPVDisplayInformation::New();
}

PyObject *PyvtkPVDisplayInformation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVDisplayInformation_Type, PyvtkPVDisplayInformation_Methods,
    "vtkPVDisplayInformation",
 &PyvtkPVDisplayInformation_StaticNew);

  PyTypeObject *pytype = &PyvtkPVDisplayInformation_Type;

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

void PyVTKAddFile_vtkPVDisplayInformation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVDisplayInformation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVDisplayInformation", o) != 0)
  {
    Py_DECREF(o);
  }

}

