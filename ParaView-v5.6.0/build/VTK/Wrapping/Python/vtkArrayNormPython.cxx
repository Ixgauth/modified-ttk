// python wrapper for vtkArrayNorm
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
#include "vtkArrayRange.h"
#include "vtkArrayNorm.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkArrayNorm(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkArrayNorm_ClassNew(); }

#ifndef DECLARED_PyvtkArrayDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkArrayDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkArrayDataAlgorithm_ClassNew
#endif

static const char *PyvtkArrayNorm_Doc =
  "vtkArrayNorm - Computes L-norms along one dimension of an array.\n\n"
  "Superclass: vtkArrayDataAlgorithm\n\n"
  "Given an input matrix (vtkTypedArray), computes the L-norm for each\n"
  "vector along either dimension, storing the results in a dense output\n"
  "vector (1D vtkDenseArray).  The caller may optionally request the\n"
  "inverse norm as output (useful for subsequent normalization), and may\n"
  "limit the computation to a \"window\" of vector elements, to avoid data\n"
  "copying.\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";


static PyObject *
PyvtkArrayNorm_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkArrayNorm::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayNorm_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayNorm *op = static_cast<vtkArrayNorm *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkArrayNorm::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayNorm_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkArrayNorm *tempr = vtkArrayNorm::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayNorm_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayNorm *op = static_cast<vtkArrayNorm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArrayNorm *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkArrayNorm::NewInstance());

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
PyvtkArrayNorm_GetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayNorm *op = static_cast<vtkArrayNorm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDimension() :
      op->vtkArrayNorm::GetDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayNorm_SetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayNorm *op = static_cast<vtkArrayNorm *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDimension(temp0);
    }
    else
    {
      op->vtkArrayNorm::SetDimension(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayNorm_GetL(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetL");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayNorm *op = static_cast<vtkArrayNorm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetL() :
      op->vtkArrayNorm::GetL());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayNorm_SetL(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetL");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayNorm *op = static_cast<vtkArrayNorm *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetL(temp0);
    }
    else
    {
      op->vtkArrayNorm::SetL(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayNorm_SetInvert(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInvert");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayNorm *op = static_cast<vtkArrayNorm *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInvert(temp0);
    }
    else
    {
      op->vtkArrayNorm::SetInvert(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayNorm_GetInvert(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInvert");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayNorm *op = static_cast<vtkArrayNorm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInvert() :
      op->vtkArrayNorm::GetInvert());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayNorm_SetWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayNorm *op = static_cast<vtkArrayNorm *>(vp);

  vtkArrayRange *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayRange"))
  {
    if (ap.IsBound())
    {
      op->SetWindow(*temp0);
    }
    else
    {
      op->vtkArrayNorm::SetWindow(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkArrayNorm_GetWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayNorm *op = static_cast<vtkArrayNorm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArrayRange tempr = (ap.IsBound() ?
      op->GetWindow() :
      op->vtkArrayNorm::GetWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkArrayRange");
    }
  }

  return result;
}

static PyMethodDef PyvtkArrayNorm_Methods[] = {
  {"IsTypeOf", PyvtkArrayNorm_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkArrayNorm_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkArrayNorm_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkArrayNorm\nC++: static vtkArrayNorm *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkArrayNorm_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkArrayNorm\nC++: vtkArrayNorm *NewInstance()\n\n"},
  {"GetDimension", PyvtkArrayNorm_GetDimension, METH_VARARGS,
   "V.GetDimension() -> int\nC++: virtual int GetDimension()\n\nControls the dimension along which norms will be computed.  For\ninput matrices, For input matrices, use \"0\" (rows) or \"1\"\n(columns). Default: 0\n"},
  {"SetDimension", PyvtkArrayNorm_SetDimension, METH_VARARGS,
   "V.SetDimension(int)\nC++: virtual void SetDimension(int _arg)\n\nControls the dimension along which norms will be computed.  For\ninput matrices, For input matrices, use \"0\" (rows) or \"1\"\n(columns). Default: 0\n"},
  {"GetL", PyvtkArrayNorm_GetL, METH_VARARGS,
   "V.GetL() -> int\nC++: virtual int GetL()\n\nControls the L-value.  Default: 2\n"},
  {"SetL", PyvtkArrayNorm_SetL, METH_VARARGS,
   "V.SetL(int)\nC++: void SetL(int value)\n\nControls the L-value.  Default: 2\n"},
  {"SetInvert", PyvtkArrayNorm_SetInvert, METH_VARARGS,
   "V.SetInvert(int)\nC++: virtual void SetInvert(int _arg)\n\nControls whether to invert output values.  Default: false\n"},
  {"GetInvert", PyvtkArrayNorm_GetInvert, METH_VARARGS,
   "V.GetInvert() -> int\nC++: virtual int GetInvert()\n\nControls whether to invert output values.  Default: false\n"},
  {"SetWindow", PyvtkArrayNorm_SetWindow, METH_VARARGS,
   "V.SetWindow(vtkArrayRange)\nC++: void SetWindow(const vtkArrayRange &window)\n\nDefines an optional \"window\" used to compute the norm on a subset\nof the elements in a vector.\n"},
  {"GetWindow", PyvtkArrayNorm_GetWindow, METH_VARARGS,
   "V.GetWindow() -> vtkArrayRange\nC++: vtkArrayRange GetWindow()\n\nDefines an optional \"window\" used to compute the norm on a subset\nof the elements in a vector.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkArrayNorm_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInfovisCorePython.vtkArrayNorm", // tp_name
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
  PyvtkArrayNorm_Doc, // tp_doc
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

static vtkObjectBase *PyvtkArrayNorm_StaticNew()
{
  return vtkArrayNorm::New();
}

PyObject *PyvtkArrayNorm_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkArrayNorm_Type, PyvtkArrayNorm_Methods,
    "vtkArrayNorm",
 &PyvtkArrayNorm_StaticNew);

  PyTypeObject *pytype = &PyvtkArrayNorm_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkArrayDataAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkArrayNorm(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkArrayNorm_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkArrayNorm", o) != 0)
  {
    Py_DECREF(o);
  }

}

