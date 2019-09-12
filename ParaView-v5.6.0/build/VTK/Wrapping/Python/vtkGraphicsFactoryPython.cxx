// python wrapper for vtkGraphicsFactory
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
#include "vtkGraphicsFactory.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGraphicsFactory(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkGraphicsFactory_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkGraphicsFactory_Doc =
  "vtkGraphicsFactory - \n\n"
  "Superclass: vtkObject\n\n"
;


static PyObject *
PyvtkGraphicsFactory_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGraphicsFactory::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphicsFactory_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphicsFactory *op = static_cast<vtkGraphicsFactory *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGraphicsFactory::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphicsFactory_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGraphicsFactory *tempr = vtkGraphicsFactory::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphicsFactory_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphicsFactory *op = static_cast<vtkGraphicsFactory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGraphicsFactory *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGraphicsFactory::NewInstance());

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
PyvtkGraphicsFactory_CreateInstance(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CreateInstance");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkObject *tempr = vtkGraphicsFactory::CreateInstance(temp0);

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
PyvtkGraphicsFactory_GetRenderLibrary(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetRenderLibrary");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkGraphicsFactory::GetRenderLibrary();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphicsFactory_SetUseMesaClasses(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetUseMesaClasses");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkGraphicsFactory::SetUseMesaClasses(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphicsFactory_GetUseMesaClasses(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetUseMesaClasses");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    int tempr = vtkGraphicsFactory::GetUseMesaClasses();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphicsFactory_SetOffScreenOnlyMode(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetOffScreenOnlyMode");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkGraphicsFactory::SetOffScreenOnlyMode(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphicsFactory_GetOffScreenOnlyMode(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetOffScreenOnlyMode");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    int tempr = vtkGraphicsFactory::GetOffScreenOnlyMode();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGraphicsFactory_Methods[] = {
  {"IsTypeOf", PyvtkGraphicsFactory_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGraphicsFactory_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGraphicsFactory_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkGraphicsFactory\nC++: static vtkGraphicsFactory *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGraphicsFactory_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkGraphicsFactory\nC++: vtkGraphicsFactory *NewInstance()\n\n"},
  {"CreateInstance", PyvtkGraphicsFactory_CreateInstance, METH_VARARGS,
   "V.CreateInstance(string) -> vtkObject\nC++: static vtkObject *CreateInstance(const char *vtkclassname)\n\nCreate and return an instance of the named vtk object. This\nmethod first checks the vtkObjectFactory to support dynamic\nloading.\n"},
  {"GetRenderLibrary", PyvtkGraphicsFactory_GetRenderLibrary, METH_VARARGS,
   "V.GetRenderLibrary() -> string\nC++: static const char *GetRenderLibrary()\n\nWhat rendering library has the user requested\n"},
  {"SetUseMesaClasses", PyvtkGraphicsFactory_SetUseMesaClasses, METH_VARARGS,
   "V.SetUseMesaClasses(int)\nC++: static void SetUseMesaClasses(int use)\n\nThis option enables the creation of Mesa classes instead of the\nOpenGL classes when using mangled Mesa.\n"},
  {"GetUseMesaClasses", PyvtkGraphicsFactory_GetUseMesaClasses, METH_VARARGS,
   "V.GetUseMesaClasses() -> int\nC++: static int GetUseMesaClasses()\n\nThis option enables the creation of Mesa classes instead of the\nOpenGL classes when using mangled Mesa.\n"},
  {"SetOffScreenOnlyMode", PyvtkGraphicsFactory_SetOffScreenOnlyMode, METH_VARARGS,
   "V.SetOffScreenOnlyMode(int)\nC++: static void SetOffScreenOnlyMode(int use)\n\nThis option enables the off-screen only mode. In this mode no X\ncalls will be made even when interactor is used.\n"},
  {"GetOffScreenOnlyMode", PyvtkGraphicsFactory_GetOffScreenOnlyMode, METH_VARARGS,
   "V.GetOffScreenOnlyMode() -> int\nC++: static int GetOffScreenOnlyMode()\n\nThis option enables the off-screen only mode. In this mode no X\ncalls will be made even when interactor is used.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkGraphicsFactory_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkGraphicsFactory", // tp_name
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
  PyvtkGraphicsFactory_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGraphicsFactory_StaticNew()
{
  return vtkGraphicsFactory::New();
}

PyObject *PyvtkGraphicsFactory_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkGraphicsFactory_Type, PyvtkGraphicsFactory_Methods,
    "vtkGraphicsFactory",
 &PyvtkGraphicsFactory_StaticNew);

  PyTypeObject *pytype = &PyvtkGraphicsFactory_Type;

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

void PyVTKAddFile_vtkGraphicsFactory(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGraphicsFactory_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGraphicsFactory", o) != 0)
  {
    Py_DECREF(o);
  }

}

