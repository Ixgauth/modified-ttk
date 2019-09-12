// python wrapper for vtkRearrangeFields
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
#include "vtkRearrangeFields.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRearrangeFields(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkRearrangeFields_ClassNew(); }

#ifndef DECLARED_PyvtkDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkRearrangeFields_Doc =
  "vtkRearrangeFields - Move/copy fields between field data, point data\nand cell data\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkRearrangeFields is used to copy/move fields (vtkDataArrays)\n"
  "between data object's field data, point data and cell data. To\n"
  "specify which fields are copied/moved, the user adds operations.\n"
  "There are two types of operations: 1. the type which copies/moves an\n"
  "attribute's data (i.e. the field will be copied but will not be an\n"
  "attribute in the target), 2. the type which copies/moves fields by\n"
  "name. For example:\n"
  " rf->AddOperation(vtkRearrangeFields::COPY, \"foo\",\n"
  "                  vtkRearrangeFields::DATA_OBJECT,\n"
  "                  vtkRearrangeFields::POINT_DATA);\n"
  "  adds an operation which copies a field (data array) called foo from\n"
  "the data object's field data to point data. The same can be done\n"
  "using Python and Java bindings by passing strings as arguments.\n"
  " Operation types: COPY, MOVE\n"
  " AttributeTypes: SCALARS, VECTORS, NORMALS, TCOORDS, TENSORS\n"
  " Field data locations: DATA_OBJECT, POINT_DATA, CELL_DATA\n"
  " \n\n"
  "@warning\n"
  "When using Java, Python or Visual Basic bindings, the array name can\n"
  "not be one of the  AttributeTypes when calling AddOperation() which\n"
  "takes strings as arguments. The wrapped command will always assume\n"
  "the string corresponds to an attribute type when the argument is one\n"
  "of the AttributeTypes. In this situation, use the AddOperation()\n"
  "which takes enums.\n\n"
  "@sa\n"
  "vtkFieldData vtkDataSet vtkDataObjectToDataSetFilter\n"
  "vtkDataSetAttributes vtkDataArray vtkAssignAttribute vtkSplitField\n"
  "vtkMergeFields\n\n";

static PyTypeObject PyvtkRearrangeFields_OperationType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkRearrangeFields.OperationType", // tp_name
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

PyObject *PyvtkRearrangeFields_OperationType_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkRearrangeFields_OperationType_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkRearrangeFields_OperationType_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkRearrangeFields_FieldLocation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkRearrangeFields.FieldLocation", // tp_name
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

PyObject *PyvtkRearrangeFields_FieldLocation_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkRearrangeFields_FieldLocation_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkRearrangeFields_FieldLocation_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkRearrangeFields_FieldType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkRearrangeFields.FieldType", // tp_name
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

