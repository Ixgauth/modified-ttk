// python wrapper for vtkPVTransposeTable
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
#include "vtkPVTransposeTable.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVTransposeTable(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVTransposeTable_ClassNew(); }

#ifndef DECLARED_PyvtkTransposeTable_ClassNew
extern "C" { PyObject *PyvtkTransposeTable_ClassNew(); }
#define DECLARED_PyvtkTransposeTable_ClassNew
#endif

static const char *PyvtkPVTransposeTable_Doc =
  "vtkPVTransposeTable - create a subtable made with selected columns of\nthe input vtkTable and transpose it.\n\n"
  "Superclass: vtkTransposeTable\n\n"
  "This ParaView filter allows to select the columns of the input table\n"
  "that must be included in the transposed table. This filter can also\n"
  "be use to extract a non transposed table made by the selected\n"
  "columns.\n\n";


static PyObject *
PyvtkPVTransposeTable_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVTransposeTable::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVTransposeTable_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTransposeTable *op = static_cast<vtkPVTransposeTable *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVTransposeTable::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVTransposeTable_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVTransposeTable *tempr = vtkPVTransposeTable::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVTransposeTable_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTransposeTable *op = static_cast<vtkPVTransposeTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVTransposeTable *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVTransposeTable::NewInstance());

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
PyvtkPVTransposeTable_EnableAttributeArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAttributeArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTransposeTable *op = static_cast<vtkPVTransposeTable *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->EnableAttributeArray(temp0);
    }
    else
    {
      op->vtkPVTransposeTable::EnableAttributeArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVTransposeTable_ClearAttributeArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearAttributeArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTransposeTable *op = static_cast<vtkPVTransposeTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearAttributeArrays();
    }
    else
    {
      op->vtkPVTransposeTable::ClearAttributeArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVTransposeTable_GetDoNotTranspose(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDoNotTranspose");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTransposeTable *op = static_cast<vtkPVTransposeTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDoNotTranspose() :
      op->vtkPVTransposeTable::GetDoNotTranspose());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVTransposeTable_SetDoNotTranspose(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDoNotTranspose");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTransposeTable *op = static_cast<vtkPVTransposeTable *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDoNotTranspose(temp0);
    }
    else
    {
      op->vtkPVTransposeTable::SetDoNotTranspose(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVTransposeTable_DoNotTransposeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DoNotTransposeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTransposeTable *op = static_cast<vtkPVTransposeTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DoNotTransposeOn();
    }
    else
    {
      op->vtkPVTransposeTable::DoNotTransposeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVTransposeTable_DoNotTransposeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DoNotTransposeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTransposeTable *op = static_cast<vtkPVTransposeTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DoNotTransposeOff();
    }
    else
    {
      op->vtkPVTransposeTable::DoNotTransposeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVTransposeTable_Methods[] = {
  {"IsTypeOf", PyvtkPVTransposeTable_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVTransposeTable_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVTransposeTable_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVTransposeTable\nC++: static vtkPVTransposeTable *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVTransposeTable_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVTransposeTable\nC++: vtkPVTransposeTable *NewInstance()\n\n"},
  {"EnableAttributeArray", PyvtkPVTransposeTable_EnableAttributeArray, METH_VARARGS,
   "V.EnableAttributeArray(string)\nC++: void EnableAttributeArray(const char *)\n\nInterface for preparing selection of arrays in ParaView.\n"},
  {"ClearAttributeArrays", PyvtkPVTransposeTable_ClearAttributeArrays, METH_VARARGS,
   "V.ClearAttributeArrays()\nC++: void ClearAttributeArrays()\n\nInterface for preparing selection of arrays in ParaView.\n"},
  {"GetDoNotTranspose", PyvtkPVTransposeTable_GetDoNotTranspose, METH_VARARGS,
   "V.GetDoNotTranspose() -> bool\nC++: virtual bool GetDoNotTranspose()\n\nCan be used to bypass the transposition code. The output is then\nthe table made with the selected columns.\n"},
  {"SetDoNotTranspose", PyvtkPVTransposeTable_SetDoNotTranspose, METH_VARARGS,
   "V.SetDoNotTranspose(bool)\nC++: virtual void SetDoNotTranspose(bool _arg)\n\nCan be used to bypass the transposition code. The output is then\nthe table made with the selected columns.\n"},
  {"DoNotTransposeOn", PyvtkPVTransposeTable_DoNotTransposeOn, METH_VARARGS,
   "V.DoNotTransposeOn()\nC++: virtual void DoNotTransposeOn()\n\nCan be used to bypass the transposition code. The output is then\nthe table made with the selected columns.\n"},
  {"DoNotTransposeOff", PyvtkPVTransposeTable_DoNotTransposeOff, METH_VARARGS,
   "V.DoNotTransposeOff()\nC++: virtual void DoNotTransposeOff()\n\nCan be used to bypass the transposition code. The output is then\nthe table made with the selected columns.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVTransposeTable_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkPVTransposeTable", // tp_name
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
  PyvtkPVTransposeTable_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVTransposeTable_StaticNew()
{
  return vtkPVTransposeTable::New();
}

PyObject *PyvtkPVTransposeTable_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVTransposeTable_Type, PyvtkPVTransposeTable_Methods,
    "vtkPVTransposeTable",
 &PyvtkPVTransposeTable_StaticNew);

  PyTypeObject *pytype = &PyvtkPVTransposeTable_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkTransposeTable_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVTransposeTable(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVTransposeTable_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVTransposeTable", o) != 0)
  {
    Py_DECREF(o);
  }

}

