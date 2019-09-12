// python wrapper for vtkTransferAttributes
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
#include "vtkTransferAttributes.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTransferAttributes(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTransferAttributes_ClassNew(); }

#ifndef DECLARED_PyvtkPassInputTypeAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPassInputTypeAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPassInputTypeAlgorithm_ClassNew
#endif

static const char *PyvtkTransferAttributes_Doc =
  "vtkTransferAttributes - transfer data from a graph representation to\na tree representation using direct mapping or pedigree ids.\n\n"
  "Superclass: vtkPassInputTypeAlgorithm\n\n"
  "The filter requires both a vtkGraph and vtkTree as input.  The tree\n"
  "vertices must be a superset of the graph vertices.  A common example\n"
  "is when the graph vertices correspond to the leaves of the tree, but\n"
  "the internal vertices of the tree represent groupings of graph\n"
  "vertices.  The algorithm matches the vertices using the array\n"
  "\"PedigreeId\".  The user may alternately set the DirectMapping flag to\n"
  "indicate that the two structures must have directly corresponding\n"
  "offsets (i.e. node i in the graph must correspond to node i in the\n"
  "tree).\n\n";


static PyObject *
PyvtkTransferAttributes_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTransferAttributes::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransferAttributes_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTransferAttributes::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransferAttributes_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTransferAttributes *tempr = vtkTransferAttributes::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransferAttributes_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTransferAttributes *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTransferAttributes::NewInstance());

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
PyvtkTransferAttributes_SetDirectMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDirectMapping(temp0);
    }
    else
    {
      op->vtkTransferAttributes::SetDirectMapping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransferAttributes_GetDirectMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirectMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDirectMapping() :
      op->vtkTransferAttributes::GetDirectMapping());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransferAttributes_DirectMappingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DirectMappingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DirectMappingOn();
    }
    else
    {
      op->vtkTransferAttributes::DirectMappingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransferAttributes_DirectMappingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DirectMappingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DirectMappingOff();
    }
    else
    {
      op->vtkTransferAttributes::DirectMappingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransferAttributes_GetSourceArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSourceArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetSourceArrayName() :
      op->vtkTransferAttributes::GetSourceArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransferAttributes_SetSourceArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSourceArrayName(temp0);
    }
    else
    {
      op->vtkTransferAttributes::SetSourceArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransferAttributes_GetTargetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetTargetArrayName() :
      op->vtkTransferAttributes::GetTargetArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransferAttributes_SetTargetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTargetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTargetArrayName(temp0);
    }
    else
    {
      op->vtkTransferAttributes::SetTargetArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransferAttributes_GetSourceFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSourceFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSourceFieldType() :
      op->vtkTransferAttributes::GetSourceFieldType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransferAttributes_SetSourceFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSourceFieldType(temp0);
    }
    else
    {
      op->vtkTransferAttributes::SetSourceFieldType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransferAttributes_GetTargetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTargetFieldType() :
      op->vtkTransferAttributes::GetTargetFieldType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransferAttributes_SetTargetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTargetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTargetFieldType(temp0);
    }
    else
    {
      op->vtkTransferAttributes::SetTargetFieldType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransferAttributes_GetDefaultValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetDefaultValue() :
      op->vtkTransferAttributes::GetDefaultValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}


