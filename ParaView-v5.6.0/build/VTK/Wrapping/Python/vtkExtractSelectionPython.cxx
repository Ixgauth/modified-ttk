// python wrapper for vtkExtractSelection
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
#include "vtkExtractSelection.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExtractSelection(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkExtractSelection_ClassNew(); }

#ifndef DECLARED_PyvtkDataObjectAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataObjectAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataObjectAlgorithm_ClassNew
#endif

static const char *PyvtkExtractSelection_Doc =
  "vtkExtractSelection - extract a subset from a vtkDataSet.\n\n"
  "Superclass: vtkDataObjectAlgorithm\n\n"
  "vtkExtractSelection extracts some subset of cells and points from its\n"
  "input dataobject. The dataobject is given on its first input port.\n"
  "The subset is described by the contents of the vtkSelection on its\n"
  "second input port.  Depending on the contents of the vtkSelection\n"
  "this will create various vtkSelectors to identify the selected\n"
  "elements.\n\n"
  "This filter supports vtkCompositeDataSet (output is\n"
  "vtkMultiBlockDataSet), vtkTable and vtkDataSet (output is\n"
  "vtkUnstructuredGrid). Other types of input are not processed and the\n"
  "corresponding output is a default constructed object of the input\n"
  "type.\n\n"
  "@sa\n"
  "vtkSelection vtkSelector vtkSelectionNode\n\n";


