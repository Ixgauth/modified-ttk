// python wrapper for vtkMoleculeRepresentation
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
#include "vtkMoleculeRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMoleculeRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMoleculeRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkPVDataRepresentation_ClassNew
extern "C" { PyObject *PyvtkPVDataRepresentation_ClassNew(); }
#define DECLARED_PyvtkPVDataRepresentation_ClassNew
#endif

static const char *PyvtkMoleculeRepresentation_Doc =
  "vtkMoleculeRepresentation - no description provided.\n\n"
  "Superclass: vtkPVDataRepresentation\n\n"
;


static PyObject *
PyvtkMoleculeRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMoleculeRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeRepresentation *op = static_cast<vtkMoleculeRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMoleculeRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMoleculeRepresentation *tempr = vtkMoleculeRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeRepresentation *op = static_cast<vtkMoleculeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMoleculeRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMoleculeRepresentation::NewInstance());

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
PyvtkMoleculeRepresentation_ProcessViewRequest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessViewRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeRepresentation *op = static_cast<vtkMoleculeRepresentation *>(vp);

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
      op->vtkMoleculeRepresentation::ProcessViewRequest(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeRepresentation_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeRepresentation *op = static_cast<vtkMoleculeRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVisibility(temp0);
    }
    else
    {
      op->vtkMoleculeRepresentation::SetVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeRepresentation_GetMoleculeRenderMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMoleculeRenderMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeRepresentation *op = static_cast<vtkMoleculeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMoleculeRenderMode() :
      op->vtkMoleculeRepresentation::GetMoleculeRenderMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeRepresentation_SetMoleculeRenderMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMoleculeRenderMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeRepresentation *op = static_cast<vtkMoleculeRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMoleculeRenderMode(temp0);
    }
    else
    {
      op->vtkMoleculeRepresentation::SetMoleculeRenderMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeRepresentation_GetUseCustomRadii(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseCustomRadii");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeRepresentation *op = static_cast<vtkMoleculeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseCustomRadii() :
      op->vtkMoleculeRepresentation::GetUseCustomRadii());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeRepresentation_SetUseCustomRadii(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseCustomRadii");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeRepresentation *op = static_cast<vtkMoleculeRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseCustomRadii(temp0);
    }
    else
    {
      op->vtkMoleculeRepresentation::SetUseCustomRadii(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeRepresentation_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeRepresentation *op = static_cast<vtkMoleculeRepresentation *>(vp);

  vtkScalarsToColors *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
  {
    if (ap.IsBound())
    {
      op->SetLookupTable(temp0);
    }
    else
    {
      op->vtkMoleculeRepresentation::SetLookupTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeRepresentation_SetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeRepresentation *op = static_cast<vtkMoleculeRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOpacity(temp0);
    }
    else
    {
      op->vtkMoleculeRepresentation::SetOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeRepresentation_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeRepresentation *op = static_cast<vtkMoleculeRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRepresentation(temp0);
    }
    else
    {
      op->vtkMoleculeRepresentation::SetRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeRepresentation_GetRenderedDataObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderedDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeRepresentation *op = static_cast<vtkMoleculeRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetRenderedDataObject(temp0) :
      op->vtkMoleculeRepresentation::GetRenderedDataObject(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeRepresentation_MarkModified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkModified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeRepresentation *op = static_cast<vtkMoleculeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MarkModified();
    }
    else
    {
      op->vtkMoleculeRepresentation::MarkModified();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMoleculeRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkMoleculeRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMoleculeRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMoleculeRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkMoleculeRepresentation\nC++: static vtkMoleculeRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMoleculeRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkMoleculeRepresentation\nC++: vtkMoleculeRepresentation *NewInstance()\n\n"},
  {"ProcessViewRequest", PyvtkMoleculeRepresentation_ProcessViewRequest, METH_VARARGS,
   "V.ProcessViewRequest(vtkInformationRequestKey, vtkInformation,\n    vtkInformation) -> int\nC++: int ProcessViewRequest(vtkInformationRequestKey *requestType,\n     vtkInformation *inputInfo, vtkInformation *outputInfo)\n    override;\n\nvtkAlgorithm::ProcessRequest() equivalent for rendering passes.\nThis is typically called by the vtkView to request meta-data from\nthe representations or ask them to perform certain tasks e.g.\nPrepareForRendering. Overridden to skip processing when\nvisibility if off.\n"},
  {"SetVisibility", PyvtkMoleculeRepresentation_SetVisibility, METH_VARARGS,
   "V.SetVisibility(bool)\nC++: void SetVisibility(bool value) override;\n\nGet/Set the visibility for this representation. When the\nvisibility of representation of false, all view passes are\nignored.\n"},
  {"GetMoleculeRenderMode", PyvtkMoleculeRepresentation_GetMoleculeRenderMode, METH_VARARGS,
   "V.GetMoleculeRenderMode() -> int\nC++: virtual int GetMoleculeRenderMode()\n\n"},
  {"SetMoleculeRenderMode", PyvtkMoleculeRepresentation_SetMoleculeRenderMode, METH_VARARGS,
   "V.SetMoleculeRenderMode(int)\nC++: void SetMoleculeRenderMode(int mode)\n\n"},
  {"GetUseCustomRadii", PyvtkMoleculeRepresentation_GetUseCustomRadii, METH_VARARGS,
   "V.GetUseCustomRadii() -> bool\nC++: virtual bool GetUseCustomRadii()\n\n"},
  {"SetUseCustomRadii", PyvtkMoleculeRepresentation_SetUseCustomRadii, METH_VARARGS,
   "V.SetUseCustomRadii(bool)\nC++: void SetUseCustomRadii(bool val)\n\n"},
  {"SetLookupTable", PyvtkMoleculeRepresentation_SetLookupTable, METH_VARARGS,
   "V.SetLookupTable(vtkScalarsToColors)\nC++: void SetLookupTable(vtkScalarsToColors *lut)\n\n"},
  {"SetOpacity", PyvtkMoleculeRepresentation_SetOpacity, METH_VARARGS,
   "V.SetOpacity(float)\nC++: virtual void SetOpacity(double val)\n\n"},
  {"SetRepresentation", PyvtkMoleculeRepresentation_SetRepresentation, METH_VARARGS,
   "V.SetRepresentation(string)\nC++: void SetRepresentation(const char *)\n\nNo-op. For compatibility with vtkPVCompositeRepresentation, which\ncalls SetRepresentation on it's subproxies.\n"},
  {"GetRenderedDataObject", PyvtkMoleculeRepresentation_GetRenderedDataObject, METH_VARARGS,
   "V.GetRenderedDataObject(int) -> vtkDataObject\nC++: vtkDataObject *GetRenderedDataObject(int port) override;\n\nReturns the data object that is rendered from the given input\nport.\n"},
  {"MarkModified", PyvtkMoleculeRepresentation_MarkModified, METH_VARARGS,
   "V.MarkModified()\nC++: void MarkModified() override;\n\nThis is one of the most important functions. In VTK pipelines,\nit's very easy for the pipeline to decide when it needs to\nre-execute. vtkAlgorithm::Update() can go up the entire pipeline\nto see if any filters MTime changed (among other things) and if\nso, it can re-execute the pipeline. However in case of\nrepresentations, the real input connection may only be present on\nthe data-server nodes. In that case the\nvtkPVDataRepresentation::RequestData() will only get called on\nthe data-server nodes. That means that representations won't be\nable to any data-delivery in RequestData(). We'd need some other\nmechanisms to synchronize data-delivery among processes. To avoid\nthat conundrum, the vtkSMRepresentationProxy calls MarkModified()\non all processes whenever any filter in the pipeline is modified.\nIn this method, the vtkPVDataRepresentation subclasses should\nensure that they mark all delivery related filters dirty in their\nRequestData to ensure they execute then next time they are\nupdated. The vtkPVDataRepresentation also uses a special\nexecutive which avoids updating the representation unless\nMarkModified() was called since the last Update(), thus acting as\na update-suppressor.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkMoleculeRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkMoleculeRepresentation", // tp_name
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
  PyvtkMoleculeRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMoleculeRepresentation_StaticNew()
{
  return vtkMoleculeRepresentation::New();
}

PyObject *PyvtkMoleculeRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkMoleculeRepresentation_Type, PyvtkMoleculeRepresentation_Methods,
    "vtkMoleculeRepresentation",
 &PyvtkMoleculeRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkMoleculeRepresentation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPVDataRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMoleculeRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMoleculeRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMoleculeRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

