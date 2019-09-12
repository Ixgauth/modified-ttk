// python wrapper for vtkImageExtractComponents
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
#include "vtkImageExtractComponents.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageExtractComponents(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageExtractComponents_ClassNew(); }

#ifndef DECLARED_PyvtkThreadedImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkThreadedImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkThreadedImageAlgorithm_ClassNew
#endif

static const char *PyvtkImageExtractComponents_Doc =
  "vtkImageExtractComponents - Outputs a single component\n\n"
  "Superclass: vtkThreadedImageAlgorithm\n\n"
  "vtkImageExtractComponents takes an input with any number of\n"
  "components and outputs some of them.  It does involve a copy of the\n"
  "data.\n\n"
  "@sa\n"
  "vtkImageAppendComponents\n\n";


static PyObject *
PyvtkImageExtractComponents_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageExtractComponents::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageExtractComponents_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExtractComponents *op = static_cast<vtkImageExtractComponents *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageExtractComponents::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageExtractComponents_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageExtractComponents *tempr = vtkImageExtractComponents::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageExtractComponents_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExtractComponents *op = static_cast<vtkImageExtractComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageExtractComponents *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageExtractComponents::NewInstance());

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
PyvtkImageExtractComponents_SetComponents_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExtractComponents *op = static_cast<vtkImageExtractComponents *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComponents(temp0);
    }
    else
    {
      op->vtkImageExtractComponents::SetComponents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageExtractComponents_SetComponents_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExtractComponents *op = static_cast<vtkImageExtractComponents *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetComponents(temp0, temp1);
    }
    else
    {
      op->vtkImageExtractComponents::SetComponents(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageExtractComponents_SetComponents_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExtractComponents *op = static_cast<vtkImageExtractComponents *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetComponents(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageExtractComponents::SetComponents(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageExtractComponents_SetComponents(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkImageExtractComponents_SetComponents_s1(self, args);
    case 2:
      return PyvtkImageExtractComponents_SetComponents_s2(self, args);
    case 3:
      return PyvtkImageExtractComponents_SetComponents_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetComponents");
  return nullptr;
}



static PyObject *
PyvtkImageExtractComponents_GetComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExtractComponents *op = static_cast<vtkImageExtractComponents *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetComponents() :
      op->vtkImageExtractComponents::GetComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageExtractComponents_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExtractComponents *op = static_cast<vtkImageExtractComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponents() :
      op->vtkImageExtractComponents::GetNumberOfComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageExtractComponents_Methods[] = {
  {"IsTypeOf", PyvtkImageExtractComponents_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageExtractComponents_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageExtractComponents_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageExtractComponents\nC++: static vtkImageExtractComponents *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageExtractComponents_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageExtractComponents\nC++: vtkImageExtractComponents *NewInstance()\n\n"},
  {"SetComponents", PyvtkImageExtractComponents_SetComponents, METH_VARARGS,
   "V.SetComponents(int)\nC++: void SetComponents(int c1)\nV.SetComponents(int, int)\nC++: void SetComponents(int c1, int c2)\nV.SetComponents(int, int, int)\nC++: void SetComponents(int c1, int c2, int c3)\n\nSet/Get the components to extract.\n"},
  {"GetComponents", PyvtkImageExtractComponents_GetComponents, METH_VARARGS,
   "V.GetComponents() -> (int, int, int)\nC++: int *GetComponents()\n\n"},
  {"GetNumberOfComponents", PyvtkImageExtractComponents_GetNumberOfComponents, METH_VARARGS,
   "V.GetNumberOfComponents() -> int\nC++: virtual int GetNumberOfComponents()\n\nGet the number of components to extract. This is set implicitly\nby the SetComponents() method.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageExtractComponents_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingCorePython.vtkImageExtractComponents", // tp_name
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
  PyvtkImageExtractComponents_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageExtractComponents_StaticNew()
{
  return vtkImageExtractComponents::New();
}

PyObject *PyvtkImageExtractComponents_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageExtractComponents_Type, PyvtkImageExtractComponents_Methods,
    "vtkImageExtractComponents",
 &PyvtkImageExtractComponents_StaticNew);

  PyTypeObject *pytype = &PyvtkImageExtractComponents_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkThreadedImageAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageExtractComponents(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageExtractComponents_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageExtractComponents", o) != 0)
  {
    Py_DECREF(o);
  }

}

