// python wrapper for vtkDataSetAttributesFieldList
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
#include "vtkDataSetAttributesFieldList.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDataSetAttributesFieldList(PyObject *); }

static const char *PyvtkDataSetAttributesFieldList_Doc =
  "vtkDataSetAttributesFieldList - helps manage arrays from multiple\nvtkDataSetAttributes.\n\n"
  "vtkDataSetAttributesFieldList, also called\n"
  "vtkDataSetAttributes::FieldList, is used to help with filters when\n"
  "dealing with arrays from multiple vtkDataSetAttributes instances,\n"
  "potentially from multiple inputs.\n\n"
  "Consider a filter that appends multiple inputs, e.g.\n"
  "vtkAppendPolyData. Besides appending mesh elements, such a filter\n"
  "also needs to combine field arrays (point, and cell data) from inputs\n"
  "to pass on to the output. Now if all the inputs had exactly the same\n"
  "set of arrays, we're all set. However, more often than not, the\n"
  "inputs will have different sets of arrays. The filter will need to\n"
  "match up from various inputs to combine together, potentially\n"
  "dropping arrays not in all inputs. Furthermore, it needs to ensure\n"
  "arrays in the output are flagged as attributes consistently. All of\n"
  "this can be done using vtkDataSetAttributesFieldList.\n\n"
  "@section Usage Usage\n\n"
  "Typical usage is as follows:\n"
  "1. call `IntersectFieldList` or `UnionFieldList` for all input\n"
  "   vtkDataSetAttributes instances,\n"
  "2. allocate arrays for the output vtkDataSetAttributes by using\n"
  "   `CopyAllocate`,\n"
  "3. call `CopyData` per input (preserving the input order used in step\n"
  "1) to copy tuple(s) from input to the output.\n\n"
  "`vtkDataSetAttributes::InitializeFieldList` is provided for API\n"
  "compatibility with previous implementation of this class and it not\n"
  "required to be called. Simply calling `UnionFieldList` or\n"
  "`IntersectFieldList` for the first vtkDataSetAttributes instance is\n"
  "sufficient.\n\n"
  "`CopyAllocate, `CopyData`, and `InterpolatePoint` methods on this\n"
  "class are called by similarly named variants on vtkDataSetAttributes\n"
  "that take in a FieldList instance as an argument. Hence, either forms\n"
  "may be used.\n\n"
  "Calls to `UnionFieldList` and `IntersectFieldList` cannot be mixed.\n"
  "Use `Reset` or `InitializeFieldList` to change mode and start\n"
  "reinitialization.\n\n"
  "vtkDataSetAttributesFieldList(int number_of_inputs=0)\n";


