// python wrapper for vtkAbstractRenderDevice
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
#include "vtkRect.h"
#include "vtkStdString.h"
#include "vtkAbstractRenderDevice.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAbstractRenderDevice(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAbstractRenderDevice_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkAbstractRenderDevice_Doc =
  "vtkAbstractRenderDevice - no description provided.\n\n"
  "Superclass: vtkObject\n\n"
;


static PyObject *
PyvtkAbstractRenderDevice_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAbstractRenderDevice::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractRenderDevice_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractRenderDevice *op = static_cast<vtkAbstractRenderDevice *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAbstractRenderDevice::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractRenderDevice_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAbstractRenderDevice *tempr = vtkAbstractRenderDevice::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractRenderDevice_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractRenderDevice *op = static_cast<vtkAbstractRenderDevice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractRenderDevice *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAbstractRenderDevice::NewInstance());

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
PyvtkAbstractRenderDevice_SetRequestedGLVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRequestedGLVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractRenderDevice *op = static_cast<vtkAbstractRenderDevice *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetRequestedGLVersion(temp0, temp1);
    }
    else
    {
      op->vtkAbstractRenderDevice::SetRequestedGLVersion(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractRenderDevice_CreateNewWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNewWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractRenderDevice *op = static_cast<vtkAbstractRenderDevice *>(vp);

  vtkRecti *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkRecti") &&
      ap.GetValue(temp1))
  {
    bool tempr = op->CreateNewWindow(*temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkAbstractRenderDevice_MakeCurrent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeCurrent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractRenderDevice *op = static_cast<vtkAbstractRenderDevice *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->MakeCurrent();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAbstractRenderDevice_Methods[] = {
  {"IsTypeOf", PyvtkAbstractRenderDevice_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAbstractRenderDevice_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAbstractRenderDevice_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAbstractRenderDevice\nC++: static vtkAbstractRenderDevice *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAbstractRenderDevice_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAbstractRenderDevice\nC++: vtkAbstractRenderDevice *NewInstance()\n\n"},
  {"SetRequestedGLVersion", PyvtkAbstractRenderDevice_SetRequestedGLVersion, METH_VARARGS,
   "V.SetRequestedGLVersion(int, int)\nC++: void SetRequestedGLVersion(int major, int minor)\n\nSet the context that should be requested (must be set before the\nwidget is rendered for the first time.\n@param major Major GL version, default is 2.\n@param minor Minor GL version, default is 1.\n"},
  {"CreateNewWindow", PyvtkAbstractRenderDevice_CreateNewWindow, METH_VARARGS,
   "V.CreateNewWindow(vtkRecti, string) -> bool\nC++: virtual bool CreateNewWindow(const vtkRecti &geometry,\n    const std::string &name)\n\nCreate a window with the desired geometry.\n@param geometry The geometry in screen coordinates for the\n    window.\n@return True on success, false on failure.\n"},
  {"MakeCurrent", PyvtkAbstractRenderDevice_MakeCurrent, METH_VARARGS,
   "V.MakeCurrent()\nC++: virtual void MakeCurrent()\n\nMake the context current so that it can be used by OpenGL. This\n    is\nan expensive call, and so its use should be minimized to once per\nrender ideally.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAbstractRenderDevice_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkAbstractRenderDevice", // tp_name
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
  PyvtkAbstractRenderDevice_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAbstractRenderDevice_StaticNew()
{
  return vtkAbstractRenderDevice::New();
}

PyObject *PyvtkAbstractRenderDevice_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAbstractRenderDevice_Type, PyvtkAbstractRenderDevice_Methods,
    "vtkAbstractRenderDevice",
 &PyvtkAbstractRenderDevice_StaticNew);

  PyTypeObject *pytype = &PyvtkAbstractRenderDevice_Type;

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

void PyVTKAddFile_vtkAbstractRenderDevice(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAbstractRenderDevice_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAbstractRenderDevice", o) != 0)
  {
    Py_DECREF(o);
  }

}

