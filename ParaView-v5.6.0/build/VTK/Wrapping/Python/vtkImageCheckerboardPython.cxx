// python wrapper for vtkImageCheckerboard
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
#include "vtkImageCheckerboard.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageCheckerboard(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageCheckerboard_ClassNew(); }

#ifndef DECLARED_PyvtkThreadedImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkThreadedImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkThreadedImageAlgorithm_ClassNew
#endif

static const char *PyvtkImageCheckerboard_Doc =
  "vtkImageCheckerboard - show two images at once using a checkboard\npattern\n\n"
  "Superclass: vtkThreadedImageAlgorithm\n\n"
  "vtkImageCheckerboard displays two images as one using a checkerboard\n"
  " pattern. This filter can be used to compare two images. The\n"
  " checkerboard pattern is controlled by the NumberOfDivisions\n"
  " ivar. This controls the number of checkerboard divisions in the\n"
  "whole\n"
  " extent of the image.\n\n";


static PyObject *
PyvtkImageCheckerboard_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageCheckerboard::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCheckerboard_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCheckerboard *op = static_cast<vtkImageCheckerboard *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageCheckerboard::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCheckerboard_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageCheckerboard *tempr = vtkImageCheckerboard::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCheckerboard_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCheckerboard *op = static_cast<vtkImageCheckerboard *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageCheckerboard *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageCheckerboard::NewInstance());

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
PyvtkImageCheckerboard_SetNumberOfDivisions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCheckerboard *op = static_cast<vtkImageCheckerboard *>(vp);

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
      op->SetNumberOfDivisions(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageCheckerboard::SetNumberOfDivisions(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageCheckerboard_SetNumberOfDivisions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCheckerboard *op = static_cast<vtkImageCheckerboard *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfDivisions(temp0);
    }
    else
    {
      op->vtkImageCheckerboard::SetNumberOfDivisions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageCheckerboard_SetNumberOfDivisions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageCheckerboard_SetNumberOfDivisions_s1(self, args);
    case 1:
      return PyvtkImageCheckerboard_SetNumberOfDivisions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNumberOfDivisions");
  return nullptr;
}



static PyObject *
PyvtkImageCheckerboard_GetNumberOfDivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCheckerboard *op = static_cast<vtkImageCheckerboard *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetNumberOfDivisions() :
      op->vtkImageCheckerboard::GetNumberOfDivisions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCheckerboard_SetInput1Data(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput1Data");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCheckerboard *op = static_cast<vtkImageCheckerboard *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetInput1Data(temp0);
    }
    else
    {
      op->vtkImageCheckerboard::SetInput1Data(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCheckerboard_SetInput2Data(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput2Data");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCheckerboard *op = static_cast<vtkImageCheckerboard *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetInput2Data(temp0);
    }
    else
    {
      op->vtkImageCheckerboard::SetInput2Data(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageCheckerboard_Methods[] = {
  {"IsTypeOf", PyvtkImageCheckerboard_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageCheckerboard_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageCheckerboard_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageCheckerboard\nC++: static vtkImageCheckerboard *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageCheckerboard_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageCheckerboard\nC++: vtkImageCheckerboard *NewInstance()\n\n"},
  {"SetNumberOfDivisions", PyvtkImageCheckerboard_SetNumberOfDivisions, METH_VARARGS,
   "V.SetNumberOfDivisions(int, int, int)\nC++: void SetNumberOfDivisions(int, int, int)\nV.SetNumberOfDivisions((int, int, int))\nC++: void SetNumberOfDivisions(int a[3])\n\n"},
  {"GetNumberOfDivisions", PyvtkImageCheckerboard_GetNumberOfDivisions, METH_VARARGS,
   "V.GetNumberOfDivisions() -> (int, int, int)\nC++: int *GetNumberOfDivisions()\n\nSet/Get the number of divisions along each axis.\n"},
  {"SetInput1Data", PyvtkImageCheckerboard_SetInput1Data, METH_VARARGS,
   "V.SetInput1Data(vtkDataObject)\nC++: virtual void SetInput1Data(vtkDataObject *in)\n\nSet the two inputs to this filter\n"},
  {"SetInput2Data", PyvtkImageCheckerboard_SetInput2Data, METH_VARARGS,
   "V.SetInput2Data(vtkDataObject)\nC++: virtual void SetInput2Data(vtkDataObject *in)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageCheckerboard_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingGeneralPython.vtkImageCheckerboard", // tp_name
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
  PyvtkImageCheckerboard_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageCheckerboard_StaticNew()
{
  return vtkImageCheckerboard::New();
}

PyObject *PyvtkImageCheckerboard_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageCheckerboard_Type, PyvtkImageCheckerboard_Methods,
    "vtkImageCheckerboard",
 &PyvtkImageCheckerboard_StaticNew);

  PyTypeObject *pytype = &PyvtkImageCheckerboard_Type;

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

void PyVTKAddFile_vtkImageCheckerboard(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageCheckerboard_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageCheckerboard", o) != 0)
  {
    Py_DECREF(o);
  }

}

