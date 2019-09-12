// python wrapper for vtkImageCast
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
#include "vtkImageCast.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageCast(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageCast_ClassNew(); }

#ifndef DECLARED_PyvtkThreadedImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkThreadedImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkThreadedImageAlgorithm_ClassNew
#endif

static const char *PyvtkImageCast_Doc =
  "vtkImageCast - Image Data type Casting Filter\n\n"
  "Superclass: vtkThreadedImageAlgorithm\n\n"
  "vtkImageCast filter casts the input type to match the output type in\n"
  "the image processing pipeline.  The filter does nothing if the input\n"
  "already has the correct type.  To specify the \"CastTo\" type, use\n"
  "\"SetOutputScalarType\" method.\n\n"
  "@warning\n"
  "As vtkImageCast only casts values without rescaling them, its use is\n"
  "not recommended. vtkImageShiftScale is the recommended way to change\n"
  "the type of an image data.\n\n"
  "@sa\n"
  "vtkImageThreshold vtkImageShiftScale\n\n";


static PyObject *
PyvtkImageCast_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageCast::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCast_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCast *op = static_cast<vtkImageCast *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageCast::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCast_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageCast *tempr = vtkImageCast::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCast_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCast *op = static_cast<vtkImageCast *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageCast *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageCast::NewInstance());

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
PyvtkImageCast_SetOutputScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCast *op = static_cast<vtkImageCast *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarType(temp0);
    }
    else
    {
      op->vtkImageCast::SetOutputScalarType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCast_GetOutputScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCast *op = static_cast<vtkImageCast *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputScalarType() :
      op->vtkImageCast::GetOutputScalarType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCast_SetOutputScalarTypeToFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCast *op = static_cast<vtkImageCast *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToFloat();
    }
    else
    {
      op->vtkImageCast::SetOutputScalarTypeToFloat();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCast_SetOutputScalarTypeToDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCast *op = static_cast<vtkImageCast *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToDouble();
    }
    else
    {
      op->vtkImageCast::SetOutputScalarTypeToDouble();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCast_SetOutputScalarTypeToInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCast *op = static_cast<vtkImageCast *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToInt();
    }
    else
    {
      op->vtkImageCast::SetOutputScalarTypeToInt();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCast_SetOutputScalarTypeToUnsignedInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCast *op = static_cast<vtkImageCast *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToUnsignedInt();
    }
    else
    {
      op->vtkImageCast::SetOutputScalarTypeToUnsignedInt();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCast_SetOutputScalarTypeToLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCast *op = static_cast<vtkImageCast *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToLong();
    }
    else
    {
      op->vtkImageCast::SetOutputScalarTypeToLong();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCast_SetOutputScalarTypeToUnsignedLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCast *op = static_cast<vtkImageCast *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToUnsignedLong();
    }
    else
    {
      op->vtkImageCast::SetOutputScalarTypeToUnsignedLong();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCast_SetOutputScalarTypeToShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCast *op = static_cast<vtkImageCast *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToShort();
    }
    else
    {
      op->vtkImageCast::SetOutputScalarTypeToShort();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCast_SetOutputScalarTypeToUnsignedShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCast *op = static_cast<vtkImageCast *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToUnsignedShort();
    }
    else
    {
      op->vtkImageCast::SetOutputScalarTypeToUnsignedShort();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCast_SetOutputScalarTypeToUnsignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCast *op = static_cast<vtkImageCast *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToUnsignedChar();
    }
    else
    {
      op->vtkImageCast::SetOutputScalarTypeToUnsignedChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCast_SetOutputScalarTypeToChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCast *op = static_cast<vtkImageCast *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToChar();
    }
    else
    {
      op->vtkImageCast::SetOutputScalarTypeToChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCast_SetClampOverflow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClampOverflow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCast *op = static_cast<vtkImageCast *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetClampOverflow(temp0);
    }
    else
    {
      op->vtkImageCast::SetClampOverflow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCast_GetClampOverflow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClampOverflow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCast *op = static_cast<vtkImageCast *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetClampOverflow() :
      op->vtkImageCast::GetClampOverflow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCast_ClampOverflowOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClampOverflowOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCast *op = static_cast<vtkImageCast *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClampOverflowOn();
    }
    else
    {
      op->vtkImageCast::ClampOverflowOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCast_ClampOverflowOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClampOverflowOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCast *op = static_cast<vtkImageCast *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClampOverflowOff();
    }
    else
    {
      op->vtkImageCast::ClampOverflowOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageCast_Methods[] = {
  {"IsTypeOf", PyvtkImageCast_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageCast_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageCast_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageCast\nC++: static vtkImageCast *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageCast_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageCast\nC++: vtkImageCast *NewInstance()\n\n"},
  {"SetOutputScalarType", PyvtkImageCast_SetOutputScalarType, METH_VARARGS,
   "V.SetOutputScalarType(int)\nC++: virtual void SetOutputScalarType(int _arg)\n\nSet the desired output scalar type to cast to.\n"},
  {"GetOutputScalarType", PyvtkImageCast_GetOutputScalarType, METH_VARARGS,
   "V.GetOutputScalarType() -> int\nC++: virtual int GetOutputScalarType()\n\nSet the desired output scalar type to cast to.\n"},
  {"SetOutputScalarTypeToFloat", PyvtkImageCast_SetOutputScalarTypeToFloat, METH_VARARGS,
   "V.SetOutputScalarTypeToFloat()\nC++: void SetOutputScalarTypeToFloat()\n\nSet the desired output scalar type to cast to.\n"},
  {"SetOutputScalarTypeToDouble", PyvtkImageCast_SetOutputScalarTypeToDouble, METH_VARARGS,
   "V.SetOutputScalarTypeToDouble()\nC++: void SetOutputScalarTypeToDouble()\n\nSet the desired output scalar type to cast to.\n"},
  {"SetOutputScalarTypeToInt", PyvtkImageCast_SetOutputScalarTypeToInt, METH_VARARGS,
   "V.SetOutputScalarTypeToInt()\nC++: void SetOutputScalarTypeToInt()\n\nSet the desired output scalar type to cast to.\n"},
  {"SetOutputScalarTypeToUnsignedInt", PyvtkImageCast_SetOutputScalarTypeToUnsignedInt, METH_VARARGS,
   "V.SetOutputScalarTypeToUnsignedInt()\nC++: void SetOutputScalarTypeToUnsignedInt()\n\nSet the desired output scalar type to cast to.\n"},
  {"SetOutputScalarTypeToLong", PyvtkImageCast_SetOutputScalarTypeToLong, METH_VARARGS,
   "V.SetOutputScalarTypeToLong()\nC++: void SetOutputScalarTypeToLong()\n\nSet the desired output scalar type to cast to.\n"},
  {"SetOutputScalarTypeToUnsignedLong", PyvtkImageCast_SetOutputScalarTypeToUnsignedLong, METH_VARARGS,
   "V.SetOutputScalarTypeToUnsignedLong()\nC++: void SetOutputScalarTypeToUnsignedLong()\n\nSet the desired output scalar type to cast to.\n"},
  {"SetOutputScalarTypeToShort", PyvtkImageCast_SetOutputScalarTypeToShort, METH_VARARGS,
   "V.SetOutputScalarTypeToShort()\nC++: void SetOutputScalarTypeToShort()\n\nSet the desired output scalar type to cast to.\n"},
  {"SetOutputScalarTypeToUnsignedShort", PyvtkImageCast_SetOutputScalarTypeToUnsignedShort, METH_VARARGS,
   "V.SetOutputScalarTypeToUnsignedShort()\nC++: void SetOutputScalarTypeToUnsignedShort()\n\nSet the desired output scalar type to cast to.\n"},
  {"SetOutputScalarTypeToUnsignedChar", PyvtkImageCast_SetOutputScalarTypeToUnsignedChar, METH_VARARGS,
   "V.SetOutputScalarTypeToUnsignedChar()\nC++: void SetOutputScalarTypeToUnsignedChar()\n\nSet the desired output scalar type to cast to.\n"},
  {"SetOutputScalarTypeToChar", PyvtkImageCast_SetOutputScalarTypeToChar, METH_VARARGS,
   "V.SetOutputScalarTypeToChar()\nC++: void SetOutputScalarTypeToChar()\n\nSet the desired output scalar type to cast to.\n"},
  {"SetClampOverflow", PyvtkImageCast_SetClampOverflow, METH_VARARGS,
   "V.SetClampOverflow(int)\nC++: virtual void SetClampOverflow(vtkTypeBool _arg)\n\nWhen the ClampOverflow flag is on, the data is thresholded so\nthat the output value does not exceed the max or min of the data\ntype. Clamping is safer because otherwise you might invoke\nundefined behavior (and may crash) if the type conversion is out\nof range of the data type.  On the other hand, clamping is\nslower. By default ClampOverflow is off.\n"},
  {"GetClampOverflow", PyvtkImageCast_GetClampOverflow, METH_VARARGS,
   "V.GetClampOverflow() -> int\nC++: virtual vtkTypeBool GetClampOverflow()\n\nWhen the ClampOverflow flag is on, the data is thresholded so\nthat the output value does not exceed the max or min of the data\ntype. Clamping is safer because otherwise you might invoke\nundefined behavior (and may crash) if the type conversion is out\nof range of the data type.  On the other hand, clamping is\nslower. By default ClampOverflow is off.\n"},
  {"ClampOverflowOn", PyvtkImageCast_ClampOverflowOn, METH_VARARGS,
   "V.ClampOverflowOn()\nC++: virtual void ClampOverflowOn()\n\nWhen the ClampOverflow flag is on, the data is thresholded so\nthat the output value does not exceed the max or min of the data\ntype. Clamping is safer because otherwise you might invoke\nundefined behavior (and may crash) if the type conversion is out\nof range of the data type.  On the other hand, clamping is\nslower. By default ClampOverflow is off.\n"},
  {"ClampOverflowOff", PyvtkImageCast_ClampOverflowOff, METH_VARARGS,
   "V.ClampOverflowOff()\nC++: virtual void ClampOverflowOff()\n\nWhen the ClampOverflow flag is on, the data is thresholded so\nthat the output value does not exceed the max or min of the data\ntype. Clamping is safer because otherwise you might invoke\nundefined behavior (and may crash) if the type conversion is out\nof range of the data type.  On the other hand, clamping is\nslower. By default ClampOverflow is off.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageCast_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingCorePython.vtkImageCast", // tp_name
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
  PyvtkImageCast_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageCast_StaticNew()
{
  return vtkImageCast::New();
}

PyObject *PyvtkImageCast_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageCast_Type, PyvtkImageCast_Methods,
    "vtkImageCast",
 &PyvtkImageCast_StaticNew);

  PyTypeObject *pytype = &PyvtkImageCast_Type;

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

void PyVTKAddFile_vtkImageCast(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageCast_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageCast", o) != 0)
  {
    Py_DECREF(o);
  }

}

