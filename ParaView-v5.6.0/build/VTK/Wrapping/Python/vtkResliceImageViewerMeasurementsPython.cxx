// python wrapper for vtkResliceImageViewerMeasurements
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
#include "vtkResliceImageViewerMeasurements.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkResliceImageViewerMeasurements(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkResliceImageViewerMeasurements_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkResliceImageViewerMeasurements_Doc =
  "vtkResliceImageViewerMeasurements - Manage measurements on a resliced\nimage\n\n"
  "Superclass: vtkObject\n\n"
  "This class manages measurements on the resliced image. It toggles the\n"
  "the visibility of the measurements based on whether the resliced\n"
  "image is the same orientation as when the measurement was initially\n"
  "placed.\n"
  "@sa\n"
  "vtkResliceCursor vtkResliceCursorWidget\n"
  "vtkResliceCursorRepresentation\n\n";


static PyObject *
PyvtkResliceImageViewerMeasurements_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkResliceImageViewerMeasurements::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceImageViewerMeasurements_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewerMeasurements *op = static_cast<vtkResliceImageViewerMeasurements *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkResliceImageViewerMeasurements::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceImageViewerMeasurements_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkResliceImageViewerMeasurements *tempr = vtkResliceImageViewerMeasurements::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceImageViewerMeasurements_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewerMeasurements *op = static_cast<vtkResliceImageViewerMeasurements *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkResliceImageViewerMeasurements *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkResliceImageViewerMeasurements::NewInstance());

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
PyvtkResliceImageViewerMeasurements_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewerMeasurements *op = static_cast<vtkResliceImageViewerMeasurements *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Render();
    }
    else
    {
      op->vtkResliceImageViewerMeasurements::Render();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceImageViewerMeasurements_AddItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewerMeasurements *op = static_cast<vtkResliceImageViewerMeasurements *>(vp);

  vtkAbstractWidget *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractWidget"))
  {
    if (ap.IsBound())
    {
      op->AddItem(temp0);
    }
    else
    {
      op->vtkResliceImageViewerMeasurements::AddItem(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceImageViewerMeasurements_RemoveItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewerMeasurements *op = static_cast<vtkResliceImageViewerMeasurements *>(vp);

  vtkAbstractWidget *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractWidget"))
  {
    if (ap.IsBound())
    {
      op->RemoveItem(temp0);
    }
    else
    {
      op->vtkResliceImageViewerMeasurements::RemoveItem(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceImageViewerMeasurements_RemoveAllItems(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllItems");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewerMeasurements *op = static_cast<vtkResliceImageViewerMeasurements *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllItems();
    }
    else
    {
      op->vtkResliceImageViewerMeasurements::RemoveAllItems();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceImageViewerMeasurements_SetProcessEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewerMeasurements *op = static_cast<vtkResliceImageViewerMeasurements *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProcessEvents(temp0);
    }
    else
    {
      op->vtkResliceImageViewerMeasurements::SetProcessEvents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceImageViewerMeasurements_GetProcessEventsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessEventsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewerMeasurements *op = static_cast<vtkResliceImageViewerMeasurements *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProcessEventsMinValue() :
      op->vtkResliceImageViewerMeasurements::GetProcessEventsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceImageViewerMeasurements_GetProcessEventsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessEventsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewerMeasurements *op = static_cast<vtkResliceImageViewerMeasurements *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProcessEventsMaxValue() :
      op->vtkResliceImageViewerMeasurements::GetProcessEventsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceImageViewerMeasurements_GetProcessEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewerMeasurements *op = static_cast<vtkResliceImageViewerMeasurements *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProcessEvents() :
      op->vtkResliceImageViewerMeasurements::GetProcessEvents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceImageViewerMeasurements_ProcessEventsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessEventsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewerMeasurements *op = static_cast<vtkResliceImageViewerMeasurements *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProcessEventsOn();
    }
    else
    {
      op->vtkResliceImageViewerMeasurements::ProcessEventsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceImageViewerMeasurements_ProcessEventsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessEventsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewerMeasurements *op = static_cast<vtkResliceImageViewerMeasurements *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProcessEventsOff();
    }
    else
    {
      op->vtkResliceImageViewerMeasurements::ProcessEventsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceImageViewerMeasurements_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewerMeasurements *op = static_cast<vtkResliceImageViewerMeasurements *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTolerance(temp0);
    }
    else
    {
      op->vtkResliceImageViewerMeasurements::SetTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceImageViewerMeasurements_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewerMeasurements *op = static_cast<vtkResliceImageViewerMeasurements *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkResliceImageViewerMeasurements::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceImageViewerMeasurements_SetResliceImageViewer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResliceImageViewer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewerMeasurements *op = static_cast<vtkResliceImageViewerMeasurements *>(vp);

  vtkResliceImageViewer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkResliceImageViewer"))
  {
    if (ap.IsBound())
    {
      op->SetResliceImageViewer(temp0);
    }
    else
    {
      op->vtkResliceImageViewerMeasurements::SetResliceImageViewer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceImageViewerMeasurements_GetResliceImageViewer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResliceImageViewer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewerMeasurements *op = static_cast<vtkResliceImageViewerMeasurements *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkResliceImageViewer *tempr = (ap.IsBound() ?
      op->GetResliceImageViewer() :
      op->vtkResliceImageViewerMeasurements::GetResliceImageViewer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceImageViewerMeasurements_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewerMeasurements *op = static_cast<vtkResliceImageViewerMeasurements *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkResliceImageViewerMeasurements::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkResliceImageViewerMeasurements_Methods[] = {
  {"IsTypeOf", PyvtkResliceImageViewerMeasurements_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard VTK methods.\n"},
  {"IsA", PyvtkResliceImageViewerMeasurements_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard VTK methods.\n"},
  {"SafeDownCast", PyvtkResliceImageViewerMeasurements_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkResliceImageViewerMeasurements\nC++: static vtkResliceImageViewerMeasurements *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard VTK methods.\n"},
  {"NewInstance", PyvtkResliceImageViewerMeasurements_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkResliceImageViewerMeasurements\nC++: vtkResliceImageViewerMeasurements *NewInstance()\n\nStandard VTK methods.\n"},
  {"Render", PyvtkResliceImageViewerMeasurements_Render, METH_VARARGS,
   "V.Render()\nC++: virtual void Render()\n\nRender the measurements.\n"},
  {"AddItem", PyvtkResliceImageViewerMeasurements_AddItem, METH_VARARGS,
   "V.AddItem(vtkAbstractWidget)\nC++: virtual void AddItem(vtkAbstractWidget *)\n\nAdd / remove a measurement widget\n"},
  {"RemoveItem", PyvtkResliceImageViewerMeasurements_RemoveItem, METH_VARARGS,
   "V.RemoveItem(vtkAbstractWidget)\nC++: virtual void RemoveItem(vtkAbstractWidget *)\n\nAdd / remove a measurement widget\n"},
  {"RemoveAllItems", PyvtkResliceImageViewerMeasurements_RemoveAllItems, METH_VARARGS,
   "V.RemoveAllItems()\nC++: virtual void RemoveAllItems()\n\nAdd / remove a measurement widget\n"},
  {"SetProcessEvents", PyvtkResliceImageViewerMeasurements_SetProcessEvents, METH_VARARGS,
   "V.SetProcessEvents(int)\nC++: virtual void SetProcessEvents(vtkTypeBool _arg)\n\nMethods to change whether the widget responds to interaction. Set\nthis to Off to disable interaction. On by default. Subclasses\nmust override SetProcessEvents() to make sure that they pass on\nthe flag to all component widgets.\n"},
  {"GetProcessEventsMinValue", PyvtkResliceImageViewerMeasurements_GetProcessEventsMinValue, METH_VARARGS,
   "V.GetProcessEventsMinValue() -> int\nC++: virtual vtkTypeBool GetProcessEventsMinValue()\n\nMethods to change whether the widget responds to interaction. Set\nthis to Off to disable interaction. On by default. Subclasses\nmust override SetProcessEvents() to make sure that they pass on\nthe flag to all component widgets.\n"},
  {"GetProcessEventsMaxValue", PyvtkResliceImageViewerMeasurements_GetProcessEventsMaxValue, METH_VARARGS,
   "V.GetProcessEventsMaxValue() -> int\nC++: virtual vtkTypeBool GetProcessEventsMaxValue()\n\nMethods to change whether the widget responds to interaction. Set\nthis to Off to disable interaction. On by default. Subclasses\nmust override SetProcessEvents() to make sure that they pass on\nthe flag to all component widgets.\n"},
  {"GetProcessEvents", PyvtkResliceImageViewerMeasurements_GetProcessEvents, METH_VARARGS,
   "V.GetProcessEvents() -> int\nC++: virtual vtkTypeBool GetProcessEvents()\n\nMethods to change whether the widget responds to interaction. Set\nthis to Off to disable interaction. On by default. Subclasses\nmust override SetProcessEvents() to make sure that they pass on\nthe flag to all component widgets.\n"},
  {"ProcessEventsOn", PyvtkResliceImageViewerMeasurements_ProcessEventsOn, METH_VARARGS,
   "V.ProcessEventsOn()\nC++: virtual void ProcessEventsOn()\n\nMethods to change whether the widget responds to interaction. Set\nthis to Off to disable interaction. On by default. Subclasses\nmust override SetProcessEvents() to make sure that they pass on\nthe flag to all component widgets.\n"},
  {"ProcessEventsOff", PyvtkResliceImageViewerMeasurements_ProcessEventsOff, METH_VARARGS,
   "V.ProcessEventsOff()\nC++: virtual void ProcessEventsOff()\n\nMethods to change whether the widget responds to interaction. Set\nthis to Off to disable interaction. On by default. Subclasses\nmust override SetProcessEvents() to make sure that they pass on\nthe flag to all component widgets.\n"},
  {"SetTolerance", PyvtkResliceImageViewerMeasurements_SetTolerance, METH_VARARGS,
   "V.SetTolerance(float)\nC++: virtual void SetTolerance(double _arg)\n\nTolerance for Point-in-Plane check\n"},
  {"GetTolerance", PyvtkResliceImageViewerMeasurements_GetTolerance, METH_VARARGS,
   "V.GetTolerance() -> float\nC++: virtual double GetTolerance()\n\nTolerance for Point-in-Plane check\n"},
  {"SetResliceImageViewer", PyvtkResliceImageViewerMeasurements_SetResliceImageViewer, METH_VARARGS,
   "V.SetResliceImageViewer(vtkResliceImageViewer)\nC++: virtual void SetResliceImageViewer(vtkResliceImageViewer *)\n\nSet the reslice image viewer. This is automatically done in the\nclass vtkResliceImageViewer\n"},
  {"GetResliceImageViewer", PyvtkResliceImageViewerMeasurements_GetResliceImageViewer, METH_VARARGS,
   "V.GetResliceImageViewer() -> vtkResliceImageViewer\nC++: virtual vtkResliceImageViewer *GetResliceImageViewer()\n\nSet the reslice image viewer. This is automatically done in the\nclass vtkResliceImageViewer\n"},
  {"Update", PyvtkResliceImageViewerMeasurements_Update, METH_VARARGS,
   "V.Update()\nC++: virtual void Update()\n\nUpdate the measurements. This is automatically called when the\nreslice cursor's axes are change.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkResliceImageViewerMeasurements_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionImagePython.vtkResliceImageViewerMeasurements", // tp_name
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
  PyvtkResliceImageViewerMeasurements_Doc, // tp_doc
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

static vtkObjectBase *PyvtkResliceImageViewerMeasurements_StaticNew()
{
  return vtkResliceImageViewerMeasurements::New();
}

PyObject *PyvtkResliceImageViewerMeasurements_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkResliceImageViewerMeasurements_Type, PyvtkResliceImageViewerMeasurements_Methods,
    "vtkResliceImageViewerMeasurements",
 &PyvtkResliceImageViewerMeasurements_StaticNew);

  PyTypeObject *pytype = &PyvtkResliceImageViewerMeasurements_Type;

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

void PyVTKAddFile_vtkResliceImageViewerMeasurements(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkResliceImageViewerMeasurements_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkResliceImageViewerMeasurements", o) != 0)
  {
    Py_DECREF(o);
  }

}

