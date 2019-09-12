// python wrapper for vtkExtractSelectionLegacy
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
#include "vtkExtractSelectionLegacy.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExtractSelectionLegacy(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkExtractSelectionLegacy_ClassNew(); }

#ifndef DECLARED_PyvtkExtractSelectionBase_ClassNew
extern "C" { PyObject *PyvtkExtractSelectionBase_ClassNew(); }
#define DECLARED_PyvtkExtractSelectionBase_ClassNew
#endif

static const char *PyvtkExtractSelectionLegacy_Doc =
  "vtkExtractSelectionLegacy - extract a subset from a vtkDataSet.\n\n"
  "Superclass: vtkExtractSelectionBase\n\n"
  "vtkExtractSelectionLegacy extracts some subset of cells and points\n"
  "from its input dataset. The dataset is given on its first input port.\n"
  "The subset is described by the contents of the vtkSelection on its\n"
  "second input port. Depending on the content of the vtkSelection, this\n"
  "will use either a vtkExtractSelectedIds, vtkExtractSelectedFrustum\n"
  "vtkExtractSelectedLocations or a vtkExtractSelectedThreshold to\n"
  "perform the extraction.\n\n"
  "This class used to be called vtkExtractSelection but it was replaced\n"
  "in VTK 8.2.  This is only provided for backwards compatibility and is\n"
  "therefore deprecated.\n\n"
  "@sa\n"
  "vtkSelection vtkExtractSelectedIds vtkExtractSelectedFrustum\n"
  "vtkExtractSelectedLocations vtkExtractSelectedThresholds\n\n";