static PyObject *
PyvtkTransferAttributes_SetDefaultValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  vtkVariant *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant"))
  {
    if (ap.IsBound())
    {
      op->SetDefaultValue(*temp0);
    }
    else
    {
      op->vtkTransferAttributes::SetDefaultValue(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkTransferAttributes_FillInputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillInputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  int temp0;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->FillInputPortInformation(temp0, temp1) :
      op->vtkTransferAttributes::FillInputPortInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTransferAttributes_Methods[] = {
  {"IsTypeOf", PyvtkTransferAttributes_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTransferAttributes_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTransferAttributes_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTransferAttributes\nC++: static vtkTransferAttributes *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTransferAttributes_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTransferAttributes\nC++: vtkTransferAttributes *NewInstance()\n\n"},
  {"SetDirectMapping", PyvtkTransferAttributes_SetDirectMapping, METH_VARARGS,
   "V.SetDirectMapping(bool)\nC++: virtual void SetDirectMapping(bool _arg)\n\nIf on, uses direct mapping from tree to graph vertices. If off,\nboth the graph and tree must contain PedigreeId arrays which are\nused to match graph and tree vertices. Default is off.\n"},
  {"GetDirectMapping", PyvtkTransferAttributes_GetDirectMapping, METH_VARARGS,
   "V.GetDirectMapping() -> bool\nC++: virtual bool GetDirectMapping()\n\nIf on, uses direct mapping from tree to graph vertices. If off,\nboth the graph and tree must contain PedigreeId arrays which are\nused to match graph and tree vertices. Default is off.\n"},
  {"DirectMappingOn", PyvtkTransferAttributes_DirectMappingOn, METH_VARARGS,
   "V.DirectMappingOn()\nC++: virtual void DirectMappingOn()\n\nIf on, uses direct mapping from tree to graph vertices. If off,\nboth the graph and tree must contain PedigreeId arrays which are\nused to match graph and tree vertices. Default is off.\n"},
  {"DirectMappingOff", PyvtkTransferAttributes_DirectMappingOff, METH_VARARGS,
   "V.DirectMappingOff()\nC++: virtual void DirectMappingOff()\n\nIf on, uses direct mapping from tree to graph vertices. If off,\nboth the graph and tree must contain PedigreeId arrays which are\nused to match graph and tree vertices. Default is off.\n"},
  {"GetSourceArrayName", PyvtkTransferAttributes_GetSourceArrayName, METH_VARARGS,
   "V.GetSourceArrayName() -> string\nC++: virtual char *GetSourceArrayName()\n\nThe field name to use for storing the source array.\n"},
  {"SetSourceArrayName", PyvtkTransferAttributes_SetSourceArrayName, METH_VARARGS,
   "V.SetSourceArrayName(string)\nC++: virtual void SetSourceArrayName(const char *_arg)\n\nThe field name to use for storing the source array.\n"},
  {"GetTargetArrayName", PyvtkTransferAttributes_GetTargetArrayName, METH_VARARGS,
   "V.GetTargetArrayName() -> string\nC++: virtual char *GetTargetArrayName()\n\nThe field name to use for storing the source array.\n"},
  {"SetTargetArrayName", PyvtkTransferAttributes_SetTargetArrayName, METH_VARARGS,
   "V.SetTargetArrayName(string)\nC++: virtual void SetTargetArrayName(const char *_arg)\n\nThe field name to use for storing the source array.\n"},
  {"GetSourceFieldType", PyvtkTransferAttributes_GetSourceFieldType, METH_VARARGS,
   "V.GetSourceFieldType() -> int\nC++: virtual int GetSourceFieldType()\n\nThe source field type for accessing the source array. Valid\nvalues are those from enum vtkDataObject::FieldAssociations.\n"},
  {"SetSourceFieldType", PyvtkTransferAttributes_SetSourceFieldType, METH_VARARGS,
   "V.SetSourceFieldType(int)\nC++: virtual void SetSourceFieldType(int _arg)\n\nThe source field type for accessing the source array. Valid\nvalues are those from enum vtkDataObject::FieldAssociations.\n"},
  {"GetTargetFieldType", PyvtkTransferAttributes_GetTargetFieldType, METH_VARARGS,
   "V.GetTargetFieldType() -> int\nC++: virtual int GetTargetFieldType()\n\nThe target field type for accessing the target array. Valid\nvalues are those from enum vtkDataObject::FieldAssociations.\n"},
  {"SetTargetFieldType", PyvtkTransferAttributes_SetTargetFieldType, METH_VARARGS,
   "V.SetTargetFieldType(int)\nC++: virtual void SetTargetFieldType(int _arg)\n\nThe target field type for accessing the target array. Valid\nvalues are those from enum vtkDataObject::FieldAssociations.\n"},
  {"GetDefaultValue", PyvtkTransferAttributes_GetDefaultValue, METH_VARARGS,
   "V.GetDefaultValue() -> vtkVariant\nC++: vtkVariant GetDefaultValue()\n\nMethod to get/set the default value.\n"},
  {"SetDefaultValue", PyvtkTransferAttributes_SetDefaultValue, METH_VARARGS,
   "V.SetDefaultValue(vtkVariant)\nC++: void SetDefaultValue(vtkVariant value)\n\nMethod to get/set the default value.\n"},
  {"FillInputPortInformation", PyvtkTransferAttributes_FillInputPortInformation, METH_VARARGS,
   "V.FillInputPortInformation(int, vtkInformation) -> int\nC++: int FillInputPortInformation(int port, vtkInformation *info)\n    override;\n\nSet the input type of the algorithm to vtkGraph.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTransferAttributes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInfovisCorePython.vtkTransferAttributes", // tp_name
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
  PyvtkTransferAttributes_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTransferAttributes_StaticNew()
{
  return vtkTransferAttributes::New();
}

PyObject *PyvtkTransferAttributes_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTransferAttributes_Type, PyvtkTransferAttributes_Methods,
    "vtkTransferAttributes",
 &PyvtkTransferAttributes_StaticNew);

  PyTypeObject *pytype = &PyvtkTransferAttributes_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPassInputTypeAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTransferAttributes(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTransferAttributes_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTransferAttributes", o) != 0)
  {
    Py_DECREF(o);
  }

}

