// python wrapper for vtkSMTooltipSelectionPipeline
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
#include "vtkStdString.h"
#include "vtkSMTooltipSelectionPipeline.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMTooltipSelectionPipeline(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMTooltipSelectionPipeline_ClassNew(); }

#ifndef DECLARED_PyvtkSMPreselectionPipeline_ClassNew
extern "C" { PyObject *PyvtkSMPreselectionPipeline_ClassNew(); }
#define DECLARED_PyvtkSMPreselectionPipeline_ClassNew
#endif

static const char *PyvtkSMTooltipSelectionPipeline_Doc =
  "vtkSMTooltipSelectionPipeline - Point tooltip mode enables the user\nto inspect points (coordinates, data array values) by hovering the\nmouse cursor over a point.\n\n"
  "Superclass: vtkSMPreselectionPipeline\n\n"
  "This is a global object that holds the pipeline for showing the point\n"
  "tooltip mode.\n\n"
  "@sa\n"
  "vtkSMPreselectionPipeline vtkSMInteractiveSelectionPipeline\n\n";


static PyObject *
PyvtkSMTooltipSelectionPipeline_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMTooltipSelectionPipeline::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTooltipSelectionPipeline_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTooltipSelectionPipeline *op = static_cast<vtkSMTooltipSelectionPipeline *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMTooltipSelectionPipeline::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTooltipSelectionPipeline_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMTooltipSelectionPipeline *tempr = vtkSMTooltipSelectionPipeline::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTooltipSelectionPipeline_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTooltipSelectionPipeline *op = static_cast<vtkSMTooltipSelectionPipeline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMTooltipSelectionPipeline *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMTooltipSelectionPipeline::NewInstance());

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
PyvtkSMTooltipSelectionPipeline_GetInstance(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetInstance");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkSMTooltipSelectionPipeline *tempr = vtkSMTooltipSelectionPipeline::GetInstance();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTooltipSelectionPipeline_Hide(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Hide");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTooltipSelectionPipeline *op = static_cast<vtkSMTooltipSelectionPipeline *>(vp);

  vtkSMRenderViewProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMRenderViewProxy"))
  {
    if (ap.IsBound())
    {
      op->Hide(temp0);
    }
    else
    {
      op->vtkSMTooltipSelectionPipeline::Hide(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMTooltipSelectionPipeline_Show(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Show");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTooltipSelectionPipeline *op = static_cast<vtkSMTooltipSelectionPipeline *>(vp);

  vtkSMSourceProxy *temp0 = nullptr;
  vtkSMSourceProxy *temp1 = nullptr;
  vtkSMRenderViewProxy *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy") &&
      ap.GetVTKObject(temp1, "vtkSMSourceProxy") &&
      ap.GetVTKObject(temp2, "vtkSMRenderViewProxy"))
  {
    if (ap.IsBound())
    {
      op->Show(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSMTooltipSelectionPipeline::Show(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMTooltipSelectionPipeline_CanDisplayTooltip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanDisplayTooltip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTooltipSelectionPipeline *op = static_cast<vtkSMTooltipSelectionPipeline *>(vp);

  bool temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->CanDisplayTooltip(temp0) :
      op->vtkSMTooltipSelectionPipeline::CanDisplayTooltip(temp0));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTooltipSelectionPipeline_GetTooltipInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTooltipInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTooltipSelectionPipeline *op = static_cast<vtkSMTooltipSelectionPipeline *>(vp);

  int temp0;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  std::string temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    ap.Save(temp1, save1, size1);

    bool tempr = (ap.IsBound() ?
      op->GetTooltipInfo(temp0, temp1, temp2) :
      op->vtkSMTooltipSelectionPipeline::GetTooltipInfo(temp0, temp1, temp2));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMTooltipSelectionPipeline_Methods[] = {
  {"IsTypeOf", PyvtkSMTooltipSelectionPipeline_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMTooltipSelectionPipeline_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMTooltipSelectionPipeline_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMTooltipSelectionPipeline\nC++: static vtkSMTooltipSelectionPipeline *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMTooltipSelectionPipeline_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMTooltipSelectionPipeline\nC++: vtkSMTooltipSelectionPipeline *NewInstance()\n\n"},
  {"GetInstance", PyvtkSMTooltipSelectionPipeline_GetInstance, METH_VARARGS,
   "V.GetInstance() -> vtkSMTooltipSelectionPipeline\nC++: static vtkSMTooltipSelectionPipeline *GetInstance()\n\n"},
  {"Hide", PyvtkSMTooltipSelectionPipeline_Hide, METH_VARARGS,
   "V.Hide(vtkSMRenderViewProxy)\nC++: void Hide(vtkSMRenderViewProxy *view) override;\n\nRe-implemented from vtkSMPreselectionPipeline\n"},
  {"Show", PyvtkSMTooltipSelectionPipeline_Show, METH_VARARGS,
   "V.Show(vtkSMSourceProxy, vtkSMSourceProxy, vtkSMRenderViewProxy)\nC++: void Show(vtkSMSourceProxy *sourceRepresentation,\n    vtkSMSourceProxy *selection, vtkSMRenderViewProxy *view)\n    override;\n\nRe-implemented from vtkSMPreselectionPipeline\n"},
  {"CanDisplayTooltip", PyvtkSMTooltipSelectionPipeline_CanDisplayTooltip, METH_VARARGS,
   "V.CanDisplayTooltip(bool) -> bool\nC++: bool CanDisplayTooltip(bool &showTooltip)\n\nReturn true if a tooltip can be displayed according to the\ncontext, otherwise return false. The argument showTooltip is true\nif the tooltip must be shown, false if the tooltip must be\nhidden.\n"},
  {"GetTooltipInfo", PyvtkSMTooltipSelectionPipeline_GetTooltipInfo, METH_VARARGS,
   "V.GetTooltipInfo(int, [float, float], string) -> bool\nC++: bool GetTooltipInfo(int association, double tooltipPos[2],\n    std::string &tooltipText)\n\nGet information about the tooltip to be displayed. Return false\nif the method failed computing information.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMTooltipSelectionPipeline_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerDefaultPython.vtkSMTooltipSelectionPipeline", // tp_name
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
  PyvtkSMTooltipSelectionPipeline_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMTooltipSelectionPipeline_StaticNew()
{
  return vtkSMTooltipSelectionPipeline::New();
}

PyObject *PyvtkSMTooltipSelectionPipeline_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMTooltipSelectionPipeline_Type, PyvtkSMTooltipSelectionPipeline_Methods,
    "vtkSMTooltipSelectionPipeline",
 &PyvtkSMTooltipSelectionPipeline_StaticNew);

  PyTypeObject *pytype = &PyvtkSMTooltipSelectionPipeline_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMPreselectionPipeline_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMTooltipSelectionPipeline(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMTooltipSelectionPipeline_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMTooltipSelectionPipeline", o) != 0)
  {
    Py_DECREF(o);
  }

}

