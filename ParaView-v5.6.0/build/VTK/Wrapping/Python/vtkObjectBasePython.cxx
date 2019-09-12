// python wrapper for vtkObjectBase
//
#define VTK_WRAPPING_CXX
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkObjectBase.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkObjectBase(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkObjectBase_ClassNew(); }


static const char *PyvtkObjectBase_Doc =
  "vtkObjectBase - abstract base class for most VTK objects\n\n"
  "vtkObjectBase is the base class for all reference counted classes in\n"
  "the VTK. These classes include vtkCommand classes, vtkInformationKey\n"
  "classes, and vtkObject classes.\n\n"
  "vtkObjectBase performs reference counting: objects that are reference\n"
  "counted exist as long as another object uses them. Once the last\n"
  "reference to a reference counted object is removed, the object will\n"
  "spontaneously destruct.\n\n"
  "Constructor and destructor of the subclasses of vtkObjectBase should\n"
  "be protected, so that only New() and UnRegister() actually call them.\n"
  "Debug leaks can be used to see if there are any objects left with\n"
  "nonzero reference count.\n\n"
  "@warning\n"
  "Note: Objects of subclasses of vtkObjectBase should always be created\n"
  "with the New() method and deleted with the Delete() method. They\n"
  "cannot be allocated off the stack (i.e., automatic objects) because\n"
  "the constructor is a protected method.\n\n"
  "@sa\n"
  "vtkObject vtkCommand vtkInformationKey\n\n";

static PyObject *
PyvtkObjectBase_GetAddressAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAddressAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectBase *op = static_cast<vtkObjectBase *>(vp);

  const char *temp0;
  char tempr[256];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    sprintf(tempr, "Addr=%p", static_cast<void*>(op));

    result = ap.BuildValue(tempr);
  }

  return result;
}

static PyObject *
PyvtkObjectBase_Register(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Register");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectBase *op = static_cast<vtkObjectBase *>(vp);

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    if (!PyVTKObject_Check(self) ||
        (PyVTKObject_GetFlags(self) & VTK_PYTHON_IGNORE_UNREGISTER) == 0)
    {
      if (ap.IsBound())
      {
        op->Register(temp0);
      }
      else
      {
        op->vtkObjectBase::Register(temp0);
      }
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkObjectBase_UnRegister(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegister");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectBase *op = static_cast<vtkObjectBase *>(vp);

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    if (!PyVTKObject_Check(self) ||
        (PyVTKObject_GetFlags(self) & VTK_PYTHON_IGNORE_UNREGISTER) == 0)
    {
      if (ap.IsBound())
      {
        op->UnRegister(temp0);
      }
      else
      {
        op->vtkObjectBase::UnRegister(temp0);
      }
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkObjectBase_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectBase *op = static_cast<vtkObjectBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkObjectBase::GetClassName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObjectBase_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkObjectBase::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObjectBase_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectBase *op = static_cast<vtkObjectBase *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkObjectBase::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObjectBase_FastDelete(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FastDelete");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectBase *op = static_cast<vtkObjectBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FastDelete();
    }
    else
    {
      op->vtkObjectBase::FastDelete();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkObjectBase_InitializeObjectBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeObjectBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectBase *op = static_cast<vtkObjectBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitializeObjectBase();
    }
    else
    {
      op->vtkObjectBase::InitializeObjectBase();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkObjectBase_GetReferenceCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReferenceCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectBase *op = static_cast<vtkObjectBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReferenceCount() :
      op->vtkObjectBase::GetReferenceCount());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObjectBase_SetReferenceCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReferenceCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectBase *op = static_cast<vtkObjectBase *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReferenceCount(temp0);
    }
    else
    {
      op->vtkObjectBase::SetReferenceCount(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkObjectBase_Methods[] = {
  {"GetClassName", PyvtkObjectBase_GetClassName, METH_VARARGS,
   "V.GetClassName() -> string\nC++: const char *GetClassName()\n\nReturn the class name as a string.\n"},
  {"IsTypeOf", PyvtkObjectBase_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *name)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkObjectBase_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: virtual vtkTypeBool IsA(const char *name)\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"FastDelete", PyvtkObjectBase_FastDelete, METH_VARARGS,
   "V.FastDelete()\nC++: virtual void FastDelete()\n\nDelete a reference to this object.  This version will not invoke\ngarbage collection and can potentially leak the object if it is\npart of a reference loop.  Use this method only when it is known\nthat the object has another reference and would not be collected\nif a full garbage collection check were done.\n"},
  {"InitializeObjectBase", PyvtkObjectBase_InitializeObjectBase, METH_VARARGS,
   "V.InitializeObjectBase()\nC++: void InitializeObjectBase()\n\n"},
  {"GetReferenceCount", PyvtkObjectBase_GetReferenceCount, METH_VARARGS,
   "V.GetReferenceCount() -> int\nC++: int GetReferenceCount()\n\nReturn the current reference count of this object.\n"},
  {"SetReferenceCount", PyvtkObjectBase_SetReferenceCount, METH_VARARGS,
   "V.SetReferenceCount(int)\nC++: void SetReferenceCount(int)\n\nSets the reference count. (This is very dangerous, use with\ncare.)\n"},
  {"GetAddressAsString",  PyvtkObjectBase_GetAddressAsString, 1,
   "V.GetAddressAsString(string) -> string\nC++: const char *GetAddressAsString()\n\nGet address of C++ object in format 'Addr=%p' after casting to\nthe specified type.  You can get the same information from o.__this__."},
  {"Register", PyvtkObjectBase_Register, 1,
   "V.Register(vtkObjectBase)\nC++: virtual void Register(vtkObjectBase *o)\n\nIncrease the reference count by 1.\n"},
  {"UnRegister", PyvtkObjectBase_UnRegister, 1,
   "V.UnRegister(vtkObjectBase)\nC++: virtual void UnRegister(vtkObjectBase *o)\n\nDecrease the reference count (release by another object). This\nhas the same effect as invoking Delete() (i.e., it reduces the\nreference count by 1).\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkObjectBase_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkObjectBase", // tp_name
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
  PyvtkObjectBase_Doc, // tp_doc
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

static vtkObjectBase *PyvtkObjectBase_StaticNew()
{
  return vtkObjectBase::New();
}

PyObject *PyvtkObjectBase_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkObjectBase_Type, PyvtkObjectBase_Methods,
    "vtkObjectBase",
 &PyvtkObjectBase_StaticNew);

  PyTypeObject *pytype = &PyvtkObjectBase_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkObjectBase(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkObjectBase_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkObjectBase", o) != 0)
  {
    Py_DECREF(o);
  }

}

