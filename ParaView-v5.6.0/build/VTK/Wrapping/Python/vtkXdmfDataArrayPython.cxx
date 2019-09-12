// python wrapper for vtkXdmfDataArray
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
#include "vtkXdmfDataArray.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkXdmfDataArray(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkXdmfDataArray_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkXdmfDataArray_Doc =
  "vtkXdmfDataArray - no description provided.\n\n"
  "Superclass: vtkObject\n\n"
;


static PyObject *
PyvtkXdmfDataArray_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkXdmfDataArray::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfDataArray_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfDataArray *op = static_cast<vtkXdmfDataArray *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXdmfDataArray::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfDataArray_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkXdmfDataArray *tempr = vtkXdmfDataArray::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfDataArray_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfDataArray *op = static_cast<vtkXdmfDataArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXdmfDataArray *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXdmfDataArray::NewInstance());

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
PyvtkXdmfDataArray_FromArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FromArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfDataArray *op = static_cast<vtkXdmfDataArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->FromArray() :
      op->vtkXdmfDataArray::FromArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfDataArray_ToArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfDataArray *op = static_cast<vtkXdmfDataArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->ToArray() :
      op->vtkXdmfDataArray::ToArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfDataArray_FromXdmfArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FromXdmfArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfDataArray *op = static_cast<vtkXdmfDataArray *>(vp);

  size_t size0 = ap.GetStringSize(0);
  vtkPythonArgs::Array<char> store0(2*size0 + 1);
  char *temp0 = store0.Data();
  char *save0 = temp0 + size0 + 1;
  int temp1 = 1;
  int temp2 = 1;
  int temp3 = 1;
  int temp4 = 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 5) &&
      (ap.NoArgsLeft() || ap.GetArray(temp0, size0)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    ap.Save(temp0, save0, size0);

    vtkDataArray *tempr = (ap.IsBound() ?
      op->FromXdmfArray(temp0, temp1, temp2, temp3, temp4) :
      op->vtkXdmfDataArray::FromXdmfArray(temp0, temp1, temp2, temp3, temp4));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfDataArray_ToXdmfArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToXdmfArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfDataArray *op = static_cast<vtkXdmfDataArray *>(vp);

  vtkDataArray *temp0 = nullptr;
  int temp1 = 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 2) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp0, "vtkDataArray")) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    char *tempr = (ap.IsBound() ?
      op->ToXdmfArray(temp0, temp1) :
      op->vtkXdmfDataArray::ToXdmfArray(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfDataArray_SetArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfDataArray *op = static_cast<vtkXdmfDataArray *>(vp);

  size_t size0 = ap.GetStringSize(0);
  vtkPythonArgs::Array<char> store0(2*size0 + 1);
  char *temp0 = store0.Data();
  char *save0 = temp0 + size0 + 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetArray(temp0);
    }
    else
    {
      op->vtkXdmfDataArray::SetArray(temp0);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfDataArray_GetArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfDataArray *op = static_cast<vtkXdmfDataArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetArray() :
      op->vtkXdmfDataArray::GetArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfDataArray_SetVtkArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVtkArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfDataArray *op = static_cast<vtkXdmfDataArray *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->SetVtkArray(temp0);
    }
    else
    {
      op->vtkXdmfDataArray::SetVtkArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXdmfDataArray_GetVtkArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVtkArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfDataArray *op = static_cast<vtkXdmfDataArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetVtkArray() :
      op->vtkXdmfDataArray::GetVtkArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkXdmfDataArray_Methods[] = {
  {"IsTypeOf", PyvtkXdmfDataArray_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkXdmfDataArray_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkXdmfDataArray_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkXdmfDataArray\nC++: static vtkXdmfDataArray *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkXdmfDataArray_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkXdmfDataArray\nC++: vtkXdmfDataArray *NewInstance()\n\n"},
  {"FromArray", PyvtkXdmfDataArray_FromArray, METH_VARARGS,
   "V.FromArray() -> vtkDataArray\nC++: vtkDataArray *FromArray(void)\n\n"},
  {"ToArray", PyvtkXdmfDataArray_ToArray, METH_VARARGS,
   "V.ToArray() -> string\nC++: char *ToArray(void)\n\n"},
  {"FromXdmfArray", PyvtkXdmfDataArray_FromXdmfArray, METH_VARARGS,
   "V.FromXdmfArray(string, int, int, int, int) -> vtkDataArray\nC++: vtkDataArray *FromXdmfArray(char *ArrayName=nullptr,\n    int CopyShape=1, int rank=1, int Components=1, int MakeCopy=1)\n\n"},
  {"ToXdmfArray", PyvtkXdmfDataArray_ToXdmfArray, METH_VARARGS,
   "V.ToXdmfArray(vtkDataArray, int) -> string\nC++: char *ToXdmfArray(vtkDataArray *DataArray=nullptr,\n    int CopyShape=1)\n\n"},
  {"SetArray", PyvtkXdmfDataArray_SetArray, METH_VARARGS,
   "V.SetArray(string)\nC++: void SetArray(char *TagName)\n\n"},
  {"GetArray", PyvtkXdmfDataArray_GetArray, METH_VARARGS,
   "V.GetArray() -> string\nC++: char *GetArray(void)\n\n"},
  {"SetVtkArray", PyvtkXdmfDataArray_SetVtkArray, METH_VARARGS,
   "V.SetVtkArray(vtkDataArray)\nC++: void SetVtkArray(vtkDataArray *array)\n\n"},
  {"GetVtkArray", PyvtkXdmfDataArray_GetVtkArray, METH_VARARGS,
   "V.GetVtkArray() -> vtkDataArray\nC++: vtkDataArray *GetVtkArray(void)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkXdmfDataArray_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOXdmf2Python.vtkXdmfDataArray", // tp_name
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
  PyvtkXdmfDataArray_Doc, // tp_doc
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

static vtkObjectBase *PyvtkXdmfDataArray_StaticNew()
{
  return vtkXdmfDataArray::New();
}

PyObject *PyvtkXdmfDataArray_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkXdmfDataArray_Type, PyvtkXdmfDataArray_Methods,
    "vtkXdmfDataArray",
 &PyvtkXdmfDataArray_StaticNew);

  PyTypeObject *pytype = &PyvtkXdmfDataArray_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkXdmfDataArray(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkXdmfDataArray_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkXdmfDataArray", o) != 0)
  {
    Py_DECREF(o);
  }

}