static PyObject *
PyvtkDataSetAttributesFieldList_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkDataSetAttributesFieldList *op = static_cast<vtkDataSetAttributesFieldList *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->Reset();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributesFieldList_InitializeFieldList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeFieldList");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkDataSetAttributesFieldList *op = static_cast<vtkDataSetAttributesFieldList *>(vp);

  vtkDataSetAttributes *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSetAttributes"))
  {
    op->InitializeFieldList(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributesFieldList_IntersectFieldList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectFieldList");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkDataSetAttributesFieldList *op = static_cast<vtkDataSetAttributesFieldList *>(vp);

  vtkDataSetAttributes *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSetAttributes"))
  {
    op->IntersectFieldList(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributesFieldList_UnionFieldList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnionFieldList");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkDataSetAttributesFieldList *op = static_cast<vtkDataSetAttributesFieldList *>(vp);

  vtkDataSetAttributes *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSetAttributes"))
  {
    op->UnionFieldList(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributesFieldList_CopyAllocate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAllocate");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkDataSetAttributesFieldList *op = static_cast<vtkDataSetAttributesFieldList *>(vp);

  vtkDataSetAttributes *temp0 = nullptr;
  int temp1;
  vtkIdType temp2;
  vtkIdType temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkDataSetAttributes") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    op->CopyAllocate(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributesFieldList_CopyData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyData");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkDataSetAttributesFieldList *op = static_cast<vtkDataSetAttributesFieldList *>(vp);

  int temp0;
  vtkDataSetAttributes *temp1 = nullptr;
  vtkIdType temp2;
  vtkDataSetAttributes *temp3 = nullptr;
  vtkIdType temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataSetAttributes") &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkDataSetAttributes") &&
      ap.GetValue(temp4))
  {
    op->CopyData(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributesFieldList_CopyData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyData");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkDataSetAttributesFieldList *op = static_cast<vtkDataSetAttributesFieldList *>(vp);

  int temp0;
  vtkDataSetAttributes *temp1 = nullptr;
  vtkIdType temp2;
  vtkIdType temp3;
  vtkDataSetAttributes *temp4 = nullptr;
  vtkIdType temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataSetAttributes") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkDataSetAttributes") &&
      ap.GetValue(temp5))
  {
    op->CopyData(temp0, temp1, temp2, temp3, temp4, temp5);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributesFieldList_CopyData(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 5:
      return PyvtkDataSetAttributesFieldList_CopyData_s1(self, args);
    case 6:
      return PyvtkDataSetAttributesFieldList_CopyData_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "CopyData");
  return nullptr;
}



static PyObject *
PyvtkDataSetAttributesFieldList_InterpolatePoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolatePoint");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkDataSetAttributesFieldList *op = static_cast<vtkDataSetAttributesFieldList *>(vp);

  int temp0;
  vtkDataSetAttributes *temp1 = nullptr;
  vtkIdList *temp2 = nullptr;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  vtkDataSetAttributes *temp4 = nullptr;
  vtkIdType temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataSetAttributes") &&
      ap.GetVTKObject(temp2, "vtkIdList") &&
      ap.GetArray(temp3, size3) &&
      ap.GetVTKObject(temp4, "vtkDataSetAttributes") &&
      ap.GetValue(temp5))
  {
    ap.Save(temp3, save3, size3);

    op->InterpolatePoint(temp0, temp1, temp2, temp3, temp4, temp5);

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkDataSetAttributesFieldList_IsAttributePresent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAttributePresent");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkDataSetAttributesFieldList *op = static_cast<vtkDataSetAttributesFieldList *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = op->IsAttributePresent(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkDataSetAttributesFieldList_GetNumberOfFields(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFields");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkDataSetAttributesFieldList *op = static_cast<vtkDataSetAttributesFieldList *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->GetNumberOfFields();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkDataSetAttributesFieldList_GetFieldIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldIndex");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkDataSetAttributesFieldList *op = static_cast<vtkDataSetAttributesFieldList *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = op->GetFieldIndex(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkDataSetAttributesFieldList_GetFieldName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldName");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkDataSetAttributesFieldList *op = static_cast<vtkDataSetAttributesFieldList *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = op->GetFieldName(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkDataSetAttributesFieldList_GetFieldComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldComponents");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkDataSetAttributesFieldList *op = static_cast<vtkDataSetAttributesFieldList *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = op->GetFieldComponents(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkDataSetAttributesFieldList_GetDSAIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDSAIndex");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkDataSetAttributesFieldList *op = static_cast<vtkDataSetAttributesFieldList *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = op->GetDSAIndex(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}
#endif

static PyMethodDef PyvtkDataSetAttributesFieldList_Methods[] = {
  {"Reset", PyvtkDataSetAttributesFieldList_Reset, METH_VARARGS,
   "V.Reset()\nC++: void Reset()\n\nInitializes the field list to empty.\n"},
  {"InitializeFieldList", PyvtkDataSetAttributesFieldList_InitializeFieldList, METH_VARARGS,
   "V.InitializeFieldList(vtkDataSetAttributes)\nC++: void InitializeFieldList(vtkDataSetAttributes *dsa)\n\nInitialize the field list. This also adds the first input.\nCalling this method is optional. The first call to\n`IntersectFieldList` or `UnionFieldList` on a new instance or\nafter calling `Reset()` will have the same effect.\n"},
  {"IntersectFieldList", PyvtkDataSetAttributesFieldList_IntersectFieldList, METH_VARARGS,
   "V.IntersectFieldList(vtkDataSetAttributes)\nC++: void IntersectFieldList(vtkDataSetAttributes *dsa)\n\nUpdate the field list for an intersection of arrays registered so\nfar and those in `dsa`.\n"},
  {"UnionFieldList", PyvtkDataSetAttributesFieldList_UnionFieldList, METH_VARARGS,
   "V.UnionFieldList(vtkDataSetAttributes)\nC++: void UnionFieldList(vtkDataSetAttributes *dsa)\n\nUpdate the field list for an union of arrays registered so far\nand those in `dsa`.\n"},
  {"CopyAllocate", PyvtkDataSetAttributesFieldList_CopyAllocate, METH_VARARGS,
   "V.CopyAllocate(vtkDataSetAttributes, int, int, int)\nC++: void CopyAllocate(vtkDataSetAttributes *output, int ctype,\n    vtkIdType sz, vtkIdType ext)\n\nThese methods can called to generate and update the output\nvtkDataSetAttributes. These match corresponding API on\nvtkDataSetAttributes and can be called via the output\nvtkDataSetAttributes instance instead as well.\n"},
  {"CopyData", PyvtkDataSetAttributesFieldList_CopyData, METH_VARARGS,
   "V.CopyData(int, vtkDataSetAttributes, int, vtkDataSetAttributes,\n    int)\nC++: void CopyData(int inputIndex, vtkDataSetAttributes *input,\n    vtkIdType fromId, vtkDataSetAttributes *output,\n    vtkIdType toId)\nV.CopyData(int, vtkDataSetAttributes, int, int,\n    vtkDataSetAttributes, int)\nC++: void CopyData(int inputIdx, vtkDataSetAttributes *input,\n    vtkIdType inputStart, vtkIdType numValues,\n    vtkDataSetAttributes *output, vtkIdType outStart)\n\nThese methods can called to generate and update the output\nvtkDataSetAttributes. These match corresponding API on\nvtkDataSetAttributes and can be called via the output\nvtkDataSetAttributes instance instead as well.\n"},
  {"InterpolatePoint", PyvtkDataSetAttributesFieldList_InterpolatePoint, METH_VARARGS,
   "V.InterpolatePoint(int, vtkDataSetAttributes, vtkIdList, [float,\n    ...], vtkDataSetAttributes, int)\nC++: void InterpolatePoint(int inputIdx,\n    vtkDataSetAttributes *input, vtkIdList *inputIds,\n    double *weights, vtkDataSetAttributes *output, vtkIdType toId)\n\nThese methods can called to generate and update the output\nvtkDataSetAttributes. These match corresponding API on\nvtkDataSetAttributes and can be called via the output\nvtkDataSetAttributes instance instead as well.\n"},
#if !defined(VTK_LEGACY_REMOVE)
  {"IsAttributePresent", PyvtkDataSetAttributesFieldList_IsAttributePresent, METH_VARARGS,
   "V.IsAttributePresent(int) -> int\nC++: int IsAttributePresent(int attrType)\n\nvtkDataSetAttributes::FieldList used a different internal data\nstructure in older versions of VTK. This exposes that API for\nlegacy applications.\n\nUsing these methods should be avoided in new code and should be\nreplaced in old code as these methods can be slow.\n\n@deprecated VTK 8.2\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {"GetNumberOfFields", PyvtkDataSetAttributesFieldList_GetNumberOfFields, METH_VARARGS,
   "V.GetNumberOfFields() -> int\nC++: int GetNumberOfFields()\n\nvtkDataSetAttributes::FieldList used a different internal data\nstructure in older versions of VTK. This exposes that API for\nlegacy applications.\n\nUsing these methods should be avoided in new code and should be\nreplaced in old code as these methods can be slow.\n\n@deprecated VTK 8.2\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {"GetFieldIndex", PyvtkDataSetAttributesFieldList_GetFieldIndex, METH_VARARGS,
   "V.GetFieldIndex(int) -> int\nC++: int GetFieldIndex(int i)\n\nvtkDataSetAttributes::FieldList used a different internal data\nstructure in older versions of VTK. This exposes that API for\nlegacy applications.\n\nUsing these methods should be avoided in new code and should be\nreplaced in old code as these methods can be slow.\n\n@deprecated VTK 8.2\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {"GetFieldName", PyvtkDataSetAttributesFieldList_GetFieldName, METH_VARARGS,
   "V.GetFieldName(int) -> string\nC++: const char *GetFieldName(int i)\n\nvtkDataSetAttributes::FieldList used a different internal data\nstructure in older versions of VTK. This exposes that API for\nlegacy applications.\n\nUsing these methods should be avoided in new code and should be\nreplaced in old code as these methods can be slow.\n\n@deprecated VTK 8.2\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {"GetFieldComponents", PyvtkDataSetAttributesFieldList_GetFieldComponents, METH_VARARGS,
   "V.GetFieldComponents(int) -> int\nC++: int GetFieldComponents(int i)\n\nvtkDataSetAttributes::FieldList used a different internal data\nstructure in older versions of VTK. This exposes that API for\nlegacy applications.\n\nUsing these methods should be avoided in new code and should be\nreplaced in old code as these methods can be slow.\n\n@deprecated VTK 8.2\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {"GetDSAIndex", PyvtkDataSetAttributesFieldList_GetDSAIndex, METH_VARARGS,
   "V.GetDSAIndex(int, int) -> int\nC++: int GetDSAIndex(int index, int i)\n\nvtkDataSetAttributes::FieldList used a different internal data\nstructure in older versions of VTK. This exposes that API for\nlegacy applications.\n\nUsing these methods should be avoided in new code and should be\nreplaced in old code as these methods can be slow.\n\n@deprecated VTK 8.2\n"},
#endif
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkDataSetAttributesFieldList_vtkDataSetAttributesFieldList(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkDataSetAttributesFieldList");

  int temp0 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    vtkDataSetAttributesFieldList *op = new vtkDataSetAttributesFieldList(temp0);

    result = PyVTKSpecialObject_New("vtkDataSetAttributesFieldList", op);
  }

  return result;
}

static PyMethodDef PyvtkDataSetAttributesFieldList_vtkDataSetAttributesFieldList_Methods[] = {
  {nullptr, PyvtkDataSetAttributesFieldList_vtkDataSetAttributesFieldList, METH_VARARGS,
   "@|i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDataSetAttributesFieldList_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkDataSetAttributesFieldList_vtkDataSetAttributesFieldList(nullptr, args);
}

static void PyvtkDataSetAttributesFieldList_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkDataSetAttributesFieldList *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkDataSetAttributesFieldList_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", Py_TYPE(self)->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

static PyTypeObject PyvtkDataSetAttributesFieldList_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkDataSetAttributesFieldList", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkDataSetAttributesFieldList_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkDataSetAttributesFieldList_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkDataSetAttributesFieldList_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkDataSetAttributesFieldList_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDataSetAttributesFieldList_TypeNew(); }

PyObject *PyvtkDataSetAttributesFieldList_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkDataSetAttributesFieldList_Type,
    PyvtkDataSetAttributesFieldList_Methods,
    PyvtkDataSetAttributesFieldList_vtkDataSetAttributesFieldList_Methods,
    nullptr);

  PyTypeObject *pytype = &PyvtkDataSetAttributesFieldList_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDataSetAttributesFieldList(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDataSetAttributesFieldList_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkDataSetAttributesFieldList", o) != 0)
  {
    Py_DECREF(o);
  }

}