static PyObject *
PyvtkExtractSelectionLegacy_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExtractSelectionLegacy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectionLegacy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectionLegacy *op = static_cast<vtkExtractSelectionLegacy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractSelectionLegacy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectionLegacy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExtractSelectionLegacy *tempr = vtkExtractSelectionLegacy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectionLegacy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectionLegacy *op = static_cast<vtkExtractSelectionLegacy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtractSelectionLegacy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractSelectionLegacy::NewInstance());

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
PyvtkExtractSelectionLegacy_SetShowBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectionLegacy *op = static_cast<vtkExtractSelectionLegacy *>(vp);

  int temp0;
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
      op->vtkExtractSelectionLegacy::SetShowBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectionLegacy_GetShowBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectionLegacy *op = static_cast<vtkExtractSelectionLegacy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShowBounds() :
      op->vtkExtractSelectionLegacy::GetShowBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectionLegacy_ShowBoundsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowBoundsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectionLegacy *op = static_cast<vtkExtractSelectionLegacy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowBoundsOn();
    }
    else
    {
      op->vtkExtractSelectionLegacy::ShowBoundsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectionLegacy_ShowBoundsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowBoundsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectionLegacy *op = static_cast<vtkExtractSelectionLegacy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowBoundsOff();
    }
    else
    {
      op->vtkExtractSelectionLegacy::ShowBoundsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectionLegacy_SetUseProbeForLocations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseProbeForLocations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectionLegacy *op = static_cast<vtkExtractSelectionLegacy *>(vp);

  int temp0;
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
      op->vtkExtractSelectionLegacy::SetUseProbeForLocations(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectionLegacy_GetUseProbeForLocations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseProbeForLocations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectionLegacy *op = static_cast<vtkExtractSelectionLegacy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseProbeForLocations() :
      op->vtkExtractSelectionLegacy::GetUseProbeForLocations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectionLegacy_UseProbeForLocationsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseProbeForLocationsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectionLegacy *op = static_cast<vtkExtractSelectionLegacy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseProbeForLocationsOn();
    }
    else
    {
      op->vtkExtractSelectionLegacy::UseProbeForLocationsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectionLegacy_UseProbeForLocationsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseProbeForLocationsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectionLegacy *op = static_cast<vtkExtractSelectionLegacy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseProbeForLocationsOff();
    }
    else
    {
      op->vtkExtractSelectionLegacy::UseProbeForLocationsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkExtractSelectionLegacy_Methods[] = {
  {"IsTypeOf", PyvtkExtractSelectionLegacy_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExtractSelectionLegacy_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExtractSelectionLegacy_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkExtractSelectionLegacy\nC++: static vtkExtractSelectionLegacy *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExtractSelectionLegacy_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkExtractSelectionLegacy\nC++: vtkExtractSelectionLegacy *NewInstance()\n\n"},
  {"SetShowBounds", PyvtkExtractSelectionLegacy_SetShowBounds, METH_VARARGS,
   "V.SetShowBounds(int)\nC++: virtual void SetShowBounds(vtkTypeBool _arg)\n\nWhen On, this returns an unstructured grid that outlines\nselection area. Off is the default. Applicable only to Frustum\nselection extraction.\n"},
  {"GetShowBounds", PyvtkExtractSelectionLegacy_GetShowBounds, METH_VARARGS,
   "V.GetShowBounds() -> int\nC++: virtual vtkTypeBool GetShowBounds()\n\nWhen On, this returns an unstructured grid that outlines\nselection area. Off is the default. Applicable only to Frustum\nselection extraction.\n"},
  {"ShowBoundsOn", PyvtkExtractSelectionLegacy_ShowBoundsOn, METH_VARARGS,
   "V.ShowBoundsOn()\nC++: virtual void ShowBoundsOn()\n\nWhen On, this returns an unstructured grid that outlines\nselection area. Off is the default. Applicable only to Frustum\nselection extraction.\n"},
  {"ShowBoundsOff", PyvtkExtractSelectionLegacy_ShowBoundsOff, METH_VARARGS,
   "V.ShowBoundsOff()\nC++: virtual void ShowBoundsOff()\n\nWhen On, this returns an unstructured grid that outlines\nselection area. Off is the default. Applicable only to Frustum\nselection extraction.\n"},
  {"SetUseProbeForLocations", PyvtkExtractSelectionLegacy_SetUseProbeForLocations, METH_VARARGS,
   "V.SetUseProbeForLocations(int)\nC++: virtual void SetUseProbeForLocations(vtkTypeBool _arg)\n\nWhen On, vtkProbeSelectedLocations is used for extracting\nselections of content type vtkSelection::LOCATIONS. Default is\noff and then vtkExtractSelectedLocations is used.\n"},
  {"GetUseProbeForLocations", PyvtkExtractSelectionLegacy_GetUseProbeForLocations, METH_VARARGS,
   "V.GetUseProbeForLocations() -> int\nC++: virtual vtkTypeBool GetUseProbeForLocations()\n\nWhen On, vtkProbeSelectedLocations is used for extracting\nselections of content type vtkSelection::LOCATIONS. Default is\noff and then vtkExtractSelectedLocations is used.\n"},
  {"UseProbeForLocationsOn", PyvtkExtractSelectionLegacy_UseProbeForLocationsOn, METH_VARARGS,
   "V.UseProbeForLocationsOn()\nC++: virtual void UseProbeForLocationsOn()\n\nWhen On, vtkProbeSelectedLocations is used for extracting\nselections of content type vtkSelection::LOCATIONS. Default is\noff and then vtkExtractSelectedLocations is used.\n"},
  {"UseProbeForLocationsOff", PyvtkExtractSelectionLegacy_UseProbeForLocationsOff, METH_VARARGS,
   "V.UseProbeForLocationsOff()\nC++: virtual void UseProbeForLocationsOff()\n\nWhen On, vtkProbeSelectedLocations is used for extracting\nselections of content type vtkSelection::LOCATIONS. Default is\noff and then vtkExtractSelectedLocations is used.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkExtractSelectionLegacy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersExtractionPython.vtkExtractSelectionLegacy", // tp_name
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
  PyvtkExtractSelectionLegacy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExtractSelectionLegacy_StaticNew()
{
  return vtkExtractSelectionLegacy::New();
}

PyObject *PyvtkExtractSelectionLegacy_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkExtractSelectionLegacy_Type, PyvtkExtractSelectionLegacy_Methods,
    "vtkExtractSelectionLegacy",
 &PyvtkExtractSelectionLegacy_StaticNew);

  PyTypeObject *pytype = &PyvtkExtractSelectionLegacy_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkExtractSelectionBase_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExtractSelectionLegacy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExtractSelectionLegacy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExtractSelectionLegacy", o) != 0)
  {
    Py_DECREF(o);
  }

}

