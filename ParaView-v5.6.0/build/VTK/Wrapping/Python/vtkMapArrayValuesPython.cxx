// python wrapper for vtkMapArrayValues
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
#include "vtkMapArrayValues.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMapArrayValues(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMapArrayValues_ClassNew(); }

#ifndef DECLARED_PyvtkPassInputTypeAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPassInputTypeAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPassInputTypeAlgorithm_ClassNew
#endif

static const char *PyvtkMapArrayValues_Doc =
  "vtkMapArrayValues - Map values in an input array to different values\nin\n  an output array of (possibly) different type.\n\n"
  "Superclass: vtkPassInputTypeAlgorithm\n\n"
  "vtkMapArrayValues allows you to associate certain values of an\n"
  "attribute array (on either a vertex, edge, point, or cell) with\n"
  "different values in a newly created attribute array.\n\n"
  "vtkMapArrayValues manages an internal STL map of vtkVariants that can\n"
  "be added to or cleared. When this filter executes, each \"key\" is\n"
  "searched for in the input array and the indices of the output array\n"
  "at which there were matches the set to the mapped \"value\".\n\n"
  "You can control whether the input array values are passed to the\n"
  "output before the mapping occurs (using PassArray) or, if not, what\n"
  "value to set the unmapped indices to (using FillValue).\n\n"
  "One application of this filter is to help address the dirty data\n"
  "problem. For example, using vtkMapArrayValues you could associate the\n"
  "vertex values \"Foo, John\", \"Foo, John.\", and \"John Foo\" with a single\n"
  "entity.\n\n";

static PyTypeObject PyvtkMapArrayValues_FieldType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkMapArrayValues.FieldType", // tp_name
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

