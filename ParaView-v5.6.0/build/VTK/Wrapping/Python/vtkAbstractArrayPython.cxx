// python wrapper for vtkAbstractArray
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
#include "vtkAbstractArray.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAbstractArray(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAbstractArray_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkAbstractArray_Doc =
  "vtkAbstractArray - Abstract superclass for all arrays\n\n"
  "Superclass: vtkObject\n\n"
  "vtkAbstractArray is an abstract superclass for data array objects.\n"
  "This class defines an API that all subclasses must support.  The data\n"
  "type must be assignable and copy-constructible, but no other\n"
  "assumptions about its type are made.  Most of the subclasses of this\n"
  "array deal with numeric data either as scalars or tuples of scalars. \n"
  "A program can use the IsNumeric() method to check whether an instance\n"
  "of vtkAbstractArray contains numbers.  It is also possible to test\n"
  "for this by attempting to SafeDownCast an array to an instance of\n"
  "vtkDataArray, although this assumes that all numeric arrays will\n"
  "always be descended from vtkDataArray.\n\n"
  "Every array has a character-string name. The naming of the array\n"
  "occurs automatically when it is instantiated, but you are free to\n"
  "change this name using the SetName() method.  (The array name is used\n"
  "for data manipulation.)\n\n"
  "This class (and subclasses) use two forms of addressing elements:\n"
  "- Value Indexing: The index of an element assuming an\n"
  "  array-of-structs memory layout.\n"
  "- Tuple/Component Indexing: Explicitly specify the tuple and\n"
  "  component indices.\n\n"
  "It is also worth pointing out that the behavior of the \"Insert*\"\n"
  "methods of classes in this hierarchy may not behave as expected. They\n"
  "work exactly as the corresponding \"Set*\" methods, except that memory\n"
  "allocation will be performed if acting on a value past the end of the\n"
  "array. If the data already exists, \"inserting\" will overwrite\n"
  "existing values, rather than shift the array contents and insert the\n"
  "new data at the specified location.\n\n"
  "@sa\n"
  "vtkDataArray vtkStringArray vtkCellArray\n\n";

static PyTypeObject PyvtkAbstractArray_DeleteMethod_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkAbstractArray.DeleteMethod", // tp_name
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

PyObject *PyvtkAbstractArray_DeleteMethod_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkAbstractArray_DeleteMethod_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkAbstractArray_DeleteMethod_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkAbstractArray_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAbstractArray::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractArray_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAbstractArray::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractArray_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAbstractArray *tempr = vtkAbstractArray::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractArray_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAbstractArray::NewInstance());

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
PyvtkAbstractArray_Allocate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  vtkIdType temp0;
  vtkIdType temp1 = 1000;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    int tempr = op->Allocate(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractArray_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->Initialize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractArray_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    int tempr = op->GetDataType();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractArray_GetDataTypeSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataTypeSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    int tempr = op->GetDataTypeSize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractArray_GetDataTypeSize_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDataTypeSize");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAbstractArray::GetDataTypeSize(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractArray_GetDataTypeSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkAbstractArray_GetDataTypeSize_s1(self, args);
    case 1:
      return PyvtkAbstractArray_GetDataTypeSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetDataTypeSize");
  return nullptr;
}



