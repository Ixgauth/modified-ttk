// python wrapper for vtkImagePermute
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
#include "vtkImagePermute.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImagePermute(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImagePermute_ClassNew(); }

#ifndef DECLARED_PyvtkImageReslice_ClassNew
extern "C" { PyObject *PyvtkImageReslice_ClassNew(); }
#define DECLARED_PyvtkImageReslice_ClassNew
#endif

static const char *PyvtkImagePermute_Doc =
  "vtkImagePermute - Permutes axes of input.\n\n"
  "Superclass: vtkImageReslice\n\n"
  "vtkImagePermute reorders the axes of the input. Filtered axes specify\n"
  "the input axes which become X, Y, Z.  The input has to have the same\n"
  "scalar type of the output. The filter does copy the data when it\n"
  "executes. This filter is actually a very thin wrapper around\n"
  "vtkImageReslice.\n\n";


static PyObject *
PyvtkImagePermute_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImagePermute::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePermute_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePermute *op = static_cast<vtkImagePermute *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImagePermute::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePermute_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImagePermute *tempr = vtkImagePermute::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePermute_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePermute *op = static_cast<vtkImagePermute *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImagePermute *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImagePermute::NewInstance());

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
PyvtkImagePermute_SetFilteredAxes_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFilteredAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePermute *op = static_cast<vtkImagePermute *>(vp);

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
      op->SetFilteredAxes(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImagePermute::SetFilteredAxes(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImagePermute_SetFilteredAxes_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFilteredAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePermute *op = static_cast<vtkImagePermute *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetFilteredAxes(temp0);
    }
    else
    {
      op->vtkImagePermute::SetFilteredAxes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImagePermute_SetFilteredAxes(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImagePermute_SetFilteredAxes_s1(self, args);
    case 1:
      return PyvtkImagePermute_SetFilteredAxes_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetFilteredAxes");
  return nullptr;
}



static PyObject *
PyvtkImagePermute_GetFilteredAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilteredAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePermute *op = static_cast<vtkImagePermute *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetFilteredAxes() :
      op->vtkImagePermute::GetFilteredAxes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkImagePermute_Methods[] = {
  {"IsTypeOf", PyvtkImagePermute_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImagePermute_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImagePermute_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImagePermute\nC++: static vtkImagePermute *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImagePermute_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImagePermute\nC++: vtkImagePermute *NewInstance()\n\n"},
  {"SetFilteredAxes", PyvtkImagePermute_SetFilteredAxes, METH_VARARGS,
   "V.SetFilteredAxes(int, int, int)\nC++: void SetFilteredAxes(int x, int y, int z)\nV.SetFilteredAxes((int, int, int))\nC++: void SetFilteredAxes(const int xyz[3])\n\nThe filtered axes are the input axes that get relabeled to X,Y,Z.\n"},
  {"GetFilteredAxes", PyvtkImagePermute_GetFilteredAxes, METH_VARARGS,
   "V.GetFilteredAxes() -> (int, int, int)\nC++: int *GetFilteredAxes()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImagePermute_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingCorePython.vtkImagePermute", // tp_name
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
  PyvtkImagePermute_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImagePermute_StaticNew()
{
  return vtkImagePermute::New();
}

PyObject *PyvtkImagePermute_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImagePermute_Type, PyvtkImagePermute_Methods,
    "vtkImagePermute",
 &PyvtkImagePermute_StaticNew);

  PyTypeObject *pytype = &PyvtkImagePermute_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImageReslice_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImagePermute(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImagePermute_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImagePermute", o) != 0)
  {
    Py_DECREF(o);
  }

}

