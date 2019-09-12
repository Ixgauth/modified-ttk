// python wrapper for vtkImageReader2Factory
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
#include "vtkImageReader2Factory.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageReader2Factory(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageReader2Factory_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkImageReader2Factory_Doc =
  "vtkImageReader2Factory - Superclass of binary file readers.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkImageReader2Factory: This class is used to create a\n"
  "vtkImageReader2 object given a path name to a file.  It calls\n"
  "CanReadFile on all available readers until one of them returns true. \n"
  "The available reader list comes from three places.  In the\n"
  "InitializeReaders function of this class, built-in VTK classes are\n"
  "added to the list, users can call RegisterReader, or users can create\n"
  "a vtkObjectFactory that has CreateObject method that returns a new\n"
  "vtkImageReader2 sub class when given the string\n"
  "\"vtkImageReaderObject\".  This way applications can be extended with\n"
  "new readers via a plugin dll or by calling RegisterReader. Of course\n"
  "all of the readers that are part of the vtk release are made\n"
  "automatically available.\n\n"
  "@sa\n"
  "vtkImageReader2\n\n";


static PyObject *
PyvtkImageReader2Factory_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageReader2Factory::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2Factory_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2Factory *op = static_cast<vtkImageReader2Factory *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageReader2Factory::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2Factory_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageReader2Factory *tempr = vtkImageReader2Factory::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2Factory_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2Factory *op = static_cast<vtkImageReader2Factory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageReader2Factory *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageReader2Factory::NewInstance());

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
PyvtkImageReader2Factory_RegisterReader(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "RegisterReader");

  vtkImageReader2 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageReader2"))
  {
    vtkImageReader2Factory::RegisterReader(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2Factory_CreateImageReader2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CreateImageReader2");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkImageReader2 *tempr = vtkImageReader2Factory::CreateImageReader2(temp0);

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
PyvtkImageReader2Factory_GetRegisteredReaders(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetRegisteredReaders");

  vtkImageReader2Collection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageReader2Collection"))
  {
    vtkImageReader2Factory::GetRegisteredReaders(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageReader2Factory_Methods[] = {
  {"IsTypeOf", PyvtkImageReader2Factory_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageReader2Factory_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageReader2Factory_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageReader2Factory\nC++: static vtkImageReader2Factory *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageReader2Factory_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageReader2Factory\nC++: vtkImageReader2Factory *NewInstance()\n\n"},
  {"RegisterReader", PyvtkImageReader2Factory_RegisterReader, METH_VARARGS,
   "V.RegisterReader(vtkImageReader2)\nC++: static void RegisterReader(vtkImageReader2 *r)\n\nregistered readers will be queried in CreateImageReader2 to see\nif they can load a given file.\n"},
  {"CreateImageReader2", PyvtkImageReader2Factory_CreateImageReader2, METH_VARARGS,
   "V.CreateImageReader2(string) -> vtkImageReader2\nC++: static vtkImageReader2 *CreateImageReader2(const char *path)\n\nopen the image file, it is the callers responsibility to call\nDelete on the returned object.   If no reader is found, null is\nreturned.\n"},
  {"GetRegisteredReaders", PyvtkImageReader2Factory_GetRegisteredReaders, METH_VARARGS,
   "V.GetRegisteredReaders(vtkImageReader2Collection)\nC++: static void GetRegisteredReaders(vtkImageReader2Collection *)\n\nThe caller must allocate the vtkImageReader2Collection and pass\nin the pointer to this method.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageReader2Factory_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOImagePython.vtkImageReader2Factory", // tp_name
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
  PyvtkImageReader2Factory_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageReader2Factory_StaticNew()
{
  return vtkImageReader2Factory::New();
}

PyObject *PyvtkImageReader2Factory_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageReader2Factory_Type, PyvtkImageReader2Factory_Methods,
    "vtkImageReader2Factory",
 &PyvtkImageReader2Factory_StaticNew);

  PyTypeObject *pytype = &PyvtkImageReader2Factory_Type;

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

void PyVTKAddFile_vtkImageReader2Factory(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageReader2Factory_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageReader2Factory", o) != 0)
  {
    Py_DECREF(o);
  }

}

