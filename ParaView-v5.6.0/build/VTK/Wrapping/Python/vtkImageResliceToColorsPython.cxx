// python wrapper for vtkImageResliceToColors
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
#include "vtkImageResliceToColors.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageResliceToColors(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageResliceToColors_ClassNew(); }

#ifndef DECLARED_PyvtkImageReslice_ClassNew
extern "C" { PyObject *PyvtkImageReslice_ClassNew(); }
#define DECLARED_PyvtkImageReslice_ClassNew
#endif

static const char *PyvtkImageResliceToColors_Doc =
  "vtkImageResliceToColors - Reslice and produce color scalars.\n\n"
  "Superclass: vtkImageReslice\n\n"
  "vtkImageResliceToColors is an extension of vtkImageReslice that\n"
  "produces color scalars.  It should be provided with a lookup table\n"
  "that defines the output colors and the desired range of input values\n"
  "to map to those colors.  If the input has multiple components, then\n"
  "you should use the SetVectorMode() method of the lookup table to\n"
  "specify how the vectors will be colored.  If no lookup table is\n"
  "provided, then the input must already be color scalars, but they will\n"
  "be converted to the specified output format.\n"
  "@sa\n"
  "vtkImageMapToColors\n\n";


static PyObject *
PyvtkImageResliceToColors_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageResliceToColors::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceToColors_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceToColors *op = static_cast<vtkImageResliceToColors *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageResliceToColors::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceToColors_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageResliceToColors *tempr = vtkImageResliceToColors::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceToColors_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceToColors *op = static_cast<vtkImageResliceToColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageResliceToColors *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageResliceToColors::NewInstance());

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
PyvtkImageResliceToColors_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceToColors *op = static_cast<vtkImageResliceToColors *>(vp);

  vtkScalarsToColors *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
  {
    if (ap.IsBound())
    {
      op->SetLookupTable(temp0);
    }
    else
    {
      op->vtkImageResliceToColors::SetLookupTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceToColors_GetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceToColors *op = static_cast<vtkImageResliceToColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkScalarsToColors *tempr = (ap.IsBound() ?
      op->GetLookupTable() :
      op->vtkImageResliceToColors::GetLookupTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceToColors_SetOutputFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceToColors *op = static_cast<vtkImageResliceToColors *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputFormat(temp0);
    }
    else
    {
      op->vtkImageResliceToColors::SetOutputFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceToColors_GetOutputFormatMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputFormatMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceToColors *op = static_cast<vtkImageResliceToColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputFormatMinValue() :
      op->vtkImageResliceToColors::GetOutputFormatMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceToColors_GetOutputFormatMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputFormatMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceToColors *op = static_cast<vtkImageResliceToColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputFormatMaxValue() :
      op->vtkImageResliceToColors::GetOutputFormatMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceToColors_GetOutputFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceToColors *op = static_cast<vtkImageResliceToColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputFormat() :
      op->vtkImageResliceToColors::GetOutputFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceToColors_SetOutputFormatToRGBA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputFormatToRGBA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceToColors *op = static_cast<vtkImageResliceToColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputFormatToRGBA();
    }
    else
    {
      op->vtkImageResliceToColors::SetOutputFormatToRGBA();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceToColors_SetOutputFormatToRGB(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputFormatToRGB");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceToColors *op = static_cast<vtkImageResliceToColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputFormatToRGB();
    }
    else
    {
      op->vtkImageResliceToColors::SetOutputFormatToRGB();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceToColors_SetOutputFormatToLuminanceAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputFormatToLuminanceAlpha");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceToColors *op = static_cast<vtkImageResliceToColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputFormatToLuminanceAlpha();
    }
    else
    {
      op->vtkImageResliceToColors::SetOutputFormatToLuminanceAlpha();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceToColors_SetOutputFormatToLuminance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputFormatToLuminance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceToColors *op = static_cast<vtkImageResliceToColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputFormatToLuminance();
    }
    else
    {
      op->vtkImageResliceToColors::SetOutputFormatToLuminance();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceToColors_SetBypass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBypass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceToColors *op = static_cast<vtkImageResliceToColors *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBypass(temp0);
    }
    else
    {
      op->vtkImageResliceToColors::SetBypass(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceToColors_BypassOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BypassOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceToColors *op = static_cast<vtkImageResliceToColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BypassOn();
    }
    else
    {
      op->vtkImageResliceToColors::BypassOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceToColors_BypassOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BypassOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceToColors *op = static_cast<vtkImageResliceToColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BypassOff();
    }
    else
    {
      op->vtkImageResliceToColors::BypassOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceToColors_GetBypass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBypass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceToColors *op = static_cast<vtkImageResliceToColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBypass() :
      op->vtkImageResliceToColors::GetBypass());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceToColors_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceToColors *op = static_cast<vtkImageResliceToColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkImageResliceToColors::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageResliceToColors_Methods[] = {
  {"IsTypeOf", PyvtkImageResliceToColors_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageResliceToColors_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageResliceToColors_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageResliceToColors\nC++: static vtkImageResliceToColors *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageResliceToColors_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageResliceToColors\nC++: vtkImageResliceToColors *NewInstance()\n\n"},
  {"SetLookupTable", PyvtkImageResliceToColors_SetLookupTable, METH_VARARGS,
   "V.SetLookupTable(vtkScalarsToColors)\nC++: virtual void SetLookupTable(vtkScalarsToColors *table)\n\nSet a lookup table to apply to the data.  Use the Range,\nVectorMode, and VectorComponents of the table to control the\nmapping of the input data to colors.  If any output voxel is\ntransformed to a point outside the input volume, then that voxel\nwill be set to the BackgroundColor.\n"},
  {"GetLookupTable", PyvtkImageResliceToColors_GetLookupTable, METH_VARARGS,
   "V.GetLookupTable() -> vtkScalarsToColors\nC++: virtual vtkScalarsToColors *GetLookupTable()\n\nSet a lookup table to apply to the data.  Use the Range,\nVectorMode, and VectorComponents of the table to control the\nmapping of the input data to colors.  If any output voxel is\ntransformed to a point outside the input volume, then that voxel\nwill be set to the BackgroundColor.\n"},
  {"SetOutputFormat", PyvtkImageResliceToColors_SetOutputFormat, METH_VARARGS,
   "V.SetOutputFormat(int)\nC++: virtual void SetOutputFormat(int _arg)\n\nSet the output format, the default is RGBA.\n"},
  {"GetOutputFormatMinValue", PyvtkImageResliceToColors_GetOutputFormatMinValue, METH_VARARGS,
   "V.GetOutputFormatMinValue() -> int\nC++: virtual int GetOutputFormatMinValue()\n\nSet the output format, the default is RGBA.\n"},
  {"GetOutputFormatMaxValue", PyvtkImageResliceToColors_GetOutputFormatMaxValue, METH_VARARGS,
   "V.GetOutputFormatMaxValue() -> int\nC++: virtual int GetOutputFormatMaxValue()\n\nSet the output format, the default is RGBA.\n"},
  {"GetOutputFormat", PyvtkImageResliceToColors_GetOutputFormat, METH_VARARGS,
   "V.GetOutputFormat() -> int\nC++: virtual int GetOutputFormat()\n\nSet the output format, the default is RGBA.\n"},
  {"SetOutputFormatToRGBA", PyvtkImageResliceToColors_SetOutputFormatToRGBA, METH_VARARGS,
   "V.SetOutputFormatToRGBA()\nC++: void SetOutputFormatToRGBA()\n\nSet the output format, the default is RGBA.\n"},
  {"SetOutputFormatToRGB", PyvtkImageResliceToColors_SetOutputFormatToRGB, METH_VARARGS,
   "V.SetOutputFormatToRGB()\nC++: void SetOutputFormatToRGB()\n\nSet the output format, the default is RGBA.\n"},
  {"SetOutputFormatToLuminanceAlpha", PyvtkImageResliceToColors_SetOutputFormatToLuminanceAlpha, METH_VARARGS,
   "V.SetOutputFormatToLuminanceAlpha()\nC++: void SetOutputFormatToLuminanceAlpha()\n\nSet the output format, the default is RGBA.\n"},
  {"SetOutputFormatToLuminance", PyvtkImageResliceToColors_SetOutputFormatToLuminance, METH_VARARGS,
   "V.SetOutputFormatToLuminance()\nC++: void SetOutputFormatToLuminance()\n\nSet the output format, the default is RGBA.\n"},
  {"SetBypass", PyvtkImageResliceToColors_SetBypass, METH_VARARGS,
   "V.SetBypass(int)\nC++: void SetBypass(int bypass)\n\nBypass the color mapping operation and output the scalar values\ndirectly.  The output values will be float, rather than the input\ndata type.\n"},
  {"BypassOn", PyvtkImageResliceToColors_BypassOn, METH_VARARGS,
   "V.BypassOn()\nC++: void BypassOn()\n\n"},
  {"BypassOff", PyvtkImageResliceToColors_BypassOff, METH_VARARGS,
   "V.BypassOff()\nC++: void BypassOff()\n\n"},
  {"GetBypass", PyvtkImageResliceToColors_GetBypass, METH_VARARGS,
   "V.GetBypass() -> int\nC++: int GetBypass()\n\n"},
  {"GetMTime", PyvtkImageResliceToColors_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nWhen determining the modified time of the filter, this checks the\nmodified time of the transform and matrix.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageResliceToColors_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingCorePython.vtkImageResliceToColors", // tp_name
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
  PyvtkImageResliceToColors_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageResliceToColors_StaticNew()
{
  return vtkImageResliceToColors::New();
}

PyObject *PyvtkImageResliceToColors_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageResliceToColors_Type, PyvtkImageResliceToColors_Methods,
    "vtkImageResliceToColors",
 &PyvtkImageResliceToColors_StaticNew);

  PyTypeObject *pytype = &PyvtkImageResliceToColors_Type;

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

void PyVTKAddFile_vtkImageResliceToColors(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageResliceToColors_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageResliceToColors", o) != 0)
  {
    Py_DECREF(o);
  }

}