PyObject *PyvtkRearrangeFields_FieldType_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkRearrangeFields_FieldType_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkRearrangeFields_FieldType_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkRearrangeFields_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRearrangeFields::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRearrangeFields_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRearrangeFields *op = static_cast<vtkRearrangeFields *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRearrangeFields::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRearrangeFields_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRearrangeFields *tempr = vtkRearrangeFields::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRearrangeFields_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRearrangeFields *op = static_cast<vtkRearrangeFields *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRearrangeFields *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRearrangeFields::NewInstance());

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
PyvtkRearrangeFields_AddOperation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRearrangeFields *op = static_cast<vtkRearrangeFields *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = (ap.IsBound() ?
      op->AddOperation(temp0, temp1, temp2, temp3) :
      op->vtkRearrangeFields::AddOperation(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRearrangeFields_AddOperation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRearrangeFields *op = static_cast<vtkRearrangeFields *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = (ap.IsBound() ?
      op->AddOperation(temp0, temp1, temp2, temp3) :
      op->vtkRearrangeFields::AddOperation(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRearrangeFields_AddOperation_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRearrangeFields *op = static_cast<vtkRearrangeFields *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  const char *temp2 = nullptr;
  const char *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = (ap.IsBound() ?
      op->AddOperation(temp0, temp1, temp2, temp3) :
      op->vtkRearrangeFields::AddOperation(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkRearrangeFields_AddOperation_Methods[] = {
  {nullptr, PyvtkRearrangeFields_AddOperation_s1, METH_VARARGS,
   "@iiii"},
  {nullptr, PyvtkRearrangeFields_AddOperation_s2, METH_VARARGS,
   "@izii"},
  {nullptr, PyvtkRearrangeFields_AddOperation_s3, METH_VARARGS,
   "@zzzz"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkRearrangeFields_AddOperation(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkRearrangeFields_AddOperation_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddOperation");
  return nullptr;
}



static PyObject *
PyvtkRearrangeFields_RemoveOperation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRearrangeFields *op = static_cast<vtkRearrangeFields *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->RemoveOperation(temp0) :
      op->vtkRearrangeFields::RemoveOperation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRearrangeFields_RemoveOperation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRearrangeFields *op = static_cast<vtkRearrangeFields *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = (ap.IsBound() ?
      op->RemoveOperation(temp0, temp1, temp2, temp3) :
      op->vtkRearrangeFields::RemoveOperation(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRearrangeFields_RemoveOperation_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRearrangeFields *op = static_cast<vtkRearrangeFields *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = (ap.IsBound() ?
      op->RemoveOperation(temp0, temp1, temp2, temp3) :
      op->vtkRearrangeFields::RemoveOperation(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRearrangeFields_RemoveOperation_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRearrangeFields *op = static_cast<vtkRearrangeFields *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  const char *temp2 = nullptr;
  const char *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = (ap.IsBound() ?
      op->RemoveOperation(temp0, temp1, temp2, temp3) :
      op->vtkRearrangeFields::RemoveOperation(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkRearrangeFields_RemoveOperation_Methods[] = {
  {nullptr, PyvtkRearrangeFields_RemoveOperation_s2, METH_VARARGS,
   "@iiii"},
  {nullptr, PyvtkRearrangeFields_RemoveOperation_s3, METH_VARARGS,
   "@izii"},
  {nullptr, PyvtkRearrangeFields_RemoveOperation_s4, METH_VARARGS,
   "@zzzz"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkRearrangeFields_RemoveOperation(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkRearrangeFields_RemoveOperation_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkRearrangeFields_RemoveOperation_s1(self, args);
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RemoveOperation");
  return nullptr;
}



static PyObject *
PyvtkRearrangeFields_RemoveAllOperations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllOperations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRearrangeFields *op = static_cast<vtkRearrangeFields *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllOperations();
    }
    else
    {
      op->vtkRearrangeFields::RemoveAllOperations();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkRearrangeFields_Methods[] = {
  {"IsTypeOf", PyvtkRearrangeFields_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRearrangeFields_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRearrangeFields_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkRearrangeFields\nC++: static vtkRearrangeFields *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRearrangeFields_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkRearrangeFields\nC++: vtkRearrangeFields *NewInstance()\n\n"},
  {"AddOperation", PyvtkRearrangeFields_AddOperation, METH_VARARGS,
   "V.AddOperation(int, int, int, int) -> int\nC++: int AddOperation(int operationType, int attributeType,\n    int fromFieldLoc, int toFieldLoc)\nV.AddOperation(int, string, int, int) -> int\nC++: int AddOperation(int operationType, const char *name,\n    int fromFieldLoc, int toFieldLoc)\nV.AddOperation(string, string, string, string) -> int\nC++: int AddOperation(const char *operationType,\n    const char *attributeType, const char *fromFieldLoc,\n    const char *toFieldLoc)\n\nAdd an operation which copies an attribute's field (data array)\nfrom one field data to another. Returns an operation id which can\nlater be used to remove the operation.\n"},
  {"RemoveOperation", PyvtkRearrangeFields_RemoveOperation, METH_VARARGS,
   "V.RemoveOperation(int) -> int\nC++: int RemoveOperation(int operationId)\nV.RemoveOperation(int, int, int, int) -> int\nC++: int RemoveOperation(int operationType, int attributeType,\n    int fromFieldLoc, int toFieldLoc)\nV.RemoveOperation(int, string, int, int) -> int\nC++: int RemoveOperation(int operationType, const char *name,\n    int fromFieldLoc, int toFieldLoc)\nV.RemoveOperation(string, string, string, string) -> int\nC++: int RemoveOperation(const char *operationType,\n    const char *attributeType, const char *fromFieldLoc,\n    const char *toFieldLoc)\n\nRemove an operation with the given id.\n"},
  {"RemoveAllOperations", PyvtkRearrangeFields_RemoveAllOperations, METH_VARARGS,
   "V.RemoveAllOperations()\nC++: void RemoveAllOperations()\n\nRemove all operations.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkRearrangeFields_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkRearrangeFields", // tp_name
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
  PyvtkRearrangeFields_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRearrangeFields_StaticNew()
{
  return vtkRearrangeFields::New();
}

PyObject *PyvtkRearrangeFields_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkRearrangeFields_Type, PyvtkRearrangeFields_Methods,
    "vtkRearrangeFields",
 &PyvtkRearrangeFields_StaticNew);

  PyTypeObject *pytype = &PyvtkRearrangeFields_Type;

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

  PyType_Ready(&PyvtkRearrangeFields_OperationType_Type);
  PyvtkRearrangeFields_OperationType_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkRearrangeFields_OperationType_Type);

  o = (PyObject *)&PyvtkRearrangeFields_OperationType_Type;
  if (PyDict_SetItemString(d, "OperationType", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkRearrangeFields_FieldLocation_Type);
  PyvtkRearrangeFields_FieldLocation_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkRearrangeFields_FieldLocation_Type);

  o = (PyObject *)&PyvtkRearrangeFields_FieldLocation_Type;
  if (PyDict_SetItemString(d, "FieldLocation", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkRearrangeFields_FieldType_Type);
  PyvtkRearrangeFields_FieldType_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkRearrangeFields_FieldType_Type);

  o = (PyObject *)&PyvtkRearrangeFields_FieldType_Type;
  if (PyDict_SetItemString(d, "FieldType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkRearrangeFields::OperationType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "COPY", vtkRearrangeFields::COPY },
        { "MOVE", vtkRearrangeFields::MOVE },
      };

    o = PyvtkRearrangeFields_OperationType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkRearrangeFields::FieldLocation cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "DATA_OBJECT", vtkRearrangeFields::DATA_OBJECT },
        { "POINT_DATA", vtkRearrangeFields::POINT_DATA },
        { "CELL_DATA", vtkRearrangeFields::CELL_DATA },
      };

    o = PyvtkRearrangeFields_FieldLocation_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkRearrangeFields::FieldType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "NAME", vtkRearrangeFields::NAME },
        { "ATTRIBUTE", vtkRearrangeFields::ATTRIBUTE },
      };

    o = PyvtkRearrangeFields_FieldType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRearrangeFields(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRearrangeFields_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRearrangeFields", o) != 0)
  {
    Py_DECREF(o);
  }

}

