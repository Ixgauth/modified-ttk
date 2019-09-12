// python wrapper for vtkSegYReader
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
#include "vtkSegYReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSegYReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSegYReader_ClassNew(); }

#ifndef DECLARED_PyvtkDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkSegYReader_Doc =
  "vtkSegYReader - Reads SegY data files.\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkSegYReader reads SegY data files. We create a vtkStructuredGrid\n"
  "for 2.5D SegY and 3D data. If we set the StructuredGrid option to 0\n"
  "we create a vtkImageData for 3D data. This saves memory and may\n"
  "speed-up certain algorithms, but the position and the shape of the\n"
  "data may not be correct. The axes for the data are: crossline,\n"
  "inline, depth\n\n";

static PyTypeObject PyvtkSegYReader_VTKSegYCoordinateModes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOSegYPython.vtkSegYReader.VTKSegYCoordinateModes", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkSegYReader_VTKSegYCoordinateModes_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkSegYReader_VTKSegYCoordinateModes_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSegYReader_VTKSegYCoordinateModes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkSegYReader_VTKSegYVerticalCRS_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOSegYPython.vtkSegYReader.VTKSegYVerticalCRS", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkSegYReader_VTKSegYVerticalCRS_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkSegYReader_VTKSegYVerticalCRS_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSegYReader_VTKSegYVerticalCRS_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkSegYReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSegYReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegYReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegYReader *op = static_cast<vtkSegYReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSegYReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegYReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSegYReader *tempr = vtkSegYReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegYReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegYReader *op = static_cast<vtkSegYReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSegYReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSegYReader::NewInstance());

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
PyvtkSegYReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegYReader *op = static_cast<vtkSegYReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileName(temp0);
    }
    else
    {
      op->vtkSegYReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegYReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegYReader *op = static_cast<vtkSegYReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkSegYReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegYReader_SetXYCoordMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXYCoordMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegYReader *op = static_cast<vtkSegYReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXYCoordMode(temp0);
    }
    else
    {
      op->vtkSegYReader::SetXYCoordMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegYReader_GetXYCoordModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXYCoordModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegYReader *op = static_cast<vtkSegYReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetXYCoordModeMinValue() :
      op->vtkSegYReader::GetXYCoordModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegYReader_GetXYCoordModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXYCoordModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegYReader *op = static_cast<vtkSegYReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetXYCoordModeMaxValue() :
      op->vtkSegYReader::GetXYCoordModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegYReader_GetXYCoordMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXYCoordMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegYReader *op = static_cast<vtkSegYReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetXYCoordMode() :
      op->vtkSegYReader::GetXYCoordMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegYReader_SetXYCoordModeToSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXYCoordModeToSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegYReader *op = static_cast<vtkSegYReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetXYCoordModeToSource();
    }
    else
    {
      op->vtkSegYReader::SetXYCoordModeToSource();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegYReader_SetXYCoordModeToCDP(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXYCoordModeToCDP");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegYReader *op = static_cast<vtkSegYReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetXYCoordModeToCDP();
    }
    else
    {
      op->vtkSegYReader::SetXYCoordModeToCDP();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegYReader_SetXYCoordModeToCustom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXYCoordModeToCustom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegYReader *op = static_cast<vtkSegYReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetXYCoordModeToCustom();
    }
    else
    {
      op->vtkSegYReader::SetXYCoordModeToCustom();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegYReader_SetXCoordByte(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXCoordByte");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegYReader *op = static_cast<vtkSegYReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXCoordByte(temp0);
    }
    else
    {
      op->vtkSegYReader::SetXCoordByte(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegYReader_GetXCoordByte(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXCoordByte");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegYReader *op = static_cast<vtkSegYReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetXCoordByte() :
      op->vtkSegYReader::GetXCoordByte());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegYReader_SetYCoordByte(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYCoordByte");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegYReader *op = static_cast<vtkSegYReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYCoordByte(temp0);
    }
    else
    {
      op->vtkSegYReader::SetYCoordByte(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegYReader_GetYCoordByte(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYCoordByte");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegYReader *op = static_cast<vtkSegYReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetYCoordByte() :
      op->vtkSegYReader::GetYCoordByte());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegYReader_SetVerticalCRS(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVerticalCRS");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegYReader *op = static_cast<vtkSegYReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVerticalCRS(temp0);
    }
    else
    {
      op->vtkSegYReader::SetVerticalCRS(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegYReader_GetVerticalCRS(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVerticalCRS");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegYReader *op = static_cast<vtkSegYReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVerticalCRS() :
      op->vtkSegYReader::GetVerticalCRS());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegYReader_SetStructuredGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStructuredGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegYReader *op = static_cast<vtkSegYReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStructuredGrid(temp0);
    }
    else
    {
      op->vtkSegYReader::SetStructuredGrid(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegYReader_GetStructuredGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStructuredGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegYReader *op = static_cast<vtkSegYReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStructuredGrid() :
      op->vtkSegYReader::GetStructuredGrid());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegYReader_StructuredGridOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StructuredGridOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegYReader *op = static_cast<vtkSegYReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StructuredGridOn();
    }
    else
    {
      op->vtkSegYReader::StructuredGridOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegYReader_StructuredGridOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StructuredGridOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegYReader *op = static_cast<vtkSegYReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StructuredGridOff();
    }
    else
    {
      op->vtkSegYReader::StructuredGridOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSegYReader_Methods[] = {
  {"IsTypeOf", PyvtkSegYReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSegYReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSegYReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSegYReader\nC++: static vtkSegYReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSegYReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSegYReader\nC++: vtkSegYReader *NewInstance()\n\n"},
  {"SetFileName", PyvtkSegYReader_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *_arg)\n\n"},
  {"GetFileName", PyvtkSegYReader_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\n"},
  {"SetXYCoordMode", PyvtkSegYReader_SetXYCoordMode, METH_VARARGS,
   "V.SetXYCoordMode(int)\nC++: virtual void SetXYCoordMode(int _arg)\n\nSpecify whether to use source x/y coordinates or CDP coordinates\nor custom byte positions for data position in the SEG-Y trace\nheader. Defaults to source x/y coordinates.\n\nAs per SEG-Y rev 2.0 specification, Source XY coordinate bytes =\n(73, 77) CDP XY coordinate bytes = (181, 185)\n"},
  {"GetXYCoordModeMinValue", PyvtkSegYReader_GetXYCoordModeMinValue, METH_VARARGS,
   "V.GetXYCoordModeMinValue() -> int\nC++: virtual int GetXYCoordModeMinValue()\n\nSpecify whether to use source x/y coordinates or CDP coordinates\nor custom byte positions for data position in the SEG-Y trace\nheader. Defaults to source x/y coordinates.\n\nAs per SEG-Y rev 2.0 specification, Source XY coordinate bytes =\n(73, 77) CDP XY coordinate bytes = (181, 185)\n"},
  {"GetXYCoordModeMaxValue", PyvtkSegYReader_GetXYCoordModeMaxValue, METH_VARARGS,
   "V.GetXYCoordModeMaxValue() -> int\nC++: virtual int GetXYCoordModeMaxValue()\n\nSpecify whether to use source x/y coordinates or CDP coordinates\nor custom byte positions for data position in the SEG-Y trace\nheader. Defaults to source x/y coordinates.\n\nAs per SEG-Y rev 2.0 specification, Source XY coordinate bytes =\n(73, 77) CDP XY coordinate bytes = (181, 185)\n"},
  {"GetXYCoordMode", PyvtkSegYReader_GetXYCoordMode, METH_VARARGS,
   "V.GetXYCoordMode() -> int\nC++: virtual int GetXYCoordMode()\n\nSpecify whether to use source x/y coordinates or CDP coordinates\nor custom byte positions for data position in the SEG-Y trace\nheader. Defaults to source x/y coordinates.\n\nAs per SEG-Y rev 2.0 specification, Source XY coordinate bytes =\n(73, 77) CDP XY coordinate bytes = (181, 185)\n"},
  {"SetXYCoordModeToSource", PyvtkSegYReader_SetXYCoordModeToSource, METH_VARARGS,
   "V.SetXYCoordModeToSource()\nC++: void SetXYCoordModeToSource()\n\nSpecify whether to use source x/y coordinates or CDP coordinates\nor custom byte positions for data position in the SEG-Y trace\nheader. Defaults to source x/y coordinates.\n\nAs per SEG-Y rev 2.0 specification, Source XY coordinate bytes =\n(73, 77) CDP XY coordinate bytes = (181, 185)\n"},
  {"SetXYCoordModeToCDP", PyvtkSegYReader_SetXYCoordModeToCDP, METH_VARARGS,
   "V.SetXYCoordModeToCDP()\nC++: void SetXYCoordModeToCDP()\n\nSpecify whether to use source x/y coordinates or CDP coordinates\nor custom byte positions for data position in the SEG-Y trace\nheader. Defaults to source x/y coordinates.\n\nAs per SEG-Y rev 2.0 specification, Source XY coordinate bytes =\n(73, 77) CDP XY coordinate bytes = (181, 185)\n"},
  {"SetXYCoordModeToCustom", PyvtkSegYReader_SetXYCoordModeToCustom, METH_VARARGS,
   "V.SetXYCoordModeToCustom()\nC++: void SetXYCoordModeToCustom()\n\nSpecify whether to use source x/y coordinates or CDP coordinates\nor custom byte positions for data position in the SEG-Y trace\nheader. Defaults to source x/y coordinates.\n\nAs per SEG-Y rev 2.0 specification, Source XY coordinate bytes =\n(73, 77) CDP XY coordinate bytes = (181, 185)\n"},
  {"SetXCoordByte", PyvtkSegYReader_SetXCoordByte, METH_VARARGS,
   "V.SetXCoordByte(int)\nC++: virtual void SetXCoordByte(int _arg)\n\nSpecify X and Y byte positions for custom XYCoordinateMode. By\ndefault, XCoordByte = 73, YCoordByte = 77 i.e. source xy.\n\n\\sa SetXYCoordinatesModeToCustom()\n"},
  {"GetXCoordByte", PyvtkSegYReader_GetXCoordByte, METH_VARARGS,
   "V.GetXCoordByte() -> int\nC++: virtual int GetXCoordByte()\n\nSpecify X and Y byte positions for custom XYCoordinateMode. By\ndefault, XCoordByte = 73, YCoordByte = 77 i.e. source xy.\n\n\\sa SetXYCoordinatesModeToCustom()\n"},
  {"SetYCoordByte", PyvtkSegYReader_SetYCoordByte, METH_VARARGS,
   "V.SetYCoordByte(int)\nC++: virtual void SetYCoordByte(int _arg)\n\nSpecify X and Y byte positions for custom XYCoordinateMode. By\ndefault, XCoordByte = 73, YCoordByte = 77 i.e. source xy.\n\n\\sa SetXYCoordinatesModeToCustom()\n"},
  {"GetYCoordByte", PyvtkSegYReader_GetYCoordByte, METH_VARARGS,
   "V.GetYCoordByte() -> int\nC++: virtual int GetYCoordByte()\n\nSpecify X and Y byte positions for custom XYCoordinateMode. By\ndefault, XCoordByte = 73, YCoordByte = 77 i.e. source xy.\n\n\\sa SetXYCoordinatesModeToCustom()\n"},
  {"SetVerticalCRS", PyvtkSegYReader_SetVerticalCRS, METH_VARARGS,
   "V.SetVerticalCRS(int)\nC++: virtual void SetVerticalCRS(int _arg)\n\nSpecify whether the vertical coordinates in the SEG-Y file are\nheights (positive up) or depths (positive down). By default, the\nvertical coordinates are treated as heights (i.e. positive up).\nThis means that the Z-axis of the dataset goes from 0 (surface)\nto -ve depth (last sample).\n\note As per the SEG-Y rev 2.0 specification, this information is\ndefined in the Location Data Stanza of the Extended Textual\nHeader. However, as of this revision, vtkSegY2DReader does not\nsupport reading the extended textual header.\n"},
  {"GetVerticalCRS", PyvtkSegYReader_GetVerticalCRS, METH_VARARGS,
   "V.GetVerticalCRS() -> int\nC++: virtual int GetVerticalCRS()\n\nSpecify whether the vertical coordinates in the SEG-Y file are\nheights (positive up) or depths (positive down). By default, the\nvertical coordinates are treated as heights (i.e. positive up).\nThis means that the Z-axis of the dataset goes from 0 (surface)\nto -ve depth (last sample).\n\note As per the SEG-Y rev 2.0 specification, this information is\ndefined in the Location Data Stanza of the Extended Textual\nHeader. However, as of this revision, vtkSegY2DReader does not\nsupport reading the extended textual header.\n"},
  {"SetStructuredGrid", PyvtkSegYReader_SetStructuredGrid, METH_VARARGS,
   "V.SetStructuredGrid(int)\nC++: virtual void SetStructuredGrid(int _arg)\n\nSpecify if we create a vtkStructuredGrid even when the data is\n3D. Note this consumes more memory but it shows the precise\nlocation for each point and the correct shape of the data. The\ndefault value is true.  If we set this option to false we create\na vtkImageData for the SegY 3D dataset.\n"},
  {"GetStructuredGrid", PyvtkSegYReader_GetStructuredGrid, METH_VARARGS,
   "V.GetStructuredGrid() -> int\nC++: virtual int GetStructuredGrid()\n\nSpecify if we create a vtkStructuredGrid even when the data is\n3D. Note this consumes more memory but it shows the precise\nlocation for each point and the correct shape of the data. The\ndefault value is true.  If we set this option to false we create\na vtkImageData for the SegY 3D dataset.\n"},
  {"StructuredGridOn", PyvtkSegYReader_StructuredGridOn, METH_VARARGS,
   "V.StructuredGridOn()\nC++: virtual void StructuredGridOn()\n\nSpecify if we create a vtkStructuredGrid even when the data is\n3D. Note this consumes more memory but it shows the precise\nlocation for each point and the correct shape of the data. The\ndefault value is true.  If we set this option to false we create\na vtkImageData for the SegY 3D dataset.\n"},
  {"StructuredGridOff", PyvtkSegYReader_StructuredGridOff, METH_VARARGS,
   "V.StructuredGridOff()\nC++: virtual void StructuredGridOff()\n\nSpecify if we create a vtkStructuredGrid even when the data is\n3D. Note this consumes more memory but it shows the precise\nlocation for each point and the correct shape of the data. The\ndefault value is true.  If we set this option to false we create\na vtkImageData for the SegY 3D dataset.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSegYReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOSegYPython.vtkSegYReader", // tp_name
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
  PyvtkSegYReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSegYReader_StaticNew()
{
  return vtkSegYReader::New();
}

PyObject *PyvtkSegYReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSegYReader_Type, PyvtkSegYReader_Methods,
    "vtkSegYReader",
 &PyvtkSegYReader_StaticNew);

  PyTypeObject *pytype = &PyvtkSegYReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataSetAlgorithm_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkSegYReader_VTKSegYCoordinateModes_Type);
  PyvtkSegYReader_VTKSegYCoordinateModes_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkSegYReader_VTKSegYCoordinateModes_Type);

  o = (PyObject *)&PyvtkSegYReader_VTKSegYCoordinateModes_Type;
  if (PyDict_SetItemString(d, "VTKSegYCoordinateModes", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkSegYReader_VTKSegYVerticalCRS_Type);
  PyvtkSegYReader_VTKSegYVerticalCRS_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkSegYReader_VTKSegYVerticalCRS_Type);

  o = (PyObject *)&PyvtkSegYReader_VTKSegYVerticalCRS_Type;
  if (PyDict_SetItemString(d, "VTKSegYVerticalCRS", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkSegYReader::VTKSegYCoordinateModes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "VTK_SEGY_SOURCE", vtkSegYReader::VTK_SEGY_SOURCE },
        { "VTK_SEGY_CDP", vtkSegYReader::VTK_SEGY_CDP },
        { "VTK_SEGY_CUSTOM", vtkSegYReader::VTK_SEGY_CUSTOM },
      };

    o = PyvtkSegYReader_VTKSegYCoordinateModes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkSegYReader::VTKSegYVerticalCRS cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "VTK_SEGY_VERTICAL_HEIGHTS", vtkSegYReader::VTK_SEGY_VERTICAL_HEIGHTS },
        { "VTK_SEGY_VERTICAL_DEPTHS", vtkSegYReader::VTK_SEGY_VERTICAL_DEPTHS },
      };

    o = PyvtkSegYReader_VTKSegYVerticalCRS_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSegYReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSegYReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSegYReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

