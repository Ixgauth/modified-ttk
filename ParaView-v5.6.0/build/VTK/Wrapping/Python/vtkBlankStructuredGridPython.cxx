// python wrapper for vtkBlankStructuredGrid
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
#include "vtkBlankStructuredGrid.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBlankStructuredGrid(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkBlankStructuredGrid_ClassNew(); }

#ifndef DECLARED_PyvtkStructuredGridAlgorithm_ClassNew
extern "C" { PyObject *PyvtkStructuredGridAlgorithm_ClassNew(); }
#define DECLARED_PyvtkStructuredGridAlgorithm_ClassNew
#endif

static const char *PyvtkBlankStructuredGrid_Doc =
  "vtkBlankStructuredGrid - translate point attribute data into a\nblanking field\n\n"
  "Superclass: vtkStructuredGridAlgorithm\n\n"
  "vtkBlankStructuredGrid is a filter that sets the blanking field in a\n"
  "vtkStructuredGrid dataset. The blanking field is set by examining a\n"
  "specified point attribute data array (e.g., scalars) and converting\n"
  "values in the data array to either a \"1\" (visible) or \"0\" (blanked)\n"
  "value in the blanking array. The values to be blanked are specified\n"
  "by giving a min/max range. All data values in the data array\n"
  "indicated and laying within the range specified (inclusive on both\n"
  "ends) are translated to a \"off\" blanking value.\n\n"
  "@sa\n"
  "vtkStructuredGrid\n\n";


