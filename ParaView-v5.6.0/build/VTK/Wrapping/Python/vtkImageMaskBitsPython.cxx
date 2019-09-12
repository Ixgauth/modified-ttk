// python wrapper for vtkImageMaskBits
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
#include "vtkImageMaskBits.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageMaskBits(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageMaskBits_ClassNew(); }

#ifndef DECLARED_PyvtkThreadedImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkThreadedImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkThreadedImageAlgorithm_ClassNew
#endif

static const char *PyvtkImageMaskBits_Doc =
  "vtkImageMaskBits - applies a bit-mask pattern to each component.\n\n"
  "Superclass: vtkThreadedImageAlgorithm\n\n"
  "vtkImageMaskBits applies a bit-mask pattern to each component.  The\n"
  "bit-mask can be applied using a variety of boolean bitwise operators.\n\n";


static PyObject *
PyvtkImageMaskBits_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageMaskBits::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMaskBits_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMaskBits *op = static_cast<vtkImageMaskBits *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageMaskBits::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMaskBits_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageMaskBits *tempr = vtkImageMaskBits::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMaskBits_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMaskBits *op = static_cast<vtkImageMaskBits *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageMaskBits *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageMaskBits::NewInstance());

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
PyvtkImageMaskBits_SetMasks_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMasks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMaskBits *op = static_cast<vtkImageMaskBits *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  unsigned int temp2;
  unsigned int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetMasks(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkImageMaskBits::SetMasks(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageMaskBits_SetMasks_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMasks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMaskBits *op = static_cast<vtkImageMaskBits *>(vp);

  const size_t size0 = 4;
  unsigned int temp0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetMasks(temp0);
    }
    else
    {
      op->vtkImageMaskBits::SetMasks(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageMaskBits_SetMasks_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMasks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMaskBits *op = static_cast<vtkImageMaskBits *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetMasks(temp0, temp1);
    }
    else
    {
      op->vtkImageMaskBits::SetMasks(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageMaskBits_SetMasks_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMasks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMaskBits *op = static_cast<vtkImageMaskBits *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  unsigned int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetMasks(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageMaskBits::SetMasks(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageMaskBits_SetMasks(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkImageMaskBits_SetMasks_s1(self, args);
    case 1:
      return PyvtkImageMaskBits_SetMasks_s2(self, args);
    case 2:
      return PyvtkImageMaskBits_SetMasks_s3(self, args);
    case 3:
      return PyvtkImageMaskBits_SetMasks_s4(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMasks");
  return nullptr;
}



static PyObject *
PyvtkImageMaskBits_SetMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMaskBits *op = static_cast<vtkImageMaskBits *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMask(temp0);
    }
    else
    {
      op->vtkImageMaskBits::SetMask(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMaskBits_GetMasks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMasks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMaskBits *op = static_cast<vtkImageMaskBits *>(vp);

  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int *tempr = (ap.IsBound() ?
      op->GetMasks() :
      op->vtkImageMaskBits::GetMasks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMaskBits_SetOperation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMaskBits *op = static_cast<vtkImageMaskBits *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOperation(temp0);
    }
    else
    {
      op->vtkImageMaskBits::SetOperation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMaskBits_GetOperation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMaskBits *op = static_cast<vtkImageMaskBits *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOperation() :
      op->vtkImageMaskBits::GetOperation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMaskBits_SetOperationToAnd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToAnd");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMaskBits *op = static_cast<vtkImageMaskBits *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToAnd();
    }
    else
    {
      op->vtkImageMaskBits::SetOperationToAnd();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMaskBits_SetOperationToOr(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToOr");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMaskBits *op = static_cast<vtkImageMaskBits *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToOr();
    }
    else
    {
      op->vtkImageMaskBits::SetOperationToOr();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMaskBits_SetOperationToXor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToXor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMaskBits *op = static_cast<vtkImageMaskBits *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToXor();
    }
    else
    {
      op->vtkImageMaskBits::SetOperationToXor();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMaskBits_SetOperationToNand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToNand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMaskBits *op = static_cast<vtkImageMaskBits *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToNand();
    }
    else
    {
      op->vtkImageMaskBits::SetOperationToNand();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMaskBits_SetOperationToNor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToNor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMaskBits *op = static_cast<vtkImageMaskBits *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToNor();
    }
    else
    {
      op->vtkImageMaskBits::SetOperationToNor();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageMaskBits_Methods[] = {
  {"IsTypeOf", PyvtkImageMaskBits_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageMaskBits_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageMaskBits_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageMaskBits\nC++: static vtkImageMaskBits *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageMaskBits_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageMaskBits\nC++: vtkImageMaskBits *NewInstance()\n\n"},
  {"SetMasks", PyvtkImageMaskBits_SetMasks, METH_VARARGS,
   "V.SetMasks(int, int, int, int)\nC++: void SetMasks(unsigned int, unsigned int, unsigned int,\n    unsigned int)\nV.SetMasks((int, int, int, int))\nC++: void SetMasks(unsigned int a[4])\nV.SetMasks(int, int)\nC++: void SetMasks(unsigned int mask1, unsigned int mask2)\nV.SetMasks(int, int, int)\nC++: void SetMasks(unsigned int mask1, unsigned int mask2,\n    unsigned int mask3)\n\n"},
  {"SetMask", PyvtkImageMaskBits_SetMask, METH_VARARGS,
   "V.SetMask(int)\nC++: void SetMask(unsigned int mask)\n\nSet/Get the bit-masks. Default is 0xffffffff.\n"},
  {"GetMasks", PyvtkImageMaskBits_GetMasks, METH_VARARGS,
   "V.GetMasks() -> (int, int, int, int)\nC++: unsigned int *GetMasks()\n\n"},
  {"SetOperation", PyvtkImageMaskBits_SetOperation, METH_VARARGS,
   "V.SetOperation(int)\nC++: virtual void SetOperation(int _arg)\n\nSet/Get the boolean operator. Default is AND.\n"},
  {"GetOperation", PyvtkImageMaskBits_GetOperation, METH_VARARGS,
   "V.GetOperation() -> int\nC++: virtual int GetOperation()\n\nSet/Get the boolean operator. Default is AND.\n"},
  {"SetOperationToAnd", PyvtkImageMaskBits_SetOperationToAnd, METH_VARARGS,
   "V.SetOperationToAnd()\nC++: void SetOperationToAnd()\n\nSet/Get the boolean operator. Default is AND.\n"},
  {"SetOperationToOr", PyvtkImageMaskBits_SetOperationToOr, METH_VARARGS,
   "V.SetOperationToOr()\nC++: void SetOperationToOr()\n\nSet/Get the boolean operator. Default is AND.\n"},
  {"SetOperationToXor", PyvtkImageMaskBits_SetOperationToXor, METH_VARARGS,
   "V.SetOperationToXor()\nC++: void SetOperationToXor()\n\nSet/Get the boolean operator. Default is AND.\n"},
  {"SetOperationToNand", PyvtkImageMaskBits_SetOperationToNand, METH_VARARGS,
   "V.SetOperationToNand()\nC++: void SetOperationToNand()\n\nSet/Get the boolean operator. Default is AND.\n"},
  {"SetOperationToNor", PyvtkImageMaskBits_SetOperationToNor, METH_VARARGS,
   "V.SetOperationToNor()\nC++: void SetOperationToNor()\n\nSet/Get the boolean operator. Default is AND.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageMaskBits_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingMathPython.vtkImageMaskBits", // tp_name
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
  PyvtkImageMaskBits_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageMaskBits_StaticNew()
{
  return vtkImageMaskBits::New();
}

PyObject *PyvtkImageMaskBits_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageMaskBits_Type, PyvtkImageMaskBits_Methods,
    "vtkImageMaskBits",
 &PyvtkImageMaskBits_StaticNew);

  PyTypeObject *pytype = &PyvtkImageMaskBits_Type;

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

void PyVTKAddFile_vtkImageMaskBits(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageMaskBits_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageMaskBits", o) != 0)
  {
    Py_DECREF(o);
  }

}

