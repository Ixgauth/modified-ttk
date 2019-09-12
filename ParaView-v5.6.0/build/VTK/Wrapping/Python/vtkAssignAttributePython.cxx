// python wrapper for vtkAssignAttribute
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
#include "vtkAssignAttribute.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAssignAttribute(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAssignAttribute_ClassNew(); }

#ifndef DECLARED_PyvtkPassInputTypeAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPassInputTypeAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPassInputTypeAlgorithm_ClassNew
#endif

static const char *PyvtkAssignAttribute_Doc =
  "vtkAssignAttribute - Labels/marks a field as an attribute\n\n"
  "Superclass: vtkPassInputTypeAlgorithm\n\n"
  "vtkAssignAttribute is used to label/mark a field (vtkDataArray) as an\n"
  "attribute. A field name or an attribute to labeled can be specified.\n"
  "For example:\n"
  " aa->Assign(\"foo\", vtkDataSetAttributes::SCALARS,\n"
  "            vtkAssignAttribute::POINT_DATA);\n"
  "  tells vtkAssignAttribute to make the array in the point data called\n"
  "\"foo\" the active scalars. On the other hand,\n"
  " aa->Assign(vtkDataSetAttributes::VECTORS, vtkDataSetAttributes::SCALARS,\n"
  "            vtkAssignAttribute::POINT_DATA);\n"
  "  tells vtkAssignAttribute to make the active vectors also the active\n"
  "scalars.\n\n"
  "@warning\n"
  "When using Java, Python or Visual Basic bindings, the array name can\n"
  "not be one of the  AttributeTypes when calling Assign() which takes\n"
  "strings as arguments. The wrapped command will always assume the\n"
  "string corresponds to an attribute type when the argument is one of\n"
  "the AttributeTypes. In this situation, use the Assign() which takes\n"
  "enums.\n\n"
  "@sa\n"
  "vtkFieldData vtkDataSet vtkDataObjectToDataSetFilter\n"
  "vtkDataSetAttributes vtkDataArray vtkRearrangeFields vtkSplitField\n"
  "vtkMergeFields\n\n";

static PyTypeObject PyvtkAssignAttribute_AttributeLocation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkAssignAttribute.AttributeLocation", // tp_name
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

PyObject *PyvtkAssignAttribute_AttributeLocation_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkAssignAttribute_AttributeLocation_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkAssignAttribute_AttributeLocation_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkAssignAttribute_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAssignAttribute::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssignAttribute_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssignAttribute *op = static_cast<vtkAssignAttribute *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAssignAttribute::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssignAttribute_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAssignAttribute *tempr = vtkAssignAttribute::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssignAttribute_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssignAttribute *op = static_cast<vtkAssignAttribute *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAssignAttribute *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAssignAttribute::NewInstance());

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
PyvtkAssignAttribute_Assign_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Assign");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssignAttribute *op = static_cast<vtkAssignAttribute *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->Assign(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAssignAttribute::Assign(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAssignAttribute_Assign_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Assign");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssignAttribute *op = static_cast<vtkAssignAttribute *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->Assign(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAssignAttribute::Assign(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAssignAttribute_Assign_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Assign");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssignAttribute *op = static_cast<vtkAssignAttribute *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->Assign(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAssignAttribute::Assign(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAssignAttribute_Assign_Methods[] = {
  {nullptr, PyvtkAssignAttribute_Assign_s1, METH_VARARGS,
   "@iii"},
  {nullptr, PyvtkAssignAttribute_Assign_s2, METH_VARARGS,
   "@zii"},
  {nullptr, PyvtkAssignAttribute_Assign_s3, METH_VARARGS,
   "@zzz"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkAssignAttribute_Assign(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkAssignAttribute_Assign_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Assign");
  return nullptr;
}


static PyMethodDef PyvtkAssignAttribute_Methods[] = {
  {"IsTypeOf", PyvtkAssignAttribute_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAssignAttribute_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAssignAttribute_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAssignAttribute\nC++: static vtkAssignAttribute *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAssignAttribute_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAssignAttribute\nC++: vtkAssignAttribute *NewInstance()\n\n"},
  {"Assign", PyvtkAssignAttribute_Assign, METH_VARARGS,
   "V.Assign(int, int, int)\nC++: void Assign(int inputAttributeType, int attributeType,\n    int attributeLoc)\nV.Assign(string, int, int)\nC++: void Assign(const char *fieldName, int attributeType,\n    int attributeLoc)\nV.Assign(string, string, string)\nC++: void Assign(const char *name, const char *attributeType,\n    const char *attributeLoc)\n\nLabel an attribute as another attribute.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAssignAttribute_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkAssignAttribute", // tp_name
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
  PyvtkAssignAttribute_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAssignAttribute_StaticNew()
{
  return vtkAssignAttribute::New();
}

PyObject *PyvtkAssignAttribute_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAssignAttribute_Type, PyvtkAssignAttribute_Methods,
    "vtkAssignAttribute",
 &PyvtkAssignAttribute_StaticNew);

  PyTypeObject *pytype = &PyvtkAssignAttribute_Type;

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

  PyType_Ready(&PyvtkAssignAttribute_AttributeLocation_Type);
  PyvtkAssignAttribute_AttributeLocation_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkAssignAttribute_AttributeLocation_Type);

  o = (PyObject *)&PyvtkAssignAttribute_AttributeLocation_Type;
  if (PyDict_SetItemString(d, "AttributeLocation", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 5; c++)
  {
    typedef vtkAssignAttribute::AttributeLocation cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[5] = {
        { "POINT_DATA", vtkAssignAttribute::POINT_DATA },
        { "CELL_DATA", vtkAssignAttribute::CELL_DATA },
        { "VERTEX_DATA", vtkAssignAttribute::VERTEX_DATA },
        { "EDGE_DATA", vtkAssignAttribute::EDGE_DATA },
        { "NUM_ATTRIBUTE_LOCS", vtkAssignAttribute::NUM_ATTRIBUTE_LOCS },
      };

    o = PyvtkAssignAttribute_AttributeLocation_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAssignAttribute(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAssignAttribute_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAssignAttribute", o) != 0)
  {
    Py_DECREF(o);
  }

}