static PyObject *
PyvtkAbstractArray_GetElementComponentSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementComponentSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    int tempr = op->GetElementComponentSize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractArray_SetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

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
      op->vtkAbstractArray::SetNumberOfComponents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractArray_GetNumberOfComponentsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponentsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponentsMinValue() :
      op->vtkAbstractArray::GetNumberOfComponentsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractArray_GetNumberOfComponentsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponentsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponentsMaxValue() :
      op->vtkAbstractArray::GetNumberOfComponentsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractArray_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponents() :
      op->vtkAbstractArray::GetNumberOfComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractArray_SetComponentName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  vtkIdType temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetComponentName(temp0, temp1);
    }
    else
    {
      op->vtkAbstractArray::SetComponentName(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractArray_GetComponentName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetComponentName(temp0) :
      op->vtkAbstractArray::GetComponentName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractArray_HasAComponentName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasAComponentName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasAComponentName() :
      op->vtkAbstractArray::HasAComponentName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractArray_CopyComponentNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyComponentNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  vtkAbstractArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
  {
    int tempr = (ap.IsBound() ?
      op->CopyComponentNames(temp0) :
      op->vtkAbstractArray::CopyComponentNames(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractArray_SetNumberOfTuples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetNumberOfTuples(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractArray_SetNumberOfValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfValues(temp0);
    }
    else
    {
      op->vtkAbstractArray::SetNumberOfValues(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractArray_GetNumberOfTuples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfTuples() :
      op->vtkAbstractArray::GetNumberOfTuples());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractArray_GetNumberOfValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfValues() :
      op->vtkAbstractArray::GetNumberOfValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractArray_SetTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkAbstractArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkAbstractArray"))
  {
    op->SetTuple(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractArray_InsertTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkAbstractArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkAbstractArray"))
  {
    op->InsertTuple(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractArray_InsertTuples_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  vtkIdList *temp0 = nullptr;
  vtkIdList *temp1 = nullptr;
  vtkAbstractArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkIdList") &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkAbstractArray"))
  {
    op->InsertTuples(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractArray_InsertTuples_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  vtkAbstractArray *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkAbstractArray"))
  {
    op->InsertTuples(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractArray_InsertTuples(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkAbstractArray_InsertTuples_s1(self, args);
    case 4:
      return PyvtkAbstractArray_InsertTuples_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InsertTuples");
  return nullptr;
}



static PyObject *
PyvtkAbstractArray_InsertNextTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  vtkIdType temp0;
  vtkAbstractArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAbstractArray"))
  {
    vtkIdType tempr = op->InsertNextTuple(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractArray_GetTuples_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  vtkIdList *temp0 = nullptr;
  vtkAbstractArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkIdList") &&
      ap.GetVTKObject(temp1, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->GetTuples(temp0, temp1);
    }
    else
    {
      op->vtkAbstractArray::GetTuples(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractArray_GetTuples_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkAbstractArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->GetTuples(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAbstractArray::GetTuples(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractArray_GetTuples(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkAbstractArray_GetTuples_s1(self, args);
    case 3:
      return PyvtkAbstractArray_GetTuples_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetTuples");
  return nullptr;
}



static PyObject *
PyvtkAbstractArray_HasStandardMemoryLayout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasStandardMemoryLayout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasStandardMemoryLayout() :
      op->vtkAbstractArray::HasStandardMemoryLayout());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractArray_GetVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    void  *tempr = op->GetVoidPointer(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractArray_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  vtkAbstractArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkAbstractArray::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractArray_InterpolateTuple_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  vtkIdType temp0;
  vtkIdList *temp1 = nullptr;
  vtkAbstractArray *temp2 = nullptr;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkAbstractArray") &&
      ap.GetArray(temp3, size3))
  {
    ap.Save(temp3, save3, size3);

    op->InterpolateTuple(temp0, temp1, temp2, temp3);

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

static PyObject *
PyvtkAbstractArray_InterpolateTuple_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkAbstractArray *temp2 = nullptr;
  vtkIdType temp3;
  vtkAbstractArray *temp4 = nullptr;
  double temp5;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkAbstractArray") &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkAbstractArray") &&
      ap.GetValue(temp5))
  {
    op->InterpolateTuple(temp0, temp1, temp2, temp3, temp4, temp5);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractArray_InterpolateTuple(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkAbstractArray_InterpolateTuple_s1(self, args);
    case 6:
      return PyvtkAbstractArray_InterpolateTuple_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InterpolateTuple");
  return nullptr;
}



static PyObject *
PyvtkAbstractArray_Squeeze(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Squeeze");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->Squeeze();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractArray_Resize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Resize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = op->Resize(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractArray_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Reset();
    }
    else
    {
      op->vtkAbstractArray::Reset();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractArray_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetSize() :
      op->vtkAbstractArray::GetSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractArray_GetMaxId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetMaxId() :
      op->vtkAbstractArray::GetMaxId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractArray_SetVoidArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  vtkIdType temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    op->SetVoidArray(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf0.obj != 0)
  {
    PyBuffer_Release(&pbuf0);
  }
#endif
  return result;
}

static PyObject *
PyvtkAbstractArray_SetVoidArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  vtkIdType temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetVoidArray(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkAbstractArray::SetVoidArray(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf0.obj != 0)
  {
    PyBuffer_Release(&pbuf0);
  }
#endif
  return result;
}

static PyObject *
PyvtkAbstractArray_SetVoidArray(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkAbstractArray_SetVoidArray_s1(self, args);
    case 4:
      return PyvtkAbstractArray_SetVoidArray_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetVoidArray");
  return nullptr;
}



static PyObject *
PyvtkAbstractArray_ExportToVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExportToVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    if (ap.IsBound())
    {
      op->ExportToVoidPointer(temp0);
    }
    else
    {
      op->vtkAbstractArray::ExportToVoidPointer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf0.obj != 0)
  {
    PyBuffer_Release(&pbuf0);
  }
#endif
  return result;
}


static PyObject *
PyvtkAbstractArray_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    unsigned long tempr = op->GetActualMemorySize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractArray_SetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetName(temp0);
    }
    else
    {
      op->vtkAbstractArray::SetName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractArray_GetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetName() :
      op->vtkAbstractArray::GetName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractArray_GetDataTypeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataTypeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDataTypeAsString() :
      op->vtkAbstractArray::GetDataTypeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractArray_CreateArray(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CreateArray");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkAbstractArray *tempr = vtkAbstractArray::CreateArray(temp0);

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
PyvtkAbstractArray_IsNumeric(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsNumeric");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    int tempr = op->IsNumeric();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractArray_NewIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    vtkArrayIterator *tempr = op->NewIterator();

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
PyvtkAbstractArray_GetDataSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetDataSize() :
      op->vtkAbstractArray::GetDataSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractArray_LookupValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LookupValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  vtkVariant *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant"))
  {
    vtkIdType tempr = op->LookupValue(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkAbstractArray_LookupValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LookupValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  vtkVariant *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkIdList *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant") &&
      ap.GetVTKObject(temp1, "vtkIdList"))
  {
    op->LookupValue(*temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkAbstractArray_LookupValue(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkAbstractArray_LookupValue_s1(self, args);
    case 2:
      return PyvtkAbstractArray_LookupValue_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "LookupValue");
  return nullptr;
}



static PyObject *
PyvtkAbstractArray_GetVariantValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfValues()),
                      "0 <= valueIdx && valueIdx < GetNumberOfValues()"))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetVariantValue(temp0) :
      op->vtkAbstractArray::GetVariantValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractArray_InsertVariantValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  vtkIdType temp0;
  vtkVariant *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVariant") &&
      ap.CheckPrecond((0 <= temp0), "0 <= valueIdx"))
  {
    op->InsertVariantValue(temp0, *temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkAbstractArray_SetVariantValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  vtkIdType temp0;
  vtkVariant *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVariant") &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfValues()),
                      "0 <= valueIdx && valueIdx < GetNumberOfValues()"))
  {
    op->SetVariantValue(temp0, *temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkAbstractArray_DataChanged(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DataChanged");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->DataChanged();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractArray_ClearLookup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearLookup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->ClearLookup();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractArray_GetProminentComponentValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProminentComponentValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  int temp0;
  vtkVariantArray *temp1 = nullptr;
  double temp2 = 1.e-6;
  double temp3 = 1.e-3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 4) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkVariantArray") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    if (ap.IsBound())
    {
      op->GetProminentComponentValues(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkAbstractArray::GetProminentComponentValues(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractArray_GetInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInformation *tempr = (ap.IsBound() ?
      op->GetInformation() :
      op->vtkAbstractArray::GetInformation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractArray_HasInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasInformation() :
      op->vtkAbstractArray::HasInformation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractArray_CopyInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  vtkInformation *temp0 = nullptr;
  int temp1 = 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    int tempr = (ap.IsBound() ?
      op->CopyInformation(temp0, temp1) :
      op->vtkAbstractArray::CopyInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractArray_GUI_HIDE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GUI_HIDE");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkAbstractArray::GUI_HIDE();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractArray_PER_COMPONENT(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "PER_COMPONENT");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationInformationVectorKey *tempr = vtkAbstractArray::PER_COMPONENT();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractArray_PER_FINITE_COMPONENT(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "PER_FINITE_COMPONENT");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationInformationVectorKey *tempr = vtkAbstractArray::PER_FINITE_COMPONENT();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractArray_Modified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Modified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Modified();
    }
    else
    {
      op->vtkAbstractArray::Modified();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractArray_DISCRETE_VALUES(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DISCRETE_VALUES");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationVariantVectorKey *tempr = vtkAbstractArray::DISCRETE_VALUES();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractArray_DISCRETE_VALUE_SAMPLE_PARAMETERS(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DISCRETE_VALUE_SAMPLE_PARAMETERS");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationDoubleVectorKey *tempr = vtkAbstractArray::DISCRETE_VALUE_SAMPLE_PARAMETERS();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractArray_GetMaxDiscreteValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxDiscreteValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetMaxDiscreteValues() :
      op->vtkAbstractArray::GetMaxDiscreteValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractArray_SetMaxDiscreteValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxDiscreteValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxDiscreteValues(temp0);
    }
    else
    {
      op->vtkAbstractArray::SetMaxDiscreteValues(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractArray_GetArrayType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractArray *op = static_cast<vtkAbstractArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArrayType() :
      op->vtkAbstractArray::GetArrayType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAbstractArray_Methods[] = {
  {"IsTypeOf", PyvtkAbstractArray_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAbstractArray_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAbstractArray_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAbstractArray\nC++: static vtkAbstractArray *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAbstractArray_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAbstractArray\nC++: vtkAbstractArray *NewInstance()\n\n"},
  {"Allocate", PyvtkAbstractArray_Allocate, METH_VARARGS,
   "V.Allocate(int, int) -> int\nC++: virtual int Allocate(vtkIdType numValues, vtkIdType ext=1000)\n\nAllocate memory for this array. Delete old storage only if\nnecessary. Note that ext is no longer used. This method will\nreset MaxId to -1 and resize the array capacity such that\nthis->Size >= numValues. If numValues is 0, all memory will be\nfreed. Return 1 on success, 0 on failure.\n"},
  {"Initialize", PyvtkAbstractArray_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: virtual void Initialize()\n\nRelease storage and reset array to initial state.\n"},
  {"GetDataType", PyvtkAbstractArray_GetDataType, METH_VARARGS,
   "V.GetDataType() -> int\nC++: virtual int GetDataType()\n\nReturn the underlying data type. An integer indicating data type\nis returned as specified in vtkType.h.\n"},
  {"GetDataTypeSize", PyvtkAbstractArray_GetDataTypeSize, METH_VARARGS,
   "V.GetDataTypeSize() -> int\nC++: virtual int GetDataTypeSize()\nV.GetDataTypeSize(int) -> int\nC++: static int GetDataTypeSize(int type)\n\nReturn the size of the underlying data type.  For a bit, 0 is\nreturned.  For string 0 is returned. Arrays with variable length\ncomponents return 0.\n"},
  {"GetElementComponentSize", PyvtkAbstractArray_GetElementComponentSize, METH_VARARGS,
   "V.GetElementComponentSize() -> int\nC++: virtual int GetElementComponentSize()\n\nReturn the size, in bytes, of the lowest-level element of an\narray.  For vtkDataArray and subclasses this is the size of the\ndata type.  For vtkStringArray, this is\nsizeof(vtkStdString::value_type), which winds up being\nsizeof(char).\n"},
  {"SetNumberOfComponents", PyvtkAbstractArray_SetNumberOfComponents, METH_VARARGS,
   "V.SetNumberOfComponents(int)\nC++: virtual void SetNumberOfComponents(int _arg)\n\nSet/Get the dimension (n) of the components. Must be >= 1. Make\nsure that this is set before allocation.\n"},
  {"GetNumberOfComponentsMinValue", PyvtkAbstractArray_GetNumberOfComponentsMinValue, METH_VARARGS,
   "V.GetNumberOfComponentsMinValue() -> int\nC++: virtual int GetNumberOfComponentsMinValue()\n\nSet/Get the dimension (n) of the components. Must be >= 1. Make\nsure that this is set before allocation.\n"},
  {"GetNumberOfComponentsMaxValue", PyvtkAbstractArray_GetNumberOfComponentsMaxValue, METH_VARARGS,
   "V.GetNumberOfComponentsMaxValue() -> int\nC++: virtual int GetNumberOfComponentsMaxValue()\n\nSet/Get the dimension (n) of the components. Must be >= 1. Make\nsure that this is set before allocation.\n"},
  {"GetNumberOfComponents", PyvtkAbstractArray_GetNumberOfComponents, METH_VARARGS,
   "V.GetNumberOfComponents() -> int\nC++: int GetNumberOfComponents()\n\nSet/Get the dimension (n) of the components. Must be >= 1. Make\nsure that this is set before allocation.\n"},
  {"SetComponentName", PyvtkAbstractArray_SetComponentName, METH_VARARGS,
   "V.SetComponentName(int, string)\nC++: void SetComponentName(vtkIdType component, const char *name)\n\nSet the name for a component. Must be >= 1.\n"},
  {"GetComponentName", PyvtkAbstractArray_GetComponentName, METH_VARARGS,
   "V.GetComponentName(int) -> string\nC++: const char *GetComponentName(vtkIdType component)\n\nGet the component name for a given component. Note: will return\nthe actual string that is stored\n"},
  {"HasAComponentName", PyvtkAbstractArray_HasAComponentName, METH_VARARGS,
   "V.HasAComponentName() -> bool\nC++: bool HasAComponentName()\n\nReturns if any component has had a name assigned\n"},
  {"CopyComponentNames", PyvtkAbstractArray_CopyComponentNames, METH_VARARGS,
   "V.CopyComponentNames(vtkAbstractArray) -> int\nC++: int CopyComponentNames(vtkAbstractArray *da)\n\nCopies the component names from the inputed array to the current\narray make sure that the current array has the same number of\ncomponents as the input array\n"},
  {"SetNumberOfTuples", PyvtkAbstractArray_SetNumberOfTuples, METH_VARARGS,
   "V.SetNumberOfTuples(int)\nC++: virtual void SetNumberOfTuples(vtkIdType numTuples)\n\nSet the number of tuples (a component group) in the array. Note\nthat this may allocate space depending on the number of\ncomponents. Also note that if allocation is performed no copy is\nperformed so existing data will be lost (if data conservation is\nsought, one may use the Resize method instead).\n"},
  {"SetNumberOfValues", PyvtkAbstractArray_SetNumberOfValues, METH_VARARGS,
   "V.SetNumberOfValues(int)\nC++: virtual void SetNumberOfValues(vtkIdType numValues)\n\nSpecify the number of values (tuples * components) for this\nobject to hold. Does an allocation as well as setting the MaxId\nivar. Used in conjunction with SetValue() method for fast\ninsertion.\n"},
  {"GetNumberOfTuples", PyvtkAbstractArray_GetNumberOfTuples, METH_VARARGS,
   "V.GetNumberOfTuples() -> int\nC++: vtkIdType GetNumberOfTuples()\n\nGet the number of complete tuples (a component group) in the\narray.\n"},
  {"GetNumberOfValues", PyvtkAbstractArray_GetNumberOfValues, METH_VARARGS,
   "V.GetNumberOfValues() -> int\nC++: vtkIdType GetNumberOfValues()\n\nGet the total number of values in the array. This is typically\nequivalent to (numTuples * numComponents). The exception is\nduring incremental array construction for subclasses that support\ncomponent insertion, which may result in an incomplete trailing\ntuple.\n"},
  {"SetTuple", PyvtkAbstractArray_SetTuple, METH_VARARGS,
   "V.SetTuple(int, int, vtkAbstractArray)\nC++: virtual void SetTuple(vtkIdType dstTupleIdx,\n    vtkIdType srcTupleIdx, vtkAbstractArray *source)\n\nSet the tuple at dstTupleIdx in this array to the tuple at\nsrcTupleIdx in the source array. This method assumes that the two\narrays have the same type and structure. Note that range checking\nand memory allocation is not performed; use in conjunction with\nSetNumberOfTuples() to allocate space.\n"},
  {"InsertTuple", PyvtkAbstractArray_InsertTuple, METH_VARARGS,
   "V.InsertTuple(int, int, vtkAbstractArray)\nC++: virtual void InsertTuple(vtkIdType dstTupleIdx,\n    vtkIdType srcTupleIdx, vtkAbstractArray *source)\n\nInsert the tuple at srcTupleIdx in the source array into this\narray at dstTupleIdx. Note that memory allocation is performed as\nnecessary to hold the data.\n"},
  {"InsertTuples", PyvtkAbstractArray_InsertTuples, METH_VARARGS,
   "V.InsertTuples(vtkIdList, vtkIdList, vtkAbstractArray)\nC++: virtual void InsertTuples(vtkIdList *dstIds,\n    vtkIdList *srcIds, vtkAbstractArray *source)\nV.InsertTuples(int, int, int, vtkAbstractArray)\nC++: virtual void InsertTuples(vtkIdType dstStart, vtkIdType n,\n    vtkIdType srcStart, vtkAbstractArray *source)\n\nCopy the tuples indexed in srcIds from the source array to the\ntuple locations indexed by dstIds in this array. Note that memory\nallocation is performed as necessary to hold the data.\n"},
  {"InsertNextTuple", PyvtkAbstractArray_InsertNextTuple, METH_VARARGS,
   "V.InsertNextTuple(int, vtkAbstractArray) -> int\nC++: virtual vtkIdType InsertNextTuple(vtkIdType srcTupleIdx,\n    vtkAbstractArray *source)\n\nInsert the tuple from srcTupleIdx in the source array at the end\nof this array. Note that memory allocation is performed as\nnecessary to hold the data. Returns the tuple index at which the\ndata was inserted.\n"},
  {"GetTuples", PyvtkAbstractArray_GetTuples, METH_VARARGS,
   "V.GetTuples(vtkIdList, vtkAbstractArray)\nC++: virtual void GetTuples(vtkIdList *tupleIds,\n    vtkAbstractArray *output)\nV.GetTuples(int, int, vtkAbstractArray)\nC++: virtual void GetTuples(vtkIdType p1, vtkIdType p2,\n    vtkAbstractArray *output)\n\nGiven a list of tuple ids, return an array of tuples. You must\ninsure that the output array has been previously allocated with\nenough space to hold the data.\n"},
  {"HasStandardMemoryLayout", PyvtkAbstractArray_HasStandardMemoryLayout, METH_VARARGS,
   "V.HasStandardMemoryLayout() -> bool\nC++: virtual bool HasStandardMemoryLayout()\n\nReturns true if this array uses the standard memory layout\ndefined in the VTK user guide, e.g. a contiguous array: {t1c1,\nt1c2, t1c3, ... t1cM, t2c1, ... tNcM} where t1c2 is the second\ncomponent of the first tuple.\n"},
  {"GetVoidPointer", PyvtkAbstractArray_GetVoidPointer, METH_VARARGS,
   "V.GetVoidPointer(int) -> void\nC++: virtual void *GetVoidPointer(vtkIdType valueIdx)\n\nReturn a void pointer. For image pipeline interface and other\nspecial pointer manipulation. Use of this method is discouraged,\nas newer arrays require a deep-copy of the array data in order to\nreturn a suitable pointer. See vtkArrayDispatch for a safer\nalternative for fast data access.\n"},
  {"DeepCopy", PyvtkAbstractArray_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkAbstractArray)\nC++: virtual void DeepCopy(vtkAbstractArray *da)\n\nDeep copy of data. Implementation left to subclasses, which\nshould support as many type conversions as possible given the\ndata type.\n\n* Subclasses should call vtkAbstractArray::DeepCopy() so that the\n* information object (if one exists) is copied from da.\n"},
  {"InterpolateTuple", PyvtkAbstractArray_InterpolateTuple, METH_VARARGS,
   "V.InterpolateTuple(int, vtkIdList, vtkAbstractArray, [float, ...])\nC++: virtual void InterpolateTuple(vtkIdType dstTupleIdx,\n    vtkIdList *ptIndices, vtkAbstractArray *source,\n    double *weights)\nV.InterpolateTuple(int, int, vtkAbstractArray, int,\n    vtkAbstractArray, float)\nC++: virtual void InterpolateTuple(vtkIdType dstTupleIdx,\n    vtkIdType srcTupleIdx1, vtkAbstractArray *source1,\n    vtkIdType srcTupleIdx2, vtkAbstractArray *source2, double t)\n\nSet the tuple at dstTupleIdx in this array to the interpolated\ntuple value, given the ptIndices in the source array and\nassociated interpolation weights. This method assumes that the\ntwo arrays are of the same type and strcuture.\n"},
  {"Squeeze", PyvtkAbstractArray_Squeeze, METH_VARARGS,
   "V.Squeeze()\nC++: virtual void Squeeze()\n\nFree any unnecessary memory. Description: Resize object to just\nfit data requirement. Reclaims extra memory.\n"},
  {"Resize", PyvtkAbstractArray_Resize, METH_VARARGS,
   "V.Resize(int) -> int\nC++: virtual int Resize(vtkIdType numTuples)\n\nResize the array to the requested number of tuples and preserve\ndata. Increasing the array size may allocate extra memory beyond\nwhat was requested. MaxId will not be modified when increasing\narray size. Decreasing the array size will trim memory to the\nrequested size and may update MaxId if the valid id range is\ntruncated. Requesting an array size of 0 will free all memory.\nReturns 1 if resizing succeeded and 0 otherwise.\n"},
  {"Reset", PyvtkAbstractArray_Reset, METH_VARARGS,
   "V.Reset()\nC++: void Reset()\n\nReset to an empty state, without freeing any memory.\n"},
  {"GetSize", PyvtkAbstractArray_GetSize, METH_VARARGS,
   "V.GetSize() -> int\nC++: vtkIdType GetSize()\n\nReturn the size of the data.\n"},
  {"GetMaxId", PyvtkAbstractArray_GetMaxId, METH_VARARGS,
   "V.GetMaxId() -> int\nC++: vtkIdType GetMaxId()\n\nWhat is the maximum id currently in the array.\n"},
  {"SetVoidArray", PyvtkAbstractArray_SetVoidArray, METH_VARARGS,
   "V.SetVoidArray(void, int, int)\nC++: virtual void SetVoidArray(void *array, vtkIdType size,\n    int save)\nV.SetVoidArray(void, int, int, int)\nC++: virtual void SetVoidArray(void *array, vtkIdType size,\n    int save, int deleteMethod)\n\nThis method lets the user specify data to be held by the array. \nThe array argument is a pointer to the data.  size is the size of\nthe array supplied by the user.  Set save to 1 to keep the class\nfrom deleting the array when it cleans up or reallocates memory. \nThe class uses the actual array provided; it does not copy the\ndata from the supplied array. If specified, the delete method\ndetermines how the data array will be deallocated. If the delete\nmethod is VTK_DATA_ARRAY_FREE, free() will be used. If the delete\nmethod is VTK_DATA_ARRAY_DELETE, delete[] will be used. If the\ndelete method is VTK_DATA_ARRAY_ALIGNED_FREE _aligned_free() will\nbe used on windows, while free() will be used everywhere else. If\nthe delete method is VTK_DATA_ARRAY_USER_DEFINED a custom free\nfunction can be assigned to be called using SetArrayFreeFunction,\nif no custom function is assigned we will default to free(). The\ndefault is FREE. (Note not all subclasses can support\ndeleteMethod.)\n"},
  {"ExportToVoidPointer", PyvtkAbstractArray_ExportToVoidPointer, METH_VARARGS,
   "V.ExportToVoidPointer(void)\nC++: virtual void ExportToVoidPointer(void *out_ptr)\n\nThis method copies the array data to the void pointer specified\nby the user.  It is up to the user to allocate enough memory for\nthe void pointer.\n"},
  {"GetActualMemorySize", PyvtkAbstractArray_GetActualMemorySize, METH_VARARGS,
   "V.GetActualMemorySize() -> int\nC++: virtual unsigned long GetActualMemorySize()\n\nReturn the memory in kibibytes (1024 bytes) consumed by this data\narray. Used to support streaming and reading/writing data. The\nvalue returned is guaranteed to be greater than or equal to the\nmemory required to actually represent the data represented by\nthis object. The information returned is valid only after the\npipeline has been updated.\n"},
  {"SetName", PyvtkAbstractArray_SetName, METH_VARARGS,
   "V.SetName(string)\nC++: virtual void SetName(const char *_arg)\n\nSet/get array's name\n"},
  {"GetName", PyvtkAbstractArray_GetName, METH_VARARGS,
   "V.GetName() -> string\nC++: virtual char *GetName()\n\nSet/get array's name\n"},
  {"GetDataTypeAsString", PyvtkAbstractArray_GetDataTypeAsString, METH_VARARGS,
   "V.GetDataTypeAsString() -> string\nC++: virtual const char *GetDataTypeAsString(void)\n\nGet the name of a data type as a string.\n"},
  {"CreateArray", PyvtkAbstractArray_CreateArray, METH_VARARGS,
   "V.CreateArray(int) -> vtkAbstractArray\nC++: static vtkAbstractArray *CreateArray(int dataType)\n\nCreates an array for dataType where dataType is one of VTK_BIT,\nVTK_CHAR, VTK_UNSIGNED_CHAR, VTK_SHORT, VTK_UNSIGNED_SHORT,\nVTK_INT, VTK_UNSIGNED_INT, VTK_LONG, VTK_UNSIGNED_LONG,\nVTK_DOUBLE, VTK_DOUBLE, VTK_ID_TYPE, VTK_STRING. Note that the\ndata array returned has to be deleted by the user.\n"},
  {"IsNumeric", PyvtkAbstractArray_IsNumeric, METH_VARARGS,
   "V.IsNumeric() -> int\nC++: virtual int IsNumeric()\n\nThis method is here to make backward compatibility easier.  It\nmust return true if and only if an array contains numeric data.\n"},
  {"NewIterator", PyvtkAbstractArray_NewIterator, METH_VARARGS,
   "V.NewIterator() -> vtkArrayIterator\nC++: virtual vtkArrayIterator *NewIterator()\n\nSubclasses must override this method and provide the right kind\nof templated vtkArrayIteratorTemplate.\n"},
  {"GetDataSize", PyvtkAbstractArray_GetDataSize, METH_VARARGS,
   "V.GetDataSize() -> int\nC++: virtual vtkIdType GetDataSize()\n\nReturns the size of the data in DataTypeSize units. Thus, the\nnumber of bytes for the data can be computed by GetDataSize() *\nGetDataTypeSize(). Non-contiguous or variable- size arrays need\nto override this method.\n"},
  {"LookupValue", PyvtkAbstractArray_LookupValue, METH_VARARGS,
   "V.LookupValue(vtkVariant) -> int\nC++: virtual vtkIdType LookupValue(vtkVariant value)\nV.LookupValue(vtkVariant, vtkIdList)\nC++: virtual void LookupValue(vtkVariant value,\n    vtkIdList *valueIds)\n\nReturn the value indices where a specific value appears.\n"},
  {"GetVariantValue", PyvtkAbstractArray_GetVariantValue, METH_VARARGS,
   "V.GetVariantValue(int) -> vtkVariant\nC++: virtual vtkVariant GetVariantValue(vtkIdType valueIdx)\n\nRetrieve value from the array as a variant.\n"},
  {"InsertVariantValue", PyvtkAbstractArray_InsertVariantValue, METH_VARARGS,
   "V.InsertVariantValue(int, vtkVariant)\nC++: virtual void InsertVariantValue(vtkIdType valueIdx,\n    vtkVariant value)\n\nInsert a value into the array from a variant.  This method does\nbounds checking.\n"},
  {"SetVariantValue", PyvtkAbstractArray_SetVariantValue, METH_VARARGS,
   "V.SetVariantValue(int, vtkVariant)\nC++: virtual void SetVariantValue(vtkIdType valueIdx,\n    vtkVariant value)\n\nSet a value in the array from a variant.  This method does NOT do\nbounds checking.\n"},
  {"DataChanged", PyvtkAbstractArray_DataChanged, METH_VARARGS,
   "V.DataChanged()\nC++: virtual void DataChanged()\n\nTell the array explicitly that the data has changed. This is only\nnecessary to call when you modify the array contents without\nusing the array's API (i.e. you retrieve a pointer to the data\nand modify the array contents).  You need to call this so that\nthe fast lookup will know to rebuild itself.  Otherwise, the\nlookup functions will give incorrect results.\n"},
  {"ClearLookup", PyvtkAbstractArray_ClearLookup, METH_VARARGS,
   "V.ClearLookup()\nC++: virtual void ClearLookup()\n\nDelete the associated fast lookup data structure on this array,\nif it exists.  The lookup will be rebuilt on the next call to a\nlookup function.\n"},
  {"GetProminentComponentValues", PyvtkAbstractArray_GetProminentComponentValues, METH_VARARGS,
   "V.GetProminentComponentValues(int, vtkVariantArray, float, float)\nC++: virtual void GetProminentComponentValues(int comp,\n    vtkVariantArray *values, double uncertainty=1.e-6,\n    double minimumProminence=1.e-3)\n\nPopulate the given vtkVariantArray with a set of distinct values\ntaken on by the requested component (or, when passed -1, by the\ntuples as a whole). If the set of prominent values has more than\n32 entries, then the array is assumed to be continuous in nature\nand no values are returned.\n\n* This method takes 2 parameters: uncertainty and\n  minimumProminence.\n* Note that this set of returned values may not be complete if\n* uncertainty and minimumProminence are both larger than 0.0;\n* in order to perform interactively, a subsample of the array is\n* used to determine the set of values.\n\n* The first parameter ( uncertainty, U) is the maximum acceptable\n* probability that a prominent value will not be detected.\n* Setting this to 0 will cause every value in the array to be\n  examined.\n\n* The second parameter ( minimumProminence, P) specifies the\n  smallest\n* relative frequency (in [0,1]) with which a value in the array\n  may\n* occur and still be considered prominent. Setting this to 0\n* will force every value in the array to be traversed.\n* Using numbers close to 0 for this parameter quickly causes\n* the number of samples required to obtain the given uncertainty\n  to\n* subsume the entire array, as rare occurrences require frequent\n* sampling to detect.\n\n* For an array with T tuples and given uncertainty U and\n  mininumum\n* prominence P, we sample N values, with N = f(T; P, U).\n* We want f to be sublinear in T in order to interactively handle\nlarge\n* arrays; in practice, we can make f independent of T:\n* $ N >= \\frac{5}{P}\\mathrm{ln}\\left(\\frac{1}{PU}\\right) $,\n* but note that small values of P are costly to achieve.\n* The default parameters will locate prominent values that occur\n  at least\n* 1 out of every 1000 samples with a confidence ...\n [Truncated]\n"},
  {"GetInformation", PyvtkAbstractArray_GetInformation, METH_VARARGS,
   "V.GetInformation() -> vtkInformation\nC++: vtkInformation *GetInformation()\n\nGet an information object that can be used to annotate the array.\nThis will always return an instance of vtkInformation, if one is\nnot currently associated with the array it will be created.\n"},
  {"HasInformation", PyvtkAbstractArray_HasInformation, METH_VARARGS,
   "V.HasInformation() -> bool\nC++: bool HasInformation()\n\nInquire if this array has an instance of vtkInformation already\nassociated with it.\n"},
  {"CopyInformation", PyvtkAbstractArray_CopyInformation, METH_VARARGS,
   "V.CopyInformation(vtkInformation, int) -> int\nC++: virtual int CopyInformation(vtkInformation *infoFrom,\n    int deep=1)\n\nCopy information instance. Arrays use information objects in a\nvariety of ways. It is important to have flexibility in this\nregard because certain keys should not be copied, while others\nmust be.\n\n* NOTE: Subclasses must always call their superclass's\n  CopyInformation\n* method, so that all classes in the hierarchy get a chance to\n  remove\n* keys they do not wish to be copied. The subclass will not need\n  to\n* explicitly copy the keys as it's handled here.\n"},
  {"GUI_HIDE", PyvtkAbstractArray_GUI_HIDE, METH_VARARGS,
   "V.GUI_HIDE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *GUI_HIDE()\n\nThis key is a hint to end user interface that this array is\ninternal and should not be shown to the end user.\n"},
  {"PER_COMPONENT", PyvtkAbstractArray_PER_COMPONENT, METH_VARARGS,
   "V.PER_COMPONENT() -> vtkInformationInformationVectorKey\nC++: static vtkInformationInformationVectorKey *PER_COMPONENT()\n\nThis key is used to hold a vector of COMPONENT_VALUES (and, for\nvtkDataArray subclasses, COMPONENT_RANGE) keys -- one for each\ncomponent of the array.  You may add additional per-component\nkey-value pairs to information objects in this vector. However if\nyou do so, you must be sure to either (1) set COMPONENT_VALUES to\nan invalid variant and set COMPONENT_RANGE to {VTK_DOUBLE_MAX,\nVTK_DOUBLE_MIN} or (2) call ComputeUniqueValues(component) and\nComputeRange(component) beforemodifying the information object.\nOtherwise it is possible for modifications to the array to take\nplace without the bounds on the component being updated.\n"},
  {"PER_FINITE_COMPONENT", PyvtkAbstractArray_PER_FINITE_COMPONENT, METH_VARARGS,
   "V.PER_FINITE_COMPONENT() -> vtkInformationInformationVectorKey\nC++: static vtkInformationInformationVectorKey *PER_FINITE_COMPONENT(\n    )\n\nThis key is used to hold a vector of COMPONENT_VALUES (and, for\nvtkDataArray subclasses, COMPONENT_RANGE) keys -- one for each\ncomponent of the array.  You may add additional per-component\nkey-value pairs to information objects in this vector. However if\nyou do so, you must be sure to either (1) set COMPONENT_VALUES to\nan invalid variant and set COMPONENT_RANGE to {VTK_DOUBLE_MAX,\nVTK_DOUBLE_MIN} or (2) call ComputeUniqueValues(component) and\nComputeFiniteRange(component) beforemodifying the information\nobject. Otherwise it is possible for modifications to the array\nto take place without the bounds on the component being updated.\n"},
  {"Modified", PyvtkAbstractArray_Modified, METH_VARARGS,
   "V.Modified()\nC++: void Modified() override;\n\nRemoves out-of-date PER_COMPONENT() and PER_FINITE_COMPONENT()\nvalues.\n"},
  {"DISCRETE_VALUES", PyvtkAbstractArray_DISCRETE_VALUES, METH_VARARGS,
   "V.DISCRETE_VALUES() -> vtkInformationVariantVectorKey\nC++: static vtkInformationVariantVectorKey *DISCRETE_VALUES()\n\nA key used to hold discrete values taken on either by the tuples\nof the array (when present in this->GetInformation()) or\nindividual components (when present in one entry of the\nPER_COMPONENT() information vector).\n"},
  {"DISCRETE_VALUE_SAMPLE_PARAMETERS", PyvtkAbstractArray_DISCRETE_VALUE_SAMPLE_PARAMETERS, METH_VARARGS,
   "V.DISCRETE_VALUE_SAMPLE_PARAMETERS()\n    -> vtkInformationDoubleVectorKey\nC++: static vtkInformationDoubleVectorKey *DISCRETE_VALUE_SAMPLE_PARAMETERS(\n    )\n\nA key used to hold conditions under which cached discrete values\nwere generated; the value is a 2-vector of doubles. The first\nentry corresponds to the maximum uncertainty that prominent\nvalues exist but have not been detected. The second entry\ncorresponds to the smallest relative frequency a value is allowed\nto have and still appear on the list.\n"},
  {"GetMaxDiscreteValues", PyvtkAbstractArray_GetMaxDiscreteValues, METH_VARARGS,
   "V.GetMaxDiscreteValues() -> int\nC++: virtual unsigned int GetMaxDiscreteValues()\n\nGet/Set the maximum number of prominent values this array may\ncontain before it is considered continuous.  Default value is 32.\n"},
  {"SetMaxDiscreteValues", PyvtkAbstractArray_SetMaxDiscreteValues, METH_VARARGS,
   "V.SetMaxDiscreteValues(int)\nC++: virtual void SetMaxDiscreteValues(unsigned int _arg)\n\nGet/Set the maximum number of prominent values this array may\ncontain before it is considered continuous.  Default value is 32.\n"},
  {"GetArrayType", PyvtkAbstractArray_GetArrayType, METH_VARARGS,
   "V.GetArrayType() -> int\nC++: virtual int GetArrayType()\n\nMethod for type-checking in FastDownCast implementations. See\nalso vtkArrayDownCast.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAbstractArray_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkAbstractArray", // tp_name
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
  PyvtkAbstractArray_Doc, // tp_doc
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

PyObject *PyvtkAbstractArray_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAbstractArray_Type, PyvtkAbstractArray_Methods,
    "vtkAbstractArray",
 nullptr);

  PyTypeObject *pytype = &PyvtkAbstractArray_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkAbstractArray_DeleteMethod_Type);
  PyvtkAbstractArray_DeleteMethod_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkAbstractArray_DeleteMethod_Type);

  o = (PyObject *)&PyvtkAbstractArray_DeleteMethod_Type;
  if (PyDict_SetItemString(d, "DeleteMethod", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkAbstractArray::DeleteMethod cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "VTK_DATA_ARRAY_FREE", vtkAbstractArray::VTK_DATA_ARRAY_FREE },
        { "VTK_DATA_ARRAY_DELETE", vtkAbstractArray::VTK_DATA_ARRAY_DELETE },
        { "VTK_DATA_ARRAY_ALIGNED_FREE", vtkAbstractArray::VTK_DATA_ARRAY_ALIGNED_FREE },
        { "VTK_DATA_ARRAY_USER_DEFINED", vtkAbstractArray::VTK_DATA_ARRAY_USER_DEFINED },
      };

    o = PyvtkAbstractArray_DeleteMethod_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 8; c++)
  {
    static const struct { const char *name; int value; }
      constants[8] = {
        { "MAX_DISCRETE_VALUES", vtkAbstractArray::MAX_DISCRETE_VALUES },
        { "AbstractArray", vtkAbstractArray::AbstractArray },
        { "DataArray", vtkAbstractArray::DataArray },
        { "AoSDataArrayTemplate", vtkAbstractArray::AoSDataArrayTemplate },
        { "SoADataArrayTemplate", vtkAbstractArray::SoADataArrayTemplate },
        { "TypedDataArray", vtkAbstractArray::TypedDataArray },
        { "MappedDataArray", vtkAbstractArray::MappedDataArray },
        { "DataArrayTemplate", vtkAbstractArray::DataArrayTemplate },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAbstractArray(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAbstractArray_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAbstractArray", o) != 0)
  {
    Py_DECREF(o);
  }

}

