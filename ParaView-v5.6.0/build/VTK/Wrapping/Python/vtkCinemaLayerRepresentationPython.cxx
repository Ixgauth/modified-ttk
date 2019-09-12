// python wrapper for vtkCinemaLayerRepresentation
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
#include "vtkCinemaLayerRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCinemaLayerRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCinemaLayerRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkPVDataRepresentation_ClassNew
extern "C" { PyObject *PyvtkPVDataRepresentation_ClassNew(); }
#define DECLARED_PyvtkPVDataRepresentation_ClassNew
#endif

static const char *PyvtkCinemaLayerRepresentation_Doc =
  "vtkCinemaLayerRepresentation - Representation for\nvtkCinemaDatabaseReader.\n\n"
  "Superclass: vtkPVDataRepresentation\n\n"
  "vtkCinemaLayerRepresentation is designed for vtkCinemaDatabaseReader.\n"
  "It can process data produced by vtkCinemaDatabaseReader (which in\n"
  "reality is simply meta-data about the CinemaDatabase database and\n"
  "query) and render layers obtained from the database in a\n"
  "vtkPVRenderView.\n\n"
  "During each render, vtkCinemaLayerRepresentation generates\n"
  "appropriate query using control parameters obtained from the reader\n"
  "and camera parameters determined using the current camera. Using\n"
  "vtkCinemaDatabase, vtkCinemaLayerRepresentation then obtains the\n"
  "layers (or images) from the database corresponding to the query. The\n"
  "layers along with information about the camera used when layer was\n"
  "generated is passed on to the vtkCinemaLayerMapper which handles\n"
  "rendering the layers into the view.\n\n"
  "@warning Currently vtkCinemaLayerRepresentation is designed for\n"
  "    builtin mode\n"
  "alone. It will need some additional work to support remote rendering.\n\n";


static PyObject *
PyvtkCinemaLayerRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCinemaLayerRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCinemaLayerRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCinemaLayerRepresentation *op = static_cast<vtkCinemaLayerRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCinemaLayerRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCinemaLayerRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCinemaLayerRepresentation *tempr = vtkCinemaLayerRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCinemaLayerRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCinemaLayerRepresentation *op = static_cast<vtkCinemaLayerRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCinemaLayerRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCinemaLayerRepresentation::NewInstance());

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
PyvtkCinemaLayerRepresentation_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCinemaLayerRepresentation *op = static_cast<vtkCinemaLayerRepresentation *>(vp);

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
      op->vtkCinemaLayerRepresentation::SetVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCinemaLayerRepresentation_MarkModified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkModified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCinemaLayerRepresentation *op = static_cast<vtkCinemaLayerRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MarkModified();
    }
    else
    {
      op->vtkCinemaLayerRepresentation::MarkModified();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCinemaLayerRepresentation_ProcessViewRequest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessViewRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCinemaLayerRepresentation *op = static_cast<vtkCinemaLayerRepresentation *>(vp);

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
      op->vtkCinemaLayerRepresentation::ProcessViewRequest(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCinemaLayerRepresentation_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCinemaLayerRepresentation *op = static_cast<vtkCinemaLayerRepresentation *>(vp);

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
      op->vtkCinemaLayerRepresentation::SetLookupTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCinemaLayerRepresentation_SetRenderLayersAsImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderLayersAsImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCinemaLayerRepresentation *op = static_cast<vtkCinemaLayerRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRenderLayersAsImage(temp0);
    }
    else
    {
      op->vtkCinemaLayerRepresentation::SetRenderLayersAsImage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCinemaLayerRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkCinemaLayerRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCinemaLayerRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCinemaLayerRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCinemaLayerRepresentation\nC++: static vtkCinemaLayerRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCinemaLayerRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCinemaLayerRepresentation\nC++: vtkCinemaLayerRepresentation *NewInstance()\n\n"},
  {"SetVisibility", PyvtkCinemaLayerRepresentation_SetVisibility, METH_VARARGS,
   "V.SetVisibility(bool)\nC++: void SetVisibility(bool) override;\n\nGet/Set the visibility for this representation. When the\nvisibility of representation of false, all view passes are\nignored.\n"},
  {"MarkModified", PyvtkCinemaLayerRepresentation_MarkModified, METH_VARARGS,
   "V.MarkModified()\nC++: void MarkModified() override;\n\nThis is one of the most important functions. In VTK pipelines,\nit's very easy for the pipeline to decide when it needs to\nre-execute. vtkAlgorithm::Update() can go up the entire pipeline\nto see if any filters MTime changed (among other things) and if\nso, it can re-execute the pipeline. However in case of\nrepresentations, the real input connection may only be present on\nthe data-server nodes. In that case the\nvtkPVDataRepresentation::RequestData() will only get called on\nthe data-server nodes. That means that representations won't be\nable to any data-delivery in RequestData(). We'd need some other\nmechanisms to synchronize data-delivery among processes. To avoid\nthat conundrum, the vtkSMRepresentationProxy calls MarkModified()\non all processes whenever any filter in the pipeline is modified.\nIn this method, the vtkPVDataRepresentation subclasses should\nensure that they mark all delivery related filters dirty in their\nRequestData to ensure they execute then next time they are\nupdated. The vtkPVDataRepresentation also uses a special\nexecutive which avoids updating the representation unless\nMarkModified() was called since the last Update(), thus acting as\na update-suppressor.\n"},
  {"ProcessViewRequest", PyvtkCinemaLayerRepresentation_ProcessViewRequest, METH_VARARGS,
   "V.ProcessViewRequest(vtkInformationRequestKey, vtkInformation,\n    vtkInformation) -> int\nC++: int ProcessViewRequest(\n    vtkInformationRequestKey *request_type,\n    vtkInformation *inInfo, vtkInformation *outInfo) override;\n\nvtkAlgorithm::ProcessRequest() equivalent for rendering passes.\nThis is typically called by the vtkView to request meta-data from\nthe representations or ask them to perform certain tasks e.g.\nPrepareForRendering. Overridden to skip processing when\nvisibility if off.\n"},
  {"SetLookupTable", PyvtkCinemaLayerRepresentation_SetLookupTable, METH_VARARGS,
   "V.SetLookupTable(vtkScalarsToColors)\nC++: void SetLookupTable(vtkScalarsToColors *lut)\n\nForwarded to the mapper\n"},
  {"SetRenderLayersAsImage", PyvtkCinemaLayerRepresentation_SetRenderLayersAsImage, METH_VARARGS,
   "V.SetRenderLayersAsImage(bool)\nC++: void SetRenderLayersAsImage(bool)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCinemaLayerRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVCinemaReaderPython.vtkCinemaLayerRepresentation", // tp_name
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
  PyvtkCinemaLayerRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCinemaLayerRepresentation_StaticNew()
{
  return vtkCinemaLayerRepresentation::New();
}

PyObject *PyvtkCinemaLayerRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCinemaLayerRepresentation_Type, PyvtkCinemaLayerRepresentation_Methods,
    "vtkCinemaLayerRepresentation",
 &PyvtkCinemaLayerRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkCinemaLayerRepresentation_Type;

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

void PyVTKAddFile_vtkCinemaLayerRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCinemaLayerRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCinemaLayerRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

