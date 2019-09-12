// python wrapper for vtkExtractVectorComponents
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
#include "vtkExtractVectorComponents.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExtractVectorComponents(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkExtractVectorComponents_ClassNew(); }

#ifndef DECLARED_PyvtkDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkExtractVectorComponents_Doc =
  "vtkExtractVectorComponents - extract components of vector as separate\nscalars\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkExtractVectorComponents is a filter that extracts vector\n"
  "components as separate scalars. This is accomplished by creating\n"
  "three different outputs. Each output is the same as the input, except\n"
  "that the scalar values will be one of the three components of the\n"
  "vector. These can be found in the VxComponent, VyComponent, and\n"
  "VzComponent. Alternatively, if the ExtractToFieldData flag is set,\n"
  "the filter will put all the components in the field data. The first\n"
  "component will be the scalar and the others will be non-attribute\n"
  "arrays.\n\n"
  "@warning\n"
  "This filter is unusual in that it creates multiple outputs. If you\n"
  "use the GetOutput() method, you will be retrieving the x vector\n"
  "component.\n\n";


static PyObject *
PyvtkExtractVectorComponents_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExtractVectorComponents::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractVectorComponents_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractVectorComponents *op = static_cast<vtkExtractVectorComponents *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractVectorComponents::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractVectorComponents_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExtractVectorComponents *tempr = vtkExtractVectorComponents::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractVectorComponents_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractVectorComponents *op = static_cast<vtkExtractVectorComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtractVectorComponents *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractVectorComponents::NewInstance());

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
PyvtkExtractVectorComponents_SetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractVectorComponents *op = static_cast<vtkExtractVectorComponents *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0);
    }
    else
    {
      op->vtkExtractVectorComponents::SetInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractVectorComponents_GetVxComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVxComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractVectorComponents *op = static_cast<vtkExtractVectorComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetVxComponent() :
      op->vtkExtractVectorComponents::GetVxComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractVectorComponents_GetVyComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVyComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractVectorComponents *op = static_cast<vtkExtractVectorComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetVyComponent() :
      op->vtkExtractVectorComponents::GetVyComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractVectorComponents_GetVzComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVzComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractVectorComponents *op = static_cast<vtkExtractVectorComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetVzComponent() :
      op->vtkExtractVectorComponents::GetVzComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractVectorComponents_SetExtractToFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractToFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractVectorComponents *op = static_cast<vtkExtractVectorComponents *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExtractToFieldData(temp0);
    }
    else
    {
      op->vtkExtractVectorComponents::SetExtractToFieldData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractVectorComponents_GetExtractToFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractToFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractVectorComponents *op = static_cast<vtkExtractVectorComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtractToFieldData() :
      op->vtkExtractVectorComponents::GetExtractToFieldData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractVectorComponents_ExtractToFieldDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractToFieldDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractVectorComponents *op = static_cast<vtkExtractVectorComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExtractToFieldDataOn();
    }
    else
    {
      op->vtkExtractVectorComponents::ExtractToFieldDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractVectorComponents_ExtractToFieldDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractToFieldDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractVectorComponents *op = static_cast<vtkExtractVectorComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExtractToFieldDataOff();
    }
    else
    {
      op->vtkExtractVectorComponents::ExtractToFieldDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkExtractVectorComponents_Methods[] = {
  {"IsTypeOf", PyvtkExtractVectorComponents_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExtractVectorComponents_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExtractVectorComponents_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkExtractVectorComponents\nC++: static vtkExtractVectorComponents *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExtractVectorComponents_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkExtractVectorComponents\nC++: vtkExtractVectorComponents *NewInstance()\n\n"},
  {"SetInputData", PyvtkExtractVectorComponents_SetInputData, METH_VARARGS,
   "V.SetInputData(vtkDataSet)\nC++: virtual void SetInputData(vtkDataSet *input)\n\nSpecify the input data or filter.\n"},
  {"GetVxComponent", PyvtkExtractVectorComponents_GetVxComponent, METH_VARARGS,
   "V.GetVxComponent() -> vtkDataSet\nC++: vtkDataSet *GetVxComponent()\n\nGet the output dataset representing velocity x-component. If\noutput is nullptr then input hasn't been set, which is necessary\nfor abstract objects. (Note: this method returns the same\ninformation as the GetOutput() method with an index of 0.)\n"},
  {"GetVyComponent", PyvtkExtractVectorComponents_GetVyComponent, METH_VARARGS,
   "V.GetVyComponent() -> vtkDataSet\nC++: vtkDataSet *GetVyComponent()\n\nGet the output dataset representing velocity y-component. If\noutput is nullptr then input hasn't been set, which is necessary\nfor abstract objects. (Note: this method returns the same\ninformation as the GetOutput() method with an index of 1.) Note\nthat if ExtractToFieldData is true, this output will be empty.\n"},
  {"GetVzComponent", PyvtkExtractVectorComponents_GetVzComponent, METH_VARARGS,
   "V.GetVzComponent() -> vtkDataSet\nC++: vtkDataSet *GetVzComponent()\n\nGet the output dataset representing velocity z-component. If\noutput is nullptr then input hasn't been set, which is necessary\nfor abstract objects. (Note: this method returns the same\ninformation as the GetOutput() method with an index of 2.) Note\nthat if ExtractToFieldData is true, this output will be empty.\n"},
  {"SetExtractToFieldData", PyvtkExtractVectorComponents_SetExtractToFieldData, METH_VARARGS,
   "V.SetExtractToFieldData(int)\nC++: virtual void SetExtractToFieldData(vtkTypeBool _arg)\n\nDetermines whether the vector components will be put in separate\noutputs or in the first output's field data\n"},
  {"GetExtractToFieldData", PyvtkExtractVectorComponents_GetExtractToFieldData, METH_VARARGS,
   "V.GetExtractToFieldData() -> int\nC++: virtual vtkTypeBool GetExtractToFieldData()\n\nDetermines whether the vector components will be put in separate\noutputs or in the first output's field data\n"},
  {"ExtractToFieldDataOn", PyvtkExtractVectorComponents_ExtractToFieldDataOn, METH_VARARGS,
   "V.ExtractToFieldDataOn()\nC++: virtual void ExtractToFieldDataOn()\n\nDetermines whether the vector components will be put in separate\noutputs or in the first output's field data\n"},
  {"ExtractToFieldDataOff", PyvtkExtractVectorComponents_ExtractToFieldDataOff, METH_VARARGS,
   "V.ExtractToFieldDataOff()\nC++: virtual void ExtractToFieldDataOff()\n\nDetermines whether the vector components will be put in separate\noutputs or in the first output's field data\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkExtractVectorComponents_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersExtractionPython.vtkExtractVectorComponents", // tp_name
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
  PyvtkExtractVectorComponents_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExtractVectorComponents_StaticNew()
{
  return vtkExtractVectorComponents::New();
}

PyObject *PyvtkExtractVectorComponents_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkExtractVectorComponents_Type, PyvtkExtractVectorComponents_Methods,
    "vtkExtractVectorComponents",
 &PyvtkExtractVectorComponents_StaticNew);

  PyTypeObject *pytype = &PyvtkExtractVectorComponents_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataSetAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExtractVectorComponents(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExtractVectorComponents_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExtractVectorComponents", o) != 0)
  {
    Py_DECREF(o);
  }

}

