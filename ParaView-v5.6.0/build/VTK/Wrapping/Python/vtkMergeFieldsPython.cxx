// python wrapper for vtkMergeFields
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
#include "vtkMergeFields.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMergeFields(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMergeFields_ClassNew(); }

#ifndef DECLARED_PyvtkDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkMergeFields_Doc =
  "vtkMergeFields - Merge multiple fields into one.\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkMergeFields is used to merge multiple field into one. The new\n"
  "field is put in the same field data as the original field. For\n"
  "example\n"
  " mf->SetOutputField(\"foo\", vtkMergeFields::POINT_DATA);\n"
  " mf->SetNumberOfComponents(2);\n"
  " mf->Merge(0, \"array1\", 1);\n"
  " mf->Merge(1, \"array2\", 0);\n"
  "  will tell vtkMergeFields to use the 2nd component of array1 and the\n"
  "1st component of array2 to create a 2 component field called foo.\n\n"
  "@sa\n"
  "vtkFieldData vtkDataSet vtkDataObjectToDataSetFilter\n"
  "vtkDataSetAttributes vtkDataArray vtkRearrangeFields vtkSplitField\n"
  "vtkAssignAttribute\n\n";

static PyTypeObject PyvtkMergeFields_FieldLocations_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkMergeFields.FieldLocations", // tp_name
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

PyObject *PyvtkMergeFields_FieldLocations_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkMergeFields_FieldLocations_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkMergeFields_FieldLocations_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkMergeFields_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMergeFields::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeFields_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFields *op = static_cast<vtkMergeFields *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMergeFields::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeFields_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMergeFields *tempr = vtkMergeFields::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeFields_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFields *op = static_cast<vtkMergeFields *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMergeFields *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMergeFields::NewInstance());

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
PyvtkMergeFields_SetOutputField_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFields *op = static_cast<vtkMergeFields *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetOutputField(temp0, temp1);
    }
    else
    {
      op->vtkMergeFields::SetOutputField(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMergeFields_SetOutputField_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFields *op = static_cast<vtkMergeFields *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetOutputField(temp0, temp1);
    }
    else
    {
      op->vtkMergeFields::SetOutputField(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMergeFields_SetOutputField_Methods[] = {
  {nullptr, PyvtkMergeFields_SetOutputField_s1, METH_VARARGS,
   "@zi"},
  {nullptr, PyvtkMergeFields_SetOutputField_s2, METH_VARARGS,
   "@zz"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMergeFields_SetOutputField(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMergeFields_SetOutputField_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOutputField");
  return nullptr;
}



static PyObject *
PyvtkMergeFields_Merge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Merge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFields *op = static_cast<vtkMergeFields *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->Merge(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMergeFields::Merge(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeFields_SetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFields *op = static_cast<vtkMergeFields *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfComponents(temp0);
    }
    else
    {
      op->vtkMergeFields::SetNumberOfComponents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeFields_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeFields *op = static_cast<vtkMergeFields *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponents() :
      op->vtkMergeFields::GetNumberOfComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMergeFields_Methods[] = {
  {"IsTypeOf", PyvtkMergeFields_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMergeFields_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMergeFields_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkMergeFields\nC++: static vtkMergeFields *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMergeFields_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkMergeFields\nC++: vtkMergeFields *NewInstance()\n\n"},
  {"SetOutputField", PyvtkMergeFields_SetOutputField, METH_VARARGS,
   "V.SetOutputField(string, int)\nC++: void SetOutputField(const char *name, int fieldLoc)\nV.SetOutputField(string, string)\nC++: void SetOutputField(const char *name, const char *fieldLoc)\n\nThe output field will have the given name and it will be in\nfieldLoc (the input fields also have to be in fieldLoc).\n"},
  {"Merge", PyvtkMergeFields_Merge, METH_VARARGS,
   "V.Merge(int, string, int)\nC++: void Merge(int component, const char *arrayName,\n    int sourceComp)\n\nAdd a component (arrayName,sourceComp) to the output field.\n"},
  {"SetNumberOfComponents", PyvtkMergeFields_SetNumberOfComponents, METH_VARARGS,
   "V.SetNumberOfComponents(int)\nC++: virtual void SetNumberOfComponents(int _arg)\n\nSet the number of the components in the output field. This has to\nbe set before execution. Default value is 0.\n"},
  {"GetNumberOfComponents", PyvtkMergeFields_GetNumberOfComponents, METH_VARARGS,
   "V.GetNumberOfComponents() -> int\nC++: virtual int GetNumberOfComponents()\n\nSet the number of the components in the output field. This has to\nbe set before execution. Default value is 0.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkMergeFields_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkMergeFields", // tp_name
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
  PyvtkMergeFields_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMergeFields_StaticNew()
{
  return vtkMergeFields::New();
}

PyObject *PyvtkMergeFields_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkMergeFields_Type, PyvtkMergeFields_Methods,
    "vtkMergeFields",
 &PyvtkMergeFields_StaticNew);

  PyTypeObject *pytype = &PyvtkMergeFields_Type;

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

  PyType_Ready(&PyvtkMergeFields_FieldLocations_Type);
  PyvtkMergeFields_FieldLocations_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkMergeFields_FieldLocations_Type);

  o = (PyObject *)&PyvtkMergeFields_FieldLocations_Type;
  if (PyDict_SetItemString(d, "FieldLocations", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkMergeFields::FieldLocations cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "DATA_OBJECT", vtkMergeFields::DATA_OBJECT },
        { "POINT_DATA", vtkMergeFields::POINT_DATA },
        { "CELL_DATA", vtkMergeFields::CELL_DATA },
      };

    o = PyvtkMergeFields_FieldLocations_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMergeFields(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMergeFields_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMergeFields", o) != 0)
  {
    Py_DECREF(o);
  }

}

