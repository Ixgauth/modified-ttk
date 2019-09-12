// python wrapper for vtkAttributeDataToFieldDataFilter
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
#include "vtkAttributeDataToFieldDataFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAttributeDataToFieldDataFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAttributeDataToFieldDataFilter_ClassNew(); }

#ifndef DECLARED_PyvtkDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkAttributeDataToFieldDataFilter_Doc =
  "vtkAttributeDataToFieldDataFilter - map attribute data to field data\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkAttributeDataToFieldDataFilter is a class that maps attribute data\n"
  "into field data. Since this filter is a subclass of\n"
  "vtkDataSetAlgorithm, the output dataset (whose structure is the same\n"
  "as the input dataset), will contain the field data that is generated.\n"
  "The filter will convert point and cell attribute data to field data\n"
  "and assign it as point and cell field data, replacing any point or\n"
  "field data that was there previously. By default, the original\n"
  "non-field point and cell attribute data will be passed to the output\n"
  "of the filter, although you can shut this behavior down.\n\n"
  "@warning\n"
  "Reference counting the underlying data arrays is used to create the\n"
  "field data.  Therefore, no extra memory is utilized.\n\n"
  "@warning\n"
  "The original field data (if any) associated with the point and cell\n"
  "attribute data is placed into the generated fields along with the\n"
  "scalars, vectors, etc.\n\n"
  "@sa\n"
  "vtkFieldData vtkDataObject vtkDataSet\n"
  "vtkFieldDataToAttributeDataFilter\n\n";


static PyObject *
PyvtkAttributeDataToFieldDataFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAttributeDataToFieldDataFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeDataToFieldDataFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToFieldDataFilter *op = static_cast<vtkAttributeDataToFieldDataFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAttributeDataToFieldDataFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeDataToFieldDataFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAttributeDataToFieldDataFilter *tempr = vtkAttributeDataToFieldDataFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeDataToFieldDataFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToFieldDataFilter *op = static_cast<vtkAttributeDataToFieldDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAttributeDataToFieldDataFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAttributeDataToFieldDataFilter::NewInstance());

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
PyvtkAttributeDataToFieldDataFilter_SetPassAttributeData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassAttributeData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToFieldDataFilter *op = static_cast<vtkAttributeDataToFieldDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassAttributeData(temp0);
    }
    else
    {
      op->vtkAttributeDataToFieldDataFilter::SetPassAttributeData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeDataToFieldDataFilter_GetPassAttributeData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassAttributeData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToFieldDataFilter *op = static_cast<vtkAttributeDataToFieldDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPassAttributeData() :
      op->vtkAttributeDataToFieldDataFilter::GetPassAttributeData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeDataToFieldDataFilter_PassAttributeDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassAttributeDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToFieldDataFilter *op = static_cast<vtkAttributeDataToFieldDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassAttributeDataOn();
    }
    else
    {
      op->vtkAttributeDataToFieldDataFilter::PassAttributeDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeDataToFieldDataFilter_PassAttributeDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassAttributeDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToFieldDataFilter *op = static_cast<vtkAttributeDataToFieldDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassAttributeDataOff();
    }
    else
    {
      op->vtkAttributeDataToFieldDataFilter::PassAttributeDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAttributeDataToFieldDataFilter_Methods[] = {
  {"IsTypeOf", PyvtkAttributeDataToFieldDataFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAttributeDataToFieldDataFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAttributeDataToFieldDataFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAttributeDataToFieldDataFilter\nC++: static vtkAttributeDataToFieldDataFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAttributeDataToFieldDataFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAttributeDataToFieldDataFilter\nC++: vtkAttributeDataToFieldDataFilter *NewInstance()\n\n"},
  {"SetPassAttributeData", PyvtkAttributeDataToFieldDataFilter_SetPassAttributeData, METH_VARARGS,
   "V.SetPassAttributeData(int)\nC++: virtual void SetPassAttributeData(vtkTypeBool _arg)\n\nTurn on/off the passing of point and cell non-field attribute\ndata to the output of the filter.\n"},
  {"GetPassAttributeData", PyvtkAttributeDataToFieldDataFilter_GetPassAttributeData, METH_VARARGS,
   "V.GetPassAttributeData() -> int\nC++: virtual vtkTypeBool GetPassAttributeData()\n\nTurn on/off the passing of point and cell non-field attribute\ndata to the output of the filter.\n"},
  {"PassAttributeDataOn", PyvtkAttributeDataToFieldDataFilter_PassAttributeDataOn, METH_VARARGS,
   "V.PassAttributeDataOn()\nC++: virtual void PassAttributeDataOn()\n\nTurn on/off the passing of point and cell non-field attribute\ndata to the output of the filter.\n"},
  {"PassAttributeDataOff", PyvtkAttributeDataToFieldDataFilter_PassAttributeDataOff, METH_VARARGS,
   "V.PassAttributeDataOff()\nC++: virtual void PassAttributeDataOff()\n\nTurn on/off the passing of point and cell non-field attribute\ndata to the output of the filter.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAttributeDataToFieldDataFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkAttributeDataToFieldDataFilter", // tp_name
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
  PyvtkAttributeDataToFieldDataFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAttributeDataToFieldDataFilter_StaticNew()
{
  return vtkAttributeDataToFieldDataFilter::New();
}

PyObject *PyvtkAttributeDataToFieldDataFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAttributeDataToFieldDataFilter_Type, PyvtkAttributeDataToFieldDataFilter_Methods,
    "vtkAttributeDataToFieldDataFilter",
 &PyvtkAttributeDataToFieldDataFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkAttributeDataToFieldDataFilter_Type;

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

void PyVTKAddFile_vtkAttributeDataToFieldDataFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAttributeDataToFieldDataFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAttributeDataToFieldDataFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

