// python wrapper for vtkSMDoubleMapProperty
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
#include "vtkSMDoubleMapProperty.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMDoubleMapProperty(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMDoubleMapProperty_ClassNew(); }

#ifndef DECLARED_PyvtkSMMapProperty_ClassNew
extern "C" { PyObject *PyvtkSMMapProperty_ClassNew(); }
#define DECLARED_PyvtkSMMapProperty_ClassNew
#endif

static const char *PyvtkSMDoubleMapProperty_Doc =
  "vtkSMDoubleMapProperty - a map property storing double values\n\n"
  "Superclass: vtkSMMapProperty\n\n"
  "vtkSMDoubleMapProperty stores a map of vtkIdType keys to double\n"
  "values.\n\n";


static PyObject *
PyvtkSMDoubleMapProperty_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMDoubleMapProperty::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDoubleMapProperty_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleMapProperty *op = static_cast<vtkSMDoubleMapProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMDoubleMapProperty::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDoubleMapProperty_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMDoubleMapProperty *tempr = vtkSMDoubleMapProperty::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDoubleMapProperty_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleMapProperty *op = static_cast<vtkSMDoubleMapProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMDoubleMapProperty *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMDoubleMapProperty::NewInstance());

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
PyvtkSMDoubleMapProperty_SetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleMapProperty *op = static_cast<vtkSMDoubleMapProperty *>(vp);

  unsigned int temp0;
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
      op->vtkSMDoubleMapProperty::SetNumberOfComponents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMDoubleMapProperty_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleMapProperty *op = static_cast<vtkSMDoubleMapProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfComponents() :
      op->vtkSMDoubleMapProperty::GetNumberOfComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDoubleMapProperty_SetElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleMapProperty *op = static_cast<vtkSMDoubleMapProperty *>(vp);

  vtkIdType temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetElement(temp0, temp1);
    }
    else
    {
      op->vtkSMDoubleMapProperty::SetElement(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMDoubleMapProperty_SetElements_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleMapProperty *op = static_cast<vtkSMDoubleMapProperty *>(vp);

  vtkIdType temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(size1);
  double *temp1 = store1.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    if (ap.IsBound())
    {
      op->SetElements(temp0, temp1);
    }
    else
    {
      op->vtkSMDoubleMapProperty::SetElements(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMDoubleMapProperty_SetElements_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleMapProperty *op = static_cast<vtkSMDoubleMapProperty *>(vp);

  vtkIdType temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(size1);
  double *temp1 = store1.Data();
  unsigned int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetElements(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSMDoubleMapProperty::SetElements(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMDoubleMapProperty_SetElements(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSMDoubleMapProperty_SetElements_s1(self, args);
    case 3:
      return PyvtkSMDoubleMapProperty_SetElements_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetElements");
  return nullptr;
}



static PyObject *
PyvtkSMDoubleMapProperty_SetElementComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElementComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleMapProperty *op = static_cast<vtkSMDoubleMapProperty *>(vp);

  vtkIdType temp0;
  unsigned int temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetElementComponent(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSMDoubleMapProperty::SetElementComponent(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMDoubleMapProperty_GetElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleMapProperty *op = static_cast<vtkSMDoubleMapProperty *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetElement(temp0) :
      op->vtkSMDoubleMapProperty::GetElement(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDoubleMapProperty_GetElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleMapProperty *op = static_cast<vtkSMDoubleMapProperty *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetElements(temp0) :
      op->vtkSMDoubleMapProperty::GetElements(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDoubleMapProperty_GetElementComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleMapProperty *op = static_cast<vtkSMDoubleMapProperty *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    double tempr = (ap.IsBound() ?
      op->GetElementComponent(temp0, temp1) :
      op->vtkSMDoubleMapProperty::GetElementComponent(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDoubleMapProperty_RemoveElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleMapProperty *op = static_cast<vtkSMDoubleMapProperty *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveElement(temp0);
    }
    else
    {
      op->vtkSMDoubleMapProperty::RemoveElement(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMDoubleMapProperty_GetNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleMapProperty *op = static_cast<vtkSMDoubleMapProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfElements() :
      op->vtkSMDoubleMapProperty::GetNumberOfElements());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDoubleMapProperty_HasElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleMapProperty *op = static_cast<vtkSMDoubleMapProperty *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasElement(temp0) :
      op->vtkSMDoubleMapProperty::HasElement(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDoubleMapProperty_ClearElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleMapProperty *op = static_cast<vtkSMDoubleMapProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearElements();
    }
    else
    {
      op->vtkSMDoubleMapProperty::ClearElements();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMDoubleMapProperty_NewIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleMapProperty *op = static_cast<vtkSMDoubleMapProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMDoubleMapPropertyIterator *tempr = (ap.IsBound() ?
      op->NewIterator() :
      op->vtkSMDoubleMapProperty::NewIterator());

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
PyvtkSMDoubleMapProperty_GetMapPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMapPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleMapProperty *op = static_cast<vtkSMDoubleMapProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetMapPointer() :
      op->vtkSMDoubleMapProperty::GetMapPointer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDoubleMapProperty_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleMapProperty *op = static_cast<vtkSMDoubleMapProperty *>(vp);

  vtkSMProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProperty"))
  {
    if (ap.IsBound())
    {
      op->Copy(temp0);
    }
    else
    {
      op->vtkSMDoubleMapProperty::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMDoubleMapProperty_ResetToXMLDefaults(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetToXMLDefaults");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleMapProperty *op = static_cast<vtkSMDoubleMapProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetToXMLDefaults();
    }
    else
    {
      op->vtkSMDoubleMapProperty::ResetToXMLDefaults();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMDoubleMapProperty_Methods[] = {
  {"IsTypeOf", PyvtkSMDoubleMapProperty_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMDoubleMapProperty_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMDoubleMapProperty_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMDoubleMapProperty\nC++: static vtkSMDoubleMapProperty *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMDoubleMapProperty_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMDoubleMapProperty\nC++: vtkSMDoubleMapProperty *NewInstance()\n\n"},
  {"SetNumberOfComponents", PyvtkSMDoubleMapProperty_SetNumberOfComponents, METH_VARARGS,
   "V.SetNumberOfComponents(int)\nC++: void SetNumberOfComponents(unsigned int components)\n\nSets the number of components.\n"},
  {"GetNumberOfComponents", PyvtkSMDoubleMapProperty_GetNumberOfComponents, METH_VARARGS,
   "V.GetNumberOfComponents() -> int\nC++: unsigned int GetNumberOfComponents()\n\nReturns the number of components.\n"},
  {"SetElement", PyvtkSMDoubleMapProperty_SetElement, METH_VARARGS,
   "V.SetElement(int, float)\nC++: void SetElement(vtkIdType index, double value)\n\nSets the element at index to value.\n"},
  {"SetElements", PyvtkSMDoubleMapProperty_SetElements, METH_VARARGS,
   "V.SetElements(int, (float, ...))\nC++: void SetElements(vtkIdType index, const double *values)\nV.SetElements(int, (float, ...), int)\nC++: void SetElements(vtkIdType index, const double *values,\n    unsigned int numValues)\n\nSets the elements at index to values.\n"},
  {"SetElementComponent", PyvtkSMDoubleMapProperty_SetElementComponent, METH_VARARGS,
   "V.SetElementComponent(int, int, float)\nC++: void SetElementComponent(vtkIdType index,\n    unsigned int component, double value)\n\nSets the component at index to value.\n"},
  {"GetElement", PyvtkSMDoubleMapProperty_GetElement, METH_VARARGS,
   "V.GetElement(int) -> float\nC++: double GetElement(vtkIdType index)\n\nReturns the element at index.\n"},
  {"GetElements", PyvtkSMDoubleMapProperty_GetElements, METH_VARARGS,
   "V.GetElements(int) -> (float, ...)\nC++: double *GetElements(vtkIdType index)\n\nReturns the elements at index.\n"},
  {"GetElementComponent", PyvtkSMDoubleMapProperty_GetElementComponent, METH_VARARGS,
   "V.GetElementComponent(int, int) -> float\nC++: double GetElementComponent(vtkIdType index,\n    vtkIdType component)\n\nReturns the element component at index.\n"},
  {"RemoveElement", PyvtkSMDoubleMapProperty_RemoveElement, METH_VARARGS,
   "V.RemoveElement(int)\nC++: void RemoveElement(vtkIdType index)\n\nRemoves the element at index.\n"},
  {"GetNumberOfElements", PyvtkSMDoubleMapProperty_GetNumberOfElements, METH_VARARGS,
   "V.GetNumberOfElements() -> int\nC++: vtkIdType GetNumberOfElements() override;\n\nReturns the number of elements.\n"},
  {"HasElement", PyvtkSMDoubleMapProperty_HasElement, METH_VARARGS,
   "V.HasElement(int) -> bool\nC++: bool HasElement(vtkIdType index)\n\nReturns true if the property has an element with the given index\n"},
  {"ClearElements", PyvtkSMDoubleMapProperty_ClearElements, METH_VARARGS,
   "V.ClearElements()\nC++: void ClearElements()\n\nClears all of the elements from the property.\n"},
  {"NewIterator", PyvtkSMDoubleMapProperty_NewIterator, METH_VARARGS,
   "V.NewIterator() -> vtkSMDoubleMapPropertyIterator\nC++: vtkSMDoubleMapPropertyIterator *NewIterator()\n\nReturns a new iterator for the map.\n"},
  {"GetMapPointer", PyvtkSMDoubleMapProperty_GetMapPointer, METH_VARARGS,
   "V.GetMapPointer() -> void\nC++: void *GetMapPointer()\n\n"},
  {"Copy", PyvtkSMDoubleMapProperty_Copy, METH_VARARGS,
   "V.Copy(vtkSMProperty)\nC++: void Copy(vtkSMProperty *src) override;\n\nCopy all property values.\n"},
  {"ResetToXMLDefaults", PyvtkSMDoubleMapProperty_ResetToXMLDefaults, METH_VARARGS,
   "V.ResetToXMLDefaults()\nC++: void ResetToXMLDefaults() override;\n\nFor properties that support specifying defaults in XML\nconfiguration, this method will reset the property value to the\ndefault values specified in the XML.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMDoubleMapProperty_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMDoubleMapProperty", // tp_name
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
  PyvtkSMDoubleMapProperty_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMDoubleMapProperty_StaticNew()
{
  return vtkSMDoubleMapProperty::New();
}

PyObject *PyvtkSMDoubleMapProperty_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMDoubleMapProperty_Type, PyvtkSMDoubleMapProperty_Methods,
    "vtkSMDoubleMapProperty",
 &PyvtkSMDoubleMapProperty_StaticNew);

  PyTypeObject *pytype = &PyvtkSMDoubleMapProperty_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMMapProperty_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMDoubleMapProperty(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMDoubleMapProperty_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMDoubleMapProperty", o) != 0)
  {
    Py_DECREF(o);
  }

}