PyObject *PyvtkMapArrayValues_FieldType_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkMapArrayValues_FieldType_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkMapArrayValues_FieldType_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkMapArrayValues_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMapArrayValues::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapArrayValues_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMapArrayValues::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapArrayValues_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMapArrayValues *tempr = vtkMapArrayValues::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapArrayValues_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMapArrayValues *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMapArrayValues::NewInstance());

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
PyvtkMapArrayValues_SetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFieldType(temp0);
    }
    else
    {
      op->vtkMapArrayValues::SetFieldType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapArrayValues_GetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFieldType() :
      op->vtkMapArrayValues::GetFieldType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapArrayValues_SetPassArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassArray(temp0);
    }
    else
    {
      op->vtkMapArrayValues::SetPassArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapArrayValues_GetPassArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPassArray() :
      op->vtkMapArrayValues::GetPassArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapArrayValues_PassArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassArrayOn();
    }
    else
    {
      op->vtkMapArrayValues::PassArrayOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapArrayValues_PassArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassArrayOff();
    }
    else
    {
      op->vtkMapArrayValues::PassArrayOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapArrayValues_SetFillValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFillValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFillValue(temp0);
    }
    else
    {
      op->vtkMapArrayValues::SetFillValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapArrayValues_GetFillValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFillValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFillValue() :
      op->vtkMapArrayValues::GetFillValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapArrayValues_SetInputArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInputArrayName(temp0);
    }
    else
    {
      op->vtkMapArrayValues::SetInputArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapArrayValues_GetInputArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetInputArrayName() :
      op->vtkMapArrayValues::GetInputArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapArrayValues_SetOutputArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputArrayName(temp0);
    }
    else
    {
      op->vtkMapArrayValues::SetOutputArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapArrayValues_GetOutputArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetOutputArrayName() :
      op->vtkMapArrayValues::GetOutputArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapArrayValues_GetOutputArrayType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputArrayType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputArrayType() :
      op->vtkMapArrayValues::GetOutputArrayType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapArrayValues_SetOutputArrayType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputArrayType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputArrayType(temp0);
    }
    else
    {
      op->vtkMapArrayValues::SetOutputArrayType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapArrayValues_AddToMap_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddToMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  vtkVariant *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkVariant *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVariant"))
  {
    if (ap.IsBound())
    {
      op->AddToMap(*temp0, *temp1);
    }
    else
    {
      op->vtkMapArrayValues::AddToMap(*temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);

  return result;
}

static PyObject *
PyvtkMapArrayValues_AddToMap_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddToMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddToMap(temp0, temp1);
    }
    else
    {
      op->vtkMapArrayValues::AddToMap(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMapArrayValues_AddToMap_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddToMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddToMap(temp0, temp1);
    }
    else
    {
      op->vtkMapArrayValues::AddToMap(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMapArrayValues_AddToMap_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddToMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddToMap(temp0, temp1);
    }
    else
    {
      op->vtkMapArrayValues::AddToMap(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMapArrayValues_AddToMap_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddToMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddToMap(temp0, temp1);
    }
    else
    {
      op->vtkMapArrayValues::AddToMap(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMapArrayValues_AddToMap_Methods[] = {
  {nullptr, PyvtkMapArrayValues_AddToMap_s1, METH_VARARGS,
   "@WW vtkVariant vtkVariant"},
  {nullptr, PyvtkMapArrayValues_AddToMap_s2, METH_VARARGS,
   "@ii"},
  {nullptr, PyvtkMapArrayValues_AddToMap_s3, METH_VARARGS,
   "@iz"},
  {nullptr, PyvtkMapArrayValues_AddToMap_s4, METH_VARARGS,
   "@zi"},
  {nullptr, PyvtkMapArrayValues_AddToMap_s5, METH_VARARGS,
   "@zz"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMapArrayValues_AddToMap(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMapArrayValues_AddToMap_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddToMap");
  return nullptr;
}



static PyObject *
PyvtkMapArrayValues_ClearMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearMap();
    }
    else
    {
      op->vtkMapArrayValues::ClearMap();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapArrayValues_GetMapSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMapSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapArrayValues *op = static_cast<vtkMapArrayValues *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMapSize() :
      op->vtkMapArrayValues::GetMapSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMapArrayValues_Methods[] = {
  {"IsTypeOf", PyvtkMapArrayValues_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMapArrayValues_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMapArrayValues_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkMapArrayValues\nC++: static vtkMapArrayValues *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMapArrayValues_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkMapArrayValues\nC++: vtkMapArrayValues *NewInstance()\n\n"},
  {"SetFieldType", PyvtkMapArrayValues_SetFieldType, METH_VARARGS,
   "V.SetFieldType(int)\nC++: virtual void SetFieldType(int _arg)\n\nSet/Get where the data is located that is being mapped. See\nFieldType enumeration for possible values. Default is POINT_DATA.\n"},
  {"GetFieldType", PyvtkMapArrayValues_GetFieldType, METH_VARARGS,
   "V.GetFieldType() -> int\nC++: virtual int GetFieldType()\n\nSet/Get where the data is located that is being mapped. See\nFieldType enumeration for possible values. Default is POINT_DATA.\n"},
  {"SetPassArray", PyvtkMapArrayValues_SetPassArray, METH_VARARGS,
   "V.SetPassArray(int)\nC++: virtual void SetPassArray(vtkTypeBool _arg)\n\nSet/Get whether to copy the data from the input array to the\noutput array before the mapping occurs. If turned off, FillValue\nis used to initialize any unmapped array indices. Default is off.\n"},
  {"GetPassArray", PyvtkMapArrayValues_GetPassArray, METH_VARARGS,
   "V.GetPassArray() -> int\nC++: virtual vtkTypeBool GetPassArray()\n\nSet/Get whether to copy the data from the input array to the\noutput array before the mapping occurs. If turned off, FillValue\nis used to initialize any unmapped array indices. Default is off.\n"},
  {"PassArrayOn", PyvtkMapArrayValues_PassArrayOn, METH_VARARGS,
   "V.PassArrayOn()\nC++: virtual void PassArrayOn()\n\nSet/Get whether to copy the data from the input array to the\noutput array before the mapping occurs. If turned off, FillValue\nis used to initialize any unmapped array indices. Default is off.\n"},
  {"PassArrayOff", PyvtkMapArrayValues_PassArrayOff, METH_VARARGS,
   "V.PassArrayOff()\nC++: virtual void PassArrayOff()\n\nSet/Get whether to copy the data from the input array to the\noutput array before the mapping occurs. If turned off, FillValue\nis used to initialize any unmapped array indices. Default is off.\n"},
  {"SetFillValue", PyvtkMapArrayValues_SetFillValue, METH_VARARGS,
   "V.SetFillValue(float)\nC++: virtual void SetFillValue(double _arg)\n\nSet/Get whether to copy the data from the input array to the\noutput array before the mapping occurs. If turned off, FillValue\nis used to initialize any unmapped array indices. Default is -1.\n"},
  {"GetFillValue", PyvtkMapArrayValues_GetFillValue, METH_VARARGS,
   "V.GetFillValue() -> float\nC++: virtual double GetFillValue()\n\nSet/Get whether to copy the data from the input array to the\noutput array before the mapping occurs. If turned off, FillValue\nis used to initialize any unmapped array indices. Default is -1.\n"},
  {"SetInputArrayName", PyvtkMapArrayValues_SetInputArrayName, METH_VARARGS,
   "V.SetInputArrayName(string)\nC++: virtual void SetInputArrayName(const char *_arg)\n\nSet/Get the name of the input array. This must be set prior to\nexecution.\n"},
  {"GetInputArrayName", PyvtkMapArrayValues_GetInputArrayName, METH_VARARGS,
   "V.GetInputArrayName() -> string\nC++: virtual char *GetInputArrayName()\n\nSet/Get the name of the input array. This must be set prior to\nexecution.\n"},
  {"SetOutputArrayName", PyvtkMapArrayValues_SetOutputArrayName, METH_VARARGS,
   "V.SetOutputArrayName(string)\nC++: virtual void SetOutputArrayName(const char *_arg)\n\nSet/Get the name of the output array. Default is \"ArrayMap\".\n"},
  {"GetOutputArrayName", PyvtkMapArrayValues_GetOutputArrayName, METH_VARARGS,
   "V.GetOutputArrayName() -> string\nC++: virtual char *GetOutputArrayName()\n\nSet/Get the name of the output array. Default is \"ArrayMap\".\n"},
  {"GetOutputArrayType", PyvtkMapArrayValues_GetOutputArrayType, METH_VARARGS,
   "V.GetOutputArrayType() -> int\nC++: virtual int GetOutputArrayType()\n\nSet/Get the type of the output array. See vtkSetGet.h for\npossible values. Default is VTK_INT.\n"},
  {"SetOutputArrayType", PyvtkMapArrayValues_SetOutputArrayType, METH_VARARGS,
   "V.SetOutputArrayType(int)\nC++: virtual void SetOutputArrayType(int _arg)\n\nSet/Get the type of the output array. See vtkSetGet.h for\npossible values. Default is VTK_INT.\n"},
  {"AddToMap", PyvtkMapArrayValues_AddToMap, METH_VARARGS,
   "V.AddToMap(vtkVariant, vtkVariant)\nC++: void AddToMap(vtkVariant from, vtkVariant to)\nV.AddToMap(int, int)\nC++: void AddToMap(int from, int to)\nV.AddToMap(int, string)\nC++: void AddToMap(int from, const char *to)\nV.AddToMap(string, int)\nC++: void AddToMap(const char *from, int to)\nV.AddToMap(string, string)\nC++: void AddToMap(const char *from, const char *to)\n\nAdd to the internal STL map. \"from\" should be a value in the\ninput array and \"to\" should be the new value it gets assigned in\nthe output array.\n"},
  {"ClearMap", PyvtkMapArrayValues_ClearMap, METH_VARARGS,
   "V.ClearMap()\nC++: void ClearMap()\n\nClear the internal map.\n"},
  {"GetMapSize", PyvtkMapArrayValues_GetMapSize, METH_VARARGS,
   "V.GetMapSize() -> int\nC++: int GetMapSize()\n\nGet the size of the internal map.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkMapArrayValues_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkMapArrayValues", // tp_name
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
  PyvtkMapArrayValues_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMapArrayValues_StaticNew()
{
  return vtkMapArrayValues::New();
}

PyObject *PyvtkMapArrayValues_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkMapArrayValues_Type, PyvtkMapArrayValues_Methods,
    "vtkMapArrayValues",
 &PyvtkMapArrayValues_StaticNew);

  PyTypeObject *pytype = &PyvtkMapArrayValues_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPassInputTypeAlgorithm_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkMapArrayValues_FieldType_Type);
  PyvtkMapArrayValues_FieldType_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkMapArrayValues_FieldType_Type);

  o = (PyObject *)&PyvtkMapArrayValues_FieldType_Type;
  if (PyDict_SetItemString(d, "FieldType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 6; c++)
  {
    static const struct { const char *name; int value; }
      constants[6] = {
        { "POINT_DATA", vtkMapArrayValues::POINT_DATA },
        { "CELL_DATA", vtkMapArrayValues::CELL_DATA },
        { "VERTEX_DATA", vtkMapArrayValues::VERTEX_DATA },
        { "EDGE_DATA", vtkMapArrayValues::EDGE_DATA },
        { "ROW_DATA", vtkMapArrayValues::ROW_DATA },
        { "NUM_ATTRIBUTE_LOCS", vtkMapArrayValues::NUM_ATTRIBUTE_LOCS },
      };

    o = PyvtkMapArrayValues_FieldType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMapArrayValues(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMapArrayValues_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMapArrayValues", o) != 0)
  {
    Py_DECREF(o);
  }

}

