// python wrapper for vtkMaskFields
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
#include "vtkMaskFields.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMaskFields(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMaskFields_ClassNew(); }

#ifndef DECLARED_PyvtkDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkMaskFields_Doc =
  "vtkMaskFields - Allow control of which fields get passed to the output\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkMaskFields is used to mark which fields in the input dataset get\n"
  "copied to the output.  The output will contain only those fields\n"
  "marked as on by the filter.\n\n"
  "@sa\n"
  "vtkFieldData vtkDataSet vtkDataObjectToDataSetFilter\n"
  "vtkDataSetAttributes vtkDataArray vtkRearrangeFields vtkSplitField\n"
  "vtkMergeFields vtkAssignAttribute\n\n";

static PyTypeObject PyvtkMaskFields_FieldLocation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkMaskFields.FieldLocation", // tp_name
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

PyObject *PyvtkMaskFields_FieldLocation_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkMaskFields_FieldLocation_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkMaskFields_FieldLocation_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkMaskFields_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMaskFields::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaskFields_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskFields *op = static_cast<vtkMaskFields *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMaskFields::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaskFields_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMaskFields *tempr = vtkMaskFields::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaskFields_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskFields *op = static_cast<vtkMaskFields *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMaskFields *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMaskFields::NewInstance());

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
PyvtkMaskFields_CopyFieldOn_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFieldOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskFields *op = static_cast<vtkMaskFields *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->CopyFieldOn(temp0, temp1);
    }
    else
    {
      op->vtkMaskFields::CopyFieldOn(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMaskFields_CopyFieldOn_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFieldOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskFields *op = static_cast<vtkMaskFields *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->CopyFieldOn(temp0, temp1);
    }
    else
    {
      op->vtkMaskFields::CopyFieldOn(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMaskFields_CopyFieldOn_Methods[] = {
  {nullptr, PyvtkMaskFields_CopyFieldOn_s1, METH_VARARGS,
   "@iz"},
  {nullptr, PyvtkMaskFields_CopyFieldOn_s2, METH_VARARGS,
   "@zz"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMaskFields_CopyFieldOn(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMaskFields_CopyFieldOn_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "CopyFieldOn");
  return nullptr;
}



static PyObject *
PyvtkMaskFields_CopyFieldOff_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFieldOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskFields *op = static_cast<vtkMaskFields *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->CopyFieldOff(temp0, temp1);
    }
    else
    {
      op->vtkMaskFields::CopyFieldOff(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMaskFields_CopyFieldOff_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFieldOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskFields *op = static_cast<vtkMaskFields *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->CopyFieldOff(temp0, temp1);
    }
    else
    {
      op->vtkMaskFields::CopyFieldOff(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMaskFields_CopyFieldOff_Methods[] = {
  {nullptr, PyvtkMaskFields_CopyFieldOff_s1, METH_VARARGS,
   "@iz"},
  {nullptr, PyvtkMaskFields_CopyFieldOff_s2, METH_VARARGS,
   "@zz"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMaskFields_CopyFieldOff(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMaskFields_CopyFieldOff_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "CopyFieldOff");
  return nullptr;
}



static PyObject *
PyvtkMaskFields_CopyAttributeOn_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAttributeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskFields *op = static_cast<vtkMaskFields *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->CopyAttributeOn(temp0, temp1);
    }
    else
    {
      op->vtkMaskFields::CopyAttributeOn(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMaskFields_CopyAttributeOn_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAttributeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskFields *op = static_cast<vtkMaskFields *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->CopyAttributeOn(temp0, temp1);
    }
    else
    {
      op->vtkMaskFields::CopyAttributeOn(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMaskFields_CopyAttributeOn_Methods[] = {
  {nullptr, PyvtkMaskFields_CopyAttributeOn_s1, METH_VARARGS,
   "@ii"},
  {nullptr, PyvtkMaskFields_CopyAttributeOn_s2, METH_VARARGS,
   "@zz"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMaskFields_CopyAttributeOn(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMaskFields_CopyAttributeOn_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "CopyAttributeOn");
  return nullptr;
}



static PyObject *
PyvtkMaskFields_CopyAttributeOff_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAttributeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskFields *op = static_cast<vtkMaskFields *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->CopyAttributeOff(temp0, temp1);
    }
    else
    {
      op->vtkMaskFields::CopyAttributeOff(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMaskFields_CopyAttributeOff_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAttributeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskFields *op = static_cast<vtkMaskFields *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->CopyAttributeOff(temp0, temp1);
    }
    else
    {
      op->vtkMaskFields::CopyAttributeOff(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMaskFields_CopyAttributeOff_Methods[] = {
  {nullptr, PyvtkMaskFields_CopyAttributeOff_s1, METH_VARARGS,
   "@ii"},
  {nullptr, PyvtkMaskFields_CopyAttributeOff_s2, METH_VARARGS,
   "@zz"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMaskFields_CopyAttributeOff(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMaskFields_CopyAttributeOff_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "CopyAttributeOff");
  return nullptr;
}



static PyObject *
PyvtkMaskFields_CopyFieldsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFieldsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskFields *op = static_cast<vtkMaskFields *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyFieldsOff();
    }
    else
    {
      op->vtkMaskFields::CopyFieldsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaskFields_CopyAttributesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAttributesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskFields *op = static_cast<vtkMaskFields *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyAttributesOff();
    }
    else
    {
      op->vtkMaskFields::CopyAttributesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaskFields_CopyFieldsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFieldsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskFields *op = static_cast<vtkMaskFields *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyFieldsOn();
    }
    else
    {
      op->vtkMaskFields::CopyFieldsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaskFields_CopyAttributesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAttributesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskFields *op = static_cast<vtkMaskFields *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyAttributesOn();
    }
    else
    {
      op->vtkMaskFields::CopyAttributesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaskFields_CopyAllOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAllOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskFields *op = static_cast<vtkMaskFields *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyAllOn();
    }
    else
    {
      op->vtkMaskFields::CopyAllOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaskFields_CopyAllOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAllOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskFields *op = static_cast<vtkMaskFields *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyAllOff();
    }
    else
    {
      op->vtkMaskFields::CopyAllOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMaskFields_Methods[] = {
  {"IsTypeOf", PyvtkMaskFields_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMaskFields_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMaskFields_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkMaskFields\nC++: static vtkMaskFields *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMaskFields_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkMaskFields\nC++: vtkMaskFields *NewInstance()\n\n"},
  {"CopyFieldOn", PyvtkMaskFields_CopyFieldOn, METH_VARARGS,
   "V.CopyFieldOn(int, string)\nC++: void CopyFieldOn(int fieldLocation, const char *name)\nV.CopyFieldOn(string, string)\nC++: void CopyFieldOn(const char *fieldLoc, const char *name)\n\nTurn on/off the copying of the field or specified by name. During\nthe copying/passing, the following rules are followed for each\narray:\n1. If the copy flag for an array is set (on or off), it is\n   applied This overrides rule 2.\n2. If CopyAllOn is set, copy the array. If CopyAllOff is set, do\n   not copy the array A field name and a location must be\n   specified. For example:\n maskFields->CopyFieldOff(vtkMaskFields::CELL_DATA, \"foo\");\n  causes the field \"foo\" on the input cell data to not get copied\n   to the output.\n"},
  {"CopyFieldOff", PyvtkMaskFields_CopyFieldOff, METH_VARARGS,
   "V.CopyFieldOff(int, string)\nC++: void CopyFieldOff(int fieldLocation, const char *name)\nV.CopyFieldOff(string, string)\nC++: void CopyFieldOff(const char *fieldLoc, const char *name)\n\n"},
  {"CopyAttributeOn", PyvtkMaskFields_CopyAttributeOn, METH_VARARGS,
   "V.CopyAttributeOn(int, int)\nC++: void CopyAttributeOn(int attributeLocation,\n    int attributeType)\nV.CopyAttributeOn(string, string)\nC++: void CopyAttributeOn(const char *attributeLoc,\n    const char *attributeType)\n\nTurn on/off the copying of the attribute or specified by\nvtkDataSetAttributes:AttributeTypes. During the copying/passing,\nthe following rules are followed for each array:\n1. If the copy flag for an array is set (on or off), it is\n   applied This overrides rule 2.\n2. If CopyAllOn is set, copy the array. If CopyAllOff is set, do\n   not copy the array An attribute type and a location must be\n   specified. For example:\n maskFields->CopyAttributeOff(vtkMaskFields::POINT_DATA, vtkDataSetAttributes::SCALARS);\n  causes the scalars on the input point data to not get copied to\nthe output.\n"},
  {"CopyAttributeOff", PyvtkMaskFields_CopyAttributeOff, METH_VARARGS,
   "V.CopyAttributeOff(int, int)\nC++: void CopyAttributeOff(int attributeLocation,\n    int attributeType)\nV.CopyAttributeOff(string, string)\nC++: void CopyAttributeOff(const char *attributeLoc,\n    const char *attributeType)\n\n"},
  {"CopyFieldsOff", PyvtkMaskFields_CopyFieldsOff, METH_VARARGS,
   "V.CopyFieldsOff()\nC++: void CopyFieldsOff()\n\nConvenience methods which operate on all field data or attribute\ndata.  More specific than CopyAllOn or CopyAllOff\n"},
  {"CopyAttributesOff", PyvtkMaskFields_CopyAttributesOff, METH_VARARGS,
   "V.CopyAttributesOff()\nC++: void CopyAttributesOff()\n\n"},
  {"CopyFieldsOn", PyvtkMaskFields_CopyFieldsOn, METH_VARARGS,
   "V.CopyFieldsOn()\nC++: void CopyFieldsOn()\n\n"},
  {"CopyAttributesOn", PyvtkMaskFields_CopyAttributesOn, METH_VARARGS,
   "V.CopyAttributesOn()\nC++: void CopyAttributesOn()\n\n"},
  {"CopyAllOn", PyvtkMaskFields_CopyAllOn, METH_VARARGS,
   "V.CopyAllOn()\nC++: virtual void CopyAllOn()\n\nTurn on copying of all data. During the copying/passing, the\nfollowing rules are followed for each array:\n1. If the copy flag for an array is set (on or off), it is\n   applied This overrides rule 2.\n2. If CopyAllOn is set, copy the array. If CopyAllOff is set, do\n   not copy the array\n"},
  {"CopyAllOff", PyvtkMaskFields_CopyAllOff, METH_VARARGS,
   "V.CopyAllOff()\nC++: virtual void CopyAllOff()\n\nTurn off copying of all data. During the copying/passing, the\nfollowing rules are followed for each array:\n1. If the copy flag for an array is set (on or off), it is\n   applied This overrides rule 2.\n2. If CopyAllOn is set, copy the array. If CopyAllOff is set, do\n   not copy the array\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkMaskFields_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkMaskFields", // tp_name
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
  PyvtkMaskFields_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMaskFields_StaticNew()
{
  return vtkMaskFields::New();
}

PyObject *PyvtkMaskFields_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkMaskFields_Type, PyvtkMaskFields_Methods,
    "vtkMaskFields",
 &PyvtkMaskFields_StaticNew);

  PyTypeObject *pytype = &PyvtkMaskFields_Type;

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

  PyType_Ready(&PyvtkMaskFields_FieldLocation_Type);
  PyvtkMaskFields_FieldLocation_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkMaskFields_FieldLocation_Type);

  o = (PyObject *)&PyvtkMaskFields_FieldLocation_Type;
  if (PyDict_SetItemString(d, "FieldLocation", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkMaskFields::FieldLocation cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "OBJECT_DATA", vtkMaskFields::OBJECT_DATA },
        { "POINT_DATA", vtkMaskFields::POINT_DATA },
        { "CELL_DATA", vtkMaskFields::CELL_DATA },
      };

    o = PyvtkMaskFields_FieldLocation_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMaskFields(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMaskFields_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMaskFields", o) != 0)
  {
    Py_DECREF(o);
  }

}