static PyObject *
PyvtkExtractSelection_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExtractSelection::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelection *op = static_cast<vtkExtractSelection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractSelection::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExtractSelection *tempr = vtkExtractSelection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelection *op = static_cast<vtkExtractSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtractSelection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractSelection::NewInstance());

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
PyvtkExtractSelection_SetSelectionConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelection *op = static_cast<vtkExtractSelection *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetSelectionConnection(temp0);
    }
    else
    {
      op->vtkExtractSelection::SetSelectionConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelection_SetPreserveTopology(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPreserveTopology");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelection *op = static_cast<vtkExtractSelection *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPreserveTopology(temp0);
    }
    else
    {
      op->vtkExtractSelection::SetPreserveTopology(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelection_GetPreserveTopology(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreserveTopology");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelection *op = static_cast<vtkExtractSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPreserveTopology() :
      op->vtkExtractSelection::GetPreserveTopology());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelection_PreserveTopologyOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreserveTopologyOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelection *op = static_cast<vtkExtractSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PreserveTopologyOn();
    }
    else
    {
      op->vtkExtractSelection::PreserveTopologyOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelection_PreserveTopologyOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreserveTopologyOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelection *op = static_cast<vtkExtractSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PreserveTopologyOff();
    }
    else
    {
      op->vtkExtractSelection::PreserveTopologyOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkExtractSelection_SetShowBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelection *op = static_cast<vtkExtractSelection *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShowBounds(temp0);
    }
    else
    {
      op->vtkExtractSelection::SetShowBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkExtractSelection_GetShowBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelection *op = static_cast<vtkExtractSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetShowBounds() :
      op->vtkExtractSelection::GetShowBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkExtractSelection_ShowBoundsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowBoundsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelection *op = static_cast<vtkExtractSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowBoundsOn();
    }
    else
    {
      op->vtkExtractSelection::ShowBoundsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkExtractSelection_ShowBoundsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowBoundsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelection *op = static_cast<vtkExtractSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowBoundsOff();
    }
    else
    {
      op->vtkExtractSelection::ShowBoundsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkExtractSelection_SetUseProbeForLocations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseProbeForLocations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelection *op = static_cast<vtkExtractSelection *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseProbeForLocations(temp0);
    }
    else
    {
      op->vtkExtractSelection::SetUseProbeForLocations(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkExtractSelection_GetUseProbeForLocations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseProbeForLocations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelection *op = static_cast<vtkExtractSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseProbeForLocations() :
      op->vtkExtractSelection::GetUseProbeForLocations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkExtractSelection_UseProbeForLocationsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseProbeForLocationsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelection *op = static_cast<vtkExtractSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseProbeForLocationsOn();
    }
    else
    {
      op->vtkExtractSelection::UseProbeForLocationsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkExtractSelection_UseProbeForLocationsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseProbeForLocationsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelection *op = static_cast<vtkExtractSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseProbeForLocationsOff();
    }
    else
    {
      op->vtkExtractSelection::UseProbeForLocationsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}
#endif

static PyMethodDef PyvtkExtractSelection_Methods[] = {
  {"IsTypeOf", PyvtkExtractSelection_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExtractSelection_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExtractSelection_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkExtractSelection\nC++: static vtkExtractSelection *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExtractSelection_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkExtractSelection\nC++: vtkExtractSelection *NewInstance()\n\n"},
  {"SetSelectionConnection", PyvtkExtractSelection_SetSelectionConnection, METH_VARARGS,
   "V.SetSelectionConnection(vtkAlgorithmOutput)\nC++: void SetSelectionConnection(vtkAlgorithmOutput *algOutput)\n\nConvenience method to specify the selection connection (2nd input\nport)\n"},
  {"SetPreserveTopology", PyvtkExtractSelection_SetPreserveTopology, METH_VARARGS,
   "V.SetPreserveTopology(bool)\nC++: virtual void SetPreserveTopology(bool _arg)\n\nThis flag tells the extraction filter not to extract a subset of\nthe data, but instead to produce a vtkInsidedness array and add\nit to the input dataset. Default value is false(0).\n"},
  {"GetPreserveTopology", PyvtkExtractSelection_GetPreserveTopology, METH_VARARGS,
   "V.GetPreserveTopology() -> bool\nC++: virtual bool GetPreserveTopology()\n\nThis flag tells the extraction filter not to extract a subset of\nthe data, but instead to produce a vtkInsidedness array and add\nit to the input dataset. Default value is false(0).\n"},
  {"PreserveTopologyOn", PyvtkExtractSelection_PreserveTopologyOn, METH_VARARGS,
   "V.PreserveTopologyOn()\nC++: virtual void PreserveTopologyOn()\n\nThis flag tells the extraction filter not to extract a subset of\nthe data, but instead to produce a vtkInsidedness array and add\nit to the input dataset. Default value is false(0).\n"},
  {"PreserveTopologyOff", PyvtkExtractSelection_PreserveTopologyOff, METH_VARARGS,
   "V.PreserveTopologyOff()\nC++: virtual void PreserveTopologyOff()\n\nThis flag tells the extraction filter not to extract a subset of\nthe data, but instead to produce a vtkInsidedness array and add\nit to the input dataset. Default value is false(0).\n"},
#if !defined(VTK_LEGACY_REMOVE)
  {"SetShowBounds", PyvtkExtractSelection_SetShowBounds, METH_VARARGS,
   "V.SetShowBounds(bool)\nC++: void SetShowBounds(bool)\n\nThese functions is provided for compile-time compatibility with\nthe old vtkExtractSelection which is now renamed to\nvtkExtractSelectionLegacy and deprecated. These functions do not\nhave any effect on the behavior or vtkExtractSelection.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {"GetShowBounds", PyvtkExtractSelection_GetShowBounds, METH_VARARGS,
   "V.GetShowBounds() -> bool\nC++: bool GetShowBounds()\n\nThese functions is provided for compile-time compatibility with\nthe old vtkExtractSelection which is now renamed to\nvtkExtractSelectionLegacy and deprecated. These functions do not\nhave any effect on the behavior or vtkExtractSelection.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {"ShowBoundsOn", PyvtkExtractSelection_ShowBoundsOn, METH_VARARGS,
   "V.ShowBoundsOn()\nC++: void ShowBoundsOn()\n\nThese functions is provided for compile-time compatibility with\nthe old vtkExtractSelection which is now renamed to\nvtkExtractSelectionLegacy and deprecated. These functions do not\nhave any effect on the behavior or vtkExtractSelection.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {"ShowBoundsOff", PyvtkExtractSelection_ShowBoundsOff, METH_VARARGS,
   "V.ShowBoundsOff()\nC++: void ShowBoundsOff()\n\nThese functions is provided for compile-time compatibility with\nthe old vtkExtractSelection which is now renamed to\nvtkExtractSelectionLegacy and deprecated. These functions do not\nhave any effect on the behavior or vtkExtractSelection.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {"SetUseProbeForLocations", PyvtkExtractSelection_SetUseProbeForLocations, METH_VARARGS,
   "V.SetUseProbeForLocations(bool)\nC++: void SetUseProbeForLocations(bool)\n\nThese functions is provided for compile-time compatibility with\nthe old vtkExtractSelection which is now renamed to\nvtkExtractSelectionLegacy and deprecated. These functions do not\nhave any effect on the behavior or vtkExtractSelection.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {"GetUseProbeForLocations", PyvtkExtractSelection_GetUseProbeForLocations, METH_VARARGS,
   "V.GetUseProbeForLocations() -> bool\nC++: bool GetUseProbeForLocations()\n\nThese functions is provided for compile-time compatibility with\nthe old vtkExtractSelection which is now renamed to\nvtkExtractSelectionLegacy and deprecated. These functions do not\nhave any effect on the behavior or vtkExtractSelection.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {"UseProbeForLocationsOn", PyvtkExtractSelection_UseProbeForLocationsOn, METH_VARARGS,
   "V.UseProbeForLocationsOn()\nC++: void UseProbeForLocationsOn()\n\nThese functions is provided for compile-time compatibility with\nthe old vtkExtractSelection which is now renamed to\nvtkExtractSelectionLegacy and deprecated. These functions do not\nhave any effect on the behavior or vtkExtractSelection.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {"UseProbeForLocationsOff", PyvtkExtractSelection_UseProbeForLocationsOff, METH_VARARGS,
   "V.UseProbeForLocationsOff()\nC++: void UseProbeForLocationsOff()\n\nThese functions is provided for compile-time compatibility with\nthe old vtkExtractSelection which is now renamed to\nvtkExtractSelectionLegacy and deprecated. These functions do not\nhave any effect on the behavior or vtkExtractSelection.\n"},
#endif
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkExtractSelection_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersExtractionPython.vtkExtractSelection", // tp_name
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
  PyvtkExtractSelection_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExtractSelection_StaticNew()
{
  return vtkExtractSelection::New();
}

PyObject *PyvtkExtractSelection_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkExtractSelection_Type, PyvtkExtractSelection_Methods,
    "vtkExtractSelection",
 &PyvtkExtractSelection_StaticNew);

  PyTypeObject *pytype = &PyvtkExtractSelection_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataObjectAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExtractSelection(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExtractSelection_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExtractSelection", o) != 0)
  {
    Py_DECREF(o);
  }

}

