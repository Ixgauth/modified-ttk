// python wrapper for vtkSplitField
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
#include "vtkSplitField.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSplitField(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSplitField_ClassNew(); }

#ifndef DECLARED_PyvtkDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkSplitField_Doc =
  "vtkSplitField - Split a field into single component fields\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkSplitField is used to split a multi-component field (vtkDataArray)\n"
  "into multiple single component fields. The new fields are put in the\n"
  "same field data as the original field. The output arrays are of the\n"
  "same type as the input array. Example:\n"
  " sf->SetInputField(\"gradient\", vtkSplitField::POINT_DATA);\n"
  " sf->Split(0, \"firstcomponent\");\n"
  "  tells vtkSplitField to extract the first component of the field\n"
  "called gradient and create an array called firstcomponent (the new\n"
  "field will be in the output's point data). Note that, by default, the\n"
  "original array is also passed through.\n\n"
  "@warning\n"
  "When using Java, Python or Visual Basic bindings, the array name can\n"
  "not be one of the  AttributeTypes when calling Split() which takes\n"
  "strings as arguments. The wrapped command will always assume the\n"
  "string corresponds to an attribute type when the argument is one of\n"
  "the AttributeTypes. In this situation, use the Split() which takes\n"
  "enums.\n\n"
  "@sa\n"
  "vtkFieldData vtkDataSet vtkDataObjectToDataSetFilter\n"
  "vtkDataSetAttributes vtkDataArray vtkRearrangeFields\n"
  "vtkAssignAttribute vtkMergeFields\n\n";

static PyTypeObject PyvtkSplitField_FieldLocations_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkSplitField.FieldLocations", // tp_name
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

PyObject *PyvtkSplitField_FieldLocations_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkSplitField_FieldLocations_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSplitField_FieldLocations_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkSplitField_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSplitField::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplitField_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitField *op = static_cast<vtkSplitField *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSplitField::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplitField_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSplitField *tempr = vtkSplitField::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplitField_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitField *op = static_cast<vtkSplitField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSplitField *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSplitField::NewInstance());

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
PyvtkSplitField_SetInputField_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitField *op = static_cast<vtkSplitField *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetInputField(temp0, temp1);
    }
    else
    {
      op->vtkSplitField::SetInputField(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSplitField_SetInputField_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitField *op = static_cast<vtkSplitField *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetInputField(temp0, temp1);
    }
    else
    {
      op->vtkSplitField::SetInputField(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSplitField_SetInputField_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitField *op = static_cast<vtkSplitField *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetInputField(temp0, temp1);
    }
    else
    {
      op->vtkSplitField::SetInputField(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSplitField_SetInputField_Methods[] = {
  {nullptr, PyvtkSplitField_SetInputField_s1, METH_VARARGS,
   "@ii"},
  {nullptr, PyvtkSplitField_SetInputField_s2, METH_VARARGS,
   "@zi"},
  {nullptr, PyvtkSplitField_SetInputField_s3, METH_VARARGS,
   "@zz"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSplitField_SetInputField(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSplitField_SetInputField_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInputField");
  return nullptr;
}



static PyObject *
PyvtkSplitField_Split(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Split");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitField *op = static_cast<vtkSplitField *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->Split(temp0, temp1);
    }
    else
    {
      op->vtkSplitField::Split(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSplitField_Methods[] = {
  {"IsTypeOf", PyvtkSplitField_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSplitField_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSplitField_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSplitField\nC++: static vtkSplitField *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSplitField_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSplitField\nC++: vtkSplitField *NewInstance()\n\n"},
  {"SetInputField", PyvtkSplitField_SetInputField, METH_VARARGS,
   "V.SetInputField(int, int)\nC++: void SetInputField(int attributeType, int fieldLoc)\nV.SetInputField(string, int)\nC++: void SetInputField(const char *name, int fieldLoc)\nV.SetInputField(string, string)\nC++: void SetInputField(const char *name, const char *fieldLoc)\n\nUse the given attribute in the field data given by fieldLoc as\ninput.\n"},
  {"Split", PyvtkSplitField_Split, METH_VARARGS,
   "V.Split(int, string)\nC++: void Split(int component, const char *arrayName)\n\nCreate a new array with the given component.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSplitField_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkSplitField", // tp_name
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
  PyvtkSplitField_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSplitField_StaticNew()
{
  return vtkSplitField::New();
}

PyObject *PyvtkSplitField_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSplitField_Type, PyvtkSplitField_Methods,
    "vtkSplitField",
 &PyvtkSplitField_StaticNew);

  PyTypeObject *pytype = &PyvtkSplitField_Type;

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

  PyType_Ready(&PyvtkSplitField_FieldLocations_Type);
  PyvtkSplitField_FieldLocations_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkSplitField_FieldLocations_Type);

  o = (PyObject *)&PyvtkSplitField_FieldLocations_Type;
  if (PyDict_SetItemString(d, "FieldLocations", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkSplitField::FieldLocations cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "DATA_OBJECT", vtkSplitField::DATA_OBJECT },
        { "POINT_DATA", vtkSplitField::POINT_DATA },
        { "CELL_DATA", vtkSplitField::CELL_DATA },
      };

    o = PyvtkSplitField_FieldLocations_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSplitField(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSplitField_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSplitField", o) != 0)
  {
    Py_DECREF(o);
  }

}

