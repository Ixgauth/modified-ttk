// python wrapper for vtkImageConstantPad
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
#include "vtkImageConstantPad.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageConstantPad(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageConstantPad_ClassNew(); }

#ifndef DECLARED_PyvtkImagePadFilter_ClassNew
extern "C" { PyObject *PyvtkImagePadFilter_ClassNew(); }
#define DECLARED_PyvtkImagePadFilter_ClassNew
#endif

static const char *PyvtkImageConstantPad_Doc =
  "vtkImageConstantPad - Makes image larger by padding with constant.\n\n"
  "Superclass: vtkImagePadFilter\n\n"
  "vtkImageConstantPad changes the image extent of its input. Any pixels\n"
  "outside of the original image extent are filled with a constant value\n"
  "(default is 0.0).\n\n"
  "@sa\n"
  "vtkImageWrapPad vtkImageMirrorPad\n\n";


static PyObject *
PyvtkImageConstantPad_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageConstantPad::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageConstantPad_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConstantPad *op = static_cast<vtkImageConstantPad *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageConstantPad::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageConstantPad_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageConstantPad *tempr = vtkImageConstantPad::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageConstantPad_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConstantPad *op = static_cast<vtkImageConstantPad *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageConstantPad *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageConstantPad::NewInstance());

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
PyvtkImageConstantPad_SetConstant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConstant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConstantPad *op = static_cast<vtkImageConstantPad *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConstant(temp0);
    }
    else
    {
      op->vtkImageConstantPad::SetConstant(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageConstantPad_GetConstant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConstant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConstantPad *op = static_cast<vtkImageConstantPad *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetConstant() :
      op->vtkImageConstantPad::GetConstant());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageConstantPad_Methods[] = {
  {"IsTypeOf", PyvtkImageConstantPad_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageConstantPad_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageConstantPad_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageConstantPad\nC++: static vtkImageConstantPad *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageConstantPad_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageConstantPad\nC++: vtkImageConstantPad *NewInstance()\n\n"},
  {"SetConstant", PyvtkImageConstantPad_SetConstant, METH_VARARGS,
   "V.SetConstant(float)\nC++: virtual void SetConstant(double _arg)\n\nSet/Get the pad value.\n"},
  {"GetConstant", PyvtkImageConstantPad_GetConstant, METH_VARARGS,
   "V.GetConstant() -> float\nC++: virtual double GetConstant()\n\nSet/Get the pad value.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageConstantPad_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingCorePython.vtkImageConstantPad", // tp_name
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
  PyvtkImageConstantPad_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageConstantPad_StaticNew()
{
  return vtkImageConstantPad::New();
}

PyObject *PyvtkImageConstantPad_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageConstantPad_Type, PyvtkImageConstantPad_Methods,
    "vtkImageConstantPad",
 &PyvtkImageConstantPad_StaticNew);

  PyTypeObject *pytype = &PyvtkImageConstantPad_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImagePadFilter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageConstantPad(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageConstantPad_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageConstantPad", o) != 0)
  {
    Py_DECREF(o);
  }

}

