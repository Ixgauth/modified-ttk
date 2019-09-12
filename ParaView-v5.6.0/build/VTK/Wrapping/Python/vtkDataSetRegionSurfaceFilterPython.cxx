// python wrapper for vtkDataSetRegionSurfaceFilter
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
#include "vtkDataSetRegionSurfaceFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDataSetRegionSurfaceFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDataSetRegionSurfaceFilter_ClassNew(); }

#ifndef DECLARED_PyvtkDataSetSurfaceFilter_ClassNew
extern "C" { PyObject *PyvtkDataSetSurfaceFilter_ClassNew(); }
#define DECLARED_PyvtkDataSetSurfaceFilter_ClassNew
#endif

static const char *PyvtkDataSetRegionSurfaceFilter_Doc =
  "vtkDataSetRegionSurfaceFilter - Extract surface of materials.\n\n"
  "Superclass: vtkDataSetSurfaceFilter\n\n"
  "This filter extracts surfaces of materials such that a surface could\n"
  "have a material on each side of it. It also stores a mapping of the\n"
  "original cells and their sides back to the original grid so that we\n"
  "can output boundary information for those cells given only surfaces.\n\n";


static PyObject *
PyvtkDataSetRegionSurfaceFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDataSetRegionSurfaceFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetRegionSurfaceFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetRegionSurfaceFilter *op = static_cast<vtkDataSetRegionSurfaceFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataSetRegionSurfaceFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetRegionSurfaceFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDataSetRegionSurfaceFilter *tempr = vtkDataSetRegionSurfaceFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetRegionSurfaceFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetRegionSurfaceFilter *op = static_cast<vtkDataSetRegionSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSetRegionSurfaceFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataSetRegionSurfaceFilter::NewInstance());

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
PyvtkDataSetRegionSurfaceFilter_SetRegionArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRegionArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetRegionSurfaceFilter *op = static_cast<vtkDataSetRegionSurfaceFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRegionArrayName(temp0);
    }
    else
    {
      op->vtkDataSetRegionSurfaceFilter::SetRegionArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetRegionSurfaceFilter_GetRegionArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegionArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetRegionSurfaceFilter *op = static_cast<vtkDataSetRegionSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetRegionArrayName() :
      op->vtkDataSetRegionSurfaceFilter::GetRegionArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetRegionSurfaceFilter_UnstructuredGridExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnstructuredGridExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetRegionSurfaceFilter *op = static_cast<vtkDataSetRegionSurfaceFilter *>(vp);

  vtkDataSet *temp0 = nullptr;
  vtkPolyData *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetVTKObject(temp1, "vtkPolyData"))
  {
    int tempr = (ap.IsBound() ?
      op->UnstructuredGridExecute(temp0, temp1) :
      op->vtkDataSetRegionSurfaceFilter::UnstructuredGridExecute(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetRegionSurfaceFilter_SetSingleSided(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSingleSided");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetRegionSurfaceFilter *op = static_cast<vtkDataSetRegionSurfaceFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSingleSided(temp0);
    }
    else
    {
      op->vtkDataSetRegionSurfaceFilter::SetSingleSided(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetRegionSurfaceFilter_GetSingleSided(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSingleSided");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetRegionSurfaceFilter *op = static_cast<vtkDataSetRegionSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSingleSided() :
      op->vtkDataSetRegionSurfaceFilter::GetSingleSided());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetRegionSurfaceFilter_SetMaterialPropertiesName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaterialPropertiesName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetRegionSurfaceFilter *op = static_cast<vtkDataSetRegionSurfaceFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaterialPropertiesName(temp0);
    }
    else
    {
      op->vtkDataSetRegionSurfaceFilter::SetMaterialPropertiesName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetRegionSurfaceFilter_GetMaterialPropertiesName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaterialPropertiesName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetRegionSurfaceFilter *op = static_cast<vtkDataSetRegionSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetMaterialPropertiesName() :
      op->vtkDataSetRegionSurfaceFilter::GetMaterialPropertiesName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetRegionSurfaceFilter_SetMaterialIDsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaterialIDsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetRegionSurfaceFilter *op = static_cast<vtkDataSetRegionSurfaceFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaterialIDsName(temp0);
    }
    else
    {
      op->vtkDataSetRegionSurfaceFilter::SetMaterialIDsName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetRegionSurfaceFilter_GetMaterialIDsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaterialIDsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetRegionSurfaceFilter *op = static_cast<vtkDataSetRegionSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetMaterialIDsName() :
      op->vtkDataSetRegionSurfaceFilter::GetMaterialIDsName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetRegionSurfaceFilter_SetMaterialPIDsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaterialPIDsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetRegionSurfaceFilter *op = static_cast<vtkDataSetRegionSurfaceFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaterialPIDsName(temp0);
    }
    else
    {
      op->vtkDataSetRegionSurfaceFilter::SetMaterialPIDsName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetRegionSurfaceFilter_GetMaterialPIDsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaterialPIDsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetRegionSurfaceFilter *op = static_cast<vtkDataSetRegionSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetMaterialPIDsName() :
      op->vtkDataSetRegionSurfaceFilter::GetMaterialPIDsName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetRegionSurfaceFilter_SetInterfaceIDsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterfaceIDsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetRegionSurfaceFilter *op = static_cast<vtkDataSetRegionSurfaceFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInterfaceIDsName(temp0);
    }
    else
    {
      op->vtkDataSetRegionSurfaceFilter::SetInterfaceIDsName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetRegionSurfaceFilter_GetInterfaceIDsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterfaceIDsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetRegionSurfaceFilter *op = static_cast<vtkDataSetRegionSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetInterfaceIDsName() :
      op->vtkDataSetRegionSurfaceFilter::GetInterfaceIDsName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetRegionSurfaceFilter_RecordOrigCellId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RecordOrigCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetRegionSurfaceFilter *op = static_cast<vtkDataSetRegionSurfaceFilter *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->RecordOrigCellId(temp0, temp1);
    }
    else
    {
      op->vtkDataSetRegionSurfaceFilter::RecordOrigCellId(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDataSetRegionSurfaceFilter_Methods[] = {
  {"IsTypeOf", PyvtkDataSetRegionSurfaceFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDataSetRegionSurfaceFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDataSetRegionSurfaceFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDataSetRegionSurfaceFilter\nC++: static vtkDataSetRegionSurfaceFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDataSetRegionSurfaceFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDataSetRegionSurfaceFilter\nC++: vtkDataSetRegionSurfaceFilter *NewInstance()\n\n"},
  {"SetRegionArrayName", PyvtkDataSetRegionSurfaceFilter_SetRegionArrayName, METH_VARARGS,
   "V.SetRegionArrayName(string)\nC++: virtual void SetRegionArrayName(const char *_arg)\n\nThe name of the cell based array that we use to extract\ninterfaces from Default is \"Regions\"\n"},
  {"GetRegionArrayName", PyvtkDataSetRegionSurfaceFilter_GetRegionArrayName, METH_VARARGS,
   "V.GetRegionArrayName() -> string\nC++: virtual char *GetRegionArrayName()\n\nThe name of the cell based array that we use to extract\ninterfaces from Default is \"Regions\"\n"},
  {"UnstructuredGridExecute", PyvtkDataSetRegionSurfaceFilter_UnstructuredGridExecute, METH_VARARGS,
   "V.UnstructuredGridExecute(vtkDataSet, vtkPolyData) -> int\nC++: int UnstructuredGridExecute(vtkDataSet *input,\n    vtkPolyData *output) override;\n\nDirect access methods that can be used to use the this class as\nan algorithm without using it as a filter.\n"},
  {"SetSingleSided", PyvtkDataSetRegionSurfaceFilter_SetSingleSided, METH_VARARGS,
   "V.SetSingleSided(bool)\nC++: virtual void SetSingleSided(bool _arg)\n\nWhether to return single sided material interfaces or double\nsided Default is single\n"},
  {"GetSingleSided", PyvtkDataSetRegionSurfaceFilter_GetSingleSided, METH_VARARGS,
   "V.GetSingleSided() -> bool\nC++: virtual bool GetSingleSided()\n\nWhether to return single sided material interfaces or double\nsided Default is single\n"},
  {"SetMaterialPropertiesName", PyvtkDataSetRegionSurfaceFilter_SetMaterialPropertiesName, METH_VARARGS,
   "V.SetMaterialPropertiesName(string)\nC++: virtual void SetMaterialPropertiesName(const char *_arg)\n\nThe name of the field array that has characteristics of each\nmaterial Default is \"material_properties\"\n"},
  {"GetMaterialPropertiesName", PyvtkDataSetRegionSurfaceFilter_GetMaterialPropertiesName, METH_VARARGS,
   "V.GetMaterialPropertiesName() -> string\nC++: virtual char *GetMaterialPropertiesName()\n\nThe name of the field array that has characteristics of each\nmaterial Default is \"material_properties\"\n"},
  {"SetMaterialIDsName", PyvtkDataSetRegionSurfaceFilter_SetMaterialIDsName, METH_VARARGS,
   "V.SetMaterialIDsName(string)\nC++: virtual void SetMaterialIDsName(const char *_arg)\n\nThe name of the field array that has material type identifiers in\nit Default is \"material_ids\"\n"},
  {"GetMaterialIDsName", PyvtkDataSetRegionSurfaceFilter_GetMaterialIDsName, METH_VARARGS,
   "V.GetMaterialIDsName() -> string\nC++: virtual char *GetMaterialIDsName()\n\nThe name of the field array that has material type identifiers in\nit Default is \"material_ids\"\n"},
  {"SetMaterialPIDsName", PyvtkDataSetRegionSurfaceFilter_SetMaterialPIDsName, METH_VARARGS,
   "V.SetMaterialPIDsName(string)\nC++: virtual void SetMaterialPIDsName(const char *_arg)\n\nThe name of the output field array that records parent materials\nof each interface Default is \"material_ancestors\"\n"},
  {"GetMaterialPIDsName", PyvtkDataSetRegionSurfaceFilter_GetMaterialPIDsName, METH_VARARGS,
   "V.GetMaterialPIDsName() -> string\nC++: virtual char *GetMaterialPIDsName()\n\nThe name of the output field array that records parent materials\nof each interface Default is \"material_ancestors\"\n"},
  {"SetInterfaceIDsName", PyvtkDataSetRegionSurfaceFilter_SetInterfaceIDsName, METH_VARARGS,
   "V.SetInterfaceIDsName(string)\nC++: virtual void SetInterfaceIDsName(const char *_arg)\n\nThe name of the field array that has material interface type\nidentifiers in it Default is \"interface_ids\"\n"},
  {"GetInterfaceIDsName", PyvtkDataSetRegionSurfaceFilter_GetInterfaceIDsName, METH_VARARGS,
   "V.GetInterfaceIDsName() -> string\nC++: virtual char *GetInterfaceIDsName()\n\nThe name of the field array that has material interface type\nidentifiers in it Default is \"interface_ids\"\n"},
  {"RecordOrigCellId", PyvtkDataSetRegionSurfaceFilter_RecordOrigCellId, METH_VARARGS,
   "V.RecordOrigCellId(int, int)\nC++: void RecordOrigCellId(vtkIdType newIndex, vtkIdType origId)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDataSetRegionSurfaceFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeometryPython.vtkDataSetRegionSurfaceFilter", // tp_name
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
  PyvtkDataSetRegionSurfaceFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDataSetRegionSurfaceFilter_StaticNew()
{
  return vtkDataSetRegionSurfaceFilter::New();
}

PyObject *PyvtkDataSetRegionSurfaceFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDataSetRegionSurfaceFilter_Type, PyvtkDataSetRegionSurfaceFilter_Methods,
    "vtkDataSetRegionSurfaceFilter",
 &PyvtkDataSetRegionSurfaceFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkDataSetRegionSurfaceFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataSetSurfaceFilter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDataSetRegionSurfaceFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDataSetRegionSurfaceFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDataSetRegionSurfaceFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

