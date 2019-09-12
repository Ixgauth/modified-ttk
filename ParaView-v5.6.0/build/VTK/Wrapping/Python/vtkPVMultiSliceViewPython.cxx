// python wrapper for vtkPVMultiSliceView
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
#include "vtkClientServerStream.h"
#include "vtkPVMultiSliceView.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVMultiSliceView(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVMultiSliceView_ClassNew(); }

#ifndef DECLARED_PyvtkPVRenderView_ClassNew
extern "C" { PyObject *PyvtkPVRenderView_ClassNew(); }
#define DECLARED_PyvtkPVRenderView_ClassNew
#endif

static const char *PyvtkPVMultiSliceView_Doc =
  "vtkPVMultiSliceView - vtkPVMultiSliceView extends vtkPVRenderView but\nadd meta-data information used by SliceRepresentation as a data model.\n\n"
  "Superclass: vtkPVRenderView\n\n"
;


static PyObject *
PyvtkPVMultiSliceView_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVMultiSliceView::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVMultiSliceView_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMultiSliceView *op = static_cast<vtkPVMultiSliceView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVMultiSliceView::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVMultiSliceView_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVMultiSliceView *tempr = vtkPVMultiSliceView::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVMultiSliceView_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMultiSliceView *op = static_cast<vtkPVMultiSliceView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVMultiSliceView *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVMultiSliceView::NewInstance());

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
PyvtkPVMultiSliceView_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMultiSliceView *op = static_cast<vtkPVMultiSliceView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkPVMultiSliceView::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVMultiSliceView_SetNumberOfXSlices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfXSlices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMultiSliceView *op = static_cast<vtkPVMultiSliceView *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfXSlices(temp0);
    }
    else
    {
      op->vtkPVMultiSliceView::SetNumberOfXSlices(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVMultiSliceView_SetXSlices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXSlices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMultiSliceView *op = static_cast<vtkPVMultiSliceView *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetXSlices(temp0);
    }
    else
    {
      op->vtkPVMultiSliceView::SetXSlices(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVMultiSliceView_SetNumberOfYSlices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfYSlices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMultiSliceView *op = static_cast<vtkPVMultiSliceView *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfYSlices(temp0);
    }
    else
    {
      op->vtkPVMultiSliceView::SetNumberOfYSlices(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVMultiSliceView_SetYSlices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYSlices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMultiSliceView *op = static_cast<vtkPVMultiSliceView *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetYSlices(temp0);
    }
    else
    {
      op->vtkPVMultiSliceView::SetYSlices(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVMultiSliceView_SetNumberOfZSlices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfZSlices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMultiSliceView *op = static_cast<vtkPVMultiSliceView *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfZSlices(temp0);
    }
    else
    {
      op->vtkPVMultiSliceView::SetNumberOfZSlices(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVMultiSliceView_SetZSlices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZSlices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMultiSliceView *op = static_cast<vtkPVMultiSliceView *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetZSlices(temp0);
    }
    else
    {
      op->vtkPVMultiSliceView::SetZSlices(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVMultiSliceView_GetDataBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMultiSliceView *op = static_cast<vtkPVMultiSliceView *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetDataBounds(temp0);
    }
    else
    {
      op->vtkPVMultiSliceView::GetDataBounds(temp0);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVMultiSliceView_GetXAxisLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMultiSliceView *op = static_cast<vtkPVMultiSliceView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetXAxisLabel() :
      op->vtkPVMultiSliceView::GetXAxisLabel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVMultiSliceView_GetYAxisLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMultiSliceView *op = static_cast<vtkPVMultiSliceView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetYAxisLabel() :
      op->vtkPVMultiSliceView::GetYAxisLabel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVMultiSliceView_GetZAxisLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxisLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMultiSliceView *op = static_cast<vtkPVMultiSliceView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetZAxisLabel() :
      op->vtkPVMultiSliceView::GetZAxisLabel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVMultiSliceView_GetAxisLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMultiSliceView *op = static_cast<vtkPVMultiSliceView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkClientServerStream *tempr = (ap.IsBound() ?
      &op->GetAxisLabels() :
      &op->vtkPVMultiSliceView::GetAxisLabels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkClientServerStream");
    }
  }

  return result;
}


static PyObject *
PyvtkPVMultiSliceView_SetAxisTitle(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetAxisTitle");

  vtkInformation *temp0 = nullptr;
  int temp1;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkPVMultiSliceView::SetAxisTitle(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVMultiSliceView_SetDataBounds(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetDataBounds");

  vtkInformation *temp0 = nullptr;
  const size_t size1 = 6;
  double temp1[6];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetArray(temp1, size1))
  {
    vtkPVMultiSliceView::SetDataBounds(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVMultiSliceView_SetModelTransformationMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelTransformationMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMultiSliceView *op = static_cast<vtkPVMultiSliceView *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->SetModelTransformationMatrix(temp0);
    }
    else
    {
      op->vtkPVMultiSliceView::SetModelTransformationMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVMultiSliceView_Methods[] = {
  {"IsTypeOf", PyvtkPVMultiSliceView_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVMultiSliceView_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVMultiSliceView_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVMultiSliceView\nC++: static vtkPVMultiSliceView *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVMultiSliceView_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVMultiSliceView\nC++: vtkPVMultiSliceView *NewInstance()\n\n"},
  {"Update", PyvtkPVMultiSliceView_Update, METH_VARARGS,
   "V.Update()\nC++: void Update() override;\n\nOverridden to synchronize information among processes whenever\ndata changes. The vtkSMViewProxy ensures that this method is\ncalled only when something has changed on the view-proxy or one\nof its representations or their inputs. Hence it's okay to do\nsome extra inter-process communication here.\n"},
  {"SetNumberOfXSlices", PyvtkPVMultiSliceView_SetNumberOfXSlices, METH_VARARGS,
   "V.SetNumberOfXSlices(int)\nC++: void SetNumberOfXSlices(unsigned int count)\n\n"},
  {"SetXSlices", PyvtkPVMultiSliceView_SetXSlices, METH_VARARGS,
   "V.SetXSlices((float, ...))\nC++: void SetXSlices(const double *values)\n\n"},
  {"SetNumberOfYSlices", PyvtkPVMultiSliceView_SetNumberOfYSlices, METH_VARARGS,
   "V.SetNumberOfYSlices(int)\nC++: void SetNumberOfYSlices(unsigned int count)\n\n"},
  {"SetYSlices", PyvtkPVMultiSliceView_SetYSlices, METH_VARARGS,
   "V.SetYSlices((float, ...))\nC++: void SetYSlices(const double *values)\n\n"},
  {"SetNumberOfZSlices", PyvtkPVMultiSliceView_SetNumberOfZSlices, METH_VARARGS,
   "V.SetNumberOfZSlices(int)\nC++: void SetNumberOfZSlices(unsigned int count)\n\n"},
  {"SetZSlices", PyvtkPVMultiSliceView_SetZSlices, METH_VARARGS,
   "V.SetZSlices((float, ...))\nC++: void SetZSlices(const double *values)\n\n"},
  {"GetDataBounds", PyvtkPVMultiSliceView_GetDataBounds, METH_VARARGS,
   "V.GetDataBounds([float, float, float, float, float, float])\nC++: void GetDataBounds(double bounds[6])\n\n"},
  {"GetXAxisLabel", PyvtkPVMultiSliceView_GetXAxisLabel, METH_VARARGS,
   "V.GetXAxisLabel() -> string\nC++: const char *GetXAxisLabel()\n\n"},
  {"GetYAxisLabel", PyvtkPVMultiSliceView_GetYAxisLabel, METH_VARARGS,
   "V.GetYAxisLabel() -> string\nC++: const char *GetYAxisLabel()\n\n"},
  {"GetZAxisLabel", PyvtkPVMultiSliceView_GetZAxisLabel, METH_VARARGS,
   "V.GetZAxisLabel() -> string\nC++: const char *GetZAxisLabel()\n\n"},
  {"GetAxisLabels", PyvtkPVMultiSliceView_GetAxisLabels, METH_VARARGS,
   "V.GetAxisLabels() -> vtkClientServerStream\nC++: const vtkClientServerStream &GetAxisLabels()\n\n"},
  {"SetAxisTitle", PyvtkPVMultiSliceView_SetAxisTitle, METH_VARARGS,
   "V.SetAxisTitle(vtkInformation, int, string)\nC++: static void SetAxisTitle(vtkInformation *info, int axis,\n    const char *title)\n\n"},
  {"SetDataBounds", PyvtkPVMultiSliceView_SetDataBounds, METH_VARARGS,
   "V.SetDataBounds(vtkInformation, (float, float, float, float,\n    float, float))\nC++: static void SetDataBounds(vtkInformation *info,\n    const double bounds[6])\n\n"},
  {"SetModelTransformationMatrix", PyvtkPVMultiSliceView_SetModelTransformationMatrix, METH_VARARGS,
   "V.SetModelTransformationMatrix(vtkMatrix4x4)\nC++: void SetModelTransformationMatrix(vtkMatrix4x4 *)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVMultiSliceView_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkPVMultiSliceView", // tp_name
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
  PyvtkPVMultiSliceView_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVMultiSliceView_StaticNew()
{
  return vtkPVMultiSliceView::New();
}

PyObject *PyvtkPVMultiSliceView_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVMultiSliceView_Type, PyvtkPVMultiSliceView_Methods,
    "vtkPVMultiSliceView",
 &PyvtkPVMultiSliceView_StaticNew);

  PyTypeObject *pytype = &PyvtkPVMultiSliceView_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPVRenderView_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVMultiSliceView(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVMultiSliceView_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVMultiSliceView", o) != 0)
  {
    Py_DECREF(o);
  }

}

