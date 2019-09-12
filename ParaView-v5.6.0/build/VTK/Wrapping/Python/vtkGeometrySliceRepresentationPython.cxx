// python wrapper for vtkGeometrySliceRepresentation
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
#include "vtkGeometrySliceRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGeometrySliceRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkGeometrySliceRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkGeometryRepresentation_ClassNew
extern "C" { PyObject *PyvtkGeometryRepresentation_ClassNew(); }
#define DECLARED_PyvtkGeometryRepresentation_ClassNew
#endif

static const char *PyvtkGeometrySliceRepresentation_Doc =
  "vtkGeometrySliceRepresentation - extends vtkGeometryRepresentation to\nadd support for showing just specific slices from the dataset.\n\n"
  "Superclass: vtkGeometryRepresentation\n\n"
  "vtkGeometrySliceRepresentation extends vtkGeometryRepresentation to\n"
  "show slices from the dataset. This is used for vtkPVMultiSliceView\n"
  "and vtkPVOrthographicSliceView.\n\n";


static PyObject *
PyvtkGeometrySliceRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGeometrySliceRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometrySliceRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometrySliceRepresentation *op = static_cast<vtkGeometrySliceRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGeometrySliceRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometrySliceRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGeometrySliceRepresentation *tempr = vtkGeometrySliceRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometrySliceRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometrySliceRepresentation *op = static_cast<vtkGeometrySliceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGeometrySliceRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGeometrySliceRepresentation::NewInstance());

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
PyvtkGeometrySliceRepresentation_ProcessViewRequest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessViewRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometrySliceRepresentation *op = static_cast<vtkGeometrySliceRepresentation *>(vp);

  vtkInformationRequestKey *temp0 = nullptr;
  vtkInformation *temp1 = nullptr;
  vtkInformation *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformationRequestKey") &&
      ap.GetVTKObject(temp1, "vtkInformation") &&
      ap.GetVTKObject(temp2, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->ProcessViewRequest(temp0, temp1, temp2) :
      op->vtkGeometrySliceRepresentation::ProcessViewRequest(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometrySliceRepresentation_SetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometrySliceRepresentation *op = static_cast<vtkGeometrySliceRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMode(temp0);
    }
    else
    {
      op->vtkGeometrySliceRepresentation::SetMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometrySliceRepresentation_GetModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometrySliceRepresentation *op = static_cast<vtkGeometrySliceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetModeMinValue() :
      op->vtkGeometrySliceRepresentation::GetModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometrySliceRepresentation_GetModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometrySliceRepresentation *op = static_cast<vtkGeometrySliceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetModeMaxValue() :
      op->vtkGeometrySliceRepresentation::GetModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometrySliceRepresentation_GetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometrySliceRepresentation *op = static_cast<vtkGeometrySliceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMode() :
      op->vtkGeometrySliceRepresentation::GetMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometrySliceRepresentation_SetShowOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometrySliceRepresentation *op = static_cast<vtkGeometrySliceRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShowOutline(temp0);
    }
    else
    {
      op->vtkGeometrySliceRepresentation::SetShowOutline(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometrySliceRepresentation_GetShowOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometrySliceRepresentation *op = static_cast<vtkGeometrySliceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetShowOutline() :
      op->vtkGeometrySliceRepresentation::GetShowOutline());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGeometrySliceRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkGeometrySliceRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGeometrySliceRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGeometrySliceRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkGeometrySliceRepresentation\nC++: static vtkGeometrySliceRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGeometrySliceRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkGeometrySliceRepresentation\nC++: vtkGeometrySliceRepresentation *NewInstance()\n\n"},
  {"ProcessViewRequest", PyvtkGeometrySliceRepresentation_ProcessViewRequest, METH_VARARGS,
   "V.ProcessViewRequest(vtkInformationRequestKey, vtkInformation,\n    vtkInformation) -> int\nC++: int ProcessViewRequest(\n    vtkInformationRequestKey *request_type,\n    vtkInformation *inInfo, vtkInformation *outInfo) override;\n\nvtkAlgorithm::ProcessRequest() equivalent for rendering passes.\nThis is typically called by the vtkView to request meta-data from\nthe representations or ask them to perform certain tasks e.g.\nPrepareForRendering.\n"},
  {"SetMode", PyvtkGeometrySliceRepresentation_SetMode, METH_VARARGS,
   "V.SetMode(int)\nC++: virtual void SetMode(int _arg)\n\n"},
  {"GetModeMinValue", PyvtkGeometrySliceRepresentation_GetModeMinValue, METH_VARARGS,
   "V.GetModeMinValue() -> int\nC++: virtual int GetModeMinValue()\n\n"},
  {"GetModeMaxValue", PyvtkGeometrySliceRepresentation_GetModeMaxValue, METH_VARARGS,
   "V.GetModeMaxValue() -> int\nC++: virtual int GetModeMaxValue()\n\n"},
  {"GetMode", PyvtkGeometrySliceRepresentation_GetMode, METH_VARARGS,
   "V.GetMode() -> int\nC++: virtual int GetMode()\n\n"},
  {"SetShowOutline", PyvtkGeometrySliceRepresentation_SetShowOutline, METH_VARARGS,
   "V.SetShowOutline(bool)\nC++: virtual void SetShowOutline(bool _arg)\n\nGet/Set whether original data outline should be shown in the\nview.\n"},
  {"GetShowOutline", PyvtkGeometrySliceRepresentation_GetShowOutline, METH_VARARGS,
   "V.GetShowOutline() -> bool\nC++: virtual bool GetShowOutline()\n\nGet/Set whether original data outline should be shown in the\nview.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkGeometrySliceRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkGeometrySliceRepresentation", // tp_name
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
  PyvtkGeometrySliceRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGeometrySliceRepresentation_StaticNew()
{
  return vtkGeometrySliceRepresentation::New();
}

PyObject *PyvtkGeometrySliceRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkGeometrySliceRepresentation_Type, PyvtkGeometrySliceRepresentation_Methods,
    "vtkGeometrySliceRepresentation",
 &PyvtkGeometrySliceRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkGeometrySliceRepresentation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkGeometryRepresentation_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "X_SLICE_ONLY", vtkGeometrySliceRepresentation::X_SLICE_ONLY },
        { "Y_SLICE_ONLY", vtkGeometrySliceRepresentation::Y_SLICE_ONLY },
        { "Z_SLICE_ONLY", vtkGeometrySliceRepresentation::Z_SLICE_ONLY },
        { "ALL_SLICES", vtkGeometrySliceRepresentation::ALL_SLICES },
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

void PyVTKAddFile_vtkGeometrySliceRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGeometrySliceRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGeometrySliceRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

