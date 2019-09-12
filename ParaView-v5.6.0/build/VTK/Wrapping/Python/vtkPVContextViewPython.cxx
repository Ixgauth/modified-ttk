// python wrapper for vtkPVContextView
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
#include "vtkPVContextView.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVContextView(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVContextView_ClassNew(); }

#ifndef DECLARED_PyvtkPVView_ClassNew
extern "C" { PyObject *PyvtkPVView_ClassNew(); }
#define DECLARED_PyvtkPVView_ClassNew
#endif

static const char *PyvtkPVContextView_Doc =
  "vtkPVContextView - vtkPVContextView adopts vtkContextView so that it\ncan be used in ParaView configurations.\n\n"
  "Superclass: vtkPVView\n\n"
;


static PyObject *
PyvtkPVContextView_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVContextView::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVContextView_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVContextView *op = static_cast<vtkPVContextView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVContextView::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVContextView_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVContextView *tempr = vtkPVContextView::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVContextView_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVContextView *op = static_cast<vtkPVContextView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVContextView *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVContextView::NewInstance());

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
PyvtkPVContextView_StillRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StillRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVContextView *op = static_cast<vtkPVContextView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StillRender();
    }
    else
    {
      op->vtkPVContextView::StillRender();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVContextView_InteractiveRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InteractiveRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVContextView *op = static_cast<vtkPVContextView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InteractiveRender();
    }
    else
    {
      op->vtkPVContextView::InteractiveRender();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVContextView_GetContextView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContextView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVContextView *op = static_cast<vtkPVContextView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkContextView *tempr = (ap.IsBound() ?
      op->GetContextView() :
      op->vtkPVContextView::GetContextView());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVContextView_GetContextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVContextView *op = static_cast<vtkPVContextView *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    vtkAbstractContextItem *tempr = op->GetContextItem();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVContextView_GetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVContextView *op = static_cast<vtkPVContextView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetRenderWindow() :
      op->vtkPVContextView::GetRenderWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVContextView_SetupInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetupInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVContextView *op = static_cast<vtkPVContextView *>(vp);

  vtkRenderWindowInteractor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor"))
  {
    if (ap.IsBound())
    {
      op->SetupInteractor(temp0);
    }
    else
    {
      op->vtkPVContextView::SetupInteractor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVContextView_GetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVContextView *op = static_cast<vtkPVContextView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindowInteractor *tempr = (ap.IsBound() ?
      op->GetInteractor() :
      op->vtkPVContextView::GetInteractor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVContextView_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVContextView *op = static_cast<vtkPVContextView *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0);
    }
    else
    {
      op->vtkPVContextView::Initialize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVContextView_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVContextView *op = static_cast<vtkPVContextView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkPVContextView::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVContextView_SetSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVContextView *op = static_cast<vtkPVContextView *>(vp);

  vtkChartRepresentation *temp0 = nullptr;
  vtkSelection *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkChartRepresentation") &&
      ap.GetVTKObject(temp1, "vtkSelection"))
  {
    op->SetSelection(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVContextView_GetSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVContextView *op = static_cast<vtkPVContextView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSelection *tempr = (ap.IsBound() ?
      op->GetSelection() :
      op->vtkPVContextView::GetSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVContextView_Export(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Export");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVContextView *op = static_cast<vtkPVContextView *>(vp);

  vtkCSVExporter *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCSVExporter"))
  {
    bool tempr = (ap.IsBound() ?
      op->Export(temp0) :
      op->vtkPVContextView::Export(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVContextView_Methods[] = {
  {"IsTypeOf", PyvtkPVContextView_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVContextView_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVContextView_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVContextView\nC++: static vtkPVContextView *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVContextView_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVContextView\nC++: vtkPVContextView *NewInstance()\n\n"},
  {"StillRender", PyvtkPVContextView_StillRender, METH_VARARGS,
   "V.StillRender()\nC++: void StillRender() override;\n\nTriggers a high-resolution render.\n\note CallOnAllProcesses\n"},
  {"InteractiveRender", PyvtkPVContextView_InteractiveRender, METH_VARARGS,
   "V.InteractiveRender()\nC++: void InteractiveRender() override;\n\nTriggers a interactive render. Based on the settings on the view,\nthis may result in a low-resolution rendering or a simplified\ngeometry rendering.\n\note CallOnAllProcesses\n"},
  {"GetContextView", PyvtkPVContextView_GetContextView, METH_VARARGS,
   "V.GetContextView() -> vtkContextView\nC++: virtual vtkContextView *GetContextView()\n\nGet the context view.\n"},
  {"GetContextItem", PyvtkPVContextView_GetContextItem, METH_VARARGS,
   "V.GetContextItem() -> vtkAbstractContextItem\nC++: virtual vtkAbstractContextItem *GetContextItem()\n\nGet the context item.\n"},
  {"GetRenderWindow", PyvtkPVContextView_GetRenderWindow, METH_VARARGS,
   "V.GetRenderWindow() -> vtkRenderWindow\nC++: vtkRenderWindow *GetRenderWindow() override;\n\nIf this view needs a render window (not all views may use one),\nthis method can be used to get the render window associated with\nthis view on the current process. Note that this window may be\nshared with other views depending on the process on which this is\ncalled and the configuration ParaView is running under.\n"},
  {"SetupInteractor", PyvtkPVContextView_SetupInteractor, METH_VARARGS,
   "V.SetupInteractor(vtkRenderWindowInteractor)\nC++: virtual void SetupInteractor(vtkRenderWindowInteractor *)\n\nSet the interactor. Client applications must set the interactor\nto enable interactivity. Note this method will also change the\ninteractor styles set on the interactor.\n"},
  {"GetInteractor", PyvtkPVContextView_GetInteractor, METH_VARARGS,
   "V.GetInteractor() -> vtkRenderWindowInteractor\nC++: vtkRenderWindowInteractor *GetInteractor()\n\nSet the interactor. Client applications must set the interactor\nto enable interactivity. Note this method will also change the\ninteractor styles set on the interactor.\n"},
  {"Initialize", PyvtkPVContextView_Initialize, METH_VARARGS,
   "V.Initialize(int)\nC++: void Initialize(unsigned int id) override;\n\nInitialize the view with an identifier. Unless noted otherwise,\nthis method must be called before calling any other methods on\nthis class.\n\note CallOnAllProcesses\n"},
  {"Update", PyvtkPVContextView_Update, METH_VARARGS,
   "V.Update()\nC++: void Update() override;\n\nOverridden to ensure that in multi-client configurations, same\nset of representations are \"dirty\" on all processes to avoid race\nconditions.\n"},
  {"SetSelection", PyvtkPVContextView_SetSelection, METH_VARARGS,
   "V.SetSelection(vtkChartRepresentation, vtkSelection)\nC++: virtual void SetSelection(vtkChartRepresentation *repr,\n    vtkSelection *selection)\n\nRepresentations can use this method to set the selection for a\nparticular representation. Subclasses override this method to\npass on the selection to the chart using annotation link. Note\nthis is meant to pass selection for the local process alone. The\nview does not manage data movement for the selection.\n"},
  {"GetSelection", PyvtkPVContextView_GetSelection, METH_VARARGS,
   "V.GetSelection() -> vtkSelection\nC++: vtkSelection *GetSelection()\n\nGet the current selection created in the view. This will call\nthis->MapSelectionToInput() to transform the selection every time\na new selection is available. Subclasses should override\nMapSelectionToInput() to convert the selection, as appropriate.\n"},
  {"Export", PyvtkPVContextView_Export, METH_VARARGS,
   "V.Export(vtkCSVExporter) -> bool\nC++: virtual bool Export(vtkCSVExporter *exporter)\n\nExport the contents of this view using the exporter. Called\nvtkChartRepresentation::Export() on all visible representations.\nThis is expected to called only on the client side after a\nrender/update. Thus all data is expected to available on the\nlocal process.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVContextView_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkPVContextView", // tp_name
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
  PyvtkPVContextView_Doc, // tp_doc
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

PyObject *PyvtkPVContextView_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVContextView_Type, PyvtkPVContextView_Methods,
    "vtkPVContextView",
 nullptr);

  PyTypeObject *pytype = &PyvtkPVContextView_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPVView_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVContextView(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVContextView_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVContextView", o) != 0)
  {
    Py_DECREF(o);
  }

}

