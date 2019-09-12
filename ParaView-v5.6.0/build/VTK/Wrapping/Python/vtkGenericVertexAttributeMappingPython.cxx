// python wrapper for vtkGenericVertexAttributeMapping
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
#include "vtkGenericVertexAttributeMapping.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGenericVertexAttributeMapping(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkGenericVertexAttributeMapping_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkGenericVertexAttributeMapping_Doc =
  "vtkGenericVertexAttributeMapping - stores mapping for data arrays to\ngeneric vertex attributes.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkGenericVertexAttributeMapping stores mapping between data arrays\n"
  "and generic vertex attributes. It is used by vtkPainterPolyDataMapper\n"
  "to pass the mappings to the painter which rendering the\n"
  "attributes.@par Thanks: Support for generic vertex attributes in VTK\n"
  "was contributed in collaboration with Stephane Ploix at EDF.\n\n";


static PyObject *
PyvtkGenericVertexAttributeMapping_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGenericVertexAttributeMapping::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericVertexAttributeMapping_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericVertexAttributeMapping *op = static_cast<vtkGenericVertexAttributeMapping *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGenericVertexAttributeMapping::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericVertexAttributeMapping_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGenericVertexAttributeMapping *tempr = vtkGenericVertexAttributeMapping::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericVertexAttributeMapping_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericVertexAttributeMapping *op = static_cast<vtkGenericVertexAttributeMapping *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGenericVertexAttributeMapping *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGenericVertexAttributeMapping::NewInstance());

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
PyvtkGenericVertexAttributeMapping_AddMapping_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericVertexAttributeMapping *op = static_cast<vtkGenericVertexAttributeMapping *>(vp);

  const char *temp0 = nullptr;
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
    if (ap.IsBound())
    {
      op->AddMapping(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkGenericVertexAttributeMapping::AddMapping(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGenericVertexAttributeMapping_AddMapping_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericVertexAttributeMapping *op = static_cast<vtkGenericVertexAttributeMapping *>(vp);

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
    if (ap.IsBound())
    {
      op->AddMapping(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkGenericVertexAttributeMapping::AddMapping(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkGenericVertexAttributeMapping_AddMapping_Methods[] = {
  {nullptr, PyvtkGenericVertexAttributeMapping_AddMapping_s1, METH_VARARGS,
   "@zzii"},
  {nullptr, PyvtkGenericVertexAttributeMapping_AddMapping_s2, METH_VARARGS,
   "@izii"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkGenericVertexAttributeMapping_AddMapping(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkGenericVertexAttributeMapping_AddMapping_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddMapping");
  return nullptr;
}



static PyObject *
PyvtkGenericVertexAttributeMapping_RemoveMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericVertexAttributeMapping *op = static_cast<vtkGenericVertexAttributeMapping *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->RemoveMapping(temp0) :
      op->vtkGenericVertexAttributeMapping::RemoveMapping(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericVertexAttributeMapping_RemoveAllMappings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllMappings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericVertexAttributeMapping *op = static_cast<vtkGenericVertexAttributeMapping *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllMappings();
    }
    else
    {
      op->vtkGenericVertexAttributeMapping::RemoveAllMappings();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericVertexAttributeMapping_GetNumberOfMappings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfMappings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericVertexAttributeMapping *op = static_cast<vtkGenericVertexAttributeMapping *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfMappings() :
      op->vtkGenericVertexAttributeMapping::GetNumberOfMappings());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericVertexAttributeMapping_GetAttributeName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericVertexAttributeMapping *op = static_cast<vtkGenericVertexAttributeMapping *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetAttributeName(temp0) :
      op->vtkGenericVertexAttributeMapping::GetAttributeName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericVertexAttributeMapping_GetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericVertexAttributeMapping *op = static_cast<vtkGenericVertexAttributeMapping *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetArrayName(temp0) :
      op->vtkGenericVertexAttributeMapping::GetArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericVertexAttributeMapping_GetFieldAssociation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldAssociation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericVertexAttributeMapping *op = static_cast<vtkGenericVertexAttributeMapping *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFieldAssociation(temp0) :
      op->vtkGenericVertexAttributeMapping::GetFieldAssociation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericVertexAttributeMapping_GetComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericVertexAttributeMapping *op = static_cast<vtkGenericVertexAttributeMapping *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComponent(temp0) :
      op->vtkGenericVertexAttributeMapping::GetComponent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericVertexAttributeMapping_GetTextureUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericVertexAttributeMapping *op = static_cast<vtkGenericVertexAttributeMapping *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTextureUnit(temp0) :
      op->vtkGenericVertexAttributeMapping::GetTextureUnit(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGenericVertexAttributeMapping_Methods[] = {
  {"IsTypeOf", PyvtkGenericVertexAttributeMapping_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGenericVertexAttributeMapping_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGenericVertexAttributeMapping_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkGenericVertexAttributeMapping\nC++: static vtkGenericVertexAttributeMapping *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGenericVertexAttributeMapping_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkGenericVertexAttributeMapping\nC++: vtkGenericVertexAttributeMapping *NewInstance()\n\n"},
  {"AddMapping", PyvtkGenericVertexAttributeMapping_AddMapping, METH_VARARGS,
   "V.AddMapping(string, string, int, int)\nC++: void AddMapping(const char *attributeName,\n    const char *arrayName, int fieldAssociation, int component)\nV.AddMapping(int, string, int, int)\nC++: void AddMapping(int unit, const char *arrayName,\n    int fieldAssociation, int component)\n\nSelect a data array from the point/cell data and map it to a\ngeneric vertex attribute. Note that indices change when a mapping\nis added/removed.\n"},
  {"RemoveMapping", PyvtkGenericVertexAttributeMapping_RemoveMapping, METH_VARARGS,
   "V.RemoveMapping(string) -> bool\nC++: bool RemoveMapping(const char *attributeName)\n\nRemove a vertex attribute mapping.\n"},
  {"RemoveAllMappings", PyvtkGenericVertexAttributeMapping_RemoveAllMappings, METH_VARARGS,
   "V.RemoveAllMappings()\nC++: void RemoveAllMappings()\n\nRemove all mappings.\n"},
  {"GetNumberOfMappings", PyvtkGenericVertexAttributeMapping_GetNumberOfMappings, METH_VARARGS,
   "V.GetNumberOfMappings() -> int\nC++: unsigned int GetNumberOfMappings()\n\nGet number of mappings.\n"},
  {"GetAttributeName", PyvtkGenericVertexAttributeMapping_GetAttributeName, METH_VARARGS,
   "V.GetAttributeName(int) -> string\nC++: const char *GetAttributeName(unsigned int index)\n\nGet the attribute name at the given index.\n"},
  {"GetArrayName", PyvtkGenericVertexAttributeMapping_GetArrayName, METH_VARARGS,
   "V.GetArrayName(int) -> string\nC++: const char *GetArrayName(unsigned int index)\n\nGet the array name at the given index.\n"},
  {"GetFieldAssociation", PyvtkGenericVertexAttributeMapping_GetFieldAssociation, METH_VARARGS,
   "V.GetFieldAssociation(int) -> int\nC++: int GetFieldAssociation(unsigned int index)\n\nGet the field association at the given index.\n"},
  {"GetComponent", PyvtkGenericVertexAttributeMapping_GetComponent, METH_VARARGS,
   "V.GetComponent(int) -> int\nC++: int GetComponent(unsigned int index)\n\nGet the component no. at the given index.\n"},
  {"GetTextureUnit", PyvtkGenericVertexAttributeMapping_GetTextureUnit, METH_VARARGS,
   "V.GetTextureUnit(int) -> int\nC++: int GetTextureUnit(unsigned int index)\n\nGet the component no. at the given index.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkGenericVertexAttributeMapping_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkGenericVertexAttributeMapping", // tp_name
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
  PyvtkGenericVertexAttributeMapping_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGenericVertexAttributeMapping_StaticNew()
{
  return vtkGenericVertexAttributeMapping::New();
}

PyObject *PyvtkGenericVertexAttributeMapping_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkGenericVertexAttributeMapping_Type, PyvtkGenericVertexAttributeMapping_Methods,
    "vtkGenericVertexAttributeMapping",
 &PyvtkGenericVertexAttributeMapping_StaticNew);

  PyTypeObject *pytype = &PyvtkGenericVertexAttributeMapping_Type;

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

void PyVTKAddFile_vtkGenericVertexAttributeMapping(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGenericVertexAttributeMapping_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGenericVertexAttributeMapping", o) != 0)
  {
    Py_DECREF(o);
  }

}