static PyObject *
PyvtkBlankStructuredGrid_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBlankStructuredGrid::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlankStructuredGrid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBlankStructuredGrid::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlankStructuredGrid_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBlankStructuredGrid *tempr = vtkBlankStructuredGrid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlankStructuredGrid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBlankStructuredGrid *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBlankStructuredGrid::NewInstance());

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
PyvtkBlankStructuredGrid_SetMinBlankingValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinBlankingValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinBlankingValue(temp0);
    }
    else
    {
      op->vtkBlankStructuredGrid::SetMinBlankingValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBlankStructuredGrid_GetMinBlankingValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinBlankingValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinBlankingValue() :
      op->vtkBlankStructuredGrid::GetMinBlankingValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlankStructuredGrid_SetMaxBlankingValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxBlankingValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxBlankingValue(temp0);
    }
    else
    {
      op->vtkBlankStructuredGrid::SetMaxBlankingValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBlankStructuredGrid_GetMaxBlankingValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxBlankingValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaxBlankingValue() :
      op->vtkBlankStructuredGrid::GetMaxBlankingValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlankStructuredGrid_SetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArrayName(temp0);
    }
    else
    {
      op->vtkBlankStructuredGrid::SetArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBlankStructuredGrid_GetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetArrayName() :
      op->vtkBlankStructuredGrid::GetArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlankStructuredGrid_SetArrayId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArrayId(temp0);
    }
    else
    {
      op->vtkBlankStructuredGrid::SetArrayId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBlankStructuredGrid_GetArrayId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArrayId() :
      op->vtkBlankStructuredGrid::GetArrayId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlankStructuredGrid_SetComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComponent(temp0);
    }
    else
    {
      op->vtkBlankStructuredGrid::SetComponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBlankStructuredGrid_GetComponentMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComponentMinValue() :
      op->vtkBlankStructuredGrid::GetComponentMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlankStructuredGrid_GetComponentMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComponentMaxValue() :
      op->vtkBlankStructuredGrid::GetComponentMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlankStructuredGrid_GetComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComponent() :
      op->vtkBlankStructuredGrid::GetComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkBlankStructuredGrid_Methods[] = {
  {"IsTypeOf", PyvtkBlankStructuredGrid_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkBlankStructuredGrid_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkBlankStructuredGrid_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkBlankStructuredGrid\nC++: static vtkBlankStructuredGrid *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkBlankStructuredGrid_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkBlankStructuredGrid\nC++: vtkBlankStructuredGrid *NewInstance()\n\n"},
  {"SetMinBlankingValue", PyvtkBlankStructuredGrid_SetMinBlankingValue, METH_VARARGS,
   "V.SetMinBlankingValue(float)\nC++: virtual void SetMinBlankingValue(double _arg)\n\nSpecify the lower data value in the data array specified which\nwill be converted into a \"blank\" (or off) value in the blanking\narray.\n"},
  {"GetMinBlankingValue", PyvtkBlankStructuredGrid_GetMinBlankingValue, METH_VARARGS,
   "V.GetMinBlankingValue() -> float\nC++: virtual double GetMinBlankingValue()\n\nSpecify the lower data value in the data array specified which\nwill be converted into a \"blank\" (or off) value in the blanking\narray.\n"},
  {"SetMaxBlankingValue", PyvtkBlankStructuredGrid_SetMaxBlankingValue, METH_VARARGS,
   "V.SetMaxBlankingValue(float)\nC++: virtual void SetMaxBlankingValue(double _arg)\n\nSpecify the upper data value in the data array specified which\nwill be converted into a \"blank\" (or off) value in the blanking\narray.\n"},
  {"GetMaxBlankingValue", PyvtkBlankStructuredGrid_GetMaxBlankingValue, METH_VARARGS,
   "V.GetMaxBlankingValue() -> float\nC++: virtual double GetMaxBlankingValue()\n\nSpecify the upper data value in the data array specified which\nwill be converted into a \"blank\" (or off) value in the blanking\narray.\n"},
  {"SetArrayName", PyvtkBlankStructuredGrid_SetArrayName, METH_VARARGS,
   "V.SetArrayName(string)\nC++: virtual void SetArrayName(const char *_arg)\n\nSpecify the data array name to use to generate the blanking\nfield. Alternatively, you can specify the array id. (If both are\nset, the array name takes precedence.)\n"},
  {"GetArrayName", PyvtkBlankStructuredGrid_GetArrayName, METH_VARARGS,
   "V.GetArrayName() -> string\nC++: virtual char *GetArrayName()\n\nSpecify the data array name to use to generate the blanking\nfield. Alternatively, you can specify the array id. (If both are\nset, the array name takes precedence.)\n"},
  {"SetArrayId", PyvtkBlankStructuredGrid_SetArrayId, METH_VARARGS,
   "V.SetArrayId(int)\nC++: virtual void SetArrayId(int _arg)\n\nSpecify the data array id to use to generate the blanking field.\nAlternatively, you can specify the array name. (If both are set,\nthe array name takes precedence.)\n"},
  {"GetArrayId", PyvtkBlankStructuredGrid_GetArrayId, METH_VARARGS,
   "V.GetArrayId() -> int\nC++: virtual int GetArrayId()\n\nSpecify the data array id to use to generate the blanking field.\nAlternatively, you can specify the array name. (If both are set,\nthe array name takes precedence.)\n"},
  {"SetComponent", PyvtkBlankStructuredGrid_SetComponent, METH_VARARGS,
   "V.SetComponent(int)\nC++: virtual void SetComponent(int _arg)\n\nSpecify the component in the data array to use to generate the\nblanking field.\n"},
  {"GetComponentMinValue", PyvtkBlankStructuredGrid_GetComponentMinValue, METH_VARARGS,
   "V.GetComponentMinValue() -> int\nC++: virtual int GetComponentMinValue()\n\nSpecify the component in the data array to use to generate the\nblanking field.\n"},
  {"GetComponentMaxValue", PyvtkBlankStructuredGrid_GetComponentMaxValue, METH_VARARGS,
   "V.GetComponentMaxValue() -> int\nC++: virtual int GetComponentMaxValue()\n\nSpecify the component in the data array to use to generate the\nblanking field.\n"},
  {"GetComponent", PyvtkBlankStructuredGrid_GetComponent, METH_VARARGS,
   "V.GetComponent() -> int\nC++: virtual int GetComponent()\n\nSpecify the component in the data array to use to generate the\nblanking field.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkBlankStructuredGrid_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkBlankStructuredGrid", // tp_name
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
  PyvtkBlankStructuredGrid_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBlankStructuredGrid_StaticNew()
{
  return vtkBlankStructuredGrid::New();
}

PyObject *PyvtkBlankStructuredGrid_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkBlankStructuredGrid_Type, PyvtkBlankStructuredGrid_Methods,
    "vtkBlankStructuredGrid",
 &PyvtkBlankStructuredGrid_StaticNew);

  PyTypeObject *pytype = &PyvtkBlankStructuredGrid_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkStructuredGridAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkBlankStructuredGrid(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBlankStructuredGrid_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBlankStructuredGrid", o) != 0)
  {
    Py_DECREF(o);
  }

}

