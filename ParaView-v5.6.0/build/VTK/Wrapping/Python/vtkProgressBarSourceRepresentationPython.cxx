// python wrapper for vtkProgressBarSourceRepresentation
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
#include "vtkProgressBarSourceRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkProgressBarSourceRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkProgressBarSourceRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkPVDataRepresentation_ClassNew
extern "C" { PyObject *PyvtkPVDataRepresentation_ClassNew(); }
#define DECLARED_PyvtkPVDataRepresentation_ClassNew
#endif

static const char *PyvtkProgressBarSourceRepresentation_Doc =
  "vtkProgressBarSourceRepresentation -\nvtkProgressBarSourceRepresentation is a representation to show\nProgressBar.\n\n"
  "Superclass: vtkPVDataRepresentation\n\n"
  "The input is expected to a vtkTable with a single row and column\n"
  "(atleast on the data server nodes). The content of this entry in the\n"
  "table is shown as ProgressBar on the rendering nodes.\n\n";


static PyObject *
PyvtkProgressBarSourceRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkProgressBarSourceRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgressBarSourceRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarSourceRepresentation *op = static_cast<vtkProgressBarSourceRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkProgressBarSourceRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgressBarSourceRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkProgressBarSourceRepresentation *tempr = vtkProgressBarSourceRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgressBarSourceRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarSourceRepresentation *op = static_cast<vtkProgressBarSourceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProgressBarSourceRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkProgressBarSourceRepresentation::NewInstance());

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
PyvtkProgressBarSourceRepresentation_SetProgressBarWidgetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProgressBarWidgetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarSourceRepresentation *op = static_cast<vtkProgressBarSourceRepresentation *>(vp);

  vtk3DWidgetRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtk3DWidgetRepresentation"))
  {
    if (ap.IsBound())
    {
      op->SetProgressBarWidgetRepresentation(temp0);
    }
    else
    {
      op->vtkProgressBarSourceRepresentation::SetProgressBarWidgetRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProgressBarSourceRepresentation_GetProgressBarWidgetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProgressBarWidgetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarSourceRepresentation *op = static_cast<vtkProgressBarSourceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtk3DWidgetRepresentation *tempr = (ap.IsBound() ?
      op->GetProgressBarWidgetRepresentation() :
      op->vtkProgressBarSourceRepresentation::GetProgressBarWidgetRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgressBarSourceRepresentation_MarkModified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkModified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarSourceRepresentation *op = static_cast<vtkProgressBarSourceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MarkModified();
    }
    else
    {
      op->vtkProgressBarSourceRepresentation::MarkModified();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProgressBarSourceRepresentation_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarSourceRepresentation *op = static_cast<vtkProgressBarSourceRepresentation *>(vp);

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
      op->vtkProgressBarSourceRepresentation::SetVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProgressBarSourceRepresentation_SetInteractivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarSourceRepresentation *op = static_cast<vtkProgressBarSourceRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInteractivity(temp0);
    }
    else
    {
      op->vtkProgressBarSourceRepresentation::SetInteractivity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProgressBarSourceRepresentation_ProcessViewRequest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessViewRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarSourceRepresentation *op = static_cast<vtkProgressBarSourceRepresentation *>(vp);

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
      op->vtkProgressBarSourceRepresentation::ProcessViewRequest(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkProgressBarSourceRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkProgressBarSourceRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkProgressBarSourceRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkProgressBarSourceRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkProgressBarSourceRepresentation\nC++: static vtkProgressBarSourceRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkProgressBarSourceRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkProgressBarSourceRepresentation\nC++: vtkProgressBarSourceRepresentation *NewInstance()\n\n"},
  {"SetProgressBarWidgetRepresentation", PyvtkProgressBarSourceRepresentation_SetProgressBarWidgetRepresentation, METH_VARARGS,
   "V.SetProgressBarWidgetRepresentation(vtk3DWidgetRepresentation)\nC++: void SetProgressBarWidgetRepresentation(\n    vtk3DWidgetRepresentation *widget)\n\nSet the ProgressBar widget.\n"},
  {"GetProgressBarWidgetRepresentation", PyvtkProgressBarSourceRepresentation_GetProgressBarWidgetRepresentation, METH_VARARGS,
   "V.GetProgressBarWidgetRepresentation()\n    -> vtk3DWidgetRepresentation\nC++: virtual vtk3DWidgetRepresentation *GetProgressBarWidgetRepresentation(\n    )\n\nSet the ProgressBar widget.\n"},
  {"MarkModified", PyvtkProgressBarSourceRepresentation_MarkModified, METH_VARARGS,
   "V.MarkModified()\nC++: void MarkModified() override;\n\nThis is one of the most important functions. In VTK pipelines,\nit's very easy for the pipeline to decide when it needs to\nre-execute. vtkAlgorithm::Update() can go up the entire pipeline\nto see if any filters MTime changed (among other things) and if\nso, it can re-execute the pipeline. However in case of\nrepresentations, the real input connection may only be present on\nthe data-server nodes. In that case the\nvtkPVDataRepresentation::RequestData() will only get called on\nthe data-server nodes. That means that representations won't be\nable to any data-delivery in RequestData(). We'd need some other\nmechanisms to synchronize data-delivery among processes. To avoid\nthat conundrum, the vtkSMRepresentationProxy calls MarkModified()\non all processes whenever any filter in the pipeline is modified.\nIn this method, the vtkPVDataRepresentation subclasses should\nensure that they mark all delivery related filters dirty in their\nRequestData to ensure they execute then next time they are\nupdated. The vtkPVDataRepresentation also uses a special\nexecutive which avoids updating the representation unless\nMarkModified() was called since the last Update(), thus acting as\na update-suppressor.\n"},
  {"SetVisibility", PyvtkProgressBarSourceRepresentation_SetVisibility, METH_VARARGS,
   "V.SetVisibility(bool)\nC++: void SetVisibility(bool) override;\n\nSet the visibility.\n"},
  {"SetInteractivity", PyvtkProgressBarSourceRepresentation_SetInteractivity, METH_VARARGS,
   "V.SetInteractivity(bool)\nC++: void SetInteractivity(bool)\n\nSet the interactivity.\n"},
  {"ProcessViewRequest", PyvtkProgressBarSourceRepresentation_ProcessViewRequest, METH_VARARGS,
   "V.ProcessViewRequest(vtkInformationRequestKey, vtkInformation,\n    vtkInformation) -> int\nC++: int ProcessViewRequest(\n    vtkInformationRequestKey *request_type,\n    vtkInformation *inInfo, vtkInformation *outInfo) override;\n\nvtkAlgorithm::ProcessRequest() equivalent for rendering passes.\nThis is typically called by the vtkView to request meta-data from\nthe representations or ask them to perform certain tasks e.g.\nPrepareForRendering.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkProgressBarSourceRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkProgressBarSourceRepresentation", // tp_name
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
  PyvtkProgressBarSourceRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkProgressBarSourceRepresentation_StaticNew()
{
  return vtkProgressBarSourceRepresentation::New();
}

PyObject *PyvtkProgressBarSourceRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkProgressBarSourceRepresentation_Type, PyvtkProgressBarSourceRepresentation_Methods,
    "vtkProgressBarSourceRepresentation",
 &PyvtkProgressBarSourceRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkProgressBarSourceRepresentation_Type;

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

void PyVTKAddFile_vtkProgressBarSourceRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkProgressBarSourceRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkProgressBarSourceRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

